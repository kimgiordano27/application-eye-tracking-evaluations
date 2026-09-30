/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__710_57
ENTRY_POINT: 0281f57c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_<>c__<_cctor>b__710_57(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long unaff_x19;
  int *unaff_x20;
  uint *unaff_x21;
  int unaff_w22;
  long *unaff_x24;
  
  *unaff_x21 = *(int *)(param_1 + 0x30) + unaff_w22;
  uVar4 = FUN_0281f14c();
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(unaff_x19 + 0x18) = 0;
    lVar5 = 0;
    uVar8 = *unaff_x21 + 1;
    *unaff_x21 = uVar8;
    if (*(int *)(unaff_x19 + 0x30) <= (int)uVar8) {
      return 0;
    }
    lVar7 = *(long *)(unaff_x19 + 0x28);
    if (lVar7 == 0) {
LAB_0281f698:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c(lVar5);
    }
    uVar2 = *(uint *)(lVar7 + 0x18);
    uVar6 = 0xffffffff;
    do {
      if (uVar2 <= uVar8) goto LAB_0281f694;
      uVar8 = (uint)*(ushort *)(lVar7 + (long)(int)uVar8 * 2 + 0x20);
      if (9 < uVar8 - 0x30) {
        if (uVar6 == 0xffffffff) {
          return 0;
        }
        goto LAB_0281f62c;
      }
      *(uint *)(unaff_x19 + 0x18) = uVar8 + *(int *)(unaff_x19 + 0x18) * 10 + -0x30;
      uVar1 = uVar6 + 1;
      uVar6 = uVar6 + 1;
      uVar8 = *unaff_x21 + 1;
      *unaff_x21 = uVar8;
    } while ((uVar1 < 6) && ((int)uVar8 < *(int *)(unaff_x19 + 0x30)));
    if (uVar6 < 6) {
LAB_0281f62c:
      lVar5 = *unaff_x24;
      iVar3 = *(int *)(unaff_x19 + 0x18);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *unaff_x24;
      }
      lVar7 = **(long **)(lVar5 + 0xb8);
      if (lVar7 == 0) goto LAB_0281f698;
      lVar5 = 7 - (long)(int)(uVar6 + 1);
      if (*(uint *)(lVar7 + 0x18) <= (uint)lVar5) {
LAB_0281f694:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      *(int *)(unaff_x19 + 0x18) = *(int *)(lVar7 + lVar5 * 4 + 0x20) * iVar3;
    }
    if ((*unaff_x20 == 0x18) && (*(int *)(unaff_x19 + 0x18) != 0)) {
      return 0;
    }
  }
  return 1;
}


