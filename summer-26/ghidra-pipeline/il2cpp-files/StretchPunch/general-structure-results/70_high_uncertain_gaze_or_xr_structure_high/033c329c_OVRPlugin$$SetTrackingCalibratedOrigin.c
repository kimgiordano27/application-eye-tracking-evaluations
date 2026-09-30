/*
FUNCTION_NAME: OVRPlugin$$SetTrackingCalibratedOrigin
ENTRY_POINT: 033c329c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin__SetTrackingCalibratedOrigin(ulong param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar6;
  uint unaff_w26;
  uint unaff_w27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
  do {
    if ((param_1 & 1) == 0) {
LAB_033c32f0:
      uVar4 = FUN_033087ec(unaff_x22,0,0);
      if ((uVar4 & 1) != 0) {
        uVar3 = thunk_FUN_01dd295c(StringLiteral_6016);
        uVar3 = FUN_033d6e4c(uVar3,0);
        thunk_FUN_01dd295c(StringLiteral_5868);
        uVar6 = thunk_FUN_01de27b8();
        FUN_033063d0(uVar6,uVar3,0);
        uVar3 = thunk_FUN_01dd295c(StringLiteral_8818);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar6,uVar3);
      }
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w27) {
LAB_033c3354:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      unaff_x22 = *unaff_x29;
    }
    else {
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w27) goto LAB_033c3354;
      plVar2 = (long *)*unaff_x29;
      if (plVar2 == (long *)0x0) {
LAB_033c3350:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar3 = (**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*unaff_x28);
      }
      uVar4 = FUN_033ab18c(in_stack_00000008,uVar3,0);
      if ((uVar4 & 1) == 0) goto LAB_033c32f0;
    }
    while( true ) {
      unaff_w27 = unaff_w27 + 1;
      if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)unaff_w27) {
        return unaff_x22;
      }
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w27) goto LAB_033c3354;
      unaff_x29 = (long *)(unaff_x21 + (long)(int)unaff_w27 * 8 + 0x20);
      plVar2 = (long *)*unaff_x29;
      if (plVar2 == (long *)0x0) goto LAB_033c3350;
      lVar1 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
      if ((int)unaff_w26 < 1) break;
      if (lVar1 == 0) goto LAB_033c3350;
      uVar5 = 0;
      while( true ) {
        if (*(uint *)(lVar1 + 0x18) <= uVar5) goto LAB_033c3354;
        plVar2 = *(long **)(lVar1 + (long)(int)uVar5 * 8 + 0x20);
        if (plVar2 == (long *)0x0) goto LAB_033c3350;
        uVar3 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
        if (unaff_x19 == 0) goto LAB_033c3350;
        if (*(uint *)(unaff_x19 + 0x18) <= uVar5) goto LAB_033c3354;
        uVar6 = *(undefined8 *)(unaff_x19 + (long)(int)uVar5 * 8 + 0x20);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar4 = FUN_033ab18c(uVar3,uVar6,0);
        if ((uVar4 & 1) != 0) break;
        uVar5 = uVar5 + 1;
        if (unaff_w26 == uVar5) goto LAB_033c327c;
      }
    }
LAB_033c327c:
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    param_1 = FUN_033ab18c(in_stack_00000008,0,0);
  } while( true );
}


