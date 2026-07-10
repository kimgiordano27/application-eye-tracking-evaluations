/*
FUNCTION_NAME: CustomWebSocketSharp.Server.WebSocketSessionManager$$get_WaitTime
ENTRY_POINT: 038df2c0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 CustomWebSocketSharp_Server_WebSocketSessionManager__get_WaitTime(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  char cVar9;
  uint in_w8;
  int iVar10;
  long lVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  undefined8 uVar13;
  int unaff_w27;
  ulong unaff_x28;
  long unaff_x29;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000048;
  
  do {
    if (in_w8 != 0) goto LAB_038df2d0;
LAB_038df470:
    do {
      unaff_x24 = unaff_x24 + 1;
      if (unaff_x24 == in_stack_00000048) {
        if (unaff_x20 != 0) {
          if (*(int *)(unaff_x20 + 0x18) != 0) {
            lVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d89960);
            FUN_04a3ce60(lVar7,*(undefined8 *)PTR_DAT_07d89940);
            FUN_048c5058(&stack0x00000008);
            puVar4 = PTR_DAT_07d89928;
            puVar3 = PTR_DAT_07d898f0;
            in_stack_00000028 = in_stack_00000010;
            in_stack_00000020 = in_stack_00000008;
            in_stack_00000030 = in_stack_00000018;
            fVar15 = 0.0;
            while (uVar8 = FUN_05d35ef8(&stack0x00000020,*(undefined8 *)puVar3),
                  uVar13 = in_stack_00000030, (uVar8 & 1) != 0) {
              iVar10 = *(int *)(unaff_x19 + 0x84);
              if (*(char *)(unaff_x29 + 0xe22) == '\0') {
                FUN_0373b518();
                *(undefined1 *)(unaff_x29 + 0xe22) = 1;
              }
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_03798b70();
                cVar9 = *(char *)(unaff_x29 + 0xe22);
              }
              else {
                cVar9 = '\x01';
              }
              iVar2 = *(int *)(unaff_x19 + 0x88);
              iVar10 = (int)uVar13 - iVar10;
              iVar1 = -iVar10;
              if (-1 < iVar10) {
                iVar1 = iVar10;
              }
              if (cVar9 == '\0') {
                FUN_0373b518();
                *(undefined1 *)(unaff_x29 + 0xe22) = 1;
              }
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              iVar2 = (int)((ulong)uVar13 >> 0x20) - iVar2;
              iVar10 = -iVar2;
              if (-1 < iVar2) {
                iVar10 = iVar2;
              }
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              lVar11 = *(long *)(lVar7 + 0x10);
              lVar12 = *(long *)puVar4;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              uVar5 = *(uint *)(lVar7 + 0x18);
              fVar16 = (1.0 / ((float)iVar1 + 1.0)) * (1.0 / ((float)iVar10 + 1.0));
              if (uVar5 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar5 + 1;
                *(float *)(lVar11 + (long)(int)uVar5 * 4 + 0x20) = fVar16;
              }
              else {
                FUN_04a3d6bc(fVar16,lVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              fVar15 = fVar15 + fVar16;
            }
            FUN_05d35ef4(&stack0x00000020,*(undefined8 *)PTR_DAT_07d898e8);
            fVar15 = (float)FUN_075a257c(0,fVar15,0);
            puVar3 = PTR_DAT_07d89958;
            if (0 < *(int *)(unaff_x20 + 0x18)) {
              if (lVar7 != 0) {
                iVar10 = 0;
                fVar16 = 0.0;
                while( true ) {
                  fVar14 = (float)FUN_04a3d3c4(lVar7,iVar10,*(undefined8 *)puVar3);
                  fVar16 = fVar16 + fVar14;
                  if (fVar15 <= fVar16) break;
                  iVar10 = iVar10 + 1;
                  if (*(int *)(unaff_x20 + 0x18) <= iVar10) {
                    return 0;
                  }
                }
                lVar7 = FUN_048c4370();
                lVar11 = *(long *)(unaff_x19 + 0x70);
                *(long *)(unaff_x19 + 0x84) = lVar7;
                if (lVar11 != 0) {
                  if ((uint)lVar7 < *(uint *)(lVar11 + 0x18)) {
                    lVar11 = *(long *)(lVar11 + ((lVar7 << 0x20) >> 0x1d) + 0x20);
                    if (lVar11 == 0) goto LAB_038df6ec;
                    if ((uint)((ulong)lVar7 >> 0x20) < *(uint *)(lVar11 + 0x18)) {
                      return *(undefined8 *)(lVar11 + (lVar7 >> 0x20) * 8 + 0x20);
                    }
                  }
LAB_038df6f0:
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7bc();
                }
              }
              goto LAB_038df6ec;
            }
          }
          return 0;
        }
        goto LAB_038df6ec;
      }
      iVar10 = *(int *)(unaff_x19 + 0x84);
      if (iVar10 < 0) {
LAB_038df2d0:
        if (0 < unaff_w27) {
          uVar8 = 0;
          do {
            iVar10 = *(int *)(unaff_x19 + 0x88);
            if (iVar10 < 0) {
LAB_038df364:
              lVar7 = *(long *)(unaff_x19 + 0x70);
              if (lVar7 == 0) goto LAB_038df6ec;
              if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_038df6f0;
              lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_038df6ec;
              if (*(uint *)(lVar7 + 0x18) <= uVar8) goto LAB_038df6f0;
              lVar7 = *(long *)(lVar7 + uVar8 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_038df6ec;
              uVar13 = *(undefined8 *)(lVar7 + 0x10);
              if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              uVar6 = FUN_075aa744(uVar13,0,0);
              if (((uVar6 & 1) == 0) &&
                 ((unaff_x24 != *(uint *)(unaff_x19 + 0x8c) ||
                  (uVar8 != *(uint *)(unaff_x19 + 0x90))))) {
                in_stack_00000008 = 0;
                FUN_056a801c(&stack0x00000008,unaff_x24 & 0xffffffff,uVar8 & 0xffffffff,
                             *(undefined8 *)PTR_DAT_07d89970);
                if (unaff_x20 == 0) goto LAB_038df6ec;
                lVar7 = *(long *)(unaff_x20 + 0x10);
                *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                if (lVar7 == 0) goto LAB_038df6ec;
                uVar5 = *(uint *)(unaff_x20 + 0x18);
                if (uVar5 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(unaff_x20 + 0x18) = uVar5 + 1;
                  *(undefined8 *)(lVar7 + (long)(int)uVar5 * 8 + 0x20) = in_stack_00000008;
                }
                else {
                  FUN_048c4660();
                }
              }
            }
            else {
              if (*(char *)(unaff_x29 + 0xe22) == '\0') {
                FUN_0373b518();
                *(undefined1 *)(unaff_x29 + 0xe22) = 1;
              }
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              iVar10 = (int)uVar8 - iVar10;
              iVar1 = -iVar10;
              if (-1 < iVar10) {
                iVar1 = iVar10;
              }
              if (*(int *)(unaff_x19 + 0x88) < 0) goto LAB_038df364;
              lVar7 = *(long *)(unaff_x19 + 0x60);
              if (lVar7 == 0) goto LAB_038df6ec;
              if ((*(int *)(lVar7 + 0x50) <= iVar1) && (iVar1 <= *(int *)(lVar7 + 0x54))) {
                if (unaff_x22 == 0) goto LAB_038df6ec;
                uVar6 = System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRTask_CallbackWithState<object,_OVRTask_CombinedTaskDataWithCompletedTaskId<object>>>>__Dispose
                                  ();
                if ((uVar6 & 1) == 0) goto LAB_038df364;
              }
            }
            uVar8 = uVar8 + 1;
          } while (unaff_x28 != uVar8);
        }
        goto LAB_038df470;
      }
      if (*(char *)(unaff_x29 + 0xe22) == '\0') {
        FUN_0373b518();
        *(undefined1 *)(unaff_x29 + 0xe22) = 1;
      }
      iVar10 = (int)unaff_x24 - iVar10;
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      iVar1 = -iVar10;
      if (-1 < iVar10) {
        iVar1 = iVar10;
      }
      if (*(int *)(unaff_x19 + 0x84) < 0) goto LAB_038df2d0;
      lVar7 = *(long *)(unaff_x19 + 0x60);
      if (lVar7 == 0) goto LAB_038df6ec;
    } while ((iVar1 < *(int *)(lVar7 + 0x48)) || (*(int *)(lVar7 + 0x4c) < iVar1));
    if (unaff_x21 == 0) {
LAB_038df6ec:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar5 = System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRTask_CallbackWithState<object,_OVRTask_CombinedTaskDataWithCompletedTaskId<object>>>>__Dispose
                      ();
    in_w8 = ~uVar5 & 1;
  } while( true );
}


