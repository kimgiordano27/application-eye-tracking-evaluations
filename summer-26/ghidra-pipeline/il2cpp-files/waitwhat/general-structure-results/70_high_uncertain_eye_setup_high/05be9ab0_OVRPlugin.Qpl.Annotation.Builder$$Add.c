/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 05be9ab0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Add(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long unaff_x22;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 uStack000000000000002c;
  
  puVar2 = PTR_DAT_07113448;
  if ((*(byte *)(unaff_x22 + 0xd42) & 1) == 0) {
    FUN_03188a78(PTR_DAT_07113448);
    *(undefined1 *)(unaff_x22 + 0xd42) = 1;
  }
  uVar1 = *param_2;
  uStack000000000000002c = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar3 = FUN_05be97b0(uVar1);
  lVar4 = *(long *)(param_1 + 0x140);
  if (lVar4 != 0) {
    if (uVar3 < *(uint *)(lVar4 + 0x18)) {
      lVar4 = lVar4 + (long)(int)uVar3 * 0x10;
      *(undefined4 *)(lVar4 + 0x20) = unaff_s11;
      *(undefined4 *)(lVar4 + 0x24) = unaff_s10;
      *(undefined4 *)(lVar4 + 0x28) = unaff_s9;
      *(undefined4 *)(lVar4 + 0x2c) = unaff_s8;
      lVar4 = *(long *)(param_1 + 0xd0);
      if (lVar4 == 0) goto LAB_05be9b74;
      if (uVar3 < *(uint *)(lVar4 + 0x18)) {
        *(undefined4 *)(lVar4 + (long)(int)uVar3 * 4 + 0x20) = 0x3f800000;
        uStack000000000000002c = 2;
        FUN_05be9b7c(param_1,uVar3,&stack0x0000002c,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
LAB_05be9b74:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


