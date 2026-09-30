/*
FUNCTION_NAME: FUN_05d16030
ENTRY_POINT: 05d16030
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_05d16030(long param_1)

{
  ushort uVar1;
  short sVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((DAT_06dc2ecd & 1) == 0) {
    FUN_02d965b8(Method_Newtonsoft_Json_Utilities_DynamicProxy<JValue>__ctor__);
    FUN_02d965b8(OVRPlugin_OVRP_1_100_0_TypeInfo);
    FUN_02d965b8(Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_UriParser>_TryGetValue__);
    FUN_02d965b8(Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>_GetAllJointData__)
    ;
    FUN_02d965b8(
                Method_Oculus_Avatar2_EntityJointMonitorBase<JobTransformHolder>_CreateNewTransform__
                );
    FUN_02d965b8(Method_Oculus_Avatar2_EntityJointMonitorBase<TransformHolder>_CreateNewTransform__)
    ;
    FUN_02d965b8(Method_UnityEngine_Rendering_DebugUI_EnumField<Enum>__ctor__);
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<int,_TextResourceManager_FontAssetRef>_get_Item__
                );
    FUN_02d965b8(Method_UnityEngine_Rendering_DebugUI_EnumField<Enum>_AutoFillFromType__);
    FUN_02d965b8(Method_UnityEngine_Rendering_DebugUI_EnumField<Enum>_get_enumValues__);
    FUN_02d965b8(OVRPlugin_OVRP_1_0_0_TypeInfo);
    DAT_06dc2ecd = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar1 = FUN_053674f8(param_1,0,0);
  if (uVar1 < 0x6d) {
    if (uVar1 == 0x66) {
      uVar3 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<int,_TextResourceManager_FontAssetRef>_get_Item__
                                 ,0);
      puVar5 = (undefined8 *)
               Method_Oculus_Avatar2_EntityJointMonitorBase<JobTransformHolder>_CreateNewTransform__
      ;
    }
    else {
      puVar5 = (undefined8 *)Method_UnityEngine_Rendering_DebugUI_EnumField<Enum>__ctor__;
      if (uVar1 == 0x67) goto LAB_05d16230;
      if (uVar1 != 0x68) {
        return 0;
      }
      uVar3 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<string,_UriParser>_TryGetValue__
                                 ,0);
      puVar5 = (undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo;
    }
  }
  else {
    puVar5 = (undefined8 *)Method_UnityEngine_Rendering_DebugUI_EnumField<Enum>_get_enumValues__;
    if (uVar1 == 0x6d) goto LAB_05d16230;
    if (uVar1 == 0x6e) {
      sVar2 = FUN_053674f8(param_1,1,0);
      puVar5 = (undefined8 *)
               Method_Oculus_Avatar2_EntityJointMonitorBase<TransformHolder>_CreateNewTransform__;
      if (sVar2 != 0x65) goto LAB_05d16230;
      uVar3 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                          Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>_GetAllJointData__
                                 ,0);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      uVar3 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                          Method_Newtonsoft_Json_Utilities_DynamicProxy<JValue>__ctor__
                                 ,0);
      puVar5 = (undefined8 *)Method_UnityEngine_Rendering_DebugUI_EnumField<Enum>_AutoFillFromType__
      ;
    }
    else {
      if (uVar1 != 0x77) {
        return 0;
      }
      uVar3 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                          Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>__ctor__
                                 ,0);
      puVar5 = (undefined8 *)OVRPlugin_OVRP_1_100_0_TypeInfo;
    }
  }
  if ((uVar3 & 1) != 0) {
    return 1;
  }
LAB_05d16230:
  uVar4 = thunk_FUN_0536b75c(param_1,*puVar5,0);
  return uVar4;
}


