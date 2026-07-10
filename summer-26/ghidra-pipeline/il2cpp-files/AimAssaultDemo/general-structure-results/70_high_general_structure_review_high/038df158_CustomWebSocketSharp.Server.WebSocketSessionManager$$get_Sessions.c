/*
FUNCTION_NAME: CustomWebSocketSharp.Server.WebSocketSessionManager$$get_Sessions
ENTRY_POINT: 038df158
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


undefined8 CustomWebSocketSharp_Server_WebSocketSessionManager__get_Sessions(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  int in_w9;
  long lVar12;
  long lVar13;
  long unaff_x19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  ulong unaff_x24;
  ulong uVar14;
  long *unaff_x25;
  ulong uVar15;
  undefined8 uVar16;
  uint unaff_w27;
  uint unaff_w28;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  ulong in_stack_00000048;
  
  do {
    if (in_w9 < unaff_w20) {
      iVar10 = unaff_w28 - *(int *)(param_1 + 0x50);
      while (iVar10 <= (int)(*(int *)(param_1 + 0x50) + unaff_w28)) {
        if ((-1 < iVar10) && (iVar10 < (int)unaff_w27)) {
          if (unaff_x22 == 0) goto LAB_038df6ec;
          FUN_0458c578();
          param_1 = *(long *)(unaff_x19 + 0x60);
        }
        iVar10 = iVar10 + 1;
        if (param_1 == 0) goto LAB_038df6ec;
      }
      do {
        puVar3 = PTR_DAT_07d89938;
        unaff_w28 = unaff_w28 + 1;
        if (unaff_w28 == unaff_w27) {
          do {
            unaff_x24 = unaff_x24 + 1;
            if (unaff_x24 == in_stack_00000048) {
              lVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d89968);
              FUN_048c3e0c(lVar7,*(undefined8 *)puVar3);
              puVar3 = PTR_DAT_07d863e8;
              if (unaff_w23 < 1) goto LAB_038df480;
              uVar14 = 0;
              goto LAB_038df238;
            }
          } while ((int)unaff_w27 < 1);
          unaff_w28 = 0;
        }
        lVar7 = *(long *)(unaff_x19 + 0x70);
        if (lVar7 == 0) goto LAB_038df6ec;
        if (*(uint *)(lVar7 + 0x18) <= unaff_x24) goto LAB_038df6f0;
        lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_038df6ec;
        if (*(uint *)(lVar7 + 0x18) <= unaff_w28) goto LAB_038df6f0;
        lVar7 = *(long *)(lVar7 + (long)(int)unaff_w28 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_038df6ec;
        uVar16 = *(undefined8 *)(lVar7 + 0x10);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar14 = FUN_075aa744(uVar16,0,0);
      } while ((uVar14 & 1) == 0);
      param_1 = *(long *)(unaff_x19 + 0x60);
      if (param_1 == 0) goto LAB_038df6ec;
      iVar10 = *(int *)(param_1 + 0x48);
      unaff_w20 = (int)unaff_x24 - iVar10;
    }
    else {
      if ((-1 < unaff_w20) && (unaff_w20 < unaff_w23)) {
        if (unaff_x21 == 0) goto LAB_038df6ec;
        FUN_0458c578();
        param_1 = *(long *)(unaff_x19 + 0x60);
        if (param_1 == 0) goto LAB_038df6ec;
      }
      iVar10 = *(int *)(param_1 + 0x48);
      unaff_w20 = unaff_w20 + 1;
    }
    in_w9 = iVar10 + (int)unaff_x24;
  } while( true );
LAB_038df238:
  do {
    iVar10 = *(int *)(unaff_x19 + 0x84);
    if (iVar10 < 0) {
LAB_038df2d0:
      if (0 < (int)unaff_w27) {
        uVar15 = 0;
        do {
          iVar10 = *(int *)(unaff_x19 + 0x88);
          if (iVar10 < 0) {
LAB_038df364:
            lVar12 = *(long *)(unaff_x19 + 0x70);
            if (lVar12 == 0) goto LAB_038df6ec;
            if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_038df6f0;
            lVar12 = *(long *)(lVar12 + uVar14 * 8 + 0x20);
            if (lVar12 == 0) goto LAB_038df6ec;
            if (*(uint *)(lVar12 + 0x18) <= uVar15) goto LAB_038df6f0;
            lVar12 = *(long *)(lVar12 + uVar15 * 8 + 0x20);
            if (lVar12 == 0) goto LAB_038df6ec;
            uVar16 = *(undefined8 *)(lVar12 + 0x10);
            if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            uVar8 = FUN_075aa744(uVar16,0,0);
            if (((uVar8 & 1) == 0) &&
               ((uVar14 != *(uint *)(unaff_x19 + 0x8c) || (uVar15 != *(uint *)(unaff_x19 + 0x90)))))
            {
              in_stack_00000008 = 0;
              FUN_056a801c(&stack0x00000008,uVar14 & 0xffffffff,uVar15 & 0xffffffff,
                           *(undefined8 *)PTR_DAT_07d89970);
              if (lVar7 == 0) goto LAB_038df6ec;
              lVar12 = *(long *)(lVar7 + 0x10);
              lVar11 = *(long *)PTR_DAT_07d89920;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_038df6ec;
              uVar6 = *(uint *)(lVar7 + 0x18);
              if (uVar6 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar6 + 1;
                *(undefined8 *)(lVar12 + (long)(int)uVar6 * 8 + 0x20) = in_stack_00000008;
              }
              else {
                FUN_048c4660(lVar7,in_stack_00000008,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          else {
            if (DAT_08252e22 == '\0') {
              FUN_0373b518(puVar3);
              DAT_08252e22 = '\x01';
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            iVar10 = (int)uVar15 - iVar10;
            iVar1 = -iVar10;
            if (-1 < iVar10) {
              iVar1 = iVar10;
            }
            if (*(int *)(unaff_x19 + 0x88) < 0) goto LAB_038df364;
            lVar12 = *(long *)(unaff_x19 + 0x60);
            if (lVar12 == 0) goto LAB_038df6ec;
            if ((*(int *)(lVar12 + 0x50) <= iVar1) && (iVar1 <= *(int *)(lVar12 + 0x54))) {
              if (unaff_x22 == 0) goto LAB_038df6ec;
              uVar8 = System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRTask_CallbackWithState<object,_OVRTask_CombinedTaskDataWithCompletedTaskId<object>>>>__Dispose
                                ();
              if ((uVar8 & 1) == 0) goto LAB_038df364;
            }
          }
          uVar15 = uVar15 + 1;
        } while (unaff_w27 != uVar15);
      }
    }
    else {
      if (DAT_08252e22 == '\0') {
        FUN_0373b518(puVar3);
        DAT_08252e22 = '\x01';
      }
      iVar10 = (int)uVar14 - iVar10;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      iVar1 = -iVar10;
      if (-1 < iVar10) {
        iVar1 = iVar10;
      }
      if (*(int *)(unaff_x19 + 0x84) < 0) goto LAB_038df2d0;
      lVar12 = *(long *)(unaff_x19 + 0x60);
      if (lVar12 == 0) goto LAB_038df6ec;
      if ((*(int *)(lVar12 + 0x48) <= iVar1) && (iVar1 <= *(int *)(lVar12 + 0x4c))) {
        if (unaff_x21 == 0) goto LAB_038df6ec;
        uVar6 = System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRTask_CallbackWithState<object,_OVRTask_CombinedTaskDataWithCompletedTaskId<object>>>>__Dispose
                          ();
        if ((~uVar6 & 1) != 0) goto LAB_038df2d0;
      }
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 != in_stack_00000048);
LAB_038df480:
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) != 0) {
      lVar12 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d89960);
      FUN_04a3ce60(lVar12,*(undefined8 *)PTR_DAT_07d89940);
      FUN_048c5058(&stack0x00000008,lVar7,*(undefined8 *)PTR_DAT_07d89930);
      puVar5 = PTR_DAT_07d89928;
      puVar4 = PTR_DAT_07d898f0;
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      fVar18 = 0.0;
      while (uVar14 = FUN_05d35ef8(&stack0x00000020,*(undefined8 *)puVar4),
            uVar16 = in_stack_00000030, (uVar14 & 1) != 0) {
        iVar10 = *(int *)(unaff_x19 + 0x84);
        if (DAT_08252e22 == '\0') {
          FUN_0373b518(puVar3);
          DAT_08252e22 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03798b70();
          cVar9 = DAT_08252e22;
        }
        else {
          cVar9 = '\x01';
        }
        iVar2 = *(int *)(unaff_x19 + 0x88);
        iVar10 = (int)uVar16 - iVar10;
        iVar1 = -iVar10;
        if (-1 < iVar10) {
          iVar1 = iVar10;
        }
        if (cVar9 == '\0') {
          FUN_0373b518(puVar3);
          DAT_08252e22 = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        iVar2 = (int)((ulong)uVar16 >> 0x20) - iVar2;
        iVar10 = -iVar2;
        if (-1 < iVar2) {
          iVar10 = iVar2;
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar11 = *(long *)(lVar12 + 0x10);
        lVar13 = *(long *)puVar5;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar6 = *(uint *)(lVar12 + 0x18);
        fVar19 = (1.0 / ((float)iVar1 + 1.0)) * (1.0 / ((float)iVar10 + 1.0));
        if (uVar6 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar6 + 1;
          *(float *)(lVar11 + (long)(int)uVar6 * 4 + 0x20) = fVar19;
        }
        else {
          FUN_04a3d6bc(fVar19,lVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        fVar18 = fVar18 + fVar19;
      }
      FUN_05d35ef4(&stack0x00000020,*(undefined8 *)PTR_DAT_07d898e8);
      fVar18 = (float)FUN_075a257c(0,fVar18,0);
      puVar3 = PTR_DAT_07d89958;
      if (0 < *(int *)(lVar7 + 0x18)) {
        if (lVar12 == 0) goto LAB_038df6ec;
        iVar10 = 0;
        fVar19 = 0.0;
        do {
          fVar17 = (float)FUN_04a3d3c4(lVar12,iVar10,*(undefined8 *)puVar3);
          fVar19 = fVar19 + fVar17;
          if (fVar18 <= fVar19) {
            lVar7 = FUN_048c4370(lVar7,iVar10,*(undefined8 *)PTR_DAT_07d89950);
            lVar12 = *(long *)(unaff_x19 + 0x70);
            *(long *)(unaff_x19 + 0x84) = lVar7;
            if (lVar12 == 0) goto LAB_038df6ec;
            if (*(uint *)(lVar12 + 0x18) <= (uint)lVar7) goto LAB_038df6f0;
            lVar12 = *(long *)(lVar12 + ((lVar7 << 0x20) >> 0x1d) + 0x20);
            if (lVar12 != 0) {
              if ((uint)((ulong)lVar7 >> 0x20) < *(uint *)(lVar12 + 0x18)) {
                return *(undefined8 *)(lVar12 + (lVar7 >> 0x20) * 8 + 0x20);
              }
LAB_038df6f0:
                    /* WARNING: Subroutine does not return */
              FUN_0373b7bc();
            }
            goto LAB_038df6ec;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(lVar7 + 0x18));
      }
    }
    return 0;
  }
LAB_038df6ec:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


