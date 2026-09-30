/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRSpaceUser>
ENTRY_POINT: 01c7a568
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Array__InternalArray__IndexOf<OVRSpaceUser>(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
                    /* try { // try from 01c7a574 to 01d7a577 has its CatchHandler @ 01c7a57c */
  if ((DAT_03fed782 & 1) == 0) {
                    /* try { // try from 01c7a578 to 01d7a593 has its CatchHandler @ 01c7a44c */
                    /* catch() { ... } // from try @ 01c7a4c4 with catch @ 01c7a57c
                       catch() { ... } // from try @ 01c7a574 with catch @ 01c7a57c */
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Input_ReadOnlyHandJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_321);
    thunk_FUN_01ad9084(StringLiteral_322);
    thunk_FUN_01ad9084(StringLiteral_323);
    thunk_FUN_01ad9084(StringLiteral_324);
    thunk_FUN_01ad9084(StringLiteral_325);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed782 = 1;
  }
  lVar2 = FUN_0391c2b8(param_1,0);
  if (lVar2 != 0) {
    lVar2 = FUN_01ed712c(lVar2,*(undefined8 *)StringLiteral_325);
    plVar6 = (long *)(param_1 + 0xa0);
    *plVar6 = lVar2;
                    /* try { // try from 01c7a5fc to 01d7a68b has its CatchHandler @ 01c7a5fc
                       catch() { ... } // from try @ 01c7a5fc with catch @ 01c7a5fc
                       catch() { ... } // from try @ 01c7a6a4 with catch @ 01c7a5fc
                       catch() { ... } // from try @ 01c7ac78 with catch @ 01c7a5fc */
    thunk_FUN_01b4f09c(plVar6,lVar2);
    lVar2 = FUN_0391c2b8(param_1,0);
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar2 != 0) {
      lVar2 = FUN_01ed712c(lVar2,*(undefined8 *)StringLiteral_324);
      plVar5 = (long *)(param_1 + 0xa8);
      *plVar5 = lVar2;
      thunk_FUN_01b4f09c(plVar5,lVar2);
      uVar7 = *(undefined8 *)(param_1 + 0xa0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03922f24(uVar7,0,0);
      lVar2 = 0;
      if ((uVar3 & 1) != 0) {
        lVar2 = FUN_0391c2b8(param_1,0);
        if (lVar2 == 0) goto LAB_01c7a87c;
                    /* try { // try from 01c7a68c to 01d7a6a3 has its CatchHandler @ 01c7ac7c */
        lVar2 = FUN_01ed7044(lVar2,*(undefined8 *)StringLiteral_321);
        lVar4 = FUN_0391c2b8(param_1,0);
        if (lVar4 == 0) goto LAB_01c7a87c;
                    /* try { // try from 01c7a6a4 to 01d7ac73 has its CatchHandler @ 01c7a5fc */
        lVar4 = FUN_01ed7044(lVar4,*(undefined8 *)StringLiteral_323);
        *plVar6 = lVar4;
        thunk_FUN_01b4f09c(plVar6,lVar4);
        if (*plVar6 == 0) goto LAB_01c7a87c;
        *(undefined4 *)(*plVar6 + 0x298) = 0x43fa0000;
        lVar4 = FUN_01c7a358();
        if (lVar4 == 0) goto LAB_01c7a87c;
        uVar7 = *(undefined8 *)(lVar4 + 0x78);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        uVar3 = FUN_0391f968(uVar7,0,0);
        if ((uVar3 & 1) != 0) {
          in_stack_00000050 = *(undefined8 *)(param_1 + 0x38);
          in_stack_00000048 = *(undefined8 *)(param_1 + 0x30);
          in_stack_00000040 = *(undefined8 *)(param_1 + 0x28);
          if (lVar2 == 0) goto LAB_01c7a87c;
          in_stack_00000020 = in_stack_00000040;
          in_stack_00000028 = in_stack_00000048;
          in_stack_00000030 = in_stack_00000050;
          FUN_03801324(lVar2,&stack0x00000020,0);
          FUN_0380120c(lVar2);
        }
        lVar4 = FUN_01e8a9f8(param_1,*(undefined8 *)
                                      Method_Oculus_Interaction_Input_ReadOnlyHandJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                            );
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        uVar3 = FUN_03923030(lVar4,0);
        lVar2 = 0;
        if ((uVar3 & 1) != 0) {
          if (lVar4 == 0) goto LAB_01c7a87c;
          FUN_038fcc78(lVar4,1,0);
          lVar2 = FUN_038fd198(lVar4,0);
        }
      }
      lVar4 = *plVar5;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_03922f24(lVar4,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar4 = FUN_0391c2b8(param_1,0);
      if (lVar4 != 0) {
        lVar4 = FUN_01ed7044(lVar4,*(undefined8 *)StringLiteral_322);
        *plVar5 = lVar4;
        thunk_FUN_01b4f09c(plVar5,lVar4);
        lVar4 = *plVar5;
        if (lVar4 != 0) {
          *(undefined4 *)(lVar4 + 0x28) = 0x42c80000;
          FUN_0381694c(DAT_00b555a8,lVar4,0);
          if (lVar2 == 0) {
            return;
          }
          if (*plVar5 != 0) {
            plVar6 = (long *)(*plVar5 + 0x50);
            *plVar6 = lVar2;
            thunk_FUN_01b4f09c(plVar6,lVar2);
            if (*plVar5 != 0) {
              plVar6 = (long *)(*plVar5 + 0x58);
              *plVar6 = lVar2;
              thunk_FUN_01b4f09c(plVar6,lVar2);
              return;
            }
          }
        }
      }
    }
  }
LAB_01c7a87c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


