/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.BuildingBlocks.VisualizeEnvRaycast$$Update
ENTRY_POINT: 0775b30c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_BuildingBlocks_VisualizeEnvRaycast__Update(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  
  if ((DAT_0a52328e & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f30d70);
    FUN_04447ba8(PTR_DAT_09f30d78);
    DAT_0a52328e = 1;
  }
  puVar1 = PTR_DAT_09f30d78;
  lVar2 = *(long *)(param_1 + 0x98);
  if (lVar2 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(lVar2 + 0x18) <= iVar4) {
        return;
      }
      lVar2 = FUN_05badb74(lVar2,iVar4,*(undefined8 *)puVar1);
      if ((lVar2 == 0) || (plVar3 = *(long **)(lVar2 + 0x10), plVar3 == (long *)0x0)) break;
      (**(code **)(*plVar3 + 0x7e8))(plVar3,*(undefined8 *)(*plVar3 + 0x7f0));
      lVar2 = *(long *)(param_1 + 0x98);
      iVar4 = iVar4 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


