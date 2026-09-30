/*
FUNCTION_NAME: FUN_0664bde4
ENTRY_POINT: 0664bde4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_5;frame_or_lifecycle_behavior
*/


void FUN_0664bde4(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 local_1e0;
  long *plStack_1d8;
  ulong local_1d0;
  undefined8 local_1c0;
  long *plStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  long *plStack_198;
  long *local_190;
  undefined1 local_188;
  undefined1 local_187;
  undefined2 uStack_186;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined8 local_170;
  uint uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  long *local_158;
  undefined8 local_150;
  long local_148;
  undefined8 local_140;
  long *plStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long *plStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  long *plStack_d8;
  undefined8 local_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b0;
  long *plStack_a8;
  undefined4 local_a0;
  undefined8 local_90;
  long *plStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_073a0bdb & 1) == 0) {
    FUN_02fe925c(System_Func<bool>_TypeInfo);
    FUN_02fe925c(UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3>>_TypeInfo);
    FUN_02fe925c(ParadoxNotion_EventData<int>_TypeInfo);
    FUN_02fe925c(UnityEngine_EventSystems_ExecuteEvents_EventFunction<IPointerExitHandler>_TypeInfo)
    ;
    FUN_02fe925c(UnityEngine_EventSystems_ExecuteEvents_EventFunction<IPointerMoveHandler>_TypeInfo)
    ;
    FUN_02fe925c(ParadoxNotion_EventData<object>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f8a028);
    FUN_02fe925c(UnityEngine_EventSystems_ExecuteEvents_EventFunction<IScrollHandler>_TypeInfo);
    FUN_02fe925c(UnityEngine_EventSystems_ExecuteEvents_EventFunction<ISelectHandler>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f8a030);
    FUN_02fe925c(PTR_DAT_06f8a038);
    FUN_02fe925c(UnityEngine_EventSystems_ExecuteEvents_EventFunction<ISubmitHandler>_TypeInfo);
    FUN_02fe925c(UnityEngine_UIElements_EventBase<MouseOutEvent>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6e778);
    FUN_02fe925c(System_Func<ClickEvent>_TypeInfo);
    FUN_02fe925c(System_Func<CloningContext>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f8a040);
    FUN_02fe925c(
                UnityEngine_EventSystems_ExecuteEvents_EventFunction<IUpdateSelectedHandler>_TypeInfo
                );
    FUN_02fe925c(PTR_DAT_06f6e770);
    FUN_02fe925c(PTR_DAT_06f72660);
    FUN_02fe925c(System_Func<Color>_TypeInfo);
    FUN_02fe925c(System_Func<ContextClickEvent>_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6e768);
    FUN_02fe925c(System_Func<ContextualMenuPopulateEvent>_TypeInfo);
    FUN_02fe925c(UnityEngine_UIElements_EventBase<FocusEvent>_TypeInfo);
    FUN_02fe925c(UnityEngine_UIElements_EventCallback<KeyDownEvent>_TypeInfo);
    DAT_073a0bdb = 1;
  }
  puVar4 = UnityEngine_UIElements_EventBase<FocusEvent>_TypeInfo;
  local_150 = 0;
  local_148 = 0;
  local_180 = 0;
  uStack_17c = 0;
  local_1c0 = 0;
  plStack_1b8 = (long *)0x0;
  local_1b0 = 0;
  local_1e0 = 0;
  plStack_1d8 = (long *)0x0;
  local_1d0 = 0;
  local_b0 = 0;
  plStack_a8 = (long *)0x0;
  uStack_168 = 0;
  uStack_164 = 0;
  local_170 = 0;
  local_158 = (long *)0x0;
  uStack_160 = 0;
  uStack_15c = 0;
  plStack_198 = (long *)0x0;
  local_1a0 = 0;
  local_188 = 0;
  local_187 = 0;
  uStack_186 = 0;
  uStack_184 = 0;
  local_190 = (long *)0x0;
  local_a0 = 0;
  if (*(char *)(param_1 + 0x50) == '\0') {
    if (*(int *)(*(long *)UnityEngine_UIElements_EventBase<FocusEvent>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    if (DAT_073a0c5a == '\0') {
      FUN_02fe925c(UnityEngine_UIElements_EventBase<FocusEvent>_TypeInfo);
      DAT_073a0c5a = '\x01';
    }
    lVar10 = *(long *)puVar4;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar10 = *(long *)puVar4;
    }
    if (*(char *)(*(long *)(lVar10 + 0xb8) + 0x10) != '\0') {
      if (*(long *)(param_1 + 0xb0) != 0) {
        uVar11 = FUN_052be160(*(long *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xa0),&local_148,
                              *(undefined8 *)
                               UnityEngine_UIElements_EventCallback<ChangeEvent<Vector3>>_TypeInfo);
        if ((uVar11 & 1) == 0) {
          lVar10 = *(long *)puVar4;
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
            lVar10 = *(long *)puVar4;
          }
          lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x28);
          if (lVar10 != 0) {
            (**(code **)(lVar10 + 0x18))
                      (*(undefined8 *)(lVar10 + 0x40),param_1,*(undefined8 *)(param_1 + 0xa0),
                       *(undefined8 *)(lVar10 + 0x28));
          }
          lVar10 = thunk_FUN_0301080c(*(undefined8 *)
                                       System_Func<ContextualMenuPopulateEvent>_TypeInfo);
          FUN_06641d48();
          local_148 = lVar10;
          if (*(long *)(param_1 + 0xb0) == 0) goto LAB_0664cce0;
          FUN_052bc62c(*(long *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0xa0),lVar10,
                       *(undefined8 *)System_Func<bool>_TypeInfo);
        }
        if (local_148 != 0) {
          FUN_06641ba0();
          puVar5 = PTR_DAT_06f72660;
          puVar4 = PTR_DAT_06f6e768;
          lVar10 = *(long *)(param_1 + 0x78);
          uVar18 = 0;
          do {
            if (lVar10 == 0) goto LAB_0664cce0;
            iVar19 = 0;
            while( true ) {
              puVar7 = UnityEngine_EventSystems_ExecuteEvents_EventFunction<ISelectHandler>_TypeInfo
              ;
              puVar6 = PTR_DAT_06f8a030;
              if (*(uint *)(lVar10 + 0x18) <= uVar18) goto LAB_0664ccf0;
              lVar12 = *(long *)(lVar10 + (long)(int)uVar18 * 8 + 0x20);
              if (lVar12 == 0) goto LAB_0664cce0;
              if (*(int *)(lVar12 + 0x18) <= iVar19) break;
              puVar13 = (undefined8 *)
                        FUN_054018e4(lVar12,iVar19,
                                     *(undefined8 *)
                                      UnityEngine_EventSystems_ExecuteEvents_EventFunction<IPointerExitHandler>_TypeInfo
                                    );
              uStack_168 = 0;
              uStack_164 = 0;
              local_170 = 0;
              local_158 = (long *)0x0;
              uStack_160 = 0;
              uStack_15c = 0;
              local_150 = 0;
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_0664cce0;
              local_170 = FUN_0664cf94(*(long *)(param_1 + 0x10),uVar18,iVar19);
              thunk_FUN_03048534(&local_170,local_170);
              if (*(long *)(param_1 + 0x10) == 0) goto LAB_0664cce0;
              uVar8 = FUN_0664d040(*(long *)(param_1 + 0x10),uVar18,iVar19);
              uStack_168 = CONCAT31(uStack_168._1_3_,uVar8) & 0xffffff01;
              uStack_164 = 0xffffffff;
              uStack_160 = 0xffffffff;
              uVar21 = puVar13[1];
              plVar14 = (long *)thunk_FUN_0301080c(*(undefined8 *)puVar4);
              FUN_043b4d00(plVar14,uVar21,*(undefined8 *)puVar5);
              local_158 = plVar14;
              thunk_FUN_03048534(&local_158,plVar14);
              uVar20 = *puVar13;
              uVar21 = thunk_FUN_0301080c(*(undefined8 *)puVar4);
              FUN_043b4d00(uVar21,uVar20,*(undefined8 *)puVar5);
              local_150 = uVar21;
              uVar21 = thunk_FUN_03048534(&local_150,uVar21);
              if ((uStack_168 & 1) != 0) {
                uVar21 = FUN_0664bc10(uVar21,&local_170,local_158);
                FUN_0664bc10(uVar21,&local_170,local_150);
              }
              if ((local_148 == 0) || (lVar10 = *(long *)(local_148 + 0x18), lVar10 == 0))
              goto LAB_0664cce0;
              if (*(uint *)(lVar10 + 0x18) <= uVar18) goto LAB_0664ccf0;
              plStack_88 = (long *)CONCAT44(uStack_164,uStack_168);
              lVar10 = *(long *)(lVar10 + (long)(int)uVar18 * 8 + 0x20);
              local_90 = local_170;
              uStack_78 = SUB84(local_158,0);
              uStack_74 = (undefined4)((ulong)local_158 >> 0x20);
              local_80 = uStack_160;
              uStack_7c = uStack_15c;
              local_70 = (undefined4)local_150;
              uStack_6c = (undefined4)((ulong)local_150 >> 0x20);
              if (lVar10 == 0) goto LAB_0664cce0;
              plStack_f8 = local_158;
              local_100 = CONCAT44(uStack_15c,uStack_160);
              local_f0 = local_150;
              local_110 = local_170;
              lVar12 = *(long *)(lVar10 + 0x10);
              lVar17 = *(long *)System_Func<ClickEvent>_TypeInfo;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              uStack_108 = plStack_88;
              if (lVar12 == 0) goto LAB_0664cce0;
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                lVar12 = lVar12 + (long)(int)uVar1 * 0x28;
                *(undefined8 *)(lVar12 + 0x40) = local_150;
                *(long **)(lVar12 + 0x28) = plStack_88;
                *(undefined8 *)(lVar12 + 0x20) = local_170;
                *(long **)(lVar12 + 0x38) = local_158;
                *(undefined8 *)(lVar12 + 0x30) = local_100;
                thunk_FUN_03048534(lVar12 + 0x20,0);
              }
              else {
                local_e0 = local_170;
                plStack_d8 = plStack_88;
                local_d0 = local_100;
                plStack_c8 = plStack_f8;
                uStack_c0 = local_f0;
                FUN_045e2850(lVar10,&local_e0,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              iVar19 = iVar19 + 1;
              lVar10 = *(long *)(param_1 + 0x78);
              if (lVar10 == 0) goto LAB_0664cce0;
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 != 2);
          lVar10 = *(long *)(param_1 + 0x80);
          if (lVar10 != 0) {
            iVar19 = 0;
            while( true ) {
              if (*(int *)(lVar10 + 0x18) <= iVar19) goto LAB_0664bfb0;
              plVar14 = (long *)FUN_05400ec0(lVar10,iVar19,
                                             *(undefined8 *)ParadoxNotion_EventData<int>_TypeInfo);
              plStack_198 = (long *)0x0;
              local_1a0 = 0;
              local_188 = 0;
              local_187 = 0;
              uStack_186 = 0;
              uStack_184 = 0;
              local_190 = (long *)0x0;
              local_180 = 0;
              uStack_17c = 0;
              if (*plVar14 == 0) break;
              local_1a0 = *(undefined8 *)(*plVar14 + 0x10);
              thunk_FUN_03048534(&local_1a0);
              puVar4 = UnityEngine_UIElements_EventBase<MouseOutEvent>_TypeInfo;
              local_188 = *(undefined1 *)((long)plVar14 + 0x1c);
              local_187 = (undefined1)plVar14[8];
              if (*plVar14 == 0) break;
              uStack_17c = CONCAT31(uStack_17c._1_3_,*(undefined1 *)(*plVar14 + 0x48));
              plStack_198 = (long *)FUN_02fe9340(*(undefined8 *)
                                                  UnityEngine_UIElements_EventBase<MouseOutEvent>_TypeInfo
                                                 ,2);
              thunk_FUN_03048534((ulong)&local_1a0 | 8,plStack_198);
              local_190 = (long *)FUN_02fe9340(*(undefined8 *)puVar4,2);
              thunk_FUN_03048534(&local_190,local_190);
              uVar18 = 0;
              uStack_184 = (undefined4)plVar14[4];
              local_180 = (undefined4)((ulong)plVar14[4] >> 0x20);
              do {
                plVar3 = plStack_198;
                lVar10 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f6e768);
                FUN_043b4bd8(lVar10,*(undefined8 *)PTR_DAT_06f6e770);
                if (plVar3 == (long *)0x0) goto LAB_0664cce0;
                if ((lVar10 != 0) &&
                   (lVar12 = thunk_FUN_03010710(lVar10,*(undefined8 *)(*plVar3 + 0x40)), lVar12 == 0
                   )) {
LAB_0664ccf4:
                  uVar21 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                                     ();
                    /* WARNING: Subroutine does not return */
                  FUN_02fe93c0(uVar21,0);
                }
                if (*(uint *)(plVar3 + 3) <= uVar18) {
LAB_0664ccf0:
                    /* WARNING: Subroutine does not return */
                  FUN_02fe94f0();
                }
                lVar12 = (long)(int)uVar18;
                plVar3[lVar12 + 4] = lVar10;
                thunk_FUN_03048534(plVar3 + lVar12 + 4,lVar10);
                plVar3 = local_190;
                lVar10 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f6e768);
                FUN_043b4bd8(lVar10,*(undefined8 *)PTR_DAT_06f6e770);
                if (plVar3 == (long *)0x0) goto LAB_0664cce0;
                if ((lVar10 != 0) &&
                   (lVar17 = thunk_FUN_03010710(lVar10,*(undefined8 *)(*plVar3 + 0x40)), lVar17 == 0
                   )) goto LAB_0664ccf4;
                if (*(uint *)(plVar3 + 3) <= uVar18) goto LAB_0664ccf0;
                plVar3[lVar12 + 4] = lVar10;
                thunk_FUN_03048534(plVar3 + lVar12 + 4,lVar10);
                if ((*plVar14 == 0) || (lVar10 = *(long *)(*plVar14 + 0x50), lVar10 == 0))
                goto LAB_0664cce0;
                if (*(uint *)(lVar10 + 0x18) <= uVar18) goto LAB_0664ccf0;
                lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0664cce0;
                FUN_044728cc(&local_90,lVar10,
                             *(undefined8 *)
                              UnityEngine_EventSystems_ExecuteEvents_EventFunction<IUpdateSelectedHandler>_TypeInfo
                            );
                local_1b0 = CONCAT44(uStack_7c,local_80);
                plStack_1b8 = plStack_88;
                local_1c0 = local_90;
                while (uVar11 = System_Collections_Generic_ArraySortHelper<GlyphRect>___cctor
                                          (&local_1c0,*(undefined8 *)puVar7), uVar21 = local_1b0,
                      (uVar11 & 1) != 0) {
                  if (plStack_198 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94e8();
                  }
                  if (*(uint *)(plStack_198 + 3) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94f0();
                  }
                  lVar10 = plStack_198[lVar12 + 4];
                  if (*(int *)(*(long *)UnityEngine_UIElements_EventCallback<KeyDownEvent>_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_02fdcff0();
                  }
                  uVar9 = FUN_066468b0(uVar21);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94e8();
                  }
                  lVar17 = *(long *)(lVar10 + 0x10);
                  lVar16 = *(long *)PTR_DAT_06f6e778;
                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94e8();
                  }
                  uVar1 = *(uint *)(lVar10 + 0x18);
                  if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar17 + (long)(int)uVar1 * 4 + 0x20) = uVar9;
                  }
                  else {
                    FUN_043b542c(lVar10,uVar9,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                FUN_05511b18(&local_1c0,
                             *(undefined8 *)
                              UnityEngine_EventSystems_ExecuteEvents_EventFunction<IScrollHandler>_TypeInfo
                            );
                if ((*plVar14 == 0) || (lVar10 = *(long *)(*plVar14 + 0x58), lVar10 == 0))
                goto LAB_0664cce0;
                if (*(uint *)(lVar10 + 0x18) <= uVar18) goto LAB_0664ccf0;
                lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0664cce0;
                FUN_044728cc(&local_90,lVar10,
                             *(undefined8 *)
                              UnityEngine_EventSystems_ExecuteEvents_EventFunction<IUpdateSelectedHandler>_TypeInfo
                            );
                local_1b0 = CONCAT44(uStack_7c,local_80);
                plStack_1b8 = plStack_88;
                local_1c0 = local_90;
                while (uVar11 = System_Collections_Generic_ArraySortHelper<GlyphRect>___cctor
                                          (&local_1c0,*(undefined8 *)puVar7), uVar21 = local_1b0,
                      (uVar11 & 1) != 0) {
                  if (local_190 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94e8();
                  }
                  if (*(uint *)(local_190 + 3) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94f0();
                  }
                  lVar10 = local_190[lVar12 + 4];
                  if (*(int *)(*(long *)UnityEngine_UIElements_EventCallback<KeyDownEvent>_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_02fdcff0();
                  }
                  uVar9 = FUN_066468b0(uVar21);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94e8();
                  }
                  lVar17 = *(long *)(lVar10 + 0x10);
                  lVar16 = *(long *)PTR_DAT_06f6e778;
                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94e8();
                  }
                  uVar1 = *(uint *)(lVar10 + 0x18);
                  if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                    *(undefined4 *)(lVar17 + (long)(int)uVar1 * 4 + 0x20) = uVar9;
                  }
                  else {
                    FUN_043b542c(lVar10,uVar9,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
                FUN_05511b18(&local_1c0,
                             *(undefined8 *)
                              UnityEngine_EventSystems_ExecuteEvents_EventFunction<IScrollHandler>_TypeInfo
                            );
                lVar10 = plVar14[1];
                if (lVar10 == 0) goto LAB_0664cce0;
                if (*(uint *)(lVar10 + 0x18) <= uVar18) goto LAB_0664ccf0;
                lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0664cce0;
                FUN_043b5e04(&local_90,lVar10,*(undefined8 *)PTR_DAT_06f8a040);
                local_1d0 = CONCAT44(uStack_7c,local_80);
                plStack_1d8 = plStack_88;
                local_1e0 = local_90;
                while (uVar15 = FUN_054f5df0(&local_1e0,*(undefined8 *)puVar6), uVar11 = local_1d0,
                      (uVar15 & 1) != 0) {
                  if (local_148 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94e8();
                  }
                  lVar10 = *(long *)(local_148 + 0x18);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94e8();
                  }
                  if (*(uint *)(lVar10 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94f0();
                  }
                  lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94e8();
                  }
                  FUN_045e2490(&local_90,lVar10,local_1d0 & 0xffffffff,
                               *(undefined8 *)System_Func<Color>_TypeInfo);
                  plVar3 = (long *)CONCAT44(uStack_74,uStack_78);
                  uVar21 = CONCAT44(uStack_7c,local_80);
                  if (((ulong)plStack_88 & 1) == 0) {
                    if (local_148 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02fe94e8();
                    }
                    lVar10 = *(long *)(local_148 + 0x18);
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02fe94e8();
                    }
                    if (*(uint *)(lVar10 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                      FUN_02fe94f0();
                    }
                    lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
                    local_140._0_3_ = (undefined3)((ulong)plStack_88 >> 8);
                    local_80 = local_70;
                    uStack_7c = uStack_6c;
                    plStack_88 = plVar3;
                    if (lVar10 == 0) {
                      local_90 = uVar21;
                    /* WARNING: Subroutine does not return */
                      FUN_02fe94e8();
                    }
                    local_110 = local_90;
                    uStack_108 = (long *)CONCAT71(uStack_108._1_7_,plStack_88._0_1_);
                    local_f0 = CONCAT44(uStack_6c,local_70);
                    uStack_108 = (long *)CONCAT44(iVar19,(undefined4)uStack_108);
                    local_100 = uVar21;
                    plStack_f8 = plVar3;
                    local_90 = uVar21;
                    FUN_045e24f8(lVar10,uVar11 & 0xffffffff,&local_110,
                                 *(undefined8 *)System_Func<ContextClickEvent>_TypeInfo);
                  }
                }
                FUN_054f5dec(&local_1e0,*(undefined8 *)PTR_DAT_06f8a028);
                lVar10 = plVar14[2];
                if (lVar10 == 0) goto LAB_0664cce0;
                if (*(uint *)(lVar10 + 0x18) <= uVar18) goto LAB_0664ccf0;
                lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0664cce0;
                FUN_043b5e04(&local_90,lVar10,*(undefined8 *)PTR_DAT_06f8a040);
                local_1d0 = CONCAT44(uStack_7c,local_80);
                plStack_1d8 = plStack_88;
                local_1e0 = local_90;
                while (uVar15 = FUN_054f5df0(&local_1e0,*(undefined8 *)puVar6), uVar11 = local_1d0,
                      (uVar15 & 1) != 0) {
                  if (local_148 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94e8();
                  }
                  lVar10 = *(long *)(local_148 + 0x18);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94e8();
                  }
                  if (*(uint *)(lVar10 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94f0();
                  }
                  lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02fe94e8();
                  }
                  FUN_045e2490(&local_90,lVar10,local_1d0 & 0xffffffff,
                               *(undefined8 *)System_Func<Color>_TypeInfo);
                  plStack_a8 = (long *)CONCAT44(local_70,uStack_74);
                  local_b0 = CONCAT44(uStack_78,uStack_7c);
                  local_a0 = uStack_6c;
                  if (((ulong)plStack_88 & 1) == 0) {
                    if (local_148 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02fe94e8();
                    }
                    lVar10 = *(long *)(local_148 + 0x18);
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02fe94e8();
                    }
                    if (*(uint *)(lVar10 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                      FUN_02fe94f0();
                    }
                    lVar10 = *(long *)(lVar10 + lVar12 * 8 + 0x20);
                    local_140._0_7_ = (undefined7)((ulong)plStack_88 >> 8);
                    local_80 = uStack_6c;
                    plStack_88 = plStack_a8;
                    if (lVar10 == 0) {
                      local_90 = local_b0;
                    /* WARNING: Subroutine does not return */
                      FUN_02fe94e8();
                    }
                    local_e0 = local_90;
                    plStack_d8 = (long *)CONCAT71(plStack_d8._1_7_,plStack_88._0_1_);
                    local_d0 = CONCAT44(local_d0._4_4_,iVar19);
                    local_90 = local_b0;
                    FUN_045e24f8(lVar10,uVar11 & 0xffffffff,&local_e0,
                                 *(undefined8 *)System_Func<ContextClickEvent>_TypeInfo);
                  }
                }
                FUN_054f5dec(&local_1e0,*(undefined8 *)PTR_DAT_06f8a028);
                uVar18 = uVar18 + 1;
              } while (uVar18 != 2);
              if (local_148 == 0) break;
              lVar10 = *(long *)(local_148 + 0x10);
              uVar9 = CONCAT22(uStack_186,CONCAT11(local_187,local_188));
              uVar21 = CONCAT44(uStack_184,uVar9);
              uVar20 = CONCAT44(uStack_17c,local_180);
              if (lVar10 == 0) break;
              plStack_138 = plStack_198;
              local_140 = local_1a0;
              plStack_130 = local_190;
              lVar12 = *(long *)(lVar10 + 0x10);
              lVar17 = *(long *)System_Func<CloningContext>_TypeInfo;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              uStack_128 = uVar21;
              local_120 = uVar20;
              if (lVar12 == 0) break;
              uVar18 = *(uint *)(lVar10 + 0x18);
              if (uVar18 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar18 + 1;
                lVar12 = lVar12 + (long)(int)uVar18 * 0x28;
                *(undefined8 *)(lVar12 + 0x40) = uVar20;
                *(long **)(lVar12 + 0x28) = plStack_198;
                *(undefined8 *)(lVar12 + 0x20) = local_1a0;
                *(undefined8 *)(lVar12 + 0x38) = uVar21;
                *(long **)(lVar12 + 0x30) = local_190;
                thunk_FUN_03048534(lVar12 + 0x20,0);
              }
              else {
                plStack_88 = plStack_198;
                local_90 = local_1a0;
                uStack_74 = uStack_184;
                local_80 = SUB84(local_190,0);
                uStack_7c = (undefined4)((ulong)local_190 >> 0x20);
                local_70 = local_180;
                uStack_6c = uStack_17c;
                uStack_78 = uVar9;
                Unity_Collections_NativeArray<EntityReferenceChange>__Dispose
                          (lVar10,&local_90,
                           *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              iVar19 = iVar19 + 1;
              lVar10 = *(long *)(param_1 + 0x80);
              if (lVar10 == 0) break;
            }
          }
        }
      }
LAB_0664cce0:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    FUN_0664cdd8(param_1);
  }
LAB_0664bfb0:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


