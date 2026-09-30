/*
FUNCTION_NAME: FUN_077f3be8
ENTRY_POINT: 077f3be8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_077f3be8(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 local_38;
  
                    /* try { // try from 077f3be8 to 078f3beb has its CatchHandler @ 077f3c7c */
                    /* try { // try from 077f3bfc to 078f3bff has its CatchHandler @ 077f3c74 */
  if ((DAT_08987298 & 1) == 0) {
                    /* try { // try from 077f3c10 to 078f3c13 has its CatchHandler @ 077f3c70 */
    FUN_03a8a718(System_Collections_Generic_Dictionary<string,_IDeserializable>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<Guid,_SFXPlayer_PlayEvent>_TypeInfo);
                    /* try { // try from 077f3c24 to 078f3c27 has its CatchHandler @ 077f3cb8 */
    FUN_03a8a718(System_Collections_Generic_Dictionary<Camera,_List<DebugUI_Widget>>_TypeInfo);
                    /* try { // try from 077f3c38 to 078f3c3b has its CatchHandler @ 077f3cac */
    FUN_03a8a718(System_Collections_Generic_Dictionary<HVRButtons,_HVRButtonState>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<HVRGrabbable,_HashSet<Collider>>_TypeInfo);
                    /* try { // try from 077f3c4c to 078f3c4f has its CatchHandler @ 077f3cbc */
    FUN_03a8a718(System_Collections_Generic_Dictionary<HVRGrabbable,_Coroutine>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<string,_HttpHeaderInfo>_TypeInfo);
                    /* try { // try from 077f3c60 to 078f3c63 has its CatchHandler @ 077f3ca4 */
                    /* catch() { ... } // from try @ 077f3a44 with catch @ 077f3c64
                       try { // try from 077f3c64 to 078f3cd7 has its CatchHandler @ 077f346c */
                    /* catch() { ... } // from try @ 077f39e0 with catch @ 077f3c68 */
    FUN_03a8a718(System_Collections_Generic_Dictionary<int,_List<uint>>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<HVRGrabbable,_float>_TypeInfo);
    FUN_03a8a718(
                System_Collections_Generic_Dictionary<StructMultiKey<Type,_Type>,_JsonContract>_TypeInfo
                );
    FUN_03a8a718(
                System_Collections_Generic_Dictionary<ValueTuple<DebugGizmoType,_Type>,_GizmoTypeInfo>_TypeInfo
                );
    FUN_03a8a718(
                System_Collections_Generic_Dictionary<ValueTuple<RenderGraphResourceType,_int>,_List<int>>_TypeInfo
                );
    FUN_03a8a718(System_Collections_Generic_Dictionary<string,_IDeserializable>_TypeInfo);
    FUN_03a8a718(
                System_Collections_Generic_Dictionary<string,_FriendListReceiveRequestItem>_TypeInfo
                );
    DAT_08987298 = 1;
  }
  puVar2 = System_Collections_Generic_Dictionary<Camera,_List<DebugUI_Widget>>_TypeInfo;
  local_38 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    lVar8 = *(long *)(param_1 + 8);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (*(long *)(lVar8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar12 = *(long **)(*(long *)(lVar8 + 0x20) + 0x10);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *plVar12;
    plVar10 = *(long **)(*(long *)(lVar8 + 0x10) + 0x10);
    uVar11 = *(undefined8 *)(lVar8 + 0x18);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<string,_HttpHeaderInfo>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_077f3d68;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_03ac43c4(plVar12,*(long *)
                                   System_Collections_Generic_Dictionary<string,_HttpHeaderInfo>_TypeInfo
                          ,0);
LAB_077f3d68:
    uVar4 = (*(code *)*puVar5)(plVar12,puVar5[1]);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar8 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<int,_List<uint>>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 6) * 0x10 + 0x138);
          goto LAB_077f3dd4;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_03ac43c4(plVar10,*(long *)
                                   System_Collections_Generic_Dictionary<int,_List<uint>>_TypeInfo,6
                         );
LAB_077f3dd4:
    lVar8 = (*(code *)*puVar5)(plVar10,uVar11,uVar4,puVar5[1]);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_38 = FUN_058b71ec(lVar8,*(undefined8 *)
                                   System_Collections_Generic_Dictionary<ValueTuple<RenderGraphResourceType,_int>,_List<int>>_TypeInfo
                           );
    uVar7 = FUN_0587c6c4(&local_38,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<ValueTuple<DebugGizmoType,_Type>,_GizmoTypeInfo>_TypeInfo
                        );
    if ((uVar7 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = local_38;
      thunk_FUN_03afed3c(param_1 + 10,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ffbd50(param_1 + 2,&local_38,param_1,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<string,_IDeserializable>_TypeInfo);
      return;
    }
  }
  lVar8 = FUN_0587c704(&local_38,
                       *(undefined8 *)
                        System_Collections_Generic_Dictionary<StructMultiKey<Type,_Type>,_JsonContract>_TypeInfo
                      );
  puVar3 = System_Collections_Generic_Dictionary<string,_FriendListReceiveRequestItem>_TypeInfo;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(long *)(lVar8 + 0x20) != 0) {
    uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0x20) + 0x10);
    lVar8 = *(long *)
             System_Collections_Generic_Dictionary<string,_FriendListReceiveRequestItem>_TypeInfo;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar8 = *(long *)puVar3;
    }
    puVar5 = *(undefined8 **)(lVar8 + 0xb8);
    lVar6 = puVar5[6];
    if (lVar6 == 0) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
        puVar5 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      uVar13 = *puVar5;
      lVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  System_Collections_Generic_Dictionary<HVRGrabbable,_Coroutine>_TypeInfo
                                );
      FUN_049639e4(lVar6,uVar13,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<string,_IDeserializable>_TypeInfo,0);
      plVar12 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x30);
      *plVar12 = lVar6;
      thunk_FUN_03afed3c(plVar12,lVar6);
    }
    uVar11 = FUN_044d3220(uVar11,lVar6,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<HVRButtons,_HVRButtonState>_TypeInfo
                         );
    uVar11 = FUN_044e130c(uVar11,*(undefined8 *)
                                  System_Collections_Generic_Dictionary<HVRGrabbable,_HashSet<Collider>>_TypeInfo
                         );
    puVar3 = System_Collections_Generic_Dictionary<Guid,_SFXPlayer_PlayEvent>_TypeInfo;
    iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
    *param_1 = -2;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(param_1 + 2,uVar11,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


