/*
FUNCTION_NAME: FUN_0639fee8
ENTRY_POINT: 0639fee8
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0639fee8(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  
  puVar4 = Fusion_NetworkBehaviour_ChangeDetector_PropertyData_var;
  puVar3 = PTR_DAT_06d03498;
  puVar2 = PTR_DAT_06d03490;
  if ((DAT_071cd4ac & 1) == 0) {
    FUN_02f07e70(Unity_VisualScripting_UnityOnSelectMessageListener_var);
    FUN_02f07e70(OVRAnchor_Tracker_AsyncLock_var);
    FUN_02f07e70(OVRVirtualKeyboard_InteractorRootTransformOverride_InteractorRootOverrideData_var);
    FUN_02f07e70(
                System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_var
                );
    FUN_02f07e70(PTR_DAT_06d03ce0);
    FUN_02f07e70(PTR_DAT_06d03498);
    FUN_02f07e70(System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_var)
    ;
    FUN_02f07e70(Fusion_NetworkBehaviour_ChangeDetector_PropertyData_var);
    FUN_02f07e70(OVRPlugin_Qpl_Annotation_Builder_var);
    FUN_02f07e70(<>f__AnonymousType0<string>_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d03490);
                    /* try { // try from 0639ffb4 to 0649ffdb has its CatchHandler @ 063a0138 */
    FUN_02f07e70(<>f__AnonymousType0<Assembly,_Type>_TypeInfo);
    FUN_02f07e70(<>f__AnonymousType0<string,_string>_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d03010);
    FUN_02f07e70(PTR_DAT_06d438e0);
    FUN_02f07e70(PTR_DAT_06d96378);
    FUN_02f07e70(PTR_DAT_06d96748);
    FUN_02f07e70(UnityEngine_ExecuteInEditMode_var);
                    /* try { // try from 063a0010 to 064a0037 has its CatchHandler @ 063a0134 */
    FUN_02f07e70(PlayFab_CloudScriptModels_ExecuteCloudScriptResult_var);
    FUN_02f07e70(PTR_DAT_06d02fa8);
    FUN_02f07e70(PTR_DAT_06d38bf0);
    FUN_02f07e70(PTR_DAT_06d45398);
    FUN_02f07e70(<>f__AnonymousType0<VisualEffectControlTrackController_Event,_int>_TypeInfo);
                    /* try { // try from 063a0044 to 064a004f has its CatchHandler @ 063a012c */
    FUN_02f07e70(<>f__AnonymousType1<string>_TypeInfo);
                    /* try { // try from 063a0058 to 064a005f has its CatchHandler @ 063a0128 */
    FUN_02f07e70(<>f__AnonymousType1<string,_bool,_bool,_string>_TypeInfo);
    FUN_02f07e70(<>f__AnonymousType2<string>_TypeInfo);
                    /* try { // try from 063a0068 to 064a0073 has its CatchHandler @ 063a0124 */
    FUN_02f07e70(<>f__AnonymousType2<string,_string>_TypeInfo);
                    /* try { // try from 063a0074 to 064a010b has its CatchHandler @ 0639fe7c */
    FUN_02f07e70(<>f__AnonymousType3<string,_string,_string,_string,_string>_TypeInfo);
    FUN_02f07e70(
                UnityEngine_XR_ARFoundation_ARTrackableManager<XRAnchorSubsystem,_XRAnchorSubsystemDescriptor,_XRAnchorSubsystem_Provider,_XRAnchor,_ARAnchor>_TypeInfo
                );
    FUN_02f07e70(
                UnityEngine_XR_ARFoundation_ARTrackableManager<XREnvironmentProbeSubsystem,_XREnvironmentProbeSubsystemDescriptor,_XREnvironmentProbeSubsystem_Provider,_XREnvironmentProbe,_AREnvironmentProbe>_TypeInfo
                );
    FUN_02f07e70(
                UnityEngine_XR_ARFoundation_ARTrackableManager<XRFaceSubsystem,_XRFaceSubsystemDescriptor,_XRFaceSubsystem_Provider,_XRFace,_ARFace>_TypeInfo
                );
    FUN_02f07e70(
                UnityEngine_XR_ARFoundation_ARTrackableManager<XRHumanBodySubsystem,_XRHumanBodySubsystemDescriptor,_XRHumanBodySubsystem_Provider,_XRHumanBody,_ARHumanBody>_TypeInfo
                );
    FUN_02f07e70(
                UnityEngine_XR_ARFoundation_ARTrackableManager<XRImageTrackingSubsystem,_XRImageTrackingSubsystemDescriptor,_XRImageTrackingSubsystem_Provider,_XRTrackedImage,_ARTrackedImage>_TypeInfo
                );
    DAT_071cd4ac = 1;
  }
  puVar9 = 
  UnityEngine_XR_ARFoundation_ARTrackableManager<XRImageTrackingSubsystem,_XRImageTrackingSubsystemDescriptor,_XRImageTrackingSubsystem_Provider,_XRTrackedImage,_ARTrackedImage>_TypeInfo
  ;
  puVar8 = <>f__AnonymousType1<string>_TypeInfo;
  puVar7 = <>f__AnonymousType0<VisualEffectControlTrackController_Event,_int>_TypeInfo;
  puVar6 = OVRAnchor_Tracker_AsyncLock_var;
  puVar5 = Unity_VisualScripting_UnityOnSelectMessageListener_var;
  uVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
  FUN_03f8322c(uVar14,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x120) = uVar14;
  thunk_FUN_02f411dc(param_1 + 0x120,uVar14);
  uVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
  FUN_03f8322c(uVar14,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x128) = uVar14;
  thunk_FUN_02f411dc(param_1 + 0x128,uVar14);
  uVar14 = thunk_FUN_02ef1808(*(undefined8 *)<>f__AnonymousType0<string,_string>_TypeInfo);
  FUN_040a1af0(uVar14,*(undefined8 *)
                       System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_var
              );
  *(undefined8 *)(param_1 + 0x140) = uVar14;
  thunk_FUN_02f411dc((long *)(param_1 + 0x140),uVar14);
  uVar14 = thunk_FUN_02ef1808(*(undefined8 *)<>f__AnonymousType0<Assembly,_Type>_TypeInfo);
  FUN_04022180(uVar14,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x160) = uVar14;
  thunk_FUN_02f411dc(param_1 + 0x160,uVar14);
  puVar2 = PTR_DAT_06d96378;
  uVar14 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d96378);
  FUN_062a6880(uVar14,*(undefined8 *)
                       UnityEngine_XR_ARFoundation_ARTrackableManager<XRHumanBodySubsystem,_XRHumanBodySubsystemDescriptor,_XRHumanBodySubsystem_Provider,_XRHumanBody,_ARHumanBody>_TypeInfo
               ,0);
  *(undefined8 *)(param_1 + 0x170) = uVar14;
  thunk_FUN_02f411dc(param_1 + 0x170,uVar14);
  uVar14 = thunk_FUN_02ef1808(*(undefined8 *)
                               System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_var
                             );
  FUN_04bd06a8(uVar14,*(undefined8 *)
                       OVRVirtualKeyboard_InteractorRootTransformOverride_InteractorRootOverrideData_var
              );
  *(undefined8 *)(param_1 + 0x178) = uVar14;
  thunk_FUN_02f411dc(param_1 + 0x178,uVar14);
  if (*(int *)(*(long *)PlayFab_CloudScriptModels_ExecuteCloudScriptResult_var + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar4 = <>f__AnonymousType3<string,_string,_string,_string,_string>_TypeInfo;
  puVar3 = UnityEngine_ExecuteInEditMode_var;
  FUN_0633d610(param_1,0);
  uVar14 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
  FUN_062a6880(uVar14,*(undefined8 *)puVar9,0);
  *(undefined8 *)(param_1 + 0x38) = uVar14;
  thunk_FUN_02f411dc((undefined8 *)(param_1 + 0x38),uVar14);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  uVar11 = FUN_066a0664(*(undefined8 *)puVar8,0);
  **(undefined4 **)(*(long *)puVar6 + 0xb8) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)puVar7,0);
  *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 4) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)
                         UnityEngine_XR_ARFoundation_ARTrackableManager<XREnvironmentProbeSubsystem,_XREnvironmentProbeSubsystemDescriptor,_XREnvironmentProbeSubsystem_Provider,_XREnvironmentProbe,_AREnvironmentProbe>_TypeInfo
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)<>f__AnonymousType2<string,_string>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0xc) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)
                         UnityEngine_XR_ARFoundation_ARTrackableManager<XRAnchorSubsystem,_XRAnchorSubsystemDescriptor,_XRAnchorSubsystem_Provider,_XRAnchor,_ARAnchor>_TypeInfo
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)<>f__AnonymousType1<string,_bool,_bool,_string>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x14) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)
                         UnityEngine_XR_ARFoundation_ARTrackableManager<XRFaceSubsystem,_XRFaceSubsystemDescriptor,_XRFaceSubsystem_Provider,_XRFace,_ARFace>_TypeInfo
                        ,0);
  *(undefined4 *)(param_1 + 0xe4) = uVar11;
  uVar11 = FUN_066a0664(*(undefined8 *)<>f__AnonymousType2<string>_TypeInfo,0);
  lVar16 = *(long *)puVar5;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_02f12b58(lVar16);
    lVar16 = *(long *)puVar5;
  }
  *(undefined4 *)(*(long *)(lVar16 + 0xb8) + 0x18) = uVar11;
  puVar2 = PTR_DAT_06d38bf0;
  uVar11 = FUN_066a0664(*(undefined8 *)puVar4,0);
  *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x1c) = uVar11;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  bVar10 = FUN_0636d3d0(0);
  *(byte *)(param_1 + 0xe0) = bVar10 & 1;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar4 = PTR_DAT_06d45398;
  puVar3 = PTR_DAT_06d03ce0;
  puVar2 = PTR_DAT_06d02fa8;
  iVar12 = FUN_06386dd0(0);
  iVar1 = iVar12 + 1;
  iVar13 = iVar1;
  if (*(char *)(param_1 + 0xe0) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    iVar13 = FUN_05603048(iVar1,iVar12,0);
  }
  uVar14 = FUN_02f07f14(*(undefined8 *)puVar3,iVar13);
  *(undefined8 *)(param_1 + 0x118) = uVar14;
  thunk_FUN_02f411dc(param_1 + 0x118);
  uVar14 = FUN_02f07f14(*(undefined8 *)puVar3,iVar1);
  *(undefined8 *)(param_1 + 0x110) = uVar14;
  thunk_FUN_02f411dc(param_1 + 0x110);
  uVar14 = FUN_02f07f14(*(undefined8 *)puVar3,iVar1);
  *(undefined8 *)(param_1 + 0x158) = uVar14;
  thunk_FUN_02f411dc(param_1 + 0x158);
  uVar14 = FUN_02f07f14(*(undefined8 *)puVar4,iVar13);
  *(undefined8 *)(param_1 + 0x130) = uVar14;
  thunk_FUN_02f411dc(param_1 + 0x130);
  uVar14 = FUN_02f07f14(*(undefined8 *)puVar2,iVar1);
  *(undefined8 *)(param_1 + 0x148) = uVar14;
  thunk_FUN_02f411dc(param_1 + 0x148);
  uVar14 = FUN_02f07f14(*(undefined8 *)puVar4,iVar13);
  lVar16 = *(long *)puVar5;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_02f12b58(lVar16);
    lVar16 = *(long *)puVar5;
  }
  puVar2 = PTR_DAT_06d96748;
  puVar15 = (undefined8 *)(*(long *)(lVar16 + 0xb8) + 0x20);
  *puVar15 = uVar14;
  thunk_FUN_02f411dc(puVar15,uVar14);
  uVar19 = 0;
  while( true ) {
    lVar16 = *(long *)puVar5;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar16 = *(long *)puVar5;
    }
    lVar17 = *(long *)(lVar16 + 0xb8);
    lVar18 = *(long *)(lVar17 + 0x20);
    if (lVar18 == 0) break;
    if ((long)*(int *)(lVar18 + 0x18) <= (long)uVar19) {
      if (*(char *)(param_1 + 0xe0) != '\0') {
LAB_063a05b8:
        uVar14 = FUN_066ae9f0(0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)puVar2);
        }
        uVar14 = FUN_062ccc34(uVar14,0);
        *(undefined8 *)(param_1 + 0xf8) = uVar14;
        thunk_FUN_02f411dc((undefined8 *)(param_1 + 0xf8),uVar14);
        return;
      }
      uVar14 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d438e0,iVar12);
      *(undefined8 *)(param_1 + 0x138) = uVar14;
      thunk_FUN_02f411dc(param_1 + 0x138);
      if (*(long *)(param_1 + 0x160) != 0) {
        FUN_04022538(*(long *)(param_1 + 0x160),iVar12,
                     *(undefined8 *)<>f__AnonymousType0<string>_TypeInfo);
        lVar16 = *(long *)(param_1 + 0x140);
        if (lVar16 != 0) {
          FUN_040a1ea8(lVar16,iVar12,*(undefined8 *)OVRPlugin_Qpl_Annotation_Builder_var);
          goto LAB_063a05b8;
        }
      }
      break;
    }
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar17 = *(long *)(*(long *)puVar5 + 0xb8);
      lVar18 = *(long *)(lVar17 + 0x20);
    }
    if (lVar18 == 0) break;
    if (*(uint *)(lVar18 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    uVar14 = *(undefined8 *)(lVar17 + 8);
    lVar18 = lVar18 + uVar19 * 0x10;
    uVar19 = uVar19 + 1;
    *(undefined8 *)(lVar18 + 0x28) = *(undefined8 *)(lVar17 + 0x10);
    *(undefined8 *)(lVar18 + 0x20) = uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


