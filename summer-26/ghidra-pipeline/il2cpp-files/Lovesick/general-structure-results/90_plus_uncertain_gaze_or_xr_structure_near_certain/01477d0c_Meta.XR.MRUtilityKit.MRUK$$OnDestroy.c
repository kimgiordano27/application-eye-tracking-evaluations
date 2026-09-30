/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$OnDestroy
ENTRY_POINT: 01477d0c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 149
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUK__OnDestroy(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 unaff_x21;
  
  FUN_00ac1158();
  *(undefined8 *)(unaff_x19 + 0x60) = unaff_x21;
  if ((*(long *)(unaff_x19 + 0x68) == 0) ||
     (lVar1 = FUN_01fc72ec(*(long *)(unaff_x19 + 0x68),0), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar2 = FUN_015fe250(lVar1,*(undefined8 *)Method_Meta_WitAi_Requests_VRequest_<Dispose>b__101_0__,
                       0);
  if (((uVar2 & 1) == 0) &&
     (uVar2 = FUN_015fe250(lVar1,*(undefined8 *)
                                  Method_System_Collections_Generic_List<VisualElement>__ctor__,0),
     (uVar2 & 1) == 0)) {
    uVar3 = thunk_FUN_00d48444(
                              Method_UnityEngine_InputSystem_InputControl<__Il2CppFullySharedGenericStructType>_ReadValueFromState__
                              );
    uVar3 = FUN_015f5b28(uVar3,lVar1,0);
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    uVar4 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    FUN_016f2f28(uVar4,uVar3,0);
    uVar3 = thunk_FUN_00d48444(StringLiteral_4222);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar4,uVar3);
  }
  return;
}


