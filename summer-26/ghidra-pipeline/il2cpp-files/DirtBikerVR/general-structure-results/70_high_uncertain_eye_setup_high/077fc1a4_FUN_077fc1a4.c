/*
FUNCTION_NAME: FUN_077fc1a4
ENTRY_POINT: 077fc1a4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_077fc1a4(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 local_48;
  
                    /* try { // try from 077fc1b4 to 078fc23f has its CatchHandler @ 077fbe20 */
  if ((DAT_089872da & 1) == 0) {
    FUN_03a8a718(
                System_Collections_Generic_Dictionary<Type,_ILPPMessageProvider_NetworkMessageTypes>_TypeInfo
                );
    FUN_03a8a718(System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>_TypeInfo
                );
    FUN_03a8a718(System_Collections_Generic_Dictionary<StylePropertyId,_string>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo)
    ;
    FUN_03a8a718(System_Runtime_Serialization_DataNode<byte>_TypeInfo);
    FUN_03a8a718(
                UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_HandInteractionPoses_var
                );
    FUN_03a8a718(System_Collections_Generic_Dictionary<Type,_IModule>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<TypeHandleRef,_IntRef>_TypeInfo);
    FUN_03a8a718(
                System_Collections_Generic_Dictionary<uint,_Dictionary<int,_NetworkObject>>_TypeInfo
                );
                    /* try { // try from 077fc240 to 078fc243 has its CatchHandler @ 077fc298 */
                    /* try { // try from 077fc244 to 078fc24b has its CatchHandler @ 077fbe20 */
    DAT_089872da = 1;
  }
  puVar2 = System_Collections_Generic_Dictionary<StylePropertyId,_string>_TypeInfo;
                    /* try { // try from 077fc24c to 078fc24f has its CatchHandler @ 077fc294 */
                    /* try { // try from 077fc250 to 078fc253 has its CatchHandler @ 077fc290 */
                    /* try { // try from 077fc254 to 078fc257 has its CatchHandler @ 077fc28c */
  local_48 = 0;
                    /* try { // try from 077fc258 to 078fc25b has its CatchHandler @ 077fc284 */
                    /* try { // try from 077fc25c to 078fc25f has its CatchHandler @ 077fc27c */
  if (*param_1 == 0) {
    local_48 = *(undefined8 *)(param_1 + 0xc);
                    /* try { // try from 077fc2d4 to 078fc2df has its CatchHandler @ 077fbe20 */
    param_1[0xc] = 0;
    param_1[0xd] = 0;
                    /* catch() { ... } // from try @ 077fc2cc with catch @ 077fc2dc */
    *param_1 = -1;
                    /* try { // try from 077fc2e0 to 078fc3ff has its CatchHandler @ 077fc2e0
                       catch() { ... } // from try @ 077fc2e0 with catch @ 077fc2e0
                       catch() { ... } // from try @ 077fc5cc with catch @ 077fc2e0
                       catch() { ... } // from try @ 077fc65c with catch @ 077fc2e0
                       catch() { ... } // from try @ 077fc67c with catch @ 077fc2e0
                       catch() { ... } // from try @ 077fc6d4 with catch @ 077fc2e0 */
  }
  else {
                    /* try { // try from 077fc260 to 078fc263 has its CatchHandler @ 077fc29c */
    lVar11 = *(long *)(param_1 + 8);
                    /* try { // try from 077fc264 to 078fc267 has its CatchHandler @ 077fc2a0 */
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
                    /* catch() { ... } // from try @ 077fc12c with catch @ 077fc268
                       try { // try from 077fc268 to 078fc2bb has its CatchHandler @ 077fbe20 */
                    /* catch() { ... } // from try @ 077fc0c8 with catch @ 077fc26c */
                    /* catch() { ... } // from try @ 077fbff8 with catch @ 077fc270 */
    FUN_077faeec(lVar11,0);
                    /* catch() { ... } // from try @ 077fc100 with catch @ 077fc274 */
                    /* catch() { ... } // from try @ 077fc020 with catch @ 077fc278 */
                    /* catch() { ... } // from try @ 077fc25c with catch @ 077fc27c */
    FUN_077faba0(*(undefined8 *)(param_1 + 10),0);
                    /* catch() { ... } // from try @ 077fbfe8 with catch @ 077fc280 */
    plVar12 = *(long **)(lVar11 + 0x10);
                    /* catch() { ... } // from try @ 077fc258 with catch @ 077fc284 */
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
                    /* catch() { ... } // from try @ 077fbfc4 with catch @ 077fc288 */
                    /* catch() { ... } // from try @ 077fc254 with catch @ 077fc28c */
    lVar8 = *plVar12;
                    /* catch() { ... } // from try @ 077fc250 with catch @ 077fc290 */
                    /* catch() { ... } // from try @ 077fbfb0 with catch @ 077fc294
                       catch() { ... } // from try @ 077fc24c with catch @ 077fc294 */
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    /* catch() { ... } // from try @ 077fbfa0 with catch @ 077fc298
                       catch() { ... } // from try @ 077fc240 with catch @ 077fc298 */
                    /* catch() { ... } // from try @ 077fc080 with catch @ 077fc29c
                       catch() { ... } // from try @ 077fc260 with catch @ 077fc29c */
    if (uVar9 != 0) {
                    /* catch() { ... } // from try @ 077fc038 with catch @ 077fc2a0
                       catch() { ... } // from try @ 077fc0e4 with catch @ 077fc2a0
                       catch() { ... } // from try @ 077fc178 with catch @ 077fc2a0
                       catch() { ... } // from try @ 077fc264 with catch @ 077fc2a0 */
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)
             UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_HandInteractionPoses_var
           ) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_077fc2f4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
                    /* try { // try from 077fc2bc to 078fc2bf has its CatchHandler @ 077fc2c8 */
      } while (uVar9 != 0);
    }
                    /* catch() { ... } // from try @ 077fc2bc with catch @ 077fc2c8 */
    puVar4 = (undefined8 *)
             FUN_03ac43c4(plVar12,*(long *)
                                   UnityEngine_XR_OpenXR_Features_Interactions_HandCommonPosesInteraction_HandInteractionPoses_var
                          ,0);
                    /* try { // try from 077fc2cc to 078fc2d3 has its CatchHandler @ 077fc2dc */
