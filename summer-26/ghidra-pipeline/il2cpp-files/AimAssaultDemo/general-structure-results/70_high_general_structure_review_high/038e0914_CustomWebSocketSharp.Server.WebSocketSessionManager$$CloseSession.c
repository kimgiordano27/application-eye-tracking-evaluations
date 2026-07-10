/*
FUNCTION_NAME: CustomWebSocketSharp.Server.WebSocketSessionManager$$CloseSession
ENTRY_POINT: 038e0914
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
  long lVar8;
  int iVar9;
  int iVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  ulong uVar11;
  int unaff_w23;
  ulong unaff_x24;
  ulong uVar12;
  undefined8 uVar13;
  uint unaff_w26;
  uint unaff_w27;
  long *unaff_x28;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  ulong in_stack_00000000;
  ulong in_stack_00000010;
  uint uStack000000000000001c;
  
  do {
    FUN_0458c578();
    lVar8 = *(long *)(unaff_x19 + 0x60);
    do {
      unaff_w22 = unaff_w22 + 1;
      if (lVar8 == 0) goto LAB_038e0ccc;
      while ((int)(*(int *)(lVar8 + 0x50) + unaff_w26) < unaff_w22) {
        do {
          uVar5 = DAT_015869a8;
          uVar4 = DAT_01586610;
          uVar3 = DAT_01586554;
          unaff_w26 = unaff_w26 + 1;
          if (unaff_w26 == unaff_w27) {
            do {
                    /* try { // try from 038e0940 to 039e0957 has its CatchHandler @ 038e0c6c */
              unaff_x24 = unaff_x24 + 1;
              if (unaff_x24 == in_stack_00000000) {
                if (unaff_w23 < 1) {
                  return;
                }
                uVar11 = 0;
                uStack000000000000001c = 0;
                goto LAB_038e097c;
              }
            } while ((int)unaff_w27 < 1);
            unaff_w26 = 0;
          }
          lVar8 = *(long *)(unaff_x19 + 0x70);
          if (lVar8 == 0) goto LAB_038e0ccc;
          if (*(uint *)(lVar8 + 0x18) <= unaff_x24) goto LAB_038e0cd0;
          lVar8 = *(long *)(lVar8 + unaff_x24 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_038e0ccc;
          if (*(uint *)(lVar8 + 0x18) <= unaff_w26) goto LAB_038e0cd0;
          lVar8 = *(long *)(lVar8 + (long)(int)unaff_w26 * 8 + 0x20);
          if (lVar8 == 0) goto LAB_038e0ccc;
          uVar13 = *(undefined8 *)(lVar8 + 0x10);
          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar11 = FUN_075aa744(uVar13,0,0);
        } while ((uVar11 & 1) == 0);
        lVar8 = *(long *)(unaff_x19 + 0x60);
        if (lVar8 == 0) goto LAB_038e0ccc;
        iVar9 = *(int *)(lVar8 + 0x48);
        for (iVar10 = (int)unaff_x24 - iVar9; iVar10 <= iVar9 + (int)unaff_x24; iVar10 = iVar10 + 1)
        {
          if ((-1 < iVar10) && (iVar10 < unaff_w23)) {
            if (unaff_x20 == 0) goto LAB_038e0ccc;
            FUN_0458c578();
            lVar8 = *(long *)(unaff_x19 + 0x60);
            if (lVar8 == 0) goto LAB_038e0ccc;
          }
          iVar9 = *(int *)(lVar8 + 0x48);
        }
        unaff_w22 = unaff_w26 - *(int *)(lVar8 + 0x50);
      }
    } while ((unaff_w22 < 0) || ((int)unaff_w27 <= unaff_w22));
  } while (unaff_x21 != 0);
