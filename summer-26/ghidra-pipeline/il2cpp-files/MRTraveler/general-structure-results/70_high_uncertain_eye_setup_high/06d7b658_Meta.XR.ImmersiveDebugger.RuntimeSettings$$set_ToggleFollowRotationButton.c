/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$set_ToggleFollowRotationButton
ENTRY_POINT: 06d7b658
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ToggleFollowRotationButton
               (undefined8 param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  int in_w8;
  long lVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  float fVar3;
  undefined4 uVar4;
  
  if (in_w8 == 0) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    uVar1 = **(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
    fVar3 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8) + 1);
LAB_06d7b6d8:
    *unaff_x22 = uVar1;
    *(float *)(unaff_x22 + 1) = fVar3;
    if ((unaff_x23 & 1) != 0) {
      if (DAT_0940fff5 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff5 = '\x01';
      }
      uVar4 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8) + 1);
      *unaff_x22 = **(undefined8 **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
      *(undefined4 *)(unaff_x22 + 1) = uVar4;
    }
    uVar1 = FUN_07454b34(param_2,param_3,0);
    *unaff_x19 = uVar1;
    thunk_FUN_03d233cc();
    return;
  }
  lVar2 = *(long *)(param_2 + 0x148);
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar2 = *(long *)(lVar2 + (long)(int)param_3 * 8 + 0x20);
    if (lVar2 != 0) {
      uVar1 = CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x20) >> 0x20) -
                       (float)((ulong)*(undefined8 *)(lVar2 + 0x14) >> 0x20),
                       (float)*(undefined8 *)(lVar2 + 0x20) - (float)*(undefined8 *)(lVar2 + 0x14));
      fVar3 = *(float *)(lVar2 + 0x28) - *(float *)(lVar2 + 0x1c);
      goto LAB_06d7b6d8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


