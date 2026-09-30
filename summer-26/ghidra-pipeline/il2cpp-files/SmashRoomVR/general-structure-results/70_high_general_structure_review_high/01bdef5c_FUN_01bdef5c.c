/*
FUNCTION_NAME: FUN_01bdef5c
ENTRY_POINT: 01bdef5c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01bdef5c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  puVar2 = Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfInt32_Run__;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fed2a2 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfInt64_Run__
                      );
    thunk_FUN_01ad9084(
                      Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt16_Run__
                      );
    thunk_FUN_01ad9084(
                      Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfInt32_Run__
                      );
    thunk_FUN_01ad9084(
                      Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt32_Run__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt64_Run__
                      );
    DAT_03fed2a2 = 1;
  }
  uVar3 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  uVar4 = FUN_03923030(uVar3,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar5 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar2);
  puVar1 = Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt32_Run__;
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    lVar5 = *plVar7;
    uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt32_Run__
                              );
    FUN_01bdf154(uVar3,param_1,
                 *(undefined8 *)
                  Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfInt64_Run__);
    plVar6 = (long *)Oculus_Interaction_HandGrab_HandGrabPose__UsesHandPose(lVar5,uVar3,0);
    if (plVar6 == (long *)0x0) {
      *plVar7 = 0;
    }
    else {
      lVar5 = *(long *)puVar1;
      if ((*plVar6 != lVar5) || (*plVar7 = (long)plVar6, *plVar6 != lVar5)) goto LAB_01bdf128;
    }
    thunk_FUN_01b4f09c(plVar7,plVar6);
    lVar5 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar2);
    puVar1 = Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt64_Run__;
    if (lVar5 != 0) {
      plVar7 = (long *)(lVar5 + 0x50);
      lVar5 = *plVar7;
      uVar3 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt64_Run__
                                );
      FUN_01bdf1f4(uVar3,param_1,
                   *(undefined8 *)
                    Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt16_Run__)
      ;
      plVar6 = (long *)Oculus_Interaction_HandGrab_HandGrabPose__UsesHandPose(lVar5,uVar3,0);
      if (plVar6 == (long *)0x0) {
        *plVar7 = 0;
      }
      else {
        lVar5 = *(long *)puVar1;
        if ((*plVar6 != lVar5) || (*plVar7 = (long)plVar6, *plVar6 != lVar5)) {
LAB_01bdf128:
                    /* WARNING: Subroutine does not return */
          FUN_01b4841c(plVar6);
        }
      }
      thunk_FUN_01b4f09c(plVar7,plVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


