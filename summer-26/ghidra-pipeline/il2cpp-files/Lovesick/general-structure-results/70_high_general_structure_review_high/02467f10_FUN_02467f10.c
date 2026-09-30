/*
FUNCTION_NAME: FUN_02467f10
ENTRY_POINT: 02467f10
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02467f10(long param_1,undefined8 param_2,undefined8 param_3)

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
  undefined *puVar10;
  byte bVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  
  puVar2 = PTR_DAT_033ed8c0;
                    /* try { // try from 02467f18 to 02567f23 has its CatchHandler @ 02467fac */
                    /* try { // try from 02467f30 to 02567f3b has its CatchHandler @ 02467fb0 */
  if ((DAT_0378251c & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f43d8);
                    /* try { // try from 02467f58 to 02567f5f has its CatchHandler @ 02467fb4 */
    thunk_FUN_00d48444(PTR_DAT_033f1788);
    thunk_FUN_00d48444(PTR_DAT_033ed8c0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
                    /* try { // try from 02467f78 to 02567f7f has its CatchHandler @ 02468424 */
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<MouseLeaveWindowEvent>_TypeId__);
    thunk_FUN_00d48444(Method_System_Configuration_ConfigurationSection_SerializeSection__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__);
                    /* try { // try from 02467f9c to 02567f9f has its CatchHandler @ 02467fa4 */
                    /* try { // try from 02467fa0 to 02567fd3 has its CatchHandler @ 02466810 */
                    /* catch() { ... } // from try @ 02467f9c with catch @ 02467fa4 */
    thunk_FUN_00d48444(Method_System_Collections_SortedList_SortedListEnumerator_MoveNext__);
                    /* catch() { ... } // from try @ 02467f18 with catch @ 02467fac */
                    /* catch() { ... } // from try @ 02467f30 with catch @ 02467fb0 */
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Attribute>_CopyTo__);
                    /* catch() { ... } // from try @ 02467f58 with catch @ 02467fb4 */
                    /* catch() { ... } // from try @ 02467f08 with catch @ 02467fb8 */
    thunk_FUN_00d48444(System_Action<XRInputSubsystem>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<int,_int,_NoOptions>>__
                      );
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<bool>>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<RenderGraphObjectPool_SharedObjectPoolBase>_Add__
                      );
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_First<string>__);
    thunk_FUN_00d48444(
                      UnityEngine_ProBuilder_MeshOperations_ConnectElements_<>c__DisplayClass3_0_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_1720);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass0_0_<CreateLightingDebugMode>b__2__
                      );
    thunk_FUN_00d48444(Method_System_Nullable<Pose>_get_HasValue__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f0ab0);
    DAT_0378251c = 1;
  }
  puVar9 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass0_0_<CreateLightingDebugMode>b__2__
  ;
  puVar8 = Method_System_Collections_SortedList_SortedListEnumerator_MoveNext__;
  puVar7 = Method_System_Collections_Generic_List<RenderGraphObjectPool_SharedObjectPoolBase>_Add__;
  puVar5 = Method_System_Collections_Generic_List<Attribute>_CopyTo__;
  puVar4 = UnityEngine_ProBuilder_MeshOperations_ConnectElements_<>c__DisplayClass3_0_TypeInfo;
  puVar3 = PTR_DAT_033f1788;
  FUN_017b46ec(param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar6 = Method_UnityEngine_UIElements_EventBase<MouseLeaveWindowEvent>_TypeId__;
  bVar11 = FUN_0243778c(0);
  *(byte *)(param_1 + 0x50) = bVar11 & 1;
  *(byte *)(param_1 + 0x51) = (byte)param_3 & 1;
  uVar12 = FUN_0267bd34(*(undefined8 *)puVar4,0);
  **(undefined4 **)(*(long *)puVar3 + 0xb8) = uVar12;
  uVar12 = FUN_0267bd34(*(undefined8 *)puVar8,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 4) = uVar12;
  uVar12 = FUN_0267bd34(*(undefined8 *)puVar7,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar12;
  uVar12 = FUN_0267bd34(*(undefined8 *)puVar5,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc) = uVar12;
  uVar12 = FUN_0267bd34(*(undefined8 *)puVar9,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = uVar12;
  puVar10 = StringLiteral_1720;
  puVar9 = Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<int,_int,_NoOptions>>__;
  puVar8 = Method_System_Linq_Enumerable_First<string>__;
  puVar7 = Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<bool>>__;
  puVar5 = Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__;
  puVar4 = System_Action<XRInputSubsystem>_TypeInfo;
  puVar2 = PTR_DAT_033f0ab0;
  if (*(char *)(param_1 + 0x50) == '\0') {
    uVar12 = FUN_0267bd34(*(undefined8 *)Method_System_Nullable<Pose>_get_HasValue__,0);
    *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x14) = uVar12;
    uVar12 = FUN_0267bd34(*(undefined8 *)puVar9,0);
    *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = uVar12;
    uVar12 = FUN_0267bd34(*(undefined8 *)puVar2,0);
    *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1c) = uVar12;
    uVar12 = FUN_0267bd34(*(undefined8 *)puVar7,0);
    *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20) = uVar12;
    uVar12 = FUN_0267bd34(*(undefined8 *)puVar4,0);
    *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x24) = uVar12;
    uVar12 = FUN_0267bd34(*(undefined8 *)puVar8,0);
    *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28) = uVar12;
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar12 = FUN_02443418(0);
    uVar15 = FUN_00da4fb8(*(undefined8 *)puVar5,uVar12);
    *(undefined8 *)(param_1 + 0x20) = uVar15;
    uVar15 = FUN_00da4fb8(*(undefined8 *)puVar5,uVar12);
    *(undefined8 *)(param_1 + 0x28) = uVar15;
    uVar15 = FUN_00da4fb8(*(undefined8 *)puVar5,uVar12);
    *(undefined8 *)(param_1 + 0x30) = uVar15;
    uVar15 = FUN_00da4fb8(*(undefined8 *)puVar5,uVar12);
    *(undefined8 *)(param_1 + 0x38) = uVar15;
    uVar15 = FUN_00da4fb8(*(undefined8 *)puVar5,uVar12);
    *(undefined8 *)(param_1 + 0x40) = uVar15;
    uVar15 = FUN_00da4fb8(*(undefined8 *)
                           Method_System_Collections_Generic_HashSet<RTHandle>_Contains__,uVar12);
    *(undefined8 *)(param_1 + 0x48) = uVar15;
  }
  else {
    uVar12 = FUN_0267bd34(*(undefined8 *)
                           Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__
                          ,0);
    *(undefined4 *)(param_1 + 0x10) = uVar12;
    uVar12 = FUN_0267bd34(*(undefined8 *)puVar10,0);
    *(undefined4 *)(param_1 + 0x14) = uVar12;
  }
  *(undefined8 *)(param_1 + 0xb0) = param_2;
  puVar2 = Method_System_Configuration_ConfigurationSection_SerializeSection__;
  if (*(char *)(param_1 + 0x51) == '\0') {
    return;
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  iVar13 = FUN_02443540(0);
  lVar17 = *(long *)puVar2;
  plVar16 = *(long **)(lVar17 + 0x38);
  if (plVar16 == (long *)0x0) {
    FUN_00d59478(lVar17);
    plVar16 = *(long **)(lVar17 + 0x38);
  }
  lVar17 = *plVar16;
  if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
    lVar17 = FUN_00d5941c();
  }
  puVar3 = PTR_DAT_033f43d8;
  if (*(int *)(lVar17 + 0x28) < 0) {
    iVar14 = thunk_FUN_00d42afc();
    iVar14 = iVar14 + -0x10;
  }
  else {
    iVar14 = 8;
  }
  lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  if (lVar17 != 0) {
    iVar1 = iVar13 + 3;
    if (-1 < iVar13) {
      iVar1 = iVar13;
    }
    thunk_FUN_0269b8d4(lVar17,iVar1 >> 2,iVar14,8,1,0);
    *(long *)(param_1 + 0xa0) = lVar17;
    uVar12 = FUN_02443548(0);
    lVar17 = *(long *)puVar2;
    plVar16 = *(long **)(lVar17 + 0x38);
    if (plVar16 == (long *)0x0) {
      FUN_00d59478(lVar17);
      plVar16 = *(long **)(lVar17 + 0x38);
    }
    lVar17 = *plVar16;
    if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
      lVar17 = FUN_00d5941c();
    }
    if (*(int *)(lVar17 + 0x28) < 0) {
      iVar13 = thunk_FUN_00d42afc();
      iVar13 = iVar13 + -0x10;
    }
    else {
      iVar13 = 8;
    }
    lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if (lVar17 != 0) {
      thunk_FUN_0269b8d4(lVar17,uVar12,iVar13,8,1,0);
      *(long *)(param_1 + 0xa8) = lVar17;
      *(int *)(param_1 + 100) = (int)((ulong)param_3 >> 0x20);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


