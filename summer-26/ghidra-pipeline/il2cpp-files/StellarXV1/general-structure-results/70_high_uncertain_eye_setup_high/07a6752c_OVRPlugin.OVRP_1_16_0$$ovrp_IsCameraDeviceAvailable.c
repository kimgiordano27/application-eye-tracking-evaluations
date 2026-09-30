/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_IsCameraDeviceAvailable
ENTRY_POINT: 07a6752c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_IsCameraDeviceAvailable(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  int iVar5;
  undefined8 unaff_x20;
  int iVar6;
  ulong unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  float unaff_w28;
  float fVar7;
  undefined8 in_stack_00000008;
  
  while (puVar1 = PTR_DAT_09285978, *(long *)(param_1 + 0x18) != 0) {
    if ((long)*(int *)(*(long *)(param_1 + 0x18) + 0x18) <= (long)unaff_x22) {
      FUN_07a64d34();
      uVar3 = FUN_074e4b3c(unaff_x20,*(undefined8 *)puVar1,0);
      if ((uVar3 & 1) != 0) {
        FUN_07a64d4c(unaff_x20);
      }
      return;
    }
    in_stack_00000008 = *unaff_x23;
    uVar2 = FUN_076b01b4(&stack0x00000008,0);
    uVar2 = FUN_074d875c(unaff_x20,uVar2,0);
    uVar2 = FUN_074d875c(uVar2,*unaff_x24,0);
    if ((*(long *)(unaff_x19 + 0x30) == 0) ||
       (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x18), lVar4 == 0)) break;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    fVar7 = *(float *)(lVar4 + unaff_x22 * 4 + 0x20) * unaff_w28;
    if ((fVar7 != INFINITY) && (iVar5 = (int)fVar7, 0 < iVar5)) {
      iVar6 = 0;
      do {
        uVar2 = FUN_074d875c(uVar2,*unaff_x25,0);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
    unaff_x20 = FUN_074d875c(uVar2,*unaff_x26,0);
    param_1 = *(long *)(unaff_x19 + 0x30);
    unaff_x22 = unaff_x22 + 1;
    if (param_1 == 0) break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


