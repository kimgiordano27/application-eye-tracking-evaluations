/*
FUNCTION_NAME: CustomWebSocketSharp.Server.WebSocketSessionManager$$TryGetSession
ENTRY_POINT: 038df068
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


undefined8 CustomWebSocketSharp_Server_WebSocketSessionManager__TryGetSession(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  int iVar15;
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
  
  puVar2 = PTR_DAT_07d89918;
  puVar1 = PTR_DAT_07d89910;
  iVar10 = (int)*(ulong *)(param_1 + 0x18);
  if (iVar10 == 0) {
LAB_038df6f0:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar19 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18);
    in_stack_00000048 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
    lVar5 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d89918);
    FUN_0458b38c(lVar5,*(undefined8 *)puVar1);
    lVar6 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
    FUN_0458b38c(lVar6,*(undefined8 *)puVar1);
    puVar2 = PTR_DAT_07d89900;
    puVar1 = PTR_DAT_07d86398;
    uVar18 = (uint)uVar19;
    if (0 < iVar10) {
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
                    /* try { // try from 038df134 to 039df26f has its CatchHandler @ 038df628 */
            uVar7 = FUN_075aa744(uVar16,0,0);
            if ((uVar7 & 1) != 0) {
              lVar11 = *(long *)(unaff_x19 + 0x60);
              if (lVar11 == 0) goto LAB_038df6ec;
              iVar12 = *(int *)(lVar11 + 0x48);
              for (iVar15 = (int)uVar17 - iVar12; iVar15 <= iVar12 + (int)uVar17;
                  iVar15 = iVar15 + 1) {
                if ((-1 < iVar15) && (iVar15 < iVar10)) {
                  if (lVar5 == 0) goto LAB_038df6ec;
                  FUN_0458c578(lVar5,iVar15,*(undefined8 *)puVar2);
                  lVar11 = *(long *)(unaff_x19 + 0x60);
                  if (lVar11 == 0) goto LAB_038df6ec;
                }
                iVar12 = *(int *)(lVar11 + 0x48);
              }
              iVar15 = uVar4 - *(int *)(lVar11 + 0x50);
              while (iVar15 <= (int)(*(int *)(lVar11 + 0x50) + uVar4)) {
                if ((-1 < iVar15) && (iVar15 < (int)uVar18)) {
                  if (lVar6 == 0) goto LAB_038df6ec;
                  FUN_0458c578(lVar6,iVar15,*(undefined8 *)puVar2);
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
    if (0 < iVar10) {
      uVar17 = 0;
      do {
        iVar10 = *(int *)(unaff_x19 + 0x84);
        if (iVar10 < 0) {
LAB_038df2d0:
          if (0 < (int)uVar18) {
            uVar7 = 0;
            do {
              iVar10 = *(int *)(unaff_x19 + 0x88);
              if (iVar10 < 0) {
LAB_038df364:
                lVar13 = *(long *)(unaff_x19 + 0x70);
                if (lVar13 == 0) goto LAB_038df6ec;
                if (*(uint *)(lVar13 + 0x18) <= uVar17) goto LAB_038df6f0;
                lVar13 = *(long *)(lVar13 + uVar17 * 8 + 0x20);
                if (lVar13 == 0) goto LAB_038df6ec;
                if (*(uint *)(lVar13 + 0x18) <= uVar7) goto LAB_038df6f0;
                lVar13 = *(long *)(lVar13 + uVar7 * 8 + 0x20);
                if (lVar13 == 0) goto LAB_038df6ec;
                uVar16 = *(undefined8 *)(lVar13 + 0x10);
                if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                }
                uVar8 = FUN_075aa744(uVar16,0,0);
                if (((uVar8 & 1) == 0) &&
                   ((uVar17 != *(uint *)(unaff_x19 + 0x8c) || (uVar7 != *(uint *)(unaff_x19 + 0x90))
                    ))) {
                  in_stack_00000008 = 0;
                  FUN_056a801c(&stack0x00000008,uVar17 & 0xffffffff,uVar7 & 0xffffffff,
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
                iVar10 = (int)uVar7 - iVar10;
                iVar15 = -iVar10;
                if (-1 < iVar10) {
                  iVar15 = iVar10;
                }
                if (*(int *)(unaff_x19 + 0x88) < 0) goto LAB_038df364;
                lVar13 = *(long *)(unaff_x19 + 0x60);
                if (lVar13 == 0) goto LAB_038df6ec;
                if ((*(int *)(lVar13 + 0x50) <= iVar15) && (iVar15 <= *(int *)(lVar13 + 0x54))) {
                  if (lVar6 == 0) goto LAB_038df6ec;
                  uVar8 = System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRTask_CallbackWithState<object,_OVRTask_CombinedTaskDataWithCompletedTaskId<object>>>>__Dispose
                                    (lVar6,uVar7 & 0xffffffff,*(undefined8 *)PTR_DAT_07d89908);
                  if ((uVar8 & 1) == 0) goto LAB_038df364;
                }
              }
              uVar7 = uVar7 + 1;
            } while ((uVar19 & 0xffffffff) != uVar7);
          }
        }
        else {
          if (DAT_08252e22 == '\0') {
            FUN_0373b518(puVar1);
            DAT_08252e22 = '\x01';
          }
          iVar10 = (int)uVar17 - iVar10;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          iVar15 = -iVar10;
          if (-1 < iVar10) {
            iVar15 = iVar10;
          }
          if (*(int *)(unaff_x19 + 0x84) < 0) goto LAB_038df2d0;
          lVar13 = *(long *)(unaff_x19 + 0x60);
          if (lVar13 == 0) goto LAB_038df6ec;
          if ((*(int *)(lVar13 + 0x48) <= iVar15) && (iVar15 <= *(int *)(lVar13 + 0x4c))) {
            if (lVar5 == 0) goto LAB_038df6ec;
            uVar4 = System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRTask_CallbackWithState<object,_OVRTask_CombinedTaskDataWithCompletedTaskId<object>>>>__Dispose
                              (lVar5,uVar17 & 0xffffffff,*(undefined8 *)PTR_DAT_07d89908);
            if ((~uVar4 & 1) != 0) goto LAB_038df2d0;
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != in_stack_00000048);
    }
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x18) != 0) {
        lVar5 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d89960);
        FUN_04a3ce60(lVar5,*(undefined8 *)PTR_DAT_07d89940);
        FUN_048c5058(&stack0x00000008,lVar11,*(undefined8 *)PTR_DAT_07d89930);
        puVar3 = PTR_DAT_07d89928;
        puVar2 = PTR_DAT_07d898f0;
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        fVar21 = 0.0;
        while (uVar19 = FUN_05d35ef8(&stack0x00000020,*(undefined8 *)puVar2),
              uVar16 = in_stack_00000030, (uVar19 & 1) != 0) {
          iVar10 = *(int *)(unaff_x19 + 0x84);
          if (DAT_08252e22 == '\0') {
            FUN_0373b518(puVar1);
            DAT_08252e22 = '\x01';
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03798b70();
            cVar9 = DAT_08252e22;
          }
          else {
            cVar9 = '\x01';
          }
          iVar12 = *(int *)(unaff_x19 + 0x88);
          iVar10 = (int)uVar16 - iVar10;
          iVar15 = -iVar10;
          if (-1 < iVar10) {
            iVar15 = iVar10;
          }
          if (cVar9 == '\0') {
            FUN_0373b518(puVar1);
            DAT_08252e22 = '\x01';
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          iVar12 = (int)((ulong)uVar16 >> 0x20) - iVar12;
          iVar10 = -iVar12;
          if (-1 < iVar12) {
            iVar10 = iVar12;
          }
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar6 = *(long *)(lVar5 + 0x10);
          lVar13 = *(long *)puVar3;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar18 = *(uint *)(lVar5 + 0x18);
          fVar22 = (1.0 / ((float)iVar15 + 1.0)) * (1.0 / ((float)iVar10 + 1.0));
          if (uVar18 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar18 + 1;
            *(float *)(lVar6 + (long)(int)uVar18 * 4 + 0x20) = fVar22;
          }
          else {
            FUN_04a3d6bc(fVar22,lVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          fVar21 = fVar21 + fVar22;
        }
        FUN_05d35ef4(&stack0x00000020,*(undefined8 *)PTR_DAT_07d898e8);
        fVar21 = (float)FUN_075a257c(0,fVar21,0);
        puVar1 = PTR_DAT_07d89958;
        if (0 < *(int *)(lVar11 + 0x18)) {
          if (lVar5 == 0) goto LAB_038df6ec;
          iVar10 = 0;
          fVar22 = 0.0;
          do {
            fVar20 = (float)FUN_04a3d3c4(lVar5,iVar10,*(undefined8 *)puVar1);
            fVar22 = fVar22 + fVar20;
            if (fVar21 <= fVar22) {
              lVar5 = FUN_048c4370(lVar11,iVar10,*(undefined8 *)PTR_DAT_07d89950);
              lVar6 = *(long *)(unaff_x19 + 0x70);
              *(long *)(unaff_x19 + 0x84) = lVar5;
              if (lVar6 == 0) goto LAB_038df6ec;
              if (*(uint *)(lVar6 + 0x18) <= (uint)lVar5) goto LAB_038df6f0;
              lVar6 = *(long *)(lVar6 + ((lVar5 << 0x20) >> 0x1d) + 0x20);
              if (lVar6 == 0) goto LAB_038df6ec;
              if ((uint)((ulong)lVar5 >> 0x20) < *(uint *)(lVar6 + 0x18)) {
                return *(undefined8 *)(lVar6 + (lVar5 >> 0x20) * 8 + 0x20);
              }
              goto LAB_038df6f0;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < *(int *)(lVar11 + 0x18));
        }
      }
      return 0;
    }
  }
LAB_038df6ec:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


