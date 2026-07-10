/*
FUNCTION_NAME: CustomWebSocketSharp.Server.WebSocketSessionManager.<get_InactiveIDs>d__20$$.ctor
ENTRY_POINT: 038df008
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 CustomWebSocketSharp_Server_WebSocketSessionManager_<get_InactiveIDs>d__20___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  int iVar15;
  long unaff_x20;
  undefined8 uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000048;
  
  FUN_0373b518(PTR_DAT_07d89950);
  FUN_0373b518(PTR_DAT_07d89958);
  FUN_0373b518(PTR_DAT_07d89960);
  FUN_0373b518(PTR_DAT_07d89968);
  FUN_0373b518(PTR_DAT_07d86398);
  FUN_0373b518(PTR_DAT_07d89970);
  *(undefined1 *)(unaff_x20 + 0xe13) = 1;
  puVar2 = PTR_DAT_07d89918;
  puVar1 = PTR_DAT_07d89910;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  lVar10 = *(long *)(unaff_x19 + 0x70);
  if (lVar10 == 0) {
    return 0;
  }
  iVar9 = (int)*(ulong *)(lVar10 + 0x18);
  if (iVar9 == 0) goto LAB_038df6f0;
  if (*(long *)(lVar10 + 0x20) != 0) {
    uVar19 = *(ulong *)(*(long *)(lVar10 + 0x20) + 0x18);
    in_stack_00000048 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
    lVar10 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d89918);
    FUN_0458b38c(lVar10,*(undefined8 *)puVar1);
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
    FUN_0458b38c(lVar5,*(undefined8 *)puVar1);
    puVar2 = PTR_DAT_07d89900;
    puVar1 = PTR_DAT_07d86398;
    uVar18 = (uint)uVar19;
    if (0 < iVar9) {
      uVar17 = 0;
      do {
        if (0 < (int)uVar18) {
          uVar4 = 0;
          do {
            lVar11 = *(long *)(unaff_x19 + 0x70);
            if (lVar11 == 0) goto LAB_038df6ec;
            if (*(uint *)(lVar11 + 0x18) <= uVar17) goto LAB_038df6f0;
            lVar11 = *(long *)(lVar11 + uVar17 * 8 + 0x20);
            if (lVar11 == 0) goto LAB_038df6ec;
            if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_038df6f0;
            lVar11 = *(long *)(lVar11 + (long)(int)uVar4 * 8 + 0x20);
            if (lVar11 == 0) goto LAB_038df6ec;
            uVar16 = *(undefined8 *)(lVar11 + 0x10);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            uVar6 = FUN_075aa744(uVar16,0,0);
            if ((uVar6 & 1) != 0) {
              lVar11 = *(long *)(unaff_x19 + 0x60);
              if (lVar11 == 0) goto LAB_038df6ec;
              iVar12 = *(int *)(lVar11 + 0x48);
              for (iVar15 = (int)uVar17 - iVar12; iVar15 <= iVar12 + (int)uVar17;
                  iVar15 = iVar15 + 1) {
                if ((-1 < iVar15) && (iVar15 < iVar9)) {
                  if (lVar10 == 0) goto LAB_038df6ec;
                  FUN_0458c578(lVar10,iVar15,*(undefined8 *)puVar2);
                  lVar11 = *(long *)(unaff_x19 + 0x60);
                  if (lVar11 == 0) goto LAB_038df6ec;
                }
                iVar12 = *(int *)(lVar11 + 0x48);
              }
              iVar15 = uVar4 - *(int *)(lVar11 + 0x50);
              while (iVar15 <= (int)(*(int *)(lVar11 + 0x50) + uVar4)) {
                if ((-1 < iVar15) && (iVar15 < (int)uVar18)) {
                  if (lVar5 == 0) goto LAB_038df6ec;
                  FUN_0458c578(lVar5,iVar15,*(undefined8 *)puVar2);
                  lVar11 = *(long *)(unaff_x19 + 0x60);
                }
                iVar15 = iVar15 + 1;
                if (lVar11 == 0) goto LAB_038df6ec;
              }
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 != uVar18);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != in_stack_00000048);
    }
    puVar1 = PTR_DAT_07d89938;
    lVar11 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d89968);
    FUN_048c3e0c(lVar11,*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_07d863e8;
    if (0 < iVar9) {
      uVar17 = 0;
      do {
        iVar9 = *(int *)(unaff_x19 + 0x84);
        if (iVar9 < 0) {
LAB_038df2d0:
          if (0 < (int)uVar18) {
            uVar6 = 0;
            do {
              iVar9 = *(int *)(unaff_x19 + 0x88);
              if (iVar9 < 0) {
LAB_038df364:
                lVar13 = *(long *)(unaff_x19 + 0x70);
                if (lVar13 == 0) goto LAB_038df6ec;
                if (*(uint *)(lVar13 + 0x18) <= uVar17) goto LAB_038df6f0;
                lVar13 = *(long *)(lVar13 + uVar17 * 8 + 0x20);
                if (lVar13 == 0) goto LAB_038df6ec;
                if (*(uint *)(lVar13 + 0x18) <= uVar6) goto LAB_038df6f0;
                lVar13 = *(long *)(lVar13 + uVar6 * 8 + 0x20);
                if (lVar13 == 0) goto LAB_038df6ec;
                uVar16 = *(undefined8 *)(lVar13 + 0x10);
                if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                }
                uVar7 = FUN_075aa744(uVar16,0,0);
                if (((uVar7 & 1) == 0) &&
                   ((uVar17 != *(uint *)(unaff_x19 + 0x8c) || (uVar6 != *(uint *)(unaff_x19 + 0x90))
                    ))) {
                  in_stack_00000008 = 0;
                  FUN_056a801c(&stack0x00000008,uVar17 & 0xffffffff,uVar6 & 0xffffffff,
                               *(undefined8 *)PTR_DAT_07d89970);
                  if (lVar11 == 0) goto LAB_038df6ec;
                  lVar13 = *(long *)(lVar11 + 0x10);
                  lVar14 = *(long *)PTR_DAT_07d89920;
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar13 == 0) goto LAB_038df6ec;
                  uVar4 = *(uint *)(lVar11 + 0x18);
                  if (uVar4 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar11 + 0x18) = uVar4 + 1;
                    *(undefined8 *)(lVar13 + (long)(int)uVar4 * 8 + 0x20) = in_stack_00000008;
                  }
                  else {
                    FUN_048c4660(lVar11,in_stack_00000008,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                }
              }
              else {
                if (DAT_08252e22 == '\0') {
                  FUN_0373b518(puVar1);
                  DAT_08252e22 = '\x01';
                }
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                }
                iVar9 = (int)uVar6 - iVar9;
                iVar15 = -iVar9;
                if (-1 < iVar9) {
                  iVar15 = iVar9;
                }
                if (*(int *)(unaff_x19 + 0x88) < 0) goto LAB_038df364;
                lVar13 = *(long *)(unaff_x19 + 0x60);
                if (lVar13 == 0) goto LAB_038df6ec;
                if ((*(int *)(lVar13 + 0x50) <= iVar15) && (iVar15 <= *(int *)(lVar13 + 0x54))) {
                  if (lVar5 == 0) goto LAB_038df6ec;
                  uVar7 = System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRTask_CallbackWithState<object,_OVRTask_CombinedTaskDataWithCompletedTaskId<object>>>>__Dispose
                                    (lVar5,uVar6 & 0xffffffff,*(undefined8 *)PTR_DAT_07d89908);
                  if ((uVar7 & 1) == 0) goto LAB_038df364;
                }
              }
              uVar6 = uVar6 + 1;
            } while ((uVar19 & 0xffffffff) != uVar6);
          }
        }
        else {
          if (DAT_08252e22 == '\0') {
            FUN_0373b518(puVar1);
            DAT_08252e22 = '\x01';
          }
          iVar9 = (int)uVar17 - iVar9;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          iVar15 = -iVar9;
          if (-1 < iVar9) {
            iVar15 = iVar9;
          }
          if (*(int *)(unaff_x19 + 0x84) < 0) goto LAB_038df2d0;
          lVar13 = *(long *)(unaff_x19 + 0x60);
          if (lVar13 == 0) goto LAB_038df6ec;
          if ((*(int *)(lVar13 + 0x48) <= iVar15) && (iVar15 <= *(int *)(lVar13 + 0x4c))) {
            if (lVar10 == 0) goto LAB_038df6ec;
            uVar4 = System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRTask_CallbackWithState<object,_OVRTask_CombinedTaskDataWithCompletedTaskId<object>>>>__Dispose
                              (lVar10,uVar17 & 0xffffffff,*(undefined8 *)PTR_DAT_07d89908);
            if ((~uVar4 & 1) != 0) goto LAB_038df2d0;
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != in_stack_00000048);
    }
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x18) == 0) {
        return 0;
      }
      lVar10 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d89960);
      FUN_04a3ce60(lVar10,*(undefined8 *)PTR_DAT_07d89940);
      FUN_048c5058(&stack0x00000008,lVar11,*(undefined8 *)PTR_DAT_07d89930);
      puVar3 = PTR_DAT_07d89928;
      puVar2 = PTR_DAT_07d898f0;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      fVar21 = 0.0;
      while (uVar19 = FUN_05d35ef8(&stack0x00000020,*(undefined8 *)puVar2),
            uVar16 = in_stack_00000030, (uVar19 & 1) != 0) {
        iVar9 = *(int *)(unaff_x19 + 0x84);
        if (DAT_08252e22 == '\0') {
          FUN_0373b518(puVar1);
          DAT_08252e22 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03798b70();
          cVar8 = DAT_08252e22;
        }
        else {
          cVar8 = '\x01';
        }
        iVar12 = *(int *)(unaff_x19 + 0x88);
        iVar9 = (int)uVar16 - iVar9;
        iVar15 = -iVar9;
        if (-1 < iVar9) {
          iVar15 = iVar9;
        }
        if (cVar8 == '\0') {
          FUN_0373b518(puVar1);
          DAT_08252e22 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        iVar12 = (int)((ulong)uVar16 >> 0x20) - iVar12;
        iVar9 = -iVar12;
        if (-1 < iVar12) {
          iVar9 = iVar12;
        }
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar5 = *(long *)(lVar10 + 0x10);
        lVar13 = *(long *)puVar3;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar18 = *(uint *)(lVar10 + 0x18);
        fVar22 = (1.0 / ((float)iVar15 + 1.0)) * (1.0 / ((float)iVar9 + 1.0));
        if (uVar18 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar18 + 1;
          *(float *)(lVar5 + (long)(int)uVar18 * 4 + 0x20) = fVar22;
        }
        else {
          FUN_04a3d6bc(fVar22,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        fVar21 = fVar21 + fVar22;
      }
      FUN_05d35ef4(&stack0x00000020,*(undefined8 *)PTR_DAT_07d898e8);
      fVar21 = (float)FUN_075a257c(0,fVar21,0);
      puVar1 = PTR_DAT_07d89958;
      if (*(int *)(lVar11 + 0x18) < 1) {
        return 0;
      }
      if (lVar10 != 0) {
        iVar9 = 0;
        fVar22 = 0.0;
        while( true ) {
          fVar20 = (float)FUN_04a3d3c4(lVar10,iVar9,*(undefined8 *)puVar1);
          fVar22 = fVar22 + fVar20;
          if (fVar21 <= fVar22) break;
          iVar9 = iVar9 + 1;
          if (*(int *)(lVar11 + 0x18) <= iVar9) {
            return 0;
          }
        }
        lVar10 = FUN_048c4370(lVar11,iVar9,*(undefined8 *)PTR_DAT_07d89950);
        lVar5 = *(long *)(unaff_x19 + 0x70);
        *(long *)(unaff_x19 + 0x84) = lVar10;
        if (lVar5 != 0) {
          if ((uint)lVar10 < *(uint *)(lVar5 + 0x18)) {
            lVar5 = *(long *)(lVar5 + ((lVar10 << 0x20) >> 0x1d) + 0x20);
            if (lVar5 == 0) goto LAB_038df6ec;
            if ((uint)((ulong)lVar10 >> 0x20) < *(uint *)(lVar5 + 0x18)) {
              return *(undefined8 *)(lVar5 + (lVar10 >> 0x20) * 8 + 0x20);
            }
          }
LAB_038df6f0:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
      }
    }
  }
LAB_038df6ec:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


