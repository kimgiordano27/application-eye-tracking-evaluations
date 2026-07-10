/*
FUNCTION_NAME: CustomWebSocketSharp.Server.WebSocketSessionManager$$CloseSession
ENTRY_POINT: 038e082c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void CustomWebSocketSharp_Server_WebSocketSessionManager__CloseSession(void)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar12;
  int unaff_w23;
  ulong unaff_x24;
  ulong uVar13;
  uint unaff_w27;
  long *unaff_x28;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  ulong in_stack_00000000;
  ulong in_stack_00000010;
  uint uStack000000000000001c;
  
  do {
    if (0 < (int)unaff_w27) {
      uVar6 = 0;
      do {
        lVar9 = *(long *)(unaff_x19 + 0x70);
        if (lVar9 == 0) goto LAB_038e0ccc;
        if (*(uint *)(lVar9 + 0x18) <= unaff_x24) goto LAB_038e0cd0;
        lVar9 = *(long *)(lVar9 + unaff_x24 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_038e0ccc;
        if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_038e0cd0;
        lVar9 = *(long *)(lVar9 + (long)(int)uVar6 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_038e0ccc;
        uVar12 = *(undefined8 *)(lVar9 + 0x10);
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar7 = FUN_075aa744(uVar12,0,0);
        if ((uVar7 & 1) != 0) {
          lVar9 = *(long *)(unaff_x19 + 0x60);
          if (lVar9 == 0) goto LAB_038e0ccc;
          iVar10 = *(int *)(lVar9 + 0x48);
          for (iVar11 = (int)unaff_x24 - iVar10; iVar11 <= iVar10 + (int)unaff_x24;
              iVar11 = iVar11 + 1) {
                    /* try { // try from 038e08b8 to 039e093f has its CatchHandler @ 038e08b8
                       catch() { ... } // from try @ 038e08b8 with catch @ 038e08b8
                       catch() { ... } // from try @ 038e0bf0 with catch @ 038e08b8 */
            if ((-1 < iVar11) && (iVar11 < unaff_w23)) {
              if (unaff_x20 == 0) goto LAB_038e0ccc;
              FUN_0458c578();
              lVar9 = *(long *)(unaff_x19 + 0x60);
              if (lVar9 == 0) goto LAB_038e0ccc;
            }
            iVar10 = *(int *)(lVar9 + 0x48);
          }
          iVar11 = uVar6 - *(int *)(lVar9 + 0x50);
          while (iVar11 <= (int)(*(int *)(lVar9 + 0x50) + uVar6)) {
            if ((-1 < iVar11) && (iVar11 < (int)unaff_w27)) {
              if (unaff_x21 == 0) goto LAB_038e0ccc;
              FUN_0458c578();
              lVar9 = *(long *)(unaff_x19 + 0x60);
            }
            iVar11 = iVar11 + 1;
            if (lVar9 == 0) goto LAB_038e0ccc;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != unaff_w27);
    }
    uVar5 = DAT_015869a8;
    uVar4 = DAT_01586610;
    uVar3 = DAT_01586554;
    unaff_x24 = unaff_x24 + 1;
  } while (unaff_x24 != in_stack_00000000);
  if (0 < unaff_w23) {
    uVar7 = 0;
    uStack000000000000001c = 0;
    do {
      if (0 < (int)unaff_w27) {
        uVar13 = 0;
        do {
          lVar9 = *(long *)(unaff_x19 + 0x70);
          if (lVar9 == 0) {
LAB_038e0ccc:
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar7) {
LAB_038e0cd0:
                    /* WARNING: Subroutine does not return */
            FUN_0373b7bc();
          }
          lVar9 = *(long *)(lVar9 + uVar7 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_038e0ccc;
          if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_038e0cd0;
          lVar9 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
          if (lVar9 != 0) {
            uVar12 = *(undefined8 *)(lVar9 + 0x10);
            if (*(int *)(*unaff_x28 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            uVar6 = FUN_075aa744(uVar12,0,0);
            iVar11 = *(int *)(unaff_x19 + 0x84);
            if (iVar11 < 0) {
              bVar1 = true;
            }
            else {
              if (DAT_08252e22 == '\0') {
                FUN_0373b518(PTR_DAT_07d863e8);
                DAT_08252e22 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_038e0ccc;
              iVar11 = (int)uVar7 - iVar11;
              iVar10 = -iVar11;
              if (-1 < iVar11) {
                iVar10 = iVar11;
              }
              if (iVar10 < *(int *)(*(long *)(unaff_x19 + 0x60) + 0x48)) {
                bVar1 = false;
              }
              else {
                iVar11 = *(int *)(unaff_x19 + 0x84);
                if (DAT_08252e22 == '\0') {
                  FUN_0373b518(PTR_DAT_07d863e8);
                  DAT_08252e22 = '\x01';
                }
                if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                }
                if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_038e0ccc;
                iVar11 = (int)uVar7 - iVar11;
                iVar10 = -iVar11;
                if (-1 < iVar11) {
                  iVar10 = iVar11;
                }
                bVar1 = iVar10 <= *(int *)(*(long *)(unaff_x19 + 0x60) + 0x4c);
              }
            }
            uVar2 = *(uint *)(unaff_x19 + 0x88);
            if (-1 < (int)uVar2) {
              uStack000000000000001c = uVar6;
            }
            if ((int)uVar2 < 0) {
LAB_038e0b38:
              if ((uVar6 & 1) == 0) {
                uVar6 = ~uVar2 >> 0x1f;
                goto LAB_038e0be0;
              }
LAB_038e0bcc:
              unaff_x28 = (long *)PTR_DAT_07d86398;
              uVar14 = 0x3f800000;
              uVar16 = 0;
              uVar15 = 0;
            }
            else {
              if (DAT_08252e22 == '\0') {
                FUN_0373b518(PTR_DAT_07d863e8);
                DAT_08252e22 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_038e0ccc;
              iVar10 = (int)uVar13 - uVar2;
              iVar11 = -iVar10;
              if (-1 < iVar10) {
                iVar11 = iVar10;
              }
              if (iVar11 < *(int *)(*(long *)(unaff_x19 + 0x60) + 0x50)) goto LAB_038e0b38;
              iVar11 = *(int *)(unaff_x19 + 0x88);
              if (DAT_08252e22 == '\0') {
                FUN_0373b518(PTR_DAT_07d863e8);
                DAT_08252e22 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_038e0ccc;
              iVar11 = (int)uVar13 - iVar11;
              iVar10 = -iVar11;
              if (-1 < iVar11) {
                iVar10 = iVar11;
              }
              uVar6 = (uint)(*(int *)(*(long *)(unaff_x19 + 0x60) + 0x54) < iVar10);
              if ((uStack000000000000001c & 1) != 0) goto LAB_038e0bcc;
LAB_038e0be0:
              unaff_x28 = (long *)PTR_DAT_07d86398;
              if ((bVar1) && (uVar6 == 0)) {
                if (unaff_x20 == 0) goto LAB_038e0ccc;
                uVar8 = System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRTask_CallbackWithState<object,_OVRTask_CombinedTaskDataWithCompletedTaskId<object>>>>__Dispose
                                  (0);
                uVar14 = 0x3f800000;
                uVar16 = uVar4;
                uVar15 = uVar3;
                if ((uVar8 & 1) == 0) {
                  if (unaff_x21 == 0) goto LAB_038e0ccc;
                  uVar8 = System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRTask_CallbackWithState<object,_OVRTask_CombinedTaskDataWithCompletedTaskId<object>>>>__Dispose
                                    (0x3f800000);
                  uVar14 = 0x3f800000;
                  if ((uVar8 & 1) == 0) {
                    uVar14 = 0;
                    uVar16 = 0;
                    uVar15 = 0x3f800000;
                  }
                }
              }
              else {
                uVar14 = 0;
                uVar16 = 0x3f800000;
                uVar15 = 0;
              }
            }
            FUN_07565558(uVar14,uVar15,uVar16,0x3f800000,0);
            FUN_07564ff0(*(undefined4 *)(lVar9 + 0x18),*(undefined4 *)(lVar9 + 0x1c),
                         *(undefined4 *)(lVar9 + 0x20),uVar5,0);
          }
          uVar13 = uVar13 + 1;
        } while (in_stack_00000010 != uVar13);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != in_stack_00000000);
  }
  return;
}


