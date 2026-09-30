/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 033c3228
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin__GetTrackingCalibratedOrigin(long param_1,long *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar5;
  uint unaff_w26;
  uint unaff_w27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
  while (uVar1 = (**(code **)(param_1 + 0x1d8))(param_2,*(undefined8 *)(param_1 + 0x1e0)),
        unaff_x19 != 0) {
    if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x20) {
LAB_033c3354:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    uVar5 = *(undefined8 *)(unaff_x19 + unaff_x20 * 8 + 0x20);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar2 = FUN_033ab18c(uVar1,uVar5,0);
    if ((uVar2 & 1) != 0) goto LAB_033c3314;
    uVar4 = (uint)unaff_x20 + 1;
    if (unaff_w26 == uVar4) {
      do {
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar2 = FUN_033ab18c(in_stack_00000008,0,0);
        if ((uVar2 & 1) == 0) {
LAB_033c32f0:
          uVar2 = FUN_033087ec(unaff_x22,0,0);
          if ((uVar2 & 1) != 0) {
            uVar1 = thunk_FUN_01dd295c(StringLiteral_6016);
            uVar1 = FUN_033d6e4c(uVar1,0);
            thunk_FUN_01dd295c(StringLiteral_5868);
            uVar5 = thunk_FUN_01de27b8();
            FUN_033063d0(uVar5,uVar1,0);
            uVar1 = thunk_FUN_01dd295c(StringLiteral_8818);
                    /* WARNING: Subroutine does not return */
            FUN_01d7da3c(uVar5,uVar1);
          }
          if (*(uint *)(unaff_x21 + 0x18) <= unaff_w27) goto LAB_033c3354;
          unaff_x22 = *unaff_x29;
        }
        else {
          if (*(uint *)(unaff_x21 + 0x18) <= unaff_w27) goto LAB_033c3354;
          plVar3 = (long *)*unaff_x29;
          if (plVar3 == (long *)0x0) goto LAB_033c3350;
          uVar1 = (**(code **)(*plVar3 + 0x228))(plVar3,*(undefined8 *)(*plVar3 + 0x230));
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*unaff_x28);
          }
          uVar2 = FUN_033ab18c(in_stack_00000008,uVar1,0);
          if ((uVar2 & 1) == 0) goto LAB_033c32f0;
        }
LAB_033c3314:
        unaff_w27 = unaff_w27 + 1;
        if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)unaff_w27) {
          return unaff_x22;
        }
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_w27) goto LAB_033c3354;
        unaff_x29 = (long *)(unaff_x21 + (long)(int)unaff_w27 * 8 + 0x20);
        plVar3 = (long *)*unaff_x29;
        if (plVar3 == (long *)0x0) goto LAB_033c3350;
        unaff_x23 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
      } while ((int)unaff_w26 < 1);
      if (unaff_x23 == 0) break;
      uVar4 = 0;
    }
    if (*(uint *)(unaff_x23 + 0x18) <= uVar4) goto LAB_033c3354;
    unaff_x20 = (long)(int)uVar4;
    param_2 = *(long **)(unaff_x23 + unaff_x20 * 8 + 0x20);
    if (param_2 == (long *)0x0) break;
    param_1 = *param_2;
  }
LAB_033c3350:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


