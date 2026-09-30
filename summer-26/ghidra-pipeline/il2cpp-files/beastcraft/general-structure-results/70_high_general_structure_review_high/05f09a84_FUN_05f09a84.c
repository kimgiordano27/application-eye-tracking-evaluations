/*
FUNCTION_NAME: FUN_05f09a84
ENTRY_POINT: 05f09a84
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_05f09a84(long param_1,long *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  
  if ((bRam0000000006e94400 & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a6ce50);
    FUN_02e3ca1c(System_Reactive_Disposables_MultipleAssignmentDisposableValue_var);
    FUN_02e3ca1c(PTR_DAT_06ab5ea0);
    FUN_02e3ca1c(UnityEngine_InputSystem_Utilities_NameAndParameters_var);
    FUN_02e3ca1c(System_Data_NameNode_var);
    FUN_02e3ca1c(System_Xml_Linq_NamespaceCache_var);
    FUN_02e3ca1c(System_Xml_Linq_NamespaceResolver_var);
    FUN_02e3ca1c(UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassData_var
                );
    FUN_02e3ca1c(UnityEngine_TextCore_Text_NativeTextInfo_var);
    FUN_02e3ca1c(UnityEngine_UI_Navigation_var);
    FUN_02e3ca1c(UnityEngine_InputSystem_UI_NavigationModel_var);
    FUN_02e3ca1c(Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs_var);
    FUN_02e3ca1c(Fusion_NetworkArray<T>_var);
    FUN_02e3ca1c(Fusion_NetworkBehaviour_var);
    FUN_02e3ca1c(Fusion_NetworkBehaviourBufferInterpolator_var);
    FUN_02e3ca1c(Fusion_NetworkBehaviourId_var);
    FUN_02e3ca1c(Fusion_NetworkBufferSerializerInfo_var);
    FUN_02e3ca1c(Fusion_NetworkDictionary<K,_V>_var);
    FUN_02e3ca1c(PTR_DAT_06a663b0);
    FUN_02e3ca1c(PTR_DAT_06ab5ea8);
    bRam0000000006e94400 = 1;
  }
  if (*(char *)(param_1 + 0x40) == '\0') {
    return 1;
  }
  uVar4 = FUN_05f098d8(param_1,param_2);
  *(int *)(param_1 + 0x28) = (int)uVar4;
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  uVar4 = FUN_05f096b4(param_1);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  thunk_FUN_02ee2be8();
  uVar4 = FUN_05f09734(param_1);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  thunk_FUN_02ee2be8();
  if (*(int *)(*(long *)PTR_DAT_06a663b0 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  lVar5 = FUN_0391e9f8(*(undefined8 *)Fusion_NetworkDictionary<K,_V>_var);
  if (lVar5 == 0) {
    return 0;
  }
  uVar4 = *(undefined8 *)(lVar5 + 0x30);
  if (*(int *)(*(long *)PTR_DAT_06a6ce50 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar4 = FUN_05e13818(uVar4,0);
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  thunk_FUN_02ee2be8();
  puVar2 = Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs_var;
  plVar8 = (long *)(param_1 + 0x50);
  lVar11 = *plVar8;
  if (lVar11 == 0) {
    if (*(int *)(*(long *)Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs_var + 0xe4)
        == 0) {
      thunk_FUN_02e9a04c();
    }
    if (cRam0000000006e94437 == '\0') {
      FUN_02e3ca1c(Unity_XR_CoreUtils_ARTrackablesParentTransformChangedEventArgs_var);
      cRam0000000006e94437 = '\x01';
    }
    lVar11 = *(long *)puVar2;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar11 = *(long *)puVar2;
    }
    if (**(long **)(lVar11 + 0xb8) == 0) goto LAB_05f0a12c;
    lVar11 = FUN_05f08d64();
    *plVar8 = lVar11;
    thunk_FUN_02ee2be8(plVar8,lVar11);
    lVar11 = *plVar8;
  }
  uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)Fusion_NetworkBehaviourBufferInterpolator_var);
  FUN_05eb8188(uVar4,lVar11,0);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  thunk_FUN_02ee2be8((undefined8 *)(param_1 + 0x58),uVar4);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)Fusion_NetworkBehaviourId_var);
  FUN_05eb8fd0(uVar4,uVar9,0);
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  thunk_FUN_02ee2be8((undefined8 *)(param_1 + 0x68),uVar4);
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_05f0a12c;
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  uVar12 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14);
  uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_InputSystem_Utilities_NameAndParameters_var)
  ;
  FUN_05eb2e1c(uVar12,uVar4,uVar9,0);
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  thunk_FUN_02ee2be8((undefined8 *)(param_1 + 0x70),uVar4);
  if (*(int *)(param_1 + 0x28) == 1) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_05f0a12c;
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    uVar12 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14);
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)Fusion_NetworkBufferSerializerInfo_var);
    FUN_05eb94b8(uVar12,uVar4,uVar9,0);
    puVar6 = (undefined8 *)(param_1 + 0x60);
    *puVar6 = uVar4;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)Fusion_NetworkBehaviour_var);
    FUN_05eb7750(uVar4,uVar9,0);
    puVar6 = (undefined8 *)(param_1 + 0xc0);
    *puVar6 = uVar4;
  }
  thunk_FUN_02ee2be8(puVar6,uVar4);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  uVar12 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_Linq_NamespaceCache_var);
  FUN_05eb0808(uVar4,uVar9,uVar12,0);
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  thunk_FUN_02ee2be8((undefined8 *)(param_1 + 0x78),uVar4);
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
  }
  else if (*param_2 != *(long *)PTR_DAT_06ab5ea8) {
    param_2 = (long *)0x0;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 == 1) {
    if (param_2 == (long *)0x0) {
LAB_05f0a12c:
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    uVar9 = *(undefined8 *)(lVar5 + 0x18);
    iVar3 = FUN_05f2836c(param_2,0);
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)
                                System_Reactive_Disposables_MultipleAssignmentDisposableValue_var);
    FUN_05eabcf8(uVar4,0xc9,uVar9,0,iVar3 != 1,0,0);
    *(undefined8 *)(param_1 + 0x80) = uVar4;
    thunk_FUN_02ee2be8((undefined8 *)(param_1 + 0x80),uVar4);
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)System_Data_NameNode_var);
    FUN_05eabf60(uVar4,uVar9,0);
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    thunk_FUN_02ee2be8((undefined8 *)(param_1 + 0x98),uVar4);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_05f0a12c;
    uVar9 = *(undefined8 *)(param_1 + 0x98);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uVar10 = *(undefined8 *)(param_1 + 0xa8);
    uVar1 = *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x18);
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06ab5ea0);
    FUN_05eac02c(uVar4,uVar10,uVar7,uVar9,uVar1,0);
    *(undefined8 *)(param_1 + 0x88) = uVar4;
    thunk_FUN_02ee2be8((undefined8 *)(param_1 + 0x88),uVar4);
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)System_Xml_Linq_NamespaceResolver_var);
    FUN_05eaf084(uVar4,uVar9,0);
    puVar6 = (undefined8 *)(param_1 + 0xa0);
    *puVar6 = uVar4;
    thunk_FUN_02ee2be8(puVar6,uVar4);
    uVar9 = *puVar6;
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_UI_Navigation_var);
    FUN_05eaf264(uVar4,uVar9,0);
    puVar6 = (undefined8 *)(param_1 + 0x90);
    *puVar6 = uVar4;
  }
  else if (iVar3 == 3) {
    if (param_2 == (long *)0x0) goto LAB_05f0a12c;
    *(long *)(param_1 + 0xd8) = param_2[0x53];
    thunk_FUN_02ee2be8();
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)
                                UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_NativePassData_var
                              );
    FUN_05eb98cc(uVar4,uVar9,0);
    puVar6 = (undefined8 *)(param_1 + 0xd0);
    *puVar6 = uVar4;
    thunk_FUN_02ee2be8(puVar6,uVar4);
    uVar9 = 0;
    if (*(int *)(param_1 + 0x28) == 1) {
      uVar9 = *puVar6;
    }
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_05f0a12c;
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x18);
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_InputSystem_UI_NavigationModel_var);
    FUN_05eb995c(uVar4,uVar7,uVar9,uVar1,0);
    puVar6 = (undefined8 *)(param_1 + 200);
    *puVar6 = uVar4;
  }
  else {
    if (iVar3 != 2) goto LAB_05f0a10c;
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)UnityEngine_TextCore_Text_NativeTextInfo_var);
    FUN_05ebbc24(uVar4,uVar9,0);
    puVar6 = (undefined8 *)(param_1 + 0xb8);
    *puVar6 = uVar4;
    thunk_FUN_02ee2be8(puVar6,uVar4);
    uVar9 = 0;
    if (*(int *)(param_1 + 0x28) == 1) {
      uVar9 = *puVar6;
    }
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_05f0a12c;
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x18);
    uVar4 = thunk_FUN_02e78ab8(*(undefined8 *)Fusion_NetworkArray<T>_var);
    FUN_05ebbcb4(uVar4,uVar7,uVar9,uVar1,0);
    puVar6 = (undefined8 *)(param_1 + 0xb0);
    *puVar6 = uVar4;
  }
  thunk_FUN_02ee2be8(puVar6,uVar4);
LAB_05f0a10c:
  *(undefined1 *)(param_1 + 0x40) = 0;
  return 1;
}


