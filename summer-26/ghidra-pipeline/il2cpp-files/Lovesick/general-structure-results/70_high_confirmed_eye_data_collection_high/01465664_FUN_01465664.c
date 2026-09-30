/*
FUNCTION_NAME: FUN_01465664
ENTRY_POINT: 01465664
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: confirmed_eye_data_collection_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_data_collection
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;active_gaze_retrieval;active_gaze_collection;possible_biometrics
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_collection_or_telemetry_sink;possible_biometric_feature_from_active_eye_context;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_01465664(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  
  puVar1 = Method_System_Net_FtpWebRequest_set_CachePolicy__;
  if ((DAT_03776ab9 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputManager_AvailableDevice>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_set_Item__
                      );
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
    DAT_03776ab9 = 1;
  }
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if ((lVar8 != 0) &&
     (FUN_01298da0(lVar8,*(undefined8 *)
                          Method_System_Collections_Generic_List<ColorEntry>_get_Count__),
     puVar7 = Method_System_Xml_XmlSqlBinaryReader_ScanOverValue__,
     puVar6 = 
     Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<InputManager_AvailableDevice>__
     , puVar5 = Method_System_Collections_Generic_Stack<DerSequenceReader>_get_Count__,
     puVar4 = 
     Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_148>_SliceWithStride<Vector3>__
     , puVar3 = Method_System_Collections_Generic_Dictionary<string,_StylePropertyValue>_set_Item__,
     puVar2 = UnityEngine_InputSystem_TrackedDevice_TypeInfo,
     puVar1 = Microsoft_Win32_SafeHandles_SafeProcessHandle_TypeInfo, param_2 != 0)) {
    if (0 < *(int *)(param_2 + 0x18)) {
      iVar11 = 0;
      do {
        FUN_0132138c(param_2,iVar11,&local_68,*(undefined8 *)puVar2);
        if (CONCAT44(uStack_64,local_68) == 0) goto LAB_014658b4;
        local_68 = FUN_026664dc(CONCAT44(uStack_64,local_68),0);
        uVar9 = FUN_0129aa60(lVar8,&local_68,*(undefined8 *)puVar3);
        if ((uVar9 & 1) == 0) {
          lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          if (lVar10 == 0) goto LAB_014658b4;
          FUN_01320e50(lVar10,*(undefined8 *)puVar4);
          FUN_0132138c(param_2,iVar11,&local_68,*(undefined8 *)puVar2);
          if (CONCAT44(uStack_64,local_68) == 0) goto LAB_014658b4;
          local_68 = FUN_026664dc(CONCAT44(uStack_64,local_68),0);
          FUN_0129a054(lVar8,&local_68,lVar10,*(undefined8 *)puVar6);
        }
        else {
          FUN_0132138c(param_2,iVar11,&local_68,*(undefined8 *)puVar2);
          if (CONCAT44(uStack_64,local_68) == 0) goto LAB_014658b4;
          local_6c = FUN_026664dc(CONCAT44(uStack_64,local_68),0);
          FUN_01299bc0(lVar8,&local_6c,&local_68,*(undefined8 *)puVar5);
          lVar10 = CONCAT44(uStack_64,local_68);
        }
        FUN_0132138c(param_2,iVar11,&local_68,*(undefined8 *)puVar2);
        if (lVar10 == 0) goto LAB_014658b4;
        FUN_00ad61c4(lVar10,CONCAT44(uStack_64,local_68),*(undefined8 *)puVar7);
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_2 + 0x18));
    }
    return lVar8;
  }
LAB_014658b4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


