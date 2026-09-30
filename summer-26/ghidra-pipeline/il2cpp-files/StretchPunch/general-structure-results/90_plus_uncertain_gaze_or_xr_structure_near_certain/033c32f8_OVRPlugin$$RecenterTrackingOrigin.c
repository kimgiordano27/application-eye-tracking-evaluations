/*
FUNCTION_NAME: OVRPlugin$$RecenterTrackingOrigin
ENTRY_POINT: 033c32f8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin__RecenterTrackingOrigin(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar6;
  uint unaff_w26;
  uint unaff_w27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
  do {
    uVar4 = FUN_033087ec(param_1,param_2,0);
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
    param_1 = *unaff_x29;
LAB_033c3314:
    do {
      unaff_w27 = unaff_w27 + 1;
      if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)unaff_w27) {
                    /* try { // try from 033c3330 to 034c333b has its CatchHandler @ 033c39a4 */
        return param_1;
      }
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w27) goto LAB_033c3354;
      unaff_x29 = (long *)(unaff_x21 + (long)(int)unaff_w27 * 8 + 0x20);
      plVar1 = (long *)*unaff_x29;
      if (plVar1 == (long *)0x0) {
LAB_033c3350:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar2 = (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
      if (0 < (int)unaff_w26) {
        if (lVar2 == 0) goto LAB_033c3350;
        uVar5 = 0;
        do {
          if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_033c3354;
          plVar1 = *(long **)(lVar2 + (long)(int)uVar5 * 8 + 0x20);
          if (plVar1 == (long *)0x0) goto LAB_033c3350;
          uVar3 = (**(code **)(*plVar1 + 0x1d8))(plVar1,*(undefined8 *)(*plVar1 + 0x1e0));
          if (unaff_x19 == 0) goto LAB_033c3350;
          if (*(uint *)(unaff_x19 + 0x18) <= uVar5) goto LAB_033c3354;
          uVar6 = *(undefined8 *)(unaff_x19 + (long)(int)uVar5 * 8 + 0x20);
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar4 = FUN_033ab18c(uVar3,uVar6,0);
          if ((uVar4 & 1) != 0) goto LAB_033c3314;
          uVar5 = uVar5 + 1;
        } while (unaff_w26 != uVar5);
      }
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar4 = FUN_033ab18c(in_stack_00000008,0,0);
      if ((uVar4 & 1) == 0) break;
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w27) goto LAB_033c3354;
      plVar1 = (long *)*unaff_x29;
      if (plVar1 == (long *)0x0) goto LAB_033c3350;
      uVar3 = (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230));
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*unaff_x28);
      }
      uVar4 = FUN_033ab18c(in_stack_00000008,uVar3,0);
    } while ((uVar4 & 1) != 0);
    param_2 = 0;
  } while( true );
}


