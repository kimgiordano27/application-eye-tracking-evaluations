/*
FUNCTION_NAME: FUN_076d254c
ENTRY_POINT: 076d254c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_076d254c(undefined4 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_c8 [152];
  
  if ((DAT_0827147a & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d95b20);
    FUN_0373b518(Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__);
    FUN_0373b518(Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__);
    FUN_0373b518(Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__);
    FUN_0373b518(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_MoveItemImmediately__
                );
    DAT_0827147a = 1;
  }
  if ((*param_2 != 0) &&
     (plVar3 = (long *)thunk_FUN_0374b7cc(*param_2,0),
     puVar2 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__,
     puVar1 = PTR_DAT_07d95b20, plVar3 != (long *)0x0)) {
    uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    memcpy(auStack_c8,param_2 + 1,0x98);
    uVar5 = thunk_FUN_037784fc(*(undefined8 *)puVar1,auStack_c8);
    uVar4 = FUN_060c1fd4(*(undefined8 *)puVar2,uVar4,uVar5,0);
    switch(param_1) {
    case 0:
    case 1:
    case 5:
    case 6:
      uVar5 = thunk_FUN_037a15ac(PTR_DAT_07d96298);
      uVar4 = System_Convert__ToInt32(uVar4,uVar5,0);
      thunk_FUN_037a15ac(PTR_DAT_07d8e248);
      uVar5 = thunk_FUN_037788cc();
      FUN_06242c7c(uVar5,uVar4,0);
      uVar4 = thunk_FUN_037a15ac(
                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar5,uVar4);
    case 2:
      puVar6 = (undefined8 *)
               Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_MoveItemImmediately__
      ;
      break;
    case 3:
      puVar6 = (undefined8 *)
               Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__;
      break;
    case 4:
      puVar6 = (undefined8 *)Method_UnityEngine_UIElements_BaseField<Vector4>_get_visualInput__;
      break;
    default:
      thunk_FUN_037a15ac(PTR_DAT_07d8eed0);
      uVar4 = thunk_FUN_037788cc();
      FUN_061a9988(uVar4,0);
      uVar5 = thunk_FUN_037a15ac(
                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGrabTransformer>_get_flushedCount__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar4,uVar5);
    }
    System_Convert__ToInt32(uVar4,*puVar6,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


