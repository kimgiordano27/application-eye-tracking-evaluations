/*
FUNCTION_NAME: FUN_06b05354
ENTRY_POINT: 06b05354
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_10;functionality_data_collection_or_telemetry_hits_10
*/


long FUN_06b05354(undefined4 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_073ab3db & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f764a8);
    FUN_02fe925c(OVRSystemPerfMetrics_PerfMetrics_TypeInfo);
    FUN_02fe925c(OVRTelemetry_NullTelemetryClient_TypeInfo);
    FUN_02fe925c(OVRTelemetry_QPLTelemetryClient_TypeInfo);
    FUN_02fe925c(OVRTelemetryConstants_OVRManager_TypeInfo);
    FUN_02fe925c(OVRUnityHumanoidSkeletonRetargeter_JointAdjustment_TypeInfo);
    FUN_02fe925c(OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings_TypeInfo);
    FUN_02fe925c(OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_TypeInfo);
    FUN_02fe925c(OVRVirtualKeyboard_<>c_TypeInfo);
    FUN_02fe925c(OVRVirtualKeyboard_<InitializeGlTFModel>d__92_TypeInfo);
    FUN_02fe925c(OVRVirtualKeyboard_CommitTextUnityEvent_TypeInfo);
    FUN_02fe925c(OVRVirtualKeyboard_ControllerInputSource_TypeInfo);
                    /* try { // try from 06b053fc to 06c0560f has its CatchHandler @ 06b053fc
                       catch() { ... } // from try @ 06b053fc with catch @ 06b053fc
                       catch() { ... } // from try @ 06b056bc with catch @ 06b053fc
                       catch() { ... } // from try @ 06b05790 with catch @ 06b053fc
                       catch() { ... } // from try @ 06b057b8 with catch @ 06b053fc
                       catch() { ... } // from try @ 06b0588c with catch @ 06b053fc */
    FUN_02fe925c(OVRVirtualKeyboard_HandInputSource_TypeInfo);
    FUN_02fe925c(OVRVirtualKeyboard_IInputSource_TypeInfo);
    FUN_02fe925c(OVRVirtualKeyboard_ITextHandler_TypeInfo);
    FUN_02fe925c(OVRVirtualKeyboard_InputSource_TypeInfo);
    FUN_02fe925c(OVRVirtualKeyboard_InteractorRootTransformOverride_TypeInfo);
    FUN_02fe925c(OVRVirtualKeyboard_KeyboardEventListener_TypeInfo);
    FUN_02fe925c(OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
    FUN_02fe925c(OVRVirtualKeyboard_TextHandlerScope_TypeInfo);
    FUN_02fe925c(OVRVirtualKeyboard_WaitUntilKeyboardVisible_TypeInfo);
    FUN_02fe925c(OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__19_TypeInfo);
    FUN_02fe925c(UnityEngine_ObjectDispatcher_<>c_TypeInfo);
    FUN_02fe925c(ObjectFogController_FogSpace_TypeInfo);
    FUN_02fe925c(MeshCombineStudio_ObjectOctree_Cell_TypeInfo);
    DAT_073ab3db = 1;
  }
  puVar1 = MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
  switch(param_1) {
  case 1:
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
    FUN_057fe664(lVar2,uVar5,*(undefined8 *)OVRVirtualKeyboard_HandInputSource_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *plVar3 = lVar2;
    break;
  case 2:
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x18);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
                    /* try { // try from 06b05610 to 06c05637 has its CatchHandler @ 06b057a4 */
    FUN_057fe664(lVar2,uVar5,
                 *(undefined8 *)OVRVirtualKeyboard_InteractorRootTransformOverride_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
    *plVar3 = lVar2;
    break;
  case 3:
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
                    /* try { // try from 06b0566c to 06c05693 has its CatchHandler @ 06b057a0 */
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
    FUN_057fe664(lVar2,uVar5,*(undefined8 *)OVRVirtualKeyboard_KeyboardEventListener_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
    *plVar3 = lVar2;
                    /* try { // try from 06b056b0 to 06c056bb has its CatchHandler @ 06b05798 */
    break;
  case 4:
                    /* try { // try from 06b056bc to 06c05783 has its CatchHandler @ 06b053fc */
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x28);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
    FUN_057fe664(lVar2,uVar5,*(undefined8 *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
    *plVar3 = lVar2;
    break;
  case 5:
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
                    /* try { // try from 06b05784 to 06c05787 has its CatchHandler @ 06b0579c */
                    /* try { // try from 06b0578c to 06c0578f has its CatchHandler @ 06b05794 */
                    /* try { // try from 06b05790 to 06c057b3 has its CatchHandler @ 06b053fc */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06b0578c with catch @ 06b05794
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06b056b0 with catch @ 06b05798
                        */
    FUN_057fe664(lVar2,uVar5,*(undefined8 *)OVRVirtualKeyboard_TextHandlerScope_TypeInfo,0);
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06b05784 with catch @ 06b0579c
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06b0566c with catch @ 06b057a0
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06b05610 with catch @ 06b057a4
                        */
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
    *plVar3 = lVar2;
    break;
  case 6:
                    /* try { // try from 06b057b4 to 06c057b7 has its CatchHandler @ 06b05824 */
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
                    /* try { // try from 06b057b8 to 06c05863 has its CatchHandler @ 06b053fc */
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x38);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
    FUN_057fe664(lVar2,uVar5,*(undefined8 *)OVRVirtualKeyboard_WaitUntilKeyboardVisible_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
    *plVar3 = lVar2;
                    /* catch() { ... } // from try @ 06b057b4 with catch @ 06b05824 */
    break;
  case 7:
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x40);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
                    /* try { // try from 06b05864 to 06c0588b has its CatchHandler @ 06b058a0 */
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
                    /* try { // try from 06b0588c to 06c05897 has its CatchHandler @ 06b053fc */
    FUN_057fe664(lVar2,uVar5,
                 *(undefined8 *)OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__19_TypeInfo,0);
                    /* try { // try from 06b05898 to 06c0589f has its CatchHandler @ 06b058a0 */
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
    *plVar3 = lVar2;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06b05864 with catch @ 06b058a0
                       catch(type#2 @ 00000000) { ... } // from try @ 06b05898 with catch @ 06b058a0
                        */
    break;
  case 8:
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x48);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
    FUN_057fe664(lVar2,uVar5,*(undefined8 *)UnityEngine_ObjectDispatcher_<>c_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48);
    *plVar3 = lVar2;
    break;
  case 9:
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x50);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
    FUN_057fe664(lVar2,uVar5,*(undefined8 *)ObjectFogController_FogSpace_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x50);
    *plVar3 = lVar2;
    break;
  case 10:
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x58);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
    FUN_057fe664(lVar2,uVar5,*(undefined8 *)OVRTelemetry_NullTelemetryClient_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x58);
    *plVar3 = lVar2;
    break;
  case 0xb:
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x60);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
    FUN_057fe664(lVar2,uVar5,*(undefined8 *)OVRTelemetry_QPLTelemetryClient_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x60);
    *plVar3 = lVar2;
    break;
  case 0xc:
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x68);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
    FUN_057fe664(lVar2,uVar5,*(undefined8 *)OVRTelemetryConstants_OVRManager_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x68);
    *plVar3 = lVar2;
    break;
  case 0xd:
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x70);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
    FUN_057fe664(lVar2,uVar5,
                 *(undefined8 *)OVRUnityHumanoidSkeletonRetargeter_JointAdjustment_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x70);
    *plVar3 = lVar2;
    break;
  case 0xe:
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x78);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
    FUN_057fe664(lVar2,uVar5,
                 *(undefined8 *)
                  OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x78);
    *plVar3 = lVar2;
    break;
  case 0xf:
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x80);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
    FUN_057fe664(lVar2,uVar5,
                 *(undefined8 *)OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x80);
    *plVar3 = lVar2;
    break;
  case 0x10:
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x88);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
    FUN_057fe664(lVar2,uVar5,*(undefined8 *)OVRVirtualKeyboard_<>c_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x88);
    *plVar3 = lVar2;
    break;
  case 0x11:
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x90);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
    FUN_057fe664(lVar2,uVar5,*(undefined8 *)OVRVirtualKeyboard_<InitializeGlTFModel>d__92_TypeInfo,0
                );
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x90);
    *plVar3 = lVar2;
    break;
  case 0x12:
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x98);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
    FUN_057fe664(lVar2,uVar5,*(undefined8 *)OVRVirtualKeyboard_CommitTextUnityEvent_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x98);
    *plVar3 = lVar2;
    break;
  case 0x13:
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xa0);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
    FUN_057fe664(lVar2,uVar5,*(undefined8 *)OVRVirtualKeyboard_ControllerInputSource_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa0);
    *plVar3 = lVar2;
    break;
  case 0x14:
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xa8);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
    FUN_057fe664(lVar2,uVar5,*(undefined8 *)OVRVirtualKeyboard_IInputSource_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xa8);
    *plVar3 = lVar2;
    break;
  case 0x15:
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xb0);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
    FUN_057fe664(lVar2,uVar5,*(undefined8 *)OVRVirtualKeyboard_ITextHandler_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb0);
    *plVar3 = lVar2;
    break;
  case 0x16:
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 0xb8);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
    FUN_057fe664(lVar2,uVar5,*(undefined8 *)OVRVirtualKeyboard_InputSource_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xb8);
    *plVar3 = lVar2;
    break;
  default:
    lVar2 = *(long *)MeshCombineStudio_ObjectOctree_Cell_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (lVar4 != 0) {
      return lVar4;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar2 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f764a8);
    FUN_057fe664(lVar2,uVar5,*(undefined8 *)OVRSystemPerfMetrics_PerfMetrics_TypeInfo,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar3 = lVar2;
  }
  thunk_FUN_03048534(plVar3,lVar2);
  return lVar2;
}


