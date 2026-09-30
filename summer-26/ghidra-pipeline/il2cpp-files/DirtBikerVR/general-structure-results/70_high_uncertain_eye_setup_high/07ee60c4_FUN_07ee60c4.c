/*
FUNCTION_NAME: FUN_07ee60c4
ENTRY_POINT: 07ee60c4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07ee60c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined1 auStack_488 [152];
  undefined1 auStack_3f0 [152];
  undefined1 auStack_358 [152];
  undefined1 auStack_2c0 [152];
  undefined1 auStack_228 [152];
  undefined1 auStack_190 [152];
  undefined1 auStack_f8 [152];
  
  puVar1 = PTR_DAT_08491368;
  if ((DAT_0899ae10 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08491368);
    FUN_03a8a718(PTR_DAT_08495808);
    FUN_03a8a718(Method_UnityEngine_UIElements_CustomStyleProperty<Color>__ctor__);
    FUN_03a8a718(Method_UnityEngine_UIElements_CustomStyleProperty<Color>_get_name__);
    FUN_03a8a718(Method_UnityEngine_UIElements_CustomStyleProperty<int>__ctor__);
    FUN_03a8a718(Method_UnityEngine_UIElements_CustomStyleProperty<int>_get_name__);
    FUN_03a8a718(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<string,_InputControlLayoutChange>>_RemoveCallback__
                );
    FUN_03a8a718(Method_UnityEngine_UIElements_CustomStyleProperty<float>__ctor__);
    FUN_03a8a718(Method_UnityEngine_UIElements_CustomStyleProperty<float>_get_name__);
    FUN_03a8a718(Method_UnityEngine_UIElements_CustomStyleProperty<Sprite>__ctor__);
    FUN_03a8a718(Method_UnityEngine_UIElements_CustomStyleProperty<Sprite>_get_name__);
    FUN_03a8a718(Method_UnityEngine_UIElements_CustomStyleProperty<string>__ctor__);
    FUN_03a8a718(Method_UnityEngine_UIElements_CustomStyleProperty<string>_get_name__);
    FUN_03a8a718(Method_UnityEngine_UIElements_CustomStyleProperty<Texture2D>__ctor__);
    FUN_03a8a718(Method_UnityEngine_UIElements_CustomStyleProperty<Texture2D>_get_name__);
    FUN_03a8a718(PTR_DAT_084da428);
    FUN_03a8a718(OVRPlugin_LayerLayout_TypeInfo);
    FUN_03a8a718(Oculus_Platform_VoipAudioSourceHiLevel_TypeInfo);
    DAT_0899ae10 = 1;
  }
  puVar12 = Method_UnityEngine_UIElements_CustomStyleProperty<string>_get_name__;
  puVar11 = Method_UnityEngine_UIElements_CustomStyleProperty<string>__ctor__;
  puVar10 = Method_UnityEngine_UIElements_CustomStyleProperty<Sprite>_get_name__;
  puVar9 = Method_UnityEngine_UIElements_CustomStyleProperty<Sprite>__ctor__;
  puVar8 = Method_UnityEngine_UIElements_CustomStyleProperty<float>_get_name__;
  puVar7 = Method_UnityEngine_UIElements_CustomStyleProperty<float>__ctor__;
  puVar6 = Method_UnityEngine_UIElements_CustomStyleProperty<int>_get_name__;
  puVar5 = 
  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<string,_InputControlLayoutChange>>_RemoveCallback__
  ;
  puVar4 = OVRPlugin_LayerLayout_TypeInfo;
  puVar3 = Oculus_Platform_VoipAudioSourceHiLevel_TypeInfo;
  puVar2 = PTR_DAT_084da428;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07e61c1c(auStack_f8,*(undefined8 *)puVar2,0);
  memcpy(*(void **)(*(long *)puVar5 + 0xb8),auStack_f8,0x98);
  thunk_FUN_03afed3c(*(long *)(*(long *)puVar5 + 0xb8) + 8,0);
  FUN_07e61c1c(auStack_190,*(undefined8 *)puVar3,0);
  lVar13 = *(long *)puVar5;
  memcpy((void *)(*(long *)(lVar13 + 0xb8) + 0x98),auStack_190,0x98);
  thunk_FUN_03afed3c(*(long *)(lVar13 + 0xb8) + 0xa0,0);
  FUN_07e61c1c(auStack_228,*(undefined8 *)puVar4,0);
  lVar13 = *(long *)puVar5;
  memcpy((void *)(*(long *)(lVar13 + 0xb8) + 0x130),auStack_228,0x98);
  thunk_FUN_03afed3c(*(long *)(lVar13 + 0xb8) + 0x138,0);
  FUN_07e61c1c(auStack_2c0,*(undefined8 *)puVar7,0);
  lVar13 = *(long *)puVar5;
  memcpy((void *)(*(long *)(lVar13 + 0xb8) + 0x1c8),auStack_2c0,0x98);
  thunk_FUN_03afed3c(*(long *)(lVar13 + 0xb8) + 0x1d0,0);
  FUN_07e61c1c(auStack_358,*(undefined8 *)puVar9,0);
  lVar13 = *(long *)puVar5;
  memcpy((void *)(*(long *)(lVar13 + 0xb8) + 0x260),auStack_358,0x98);
  thunk_FUN_03afed3c(*(long *)(lVar13 + 0xb8) + 0x268,0);
  FUN_07e61c1c(auStack_3f0,*(undefined8 *)puVar10,0);
  lVar13 = *(long *)puVar5;
  memcpy((void *)(*(long *)(lVar13 + 0xb8) + 0x2f8),auStack_3f0,0x98);
  thunk_FUN_03afed3c(*(long *)(lVar13 + 0xb8) + 0x300,0);
  FUN_07e61c1c(auStack_488,*(undefined8 *)puVar11,0);
  lVar13 = *(long *)puVar5;
  memcpy((void *)(*(long *)(lVar13 + 0xb8) + 0x390),auStack_488,0x98);
  thunk_FUN_03afed3c(*(long *)(lVar13 + 0xb8) + 0x398,0);
  lVar13 = *(long *)(*(long *)puVar5 + 0xb8);
  *(undefined8 *)(lVar13 + 0x428) = *(undefined8 *)puVar12;
  thunk_FUN_03afed3c(lVar13 + 0x428);
  local_490 = 0;
  FUN_05d8ed4c(&local_490,*(undefined8 *)puVar8,
               *(undefined8 *)Method_UnityEngine_UIElements_CustomStyleProperty<Color>__ctor__);
  lVar13 = *(long *)puVar5;
  *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x430) = local_490;
  thunk_FUN_03afed3c(*(long *)(lVar13 + 0xb8) + 0x430,0);
  local_498 = 0;
  FUN_05d8ed4c(&local_498,*(undefined8 *)puVar8,
               *(undefined8 *)Method_UnityEngine_UIElements_CustomStyleProperty<int>__ctor__);
  lVar13 = *(long *)puVar5;
  *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x438) = local_498;
  thunk_FUN_03afed3c(*(long *)(lVar13 + 0xb8) + 0x438,0);
  local_4a0 = 0;
  FUN_05d8ed4c(&local_4a0,*(undefined8 *)puVar8,
               *(undefined8 *)Method_UnityEngine_UIElements_CustomStyleProperty<Color>_get_name__);
  lVar13 = *(long *)puVar5;
  *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x440) = local_4a0;
  thunk_FUN_03afed3c(*(long *)(lVar13 + 0xb8) + 0x440,0);
  local_4a8 = 0;
  FUN_05d8ed4c(&local_4a8,
               *(undefined8 *)
                Method_UnityEngine_UIElements_CustomStyleProperty<Texture2D>_get_name__,
               *(undefined8 *)puVar6);
  lVar13 = *(long *)puVar5;
  *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x448) = local_4a8;
  thunk_FUN_03afed3c(*(long *)(lVar13 + 0xb8) + 0x448,0);
  local_4b0 = 0;
  FUN_05d8e814(&local_4b0,
               *(undefined8 *)Method_UnityEngine_UIElements_CustomStyleProperty<Texture2D>__ctor__,
               *(undefined8 *)PTR_DAT_08495808);
  lVar13 = *(long *)puVar5;
  *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x450) = local_4b0;
  thunk_FUN_03afed3c(*(long *)(lVar13 + 0xb8) + 0x450,0);
  return;
}


