/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$LoadScene
ENTRY_POINT: 01477c30
PROGRAM: Lovesick-libil2cpp.so
SCORE: 170
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUK__LoadScene(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x24;
  
  lVar3 = thunk_FUN_00d62348();
  puVar2 = StringLiteral_4249;
  if (lVar3 != 0) {
    FUN_01320e50(lVar3,*(undefined8 *)StringLiteral_4249);
    *(long *)(unaff_x19 + 0x50) = lVar3;
    lVar3 = thunk_FUN_00d62348(*unaff_x24);
    puVar1 = Method_UnityEngine_EventSystems_ExecuteEvents_Execute<ISubmitHandler>__;
    if (lVar3 != 0) {
      FUN_01320e50(lVar3,*(undefined8 *)puVar2);
      *(long *)(unaff_x19 + 0x58) = lVar3;
      FUN_017b46ec();
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar3 != 0) {
        FUN_01fc3894();
        *(long *)(unaff_x19 + 0x68) = lVar3;
        if (unaff_x21 == 0) {
          unaff_x21 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_10079);
          if (unaff_x21 == 0) goto LAB_01477d74;
          FUN_01298da0(unaff_x21,*(undefined8 *)Sirenix_Utilities_DeepReflection_var);
        }
        *(long *)(unaff_x19 + 0x20) = unaff_x21;
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                                  );
        if (lVar3 != 0) {
          FUN_01320e50(lVar3,*(undefined8 *)
                              System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo);
          FUN_00ac1158(lVar3);
          *(long *)(unaff_x19 + 0x60) = lVar3;
          if ((*(long *)(unaff_x19 + 0x68) != 0) &&
             (lVar3 = FUN_01fc72ec(*(long *)(unaff_x19 + 0x68),0), lVar3 != 0)) {
            uVar4 = FUN_015fe250(lVar3,*(undefined8 *)
                                        Method_Meta_WitAi_Requests_VRequest_<Dispose>b__101_0__,0);
            if (((uVar4 & 1) == 0) &&
               (uVar4 = FUN_015fe250(lVar3,*(undefined8 *)
                                            Method_System_Collections_Generic_List<VisualElement>__ctor__
                                     ,0), (uVar4 & 1) == 0)) {
              uVar5 = thunk_FUN_00d48444(
                                        Method_UnityEngine_InputSystem_InputControl<__Il2CppFullySharedGenericStructType>_ReadValueFromState__
                                        );
              uVar5 = FUN_015f5b28(uVar5,lVar3,0);
              thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
              uVar6 = thunk_FUN_00d62348();
              FUN_00ac2be8();
              FUN_016f2f28(uVar6,uVar5,0);
              uVar5 = thunk_FUN_00d48444(StringLiteral_4222);
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar6,uVar5);
            }
            return;
          }
        }
      }
    }
  }
LAB_01477d74:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


