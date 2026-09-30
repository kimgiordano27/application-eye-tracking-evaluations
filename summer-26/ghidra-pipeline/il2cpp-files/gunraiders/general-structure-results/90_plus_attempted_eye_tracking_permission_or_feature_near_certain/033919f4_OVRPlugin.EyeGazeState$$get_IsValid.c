/*
FUNCTION_NAME: OVRPlugin.EyeGazeState$$get_IsValid
ENTRY_POINT: 033919f4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_EyeGazeState__get_IsValid(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x23;
  undefined8 *puVar10;
  long unaff_x29;
  
  puVar7 = Method_UnityEngine_Rendering_DebugUI_Field<Color>__ctor__;
  puVar6 = Method_UnityEngine_Rendering_DebugUI_Field<bool>_set_setter__;
  puVar5 = Method_UnityEngine_Rendering_DebugUI_Field<bool>_set_getter__;
  puVar4 = Method_UnityEngine_Rendering_DebugUI_Field<bool>_get_getter__;
  puVar3 = Method_UnityEngine_Rendering_DebugUI_Field<bool>_GetValue__;
  puVar2 = Method_UnityEngine_Rendering_DebugUI_Field<bool>__ctor__;
  puVar1 = Method_UnityEngine_Rendering_DebugUI_Field<Object[]>_set_getter__;
  puVar10 = *(undefined8 **)(unaff_x23 + 0xd18);
  if ((*(byte *)(unaff_x29 + 0x68d) & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_Rendering_DebugUI_Field<Object[]>_GetValue__);
    FUN_01c5d288(Method_UnityEngine_Rendering_DebugUI_Field<bool>_get_getter__);
    FUN_01c5d288(Method_UnityEngine_Rendering_DebugUI_Field<Object[]>_set_getter__);
    FUN_01c5d288(Method_UnityEngine_Rendering_DebugUI_Field<bool>_set_getter__);
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_Dispose__
                );
    FUN_01c5d288(Method_UnityEngine_Rendering_DebugUI_Field<bool>_GetValue__);
    FUN_01c5d288(Method_UnityEngine_Rendering_DebugUI_Field<Color>__ctor__);
    FUN_01c5d288(Method_UnityEngine_Rendering_DebugUI_Field<bool>__ctor__);
    FUN_01c5d288(Method_UnityEngine_Rendering_DebugUI_Field<bool>_set_setter__);
    *(undefined1 *)(unaff_x29 + 0x68d) = 1;
  }
  uVar8 = thunk_FUN_01c496e0(*puVar10);
  FUN_02b6841c(uVar8,0,*(undefined8 *)puVar1,0);
  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
  FUN_025ec2a8(uVar9,uVar8,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0xd0) = uVar9;
  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
  FUN_02b6841c(uVar8,0,*(undefined8 *)puVar5,0);
  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
  FUN_025ec2a8(uVar9,uVar8,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0xd8) = uVar9;
  FUN_0338eae8(param_1,param_2);
  *(undefined4 *)(param_1 + 0x24) = 6;
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary_Enumerator<StylePropertyAnimationSystem_ElementPropertyPair,_Queue<EventBase>>_Dispose__
                            );
  FUN_03391b78(uVar8,uVar9);
  *(undefined8 *)(param_1 + 0xc0) = uVar8;
  return;
}


