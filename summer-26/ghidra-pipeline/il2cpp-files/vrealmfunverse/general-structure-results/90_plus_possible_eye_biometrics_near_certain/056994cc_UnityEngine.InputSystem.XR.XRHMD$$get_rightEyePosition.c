/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$get_rightEyePosition
ENTRY_POINT: 056994cc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 141
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_gaze_interaction_hits_1;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_XRHMD__get_rightEyePosition(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  long *plVar3;
  
  lVar1 = thunk_FUN_02b79644();
  FUN_05699cb0();
  plVar3 = (long *)(unaff_x20 + 0x38);
  *plVar3 = lVar1;
  thunk_FUN_02bb0e9c(plVar3,lVar1);
  plVar3 = (long *)*plVar3;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar2 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  lVar1 = thunk_FUN_02b79644(*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<MRUKAnchor,_GameObject>__ctor__
                            );
  FUN_05686e84(lVar1,10);
  plVar3 = (long *)(unaff_x20 + 0x30);
  *plVar3 = lVar1;
  thunk_FUN_02bb0e9c(plVar3,lVar1);
  lVar1 = *plVar3;
  uVar2 = FUN_04d06fa4(0);
  uVar2 = FUN_04d7a068(unaff_x20 + 0x20,uVar2,0);
  if (lVar1 != 0) {
    FUN_056858b4(lVar1,*(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<Item,_HierarchyItemButton>__ctor__
                 ,uVar2);
    if (*plVar3 != 0) {
      FUN_056858b4(*plVar3,*(undefined8 *)
                            Method_System_Collections_Generic_Dictionary_Enumerator<UnityPlayerAccountSettings_SupportedScopesEnum,_string>_Dispose__
                   ,*(undefined8 *)
                     Method_UnityEngine_UIElements_BaseCompositeField_FieldDescription<Vector2Int,_IntegerField,_int>__ctor__
                  );
      *(undefined8 *)(unaff_x20 + 0x40) = unaff_x19;
      thunk_FUN_02bb0e9c((undefined8 *)(unaff_x20 + 0x40));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


