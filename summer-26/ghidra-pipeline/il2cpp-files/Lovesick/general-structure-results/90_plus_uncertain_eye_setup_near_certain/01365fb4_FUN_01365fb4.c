/*
FUNCTION_NAME: FUN_01365fb4
ENTRY_POINT: 01365fb4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * FUN_01365fb4(undefined1 param_1 [16],undefined4 param_2,undefined8 *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  code *pcVar11;
  ushort uVar12;
  int *piVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined4 uVar19;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  ulong local_70;
  undefined4 local_68;
  
  if ((DAT_0377673c & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_3288);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<__Il2CppFullySharedGenericStructType>_RemoveRange__)
    ;
    thunk_FUN_00d48444(System_Xml_XmlTextReaderImpl_NodeData___TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2558);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<VisualElement>_set_Item__);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Vector3>_set_Item__);
    thunk_FUN_00d48444(StringLiteral_12935);
                    /* try { // try from 01366050 to 0146609b has its CatchHandler @ 01366380 */
    thunk_FUN_00d48444(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
    DAT_0377673c = 1;
  }
  plVar14 = (long *)(param_4 + 0x20);
  lVar7 = *plVar14;
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0xd0);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_00d5941c();
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  lVar10 = *plVar14;
  uVar12 = *(ushort *)(lVar10 + 0x132);
  lVar7 = lVar10;
  if ((uVar12 & 1) == 0) {
    lVar10 = FUN_00d5941c(lVar10);
    uVar12 = *(ushort *)(*plVar14 + 0x132);
    lVar7 = *plVar14;
                    /* try { // try from 013660b0 to 014660b7 has its CatchHandler @ 0136637c */
  }
  uVar15 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 200);
  if ((uVar12 & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
  }
                    /* try { // try from 013660d4 to 014660db has its CatchHandler @ 01366394 */
                    /* try { // try from 013660e4 to 014660eb has its CatchHandler @ 01366390 */
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 200);
  (**(code **)(lVar7 + 0x10))(uVar15,lVar7,0,0,&local_78);
  plVar3 = local_78;
  lVar10 = *plVar14;
  uVar12 = *(ushort *)(lVar10 + 0x132);
  lVar7 = lVar10;
  if ((uVar12 & 1) == 0) {
    lVar10 = FUN_00d5941c(lVar10);
                    /* try { // try from 0136610c to 01466203 has its CatchHandler @ 01366398 */
    uVar12 = *(ushort *)(*plVar14 + 0x132);
    lVar7 = *plVar14;
  }
  uVar15 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0xe0);
  if ((uVar12 & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0xe0);
  local_90 = param_3;
  (**(code **)(lVar7 + 0x10))(uVar15,lVar7,0,&local_90,&local_78);
  if ((char)local_78 == '\0') {
    if (param_3 == (undefined8 *)0x0) goto LAB_01366ffc;
    iVar4 = FUN_026d8144(param_3,0);
    if (iVar4 != 9) {
      plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
      puVar1 = Method_System_Collections_Generic_List<Vector3>_set_Item__;
      if (plVar8 == (long *)0x0) goto LAB_01366ffc;
      if ((*(long *)Method_System_Collections_Generic_List<Vector3>_set_Item__ != 0) &&
         (lVar7 = thunk_FUN_00d6225c(*(long *)
                                      Method_System_Collections_Generic_List<Vector3>_set_Item__,
                                     *(undefined8 *)(*plVar8 + 0x40)), lVar7 == 0)) {
LAB_01367004:
        uVar15 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar15,0);
      }
      puVar2 = StringLiteral_3288;
      if ((int)plVar8[3] == 0) goto LAB_01367000;
      plVar8[4] = *(long *)puVar1;
      local_68 = FUN_026d8144(param_3,0);
      local_78 = *(long **)puVar2;
      local_70 = 0xffffffffffffffff;
      lVar7 = FUN_017a7f78(&local_78,0);
      if ((lVar7 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_01367004;
      puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__;
                    /* try { // try from 0136621c to 01466227 has its CatchHandler @ 01366378 */
      uVar9 = *(uint *)(plVar8 + 3);
      if (uVar9 < 2) {
LAB_01367000:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      plVar8[5] = lVar7;
      lVar7 = *(long *)puVar1;
      if (lVar7 != 0) {
        lVar7 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar8 + 0x40));
                    /* try { // try from 01366248 to 014662c7 has its CatchHandler @ 01366384 */
        if (lVar7 == 0) goto LAB_01367004;
        uVar9 = *(uint *)(plVar8 + 3);
      }
      if (uVar9 < 3) goto LAB_01367000;
      plVar8[6] = *(long *)puVar1;
      local_80 = FUN_026cc440(param_3,0);
      local_90 = *(undefined8 **)puVar2;
      uStack_88 = 0xffffffffffffffff;
      lVar7 = FUN_017a7f78(&local_90,0);
      if ((lVar7 != 0) &&
         (lVar10 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
      goto LAB_01367004;
      puVar1 = StringLiteral_12935;
      uVar9 = *(uint *)(plVar8 + 3);
      if (uVar9 < 4) goto LAB_01367000;
      plVar8[7] = lVar7;
      lVar7 = *(long *)puVar1;
      if (lVar7 != 0) {
                    /* try { // try from 013662c8 to 01466347 has its CatchHandler @ 01365e00 */
        lVar7 = thunk_FUN_00d6225c(lVar7,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar7 == 0) goto LAB_01367004;
        uVar9 = *(uint *)(plVar8 + 3);
      }
      puVar2 = StringLiteral_302;
      if (uVar9 < 5) goto LAB_01367000;
      plVar8[8] = *(long *)puVar1;
      uVar15 = FUN_01600844(plVar8,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      FUN_02661cd8(0,uVar15,0);
    }
  }
  else if (param_3 == (undefined8 *)0x0) goto LAB_01366ffc;
  puVar2 = StringLiteral_2558;
  puVar1 = Method_System_Collections_Generic_List<VisualElement>_set_Item__;
  iVar4 = FUN_026d586c(param_3,0);
  if (iVar4 == 1) {
                    /* catch() { ... } // from try @ 013660e4 with catch @ 01366390 */
    lVar7 = *(long *)puVar1;
                    /* catch() { ... } // from try @ 013660d4 with catch @ 01366394 */
                    /* catch() { ... } // from try @ 0136610c with catch @ 01366398 */
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *(long *)puVar1;
    }
    if (plVar3 == (long *)0x0) goto LAB_01366ffc;
    lVar10 = *plVar14;
    uVar12 = *(ushort *)(lVar10 + 0x132);
                    /* try { // try from 013663b4 to 014663b7 has its CatchHandler @ 0136640c */
    puVar16 = *(undefined8 **)(*(long *)(lVar7 + 0xb8) + 8);
    lVar7 = lVar10;
    if ((uVar12 & 1) == 0) {
      lVar10 = FUN_00d5941c(lVar10);
      uVar12 = *(ushort *)(*plVar14 + 0x132);
      lVar7 = *plVar14;
    }
    uVar15 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x38);
    if ((uVar12 & 1) == 0) {
      lVar7 = FUN_00d5941c(lVar7);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x38);
    local_90 = puVar16;
    (**(code **)(lVar7 + 0x10))(uVar15,lVar7,plVar3,&local_90,puVar16);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *(long *)puVar2;
    }
    lVar10 = *plVar14;
    uVar12 = *(ushort *)(lVar10 + 0x132);
    uVar6 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0xc);
  }
  else {
                    /* try { // try from 01366348 to 0146634f has its CatchHandler @ 01366374 */
    if (iVar4 == 2) {
                    /* try { // try from 01366350 to 01466357 has its CatchHandler @ 01365e00 */
      lVar7 = *(long *)puVar1;
                    /* try { // try from 01366358 to 0146635b has its CatchHandler @ 01366380 */
      if (*(int *)(lVar7 + 0xe0) == 0) {
                    /* try { // try from 0136635c to 01466363 has its CatchHandler @ 01365e00 */
        thunk_FUN_00d32864();
        lVar7 = *(long *)puVar1;
      }
                    /* try { // try from 01366364 to 01466367 has its CatchHandler @ 01366370 */
      if (plVar3 == (long *)0x0) {
LAB_01366ffc:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
                    /* try { // try from 01366368 to 0146636f has its CatchHandler @ 01366378 */
      lVar10 = *plVar14;
                    /* catch() { ... } // from try @ 01366364 with catch @ 01366370
                       try { // try from 01366370 to 014663b3 has its CatchHandler @ 01365e00 */
      uVar12 = *(ushort *)(lVar10 + 0x132);
                    /* catch() { ... } // from try @ 01366348 with catch @ 01366374 */
      puVar16 = *(undefined8 **)(*(long *)(lVar7 + 0xb8) + 0x10);
                    /* catch() { ... } // from try @ 0136621c with catch @ 01366378
                       catch() { ... } // from try @ 01366368 with catch @ 01366378 */
      lVar7 = lVar10;
      if ((uVar12 & 1) == 0) {
                    /* catch() { ... } // from try @ 013660b0 with catch @ 0136637c */
                    /* catch() { ... } // from try @ 01366050 with catch @ 01366380
                       catch() { ... } // from try @ 01366358 with catch @ 01366380 */
        lVar10 = FUN_00d5941c(lVar10);
                    /* catch() { ... } // from try @ 01366248 with catch @ 01366384 */
        uVar12 = *(ushort *)(*plVar14 + 0x132);
        lVar7 = *plVar14;
      }
      uVar15 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x38);
      if ((uVar12 & 1) == 0) {
        lVar7 = FUN_00d5941c(lVar7);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x38);
      local_90 = puVar16;
      (**(code **)(lVar7 + 0x10))(uVar15,lVar7,plVar3,&local_90,puVar16);
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *(long *)puVar2;
      }
      lVar10 = *plVar14;
      uVar12 = *(ushort *)(lVar10 + 0x132);
      uVar6 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x14);
    }
    else {
                    /* try { // try from 013663d0 to 014663d7 has its CatchHandler @ 01366478 */
      lVar7 = *(long *)puVar1;
                    /* try { // try from 013663d8 to 014663ef has its CatchHandler @ 01365e00 */
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *(long *)puVar1;
      }
      if (plVar3 == (long *)0x0) goto LAB_01366ffc;
      lVar10 = *plVar14;
                    /* try { // try from 013663f0 to 014663f3 has its CatchHandler @ 01366418 */
      uVar12 = *(ushort *)(lVar10 + 0x132);
      puVar16 = (undefined8 *)**(undefined8 **)(lVar7 + 0xb8);
      lVar7 = lVar10;
      if ((uVar12 & 1) == 0) {
        lVar10 = FUN_00d5941c(lVar10);
        uVar12 = *(ushort *)(*plVar14 + 0x132);
        lVar7 = *plVar14;
      }
      uVar15 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x38);
      if ((uVar12 & 1) == 0) {
        lVar7 = FUN_00d5941c(lVar7);
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x38);
      local_90 = puVar16;
      (**(code **)(lVar7 + 0x10))(uVar15,lVar7,plVar3,&local_90,puVar16);
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *(long *)puVar2;
      }
      lVar10 = *plVar14;
      uVar12 = *(ushort *)(lVar10 + 0x132);
      uVar6 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 8);
    }
  }
  lVar7 = lVar10;
  if ((uVar12 & 1) == 0) {
    lVar10 = FUN_00d5941c(lVar10);
    uVar12 = *(ushort *)(*plVar14 + 0x132);
    lVar7 = *plVar14;
  }
  uVar15 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x30);
  if ((uVar12 & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x30);
  local_90 = &local_78;
  local_78 = (long *)CONCAT44(local_78._4_4_,uVar6);
  (**(code **)(lVar7 + 0x10))(uVar15,lVar7,plVar3,&local_90,&local_78);
  lVar10 = *plVar14;
  uVar12 = *(ushort *)(lVar10 + 0x132);
  lVar7 = lVar10;
  if ((uVar12 & 1) == 0) {
    lVar10 = FUN_00d5941c(lVar10);
    uVar12 = *(ushort *)(*plVar14 + 0x132);
    lVar7 = *plVar14;
  }
  uVar15 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x40);
  if ((uVar12 & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x40);
  local_78 = (long *)CONCAT71(local_78._1_7_,1);
  local_90 = &local_78;
  (**(code **)(lVar7 + 0x10))(uVar15,lVar7,plVar3,&local_90,&local_78);
  lVar10 = *plVar14;
  uVar12 = *(ushort *)(lVar10 + 0x132);
  lVar7 = lVar10;
  if ((uVar12 & 1) == 0) {
    lVar10 = FUN_00d5941c(lVar10);
    uVar12 = *(ushort *)(*plVar14 + 0x132);
    lVar7 = *plVar14;
  }
  uVar15 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x90);
  if ((uVar12 & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x90);
  local_90 = &local_78;
  local_78 = (long *)((ulong)local_78 & 0xffffffff00000000);
  (**(code **)(lVar7 + 0x10))(uVar15,lVar7,plVar3,&local_90,&local_78);
  lVar10 = *plVar14;
  uVar12 = *(ushort *)(lVar10 + 0x132);
  lVar7 = lVar10;
  if ((uVar12 & 1) == 0) {
    lVar10 = FUN_00d5941c(lVar10);
    uVar12 = *(ushort *)(*plVar14 + 0x132);
    lVar7 = *plVar14;
  }
  uVar15 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x98);
  if ((uVar12 & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x98);
  local_90 = &local_78;
  local_78 = (long *)((ulong)local_78 & 0xffffffff00000000);
  (**(code **)(lVar7 + 0x10))(uVar15,lVar7,plVar3,&local_90,&local_78);
  lVar10 = *plVar14;
  uVar12 = *(ushort *)(lVar10 + 0x132);
  lVar7 = lVar10;
  if ((uVar12 & 1) == 0) {
    lVar10 = FUN_00d5941c(lVar10);
    uVar12 = *(ushort *)(*plVar14 + 0x132);
    lVar7 = *plVar14;
  }
  uVar15 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0xa0);
  if ((uVar12 & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0xa0);
  local_90 = &local_78;
  local_78 = (long *)((ulong)local_78 & 0xffffffff00000000);
  (**(code **)(lVar7 + 0x10))(uVar15,lVar7,plVar3,&local_90,&local_78);
  if (DAT_03774d77 == '\0') {
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__);
    DAT_03774d77 = '\x01';
  }
  puVar1 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__;
  lVar10 = *plVar14;
  uVar12 = *(ushort *)(lVar10 + 0x132);
  uVar15 = **(undefined8 **)
             (*(long *)Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__ + 0xb8
             );
  lVar7 = lVar10;
  if ((uVar12 & 1) == 0) {
    lVar10 = FUN_00d5941c(lVar10);
    uVar12 = *(ushort *)(*plVar14 + 0x132);
    lVar7 = *plVar14;
  }
  uVar17 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0xa8);
  if ((uVar12 & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0xa8);
  local_90 = &local_78;
  local_78 = (long *)uVar15;
  (**(code **)(lVar7 + 0x10))(uVar17,lVar7,plVar3,&local_90,&local_78);
  if (DAT_03774d77 == '\0') {
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__);
    DAT_03774d77 = '\x01';
  }
  lVar10 = *plVar14;
  uVar12 = *(ushort *)(lVar10 + 0x132);
  uVar18 = **(ulong **)(*(long *)puVar1 + 0xb8);
  lVar7 = lVar10;
  if ((uVar12 & 1) == 0) {
    lVar10 = FUN_00d5941c(lVar10);
    uVar12 = *(ushort *)(*plVar14 + 0x132);
    lVar7 = *plVar14;
  }
  uVar15 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0xb0);
  if ((uVar12 & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
  }
  puVar1 = System_Xml_XmlTextReaderImpl_NodeData___TypeInfo;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0xb0);
  local_90 = &local_78;
  local_78 = (long *)uVar18;
  (**(code **)(lVar7 + 0x10))(uVar15,lVar7,plVar3,&local_90,&local_78);
  FUN_027f78f0(plVar3,param_3,0);
  iVar4 = FUN_026d8144(param_3,0);
  if (iVar4 == 0) {
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *(long *)puVar2;
    }
    uVar6 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 8);
    uVar5 = FUN_026d8320(param_3,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    FUN_027f7e0c(uVar6,uVar5,0);
LAB_01366910:
    uVar6 = FUN_026d8320(param_3,0);
    lVar10 = *plVar14;
    uVar12 = *(ushort *)(lVar10 + 0x132);
    lVar7 = lVar10;
    if ((uVar12 & 1) == 0) {
      lVar10 = FUN_00d5941c(lVar10);
      uVar12 = *(ushort *)(*plVar14 + 0x132);
      lVar7 = *plVar14;
    }
    uVar15 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x48);
    if ((uVar12 & 1) == 0) {
      lVar7 = FUN_00d5941c(lVar7);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x48);
    local_78 = (long *)CONCAT44(local_78._4_4_,uVar6);
    pcVar11 = *(code **)(lVar7 + 0x10);
  }
  else {
    iVar4 = FUN_026d8144(param_3,0);
    if (iVar4 == 1) {
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar7 = *(long *)puVar2;
      }
      uVar6 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 8);
      uVar5 = FUN_026d8320(param_3,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar1);
      }
      FUN_027f7ee8(uVar6,uVar5,0);
      goto LAB_01366910;
    }
    iVar4 = FUN_026d8144(param_3,0);
    if (iVar4 != 2) goto LAB_0136698c;
    lVar10 = *plVar14;
    uVar12 = *(ushort *)(lVar10 + 0x132);
    lVar7 = lVar10;
    if ((uVar12 & 1) == 0) {
      lVar10 = FUN_00d5941c(lVar10);
      uVar12 = *(ushort *)(*plVar14 + 0x132);
      lVar7 = *plVar14;
    }
    uVar15 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x48);
    if ((uVar12 & 1) == 0) {
      lVar7 = FUN_00d5941c(lVar7);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x48);
    local_78 = (long *)CONCAT44(local_78._4_4_,0xffffffff);
    pcVar11 = *(code **)(lVar7 + 0x10);
  }
  local_90 = &local_78;
  (*pcVar11)(uVar15,lVar7,plVar3,&local_90,local_90);
