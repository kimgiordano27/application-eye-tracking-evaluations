/*
FUNCTION_NAME: OVRPlugin$$get_nativeSDKVersion
ENTRY_POINT: 01f78004
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__get_nativeSDKVersion(void)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_w8;
  uint in_w9;
  ushort *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint *unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long unaff_x22;
  
  if ((int)in_w8 < (int)unaff_w20) {
    puVar4 = (ushort *)(unaff_x22 + (long)(int)in_w8 * 2);
    lVar5 = (long)(int)unaff_w20 - (long)(int)in_w8;
    uVar6 = 0;
    do {
      if (unaff_w20 <= in_w8) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      uVar1 = *puVar4;
      uVar7 = uVar1 - 0x30;
      if (9 < uVar7) {
        uVar7 = (uint)uVar1;
        if (uVar1 - 0x41 < 0x1a) {
          uVar7 = uVar7 - 0x37;
        }
        else {
          if (0x19 < uVar7 - 0x61) {
            return uVar6;
          }
          uVar7 = uVar7 - 0x57;
        }
      }
      if (unaff_w21 <= (int)uVar7) {
        return uVar6;
      }
      if (in_w9 < uVar6) {
        thunk_FUN_01279b34(PTR_DAT_027b3eb8);
        uVar2 = thunk_FUN_0124bba8();
        uVar3 = thunk_FUN_01279b34(PTR_DAT_027ba958);
        FUN_01f65e90(uVar2,uVar3);
        uVar3 = thunk_FUN_01279b34(PTR_DAT_027c1028);
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar2,uVar3);
      }
      uVar7 = uVar7 + uVar6 * unaff_w21;
      if (uVar7 < uVar6) {
        FUN_01f781dc();
        thunk_FUN_01279b34(PTR_DAT_027b3eb8);
        uVar2 = thunk_FUN_0124bba8();
        uVar3 = thunk_FUN_01279b34(PTR_DAT_027ba968);
        FUN_01f65e90(uVar2,uVar3);
        uVar3 = thunk_FUN_01279b34(PTR_DAT_027c1030);
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar2,uVar3);
      }
      in_w8 = in_w8 + 1;
      lVar5 = lVar5 + -1;
      puVar4 = puVar4 + 1;
      *unaff_x19 = in_w8;
      uVar6 = uVar7;
    } while (lVar5 != 0);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}


