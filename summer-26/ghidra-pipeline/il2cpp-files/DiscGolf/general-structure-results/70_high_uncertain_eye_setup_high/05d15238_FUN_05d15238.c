/*
FUNCTION_NAME: FUN_05d15238
ENTRY_POINT: 05d15238
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_05d15238(long param_1)

{
  ushort uVar1;
  short sVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((DAT_06dc2ebe & 1) == 0) {
    FUN_02d965b8(Method_Newtonsoft_Json_Utilities_DynamicProxy<JValue>__ctor__);
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
    DAT_06dc2ebe = 1;
  }
  if ((param_1 == 0) || (*(int *)(param_1 + 0x10) < 3)) {
LAB_05d153d4:
    uVar4 = 0;
  }
  else {
    uVar1 = FUN_053674f8(param_1,0,0);
    if (uVar1 < 0x68) {
      if (uVar1 != 0x66) {
        puVar5 = (undefined8 *)Method_UnityEngine_Rendering_DebugUI_EnumField<Enum>__ctor__;
        if (uVar1 == 0x67) goto LAB_05d153c0;
        goto LAB_05d153d4;
      }
      uVar3 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<int,_TextResourceManager_FontAssetRef>_get_Item__
                                 ,0);
      puVar5 = (undefined8 *)
               Method_Oculus_Avatar2_EntityJointMonitorBase<JobTransformHolder>_CreateNewTransform__
      ;
joined_r0x05d153fc:
      if ((uVar3 & 1) == 0) {
LAB_05d1541c:
        uVar4 = thunk_FUN_0536b75c(param_1,*puVar5,0);
        return uVar4;
      }
    }
    else {
      if (uVar1 != 0x6e) {
        puVar5 = (undefined8 *)Method_UnityEngine_Rendering_DebugUI_EnumField<Enum>_get_enumValues__
        ;
        if (uVar1 == 0x6d) {
LAB_05d153c0:
          uVar3 = thunk_FUN_0536b75c(param_1,*puVar5,0);
          if ((uVar3 & 1) != 0) goto LAB_05d15400;
        }
        else if (uVar1 == 0x68) {
          uVar3 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<string,_UriParser>_TryGetValue__
                                     ,0);
          puVar5 = (undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo;
          goto joined_r0x05d153fc;
        }
        goto LAB_05d153d4;
      }
      sVar2 = FUN_053674f8(param_1,1,0);
      puVar5 = (undefined8 *)
               Method_Oculus_Avatar2_EntityJointMonitorBase<TransformHolder>_CreateNewTransform__;
      if (sVar2 != 0x65) goto LAB_05d1541c;
      uVar3 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                          Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>_GetAllJointData__
                                 ,0);
      if ((uVar3 & 1) == 0) {
        uVar3 = thunk_FUN_0536b75c(param_1,*(undefined8 *)
                                            Method_Newtonsoft_Json_Utilities_DynamicProxy<JValue>__ctor__
                                   ,0);
        puVar5 = (undefined8 *)
                 Method_UnityEngine_Rendering_DebugUI_EnumField<Enum>_AutoFillFromType__;
        goto joined_r0x05d153fc;
      }
    }
LAB_05d15400:
    uVar4 = 1;
  }
  return uVar4;
}


