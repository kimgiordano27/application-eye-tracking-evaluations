/*
FUNCTION_NAME: Unity.Services.Economy.Internal.Currencies.SetPlayerCurrencyBalanceRequest$$ConstructUrl
ENTRY_POINT: 05f09c78
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Unity_Services_Economy_Internal_Currencies_SetPlayerCurrencyBalanceRequest__ConstructUrl(void)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar6;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar7;
  long *unaff_x23;
  undefined8 uVar8;
  undefined4 uVar9;
  
  thunk_FUN_02e9a04c();
  if (cRam0000000006e94437 == '\0') {
    FUN_02e3ca1c(Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs_var);
    cRam0000000006e94437 = '\x01';
  }
  lVar3 = *unaff_x23;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar3 = *unaff_x23;
  }
  if (**(long **)(lVar3 + 0xb8) == 0) {
LAB_05f0a12c:
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  uVar4 = FUN_05f08d64();
  *unaff_x22 = uVar4;
  thunk_FUN_02ee2be8();
  uVar8 = *unaff_x22;
  uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)Fusion_NetworkBehaviourBufferInterpolator_var);
  FUN_05eb8188(uVar4,uVar8,0);
  *(undefined8 *)(unaff_x19 + 0x58) = uVar4;
  thunk_FUN_02ee2be8((undefined8 *)(unaff_x19 + 0x58),uVar4);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x50);
  uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)Fusion_NetworkBehaviourId_var);
  FUN_05eb8fd0(uVar4,uVar8,0);
  *(undefined8 *)(unaff_x19 + 0x68) = uVar4;
  thunk_FUN_02ee2be8((undefined8 *)(unaff_x19 + 0x68),uVar4);
  if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05f0a12c;
  uVar8 = *(undefined8 *)(unaff_x19 + 0x50);
  uVar9 = *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + 0x14);
  uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_InputSystem_Utilities_NameAndParameters_var)
  ;
  FUN_05eb2e1c(uVar9,uVar4,uVar8,0);
  *(undefined8 *)(unaff_x19 + 0x70) = uVar4;
  thunk_FUN_02ee2be8((undefined8 *)(unaff_x19 + 0x70),uVar4);
  if (*(int *)(unaff_x19 + 0x28) == 1) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05f0a12c;
    uVar8 = *(undefined8 *)(unaff_x19 + 0x50);
    uVar9 = *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + 0x14);
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)Fusion_NetworkBufferSerializerInfo_var);
    FUN_05eb94b8(uVar9,uVar4,uVar8,0);
    puVar5 = (undefined8 *)(unaff_x19 + 0x60);
    *puVar5 = uVar4;
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x19 + 0x50);
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)Fusion_NetworkBehaviour_var);
    FUN_05eb7750(uVar4,uVar8,0);
    puVar5 = (undefined8 *)(unaff_x19 + 0xc0);
    *puVar5 = uVar4;
  }
  thunk_FUN_02ee2be8(puVar5,uVar4);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x50);
  uVar9 = *(undefined4 *)(unaff_x19 + 0x28);
  uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_Linq_NamespaceCache_var);
  FUN_05eb0808(uVar4,uVar8,uVar9,0);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar4;
  thunk_FUN_02ee2be8((undefined8 *)(unaff_x19 + 0x78),uVar4);
  if (unaff_x20 == (long *)0x0) {
    unaff_x20 = (long *)0x0;
  }
  else if (*unaff_x20 != *(long *)PTR_DAT_06ab5ea8) {
    unaff_x20 = (long *)0x0;
  }
  iVar2 = *(int *)(unaff_x19 + 0x28);
  if (iVar2 == 1) {
    if (unaff_x20 == (long *)0x0) goto LAB_05f0a12c;
    uVar8 = *(undefined8 *)(unaff_x21 + 0x18);
    iVar2 = FUN_05f2836c(unaff_x20,0);
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)
                                System_Reactive_Disposables_MultipleAssignmentDisposableValue_var);
    FUN_05eabcf8(uVar4,0xc9,uVar8,0,iVar2 != 1,0,0);
    *(undefined8 *)(unaff_x19 + 0x80) = uVar4;
    thunk_FUN_02ee2be8((undefined8 *)(unaff_x19 + 0x80),uVar4);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x50);
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)System_Data_NameNode_var);
    FUN_05eabf60(uVar4,uVar8,0);
    *(undefined8 *)(unaff_x19 + 0x98) = uVar4;
    thunk_FUN_02ee2be8((undefined8 *)(unaff_x19 + 0x98),uVar4);
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05f0a12c;
    uVar8 = *(undefined8 *)(unaff_x19 + 0x98);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x30);
    uVar7 = *(undefined8 *)(unaff_x19 + 0xa8);
    uVar1 = *(undefined1 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06ab5ea0);
    FUN_05eac02c(uVar4,uVar7,uVar6,uVar8,uVar1,0);
    *(undefined8 *)(unaff_x19 + 0x88) = uVar4;
    thunk_FUN_02ee2be8((undefined8 *)(unaff_x19 + 0x88),uVar4);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x50);
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_Linq_NamespaceResolver_var);
    FUN_05eaf084(uVar4,uVar8,0);
    puVar5 = (undefined8 *)(unaff_x19 + 0xa0);
    *puVar5 = uVar4;
    thunk_FUN_02ee2be8(puVar5,uVar4);
    uVar8 = *puVar5;
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_UI_Navigation_var);
    FUN_05eaf264(uVar4,uVar8,0);
    puVar5 = (undefined8 *)(unaff_x19 + 0x90);
    *puVar5 = uVar4;
  }
  else if (iVar2 == 3) {
    if (unaff_x20 == (long *)0x0) goto LAB_05f0a12c;
    *(long *)(unaff_x19 + 0xd8) = unaff_x20[0x53];
    thunk_FUN_02ee2be8();
    uVar8 = *(undefined8 *)(unaff_x19 + 0x50);
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)
                                UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassData_var
                              );
    FUN_05eb98cc(uVar4,uVar8,0);
    puVar5 = (undefined8 *)(unaff_x19 + 0xd0);
    *puVar5 = uVar4;
    thunk_FUN_02ee2be8(puVar5,uVar4);
    uVar8 = 0;
    if (*(int *)(unaff_x19 + 0x28) == 1) {
      uVar8 = *puVar5;
    }
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05f0a12c;
    uVar6 = *(undefined8 *)(unaff_x19 + 0x38);
    uVar1 = *(undefined1 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_InputSystem_UI_NavigationModel_var);
    FUN_05eb995c(uVar4,uVar6,uVar8,uVar1,0);
    puVar5 = (undefined8 *)(unaff_x19 + 200);
    *puVar5 = uVar4;
  }
  else {
    if (iVar2 != 2) goto LAB_05f0a10c;
    uVar8 = *(undefined8 *)(unaff_x19 + 0x50);
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_TextCore_Text_NativeTextInfo_var);
    FUN_05ebbc24(uVar4,uVar8,0);
    puVar5 = (undefined8 *)(unaff_x19 + 0xb8);
    *puVar5 = uVar4;
    thunk_FUN_02ee2be8(puVar5,uVar4);
    uVar8 = 0;
    if (*(int *)(unaff_x19 + 0x28) == 1) {
      uVar8 = *puVar5;
    }
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05f0a12c;
    uVar6 = *(undefined8 *)(unaff_x19 + 0x38);
    uVar1 = *(undefined1 *)(*(long *)(unaff_x19 + 0x20) + 0x18);
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)Fusion_NetworkArray<T>_var);
    FUN_05ebbcb4(uVar4,uVar6,uVar8,uVar1,0);
    puVar5 = (undefined8 *)(unaff_x19 + 0xb0);
    *puVar5 = uVar4;
  }
  thunk_FUN_02ee2be8(puVar5,uVar4);
LAB_05f0a10c:
  *(undefined1 *)(unaff_x19 + 0x40) = 0;
  return 1;
}