LAB_038e0ccc:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
LAB_038e097c:
  if (0 < (int)unaff_w27) {
    uVar12 = 0;
    do {
      lVar8 = *(long *)(unaff_x19 + 0x70);
      if (lVar8 == 0) goto LAB_038e0ccc;
      if (*(uint *)(lVar8 + 0x18) <= uVar11) {
LAB_038e0cd0:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      lVar8 = *(long *)(lVar8 + uVar11 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_038e0ccc;
                    /* try { // try from 038e09a8 to 039e09b3 has its CatchHandler @ 038e0bf8 */
      if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_038e0cd0;
      lVar8 = *(long *)(lVar8 + uVar12 * 8 + 0x20);
      if (lVar8 != 0) {
        uVar13 = *(undefined8 *)(lVar8 + 0x10);
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
                    /* try { // try from 038e09dc to 039e0a0b has its CatchHandler @ 038e0bfc */
        uVar6 = FUN_075aa744(uVar13,0,0);
        iVar10 = *(int *)(unaff_x19 + 0x84);
        if (iVar10 < 0) {
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
          iVar10 = (int)uVar11 - iVar10;
          iVar9 = -iVar10;
          if (-1 < iVar10) {
            iVar9 = iVar10;
          }
          if (iVar9 < *(int *)(*(long *)(unaff_x19 + 0x60) + 0x48)) {
            bVar1 = false;
          }
          else {
            iVar10 = *(int *)(unaff_x19 + 0x84);
            if (DAT_08252e22 == '\0') {
              FUN_0373b518(PTR_DAT_07d863e8);
              DAT_08252e22 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_038e0ccc;
            iVar10 = (int)uVar11 - iVar10;
            iVar9 = -iVar10;
            if (-1 < iVar10) {
              iVar9 = iVar10;
            }
            bVar1 = iVar9 <= *(int *)(*(long *)(unaff_x19 + 0x60) + 0x4c);
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
          iVar9 = (int)uVar12 - uVar2;
          iVar10 = -iVar9;
          if (-1 < iVar9) {
            iVar10 = iVar9;
          }
          if (iVar10 < *(int *)(*(long *)(unaff_x19 + 0x60) + 0x50)) goto LAB_038e0b38;
          iVar10 = *(int *)(unaff_x19 + 0x88);
          if (DAT_08252e22 == '\0') {
            FUN_0373b518(PTR_DAT_07d863e8);
            DAT_08252e22 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_038e0ccc;
          iVar10 = (int)uVar12 - iVar10;
          iVar9 = -iVar10;
          if (-1 < iVar10) {
            iVar9 = iVar10;
          }
          uVar6 = (uint)(*(int *)(*(long *)(unaff_x19 + 0x60) + 0x54) < iVar9);
          if ((uStack000000000000001c & 1) != 0) goto LAB_038e0bcc;
LAB_038e0be0:
          unaff_x28 = (long *)PTR_DAT_07d86398;
          if ((bVar1) && (uVar6 == 0)) {
            if (unaff_x20 == 0) goto LAB_038e0ccc;
            uVar7 = System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRTask_CallbackWithState<object,_OVRTask_CombinedTaskDataWithCompletedTaskId<object>>>>__Dispose
                              (0);
            uVar14 = 0x3f800000;
            uVar16 = uVar4;
            uVar15 = uVar3;
            if ((uVar7 & 1) == 0) {
              if (unaff_x21 == 0) goto LAB_038e0ccc;
              uVar7 = System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRTask_CallbackWithState<object,_OVRTask_CombinedTaskDataWithCompletedTaskId<object>>>>__Dispose
                                (0x3f800000);
              uVar14 = 0x3f800000;
              if ((uVar7 & 1) == 0) {
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
        FUN_07564ff0(*(undefined4 *)(lVar8 + 0x18),*(undefined4 *)(lVar8 + 0x1c),
                     *(undefined4 *)(lVar8 + 0x20),uVar5,0);
      }
      uVar12 = uVar12 + 1;
    } while (in_stack_00000010 != uVar12);
  }
  uVar11 = uVar11 + 1;
  if (uVar11 == in_stack_00000000) {
    return;
  }
  goto LAB_038e097c;
}


