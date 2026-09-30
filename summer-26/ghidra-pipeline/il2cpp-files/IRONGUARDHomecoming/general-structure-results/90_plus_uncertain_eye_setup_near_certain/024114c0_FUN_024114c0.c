/*
FUNCTION_NAME: FUN_024114c0
ENTRY_POINT: 024114c0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02411af4) */

void FUN_024114c0(undefined8 ****param_1,ulong param_2,long param_3)

{
  undefined8 ****ppppuVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong *puVar6;
  ulong **ppuVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  int *piVar16;
  ulong *__dest;
  long lVar17;
  long lVar18;
  long *plVar19;
  ulong auStack_190 [2];
  ulong *local_180;
  ulong **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  ulong *local_148;
  ulong **ppuStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  ulong *local_110;
  ulong **ppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  ulong *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  ulong *local_98;
  undefined4 local_90;
  long *local_88;
  undefined8 ***local_80;
  char local_74 [4];
  long local_70;
  
  uVar15 = tpidr_el0;
  local_70 = *(long *)(uVar15 + 0x28);
  plVar14 = *(long **)(param_3 + 0x38);
  local_80 = param_1;
  if (plVar14 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Contexts_Context_SetProperty__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__);
    plVar14 = *(long **)(param_3 + 0x38);
    if (plVar14 == (long *)0x0) {
      FUN_01ecafa0(param_3);
      plVar14 = *(long **)(param_3 + 0x38);
    }
  }
  lVar12 = *plVar14;
  uVar3 = *(ushort *)(lVar12 + 0x135);
  lVar8 = lVar12;
  if ((uVar3 & 1) == 0) {
    lVar12 = FUN_01ecaf44(lVar12);
    plVar14 = *(long **)(param_3 + 0x38);
    uVar3 = *(ushort *)(*plVar14 + 0x135);
    lVar8 = *plVar14;
  }
  lVar18 = (long)auStack_190 - ((ulong)(*(int *)(lVar12 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar12 = lVar8;
  if ((uVar3 & 1) == 0) {
    lVar8 = FUN_01ecaf44(lVar8);
    plVar14 = *(long **)(param_3 + 0x38);
    lVar12 = *plVar14;
  }
  lVar17 = lVar18 - ((ulong)(*(int *)(lVar8 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar2 = *(uint *)(lVar12 + 0xfc);
  __dest = (ulong *)(lVar17 - ((ulong)uVar2 + 0xf & 0x1fffffff0));
  local_88 = (long *)0x0;
  local_90 = 0;
  local_98 = (ulong *)0x0;
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_c8 = (ulong **)0x0;
  local_d0 = (ulong *)0x0;
  lVar8 = *plVar14;
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01ecaf44();
    plVar14 = *(long **)(param_3 + 0x38);
  }
  if (-1 < *(int *)(*plVar14 + 0x28)) {
    param_1 = &local_80;
  }
  FUN_01f09244(lVar8,plVar14[1],lVar18,param_1,0,&local_110);
  if (local_110 != (ulong *)0x0) {
    uVar9 = FUN_03e1a3c0(local_110,param_2,&local_88,0);
    if ((uVar9 & 1) == 0) goto LAB_02411ab4;
    plVar14 = *(long **)(param_3 + 0x38);
    lVar8 = *plVar14;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44();
      plVar14 = *(long **)(param_3 + 0x38);
    }
    ppppuVar1 = (undefined8 ****)local_80;
    if (-1 < *(int *)(*plVar14 + 0x28)) {
      ppppuVar1 = &local_80;
    }
    FUN_01f09244(lVar8,plVar14[2],lVar17,ppppuVar1,0,&local_110);
    puVar6 = local_110;
    puVar5 = Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__;
    if (local_110 != (ulong *)0x0) {
      uVar13 = *local_110;
      uVar9 = (ulong)*(ushort *)(uVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar16 = (int *)(*(long *)(uVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__) {
            puVar10 = (undefined8 *)(uVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_02411704;
          }
          uVar9 = uVar9 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_01ecb238(local_110,
                             *(long *)Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__,0
                            );
LAB_02411704:
      lVar8 = (*(code *)*puVar10)(puVar6,param_2 & 0xffffffff,puVar10[1]);
      if (lVar8 != 0) {
        FUN_03e1f400(&local_148,lVar8,param_2 >> 0x20,0);
        plVar14 = local_88;
        ppuStack_108 = ppuStack_140;
        ppuVar7 = ppuStack_108;
        local_110 = local_148;
        uStack_f8 = uStack_130;
        uStack_100 = local_138;
        ppuStack_108._0_4_ = SUB84(ppuStack_140,0);
        uStack_e8 = uStack_120;
        local_f0 = local_128;
        local_e0 = local_118;
        local_98 = local_148;
        local_90 = ppuStack_108._0_4_;
        ppuStack_108 = ppuVar7;
        if (local_88 != (long *)0x0) {
          lVar8 = *local_88;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) ==
                  *(long *)Method_System_Runtime_Remoting_Contexts_Context_SetProperty__) {
                puVar10 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_024117b0;
              }
              uVar9 = uVar9 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_01ecb238(local_88,*(long *)
                                           Method_System_Runtime_Remoting_Contexts_Context_SetProperty__
                                 ,0);
LAB_024117b0:
          auStack_190[1] = uVar15;
          plVar14 = (long *)(*(code *)*puVar10)(plVar14,puVar10[1]);
          puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar8 = *plVar14;
            uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                  puVar10 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_0241181c;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ecb238(plVar14,*(long *)puVar4,0);
LAB_0241181c:
            uVar15 = (*(code *)*puVar10)(plVar14,puVar10[1]);
            if ((uVar15 & 1) == 0) {
LAB_02411a44:
              uVar15 = auStack_190[1];
              if (plVar14 == (long *)0x0) goto LAB_02411ab4;
              lVar8 = *plVar14;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 == 0) goto LAB_02411a88;
              piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              goto LAB_02411a70;
            }
            lVar8 = *plVar14;
            uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) ==
                    *(long *)
                     Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__
                   ) {
                  puVar10 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_02411880;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)
                      FUN_01ecb238(plVar14,*(long *)
                                            Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__
                                   ,0);
LAB_02411880:
            puVar11 = (ulong *)(*(code *)*puVar10)(plVar14,puVar10[1]);
            plVar19 = *(long **)(param_3 + 0x38);
            ppppuVar1 = (undefined8 ****)local_80;
            if (-1 < *(int *)(*plVar19 + 0x28)) {
              ppppuVar1 = &local_80;
            }
            memcpy(__dest,ppppuVar1,(ulong)uVar2);
            local_110 = __dest;
            if (-1 < *(int *)(*plVar19 + 0x28)) {
              local_110 = (ulong *)*__dest;
            }
            puVar10 = (undefined8 *)plVar19[3];
            ppuStack_108 = &local_148;
            local_148 = puVar11;
            (*(code *)puVar10[2])(*puVar10,puVar10,0,&local_110,local_74);
            if (local_74[0] == '\0') goto LAB_02411a44;
            uVar9 = *puVar6;
            lVar8 = *(long *)puVar5;
            uVar15 = (ulong)*(ushort *)(uVar9 + 0x12e);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(uVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar8) {
                  puVar10 = (undefined8 *)(uVar9 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_0241194c;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ecb238(puVar6,lVar8,0);
LAB_0241194c:
            lVar8 = (*(code *)*puVar10)(puVar6,(ulong)puVar11 & 0xffffffff,puVar10[1]);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_03e1f400(&local_110,lVar8,(ulong)puVar11 >> 0x20,0);
            uStack_b8 = uStack_f8;
            local_c0 = uStack_100;
            local_a0 = local_e0;
            local_d0 = local_98;
            uStack_c8 = (ulong **)CONCAT44((int)((ulong)ppuStack_108 >> 0x20),local_90);
            uStack_a8 = uStack_e8;
            local_b0 = local_f0;
            uVar9 = *puVar6;
            lVar8 = *(long *)puVar5;
            uVar15 = (ulong)*(ushort *)(uVar9 + 0x12e);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(uVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar8) {
                  puVar10 = (undefined8 *)(uVar9 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_024119e8;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ecb238(puVar6,lVar8,0);
LAB_024119e8:
            lVar8 = (*(code *)*puVar10)(puVar6,(ulong)puVar11 & 0xffffffff,puVar10[1]);
            ppuStack_108 = uStack_c8;
            local_110 = local_d0;
            uStack_f8 = uStack_b8;
            uStack_100 = local_c0;
            uStack_e8 = uStack_a8;
            local_f0 = local_b0;
            local_e0 = local_a0;
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            ppuStack_178 = uStack_c8;
            local_180 = local_d0;
            uStack_168 = uStack_b8;
            uStack_170 = local_c0;
            uStack_158 = uStack_a8;
            local_160 = local_b0;
            local_150 = local_a0;
            FUN_03e1f16c(lVar8,(ulong)puVar11 >> 0x20,&local_180,1,0);
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar16 = piVar16 + 4;
    if (uVar9 == 0) break;
LAB_02411a70:
    if (*(long *)(piVar16 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_02411aa4;
    }
  }
LAB_02411a88:
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar14,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_02411aa4:
  (*(code *)*puVar10)(plVar14,puVar10[1]);
LAB_02411ab4:
  if (*(long *)(uVar15 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


