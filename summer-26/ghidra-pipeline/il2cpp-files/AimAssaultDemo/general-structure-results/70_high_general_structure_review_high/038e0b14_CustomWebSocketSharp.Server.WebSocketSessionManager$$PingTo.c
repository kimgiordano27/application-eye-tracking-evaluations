/*
FUNCTION_NAME: CustomWebSocketSharp.Server.WebSocketSessionManager$$PingTo
ENTRY_POINT: 038e0b14
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void CustomWebSocketSharp_Server_WebSocketSessionManager__PingTo(long param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  int in_w9;
  int iVar4;
  int iVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  ulong unaff_x24;
  uint unaff_w25;
  undefined8 uVar6;
  long unaff_x26;
  int unaff_w27;
  long *plVar7;
  uint unaff_w29;
  ulong in_stack_00000000;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while( true ) {
    iVar4 = (int)unaff_x24 + in_w9;
    iVar5 = -iVar4;
    if (-1 < iVar4) {
      iVar5 = iVar4;
    }
    if (*(int *)(param_1 + 0x50) <= iVar5) break;
    do {
      plVar7 = (long *)PTR_DAT_07d86398;
      if ((unaff_w25 & 1) == 0) {
        uVar2 = ~unaff_w23 >> 0x1f;
LAB_038e0be0:
        plVar7 = (long *)PTR_DAT_07d86398;
                    /* try { // try from 038e0bec to 039e0bef has its CatchHandler @ 038e0c6c */
                    /* try { // try from 038e0bf0 to 039e0c7f has its CatchHandler @ 038e08b8 */
                    /* catch() { ... } // from try @ 038e0acc with catch @ 038e0bf4 */
        if ((unaff_w29 != 0) && (uVar2 == 0)) {
                    /* catch() { ... } // from try @ 038e09a8 with catch @ 038e0bf8 */
          if (unaff_x20 == 0) goto LAB_038e0ccc;
                    /* catch() { ... } // from try @ 038e09dc with catch @ 038e0bfc */
          uVar1 = System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRTask_CallbackWithState<object,_OVRTask_CombinedTaskDataWithCompletedTaskId<object>>>>__Dispose
                            (0);
          if ((uVar1 & 1) == 0) {
            if (unaff_x21 == 0) goto LAB_038e0ccc;
            System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRTask_CallbackWithState<object,_OVRTask_CombinedTaskDataWithCompletedTaskId<object>>>>__Dispose
                      (0x3f800000);
          }
        }
      }
LAB_038e0c30:
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
        lVar3 = *(long *)(unaff_x19 + 0x70);
        if (lVar3 == 0) goto LAB_038e0ccc;
        if (*(uint *)(lVar3 + 0x18) <= unaff_x22) {
LAB_038e0cd0:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        lVar3 = *(long *)(lVar3 + unaff_x22 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_038e0ccc;
        if (*(uint *)(lVar3 + 0x18) <= unaff_x24) goto LAB_038e0cd0;
        unaff_x26 = *(long *)(lVar3 + unaff_x24 * 8 + 0x20);
      } while (unaff_x26 == 0);
      uVar6 = *(undefined8 *)(unaff_x26 + 0x10);
      if (*(int *)(*plVar7 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      unaff_w25 = FUN_075aa744(uVar6,0,0);
      iVar5 = *(int *)(unaff_x19 + 0x84);
      if (iVar5 < 0) {
        unaff_w29 = 1;
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
        iVar5 = (int)unaff_x22 - iVar5;
        iVar4 = -iVar5;
        if (-1 < iVar5) {
          iVar4 = iVar5;
        }
        if (iVar4 < *(int *)(*(long *)(unaff_x19 + 0x60) + 0x48)) {
          unaff_w29 = 0;
        }
        else {
          iVar5 = *(int *)(unaff_x19 + 0x84);
          if (DAT_08252e22 == '\0') {
            FUN_0373b518(PTR_DAT_07d863e8);
            DAT_08252e22 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_038e0ccc;
          iVar5 = (int)unaff_x22 - iVar5;
          iVar4 = -iVar5;
          if (-1 < iVar5) {
            iVar4 = iVar5;
          }
          unaff_w29 = (uint)(iVar4 <= *(int *)(*(long *)(unaff_x19 + 0x60) + 0x4c));
        }
      }
      unaff_w23 = *(uint *)(unaff_x19 + 0x88);
      if (-1 < (int)unaff_w23) {
        in_stack_00000018._4_4_ = unaff_w25;
      }
    } while ((int)unaff_w23 < 0);
    if (DAT_08252e22 == '\0') {
      FUN_0373b518(PTR_DAT_07d863e8);
      DAT_08252e22 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    param_1 = *(long *)(unaff_x19 + 0x60);
    if (param_1 == 0) goto LAB_038e0ccc;
    in_w9 = -unaff_w23;
  }
  iVar5 = *(int *)(unaff_x19 + 0x88);
  if (DAT_08252e22 == '\0') {
    FUN_0373b518(PTR_DAT_07d863e8);
    DAT_08252e22 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    iVar5 = (int)unaff_x24 - iVar5;
    iVar4 = -iVar5;
    if (-1 < iVar5) {
      iVar4 = iVar5;
    }
    uVar2 = (uint)(*(int *)(*(long *)(unaff_x19 + 0x60) + 0x54) < iVar4);
    plVar7 = (long *)PTR_DAT_07d86398;
    if ((in_stack_00000018._4_4_ & 1) == 0) goto LAB_038e0be0;
    goto LAB_038e0c30;
  }
LAB_038e0ccc:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


