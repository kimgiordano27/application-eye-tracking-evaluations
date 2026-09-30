/*
FUNCTION_NAME: FUN_01aefb10
ENTRY_POINT: 01aefb10
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_01aefb10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  float *pfVar18;
  ulong uVar19;
  int *piVar20;
  long lVar21;
  long *plVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  long local_1c0;
  undefined4 local_1b8 [18];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  if ((DAT_0377d0f8 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_121__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_93_0_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Pose___TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberPositiveInfinityAsync>d__27>__
                      );
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(
                      Method_Sirenix_Utilities_ImmutableList_<System_Collections_Generic_IEnumerable<System_Object>_GetEnumerator>d__25_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(UnityEngine_UIElements_Scale_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13597);
    thunk_FUN_00d48444(StringLiteral_10337);
    thunk_FUN_00d48444(StringLiteral_8268);
    thunk_FUN_00d48444(Obi_ASDF_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f0748);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PoseDetection_TransformFeatureStateCollection_<>c__DisplayClass2_0_<RegisterConfig>b__0__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_<>c_<_cctor>b__16_0__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<NavMeshLink>_Remove__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<NotePrefabMapping_PrefabPoolEntry>_get_Count__
                      );
    thunk_FUN_00d48444(PTR_DAT_033ef468);
    thunk_FUN_00d48444(Method_System_Reflection_Emit_EnumBuilder_GetConstructorImpl__);
    DAT_0377d0f8 = 1;
  }
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  if (3 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar21 = *(long *)(param_1 + 0x20);
  switch(*(uint *)(param_1 + 0x10)) {
  case 0:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x41) = 0;
    fVar25 = (float)FUN_02689300(0);
    if (lVar21 == 0) goto LAB_01af07cc;
    if (DAT_0294c9a0 < fVar25 - *(float *)(lVar21 + 0x98)) {
      uVar10 = FUN_02689300(0);
      *(undefined4 *)(lVar21 + 0x98) = uVar10;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined1 *)(param_1 + 0x41) = 1;
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    break;
  case 2:
    plVar22 = *(long **)(param_1 + 0xb0);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar22 != (long *)0x0) goto LAB_01aefe9c;
    goto LAB_01af07cc;
  case 3:
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    return 0;
  }
  plVar22 = *(long **)(param_1 + 0x28);
  if (plVar22 == (long *)0x0) goto LAB_01af07cc;
  uVar13 = (**(code **)(*plVar22 + 0x188))
                     (plVar22,*(undefined4 *)(param_1 + 0x30),*(undefined8 *)(*plVar22 + 400));
  *(undefined8 *)(param_1 + 0x48) = uVar13;
  if ((lVar21 == 0) || (lVar15 = *(long *)(lVar21 + 0x28), lVar15 == 0)) goto LAB_01af07cc;
  if (*(uint *)(lVar15 + 0x18) <= *(uint *)(param_1 + 0x30)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  lVar15 = *(long *)(lVar15 + (long)(int)*(uint *)(param_1 + 0x30) * 8 + 0x20);
  *(long *)(param_1 + 0x50) = lVar15;
  if (lVar15 == 0) goto LAB_01af07cc;
  uVar13 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                     (lVar15,0);
  plVar22 = *(long **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = uVar13;
  if ((plVar22 == (long *)0x0) ||
     (plVar22 = (long *)(**(code **)(*plVar22 + 0x1a8))
                                  (plVar22,*(undefined8 *)
                                            Method_System_Collections_Generic_List<NavMeshLink>_Remove__
                                   ,*(undefined8 *)(*plVar22 + 0x1b0)), plVar22 == (long *)0x0))
  goto LAB_01af07cc;
  uVar13 = (**(code **)(*plVar22 + 0x1c8))(plVar22,*(undefined8 *)(*plVar22 + 0x1d0));
  *(undefined8 *)(param_1 + 0x60) = uVar13;
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_01af07cc;
  FUN_0268b75c(*(long *)(param_1 + 0x58),uVar13,0);
  if (*(long *)(param_1 + 0x58) == 0) goto LAB_01af07cc;
  FUN_026a0040(*(long *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x38),0,0);
  plVar22 = *(long **)(param_1 + 0x48);
  if (((plVar22 == (long *)0x0) ||
      (plVar22 = (long *)(**(code **)(*plVar22 + 0x1a8))
                                   (plVar22,*(undefined8 *)StringLiteral_10337,
                                    *(undefined8 *)(*plVar22 + 0x1b0)), plVar22 == (long *)0x0)) ||
     (plVar22 = (long *)(**(code **)(*plVar22 + 0x408))(plVar22,*(undefined8 *)(*plVar22 + 0x410)),
     plVar22 == (long *)0x0)) goto LAB_01af07cc;
  iVar11 = (**(code **)(*plVar22 + 0x1e8))(plVar22,*(undefined8 *)(*plVar22 + 0x1f0));
  if (0 < iVar11) {
    FUN_01bb45a4(&local_170,plVar22,0);
    memcpy(&local_f0,&local_170,0x48);
    FUN_01ab6558(local_1b8,&local_f0,0);
    memcpy(&local_170,local_1b8,0x48);
    memcpy((void *)(param_1 + 0x68),&local_170,0x48);
    while( true ) {
      puVar12 = (undefined8 *)(param_1 + 0x68);
      uVar19 = thunk_FUN_01ab6398(puVar12,0);
      if ((uVar19 & 1) == 0) break;
      plVar22 = (long *)FUN_01ab64f0(puVar12,0);
      if ((plVar22 == (long *)0x0) ||
         (uVar10 = (**(code **)(*plVar22 + 0x368))(plVar22,*(undefined8 *)(*plVar22 + 0x370)),
         lVar21 == 0)) goto LAB_01af07cc;
                    /* try { // try from 01aefe84 to 01beffc7 has its CatchHandler @ 01aefe84
                       catch() { ... } // from try @ 01aefe84 with catch @ 01aefe84
                       catch() { ... } // from try @ 01af00dc with catch @ 01aefe84
                       catch() { ... } // from try @ 01af0168 with catch @ 01aefe84
                       catch() { ... } // from try @ 01af0170 with catch @ 01aefe84
                       catch() { ... } // from try @ 01af0204 with catch @ 01aefe84 */
      plVar22 = (long *)FUN_01aec864(lVar21,*(undefined8 *)(param_1 + 0x28),uVar10,
                                     *(undefined1 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x58)
                                    );
      *(long **)(param_1 + 0xb0) = plVar22;
      if (plVar22 == (long *)0x0) goto LAB_01af07cc;
