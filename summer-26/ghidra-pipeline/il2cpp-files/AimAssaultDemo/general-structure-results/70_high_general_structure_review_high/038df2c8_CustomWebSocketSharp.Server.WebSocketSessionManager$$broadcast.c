/*
FUNCTION_NAME: CustomWebSocketSharp.Server.WebSocketSessionManager$$broadcast
ENTRY_POINT: 038df2c8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 CustomWebSocketSharp_Server_WebSocketSessionManager__broadcast(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  ulong unaff_x24;
  ulong uVar12;
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
  
LAB_038df2d0:
  do {
    if (0 < unaff_w27) {
      uVar12 = 0;
      do {
        iVar8 = *(int *)(unaff_x19 + 0x88);
        if (iVar8 < 0) {
LAB_038df364:
          lVar10 = *(long *)(unaff_x19 + 0x70);
          if (lVar10 == 0) goto LAB_038df6ec;
          if (*(uint *)(lVar10 + 0x18) <= unaff_x24) goto LAB_038df6f0;
          lVar10 = *(long *)(lVar10 + unaff_x24 * 8 + 0x20);
          if (lVar10 == 0) goto LAB_038df6ec;
          if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_038df6f0;
          lVar10 = *(long *)(lVar10 + uVar12 * 8 + 0x20);
          if (lVar10 == 0) goto LAB_038df6ec;
          uVar13 = *(undefined8 *)(lVar10 + 0x10);
          if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar6 = FUN_075aa744(uVar13,0,0);
          if (((uVar6 & 1) == 0) &&
             ((unaff_x24 != *(uint *)(unaff_x19 + 0x8c) || (uVar12 != *(uint *)(unaff_x19 + 0x90))))
             ) {
            in_stack_00000008 = 0;
            FUN_056a801c(&stack0x00000008,unaff_x24 & 0xffffffff,uVar12 & 0xffffffff,
                         *(undefined8 *)PTR_DAT_07d89970);
            if (unaff_x20 == 0) goto LAB_038df6ec;
            lVar10 = *(long *)(unaff_x20 + 0x10);
            *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_038df6ec;
            uVar5 = *(uint *)(unaff_x20 + 0x18);
            if (uVar5 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(unaff_x20 + 0x18) = uVar5 + 1;
              *(undefined8 *)(lVar10 + (long)(int)uVar5 * 8 + 0x20) = in_stack_00000008;
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
                    /* try { // try from 038df308 to 039df3d3 has its CatchHandler @ 038df620 */
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          iVar8 = (int)uVar12 - iVar8;
          iVar1 = -iVar8;
          if (-1 < iVar8) {
            iVar1 = iVar8;
          }
          if (*(int *)(unaff_x19 + 0x88) < 0) goto LAB_038df364;
          lVar10 = *(long *)(unaff_x19 + 0x60);
          if (lVar10 == 0) goto LAB_038df6ec;
          if ((*(int *)(lVar10 + 0x50) <= iVar1) && (iVar1 <= *(int *)(lVar10 + 0x54))) {
            if (unaff_x22 == 0) goto LAB_038df6ec;
            uVar6 = System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRTask_CallbackWithState<object,_OVRTask_CombinedTaskDataWithCompletedTaskId<object>>>>__Dispose
                              ();
            if ((uVar6 & 1) == 0) goto LAB_038df364;
          }
        }
        uVar12 = uVar12 + 1;
                    /* try { // try from 038df46c to 039df477 has its CatchHandler @ 038df5f0 */
      } while (unaff_x28 != uVar12);
    }
    do {
      do {
        unaff_x24 = unaff_x24 + 1;
        if (unaff_x24 == in_stack_00000048) {
          if (unaff_x20 == 0) goto LAB_038df6ec;
          if (*(int *)(unaff_x20 + 0x18) != 0) {
            lVar10 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d89960);
            FUN_04a3ce60(lVar10,*(undefined8 *)PTR_DAT_07d89940);
            FUN_048c5058(&stack0x00000008);
            puVar4 = PTR_DAT_07d89928;
            puVar3 = PTR_DAT_07d898f0;
            in_stack_00000028 = in_stack_00000010;
            in_stack_00000020 = in_stack_00000008;
            in_stack_00000030 = in_stack_00000018;
            fVar15 = 0.0;
            while (uVar12 = FUN_05d35ef8(&stack0x00000020,*(undefined8 *)puVar3),
                  uVar13 = in_stack_00000030, (uVar12 & 1) != 0) {
              iVar8 = *(int *)(unaff_x19 + 0x84);
              if (*(char *)(unaff_x29 + 0xe22) == '\0') {
                FUN_0373b518();
                *(undefined1 *)(unaff_x29 + 0xe22) = 1;
              }
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_03798b70();
                cVar7 = *(char *)(unaff_x29 + 0xe22);
              }
              else {
                cVar7 = '\x01';
              }
              iVar2 = *(int *)(unaff_x19 + 0x88);
              iVar8 = (int)uVar13 - iVar8;
              iVar1 = -iVar8;
              if (-1 < iVar8) {
                iVar1 = iVar8;
              }
              if (cVar7 == '\0') {
                FUN_0373b518();
                *(undefined1 *)(unaff_x29 + 0xe22) = 1;
              }
              if (*(int *)(*unaff_x23 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              iVar2 = (int)((ulong)uVar13 >> 0x20) - iVar2;
              iVar8 = -iVar2;
              if (-1 < iVar2) {
                iVar8 = iVar2;
              }
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              lVar9 = *(long *)(lVar10 + 0x10);
              lVar11 = *(long *)puVar4;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_0373b7b4();
              }
              uVar5 = *(uint *)(lVar10 + 0x18);
              fVar16 = (1.0 / ((float)iVar1 + 1.0)) * (1.0 / ((float)iVar8 + 1.0));
              if (uVar5 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar5 + 1;
                *(float *)(lVar9 + (long)(int)uVar5 * 4 + 0x20) = fVar16;
              }
              else {
                FUN_04a3d6bc(fVar16,lVar10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              fVar15 = fVar15 + fVar16;
            }
            FUN_05d35ef4(&stack0x00000020,*(undefined8 *)PTR_DAT_07d898e8);
            fVar15 = (float)FUN_075a257c(0,fVar15,0);
            puVar3 = PTR_DAT_07d89958;
            if (0 < *(int *)(unaff_x20 + 0x18)) {
              if (lVar10 != 0) {
                iVar8 = 0;
                fVar16 = 0.0;
                while( true ) {
                  fVar14 = (float)FUN_04a3d3c4(lVar10,iVar8,*(undefined8 *)puVar3);
                  fVar16 = fVar16 + fVar14;
                  if (fVar15 <= fVar16) break;
                  iVar8 = iVar8 + 1;
                  if (*(int *)(unaff_x20 + 0x18) <= iVar8) {
                    return 0;
                  }
                }
                lVar10 = FUN_048c4370();
                lVar9 = *(long *)(unaff_x19 + 0x70);
                *(long *)(unaff_x19 + 0x84) = lVar10;
                if (lVar9 != 0) {
                  if ((uint)lVar10 < *(uint *)(lVar9 + 0x18)) {
                    lVar9 = *(long *)(lVar9 + ((lVar10 << 0x20) >> 0x1d) + 0x20);
                    if (lVar9 == 0) goto LAB_038df6ec;
                    if ((uint)((ulong)lVar10 >> 0x20) < *(uint *)(lVar9 + 0x18)) {
                      return *(undefined8 *)(lVar9 + (lVar10 >> 0x20) * 8 + 0x20);
                    }
                  }
LAB_038df6f0:
                    /* WARNING: Subroutine does not return */
                  FUN_0373b7bc();
                }
              }
LAB_038df6ec:
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
          }
          return 0;
        }
        iVar8 = *(int *)(unaff_x19 + 0x84);
        if (iVar8 < 0) goto LAB_038df2d0;
        if (*(char *)(unaff_x29 + 0xe22) == '\0') {
          FUN_0373b518();
          *(undefined1 *)(unaff_x29 + 0xe22) = 1;
        }
        iVar8 = (int)unaff_x24 - iVar8;
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        iVar1 = -iVar8;
        if (-1 < iVar8) {
          iVar1 = iVar8;
        }
        if (*(int *)(unaff_x19 + 0x84) < 0) goto LAB_038df2d0;
        lVar10 = *(long *)(unaff_x19 + 0x60);
        if (lVar10 == 0) goto LAB_038df6ec;
      } while ((iVar1 < *(int *)(lVar10 + 0x48)) || (*(int *)(lVar10 + 0x4c) < iVar1));
      if (unaff_x21 == 0) goto LAB_038df6ec;
      uVar5 = System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRTask_CallbackWithState<object,_OVRTask_CombinedTaskDataWithCompletedTaskId<object>>>>__Dispose
                        ();
    } while ((~uVar5 & 1) == 0);
  } while( true );
}


