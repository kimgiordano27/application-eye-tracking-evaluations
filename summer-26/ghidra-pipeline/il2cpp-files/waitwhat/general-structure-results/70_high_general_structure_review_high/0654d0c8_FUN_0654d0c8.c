/*
FUNCTION_NAME: FUN_0654d0c8
ENTRY_POINT: 0654d0c8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void FUN_0654d0c8(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined8 local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  
  puVar10 = System_Collections_Generic_List<DerObjectIdentifier>_TypeInfo;
  puVar8 = System_Collections_Generic_KeyValuePair<string,_JSONNode>_TypeInfo;
  puVar5 = PTR_DAT_070f3800;
                    /* try { // try from 0654d0cc to 0664d0d3 has its CatchHandler @ 0654d758 */
                    /* try { // try from 0654d0ec to 0664d0f7 has its CatchHandler @ 0654d770 */
  if ((DAT_0755729d & 1) == 0) {
                    /* try { // try from 0654d10c to 0664d113 has its CatchHandler @ 0654d724 */
    FUN_03188a78(PTR_DAT_070f37e8);
    FUN_03188a78(PTR_DAT_070f37f0);
    FUN_03188a78(PTR_DAT_070f37f8);
    FUN_03188a78(System_Collections_Generic_List<DerObjectIdentifier>_TypeInfo);
    FUN_03188a78(PTR_DAT_070f3800);
    FUN_03188a78(System_Collections_Generic_List<DecalEntityChunk>_TypeInfo);
    FUN_03188a78(
                System_Text_Json_Serialization_Metadata_JsonCollectionInfoValues<GrowableArray<int>>_TypeInfo
                );
    FUN_03188a78(System_Func<SelectExitEventArgs>_TypeInfo);
                    /* try { // try from 0654d170 to 0664d197 has its CatchHandler @ 0654d7a4 */
    FUN_03188a78(System_Collections_Generic_KeyValuePair<string,_JSONNode>_TypeInfo);
    DAT_0755729d = 1;
  }
  puVar9 = System_Collections_Generic_List<DecalEntityChunk>_TypeInfo;
  puVar7 = 
  System_Text_Json_Serialization_Metadata_JsonCollectionInfoValues<GrowableArray<int>>_TypeInfo;
  puVar6 = System_Func<SelectExitEventArgs>_TypeInfo;
  puVar4 = PTR_DAT_070f37f8;
  puVar3 = PTR_DAT_070f37f0;
  puVar2 = PTR_DAT_070f37e8;
  puStack_78 = (undefined8 *)0x0;
  local_80 = 0;
  local_70 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  FUN_0650abb8(param_1,0);
                    /* try { // try from 0654d1d4 to 0664d21f has its CatchHandler @ 0654d7ac */
  uVar11 = System_Array__BinarySearch<UnitySynchronizationContext_WorkRequest>
                     (param_1,*(undefined8 *)puVar8,*(undefined8 *)puVar10);
  *(undefined8 *)(param_1 + 0x1b8) = uVar11;
  local_90 = FUN_064fd424(param_1,0);
  FUN_04884c70(&local_b0,local_90,*(undefined8 *)puVar5);
  iVar17 = 0;
  local_70 = local_a0;
  puStack_78 = puStack_a8;
  local_80 = local_b0;
  local_b0 = 0;
  puStack_a8 = &local_80;
  while (uVar12 = FUN_05453998(&local_80,*(undefined8 *)puVar3), (uVar12 & 1) != 0) {
    plVar13 = (long *)FUN_054539c4(&local_80,*(undefined8 *)puVar4);
    if (plVar13 != (long *)0x0) {
      lVar15 = *(long *)puVar6;
      bVar1 = *(byte *)(lVar15 + 0x130);
                    /* try { // try from 0654d268 to 0664d26f has its CatchHandler @ 0654d764 */
      if ((bVar1 <= *(byte *)(*plVar13 + 0x130)) &&
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) == lVar15)) {
        iVar17 = iVar17 + 1;
                    /* try { // try from 0654d270 to 0664d27f has its CatchHandler @ 0654d79c */
      }
    }
  }
  FUN_05453994(&local_80,*(undefined8 *)puVar2);
                    /* try { // try from 0654d288 to 0664d293 has its CatchHandler @ 0654d768 */
  plVar13 = (long *)FUN_03188b1c(*(undefined8 *)puVar7,iVar17 - (uint)(0 < iVar17));
  auVar18 = FUN_064fd424(param_1,0);
                    /* try { // try from 0654d2a4 to 0664d2af has its CatchHandler @ 0654d754 */
  local_90 = auVar18;
  FUN_04884c70(&local_b0,local_90,*(undefined8 *)puVar5);
  uVar16 = 0;
  local_70 = local_a0;
  puStack_78 = puStack_a8;
  local_80 = local_b0;
  local_b0 = 0;
  puStack_a8 = &local_80;
  while( true ) {
    do {
      do {
                    /* try { // try from 0654d2dc to 0664d2df has its CatchHandler @ 0654d72c */
        uVar12 = FUN_05453998(&local_80,*(undefined8 *)puVar3);
        if ((uVar12 & 1) == 0) {
          FUN_05453994(&local_80,*(undefined8 *)puVar2);
                    /* try { // try from 0654d37c to 0664d38b has its CatchHandler @ 0654d6f0 */
          local_b0 = 0;
          puStack_a8 = (undefined8 *)0x0;
          FUN_04884ae0(&local_b0,plVar13,*(undefined8 *)puVar9);
          *(undefined8 **)(param_1 + 0x1c8) = puStack_a8;
          *(undefined8 *)(param_1 + 0x1c0) = local_b0;
                    /* try { // try from 0654d3a4 to 0664d3ab has its CatchHandler @ 0654d744 */
          return;
        }
                    /* try { // try from 0654d2e8 to 0664d2ef has its CatchHandler @ 0654d738 */
        plVar14 = (long *)FUN_054539c4(&local_80,*(undefined8 *)puVar4);
                    /* try { // try from 0654d300 to 0664d303 has its CatchHandler @ 0654d7a0 */
      } while ((plVar14 == *(long **)(param_1 + 0x1b8)) || (plVar14 == (long *)0x0));
      lVar15 = *(long *)puVar6;
      bVar1 = *(byte *)(lVar15 + 0x130);
                    /* try { // try from 0654d31c to 0664d36b has its CatchHandler @ 0654d744 */
    } while ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
            (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != lVar15));
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar15 = thunk_FUN_031c3cac(plVar14,*(undefined8 *)(*plVar13 + 0x40));
    if (lVar15 == 0) {
      uVar11 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
      FUN_03188b9c(uVar11,0);
    }
    if (*(uint *)(plVar13 + 3) <= uVar16) break;
    lVar15 = (long)(int)uVar16;
    uVar16 = uVar16 + 1;
    plVar13[lVar15 + 4] = (long)plVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


