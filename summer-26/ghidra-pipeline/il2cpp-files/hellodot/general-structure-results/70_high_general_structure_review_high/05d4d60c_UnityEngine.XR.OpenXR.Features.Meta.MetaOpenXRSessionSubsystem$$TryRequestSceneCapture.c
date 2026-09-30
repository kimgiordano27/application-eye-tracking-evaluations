/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Meta.MetaOpenXRSessionSubsystem$$TryRequestSceneCapture
ENTRY_POINT: 05d4d60c
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;telemetry
EVIDENCE: weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_4
*/


int UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem__TryRequestSceneCapture
              (undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 uStack000000000000000c;
  
  puVar1 = PTR_DAT_065c97b0;
  if ((DAT_06a7a992 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c97b0);
    DAT_06a7a992 = 1;
  }
  iVar2 = UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility__GetBestPlacementPosition
                    (*param_1,0);
  iVar3 = UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility__GetBestPlacementPosition
                    (param_1[1],0);
  iVar4 = UnityEngine_XR_Interaction_Toolkit_AR_GestureTransformationUtility__GetBestPlacementPosition
                    (param_1[2],0);
  uStack000000000000000c = *(undefined1 *)(param_1 + 4);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c(*(long *)puVar1);
  }
  iVar5 = FUN_04ea1818(&stack0x0000000c,0);
  uStack000000000000000c = *(undefined1 *)((long)param_1 + 0x21);
  iVar6 = FUN_04ea1818(&stack0x0000000c,0);
  uStack000000000000000c = *(undefined1 *)((long)param_1 + 0x22);
  iVar7 = FUN_04ea1818(&stack0x0000000c,0);
  uStack000000000000000c = *(undefined1 *)((long)param_1 + 0x23);
  iVar8 = FUN_04ea1818(&stack0x0000000c,0);
  uStack000000000000000c = *(undefined1 *)((long)param_1 + 0x24);
  iVar9 = FUN_04ea1818(&stack0x0000000c,0);
  return iVar9 + (iVar8 + (iVar7 + (iVar6 + (iVar5 + (iVar4 + (iVar3 + iVar2 * 0x1cfaa2db) *
                                                              0x1cfaa2db) * 0x1cfaa2db) * 0x1cfaa2db
                                   ) * 0x1cfaa2db) * 0x1cfaa2db) * 0x1cfaa2db;
}


