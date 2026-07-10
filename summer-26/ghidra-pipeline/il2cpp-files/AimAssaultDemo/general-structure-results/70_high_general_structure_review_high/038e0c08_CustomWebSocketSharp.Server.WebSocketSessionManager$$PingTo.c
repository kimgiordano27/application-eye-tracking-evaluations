/*
FUNCTION_NAME: CustomWebSocketSharp.Server.WebSocketSessionManager$$PingTo
ENTRY_POINT: 038e0c08
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void CustomWebSocketSharp_Server_WebSocketSessionManager__PingTo(undefined4 param_1)

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
  ulong unaff_x24;
  undefined8 uVar7;
  long unaff_x26;
  int unaff_w27;
  long *unaff_x28;
  ulong in_stack_00000000;
  ulong in_stack_00000010;
  
  do {
    uVar2 = System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRTask_CallbackWithState<object,_OVRTask_CombinedTaskDataWithCompletedTaskId<object>>>>__Dispose
                      (param_1);
    if ((uVar2 & 1) == 0) {
      if (unaff_x21 == 0) {
LAB_038e0ccc:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
                    /* catch() { ... } // from try @ 038e0940 with catch @ 038e0c6c
                       catch() { ... } // from try @ 038e0bec with catch @ 038e0c6c */
      System_Array_InternalEnumerator<Dictionary_Entry<Guid,_OVRTask_CallbackWithState<object,_OVRTask_CombinedTaskDataWithCompletedTaskId<object>>>>__Dispose
                (0x3f800000);
                    /* try { // try from 038e0c80 to 039e0cf7 has its CatchHandler @ 038e0c80
                       catch() { ... } // from try @ 038e0c80 with catch @ 038e0c80
                       catch() { ... } // from try @ 038e1048 with catch @ 038e0c80 */
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
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar2 = FUN_075aa744(uVar7,0,0);
    iVar6 = *(int *)(unaff_x19 + 0x84);
    if (iVar6 < 0) {
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
      iVar6 = (int)unaff_x22 - iVar6;
      iVar5 = -iVar6;
      if (-1 < iVar6) {
        iVar5 = iVar6;
      }
      if (iVar5 < *(int *)(*(long *)(unaff_x19 + 0x60) + 0x48)) {
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
    }
    uVar3 = *(uint *)(unaff_x19 + 0x88);
    if ((int)uVar3 < 0) {
LAB_038e0b38:
      unaff_x28 = (long *)PTR_DAT_07d86398;
      if ((uVar2 & 1) != 0) goto LAB_038e0c30;
      uVar3 = ~uVar3 >> 0x1f;
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
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_038e0ccc;
      iVar6 = (int)unaff_x24 - iVar6;
      iVar5 = -iVar6;
      if (-1 < iVar6) {
        iVar5 = iVar6;
      }
      uVar3 = (uint)(*(int *)(*(long *)(unaff_x19 + 0x60) + 0x54) < iVar5);
      unaff_x28 = (long *)PTR_DAT_07d86398;
      if ((uVar2 & 1) != 0) goto LAB_038e0c30;
    }
    param_1 = 0;
    unaff_x28 = (long *)PTR_DAT_07d86398;
    if ((!bVar1) || (uVar3 != 0)) goto LAB_038e0c30;
    if (unaff_x20 == 0) goto LAB_038e0ccc;
  } while( true );
}


