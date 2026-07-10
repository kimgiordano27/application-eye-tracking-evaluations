/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$ApplySettings
ENTRY_POINT: 036d6404
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 223
LABEL: confirmed_eye_data_collection_near_certain
EYE_TRACKING_DECISION: yes
FUNCTIONALITY: permission_setup;foveated_rendering;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;foveation_rendering;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_21;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;strong_foveation_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_permission_setup;functionality_foveated_rendering;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_OpenXR_OpenXRSettings__ApplySettings(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((DAT_03ef712d & 1) == 0) {
    FUN_01c5c92c(PTR_System_Action<string>_TypeInfo_03cb5f98);
    FUN_01c5c92c(
                PTR_Method_System_Linq_Enumerable_Select<OpenXRSettings_ColorSubmissionModeGroup,_int>___03ce71c0
                );
    FUN_01c5c92c(PTR_Method_System_Linq_Enumerable_ToArray<int>___03cd36f0);
    FUN_01c5c92c(PTR_System_Func<OpenXRSettings_ColorSubmissionModeGroup,_int>_TypeInfo_03ce71c8);
    FUN_01c5c92c(PTR_UnityEngine_Object_TypeInfo_03cb5a80);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<FoveatedRenderingFeature>___03ce71e0
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_OpenXR_OpenXRSettings_PermissionGrantedCallback___03ce71e8
                );
    FUN_01c5c92c(PTR_UnityEngine_Android_PermissionCallbacks_TypeInfo_03cb5fd0);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_XR_OpenXR_OpenXRSettings_<>c_<ApplyRenderSettings>b__44_0___03ce71f0
                );
    FUN_01c5c92c(PTR_UnityEngine_XR_OpenXR_OpenXRSettings_<>c_TypeInfo_03ce71b8);
    DAT_03ef712d = 1;
  }
  UnityEngine_XR_OpenXR_OpenXRSettings__Internal_SetSymmetricProjection
            (*(undefined1 *)(param_1 + 0x41));
  UnityEngine_XR_OpenXR_OpenXRSettings__Internal_SetUsedFoveatedRenderingApi
            (*(undefined1 *)(param_1 + 0x42));
  UnityEngine_XR_OpenXR_OpenXRSettings__Internal_SetRenderMode(*(undefined4 *)(param_1 + 0x20));
  puVar2 = PTR_UnityEngine_XR_OpenXR_OpenXRSettings_<>c_TypeInfo_03ce71b8;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    lVar4 = *(long *)PTR_UnityEngine_XR_OpenXR_OpenXRSettings_<>c_TypeInfo_03ce71b8;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
      lVar4 = *(long *)puVar2;
    }
    puVar3 = 
    PTR_Method_System_Linq_Enumerable_Select<OpenXRSettings_ColorSubmissionModeGroup,_int>___03ce71c0
    ;
    puVar1 = PTR_Method_System_Linq_Enumerable_ToArray<int>___03cd36f0;
    puVar7 = *(undefined8 **)(lVar4 + 0xb8);
    lVar9 = puVar7[3];
    if (lVar9 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
        puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar10 = *puVar7;
      lVar9 = thunk_FUN_01c8fc48(*(undefined8 *)
                                  PTR_System_Func<OpenXRSettings_ColorSubmissionModeGroup,_int>_TypeInfo_03ce71c8
                                );
      System_Func<Int32Enum,_int>___ctor
                (lVar9,uVar10,
                 *(undefined8 *)
                  PTR_Method_UnityEngine_XR_OpenXR_OpenXRSettings_<>c_<ApplyRenderSettings>b__44_0___03ce71f0
                 ,0);
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      *plVar5 = lVar9;
      thunk_FUN_01cc8040(plVar5,lVar9);
    }
    uVar8 = System_Linq_Enumerable__Select<Int32Enum,_int>(uVar8,lVar9,*(undefined8 *)puVar3);
    uVar8 = System_Linq_Enumerable__ToArray<int>(uVar8,*(undefined8 *)puVar1);
    puVar2 = 
    PTR_Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<FoveatedRenderingFeature>___03ce71e0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar4 != 0)) {
      UnityEngine_XR_OpenXR_OpenXRSettings__Internal_SetColorSubmissionModes
                (uVar8,*(undefined4 *)(lVar4 + 0x18));
      UnityEngine_XR_OpenXR_OpenXRSettings__Internal_SetDepthSubmissionMode
                (*(undefined4 *)(param_1 + 0x38));
      UnityEngine_XR_OpenXR_OpenXRSettings__Internal_SetSpaceWarpMotionVectorTextureFormat
                (*(undefined4 *)(param_1 + 0x3c));
      UnityEngine_XR_OpenXR_OpenXRSettings__Internal_SetOptimizeBufferDiscards
                (*(undefined1 *)(param_1 + 0x40));
      lVar4 = UnityEngine_XR_OpenXR_OpenXRSettings__GetFeature<object>
                        (param_1,*(undefined8 *)puVar2);
      if ((*(long *)(param_1 + 0x30) == 0) || (*(long *)(*(long *)(param_1 + 0x30) + 0x18) == 0)) {
        return;
      }
      uVar6 = UnityEngine_XR_OpenXR_OpenXRSettings__Internal_HasRequestedEyeTrackingPermissions();
      if ((uVar6 & 1) == 0) {
        if (*(int *)(*(long *)PTR_UnityEngine_Object_TypeInfo_03cb5a80 + 0xe4) == 0) {
          thunk_FUN_01cb0d4c();
        }
        uVar6 = UnityEngine_Object__op_Inequality(lVar4,0,0);
        if ((uVar6 & 1) == 0) {
          return;
        }
        if (lVar4 == 0) goto LAB_036d5c68;
        uVar6 = UnityEngine_XR_OpenXR_Features_OpenXRFeature__get_enabled(lVar4);
        if ((uVar6 & 1) == 0) {
          return;
        }
      }
      lVar4 = thunk_FUN_01c8fc48(*(undefined8 *)
                                  PTR_UnityEngine_Android_PermissionCallbacks_TypeInfo_03cb5fd0);
      UnityEngine_Android_PermissionCallbacks___ctor(lVar4,0);
      uVar8 = thunk_FUN_01c8fc48(*(undefined8 *)PTR_System_Action<string>_TypeInfo_03cb5f98);
      System_Action<object>___ctor
                (uVar8,0,*(undefined8 *)
                          PTR_Method_UnityEngine_XR_OpenXR_OpenXRSettings_PermissionGrantedCallback___03ce71e8
                 ,0);
      if (lVar4 != 0) {
        UnityEngine_Android_PermissionCallbacks__add_PermissionGranted(lVar4,uVar8,0);
        UnityEngine_Android_Permission__RequestUserPermissions
                  (*(undefined8 *)(param_1 + 0x30),lVar4,0);
        return;
      }
    }
  }
LAB_036d5c68:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


