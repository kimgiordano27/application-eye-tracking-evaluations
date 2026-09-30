/*
FUNCTION_NAME: FUN_02530d08
ENTRY_POINT: 02530d08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x02531064) */

void FUN_02530d08(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  
                    /* try { // try from 02530d24 to 02630e1b has its CatchHandler @ 02530d24
                       catch() { ... } // from try @ 02530d24 with catch @ 02530d24
                       catch() { ... } // from try @ 02530fa4 with catch @ 02530d24
                       catch() { ... } // from try @ 02531018 with catch @ 02530d24
                       catch() { ... } // from try @ 02531050 with catch @ 02530d24
                       catch() { ... } // from try @ 02531080 with catch @ 02530d24 */
  if ((DAT_03782ad5 & 1) == 0) {
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_7367A65185E4F747AA29364AB199D01646A010A62129A6BA2E35E929D7294D62
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<int>_Sort__);
    thunk_FUN_00d48444(Method_UnityEngine_Object_FindObjectsOfType<WavelengthPower>__);
    thunk_FUN_00d48444(StringLiteral_1637);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Plane>__
                      );
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(RhythmGameStarter_Note_SwipeDirection_TypeInfo);
    thunk_FUN_00d48444(Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Parse__);
    thunk_FUN_00d48444(StringLiteral_1692);
    DAT_03782ad5 = 1;
  }
  puVar4 = RhythmGameStarter_Note_SwipeDirection_TypeInfo;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  local_70 = FUN_02559c4c(*(long *)(param_1 + 0x18),2,0);
  uVar12 = local_70._8_8_;
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x18);
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar9 = FUN_017726a0(uVar3,uVar12 & 0xffffffff,0);
  puVar7 = StringLiteral_1637;
  puVar5 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Plane>__
  ;
  lVar11 = *(long *)(param_1 + 0x20);
                    /* try { // try from 02530e1c to 02630e1f has its CatchHandler @ 0253101c */
  uVar12 = (ulong)uVar9;
  bVar8 = lVar11 == 0;
                    /* try { // try from 02530e24 to 02630e2b has its CatchHandler @ 02531020 */
  if (0 < (int)uVar9) {
    lVar14 = 0;
    uVar13 = 0;
    do {
      if (bVar8) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02531050 to 02631073 has its CatchHandler @ 02530d24 */
        FUN_00da518c();
      }
      FUN_0132138c(lVar11,uVar13 & 0xffffffff,&local_100,*(undefined8 *)puVar7);
      uStack_c8 = uStack_f8;
      local_d0 = local_100;
      uStack_b8 = uStack_e8;
      local_c0 = uStack_f0;
      uStack_a8 = uStack_d8;
      local_b0 = local_e0;
      puVar2 = (undefined8 *)(local_70._0_8_ + lVar14);
      local_170 = puVar2[4];
      uStack_188 = puVar2[1];
      local_190 = *puVar2;
      uStack_178 = puVar2[3];
      uStack_180 = puVar2[2];
                    /* try { // try from 02530e7c to 02630ea7 has its CatchHandler @ 02531024 */
      uStack_148 = uStack_e8;
      local_150 = uStack_f0;
      uStack_138 = uStack_d8;
      uStack_140 = local_e0;
      uStack_158 = uStack_f8;
      local_160 = local_100;
      local_130 = local_190;
      uStack_128 = uStack_188;
      uStack_120 = uStack_180;
      uStack_118 = uStack_178;
      local_110 = local_170;
      FUN_025403f4(&local_100,&local_160,&local_190,0);
      uStack_1b8 = uStack_f8;
      local_1c0 = local_100;
      uStack_1a8 = uStack_e8;
      uStack_1b0 = uStack_f0;
      uStack_198 = uStack_d8;
      local_1a0 = local_e0;
      FUN_0132149c(lVar11,uVar13 & 0xffffffff,&local_1c0,*(undefined8 *)puVar5);
      lVar11 = *(long *)(param_1 + 0x20);
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 0x28;
      bVar8 = lVar11 == 0;
                    /* try { // try from 02530ee0 to 02630f07 has its CatchHandler @ 02531030 */
    } while (uVar12 != uVar13);
  }
  puVar6 = 
  Field_<PrivateImplementationDetails>_7367A65185E4F747AA29364AB199D01646A010A62129A6BA2E35E929D7294D62
  ;
  puVar5 = Method_System_Collections_Generic_List<int>_Sort__;
  if (!bVar8) {
    if ((int)uVar9 < *(int *)(lVar11 + 0x18)) {
      do {
        FUN_0132138c(lVar11,uVar12,&local_d0,*(undefined8 *)puVar7);
        uStack_98 = uStack_c8;
        local_a0 = local_d0;
        uStack_88 = uStack_b8;
        local_90 = local_c0;
        uStack_78 = uStack_a8;
        local_80 = local_b0;
        FUN_0254034c(&local_a0,0);
        lVar11 = *(long *)(param_1 + 0x20);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
                    /* try { // try from 02530f3c to 02630f63 has its CatchHandler @ 0253102c */
        uVar1 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar1;
      } while ((int)uVar1 < *(int *)(lVar11 + 0x18));
      FUN_01324c7c(lVar11,uVar9,*(int *)(lVar11 + 0x18) - uVar9,*(undefined8 *)puVar5);
    }
    else if ((*(int *)(lVar11 + 0x18) < (int)local_70._8_4_) && ((int)uVar9 < (int)local_70._8_4_))
    {
      lVar10 = (long)(int)uVar9;
                    /* try { // try from 02530f94 to 02630fa3 has its CatchHandler @ 02531028 */
      lVar14 = ((-(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2) + (long)(int)uVar9) * 8
      ;
      while( true ) {
        lVar10 = lVar10 + 1;
        puVar2 = (undefined8 *)(local_70._0_8_ + lVar14);
                    /* try { // try from 02530fa4 to 0263100f has its CatchHandler @ 02530d24 */
        local_1d0 = puVar2[4];
        uStack_1e8 = puVar2[1];
        local_1f0 = *puVar2;
        uStack_1d8 = puVar2[3];
        uStack_1e0 = puVar2[2];
        uStack_b8 = 0;
        local_c0 = 0;
        uStack_a8 = 0;
        local_b0 = 0;
        uStack_c8 = 0;
        local_d0 = 0;
        local_100 = local_1f0;
        uStack_f8 = uStack_1e8;
        uStack_f0 = uStack_1e0;
        uStack_e8 = uStack_1d8;
        local_e0 = local_1d0;
        FUN_0254021c(&local_d0,&local_1f0,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uStack_218 = uStack_c8;
        local_220 = local_d0;
        uStack_208 = uStack_b8;
        uStack_210 = local_c0;
        uStack_1f8 = uStack_a8;
        local_200 = local_b0;
        FUN_00cbb634(lVar11,&local_220,*(undefined8 *)puVar6);
        if ((int)local_70._8_4_ <= lVar10) break;
        lVar11 = *(long *)(param_1 + 0x20);
        lVar14 = lVar14 + 0x28;
                    /* try { // try from 02531010 to 02631013 has its CatchHandler @ 02531018 */
      }
    }
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02531010 with catch @ 02531018
                       try { // try from 02531018 to 0263104b has its CatchHandler @ 02530d24 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02530e1c with catch @ 0253101c
                        */
    if (local_70._0_8_ != 0) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02530e24 with catch @ 02531020
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02530e7c with catch @ 02531024
                       catch(type#1 @ 03274860) { ... } // from try @ 02531014 with catch @ 02531024
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02530f94 with catch @ 02531028
                        */
      FUN_01342a94(local_70,*(undefined8 *)puVar4);
    }
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02530f3c with catch @ 0253102c
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02530ee0 with catch @ 02531030
                        */
                    /* try { // try from 0253104c to 0263104f has its CatchHandler @ 02531070 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