LAB_01aefe9c:
      puVar1 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      lVar15 = *plVar22;
      uVar19 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) ==
              *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__)
          {
            puVar12 = (undefined8 *)(lVar15 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_01aefef0;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)
                FUN_00d59724(plVar22,*(long *)
                                      Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                             ,0);
LAB_01aefef0:
      uVar19 = (*(code *)*puVar12)(plVar22,puVar12[1]);
      if ((uVar19 & 1) != 0) {
        plVar22 = *(long **)(param_1 + 0xb0);
        if (plVar22 == (long *)0x0) goto LAB_01af07cc;
        lVar21 = *plVar22;
        uVar19 = (ulong)*(ushort *)(lVar21 + 0x12a);
        if (uVar19 == 0) goto LAB_01aeff98;
        piVar20 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        goto LAB_01aeff80;
      }
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *puVar12 = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  if (*(long *)(param_1 + 0x60) == 0) goto LAB_01af07cc;
  uVar19 = FUN_015fe854(*(long *)(param_1 + 0x60),*(undefined8 *)PTR_DAT_033f0748,0);
  puVar2 = 
  Method_Sirenix_Utilities_ImmutableList_<System_Collections_Generic_IEnumerable<System_Object>_GetEnumerator>d__25_System_Collections_IEnumerator_Reset__
  ;
  puVar1 = Method_System_Collections_Generic_List<NotePrefabMapping_PrefabPoolEntry>_get_Count__;
  if ((uVar19 & 1) != 0) {
    if (*(long *)(param_1 + 0x50) != 0) {
      FUN_0268ace8(*(long *)(param_1 + 0x50),0,0);
      return 0;
    }
    goto LAB_01af07cc;
  }
  plVar22 = *(long **)(param_1 + 0x48);
  if (plVar22 == (long *)0x0) goto LAB_01af07cc;
                    /* try { // try from 01aeffc8 to 01beffef has its CatchHandler @ 01af0184 */
  uVar13 = (**(code **)(*plVar22 + 0x1a8))
                     (plVar22,*(undefined8 *)
                               Method_System_Collections_Generic_List<NotePrefabMapping_PrefabPoolEntry>_get_Count__
                      ,*(undefined8 *)(*plVar22 + 0x1b0));
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar2);
  }
  uVar19 = FUN_01bafc08(uVar13,0,0);
  uVar13 = local_170;
  uVar24 = uStack_168;
  uVar6 = local_160;
  uVar7 = uStack_158;
  uVar8 = local_150;
  uVar9 = uStack_148;
  if ((uVar19 & 1) != 0) {
    plVar22 = *(long **)(param_1 + 0x48);
                    /* try { // try from 01af0024 to 01bf004b has its CatchHandler @ 01af0180 */
    if (((plVar22 == (long *)0x0) ||
        (plVar22 = (long *)(**(code **)(*plVar22 + 0x1a8))
                                     (plVar22,*(undefined8 *)puVar1,
                                      *(undefined8 *)(*plVar22 + 0x1b0)), plVar22 == (long *)0x0))
       || ((uVar10 = (**(code **)(*plVar22 + 0x368))(plVar22,*(undefined8 *)(*plVar22 + 0x370)),
           lVar21 == 0 ||
           ((plVar22 = *(long **)(lVar21 + 0x18), plVar22 == (long *)0x0 ||
            (plVar22 = (long *)(**(code **)(*plVar22 + 0x1a8))
                                         (plVar22,*(undefined8 *)PTR_DAT_033ef468,
                                          *(undefined8 *)(*plVar22 + 0x1b0)), plVar22 == (long *)0x0
            )))))) goto LAB_01af07cc;
                    /* try { // try from 01af0054 to 01bf00db has its CatchHandler @ 01af0188 */
    uVar13 = (**(code **)(*plVar22 + 0x188))(plVar22,uVar10,*(undefined8 *)(*plVar22 + 400));
    FUN_01aec924(&local_170,lVar21,uVar13,*(undefined1 *)(param_1 + 0x40));
    uVar5 = uStack_168;
    uVar4 = local_170;
    puVar1 = 
    Method_Oculus_Interaction_PoseDetection_TransformFeatureStateCollection_<>c__DisplayClass2_0_<RegisterConfig>b__0__
    ;
    uStack_118 = uStack_158;
    local_120 = local_160;
    uStack_108 = uStack_148;
    local_110 = local_150;
    uStack_f8 = uStack_138;
    local_100 = local_140;
    plVar22 = *(long **)(param_1 + 0x48);
    if (plVar22 == (long *)0x0) goto LAB_01af07cc;
    uVar13 = (**(code **)(*plVar22 + 0x1a8))
                       (plVar22,*(undefined8 *)
                                 Method_Oculus_Interaction_PoseDetection_TransformFeatureStateCollection_<>c__DisplayClass2_0_<RegisterConfig>b__0__
                        ,*(undefined8 *)(*plVar22 + 0x1b0));
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar19 = FUN_01bafc08(uVar13,0,0);
    lVar15 = *(long *)(param_1 + 0x50);
                    /* try { // try from 01af00dc to 01bf015b has its CatchHandler @ 01aefe84 */
    if (lVar15 == 0) goto LAB_01af07cc;
    if ((uVar19 & 1) == 0) {
                    /* try { // try from 01af0204 to 01bf020f has its CatchHandler @ 01aefe84 */
      lVar15 = FUN_010e5800(lVar15,*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
      if (lVar15 == 0) goto LAB_01af07cc;
                    /* try { // try from 01af0210 to 01bf0217 has its CatchHandler @ 01af0224 */
                    /* catch() { ... } // from try @ 01af0198 with catch @ 01af0218 */
      FUN_02666150(lVar15,uVar4,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01af01dc with catch @ 01af0224
                       catch(type#2 @ 00000000) { ... } // from try @ 01af0210 with catch @ 01af0224
                        */
                    /* try { // try from 01af0228 to 01bf036b has its CatchHandler @ 01af0228
                       catch() { ... } // from try @ 01af0228 with catch @ 01af0228
                       catch() { ... } // from try @ 01af0484 with catch @ 01af0228
                       catch() { ... } // from try @ 01af0510 with catch @ 01af0228
                       catch() { ... } // from try @ 01af0518 with catch @ 01af0228
                       catch() { ... } // from try @ 01af05ac with catch @ 01af0228 */
      if ((*(long *)(param_1 + 0x50) == 0) ||
         (lVar15 = FUN_010e5800(*(long *)(param_1 + 0x50),*(undefined8 *)UnityEngine_Pose___TypeInfo
                               ), lVar15 == 0)) goto LAB_01af07cc;
      FUN_026689d4(lVar15,uVar5,0);
      uVar13 = local_170;
      uVar24 = uStack_168;
      uVar6 = local_160;
      uVar7 = uStack_158;
      uVar8 = local_150;
      uVar9 = uStack_148;
      local_170 = local_120;
      uStack_168 = uStack_118;
      local_160 = local_110;
      uStack_158 = uStack_108;
      local_150 = local_100;
      uStack_148 = uStack_f8;
    }
    else {
      lVar15 = FUN_010e5800(lVar15,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberPositiveInfinityAsync>d__27>__
                           );
      if (lVar15 == 0) goto LAB_01af07cc;
      FUN_02669a58(lVar15,uVar4,0);
      FUN_026689d4(lVar15,uVar5,0);
      plVar22 = *(long **)(param_1 + 0x48);
      if ((plVar22 == (long *)0x0) ||
         (plVar22 = (long *)(**(code **)(*plVar22 + 0x1a8))
                                      (plVar22,*(undefined8 *)puVar1,
                                       *(undefined8 *)(*plVar22 + 0x1b0)), plVar22 == (long *)0x0))
      goto LAB_01af07cc;
      uVar10 = (**(code **)(*plVar22 + 0x368))(plVar22,*(undefined8 *)(*plVar22 + 0x370));
      plVar22 = *(long **)(lVar21 + 0x18);
                    /* try { // try from 01af015c to 01bf0167 has its CatchHandler @ 01af017c */
                    /* try { // try from 01af0168 to 01bf016b has its CatchHandler @ 01aefe84 */
                    /* try { // try from 01af016c to 01bf016f has its CatchHandler @ 01af0178 */
                    /* try { // try from 01af0170 to 01bf0197 has its CatchHandler @ 01aefe84 */
      if ((plVar22 == (long *)0x0) ||
         (plVar22 = (long *)(**(code **)(*plVar22 + 0x1a8))
                                      (plVar22,*(undefined8 *)StringLiteral_8268,
                                       *(undefined8 *)(*plVar22 + 0x1b0)), plVar22 == (long *)0x0))
      goto LAB_01af07cc;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01af016c with catch @ 01af0178
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01af015c with catch @ 01af017c
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01af0024 with catch @ 01af0180
                        */
      uVar13 = (**(code **)(*plVar22 + 0x188))(plVar22,uVar10,*(undefined8 *)(*plVar22 + 400));
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01aeffc8 with catch @ 01af0184
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01af0054 with catch @ 01af0188
                        */
      FUN_01aee328(lVar21,uVar13,lVar15);
      uVar13 = local_170;
      uVar24 = uStack_168;
      uVar6 = local_160;
      uVar7 = uStack_158;
      uVar8 = local_150;
      uVar9 = uStack_148;
      local_170 = local_120;
      uStack_168 = uStack_118;
      local_160 = local_110;
      uStack_158 = uStack_108;
      local_150 = local_100;
      uStack_148 = uStack_f8;
    }
    local_120 = local_170;
    uStack_118 = uStack_168;
    local_110 = local_160;
    uStack_108 = uStack_158;
    local_100 = local_150;
    uStack_f8 = uStack_148;
    if (local_130 != 0) {
      lVar14 = *(long *)(lVar21 + 0x40);
      uVar10 = *(undefined4 *)(param_1 + 0x30);
      lVar15 = thunk_FUN_00d62348(*(undefined8 *)UnityEngine_UIElements_Scale_TypeInfo);
      if (lVar15 == 0) goto LAB_01af07cc;
      local_200 = uVar4;
      uStack_1f8 = uVar5;
      uStack_1e8 = uStack_168;
      local_1f0 = local_170;
      uStack_1d8 = uStack_158;
      uStack_1e0 = local_160;
      uStack_1c8 = uStack_148;
      local_1d0 = local_150;
      local_1c0 = local_130;
      FUN_01aeb990(lVar15,&local_200);
      if (lVar14 == 0) goto LAB_01af07cc;
      local_1b8[0] = uVar10;
      FUN_01299e64(lVar14,local_1b8,lVar15,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_121__)
      ;
      uVar13 = local_170;
      uVar24 = uStack_168;
      uVar6 = local_160;
      uVar7 = uStack_158;
      uVar8 = local_150;
      uVar9 = uStack_148;
    }
  }
  uStack_148 = uVar9;
  local_150 = uVar8;
  uStack_158 = uVar7;
  local_160 = uVar6;
  uStack_168 = uVar24;
  local_170 = uVar13;
  plVar22 = *(long **)(param_1 + 0x48);
  if ((plVar22 == (long *)0x0) ||
     (plVar22 = (long *)(**(code **)(*plVar22 + 0x1a8))
                                  (plVar22,*(undefined8 *)Obi_ASDF_TypeInfo,
                                   *(undefined8 *)(*plVar22 + 0x1b0)), plVar22 == (long *)0x0))
  goto LAB_01af07cc;
  plVar22 = (long *)(**(code **)(*plVar22 + 0x408))(plVar22,*(undefined8 *)(*plVar22 + 0x410));
  plVar16 = *(long **)(param_1 + 0x48);
  if ((plVar16 == (long *)0x0) ||
     (plVar16 = (long *)(**(code **)(*plVar16 + 0x1a8))
                                  (plVar16,*(undefined8 *)
                                            Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_<>c_<_cctor>b__16_0__
                                   ,*(undefined8 *)(*plVar16 + 0x1b0)), plVar16 == (long *)0x0))
  goto LAB_01af07cc;
  plVar16 = (long *)(**(code **)(*plVar16 + 0x408))(plVar16,*(undefined8 *)(*plVar16 + 0x410));
  plVar17 = *(long **)(param_1 + 0x48);
  if (((plVar17 == (long *)0x0) ||
      (plVar17 = (long *)(**(code **)(*plVar17 + 0x1a8))
                                   (plVar17,*(undefined8 *)
                                             Method_System_Reflection_Emit_EnumBuilder_GetConstructorImpl__
                                    ,*(undefined8 *)(*plVar17 + 0x1b0)), plVar17 == (long *)0x0)) ||
     (plVar17 = (long *)(**(code **)(*plVar17 + 0x408))(plVar17,*(undefined8 *)(*plVar17 + 0x410)),
     plVar22 == (long *)0x0)) goto LAB_01af07cc;
                    /* try { // try from 01af036c to 01bf0393 has its CatchHandler @ 01af052c */
  iVar11 = (**(code **)(*plVar22 + 0x1e8))(plVar22,*(undefined8 *)(*plVar22 + 0x1f0));
  puVar1 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  if (iVar11 < 1) {
    if (plVar16 == (long *)0x0) goto LAB_01af07cc;
    iVar11 = (**(code **)(*plVar16 + 0x1e8))(plVar16,*(undefined8 *)(*plVar16 + 0x1f0));
    if (0 < iVar11) goto LAB_01af03b0;
  }
  else {
LAB_01af03b0:
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
                    /* try { // try from 01af03c8 to 01bf03ef has its CatchHandler @ 01af0528 */
      DAT_03774d76 = '\x01';
    }
    pfVar18 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar25 = *pfVar18;
    fVar26 = pfVar18[1];
    fVar27 = pfVar18[2];
    if (DAT_03774f00 == '\0') {
      thunk_FUN_00d48444(Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__);
                    /* try { // try from 01af03f8 to 01bf0483 has its CatchHandler @ 01af0530 */
      DAT_03774f00 = '\x01';
    }
    puVar3 = StringLiteral_13597;
    pfVar18 = *(float **)
               (*(long *)Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__ +
               0xb8);
    fVar29 = *pfVar18;
    fVar30 = pfVar18[1];
    fVar31 = pfVar18[2];
    uVar19 = (ulong)(uint)pfVar18[3];
    iVar11 = (**(code **)(*plVar22 + 0x1e8))(plVar22,*(undefined8 *)(*plVar22 + 0x1f0));
    if (0 < iVar11) {
      uVar13 = (**(code **)(*plVar22 + 0x188))(plVar22,0,*(undefined8 *)(*plVar22 + 400));
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      fVar25 = (float)FUN_01bb4e7c(uVar13,0);
      lVar15 = *(long *)puVar3;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar15 = *(long *)puVar3;
      }
                    /* try { // try from 01af0484 to 01bf0503 has its CatchHandler @ 01af0228 */
      fVar28 = **(float **)(lVar15 + 0xb8);
      uVar13 = (**(code **)(*plVar22 + 0x188))(plVar22,1,*(undefined8 *)(*plVar22 + 400));
      fVar26 = (float)FUN_01bb4e7c(uVar13,0);
      fVar32 = *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 4);
      uVar13 = (**(code **)(*plVar22 + 0x188))(plVar22,2,*(undefined8 *)(*plVar22 + 400));
      fVar27 = (float)FUN_01bb4e7c(uVar13,0);
      fVar25 = fVar25 * fVar28;
      fVar26 = fVar26 * fVar32;
      fVar27 = fVar27 * *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    }
    if (plVar16 == (long *)0x0) goto LAB_01af07cc;
    iVar11 = (**(code **)(*plVar16 + 0x1e8))(plVar16,*(undefined8 *)(*plVar16 + 0x1f0));
                    /* try { // try from 01af0504 to 01bf050f has its CatchHandler @ 01af0524 */
    if (0 < iVar11) {
                    /* try { // try from 01af0510 to 01bf0513 has its CatchHandler @ 01af0228 */
                    /* try { // try from 01af0514 to 01bf0517 has its CatchHandler @ 01af0520 */
                    /* try { // try from 01af0518 to 01bf053f has its CatchHandler @ 01af0228 */
      uVar13 = (**(code **)(*plVar16 + 0x188))(plVar16,0,*(undefined8 *)(*plVar16 + 400));
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01af0514 with catch @ 01af0520
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01af0504 with catch @ 01af0524
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01af03c8 with catch @ 01af0528
                        */
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01af036c with catch @ 01af052c
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01af03f8 with catch @ 01af0530
                        */
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      fVar29 = (float)FUN_01bb4e7c(uVar13,0);
                    /* try { // try from 01af0540 to 01bf0543 has its CatchHandler @ 01af05c0 */
      lVar15 = *(long *)puVar3;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar15 = *(long *)puVar3;
      }
      fVar33 = **(float **)(lVar15 + 0xb8);
      uVar13 = (**(code **)(*plVar16 + 0x188))(plVar16,1,*(undefined8 *)(*plVar16 + 400));
      fVar30 = (float)FUN_01bb4e7c(uVar13,0);
                    /* try { // try from 01af0584 to 01bf05ab has its CatchHandler @ 01af05cc */
      fVar28 = *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 4);
      uVar13 = (**(code **)(*plVar16 + 0x188))(plVar16,2,*(undefined8 *)(*plVar16 + 400));
      fVar31 = (float)FUN_01bb4e7c(uVar13,0);
                    /* try { // try from 01af05ac to 01bf05b7 has its CatchHandler @ 01af0228 */
                    /* try { // try from 01af05b8 to 01bf05bf has its CatchHandler @ 01af05cc */
                    /* catch() { ... } // from try @ 01af0540 with catch @ 01af05c0 */
      fVar32 = *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01af0584 with catch @ 01af05cc
                       catch(type#2 @ 00000000) { ... } // from try @ 01af05b8 with catch @ 01af05cc
                        */
      uVar13 = (**(code **)(*plVar16 + 0x188))(plVar16,3,*(undefined8 *)(*plVar16 + 400));
      uVar19 = FUN_01bb4e7c(uVar13,0);
      fVar30 = -(fVar30 * fVar28);
      fVar31 = -(fVar31 * fVar32);
      fVar29 = -(fVar29 * fVar33);
    }
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_01af07cc;
    FUN_026a01f4(fVar25,fVar26,fVar27,fVar29,fVar30,fVar31,uVar19,*(long *)(param_1 + 0x58),0);
  }
  if (plVar17 == (long *)0x0) goto LAB_01af07cc;
  iVar11 = (**(code **)(*plVar17 + 0x1e8))(plVar17,*(undefined8 *)(*plVar17 + 0x1f0));
  if (0 < iVar11) {
    lVar15 = *(long *)(param_1 + 0x58);
    uVar13 = (**(code **)(*plVar17 + 0x188))(plVar17,0,*(undefined8 *)(*plVar17 + 400));
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    uVar24 = FUN_01bb4e7c(uVar13,0);
    uVar13 = (**(code **)(*plVar17 + 0x188))(plVar17,1,*(undefined8 *)(*plVar17 + 400));
    fVar25 = (float)FUN_01bb4e7c(uVar13,0);
    uVar13 = (**(code **)(*plVar17 + 0x188))(plVar17,2,*(undefined8 *)(*plVar17 + 400));
    fVar26 = (float)FUN_01bb4e7c(uVar13,0);
    if (lVar15 == 0) goto LAB_01af07cc;
    FUN_0269fd98(uVar24,lVar15,0);
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_01af07cc;
    lVar15 = FUN_0268fd4c(*(long *)(param_1 + 0x58),0);
    if (((*(long *)(param_1 + 0x58) == 0) ||
        (lVar14 = FUN_0268fd4c(*(long *)(param_1 + 0x58),0), lVar14 == 0)) ||
       (lVar14 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                           (lVar14,0), lVar14 == 0)) goto LAB_01af07cc;
    fVar27 = (float)FUN_0269fcf8(lVar14,0);
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    if (lVar15 == 0) goto LAB_01af07cc;
    pfVar18 = *(float **)(*(long *)puVar1 + 0xb8);
    FUN_0268ace8(lVar15,DAT_028aa020 <=
                        (fVar26 - pfVar18[2]) * (fVar26 - pfVar18[2]) +
                        (fVar27 - *pfVar18) * (fVar27 - *pfVar18) +
                        (fVar25 - pfVar18[1]) * (fVar25 - pfVar18[1]),0);
  }
  FUN_02689300(0);
  if (lVar21 != 0) {
    if ((*(char *)(param_1 + 0x41) != '\0') ||
       (fVar25 = (float)FUN_02689300(0), fVar25 - *(float *)(lVar21 + 0x98) <= DAT_0294c9a0)) {
      return 0;
    }
    uVar23 = FUN_02689300(0);
    uVar10 = 3;
    *(undefined4 *)(lVar21 + 0x98) = uVar23;
    *(undefined8 *)(param_1 + 0x18) = 0;
LAB_01af01c0:
    *(undefined4 *)(param_1 + 0x10) = uVar10;
                    /* try { // try from 01af01dc to 01bf0203 has its CatchHandler @ 01af0224 */
    return 1;
  }
LAB_01af07cc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_01aeff80:
    if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
      puVar12 = (undefined8 *)(lVar21 + (long)(*piVar20 + 1) * 0x10 + 0x138);
      goto LAB_01af01ac;
    }
  }
LAB_01aeff98:
  puVar12 = (undefined8 *)FUN_00d59724(plVar22,*(long *)puVar1,1);
LAB_01af01ac:
  uVar13 = (*(code *)*puVar12)(plVar22,puVar12[1]);
  *(undefined8 *)(param_1 + 0x18) = uVar13;
  uVar10 = 2;
  goto LAB_01af01c0;
}