LAB_0136698c:
  lVar10 = *plVar14;
  uVar12 = *(ushort *)(lVar10 + 0x132);
  lVar7 = lVar10;
  if ((uVar12 & 1) == 0) {
    lVar10 = FUN_00d5941c(lVar10);
    uVar12 = *(ushort *)(*plVar14 + 0x132);
    lVar7 = *plVar14;
  }
  uVar15 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0xf0);
  if ((uVar12 & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0xf0);
  (**(code **)(lVar7 + 0x10))(uVar15,lVar7,plVar3,0,&local_78);
  uVar18 = (ulong)local_78;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar6 = FUN_027f8160(uVar18 & 0xffffffff,0);
  lVar10 = *plVar14;
  uVar12 = *(ushort *)(lVar10 + 0x132);
  lVar7 = lVar10;
  if ((uVar12 & 1) == 0) {
    lVar10 = FUN_00d5941c(lVar10);
    uVar12 = *(ushort *)(*plVar14 + 0x132);
    lVar7 = *plVar14;
  }
  uVar15 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x50);
  if ((uVar12 & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x50);
  local_90 = &local_78;
  local_78 = (long *)CONCAT44(local_78._4_4_,uVar6);
  (**(code **)(lVar7 + 0x10))(uVar15,lVar7,plVar3,&local_90,&local_78);
  uVar5 = FUN_026cc47c(param_3,0);
  lVar10 = *plVar14;
  uVar12 = *(ushort *)(lVar10 + 0x132);
  lVar7 = lVar10;
  uVar6 = param_2;
  if ((uVar12 & 1) == 0) {
    lVar10 = FUN_00d5941c(lVar10);
    uVar12 = *(ushort *)(*plVar14 + 0x132);
    lVar7 = *plVar14;
  }
  uVar15 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x58);
  if ((uVar12 & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x58);
  local_90 = &local_78;
  local_78 = (long *)CONCAT44(param_2,uVar5);
  local_70 = local_70 & 0xffffffff00000000;
  (**(code **)(lVar7 + 0x10))(uVar15,lVar7,plVar3,&local_90,&local_78);
  uVar19 = FUN_026cc47c(param_3,0);
  lVar10 = *plVar14;
  uVar12 = *(ushort *)(lVar10 + 0x132);
  lVar7 = lVar10;
  uVar5 = uVar6;
  if ((uVar12 & 1) == 0) {
    lVar10 = FUN_00d5941c(lVar10);
    uVar12 = *(ushort *)(*plVar14 + 0x132);
    lVar7 = *plVar14;
  }
  uVar15 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x60);
  if ((uVar12 & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x60);
  local_90 = &local_78;
  local_78 = (long *)CONCAT44(uVar6,uVar19);
  local_70 = local_70 & 0xffffffff00000000;
  (**(code **)(lVar7 + 0x10))(uVar15,lVar7,plVar3,&local_90,&local_78);
  uVar6 = FUN_026d272c(param_3,0);
  lVar10 = *plVar14;
  uVar12 = *(ushort *)(lVar10 + 0x132);
  lVar7 = lVar10;
  if ((uVar12 & 1) == 0) {
    lVar10 = FUN_00d5941c(lVar10);
    uVar12 = *(ushort *)(*plVar14 + 0x132);
    lVar7 = *plVar14;
  }
  uVar15 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x68);
  if ((uVar12 & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x68);
  local_90 = &local_78;
  local_78 = (long *)CONCAT44(uVar5,uVar6);
  local_70 = local_70 & 0xffffffff00000000;
  (**(code **)(lVar7 + 0x10))(uVar15,lVar7,plVar3,&local_90,&local_78);
  uVar6 = FUN_026ce714(param_3,0);
  lVar10 = *plVar14;
  uVar12 = *(ushort *)(lVar10 + 0x132);
  lVar7 = lVar10;
  if ((uVar12 & 1) == 0) {
    lVar10 = FUN_00d5941c(lVar10);
    uVar12 = *(ushort *)(*plVar14 + 0x132);
    lVar7 = *plVar14;
  }
  uVar15 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x78);
  if ((uVar12 & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x78);
  local_90 = &local_78;
  local_78 = (long *)CONCAT44(local_78._4_4_,uVar6);
  (**(code **)(lVar7 + 0x10))(uVar15,lVar7,plVar3,&local_90,&local_78);
  uVar6 = FUN_026d2778(param_3,0);
  lVar10 = *plVar14;
  uVar12 = *(ushort *)(lVar10 + 0x132);
  lVar7 = lVar10;
  if ((uVar12 & 1) == 0) {
    lVar10 = FUN_00d5941c(lVar10);
    uVar12 = *(ushort *)(*plVar14 + 0x132);
    lVar7 = *plVar14;
  }
  uVar15 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0xb8);
  if ((uVar12 & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0xb8);
  local_90 = &local_78;
  local_78 = (long *)CONCAT44(local_78._4_4_,uVar6);
  (**(code **)(lVar7 + 0x10))(uVar15,lVar7,plVar3,&local_90,&local_78);
  iVar4 = FUN_026d586c(param_3,0);
  if (iVar4 - 1U < 2) {
    uVar6 = FUN_026d835c(param_3,0);
    lVar7 = *plVar14;
    uVar12 = *(ushort *)(lVar7 + 0x132);
  }
  else {
    lVar10 = *plVar14;
    uVar12 = *(ushort *)(lVar10 + 0x132);
    lVar7 = lVar10;
    if ((uVar12 & 1) == 0) {
      lVar10 = FUN_00d5941c(lVar10);
      uVar12 = *(ushort *)(*plVar14 + 0x132);
      lVar7 = *plVar14;
    }
    uVar15 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0xf8);
    if ((uVar12 & 1) == 0) {
      lVar7 = FUN_00d5941c(lVar7);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0xf8);
    (**(code **)(lVar7 + 0x10))(uVar15,lVar7,plVar3,0,&local_78);
    lVar7 = *plVar14;
    uVar12 = *(ushort *)(lVar7 + 0x132);
    uVar6 = 0;
    if ((int)local_78 != 0) {
      uVar6 = 0x3f000000;
    }
  }
  lVar10 = lVar7;
  if ((uVar12 & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
    uVar12 = *(ushort *)(*plVar14 + 0x132);
    lVar10 = *plVar14;
  }
  uVar15 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x80);
  if ((uVar12 & 1) == 0) {
    lVar10 = FUN_00d5941c(lVar10);
  }
  lVar7 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x80);
  local_90 = &local_78;
  local_78 = (long *)CONCAT44(local_78._4_4_,uVar6);
  (**(code **)(lVar7 + 0x10))(uVar15,lVar7,plVar3,&local_90,&local_78);
  lVar10 = *plVar14;
  uVar12 = *(ushort *)(lVar10 + 0x132);
  lVar7 = lVar10;
  if ((uVar12 & 1) == 0) {
    lVar10 = FUN_00d5941c(lVar10);
    uVar12 = *(ushort *)(*plVar14 + 0x132);
    lVar7 = *plVar14;
  }
  puVar1 = Method_Obi_ObiNativeList<__Il2CppFullySharedGenericStructType>_RemoveRange__;
  uVar15 = **(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x88);
  if ((uVar12 & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x88);
  local_90 = &local_78;
  local_78 = (long *)((ulong)local_78 & 0xffffffff00000000);
  (**(code **)(lVar7 + 0x10))(uVar15,lVar7,plVar3,&local_90,&local_78);
  lVar7 = *plVar3;
  uVar18 = (ulong)*(ushort *)(lVar7 + 0x12a);
  if (uVar18 != 0) {
    piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
        puVar16 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
        goto LAB_01366f0c;
      }
      uVar18 = uVar18 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar18 != 0);
  }
  puVar16 = (undefined8 *)FUN_00d59724(plVar3,*(long *)puVar1,1);
LAB_01366f0c:
  (*(code *)*puVar16)(plVar3,1,puVar16[1]);
  return plVar3;
}


