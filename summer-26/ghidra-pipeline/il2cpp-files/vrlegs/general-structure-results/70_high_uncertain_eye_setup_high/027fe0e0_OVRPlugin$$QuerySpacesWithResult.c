/*
FUNCTION_NAME: OVRPlugin$$QuerySpacesWithResult
ENTRY_POINT: 027fe0e0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__QuerySpacesWithResult(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ushort *puVar5;
  int iVar6;
  int unaff_w19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar7;
  long *unaff_x23;
  int iVar8;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    param_1 = *unaff_x23;
  }
  if (unaff_x21 != 0) {
    if (unaff_w20 < *(uint *)(unaff_x21 + 0x18)) {
      iVar8 = **(int **)(param_1 + 0xb8) + unaff_w19;
      iVar8 = ((uint)*(ushort *)(unaff_x21 + (long)(int)unaff_w20 * 2 + 0x20) ^ iVar8 * 0x80) +
              iVar8;
      if ((int)(unaff_w20 + 1) < (int)(unaff_w19 + unaff_w20)) {
        iVar6 = unaff_w19 + -1;
        puVar5 = (ushort *)(unaff_x21 + (long)(int)(unaff_w20 + 1) * 2 + 0x20);
        do {
          if (~unaff_w20 + *(uint *)(unaff_x21 + 0x18) <= unaff_w19 - 2U) goto LAB_027fe210;
          iVar6 = iVar6 + -1;
          iVar8 = ((uint)*puVar5 ^ iVar8 << 7) + iVar8;
          puVar5 = puVar5 + 1;
        } while (iVar6 != 0);
      }
      uVar1 = *(uint *)(unaff_x22 + 0x20);
      thunk_FUN_01a4b338();
      lVar4 = *(long *)(unaff_x22 + 0x18);
      if (lVar4 == 0) goto LAB_027fe214;
      iVar8 = iVar8 - (iVar8 >> 0x11);
      iVar8 = iVar8 - (iVar8 >> 0xb);
      uVar2 = iVar8 - (iVar8 >> 5);
      uVar1 = uVar1 & uVar2;
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
        do {
          if (lVar4 == 0) {
            return 0;
          }
          if (*(uint *)(lVar4 + 0x18) == uVar2) {
            uVar7 = *(undefined8 *)(lVar4 + 0x10);
            if (*(int *)(*unaff_x23 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar3 = FUN_027fe218(uVar7);
            if ((uVar3 & 1) != 0) {
              return *(undefined8 *)(lVar4 + 0x10);
            }
          }
          lVar4 = *(long *)(lVar4 + 0x20);
        } while( true );
      }
    }
LAB_027fe210:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
LAB_027fe214:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


