/*
FUNCTION_NAME: FUN_05d8b518
ENTRY_POINT: 05d8b518
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


void FUN_05d8b518(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                 undefined8 param_5,undefined4 param_6,long param_7,long param_8)

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
  long lVar17;
  int *piVar18;
  undefined8 uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  long *local_140;
  ulong uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  float local_114;
  undefined8 local_110;
  undefined4 local_108;
  long *local_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long *local_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_GravityAccountsLinkingHandlerDefualt_<Start>d__9>__
  ;
  if ((DAT_06a5826b & 1) == 0) {
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
    DAT_06a5826b = 1;
  }
  puVar4 = Method_System_Data_Common_StringStorage_Aggregate__;
  local_108 = 0;
  local_110 = 0;
  local_114 = 0.0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  plVar9 = (long *)FUN_05fdd1e8(param_5,0);
  lVar14 = *(long *)puVar4;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_02dabd98(lVar14);
    lVar14 = *(long *)puVar4;
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
  if (lVar14 != 0) {
    iVar20 = *(int *)(lVar14 + 0x18);
    *(undefined4 *)(lVar14 + 0x18) = 0;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (0 < iVar20) {
      FUN_05025690(*(undefined8 *)(lVar14 + 0x10),0,iVar20,0);
    }
    puVar5 = 
    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_GetOrCreate<StylePropertyAnimationSystem_ValuesTransformOrigin>__
    ;
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebOperation_<Run>d__58>__
    ;
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_FtpWebRequest_<CreateConnectionAsync>d__86>__
    ;
    if (plVar9 != (long *)0x0) {
      iVar20 = 0;
      do {
        lVar14 = *plVar9;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_05d8b6d4;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d87540(plVar9,*(long *)puVar2,0);
LAB_05d8b6d4:
        iVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if (iVar7 <= iVar20) {
          lVar14 = *(long *)puVar4;
          if (*(int *)(lVar14 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
            lVar14 = *(long *)puVar4;
          }
          puVar2 = 
          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_StartTransition<BackgroundPosition>__
          ;
          uVar12 = (*(undefined8 **)(lVar14 + 0xb8))[2];
          uVar19 = **(undefined8 **)(lVar14 + 0xb8);
          if (*(int *)(*(long *)PTR_DAT_0664b830 + 0xe4) == 0) {
            thunk_FUN_02dabd98(*(long *)PTR_DAT_0664b830);
          }
          FUN_03375940(uVar12,uVar19,*(undefined8 *)puVar2);
          if (param_8 != 0) {
            FUN_03794830(param_8,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10),
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
          piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_05d8b734;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar10 = (undefined8 *)FUN_02d87540(plVar9,*(long *)puVar3,0);
LAB_05d8b734:
        plVar11 = (long *)(*(code *)*puVar10)(plVar9,iVar20,puVar10[1]);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02dabd98(*(long *)puVar4);
        }
        uVar16 = FUN_05d8c33c(plVar11,param_6);
        if ((uVar16 & 1) != 0) {
          if (plVar11 == (long *)0x0) break;
          uVar22 = *(undefined4 *)((long)plVar11 + 0x3c);
          lVar14 = plVar11[8];
          uVar23 = *(undefined4 *)((long)plVar11 + 0x44);
          lVar15 = plVar11[9];
          uVar12 = FUN_05fd8988(plVar11,0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02dabd98(*(long *)puVar4);
          }
          uVar13 = FUN_05d8c3dc(uVar22,(int)lVar14,uVar23,(int)lVar15,param_1,param_2,param_3,uVar12
                                ,&local_110,&local_114);
          uVar22 = local_108;
          uVar16 = local_110;
          fVar6 = local_114;
          if (((uVar13 & 1) != 0) && (local_114 <= param_4)) {
            if (param_7 == 0) break;
            uVar23 = local_110._4_4_;
            uVar21 = FUN_05e9f644(local_110 & 0xffffffff,local_110._4_4_,local_108,param_7,0);
            uVar13 = (**(code **)(*plVar11 + 0x418))
                               (plVar11,param_7,*(undefined8 *)(*plVar11 + 0x420));
            if ((uVar13 & 1) != 0) {
              lVar14 = *(long *)puVar4;
              if (*(int *)(lVar14 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar14 = *(long *)puVar4;
              }
              lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
              uVar8 = FUN_05e9ee2c(param_7,0);
              local_120 = 0;
              uStack_138 = 0;
              local_128 = 0;
              local_130 = 0;
              local_140 = plVar11;
              thunk_FUN_02dc1ef0(&local_140,plVar11);
              uStack_138 = uVar16;
              local_130 = CONCAT44(uVar21,uVar22);
              local_128 = CONCAT44(fVar6,uVar23);
              local_120 = CONCAT44(local_120._4_4_,uVar8);
              if (lVar14 == 0) break;
              lVar15 = *(long *)(lVar14 + 0x10);
              local_e0 = local_120;
              lVar17 = *(long *)puVar5;
              local_100 = local_140;
              uStack_e8 = local_128;
              uStack_f0 = local_130;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              uStack_f8 = uStack_138;
              if (lVar15 == 0) break;
              uVar1 = *(uint *)(lVar14 + 0x18);
              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                lVar15 = lVar15 + (long)(int)uVar1 * 0x28;
                *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                *(ulong *)(lVar15 + 0x28) = uVar16;
                *(long **)(lVar15 + 0x20) = local_140;
                *(undefined8 *)(lVar15 + 0x38) = local_128;
                *(undefined8 *)(lVar15 + 0x30) = local_130;
                *(undefined8 *)(lVar15 + 0x40) = local_120;
                thunk_FUN_02dc1ef0(lVar15 + 0x20,0);
              }
              else {
                local_d0 = local_140;
                uStack_b8 = local_128;
                uStack_c0 = local_130;
                local_b0 = local_120;
                uStack_c8 = uStack_138;
                FUN_037945c0(lVar14,&local_d0,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
        iVar20 = iVar20 + 1;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


