/*
FUNCTION_NAME: UnityEngine.InputSystem.Keyboard$$get_rightMetaKey
ENTRY_POINT: 059c6e00
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_InputSystem_Keyboard__get_rightMetaKey(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  long *plVar2;
  long unaff_x21;
  
                    /* try { // try from 059c6e00 to 05ac6e5f has its CatchHandler @ 059c6e00
                       catch() { ... } // from try @ 059c6e00 with catch @ 059c6e00
                       catch() { ... } // from try @ 059c6e84 with catch @ 059c6e00
                       catch() { ... } // from try @ 059c6eb4 with catch @ 059c6e00
                       catch() { ... } // from try @ 059c6ee8 with catch @ 059c6e00 */
  plVar2 = *(long **)(unaff_x20 + 0x410);
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
  iVar1 = *(int *)(*plVar2 + 0xe4);
  *(undefined4 *)(unaff_x19 + 0x3e0) = 0x3dcccccd;
  if (iVar1 == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_043a7564();
  FUN_0424d654();
  UnityEngine_InputSystem_Keyboard__get_numpad4Key(DAT_011b045c);
  FUN_0424d498(0);
  FUN_0424d574(0x3f800000);
  FUN_0424d718(0);
  return;
}


