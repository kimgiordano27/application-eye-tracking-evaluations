/*
FUNCTION_NAME: UnityEngine.InputSystem.Touchscreen$$OnStateEvent
ENTRY_POINT: 03247054
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;weak_data_support;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_14;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_InputSystem_Touchscreen__OnStateEvent(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 uVar19;
  char cVar20;
  undefined8 uVar21;
  int *piVar22;
  ulong uVar23;
  uint uVar24;
  float fVar25;
  double dVar26;
  float fVar27;
  undefined8 local_110;
  ulong uStack_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  double dStack_c8;
  undefined8 local_c0;
  int local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  double dStack_88;
  undefined8 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_f8 = param_2;
  if ((DAT_03ef4dc9 & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_LowLevel_InputStateBlock_TypeInfo_03cb6c78);
    FUN_01c5c92c(PTR_Method_UnityEngine_InputSystem_LowLevel_InputState_Change<byte>___03ccedd0);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_LowLevel_InputState_Change<TouchState>___03ccedd8
                );
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_LowLevel_InputUpdate_TypeInfo_03ccb730);
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Count___03ccc168
                );
    FUN_01c5c92c(
                PTR_Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Item___03ccc170
                );
    FUN_01c5c92c(PTR_UnityEngine_InputSystem_Touchscreen_TypeInfo_03ccc150);
    DAT_03ef4dc9 = 1;
  }
  local_80 = 0;
                    /* try { // try from 03247100 to 0334728f has its CatchHandler @ 03247100
                       catch() { ... } // from try @ 03247100 with catch @ 03247100
                       catch() { ... } // from try @ 032473c4 with catch @ 03247100
                       catch() { ... } // from try @ 0324746c with catch @ 03247100
                       catch() { ... } // from try @ 0324747c with catch @ 03247100
                       catch() { ... } // from try @ 032474e8 with catch @ 03247100 */
  local_110 = 0;
  uStack_108 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  dStack_c8 = 0.0;
  local_d0 = 0;
  uStack_98 = 0;
  fStack_a0 = 0.0;
  uStack_9c = 0;
  dStack_88 = 0.0;
  local_90 = 0;
  fStack_a8 = 0.0;
  fStack_a4 = 0.0;
  local_b0 = 0;
  fStack_ac = 0.0;
  uStack_e8 = 0;
  local_f0 = 0;
  iVar6 = UnityEngine_InputSystem_LowLevel_InputEventPtr__get_type(&local_f8,0);
  if (iVar6 != 0x444c5441) {
    lVar10 = UnityEngine_InputSystem_LowLevel_StateEvent__FromUnchecked(local_f8,0);
    if (lVar10 != 0) {
      iVar6 = *(int *)(lVar10 + 0x14);
      iVar7 = UnityEngine_InputSystem_LowLevel_TouchState__get_Format(0);
      if (iVar6 != iVar7) {
        UnityEngine_InputSystem_LowLevel_InputState__Change(param_1,local_f8,0,0);
        goto LAB_03247214;
      }
      lVar11 = UnityEngine_InputSystem_InputControl__get_currentStatePtr(param_1,0);
      puVar3 = 
      PTR_Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Item___03ccc170;
      uStack_108 = *(ulong *)(param_1 + 0x1c8);
      local_110 = *(undefined8 *)(param_1 + 0x1c0);
      lVar12 = UnityEngine_InputSystem_Utilities_ReadOnlyArray<object>__get_Item
                         (&local_110,0,
                          *(undefined8 *)
                           PTR_Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Item___03ccc170
                         );
      if (lVar12 != 0) {
        uVar24 = *(uint *)(lVar12 + 0x14);
        if (*(int *)(*(long *)PTR_UnityEngine_InputSystem_LowLevel_InputStateBlock_TypeInfo_03cb6c78
                    + 0xe4) == 0) {
          thunk_FUN_01cb0d4c(*(long *)
                              PTR_UnityEngine_InputSystem_LowLevel_InputStateBlock_TypeInfo_03cb6c78
                            );
        }
        if (*(long *)(param_1 + 0x1b8) != 0) {
          local_110 = *(undefined8 *)(param_1 + 0x1c0);
          uVar14 = *(ulong *)(param_1 + 0x1c8);
          uVar23 = (ulong)*(uint *)(*(long *)(param_1 + 0x1b8) + 0x14);
          piVar18 = (int *)((ulong)uVar24 + lVar11);
          uStack_108 = uVar14;
          iVar6 = UnityEngine_InputSystem_LowLevel_StateEvent__get_stateSizeInBytes(lVar10,0);
          if (iVar6 == 0x38) {
            puVar13 = (undefined8 *)UnityEngine_InputSystem_LowLevel_StateEvent__get_state(lVar10,0)
            ;
            uStack_98 = puVar13[3];
            dStack_88 = (double)puVar13[5];
            local_90 = puVar13[4];
            local_80 = puVar13[6];
            fStack_a0 = (float)puVar13[2];
            uStack_9c = (undefined4)((ulong)puVar13[2] >> 0x20);
            fStack_a8 = (float)puVar13[1];
            fStack_a4 = (float)((ulong)puVar13[1] >> 0x20);
            local_b0 = (int)*puVar13;
            fStack_ac = (float)((ulong)*puVar13 >> 0x20);
          }
          else {
            local_80 = 0;
            uStack_98 = 0;
            fStack_a0 = 0.0;
            uStack_9c = 0;
            dStack_88 = 0.0;
            local_90 = 0;
            fStack_a8 = 0.0;
            fStack_a4 = 0.0;
            local_b0 = 0;
            fStack_ac = 0.0;
            uVar19 = UnityEngine_InputSystem_LowLevel_StateEvent__get_state(lVar10,0);
            uVar8 = UnityEngine_InputSystem_LowLevel_StateEvent__get_stateSizeInBytes(lVar10,0);
            Unity_Collections_LowLevel_Unsafe_UnsafeUtility__MemCpy(&local_b0,uVar19,uVar8,0);
          }
                    /* try { // try from 03247290 to 033472b7 has its CatchHandler @ 032474b0 */
          local_90._0_2_ = (ushort)(byte)local_90;
          UnityEngine_InputSystem_LowLevel_TouchState__set_isTapPress(&local_b0,0,0);
          UnityEngine_InputSystem_LowLevel_TouchState__set_isTapRelease(&local_b0,0,0);
          bVar5 = (byte)local_90 == '\x01';
          local_90 = CONCAT44(**(undefined4 **)
                                (*(long *)
                                  PTR_UnityEngine_InputSystem_LowLevel_InputUpdate_TypeInfo_03ccb730
                                + 0xb8),(undefined4)local_90);
          uVar24 = (uint)(uVar14 >> 0x20);
          if (bVar5) {
            if (0 < (int)uVar24) {
              uVar9 = 0;
              do {
                uVar14 = UnityEngine_InputSystem_LowLevel_TouchState__get_isNoneEndedOrCanceled
                                   (piVar18,0);
                if ((uVar14 & 1) != 0) {
                    /* try { // try from 03247338 to 0334733b has its CatchHandler @ 032474a0 */
                    /* try { // try from 03247340 to 03347347 has its CatchHandler @ 032474a4 */
                  if (DAT_03ef1437 == '\0') {
                    FUN_01c5c92c(PTR_UnityEngine_Vector2_TypeInfo_03cb6560);
                    DAT_03ef1437 = '\x01';
                  }
                    /* try { // try from 03247358 to 0334736f has its CatchHandler @ 0324748c */
                  fStack_a4 = (float)**(undefined8 **)
                                       (*(long *)PTR_UnityEngine_Vector2_TypeInfo_03cb6560 + 0xb8);
                  fStack_a0 = (float)((ulong)**(undefined8 **)
                                               (*(long *)PTR_UnityEngine_Vector2_TypeInfo_03cb6560 +
                                               0xb8) >> 0x20);
                  dStack_88 = (double)UnityEngine_InputSystem_LowLevel_InputEventPtr__get_time
                                                (&local_f8,0);
                    /* try { // try from 0324737c to 0334738b has its CatchHandler @ 03247488 */
                  local_80 = CONCAT44(fStack_a8,fStack_ac);
                    /* try { // try from 03247390 to 0334739b has its CatchHandler @ 03247480 */
                  UnityEngine_InputSystem_LowLevel_TouchState__set_isPrimaryTouch(&local_b0,0,0);
                  UnityEngine_InputSystem_LowLevel_TouchState__set_isOrphanedPrimaryTouch
                            (&local_b0,0,0);
                    /* try { // try from 032473ac to 033473c3 has its CatchHandler @ 03247484 */
                  UnityEngine_InputSystem_LowLevel_TouchState__set_isTap(&local_b0,0,0);
                  if (piVar18 == (int *)0x0) goto LAB_0324774c;
                    /* try { // try from 032473c4 to 0334745b has its CatchHandler @ 03247100 */
                  local_90._0_2_ = CONCAT11(*(undefined1 *)((long)piVar18 + 0x21),(byte)local_90);
                  uVar14 = UnityEngine_InputSystem_LowLevel_TouchState__get_isNoneEndedOrCanceled
                                     (uVar23 + lVar11,0);
                  if ((uVar14 & 1) != 0) {
                    UnityEngine_InputSystem_LowLevel_TouchState__set_isPrimaryTouch(&local_b0,1,0);
                    UnityEngine_InputSystem_LowLevel_InputState__Change<TouchState>
                              (*(undefined8 *)(param_1 + 0x1b8),&local_b0,0,local_f8,
                               *(undefined8 *)
                                PTR_Method_UnityEngine_InputSystem_LowLevel_InputState_Change<TouchState>___03ccedd8
                              );
                  }
                  uStack_108 = *(ulong *)(param_1 + 0x1c8);
                  local_110 = *(undefined8 *)(param_1 + 0x1c0);
                  uVar19 = *(undefined8 *)puVar3;
                  uVar17 = (ulong)uVar9;
                  goto LAB_032476ac;
                }
                uVar9 = uVar9 + 1;
                piVar18 = piVar18 + 0xe;
                    /* try { // try from 032472f4 to 0334731b has its CatchHandler @ 032474ac */
              } while (uVar24 != uVar9);
            }
          }
          else if (0 < (int)uVar24) {
            uVar17 = 0;
            piVar22 = piVar18;
            do {
              if (piVar22 == (int *)0x0) goto LAB_0324774c;
                    /* try { // try from 03247320 to 03347327 has its CatchHandler @ 0324749c */
              if (*piVar22 == local_b0) {
                uVar9 = UnityEngine_InputSystem_LowLevel_TouchState__get_isPrimaryTouch(piVar22,0);
                UnityEngine_InputSystem_LowLevel_TouchState__set_isPrimaryTouch
                          (&local_b0,uVar9 & 1,0);
                if (fStack_a4 * fStack_a4 + fStack_a0 * fStack_a0 < DAT_00b45dd0) {
                    /* try { // try from 0324745c to 0334745f has its CatchHandler @ 032474a8 */
                  fStack_a4 = fStack_ac - (float)*(undefined8 *)(piVar22 + 1);
                  fStack_a0 = fStack_a8 - (float)((ulong)*(undefined8 *)(piVar22 + 1) >> 0x20);
                    /* try { // try from 03247460 to 03347463 has its CatchHandler @ 03247494 */
                }
                    /* try { // try from 03247464 to 03347467 has its CatchHandler @ 03247498 */
                    /* try { // try from 03247468 to 0334746b has its CatchHandler @ 03247490 */
                local_80 = *(undefined8 *)(piVar22 + 0xc);
                    /* try { // try from 0324746c to 03347477 has its CatchHandler @ 03247100 */
                fStack_a4 = fStack_a4 + (float)*(undefined8 *)(piVar22 + 3);
                fStack_a0 = fStack_a0 + (float)((ulong)*(undefined8 *)(piVar22 + 3) >> 0x20);
                    /* try { // try from 03247478 to 0334747b has its CatchHandler @ 0324747c */
                dStack_88 = *(double *)(piVar22 + 10);
                    /* catch() { ... } // from try @ 03247478 with catch @ 0324747c
                       try { // try from 0324747c to 033474cb has its CatchHandler @ 03247100 */
                    /* catch() { ... } // from try @ 03247390 with catch @ 03247480 */
                    /* catch() { ... } // from try @ 032473ac with catch @ 03247484 */
                    /* catch() { ... } // from try @ 0324737c with catch @ 03247488 */
                uVar14 = UnityEngine_InputSystem_LowLevel_TouchState__get_isNoneEndedOrCanceled
                                   (&local_b0,0);
                    /* catch() { ... } // from try @ 03247358 with catch @ 0324748c */
                if ((uVar14 & 1) == 0) {
LAB_03247514:
                  cVar20 = *(char *)((long)piVar22 + 0x21);
                  bVar5 = true;
                }
                else {
                    /* catch() { ... } // from try @ 03247468 with catch @ 03247490 */
                    /* catch() { ... } // from try @ 03247460 with catch @ 03247494 */
                    /* catch() { ... } // from try @ 03247464 with catch @ 03247498 */
                  dVar26 = (double)UnityEngine_InputSystem_LowLevel_InputEventPtr__get_time
                                             (&local_f8,0);
                  dVar4 = dStack_88;
                  puVar2 = PTR_UnityEngine_InputSystem_Touchscreen_TypeInfo_03ccc150;
                    /* catch() { ... } // from try @ 03247320 with catch @ 0324749c */
                    /* catch() { ... } // from try @ 03247338 with catch @ 032474a0 */
                    /* catch() { ... } // from try @ 03247340 with catch @ 032474a4 */
                    /* catch() { ... } // from try @ 0324745c with catch @ 032474a8 */
                    /* catch() { ... } // from try @ 032472f4 with catch @ 032474ac */
                  lVar10 = *(long *)PTR_UnityEngine_InputSystem_Touchscreen_TypeInfo_03ccc150;
                    /* catch() { ... } // from try @ 03247290 with catch @ 032474b0 */
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_01cb0d4c();
                    lVar10 = *(long *)puVar2;
                  }
                  lVar12 = *(long *)(lVar10 + 0xb8);
                    /* try { // try from 032474cc to 033474cf has its CatchHandler @ 032474dc */
                  if ((double)*(float *)(lVar12 + 0x18) < dVar26 - dVar4) goto LAB_03247514;
                    /* catch() { ... } // from try @ 032474cc with catch @ 032474dc */
                    /* try { // try from 032474e0 to 033474e7 has its CatchHandler @ 032474f0 */
                  fVar25 = fStack_ac - (float)local_80;
                    /* try { // try from 032474e8 to 033474f3 has its CatchHandler @ 03247100 */
                  fVar27 = fStack_a8 - local_80._4_4_;
                    /* catch() { ... } // from try @ 032474e0 with catch @ 032474f0 */
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_01cb0d4c();
                    lVar12 = *(long *)(*(long *)puVar2 + 0xb8);
                  }
                  if (*(float *)(lVar12 + 0x20) < fVar25 * fVar25 + fVar27 * fVar27)
                  goto LAB_03247514;
                  bVar5 = false;
                  cVar20 = *(char *)((long)piVar22 + 0x21) + '\x01';
                }
                local_90._0_2_ = CONCAT11(cVar20,(byte)local_90);
                uVar14 = UnityEngine_InputSystem_LowLevel_TouchState__get_isNoneEndedOrCanceled
                                   (&local_b0,0);
                if ((uVar9 & 1) != 0) {
                  if ((uVar14 & 1) == 0) {
                    piVar18 = &local_b0;
                    goto LAB_03247680;
                  }
                  UnityEngine_InputSystem_LowLevel_TouchState__set_isPrimaryTouch(&local_b0,0,0);
                  uVar14 = uVar17 & 0xffffffff;
                  if ((int)uVar24 < 2) {
                    uVar24 = 1;
                  }
                  uVar23 = (ulong)uVar24;
                  goto LAB_03247550;
                }
                if (((uVar14 & 1) == 0) ||
                   (uVar14 = UnityEngine_InputSystem_LowLevel_TouchState__get_isOrphanedPrimaryTouch
                                       (uVar23 + lVar11,0), (uVar14 & 1) == 0)) goto LAB_03247698;
                uVar14 = uVar17 & 0xffffffff;
                if ((int)uVar24 < 2) {
                  uVar24 = 1;
                }
                uVar15 = (ulong)uVar24;
                goto LAB_032475c4;
              }
              uVar17 = uVar17 + 1;
              piVar22 = piVar22 + 0xe;
            } while (uVar14 >> 0x20 != uVar17);
          }
          goto LAB_03247214;
        }
      }
    }
