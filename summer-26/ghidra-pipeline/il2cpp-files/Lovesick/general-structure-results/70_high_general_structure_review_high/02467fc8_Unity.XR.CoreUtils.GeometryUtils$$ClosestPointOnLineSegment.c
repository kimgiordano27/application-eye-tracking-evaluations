/*
FUNCTION_NAME: Unity.XR.CoreUtils.GeometryUtils$$ClosestPointOnLineSegment
ENTRY_POINT: 02467fc8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_XR_CoreUtils_GeometryUtils__ClosestPointOnLineSegment(void)

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
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long lVar17;
  long *unaff_x23;
  
  thunk_FUN_00d48444();
                    /* try { // try from 02467fd4 to 02567fd7 has its CatchHandler @ 024683a0 */
  thunk_FUN_00d48444(
                    Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<bool>>__
                    );
                    /* try { // try from 02467fd8 to 02568047 has its CatchHandler @ 02466810 */
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
  thunk_FUN_00d48444(Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__
                    );
  thunk_FUN_00d48444(PTR_DAT_033f0ab0);
  *(undefined1 *)(unaff_x22 + 0x51c) = 1;
  puVar8 = 
  Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_<>c__DisplayClass0_0_<CreateLightingDebugMode>b__2__
  ;
  puVar7 = Method_System_Collections_SortedList_SortedListEnumerator_MoveNext__;
  puVar5 = Method_System_Collections_Generic_List<RenderGraphObjectPool_SharedObjectPoolBase>_Add__;
  puVar4 = Method_System_Collections_Generic_List<Attribute>_CopyTo__;
  puVar2 = UnityEngine_ProBuilder_MeshOperations_ConnectElements_<>c__DisplayClass3_0_TypeInfo;
  puVar3 = PTR_DAT_033f1788;
                    /* try { // try from 02468048 to 0256804f has its CatchHandler @ 024684a4 */
                    /* try { // try from 02468058 to 0256805f has its CatchHandler @ 02468430 */
                    /* try { // try from 02468070 to 02568077 has its CatchHandler @ 0246842c */
  FUN_017b46ec();
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                    /* try { // try from 02468088 to 02568093 has its CatchHandler @ 02468428 */
    thunk_FUN_00d32864();
  }
  puVar6 = Method_UnityEngine_UIElements_EventBase<MouseLeaveWindowEvent>_TypeId__;
  bVar11 = FUN_0243778c(0);
                    /* try { // try from 024680a0 to 025680ab has its CatchHandler @ 02468434 */
  *(byte *)(unaff_x19 + 0x50) = bVar11 & 1;
  *(byte *)(unaff_x19 + 0x51) = (byte)unaff_x20 & 1;
  uVar12 = FUN_0267bd34(*(undefined8 *)puVar2,0);
                    /* try { // try from 024680bc to 025680f3 has its CatchHandler @ 024684e8 */
  **(undefined4 **)(*(long *)puVar3 + 0xb8) = uVar12;
  uVar12 = FUN_0267bd34(*(undefined8 *)puVar7,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 4) = uVar12;
  uVar12 = FUN_0267bd34(*(undefined8 *)puVar5,0);
                    /* try { // try from 024680f4 to 02568293 has its CatchHandler @ 02466810 */
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar12;
  uVar12 = FUN_0267bd34(*(undefined8 *)puVar4,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc) = uVar12;
  uVar12 = FUN_0267bd34(*(undefined8 *)puVar8,0);
  *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = uVar12;
  puVar10 = StringLiteral_1720;
  puVar9 = Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<int,_int,_NoOptions>>__;
  puVar8 = Method_System_Linq_Enumerable_First<string>__;
  puVar7 = Method_Newtonsoft_Json_Utilities_AsyncUtils_CancelIfRequestedAsync<Nullable<bool>>__;
  puVar5 = Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__;
  puVar4 = System_Action<XRInputSubsystem>_TypeInfo;
  puVar2 = PTR_DAT_033f0ab0;
  if (*(char *)(unaff_x19 + 0x50) == '\0') {
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
    *(undefined8 *)(unaff_x19 + 0x20) = uVar15;
    uVar15 = FUN_00da4fb8(*(undefined8 *)puVar5,uVar12);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar15;
    uVar15 = FUN_00da4fb8(*(undefined8 *)puVar5,uVar12);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar15;
    uVar15 = FUN_00da4fb8(*(undefined8 *)puVar5,uVar12);
    *(undefined8 *)(unaff_x19 + 0x38) = uVar15;
    uVar15 = FUN_00da4fb8(*(undefined8 *)puVar5,uVar12);
    *(undefined8 *)(unaff_x19 + 0x40) = uVar15;
    uVar15 = FUN_00da4fb8(*(undefined8 *)
                           Method_System_Collections_Generic_HashSet<RTHandle>_Contains__,uVar12);
    *(undefined8 *)(unaff_x19 + 0x48) = uVar15;
  }
  else {
    uVar12 = FUN_0267bd34(*(undefined8 *)
                           Method_System_Runtime_Remoting_Channels_ChannelServices_RegisterChannelConfig__
                          ,0);
    *(undefined4 *)(unaff_x19 + 0x10) = uVar12;
    uVar12 = FUN_0267bd34(*(undefined8 *)puVar10,0);
    *(undefined4 *)(unaff_x19 + 0x14) = uVar12;
  }
  *(undefined8 *)(unaff_x19 + 0xb0) = unaff_x21;
  puVar3 = Method_System_Configuration_ConfigurationSection_SerializeSection__;
  if (*(char *)(unaff_x19 + 0x51) == '\0') {
    return;
  }
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  iVar13 = FUN_02443540(0);
  lVar17 = *(long *)puVar3;
  plVar16 = *(long **)(lVar17 + 0x38);
  if (plVar16 == (long *)0x0) {
    FUN_00d59478(lVar17);
    plVar16 = *(long **)(lVar17 + 0x38);
  }
  lVar17 = *plVar16;
  if ((*(byte *)(lVar17 + 0x132) & 1) == 0) {
    lVar17 = FUN_00d5941c();
  }
  puVar2 = PTR_DAT_033f43d8;
  if (*(int *)(lVar17 + 0x28) < 0) {
    iVar14 = thunk_FUN_00d42afc();
    iVar14 = iVar14 + -0x10;
  }
  else {
    iVar14 = 8;
  }
  lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar17 != 0) {
    iVar1 = iVar13 + 3;
    if (-1 < iVar13) {
      iVar1 = iVar13;
    }
    thunk_FUN_0269b8d4(lVar17,iVar1 >> 2,iVar14,8,1,0);
    *(long *)(unaff_x19 + 0xa0) = lVar17;
    uVar12 = FUN_02443548(0);
    lVar17 = *(long *)puVar3;
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
    lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar17 != 0) {
      thunk_FUN_0269b8d4(lVar17,uVar12,iVar13,8,1,0);
      *(long *)(unaff_x19 + 0xa8) = lVar17;
      *(int *)(unaff_x19 + 100) = (int)((ulong)unaff_x20 >> 0x20);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


