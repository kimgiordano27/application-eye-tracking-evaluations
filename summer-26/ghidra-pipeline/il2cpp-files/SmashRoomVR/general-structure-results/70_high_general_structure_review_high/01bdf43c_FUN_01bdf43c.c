/*
FUNCTION_NAME: FUN_01bdf43c
ENTRY_POINT: 01bdf43c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01bdf43c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  if ((DAT_03fed2a4 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_0__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_1__);
    thunk_FUN_01ad9084(
                      Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfInt32_Run__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(
                      Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt32_Run__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt64_Run__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_10__);
    DAT_03fed2a4 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x20) = 0;
    uVar6 = *(undefined8 *)(lVar5 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03923030(uVar6,0);
    if ((uVar3 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 0x20);
      uVar6 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
      FUN_0391fe00(uVar6,*(undefined8 *)
                          Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_10__,0);
      if (lVar5 == 0) goto LAB_01bdf70c;
      puVar7 = (undefined8 *)(lVar5 + 0x30);
      *puVar7 = uVar6;
      thunk_FUN_01b4f09c(puVar7,uVar6);
    }
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar5 = FUN_038fe800(*(long *)(param_1 + 0x28),0), lVar5 == 0)) goto LAB_01bdf70c;
    FUN_038ffab8(lVar5,0xf9e,0);
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar5 = FUN_0391c27c(*(long *)(param_1 + 0x28),0), lVar5 == 0)) goto LAB_01bdf70c;
    FUN_039294c8(lVar5,0,0);
    puVar2 = Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfInt32_Run__;
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_01bdf70c;
    FUN_038fe3fc(*(long *)(param_1 + 0x28),0,0);
    uVar6 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar2);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar5);
    }
    uVar3 = FUN_03923030(uVar6,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar5 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar2);
    puVar1 = Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt32_Run__;
    if (lVar5 == 0) goto LAB_01bdf70c;
    plVar8 = (long *)(lVar5 + 0x48);
    lVar5 = *plVar8;
    uVar6 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt32_Run__
                              );
    FUN_01bdf154(uVar6,param_1,
                 *(undefined8 *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_0__)
    ;
    plVar4 = (long *)Oculus_Interaction_HandGrab_HandGrabPose__UsesHandPose(lVar5,uVar6,0);
    if (plVar4 == (long *)0x0) {
      *plVar8 = 0;
    }
    else {
      lVar5 = *(long *)puVar1;
      if ((*plVar4 != lVar5) || (*plVar8 = (long)plVar4, *plVar4 != lVar5)) goto LAB_01bdf6e4;
    }
    thunk_FUN_01b4f09c(plVar8,plVar4);
    lVar5 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar2);
    puVar1 = Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt64_Run__;
    if (lVar5 != 0) {
      plVar8 = (long *)(lVar5 + 0x50);
      lVar5 = *plVar8;
      uVar6 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt64_Run__
                                );
      FUN_01bdf1f4(uVar6,param_1,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_1__);
      plVar4 = (long *)Oculus_Interaction_HandGrab_HandGrabPose__UsesHandPose(lVar5,uVar6,0);
      if (plVar4 == (long *)0x0) {
        *plVar8 = 0;
      }
      else {
        lVar5 = *(long *)puVar1;
        if ((*plVar4 != lVar5) || (*plVar8 = (long)plVar4, *plVar4 != lVar5)) {
LAB_01bdf6e4:
                    /* WARNING: Subroutine does not return */
          FUN_01b4841c(plVar4);
        }
      }
      thunk_FUN_01b4f09c(plVar8,plVar4);
      return;
    }
  }
LAB_01bdf70c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


