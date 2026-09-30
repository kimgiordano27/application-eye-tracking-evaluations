/*
FUNCTION_NAME: Meta.XR.Experimental.ShaderPrewarmer.ShaderPrewarmerConfig$$SetupValidShaderKeywordCombinations
ENTRY_POINT: 0319bb7c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_Experimental_ShaderPrewarmer_ShaderPrewarmerConfig__SetupValidShaderKeywordCombinations
               (ulong param_1,long param_2)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0xcc0);
  if ((param_1 & 1) == 0) {
    param_2 = FUN_02feb2c4();
  }
  uVar1 = FUN_06937c40(*puVar2,**(undefined8 **)(param_2 + 0xb8),0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_031778ac(*(long *)(unaff_x19 + 0x20),6,*(undefined8 *)(unaff_x19 + 0x30),1,0);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        FUN_031778ac(*(long *)(unaff_x19 + 0x28),6,*(undefined8 *)(unaff_x19 + 0x30),1,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  return;
}