LAB_077fc2f4:
    uVar5 = (*(code *)*puVar4)(plVar12,puVar4[1]);
    plVar12 = *(long **)(lVar11 + 0x20);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar8 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)System_Runtime_Serialization_DataNode<byte>_TypeInfo
           ) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_077fc364;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_03ac43c4(plVar12,*(long *)System_Runtime_Serialization_DataNode<byte>_TypeInfo,1);
LAB_077fc364:
    uVar6 = (*(code *)*puVar4)(plVar12,puVar4[1]);
    uVar13 = *(undefined8 *)(param_1 + 10);
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo
                              );
    FUN_0781d4d4(uVar7,uVar5,uVar6,uVar13,0);
    plVar12 = *(long **)(lVar11 + 0x18);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar11 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<Type,_IModule>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar11 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_077fc400;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_03ac43c4(plVar12,*(long *)
                                   System_Collections_Generic_Dictionary<Type,_IModule>_TypeInfo,2);
LAB_077fc400:
                    /* try { // try from 077fc400 to 078fc407 has its CatchHandler @ 077fc694 */
    lVar11 = (*(code *)*puVar4)(plVar12,uVar7,0,puVar4[1]);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 077fc4fc to 078fc4ff has its CatchHandler @ 077fc6a0 */
      FUN_03a8a9c0();
    }
                    /* try { // try from 077fc420 to 078fc437 has its CatchHandler @ 077fc69c */
    local_48 = FUN_058b71ec(lVar11,*(undefined8 *)
                                    System_Collections_Generic_Dictionary<uint,_Dictionary<int,_NetworkObject>>_TypeInfo
                           );
    uVar9 = FUN_0587c6c4(&local_48,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<TypeHandleRef,_IntRef>_TypeInfo);
    if ((uVar9 & 1) == 0) {
                    /* try { // try from 077fc498 to 078fc4c7 has its CatchHandler @ 077fc698 */
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_48;
      thunk_FUN_03afed3c(param_1 + 0xc,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03fec870(param_1 + 2,&local_48,param_1,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<Type,_ILPPMessageProvider_NetworkMessageTypes>_TypeInfo
                  );
      return;
    }
  }
  uVar5 = FUN_0587c704(&local_48,
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>_TypeInfo
                      );
  puVar3 = System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>_TypeInfo;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *param_1 = -2;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(param_1 + 2,uVar5,*(undefined8 *)puVar3);
  return;
}


