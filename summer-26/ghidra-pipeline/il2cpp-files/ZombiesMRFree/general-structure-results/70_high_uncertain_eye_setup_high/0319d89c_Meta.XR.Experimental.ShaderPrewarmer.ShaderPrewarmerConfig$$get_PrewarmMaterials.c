/*
FUNCTION_NAME: Meta.XR.Experimental.ShaderPrewarmer.ShaderPrewarmerConfig$$get_PrewarmMaterials
ENTRY_POINT: 0319d89c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Experimental_ShaderPrewarmer_ShaderPrewarmerConfig__get_PrewarmMaterials
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  long unaff_x22;
  uint uVar4;
  long lVar5;
  undefined4 uVar6;
  
  uVar1 = *(uint *)(unaff_x22 + 0x18);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    do {
      if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      if ((((*(long *)(unaff_x19 + 0x28) == 0) ||
           (lVar5 = *(long *)(unaff_x22 + (long)(int)uVar4 * 8 + 0x20), lVar5 == 0)) ||
          (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x48), lVar2 == 0)) ||
         (lVar2 = FUN_03153e34(lVar2,*(undefined4 *)(lVar5 + 0x10),0), lVar2 == 0)) {
LAB_0319d970:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      lVar3 = *(long *)(lVar2 + 0x10);
      lVar2 = FUN_068f5d7c();
      if ((lVar3 == 0) || (FUN_069042b4(lVar3,0), lVar2 == 0)) goto LAB_0319d970;
      uVar6 = FUN_06905ba4(lVar2,0);
      *(undefined4 *)(lVar5 + 0x18) = uVar6;
      *(undefined4 *)(lVar5 + 0x1c) = param_2;
      *(undefined4 *)(lVar5 + 0x20) = param_3;
      if (*(int *)(lVar5 + 0x10) == 0) {
        if (((*(long *)(unaff_x19 + 0x28) == 0) ||
            (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x48), lVar5 == 0)) ||
           (lVar5 = FUN_03153e2c(lVar5,0), lVar5 == 0)) goto LAB_0319d970;
        *(undefined1 *)(lVar5 + 0x51) = 0;
      }
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)uVar1);
  }
  return;
}


