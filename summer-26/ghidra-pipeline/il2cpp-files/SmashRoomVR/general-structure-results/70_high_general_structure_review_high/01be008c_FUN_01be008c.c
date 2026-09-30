/*
FUNCTION_NAME: FUN_01be008c
ENTRY_POINT: 01be008c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01be008c(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined4 uVar11;
  
  if ((DAT_03fed2a9 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_105__);
    thunk_FUN_01ad9084(
                      Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfInt32_Run__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_106__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_107__);
    thunk_FUN_01ad9084(
                      Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt32_Run__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_108__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_11__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt64_Run__
                      );
    DAT_03fed2a9 = 1;
  }
  if (*(long *)(param_5 + 0x28) != 0) {
    uVar11 = FUN_03928fd8(*(long *)(param_5 + 0x28),0);
    *(undefined4 *)(param_5 + 0x3c) = uVar11;
    *(undefined4 *)(param_5 + 0x40) = param_2;
    *(undefined4 *)(param_5 + 0x44) = param_3;
    *(undefined4 *)(param_5 + 0x48) = param_4;
    puVar4 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_11__;
    puVar3 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_108__;
    puVar2 = Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfInt32_Run__;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(long *)(param_5 + 0x28) == 0) goto LAB_01be0368;
    uVar11 = FUN_03928280(*(long *)(param_5 + 0x28),0);
    *(undefined4 *)(param_5 + 0x30) = uVar11;
    *(undefined4 *)(param_5 + 0x34) = param_2;
    *(undefined4 *)(param_5 + 0x38) = param_3;
    uVar5 = FUN_01b47fd0(*(undefined8 *)puVar4,2);
    *(undefined8 *)(param_5 + 0x60) = uVar5;
    thunk_FUN_01b4f09c();
    uVar5 = FUN_01b47fd0(*(undefined8 *)puVar3,2);
    *(undefined8 *)(param_5 + 0x68) = uVar5;
    thunk_FUN_01b4f09c();
    lVar6 = FUN_01e8a9f8(param_5,*(undefined8 *)puVar2);
    plVar9 = (long *)(param_5 + 0x58);
    *plVar9 = lVar6;
    thunk_FUN_01b4f09c(plVar9,lVar6);
    lVar6 = *plVar9;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_03923030(lVar6,0);
    puVar2 = Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt32_Run__;
    if ((uVar7 & 1) != 0) {
      if (*plVar9 == 0) goto LAB_01be0368;
      plVar10 = (long *)(*plVar9 + 0x48);
      lVar6 = *plVar10;
      uVar5 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt32_Run__
                                );
      FUN_01bdf154(uVar5,param_5,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_106__);
      plVar8 = (long *)Oculus_Interaction_HandGrab_HandGrabPose__UsesHandPose(lVar6,uVar5,0);
      if (plVar8 == (long *)0x0) {
        *plVar10 = 0;
      }
      else {
        lVar6 = *(long *)puVar2;
        if ((*plVar8 != lVar6) || (*plVar10 = (long)plVar8, *plVar8 != lVar6)) goto LAB_01be02d8;
      }
      thunk_FUN_01b4f09c(plVar10,plVar8);
      puVar2 = Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt64_Run__;
      if (*plVar9 == 0) goto LAB_01be0368;
      plVar9 = (long *)(*plVar9 + 0x50);
      lVar6 = *plVar9;
      uVar5 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt64_Run__
                                );
      FUN_01bdf1f4(uVar5,param_5,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_107__);
      plVar8 = (long *)Oculus_Interaction_HandGrab_HandGrabPose__UsesHandPose(lVar6,uVar5,0);
      if (plVar8 == (long *)0x0) {
        *plVar9 = 0;
      }
      else {
        lVar6 = *(long *)puVar2;
        if ((*plVar8 != lVar6) || (*plVar9 = (long)plVar8, *plVar8 != lVar6)) {
LAB_01be02d8:
                    /* WARNING: Subroutine does not return */
          FUN_01b4841c(plVar8);
        }
      }
      thunk_FUN_01b4f09c(plVar9,plVar8);
    }
    puVar2 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_105__;
    uVar5 = FUN_01e8a9f8(param_5,*(undefined8 *)
                                  Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_105__
                        );
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar6);
    }
    uVar7 = FUN_03923030(uVar5,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    lVar6 = FUN_01e8a9f8(param_5,*(undefined8 *)puVar2);
    if (lVar6 != 0) {
      FUN_01be0028(lVar6,0);
      return;
    }
  }
LAB_01be0368:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