LAB_0324774c:
    if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    goto LAB_03247760;
  }
  goto LAB_03247214;
LAB_03247550:
  if ((uVar14 == 0) ||
     (uVar15 = UnityEngine_InputSystem_LowLevel_TouchState__get_isInProgress(piVar18,0),
     (uVar15 & 1) == 0)) goto LAB_03247564;
  uStack_e8 = CONCAT44(fStack_a4,fStack_a8);
  local_f0 = CONCAT44(fStack_ac,local_b0);
  local_e0 = CONCAT44(uStack_9c,fStack_a0);
  uStack_d8 = uStack_98;
  dStack_c8 = dStack_88;
  local_d0 = local_90;
  local_c0 = local_80;
  UnityEngine_InputSystem_LowLevel_TouchState__set_phase(&local_f0,2,0);
  UnityEngine_InputSystem_LowLevel_TouchState__set_isOrphanedPrimaryTouch(&local_f0,1,0);
  piVar18 = (int *)&local_f0;
LAB_03247680:
  UnityEngine_InputSystem_LowLevel_InputState__Change<TouchState>
            (*(undefined8 *)(param_1 + 0x1b8),piVar18,0,local_f8,
             *(undefined8 *)
              PTR_Method_UnityEngine_InputSystem_LowLevel_InputState_Change<TouchState>___03ccedd8);
  goto LAB_03247698;
