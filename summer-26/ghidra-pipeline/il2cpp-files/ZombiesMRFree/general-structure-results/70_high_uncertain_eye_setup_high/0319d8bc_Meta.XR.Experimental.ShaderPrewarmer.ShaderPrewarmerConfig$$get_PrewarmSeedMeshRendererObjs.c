/*
FUNCTION_NAME: Meta.XR.Experimental.ShaderPrewarmer.ShaderPrewarmerConfig$$get_PrewarmSeedMeshRendererObjs
ENTRY_POINT: 0319d8bc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Experimental_ShaderPrewarmer_ShaderPrewarmerConfig__get_PrewarmSeedMeshRendererObjs
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  long unaff_x22;
  uint unaff_w23;
  long lVar3;
  undefined4 uVar4;
  
  while (((lVar3 = *(long *)(unaff_x22 + (long)(int)unaff_w23 * 8 + 0x20), lVar3 != 0 &&
          (*(long *)(param_1 + 0x48) != 0)) &&
         (lVar1 = FUN_03153e34(*(long *)(param_1 + 0x48),*(undefined4 *)(lVar3 + 0x10),0),
         lVar1 != 0))) {
    lVar2 = *(long *)(lVar1 + 0x10);
    lVar1 = FUN_068f5d7c();
    if ((lVar2 == 0) || (FUN_069042b4(lVar2,0), lVar1 == 0)) break;
    uVar4 = FUN_06905ba4(lVar1,0);
    *(undefined4 *)(lVar3 + 0x18) = uVar4;
    *(undefined4 *)(lVar3 + 0x1c) = param_3;
    *(undefined4 *)(lVar3 + 0x20) = param_4;
    if (*(int *)(lVar3 + 0x10) == 0) {
      if (((*(long *)(unaff_x19 + 0x28) == 0) ||
          (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x48), lVar3 == 0)) ||
         (lVar3 = FUN_03153e2c(lVar3,0), lVar3 == 0)) break;
      *(undefined1 *)(lVar3 + 0x51) = 0;
    }
    unaff_w23 = unaff_w23 + 1;
    if ((int)*(uint *)(unaff_x22 + 0x18) <= (int)unaff_w23) {
      return;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    param_1 = *(long *)(unaff_x19 + 0x28);
    if (param_1 == 0) break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


