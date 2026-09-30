/*
FUNCTION_NAME: UnityEngine.InputSystem.Keyboard$$get_leftMetaKey
ENTRY_POINT: 059c6df8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 88
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


void UnityEngine_InputSystem_Keyboard__get_leftMetaKey(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x21;
  
  puVar7 = Method_Unity_Collections_NativeArray<XRShareAnchorResult>__ctor__;
  if ((*(byte *)(unaff_x21 + 0xce9) & 1) == 0) {
    FUN_02f08768(Method_Unity_Collections_NativeArray<GPUInstanceComponentDesc>_GetEnumerator__);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Add__);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRPlugin_Result>_GetEnumerator__);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Clear__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<XRShareAnchorResult>_GetEnumerator__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<XRShareAnchorResult>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_List<VisualTreeAsset_SlotUsageEntry>_get_Item__);
    *(undefined1 *)(unaff_x21 + 0xce9) = 1;
  }
  puVar8 = Method_Unity_Collections_NativeArray<XRShareAnchorResult>_GetEnumerator__;
  puVar6 = Method_Unity_Collections_NativeArray<GPUInstanceComponentDesc>_GetEnumerator__;
  puVar5 = Method_System_Collections_Generic_List<VisualTreeAsset_SlotUsageEntry>_get_Item__;
  puVar4 = Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Clear__;
  puVar3 = Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Add__;
  puVar2 = Method_System_Collections_Generic_List<OVRPlugin_Result>_GetEnumerator__;
  iVar1 = *(int *)(*(long *)puVar7 + 0xe4);
  *(undefined4 *)(param_1 + 0x3e0) = 0x3dcccccd;
  if (iVar1 == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_043a7564(param_1,*(undefined8 *)puVar8);
  FUN_0424d654(param_1,*(undefined8 *)puVar5,*(undefined8 *)puVar6);
  UnityEngine_InputSystem_Keyboard__get_numpad4Key(DAT_011b045c,param_1);
  FUN_0424d498(0,param_1,*(undefined8 *)puVar2);
  FUN_0424d574(0x3f800000,param_1,*(undefined8 *)puVar3);
  FUN_0424d718(0,param_1,*(undefined8 *)puVar4);
  return;
}


