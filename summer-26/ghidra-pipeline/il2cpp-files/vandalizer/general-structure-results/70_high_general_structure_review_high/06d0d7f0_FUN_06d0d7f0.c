/*
FUNCTION_NAME: FUN_06d0d7f0
ENTRY_POINT: 06d0d7f0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_6
*/


void FUN_06d0d7f0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 float param_5,float param_6,float param_7,long param_8,uint param_9,uint param_10,
                 long param_11,undefined8 param_12)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_f8;
  undefined8 auStack_f0 [2];
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_58;
  
                    /* try { // try from 06d0d81c to 06e0d827 has its CatchHandler @ 06d0dac0 */
                    /* try { // try from 06d0d82c to 06e0d833 has its CatchHandler @ 06d0da9c */
                    /* try { // try from 06d0d834 to 06e0d83b has its CatchHandler @ 06d0dab8 */
                    /* try { // try from 06d0d854 to 06e0d85f has its CatchHandler @ 06d0daac */
  if ((bRam0000000007a50c0a & 1) == 0) {
    FUN_031f20f4(System_Collections_Generic_List<ILobbyCallbacks>_TypeInfo);
                    /* try { // try from 06d0d864 to 06e0d86b has its CatchHandler @ 06d0daa0 */
    FUN_031f20f4(
                UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundPosition,_BackgroundPosition>_TypeInfo
                );
                    /* try { // try from 06d0d878 to 06e0d88f has its CatchHandler @ 06d0daa8 */
    FUN_031f20f4(System_Threading_Tasks_TaskCompletionSource<string[]>_TypeInfo);
    FUN_031f20f4(
                UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundSize,_BackgroundSize>_TypeInfo
                );
    FUN_031f20f4(UnityEngine_UIElements_StyleValuePropertyBag<StyleCursor,_Cursor>_TypeInfo);
    FUN_031f20f4(System_Threading_Tasks_TaskCompletionSource<bool>_TypeInfo);
                    /* try { // try from 06d0d8a4 to 06e0d8ab has its CatchHandler @ 06d0da94 */
    FUN_031f20f4(System_Threading_Tasks_TaskCompletionSource<short>_TypeInfo);
                    /* try { // try from 06d0d8b4 to 06e0d8bb has its CatchHandler @ 06d0da90 */
    FUN_031f20f4(PTR_DAT_07608988);
    bRam0000000007a50c0a = 1;
  }
  puVar2 = UnityEngine_UIElements_StyleValuePropertyBag<StyleCursor,_Cursor>_TypeInfo;
  lStack_58 = 0;
  auStack_f0[0] = 0;
                    /* try { // try from 06d0d8cc to 06e0d8d3 has its CatchHandler @ 06d0da88 */
  if (*(long *)(param_8 + 0x40) != 0) {
    FUN_057eb7e4(*(long *)(param_8 + 0x40),param_11,param_10 & 1,
                 *(undefined8 *)
                  UnityEngine_UIElements_StyleValuePropertyBag<StyleCursor,_Cursor>_TypeInfo);
                    /* try { // try from 06d0d8f4 to 06e0d8fb has its CatchHandler @ 06d0da8c */
    if (*(long *)(param_8 + 0x58) != 0) {
      FUN_057eb7e4(*(long *)(param_8 + 0x58),param_11,param_9 & 1,*(undefined8 *)puVar2);
      if (*(long *)(param_8 + 0x50) != 0) {
                    /* try { // try from 06d0d920 to 06e0d927 has its CatchHandler @ 06d0da78 */
        FUN_05827784(param_1,*(long *)(param_8 + 0x50),param_11,
                     *(undefined8 *)
                      UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundSize,_BackgroundSize>_TypeInfo
                    );
        fVar10 = 0.0;
        fVar12 = (float)param_1;
        if ((param_9 & 1) == 0) {
          if (*(long *)(param_8 + 0x48) == 0) goto LAB_06d0db38;
                    /* try { // try from 06d0d950 to 06e0d96f has its CatchHandler @ 06d0da74 */
          uVar4 = FUN_05815364(*(long *)(param_8 + 0x48),param_12,&lStack_58,
                               *(undefined8 *)
                                UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundPosition,_BackgroundPosition>_TypeInfo
                              );
          puVar3 = System_Threading_Tasks_TaskCompletionSource<string[]>_TypeInfo;
          puVar2 = PTR_DAT_07608988;
          if ((uVar4 & 1) != 0) {
            if (lStack_58 == 0) goto LAB_06d0db38;
            iVar1 = *(int *)(lStack_58 + 0x20);
            if (1 < iVar1) {
              plVar8 = *(long **)(lStack_58 + 0x10);
              if (plVar8 == (long *)0x0) goto LAB_06d0db38;
              iVar9 = 0;
              do {
                lVar6 = *plVar8;
                uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar4 != 0) {
                  piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                      puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                      goto LAB_06d0d9d8;
                    }
                    uVar4 = uVar4 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar4 != 0);
                }
                puVar5 = (undefined8 *)FUN_0322c1e8(plVar8,*(long *)puVar2,0);
LAB_06d0d9d8:
                lVar6 = (*(code *)*puVar5)(plVar8,iVar9,puVar5[1]);
                if (lVar6 != param_11) {
                  if (*(long *)(param_8 + 0x50) == 0) goto LAB_06d0db38;
                  fVar10 = (float)FUN_05827718(*(long *)(param_8 + 0x50),lVar6,*(undefined8 *)puVar3
                                              );
                  if (fVar10 < fVar12) {
                    return;
                  }
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 != iVar1);
            }
          }
          fVar10 = 0.0;
          if (fVar12 < 1.0) {
            if (*(long *)(param_8 + 0x28) == 0) goto LAB_06d0db38;
            fVar10 = *(float *)(*(long *)(param_8 + 0x28) + 0x14);
          }
        }
        fVar11 = *(float *)(param_8 + 0x10);
        lVar6 = *(long *)(param_8 + 0x18);
        fVar10 = fVar10 + fVar11 * fVar12;
        if (fVar10 <= fVar11) {
          fVar11 = fVar10;
        }
        if (fVar10 < 0.0) {
          fVar11 = 0.0;
        }
        uStack_f8 = (ulong)(uint)in_stack_00000008;
        uStack_120 = CONCAT44(param_2,param_9) & 0xffffffff00000001;
        uStack_118 = CONCAT44(param_4,param_3);
        uStack_110 = CONCAT44(param_6 + fStack0000000000000004 * fVar11,
                              param_5 + fStack0000000000000000 * fVar11);
        uStack_108 = CONCAT44(1.0 - fVar12,param_7 + in_stack_00000008 * fVar11);
        auStack_f0[0] = param_12;
        thunk_FUN_0329bf60(auStack_f0,param_12);
        if (lVar6 != 0) {
          uStack_d8 = uStack_118;
          uStack_e0 = uStack_120;
          uStack_c8 = uStack_108;
          uStack_d0 = uStack_110;
          uStack_b8 = uStack_f8;
          uStack_c0 = _fStack0000000000000000;
          uStack_b0 = auStack_f0[0];
          FUN_0546b00c(lVar6,&uStack_e0,
                       *(undefined8 *)System_Collections_Generic_List<ILobbyCallbacks>_TypeInfo);
          return;
        }
      }
    }
  }
LAB_06d0db38:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


