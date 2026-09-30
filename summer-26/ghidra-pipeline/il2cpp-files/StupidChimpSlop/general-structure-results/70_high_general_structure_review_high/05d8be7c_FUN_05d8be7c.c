/*
FUNCTION_NAME: FUN_05d8be7c
ENTRY_POINT: 05d8be7c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05d8be7c(float param_1,undefined8 param_2,long *param_3,undefined4 param_4,long param_5,
                 long param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 uVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  long *local_160;
  ulong uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  long *local_130;
  ulong uStack_128;
  long local_120;
  undefined8 local_110;
  undefined4 local_108;
  long *local_100;
  ulong uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long *local_d0;
  ulong uStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  float local_94;
  
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_GravityAccountsLinkingHandlerDefualt_<Start>d__9>__
  ;
                    /* try { // try from 05d8be80 to 05e8be83 has its CatchHandler @ 05d8c11c */
                    /* try { // try from 05d8be94 to 05e8be97 has its CatchHandler @ 05d8beec */
                    /* try { // try from 05d8be9c to 05e8be9f has its CatchHandler @ 05d8bedc */
                    /* try { // try from 05d8bea4 to 05e8bea7 has its CatchHandler @ 05d8bf04 */
                    /* try { // try from 05d8beac to 05e8beaf has its CatchHandler @ 05d8bee0 */
                    /* try { // try from 05d8beb0 to 05e8bf27 has its CatchHandler @ 05d8af34 */
                    /* catch() { ... } // from try @ 05d8bb34 with catch @ 05d8beb4 */
                    /* catch() { ... } // from try @ 05d8bb20 with catch @ 05d8beb8 */
                    /* catch() { ... } // from try @ 05d8bac4 with catch @ 05d8bebc */
                    /* catch() { ... } // from try @ 05d8bb0c with catch @ 05d8bec0 */
                    /* catch() { ... } // from try @ 05d8baa8 with catch @ 05d8bec4 */
                    /* catch() { ... } // from try @ 05d8ba0c with catch @ 05d8bec8 */
                    /* catch() { ... } // from try @ 05d8bae4 with catch @ 05d8becc */
                    /* catch() { ... } // from try @ 05d8ba34 with catch @ 05d8bed0 */
  if ((DAT_06a5826c & 1) == 0) {
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_GravityAccountsLinkingHandlerDefualt_<Start>d__9>__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_FtpWebRequest_<CreateConnectionAsync>d__86>__
                );
    FUN_02d4dc40(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebOperation_<Run>d__58>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<Background>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_GetOrCreate<StylePropertyAnimationSystem_ValuesTransformOrigin>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_GetOrCreate<StylePropertyAnimationSystem_ValuesTranslate>__
                );
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<BackgroundPosition>__
                );
    FUN_02d4dc40(PTR_DAT_0664b830);
    FUN_02d4dc40(Method_System_Data_Common_StringStorage_Aggregate__);
    DAT_06a5826c = 1;
  }
  puVar4 = Method_System_Data_Common_StringStorage_Aggregate__;
  local_108 = 0;
  local_110 = 0;
  local_94 = 0.0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  plVar9 = (long *)FUN_05fdd1e8(param_2,0);
  lVar14 = *(long *)puVar4;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02dabd98(lVar14);
    lVar14 = *(long *)puVar4;
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
  if (lVar14 != 0) {
    iVar19 = *(int *)(lVar14 + 0x18);
    *(undefined4 *)(lVar14 + 0x18) = 0;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (0 < iVar19) {
      FUN_05025690(*(undefined8 *)(lVar14 + 0x10),0,iVar19,0);
    }
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebOperation_<Run>d__58>__
    ;
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_FtpWebRequest_<CreateConnectionAsync>d__86>__
    ;
    if (plVar9 != (long *)0x0) {
      iVar19 = 0;
      do {
        lVar14 = *plVar9;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_05d8c02c;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d87540(plVar9,*(long *)puVar2,0);
LAB_05d8c02c:
        iVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if (iVar7 <= iVar19) {
          lVar14 = *(long *)puVar4;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar14 = *(long *)puVar4;
          }
          puVar2 = 
          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<BackgroundPosition>__
          ;
          uVar12 = (*(undefined8 **)(lVar14 + 0xb8))[2];
          uVar18 = **(undefined8 **)(lVar14 + 0xb8);
          if (*(int *)(*(long *)PTR_DAT_0664b830 + 0xe4) == 0) {
            thunk_FUN_02dabd98(*(long *)PTR_DAT_0664b830);
          }
          FUN_03375940(uVar12,uVar18,*(undefined8 *)puVar2);
          if (param_6 != 0) {
            FUN_03794830(param_6,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10),
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<Background>__
                        );
            return;
          }
          break;
        }
        lVar14 = *plVar9;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_05d8c08c;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d87540(plVar9,*(long *)puVar3,0);
LAB_05d8c08c:
        plVar11 = (long *)(*(code *)*puVar10)(plVar9,iVar19,puVar10[1]);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02dabd98(*(long *)puVar4);
        }
        uVar16 = FUN_05d8c33c(plVar11,param_4);
        if ((uVar16 & 1) != 0) {
          if (plVar11 == (long *)0x0) break;
          uVar21 = *(undefined4 *)((long)plVar11 + 0x3c);
          lVar14 = plVar11[8];
          uVar22 = *(undefined4 *)((long)plVar11 + 0x44);
          lVar15 = plVar11[9];
          uVar12 = FUN_05fd8988(plVar11,0);
          uStack_c8 = param_3[1];
          local_d0 = (long *)*param_3;
          local_c0 = param_3[2];
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          uStack_128 = uStack_c8;
          local_130 = local_d0;
          local_120 = local_c0;
          uVar13 = FUN_05d8c650(uVar21,(int)lVar14,uVar22,(int)lVar15,uVar12,&local_130,&local_110,
                                &local_94);
          fVar6 = local_94;
          uVar21 = local_108;
          uVar16 = local_110;
          if (((uVar13 & 1) != 0) && (local_94 <= param_1)) {
            if (param_5 == 0) break;
            uVar22 = local_110._4_4_;
            uVar20 = FUN_05e9f644(local_110 & 0xffffffff,local_110._4_4_,local_108,param_5,0);
            uVar13 = (**(code **)(*plVar11 + 0x418))
                               (plVar11,param_5,*(undefined8 *)(*plVar11 + 0x420));
            if ((uVar13 & 1) != 0) {
              lVar14 = *(long *)puVar4;
              if (*(int *)(lVar14 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar14 = *(long *)puVar4;
              }
              lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
              uVar8 = FUN_05e9ee2c(param_5,0);
              local_140 = 0;
              uStack_158 = 0;
              local_148 = 0;
              local_150 = 0;
              local_160 = plVar11;
              thunk_FUN_02dc1ef0(&local_160,plVar11);
              puVar5 = 
              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_GetOrCreate<StylePropertyAnimationSystem_ValuesTransformOrigin>__
              ;
              uStack_158 = uVar16;
              local_150 = CONCAT44(uVar20,uVar21);
              local_148 = CONCAT44(fVar6,uVar22);
              local_140 = CONCAT44(local_140._4_4_,uVar8);
              if (lVar14 == 0) break;
              lVar15 = *(long *)(lVar14 + 0x10);
              local_e0 = local_140;
              local_100 = local_160;
              uStack_e8 = local_148;
              lStack_f0 = local_150;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              uStack_f8 = uStack_158;
              if (lVar15 == 0) break;
              uVar1 = *(uint *)(lVar14 + 0x18);
              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                lVar15 = lVar15 + (long)(int)uVar1 * 0x28;
                *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                *(ulong *)(lVar15 + 0x28) = uVar16;
                *(long **)(lVar15 + 0x20) = local_160;
                *(undefined8 *)(lVar15 + 0x38) = local_148;
                *(long *)(lVar15 + 0x30) = local_150;
                *(undefined8 *)(lVar15 + 0x40) = local_140;
                thunk_FUN_02dc1ef0(lVar15 + 0x20,0);
              }
              else {
                local_d0 = local_160;
                uStack_b8 = local_148;
                local_c0 = local_150;
                local_b0 = local_140;
                uStack_c8 = uStack_158;
                FUN_037945c0(lVar14,&local_d0,
                             *(undefined8 *)
                              (*(long *)(*(long *)(*(long *)puVar5 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
        iVar19 = iVar19 + 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


