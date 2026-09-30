/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$OnEnable
ENTRY_POINT: 014656b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 291
LABEL: confirmed_eye_data_collection_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_interaction;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo;active_gaze_retrieval;active_gaze_interaction;active_gaze_collection;possible_biometrics
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;active_gaze_values_flow_to_collection_or_telemetry_sink;possible_biometric_feature_from_active_eye_context;functionality_permission_setup;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_1;functionality_possible_biometrics_hits_1
*/


long Meta_XR_EnvironmentRaycastManager__OnEnable(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  int iVar10;
  undefined8 *unaff_x21;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<ColorEntry>_get_Count__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<DerSequenceReader>_get_Count__);
  thunk_FUN_00d48444(Method_System_Net_FtpWebRequest_set_CachePolicy__);
  thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverValue__);
  thunk_FUN_00d48444(
                    Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Vector3>__
                    );
  thunk_FUN_00d48444(Method_OVRFaceExpressions_OnPermissionGranted__);
  thunk_FUN_00d48444(UnityEngine_InputSystem_TrackedDevice_TypeInfo);
  thunk_FUN_00d48444(Microsoft_Win32_SafeHandles_SafeProcessHandle_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xab9) = 1;
  lVar7 = thunk_FUN_00d62348(*unaff_x21);
  if ((lVar7 != 0) &&
     (FUN_01298da0(lVar7,*(undefined8 *)
                          Method_System_Collections_Generic_List<ColorEntry>_get_Count__),
     puVar6 = Method_System_Xml_XmlSqlBinaryReader_ScanOverValue__,
     puVar5 = 
     Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputManager_AvailableDevice>__
     , puVar4 = Method_System_Collections_Generic_Stack<DerSequenceReader>_get_Count__,
     puVar3 = 
     Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Vector3>__
     , puVar2 = Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_set_Item__,
     puVar1 = Microsoft_Win32_SafeHandles_SafeProcessHandle_TypeInfo, unaff_x19 != 0)) {
    if (0 < *(int *)(unaff_x19 + 0x18)) {
      iVar10 = 0;
      do {
        FUN_0132138c();
        if (CONCAT44(uStack000000000000000c,uStack0000000000000008) == 0) goto LAB_014658b4;
        uStack0000000000000008 =
             FUN_026664dc(CONCAT44(uStack000000000000000c,uStack0000000000000008),0);
        uVar8 = FUN_0129aa60(lVar7,&stack0x00000008,*(undefined8 *)puVar2);
        if ((uVar8 & 1) == 0) {
          lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          if (lVar9 == 0) goto LAB_014658b4;
          FUN_01320e50(lVar9,*(undefined8 *)puVar3);
          FUN_0132138c();
          if (CONCAT44(uStack000000000000000c,uStack0000000000000008) == 0) goto LAB_014658b4;
          uStack0000000000000008 =
               FUN_026664dc(CONCAT44(uStack000000000000000c,uStack0000000000000008),0);
          FUN_0129a054(lVar7,&stack0x00000008,lVar9,*(undefined8 *)puVar5);
        }
        else {
          FUN_0132138c();
          if (CONCAT44(uStack000000000000000c,uStack0000000000000008) == 0) goto LAB_014658b4;
          in_stack_00000000._4_4_ =
               FUN_026664dc(CONCAT44(uStack000000000000000c,uStack0000000000000008),0);
          FUN_01299bc0(lVar7,(long)&stack0x00000000 + 4,&stack0x00000008,*(undefined8 *)puVar4);
          lVar9 = CONCAT44(uStack000000000000000c,uStack0000000000000008);
        }
        FUN_0132138c();
        if (lVar9 == 0) goto LAB_014658b4;
        FUN_00ad61c4(lVar9,CONCAT44(uStack000000000000000c,uStack0000000000000008),
                     *(undefined8 *)puVar6);
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(unaff_x19 + 0x18));
    }
    return lVar7;
  }
LAB_014658b4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


