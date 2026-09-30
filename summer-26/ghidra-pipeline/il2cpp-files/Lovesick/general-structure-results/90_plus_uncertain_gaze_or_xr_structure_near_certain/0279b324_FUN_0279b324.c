/*
FUNCTION_NAME: FUN_0279b324
ENTRY_POINT: 0279b324
PROGRAM: Lovesick-libil2cpp.so
SCORE: 130
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_9;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_9
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0279b324(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined4 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined1 auStack_b8 [88];
  
  puVar9 = StringLiteral_10902;
  puVar8 = StringLiteral_9770;
  puVar7 = StringLiteral_2743;
  puVar6 = StringLiteral_137;
  puVar4 = Method_System_Reflection_Emit_EnumBuilder_get_Name__;
  puVar3 = Method_Obi_ObiNativeList<Aabb>_get_count__;
  puVar1 = OVRPlugin_OVRP_1_114_0_TypeInfo;
  puVar2 = PTR_DAT_033f1db0;
  if ((DAT_037886eb & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_2743);
    thunk_FUN_00d48444(PTR_DAT_033ef510);
    thunk_FUN_00d48444(System_Func<float,_bool>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1514);
    thunk_FUN_00d48444(PTR_DAT_033eee80);
    thunk_FUN_00d48444(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass108_0_<RequestFileDownload>b__0__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_SetResult__
                      );
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<Aabb>_get_count__);
    thunk_FUN_00d48444(Method_TMPro_TMP_Dropdown_<>c__DisplayClass69_0_<Show>b__0__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_UIElementsRuntimeUtility_EndRenderOverlays__);
    thunk_FUN_00d48444(StringLiteral_137);
    thunk_FUN_00d48444(StringLiteral_10902);
    thunk_FUN_00d48444(PTR_DAT_033f1db0);
    thunk_FUN_00d48444(Method_System_Reflection_Emit_EnumBuilder_get_Name__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_114_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9770);
    thunk_FUN_00d48444(Method_System_Collections_HashHelpers_GetPrime__);
    DAT_037886eb = 1;
  }
  FUN_02805cd8(local_110,0);
  memcpy(auStack_b8,local_110,0x58);
  memcpy(*(void **)(*(long *)puVar7 + 0xb8),auStack_b8,0x58);
  puVar11 = (undefined4 *)FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  *puVar11 = 1;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  *(undefined4 *)(lVar12 + 4) = 4;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  *(undefined4 *)(lVar12 + 8) = 0;
  puVar13 = (undefined8 *)
            FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x28,*(undefined8 *)puVar1);
  *puVar13 = 0;
  puVar13[1] = 0;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x28,*(undefined8 *)puVar1);
  *(undefined8 *)(lVar12 + 0x18) = 0;
  *(undefined8 *)(lVar12 + 0x10) = 0;
  *(undefined8 *)(lVar12 + 0x28) = 0;
  *(undefined8 *)(lVar12 + 0x20) = 0;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x28,*(undefined8 *)puVar1);
  *(undefined8 *)(lVar12 + 0x38) = 0;
  *(undefined8 *)(lVar12 + 0x30) = 0;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x28,*(undefined8 *)puVar1);
  uVar14 = FUN_028221b4(0);
  *(undefined8 *)(lVar12 + 0x40) = uVar14;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x28,*(undefined8 *)puVar1);
  uVar14 = FUN_028221b4(0);
  *(undefined8 *)(lVar12 + 0x48) = uVar14;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  *(undefined4 *)(lVar12 + 0xc) = 0;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x28,*(undefined8 *)puVar1);
  *(undefined8 *)(lVar12 + 0x58) = 0;
  *(undefined8 *)(lVar12 + 0x50) = 0;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  *(undefined4 *)(lVar12 + 0x10) = 0;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x28,*(undefined8 *)puVar1);
  *(undefined8 *)(lVar12 + 0x68) = 0;
  *(undefined8 *)(lVar12 + 0x60) = 0;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  *(undefined4 *)(lVar12 + 0x14) = 0;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x28,*(undefined8 *)puVar1);
  *(undefined8 *)(lVar12 + 0x78) = 0;
  *(undefined8 *)(lVar12 + 0x70) = 0;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x28,*(undefined8 *)puVar1);
  uVar14 = FUN_028221b4(0);
  *(undefined8 *)(lVar12 + 0x80) = uVar14;
                    /* catch() { ... } // from try @ 0279b664 with catch @ 0279b650
                       catch() { ... } // from try @ 0279b694 with catch @ 0279b650
                       catch() { ... } // from try @ 0279b6d0 with catch @ 0279b650 */
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x28,*(undefined8 *)puVar1);
                    /* try { // try from 0279b65c to 0289b663 has its CatchHandler @ 0279b678 */
                    /* try { // try from 0279b664 to 0289b68f has its CatchHandler @ 0279b650 */
  uVar14 = FUN_028221b4(0);
  *(undefined8 *)(lVar12 + 0x88) = uVar14;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0279b65c with catch @ 0279b678
                        */
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  *(undefined4 *)(lVar12 + 0x18) = 0;
                    /* try { // try from 0279b690 to 0289b693 has its CatchHandler @ 0279b6c0 */
                    /* try { // try from 0279b694 to 0289b6c3 has its CatchHandler @ 0279b650 */
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  uVar14 = FUN_0281dd20(2,0);
  *(undefined8 *)(lVar12 + 0x1c) = uVar14;
  puVar13 = (undefined8 *)
            FUN_013b3bbc(*(undefined8 *)(*(long *)puVar7 + 0xb8),*(undefined8 *)puVar9);
  auVar17 = _LAB_028aa0b0;
                    /* catch() { ... } // from try @ 0279b690 with catch @ 0279b6c0 */
                    /* try { // try from 0279b6c4 to 0289b6cf has its CatchHandler @ 0279b6e4 */
  puVar13[1] = LAB_028aa0b0._8_8_;
  *puVar13 = auVar17._0_8_;
                    /* try { // try from 0279b6d0 to 0289b6db has its CatchHandler @ 0279b650 */
  puVar13 = (undefined8 *)
            FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x10,*(undefined8 *)puVar6);
                    /* try { // try from 0279b6dc to 0289b6e3 has its CatchHandler @ 0279b6e4 */
  puVar13[1] = 0;
  puVar13[2] = 0;
  *puVar13 = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0279b6c4 with catch @ 0279b6e4
                       catch(type#2 @ 00000000) { ... } // from try @ 0279b6dc with catch @ 0279b6e4
                        */
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  *(undefined4 *)(lVar12 + 0x24) = 0;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  uVar14 = FUN_0281dd20(2,0);
  *(undefined8 *)(lVar12 + 0x28) = uVar14;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  *(undefined4 *)(lVar12 + 0x30) = 0;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  *(undefined4 *)(lVar12 + 0x34) = 0;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  *(undefined4 *)(lVar12 + 0x38) = 0x3f800000;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  *(undefined4 *)(lVar12 + 0x3c) = 0;
  lVar12 = FUN_013b3bbc(*(undefined8 *)(*(long *)puVar7 + 0xb8),*(undefined8 *)puVar9);
  uVar14 = FUN_028221b4(0);
  *(undefined8 *)(lVar12 + 0x10) = uVar14;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  uVar14 = FUN_0281dd20(2,0);
  *(undefined8 *)(lVar12 + 0x40) = uVar14;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  *(undefined4 *)(lVar12 + 0x48) = 0;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  uVar14 = FUN_0281dd20(2,0);
  *(undefined8 *)(lVar12 + 0x4c) = uVar14;
  lVar12 = FUN_013b3bbc(*(undefined8 *)(*(long *)puVar7 + 0xb8),*(undefined8 *)puVar9);
  uVar14 = FUN_028221b4(0);
  *(undefined8 *)(lVar12 + 0x18) = uVar14;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  uVar14 = FUN_028221b4(0);
  *(undefined8 *)(lVar12 + 0x54) = uVar14;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  uVar14 = FUN_028221b4(0);
  *(undefined8 *)(lVar12 + 0x5c) = uVar14;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  uVar14 = FUN_028221b4(0);
  *(undefined8 *)(lVar12 + 100) = uVar14;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  uVar14 = FUN_028221b4(0);
  *(undefined8 *)(lVar12 + 0x6c) = uVar14;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  uVar14 = FUN_0281dd20(3,0);
  *(undefined8 *)(lVar12 + 0x74) = uVar14;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  uVar14 = FUN_0281dd20(3,0);
  *(undefined8 *)(lVar12 + 0x7c) = uVar14;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  uVar14 = FUN_0281dd20(2,0);
  *(undefined8 *)(lVar12 + 0x84) = uVar14;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  uVar14 = FUN_0281dd20(2,0);
  *(undefined8 *)(lVar12 + 0x8c) = uVar14;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x28,*(undefined8 *)puVar1);
  *(undefined4 *)(lVar12 + 0x90) = 0x3f800000;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x28,*(undefined8 *)puVar1);
  *(undefined4 *)(lVar12 + 0x94) = 0;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  uVar14 = FUN_028221b4(0);
  *(undefined8 *)(lVar12 + 0x94) = uVar14;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  uVar14 = FUN_028221b4(0);
  *(undefined8 *)(lVar12 + 0x9c) = uVar14;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  uVar14 = FUN_028221b4(0);
  *(undefined8 *)(lVar12 + 0xa4) = uVar14;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  uVar14 = FUN_028221b4(0);
  *(undefined8 *)(lVar12 + 0xac) = uVar14;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  *(undefined4 *)(lVar12 + 0xb4) = 0;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  uVar14 = FUN_0281dd20(2,0);
  *(undefined8 *)(lVar12 + 0xb8) = uVar14;
  puVar13 = (undefined8 *)
            FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x18,*(undefined8 *)puVar4);
  FUN_0281de38(&local_130,3,0);
  local_100 = local_120;
  puVar13[2] = local_120;
  puVar13[1] = uStack_128;
  *puVar13 = local_130;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x18,*(undefined8 *)puVar4);
  auVar17 = FUN_0281dfb4(3,0);
  *(undefined1 (*) [16])(lVar12 + 0x18) = auVar17;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x10,*(undefined8 *)puVar6);
  *(undefined4 *)(lVar12 + 0x18) = 0;
  lVar12 = FUN_013b3bbc(*(undefined8 *)(*(long *)puVar7 + 0xb8),*(undefined8 *)puVar9);
  *(undefined8 *)(lVar12 + 0x28) = 0;
  *(undefined8 *)(lVar12 + 0x30) = 0;
  *(undefined8 *)(lVar12 + 0x20) = 0;
  *(undefined4 *)(lVar12 + 0x38) = 0;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
  uVar14 = FUN_0281dd20(2,0);
  *(undefined8 *)(lVar12 + 0xc0) = uVar14;
  lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x18,*(undefined8 *)puVar4);
  FUN_02822604(&local_130,0);
  local_140 = (undefined4)local_120;
  *(undefined4 *)(lVar12 + 0x38) = (undefined4)local_120;
  *(undefined8 *)(lVar12 + 0x30) = uStack_128;
  *(undefined8 *)(lVar12 + 0x28) = local_130;
  plVar15 = (long *)FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x20,*(undefined8 *)puVar2);
  lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  puVar5 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass108_0_<RequestFileDownload>b__0__;
  puVar1 = PTR_DAT_033ef510;
  if (lVar12 != 0) {
    FUN_01320e50(lVar12,*(undefined8 *)
                         Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass108_0_<RequestFileDownload>b__0__
                );
    uVar14 = FUN_0282300c(0);
    FUN_00ce58c4(lVar12,uVar14,*(undefined8 *)puVar1);
    *plVar15 = lVar12;
    lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x20,*(undefined8 *)puVar2);
    lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    puVar3 = Method_TMPro_TMP_Dropdown_<>c__DisplayClass69_0_<Show>b__0__;
    if (lVar16 != 0) {
      FUN_01320e50(lVar16,*(undefined8 *)puVar5);
      uVar14 = FUN_0282300c(0);
      FUN_00ce58c4(lVar16,uVar14,*(undefined8 *)puVar1);
      *(long *)(lVar12 + 8) = lVar16;
      lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x20,*(undefined8 *)puVar2);
      lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      puVar5 = StringLiteral_1514;
      puVar3 = Method_UnityEngine_UIElements_UIElementsRuntimeUtility_EndRenderOverlays__;
      puVar1 = Method_System_Collections_HashHelpers_GetPrime__;
      if (lVar16 != 0) {
        FUN_01320e50(lVar16,*(undefined8 *)PTR_DAT_033eee80);
        auVar17 = FUN_027625a0(*(undefined8 *)puVar1,0);
        FUN_00afc3f8(lVar16,auVar17._0_8_,auVar17._8_8_,*(undefined8 *)puVar5);
        *(long *)(lVar12 + 0x10) = lVar16;
        lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x20,*(undefined8 *)puVar2);
        lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        puVar2 = System_Func<float,_bool>_TypeInfo;
        if (lVar16 != 0) {
          FUN_01320e50(lVar16,*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_SetResult__
                      );
          uVar10 = FUN_02819edc(0,0);
          FUN_00ce5abc(lVar16,uVar10,*(undefined8 *)puVar2);
          *(long *)(lVar12 + 0x18) = lVar16;
          lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x18,*(undefined8 *)puVar4);
          FUN_0281e0d0(local_168,3,0);
          local_120 = local_158;
          uStack_128 = local_168._8_8_;
          local_130 = local_168._0_8_;
          *(undefined8 *)(lVar12 + 0x4c) = local_158;
          *(undefined8 *)(lVar12 + 0x44) = uStack_128;
          *(undefined8 *)(lVar12 + 0x3c) = local_130;
          lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x10,*(undefined8 *)puVar6);
          auVar17 = NEON_fmov(0x3f800000,4);
          *(long *)(lVar12 + 0x24) = auVar17._8_8_;
          *(long *)(lVar12 + 0x1c) = auVar17._0_8_;
          lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x10,*(undefined8 *)puVar6);
          *(undefined4 *)(lVar12 + 0x2c) = 0;
          lVar12 = FUN_013b3bbc(*(undefined8 *)(*(long *)puVar7 + 0xb8),*(undefined8 *)puVar9);
          *(undefined8 *)(lVar12 + 0x40) = 0;
          lVar12 = FUN_013b3bbc(*(undefined8 *)(*(long *)puVar7 + 0xb8),*(undefined8 *)puVar9);
          *(undefined8 *)(lVar12 + 0x48) = 0;
          *(undefined8 *)(lVar12 + 0x50) = 0;
          lVar12 = FUN_013b3bbc(*(undefined8 *)(*(long *)puVar7 + 0xb8),*(undefined8 *)puVar9);
          *(undefined4 *)(lVar12 + 0x58) = 0;
          lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x10,*(undefined8 *)puVar6);
          *(undefined4 *)(lVar12 + 0x30) = 0;
          lVar12 = FUN_013b3bbc(*(undefined8 *)(*(long *)puVar7 + 0xb8),*(undefined8 *)puVar9);
          uVar14 = FUN_028221b4(0);
          *(undefined8 *)(lVar12 + 0x5c) = uVar14;
          lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x10,*(undefined8 *)puVar6);
          *(undefined4 *)(lVar12 + 0x34) = 0;
          lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x10,*(undefined8 *)puVar6);
          *(undefined4 *)(lVar12 + 0x38) = 0;
          lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x10,*(undefined8 *)puVar6);
          *(undefined4 *)(lVar12 + 0x3c) = 0;
          lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x10,*(undefined8 *)puVar6);
          *(undefined4 *)(lVar12 + 0x40) = 0;
          lVar12 = FUN_013b3bbc(*(undefined8 *)(*(long *)puVar7 + 0xb8),*(undefined8 *)puVar9);
          *(undefined4 *)(lVar12 + 100) = 0;
          lVar12 = FUN_013b3bbc(*(undefined8 *)(*(long *)puVar7 + 0xb8),*(undefined8 *)puVar9);
          *(undefined8 *)(lVar12 + 0x68) = 0;
          *(undefined8 *)(lVar12 + 0x70) = 0;
          lVar12 = FUN_013b3bbc(*(undefined8 *)(*(long *)puVar7 + 0xb8),*(undefined8 *)puVar9);
          *(undefined4 *)(lVar12 + 0x78) = 0;
          lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 0x10,*(undefined8 *)puVar6);
          *(undefined4 *)(lVar12 + 0x44) = 0;
          lVar12 = FUN_013b3bbc(*(undefined8 *)(*(long *)puVar7 + 0xb8),*(undefined8 *)puVar9);
          *(undefined4 *)(lVar12 + 0x7c) = 0;
          lVar12 = FUN_013b3bbc(*(undefined8 *)(*(long *)puVar7 + 0xb8),*(undefined8 *)puVar9);
          *(undefined4 *)(lVar12 + 0x80) = 0;
          lVar12 = FUN_013b3bbc(*(long *)(*(long *)puVar7 + 0xb8) + 8,*(undefined8 *)puVar8);
          uVar14 = FUN_0281dd20(2,0);
          *(undefined8 *)(lVar12 + 200) = uVar14;
          lVar12 = FUN_013b3bbc(*(undefined8 *)(*(long *)puVar7 + 0xb8),*(undefined8 *)puVar9);
          uVar14 = FUN_028221b4(0);
          *(undefined8 *)(lVar12 + 0x84) = uVar14;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


