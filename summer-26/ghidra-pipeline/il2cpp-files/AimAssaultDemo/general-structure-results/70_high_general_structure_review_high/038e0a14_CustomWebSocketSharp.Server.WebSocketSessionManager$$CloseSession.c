/*
FUNCTION_NAME: CustomWebSocketSharp.Server.WebSocketSessionManager$$CloseSession
ENTRY_POINT: 038e0a14
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void CustomWebSocketSharp_Server_WebSocketSessionManager__CloseSession(void)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  int unaff_w23;
  ulong unaff_x24;
  uint unaff_w25;
  undefined8 uVar7;
  long unaff_x26;
  int unaff_w27;
  long *plVar8;
  ulong in_stack_00000000;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x038e0a14:
  if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    iVar5 = (int)unaff_x22 - unaff_w23;
    iVar6 = -iVar5;
    if (-1 < iVar5) {
      iVar6 = iVar5;
    }
    if (iVar6 < *(int *)(*(long *)(unaff_x19 + 0x60) + 0x48)) {
      bVar1 = false;
    }
    else {
      iVar6 = *(int *)(unaff_x19 + 0x84);
      if (DAT_08252e22 == '\0') {
        FUN_0373b518(PTR_DAT_07d863e8);
        DAT_08252e22 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_038e0ccc;
      iVar6 = (int)unaff_x22 - iVar6;
      iVar5 = -iVar6;
      if (-1 < iVar6) {
        iVar5 = iVar6;
      }
      bVar1 = iVar5 <= *(int *)(*(long *)(unaff_x19 + 0x60) + 0x4c);
    }
    do {
      uVar3 = *(uint *)(unaff_x19 + 0x88);
      if (-1 < (int)uVar3) {
        in_stack_00000018._4_4_ = unaff_w25;
      }
      if ((int)uVar3 < 0) {
LAB_038e0b38:
        plVar8 = (long *)PTR_DAT_07d86398;
        if ((unaff_w25 & 1) == 0) {
          uVar3 = ~uVar3 >> 0x1f;
LAB_038e0be0:
          plVar8 = (long *)PTR_DAT_07d86398;
          if ((bVar1) && (uVar3 == 0)) {
            if (unaff_x20 == 0) break;
            uVar2 = System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRTask_CallbackWithState<object,_OVRTask_CombinedTaskDataWithCompletedTaskId<object>>>>__Dispose
                              (0);
            if ((uVar2 & 1) == 0) {
              if (unaff_x21 == 0) break;
              System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRTask_CallbackWithState<object,_OVRTask_CombinedTaskDataWithCompletedTaskId<object>>>>__Dispose
                        (0x3f800000);
            }
          }
        }
      }
      else {
                    /* try { // try from 038e0acc to 039e0acf has its CatchHandler @ 038e0bf4 */
        if (DAT_08252e22 == '\0') {
          FUN_0373b518(PTR_DAT_07d863e8);
          DAT_08252e22 = '\x01';
        }
                    /* try { // try from 038e0afc to 039e0b53 has its CatchHandler @ 038e0c2c */
        if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        if (*(long *)(unaff_x19 + 0x60) == 0) break;
        iVar5 = (int)unaff_x24 - uVar3;
        iVar6 = -iVar5;
        if (-1 < iVar5) {
          iVar6 = iVar5;
        }
        if (iVar6 < *(int *)(*(long *)(unaff_x19 + 0x60) + 0x50)) goto LAB_038e0b38;
        iVar6 = *(int *)(unaff_x19 + 0x88);
        if (DAT_08252e22 == '\0') {
          FUN_0373b518(PTR_DAT_07d863e8);
          DAT_08252e22 = '\x01';
        }
        if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        if (*(long *)(unaff_x19 + 0x60) == 0) break;
        iVar6 = (int)unaff_x24 - iVar6;
        iVar5 = -iVar6;
        if (-1 < iVar6) {
          iVar5 = iVar6;
        }
        uVar3 = (uint)(*(int *)(*(long *)(unaff_x19 + 0x60) + 0x54) < iVar5);
        plVar8 = (long *)PTR_DAT_07d86398;
        if ((in_stack_00000018._4_4_ & 1) == 0) goto LAB_038e0be0;
      }
      FUN_07565558(0);
      FUN_07564ff0(*(undefined4 *)(unaff_x26 + 0x18),*(undefined4 *)(unaff_x26 + 0x1c),
                   *(undefined4 *)(unaff_x26 + 0x20),0);
      do {
        unaff_x24 = unaff_x24 + 1;
        if (in_stack_00000010 == unaff_x24) {
          do {
            unaff_x22 = unaff_x22 + 1;
            if (unaff_x22 == in_stack_00000000) {
              return;
            }
          } while (unaff_w27 < 1);
          unaff_x24 = 0;
        }
        lVar4 = *(long *)(unaff_x19 + 0x70);
        if (lVar4 == 0) goto LAB_038e0ccc;
        if (*(uint *)(lVar4 + 0x18) <= unaff_x22) {
LAB_038e0cd0:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        lVar4 = *(long *)(lVar4 + unaff_x22 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_038e0ccc;
        if (*(uint *)(lVar4 + 0x18) <= unaff_x24) goto LAB_038e0cd0;
        unaff_x26 = *(long *)(lVar4 + unaff_x24 * 8 + 0x20);
      } while (unaff_x26 == 0);
      uVar7 = *(undefined8 *)(unaff_x26 + 0x10);
      if (*(int *)(*plVar8 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      unaff_w25 = FUN_075aa744(uVar7,0,0);
      unaff_w23 = *(int *)(unaff_x19 + 0x84);
      if (-1 < unaff_w23) goto code_r0x038e09f0;
      bVar1 = true;
    } while( true );
  }
LAB_038e0ccc:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
code_r0x038e09f0:
  if (DAT_08252e22 == '\0') {
    FUN_0373b518(PTR_DAT_07d863e8);
    DAT_08252e22 = '\x01';
  }
  goto code_r0x038e0a14;
}


