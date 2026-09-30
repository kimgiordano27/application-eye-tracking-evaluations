/*
FUNCTION_NAME: FUN_06a0c7a0
ENTRY_POINT: 06a0c7a0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06a0ccbc) */
/* WARNING: Removing unreachable block (ram,0x06a0ce40) */

void FUN_06a0c7a0(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  char cVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 local_180;
  undefined7 uStack_17f;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined7 uStack_a8;
  undefined1 local_a1;
  undefined7 uStack_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined7 uStack_70;
  long local_68;
  
  puVar7 = PTR_DAT_072794f0;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((DAT_076e28e5 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_ReadyPlayerMe_Core_OperationExecutor<AvatarContext>_add_ProgressChanged__
                      );
    thunk_FUN_032e1da0(Method_ReadyPlayerMe_Core_OperationExecutor<AvatarContext>_get_IsCancelled__)
    ;
    thunk_FUN_032e1da0(Method_Unity_AppUI_Core_OptionalEnum<Dir>_get_IsSet__);
    thunk_FUN_032e1da0(PTR_DAT_07279558);
    thunk_FUN_032e1da0(PTR_DAT_0727f6e0);
    thunk_FUN_032e1da0(PTR_DAT_0727e500);
    thunk_FUN_032e1da0(PTR_DAT_0727e4f8);
    thunk_FUN_032e1da0(Method_Unity_AppUI_Core_OptionalEnum<Dir>_get_Value__);
    thunk_FUN_032e1da0(Method_Unity_AppUI_Core_OptionalEnum<Dir>_get_none__);
    thunk_FUN_032e1da0(Method_Unity_AppUI_Core_OptionalEnum<Dir>_op_Implicit__);
    thunk_FUN_032e1da0(
                      Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
                      );
    thunk_FUN_032e1da0(PTR_DAT_0727fe58);
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Pose>__ctor__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072838d0);
    thunk_FUN_032e1da0(PTR_DAT_07279560);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRSceneManager_Metrics>_AwaitOnCompleted<OVRTask_Awaiter<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>,_OVRSceneManager_<ProcessBatch>d__44>__
                      );
    thunk_FUN_032e1da0(Method_Unity_AppUI_Core_OptionalEnum<PopoverPlacement>_get_IsSet__);
    thunk_FUN_032e1da0(Method_Unity_AppUI_Core_OptionalEnum<PopoverPlacement>_get_Value__);
    thunk_FUN_032e1da0(Method_Unity_AppUI_Core_OptionalEnum<PopoverPlacement>_get_none__);
    thunk_FUN_032e1da0(PTR_DAT_072798c8);
    DAT_076e28e5 = 1;
  }
  uStack_70 = 0;
  local_e0 = 0;
  local_138 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_71 = 0;
  uStack_80 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_a1 = 0;
  uStack_b0 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uVar18 = *(undefined8 *)(param_1 + 0x108);
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar11 = FUN_06bece64(uVar18,0,0);
  auVar6._8_8_ = local_d0._8_8_;
  auVar6._0_8_ = local_d0._0_8_;
  auVar5._8_8_ = local_d0._8_8_;
  auVar5._0_8_ = local_d0._0_8_;
  if ((uVar11 & 1) == 0) {
    lVar12 = *(long *)(param_1 + 0x108);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    local_d0 = auVar5;
    if ((*(long *)(lVar12 + 0x20) != 0) &&
       (local_d0 = auVar6, *(char *)(*(long *)(lVar12 + 0x20) + 0x10) != '\0')) {
      local_d0 = UnityEngine_XR_Interaction_Toolkit_Filtering_PokeThresholdData___ctor(lVar12,2);
      if ((local_d0._0_8_ == 0) || (local_d0._8_4_ < 1)) {
        FUN_044fde04(local_d0,*(undefined8 *)Method_Unity_AppUI_Core_OptionalEnum<Dir>_get_Value__);
      }
      else {
        lVar12 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727e4f8);
        System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                  (lVar12,*(undefined8 *)PTR_DAT_0727e500);
        FUN_044fe138(&local_1a0,local_d0,
                     *(undefined8 *)Method_Unity_AppUI_Core_OptionalEnum<Dir>_get_none__);
        puVar9 = Method_ReadyPlayerMe_Core_OperationExecutor<AvatarContext>_get_IsCancelled__;
        puVar8 = PTR_DAT_072798c8;
        puVar7 = PTR_DAT_07279558;
        uStack_108 = CONCAT71(uStack_197,uStack_198);
        local_110 = CONCAT44(uStack_19c,local_1a0);
        uStack_f8 = CONCAT71(uStack_187,uStack_188);
        local_f0 = CONCAT71(uStack_17f,local_180);
        uStack_e8 = uStack_178;
        local_e0 = local_170;
        local_100._0_4_ = (int)CONCAT71(uStack_18f,uStack_190);
        iVar19 = (int)local_100 + 1;
        lVar17 = *(long *)
                  Method_ReadyPlayerMe_Core_OperationExecutor<AvatarContext>_get_IsCancelled__;
        local_100._4_4_ = (undefined4)((uint7)uStack_18f >> 0x18);
        local_100 = CONCAT44(local_100._4_4_,iVar19);
        if (iVar19 < (int)uStack_108) {
          do {
            lVar14 = local_110;
            if ((*(byte *)(*(long *)(lVar17 + 0x20) + 0x135) & 1) == 0) {
              FUN_032934b8();
            }
            puVar20 = (undefined8 *)(lVar14 + (long)iVar19 * 0x20);
            uStack_128 = puVar20[1];
            local_130 = *puVar20;
            uStack_118 = puVar20[3];
            local_120 = puVar20[2];
            uStack_198 = (undefined1)uStack_128;
            uStack_197 = (undefined7)((ulong)uStack_128 >> 8);
            local_1a0 = (undefined4)local_130;
            uStack_19c = (undefined4)((ulong)local_130 >> 0x20);
            uStack_188 = (undefined1)uStack_118;
            uStack_187 = (undefined7)((ulong)uStack_118 >> 8);
            uStack_190 = (undefined1)local_120;
            uStack_18f = (undefined7)((ulong)local_120 >> 8);
            uStack_f8 = local_130;
            local_f0 = uStack_128;
            uStack_e8 = local_120;
            local_e0 = uStack_118;
            plVar13 = (long *)FUN_032d5d3c(*(undefined8 *)PTR_DAT_07279560,4);
            local_1a0 = FUN_06a2fe2c(&local_130,0);
            lVar17 = thunk_FUN_032a52d0(*(undefined8 *)puVar7,&local_1a0);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            if (lVar17 != 0) {
              lVar14 = thunk_FUN_032a55a4(lVar17,*(undefined8 *)(*plVar13 + 0x40));
              if (lVar14 == 0) {
                uVar18 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
                FUN_032d5dbc(uVar18,0);
              }
            }
            if ((int)plVar13[3] == 0) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            plVar13[4] = lVar17;
            thunk_FUN_0333a630(plVar13 + 4,lVar17);
            local_1a4 = FUN_06a2fe34(&local_130,0);
            lVar17 = thunk_FUN_032a52d0(*(undefined8 *)puVar7,&local_1a4);
            if (lVar17 != 0) {
              lVar14 = thunk_FUN_032a55a4(lVar17,*(undefined8 *)(*plVar13 + 0x40));
              if (lVar14 == 0) {
                uVar18 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
                FUN_032d5dbc(uVar18,0);
              }
            }
            if (*(uint *)(plVar13 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            plVar13[5] = lVar17;
            thunk_FUN_0333a630(plVar13 + 5,lVar17);
            local_138 = FUN_06a2fe44(&local_130,0);
            uVar18 = *(undefined8 *)
                      Method_Unity_AppUI_Core_OptionalEnum<PopoverPlacement>_get_Value__;
            if ((local_138 & 0xff) == 0) {
              lVar17 = *(long *)puVar8;
            }
            else {
              local_138 = FUN_06a2fe44(&local_130,0);
              local_1a0 = FUN_046474a8(&local_138,*(undefined8 *)PTR_DAT_072838d0);
              uVar15 = thunk_FUN_032a52d0(*(undefined8 *)puVar7,&local_1a0);
              lVar17 = FUN_057a25c4(*(undefined8 *)
                                     Method_Unity_AppUI_Core_OptionalEnum<PopoverPlacement>_get_IsSet__
                                    ,uVar15,0);
            }
            if (lVar17 != 0) {
              lVar14 = thunk_FUN_032a55a4(lVar17,*(undefined8 *)(*plVar13 + 0x40));
              if (lVar14 == 0) {
                uVar18 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
                FUN_032d5dbc(uVar18,0);
              }
            }
            if (*(uint *)(plVar13 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            plVar13[6] = lVar17;
            thunk_FUN_0333a630(plVar13 + 6,lVar17);
            plVar2 = (long *)Method_Unity_AppUI_Core_OptionalEnum<PopoverPlacement>_get_none__;
            if ((int)uStack_118 != 2) {
              plVar2 = (long *)puVar8;
            }
            lVar17 = *plVar2;
            if (lVar17 != 0) {
              lVar14 = thunk_FUN_032a55a4(lVar17,*(undefined8 *)(*plVar13 + 0x40));
              if (lVar14 == 0) {
                uVar18 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
                FUN_032d5dbc(uVar18,0);
              }
            }
            if (*(uint *)(plVar13 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            plVar13[7] = lVar17;
            thunk_FUN_0333a630(plVar13 + 7,lVar17);
            uVar18 = FUN_057ab6a4(uVar18,plVar13,0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            lVar17 = *(long *)(lVar12 + 0x10);
            lVar14 = *(long *)PTR_DAT_0727f6e0;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            uVar3 = *(uint *)(lVar12 + 0x18);
            if (uVar3 < *(uint *)(lVar17 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar3 + 1;
              *(undefined8 *)(lVar17 + (long)(int)uVar3 * 8 + 0x20) = uVar18;
              thunk_FUN_0333a630();
            }
            else {
              FUN_041e2c78(lVar12,uVar18,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            lVar17 = *(long *)puVar9;
            iVar19 = (int)local_100 + 1;
            local_100 = CONCAT44(local_100._4_4_,iVar19);
          } while (iVar19 < (int)uStack_108);
        }
        local_e0 = 0;
        uStack_e8 = 0;
        local_f0 = 0;
        uStack_f8 = 0;
        FUN_052e7198(&local_110,
                     *(undefined8 *)
                      Method_ReadyPlayerMe_Core_OperationExecutor<AvatarContext>_add_ProgressChanged__
                    );
        if (*(long *)(param_1 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_06c904a0(*(long *)(param_1 + 0xf0),lVar12,0);
        if (*(long *)(param_1 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_06a08820(&local_1a0);
        cVar10 = (char)local_1a0;
        uStack_88 = CONCAT17(uStack_190,uStack_197);
        local_90 = CONCAT17(uStack_198,CONCAT43(uStack_19c,local_1a0._1_3_));
        uStack_80 = CONCAT17(uStack_188,uStack_18f);
        uStack_78 = uStack_187;
        local_71 = local_180;
        uStack_70 = uStack_17f;
        if (0 < (int)local_d0._8_4_) {
          lVar12 = 0;
          uVar11 = 0;
          puVar20 = (undefined8 *)((ulong)&local_c0 | 7);
          do {
            uStack_b8 = uStack_88;
            local_c0 = local_90;
            uStack_a8 = uStack_78;
            uStack_b0 = uStack_80;
            local_a1 = local_71;
            uStack_a0 = uStack_70;
            puVar1 = (undefined8 *)(local_d0._0_8_ + lVar12);
            uStack_158 = puVar1[1];
            local_160 = *puVar1;
            uStack_148 = puVar1[3];
            uStack_150 = puVar1[2];
            if (cVar10 != '\0') {
              uStack_1c8 = puVar20[1];
              local_1d0 = *puVar20;
              uStack_1b8 = puVar20[3];
              uStack_1c0 = puVar20[2];
              local_1f0 = local_160;
              uStack_1e8 = uStack_158;
              uStack_1e0 = uStack_150;
              uStack_1d8 = uStack_148;
              uVar16 = FUN_06a30644(&local_1d0,&local_1f0,0);
              if ((uVar16 & 1) != 0) {
                if (*(long *)(param_1 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                FUN_06c8fd28(*(long *)(param_1 + 0xf0),uVar11 & 0xffffffff,0);
              }
            }
            uVar11 = uVar11 + 1;
            lVar12 = lVar12 + 0x20;
          } while ((long)uVar11 < (long)(int)local_d0._8_4_);
        }
        FUN_044fde04(local_d0,*(undefined8 *)Method_Unity_AppUI_Core_OptionalEnum<Dir>_get_Value__);
        *(undefined1 *)(param_1 + 0x171) = 1;
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


