/*
FUNCTION_NAME: Meta.XR.Experimental.ShaderPrewarmer.ShaderPrewarmer$$SetupValidShaderKeywordCombinations
ENTRY_POINT: 0319bb64
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_Experimental_ShaderPrewarmer_ShaderPrewarmer__SetupValidShaderKeywordCombinations(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  
  if (in_w8 == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f71cc0;
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  uVar3 = FUN_06937c40(*(undefined8 *)puVar1,**(undefined8 **)(lVar2 + 0xb8),0);
  if ((uVar3 & 1) != 0) {
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


