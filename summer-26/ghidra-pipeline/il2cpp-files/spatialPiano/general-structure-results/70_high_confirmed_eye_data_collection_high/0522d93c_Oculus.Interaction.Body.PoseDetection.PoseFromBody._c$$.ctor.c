/*
FUNCTION_NAME: Oculus.Interaction.Body.PoseDetection.PoseFromBody.<>c$$.ctor
ENTRY_POINT: 0522d93c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;active_gaze_retrieval;active_gaze_collection;possible_biometrics
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_3;source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_collection_or_telemetry_sink;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_3
*/


long Oculus_Interaction_Body_PoseDetection_PoseFromBody_<>c___ctor
               (undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    uVar5 = FUN_051b2e70(param_1,param_2);
    if ((uVar5 & 1) == 0) {
LAB_0522da24:
      FUN_02a7da48();
      (**(code **)(*unaff_x19 + 0x238))();
      thunk_FUN_02f6ef30(System_Comparison<XmlReflectionMember>_TypeInfo);
      uVar7 = FUN_0510aa48();
      uVar8 = thunk_FUN_02f6ef30(System_Nullable<XRManagementAnalytics_BuildEvent>_TypeInfo);
      FUN_04f65260(uVar8,uVar7,0);
      uVar7 = FUN_0515d378();
      uVar8 = thunk_FUN_02f6ef30(Unity_AppUI_UI_NumericalField<double>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar7,uVar8);
    }
    if (unaff_x21 == 0) {
      unaff_x21 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d7688);
      FUN_0492c420(unaff_x21,*(undefined8 *)PTR_DAT_067d7680);
    }
    plVar6 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar6 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    uVar8 = FUN_04f6f6b4(unaff_x23,*(undefined8 *)PTR_DAT_067ce970,unaff_x22,0);
    if (unaff_x21 == 0) {
LAB_0522dab0:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_0492cd38(unaff_x21,uVar8,uVar7,*unaff_x28);
    while( true ) {
      uVar5 = (**(code **)(*unaff_x19 + 0x288))();
      if ((uVar5 & 1) == 0) {
        return unaff_x21;
      }
      iVar2 = (**(code **)(*unaff_x19 + 0x238))();
      if (iVar2 != 4) {
        if (iVar2 == 5) {
          return unaff_x21;
        }
        if (iVar2 == 0xd) {
          return unaff_x21;
        }
        goto LAB_0522da24;
      }
      plVar6 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      if (plVar6 == (long *)0x0) goto LAB_0522dab0;
      lVar3 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      uVar5 = FUN_051b9374(lVar3,0);
      if ((uVar5 & 1) != 0) {
        return unaff_x21;
      }
      if (lVar3 == 0) goto LAB_0522dab0;
      sVar1 = FUN_04f69818(lVar3,0,0);
      if (sVar1 == 0x24) break;
      if (sVar1 != 0x40) {
        return unaff_x21;
      }
      if (unaff_x21 == 0) {
        unaff_x21 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d7688);
        FUN_0492c420(unaff_x21,*(undefined8 *)PTR_DAT_067d7680);
      }
      uVar7 = FUN_04f73508(lVar3,1,0);
      FUN_05163f1c();
      if (*(int *)(*(long *)
                    UnityEngine_Pool_CollectionPool<Dictionary<int,_List<int>>,_KeyValuePair<int,_List<int>>>_TypeInfo
                  + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar8 = FUN_0522c120();
      if (unaff_x21 == 0) goto LAB_0522dab0;
      uVar8 = FUN_0492cd38(unaff_x21,uVar7,uVar8,*unaff_x28);
      uVar5 = FUN_0522e98c(uVar8,uVar7,&stack0x00000028);
      if ((uVar5 & 1) != 0) {
        if (unaff_x20 == (long *)0x0) goto LAB_0522dab0;
        (**(code **)(*unaff_x20 + 0x1f8))();
      }
    }
    uVar5 = thunk_FUN_04f6d944(lVar3,*unaff_x25,0);
    if (((((uVar5 & 1) == 0) &&
         (uVar5 = thunk_FUN_04f6d944(lVar3,*(undefined8 *)
                                            System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo
                                     ,0), (uVar5 & 1) == 0)) &&
        (uVar5 = thunk_FUN_04f6d944(lVar3,*(undefined8 *)
                                           System_Collections_Generic_ICollection<ParameterInfo>_TypeInfo
                                    ,0), (uVar5 & 1) == 0)) &&
       ((uVar5 = thunk_FUN_04f6d944(lVar3,*(undefined8 *)
                                           UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ClimbProvider>_TypeInfo
                                    ,0), (uVar5 & 1) == 0 &&
        (uVar5 = thunk_FUN_04f6d944(lVar3,*(undefined8 *)
                                           UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TypeInfo
                                    ,0), (uVar5 & 1) == 0)))) {
      return unaff_x21;
    }
    if (unaff_x20 == (long *)0x0) goto LAB_0522dab0;
    unaff_x23 = (**(code **)(*unaff_x20 + 0x248))();
    if (unaff_x23 == 0) {
      if (unaff_x21 == 0) {
        unaff_x21 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d7688);
        FUN_0492c420(unaff_x21,*(undefined8 *)PTR_DAT_067d7680);
      }
      in_stack_00000020 = 0;
      while( true ) {
        in_stack_00000018 = in_stack_00000020;
        uVar7 = FUN_03e1ba94(&stack0x00000018,*unaff_x29);
        FUN_04f65260(*unaff_x27,uVar7,0);
        lVar4 = (**(code **)(*unaff_x20 + 0x238))();
        if (lVar4 == 0) break;
        FUN_03e1b994(&stack0x00000020,in_stack_00000020._4_4_ + 1,*unaff_x26);
      }
      in_stack_00000018 = in_stack_00000020;
      uVar7 = FUN_03e1ba94(&stack0x00000018,*unaff_x29);
      unaff_x23 = FUN_04f65260(*unaff_x27,uVar7,0);
      uVar7 = FUN_04f65260(*(undefined8 *)System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo,
                           unaff_x23,0);
      if (unaff_x21 == 0) goto LAB_0522dab0;
      FUN_0492cd38(unaff_x21,uVar7,
                   *(undefined8 *)Oculus_Interaction_MAction<TeleportInteractable>_TypeInfo,
                   *unaff_x28);
      (**(code **)(*unaff_x20 + 0x1f8))();
    }
    uVar5 = thunk_FUN_04f6d944(lVar3,*unaff_x25,0);
    if ((uVar5 & 1) != 0) {
      return unaff_x21;
    }
    unaff_x22 = FUN_04f73508(lVar3,1,0);
    FUN_05163f1c();
    param_1 = (**(code **)(*unaff_x19 + 0x238))();
    param_2 = 0;
  } while( true );
}