LAB_03247564:
  uVar19 = local_f8;
  uVar23 = uVar23 - 1;
  uVar14 = uVar14 - 1;
  piVar18 = piVar18 + 0xe;
  if (uVar23 == 0) goto code_r0x03247574;
  goto LAB_03247550;
code_r0x03247574:
  uVar21 = *(undefined8 *)(param_1 + 0x1b8);
  if (bVar5) {
    UnityEngine_InputSystem_LowLevel_InputState__Change<TouchState>
              (uVar21,&local_b0,0,local_f8,
               *(undefined8 *)
                PTR_Method_UnityEngine_InputSystem_LowLevel_InputState_Change<TouchState>___03ccedd8
              );
    goto LAB_0324769c;
  }
  if (*(int *)(*(long *)PTR_UnityEngine_InputSystem_Touchscreen_TypeInfo_03ccc150 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c();
  }
  UnityEngine_InputSystem_Touchscreen__TriggerTap(uVar21,&local_b0,uVar19);
LAB_032476fc:
  uStack_108 = *(ulong *)(param_1 + 0x1c8);
  local_110 = *(undefined8 *)(param_1 + 0x1c0);
  uVar21 = UnityEngine_InputSystem_Utilities_ReadOnlyArray<object>__get_Item
                     (&local_110,uVar17 & 0xffffffff,*(undefined8 *)puVar3);
  uVar19 = local_f8;
  if (*(int *)(*(long *)PTR_UnityEngine_InputSystem_Touchscreen_TypeInfo_03ccc150 + 0xe4) == 0) {
    thunk_FUN_01cb0d4c(*(long *)PTR_UnityEngine_InputSystem_Touchscreen_TypeInfo_03ccc150);
  }
  UnityEngine_InputSystem_Touchscreen__TriggerTap(uVar21,&local_b0,uVar19);
  goto LAB_03247214;
  while( true ) {
    uVar15 = uVar15 - 1;
    uVar14 = uVar14 - 1;
    piVar18 = piVar18 + 0xe;
    if (uVar15 == 0) break;
LAB_032475c4:
    if ((uVar14 != 0) &&
       (uVar16 = UnityEngine_InputSystem_LowLevel_TouchState__get_isInProgress(piVar18,0),
       (uVar16 & 1) != 0)) goto LAB_03247698;
  }
  UnityEngine_InputSystem_LowLevel_TouchState__set_isOrphanedPrimaryTouch(uVar23 + lVar11,0,0);
  if (*(long *)(param_1 + 0x1b8) == 0) goto LAB_0324774c;
  UnityEngine_InputSystem_LowLevel_InputState__Change<byte>
            (*(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x1a8),3,0,0,
             *(undefined8 *)
              PTR_Method_UnityEngine_InputSystem_LowLevel_InputState_Change<byte>___03ccedd0);
LAB_03247698:
  if (!bVar5) goto LAB_032476fc;
LAB_0324769c:
  uStack_108 = *(ulong *)(param_1 + 0x1c8);
  local_110 = *(undefined8 *)(param_1 + 0x1c0);
  uVar19 = *(undefined8 *)puVar3;
  uVar17 = uVar17 & 0xffffffff;
LAB_032476ac:
  uVar19 = UnityEngine_InputSystem_Utilities_ReadOnlyArray<object>__get_Item
                     (&local_110,uVar17,uVar19);
  UnityEngine_InputSystem_LowLevel_InputState__Change<TouchState>
            (uVar19,&local_b0,0,local_f8,
             *(undefined8 *)
              PTR_Method_UnityEngine_InputSystem_LowLevel_InputState_Change<TouchState>___03ccedd8);
LAB_03247214:
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
LAB_03247760:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


