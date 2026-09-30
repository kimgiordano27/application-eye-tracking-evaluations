/*
FUNCTION_NAME: FUN_05beecec
ENTRY_POINT: 05beecec
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_4;strong_file_logging_hits_2
*/


long FUN_05beecec(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_07397c17 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb3240);
    DAT_07397c17 = 1;
  }
  lVar2 = FUN_05bedd9c(param_1);
  if (lVar2 != 0) {
    lVar2 = FUN_061bf080(lVar2,0);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_05bedd9c(param_1);
      puVar1 = PTR_DAT_06fb3240;
      if (lVar2 == 0)
      goto Oculus_Interaction_Surfaces_PhysicsLayerSurface__get_CloseCollidersCacheSize;
      uVar3 = FUN_061bf080(lVar2,0);
      lVar2 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
      FUN_05b32c00(lVar2,0);
      *(undefined8 *)(lVar2 + 0x10) = uVar3;
      thunk_FUN_03048534((undefined8 *)(lVar2 + 0x10),uVar3);
    }
    return lVar2;
  }
Oculus_Interaction_Surfaces_PhysicsLayerSurface__get_CloseCollidersCacheSize:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


