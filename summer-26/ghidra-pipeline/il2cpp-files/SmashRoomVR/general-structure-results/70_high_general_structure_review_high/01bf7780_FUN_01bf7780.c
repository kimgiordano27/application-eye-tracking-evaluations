/*
FUNCTION_NAME: FUN_01bf7780
ENTRY_POINT: 01bf7780
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_01bf7780(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  puVar1 = 
  Method_TMPro_TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7_System_Collections_IEnumerator_Reset__
  ;
  if ((DAT_03fed31d & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfInt32_Run__
                      );
    thunk_FUN_01ad9084(
                      Method_TMPro_TMP_SpriteAnimator_<DoSpriteAnimationInternal>d__7_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt32_Run__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt64_Run__
                      );
    thunk_FUN_01ad9084(Method_TMPro_TMP_SpriteAsset_<>c_<SortCharacterTable>b__41_0__);
    thunk_FUN_01ad9084(Method_TMPro_TMP_SpriteAsset_<>c_<SortGlyphTable>b__40_0__);
    DAT_03fed31d = 1;
  }
  lVar3 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar1);
  plVar6 = (long *)(param_1 + 0x20);
  *plVar6 = lVar3;
  thunk_FUN_01b4f09c(plVar6,lVar3);
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar3 = *plVar6;
    uVar4 = FUN_0391c2b8(*(long *)(param_1 + 0x28),0);
    puVar2 = Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfInt32_Run__;
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar3 == 0) goto LAB_01bf79dc;
    FUN_0324712c(lVar3,uVar4,0,0);
    uVar4 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar2);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar1);
    }
    uVar5 = FUN_03923030(uVar4,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    lVar3 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar2);
    puVar1 = Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt32_Run__;
    if (lVar3 == 0) goto LAB_01bf79dc;
    plVar7 = (long *)(lVar3 + 0x48);
    lVar3 = *plVar7;
    uVar4 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt32_Run__
                              );
    FUN_01bdf154(uVar4,param_1,
                 *(undefined8 *)Method_TMPro_TMP_SpriteAsset_<>c_<SortCharacterTable>b__41_0__,0);
    plVar6 = (long *)Oculus_Interaction_HandGrab_HandGrabPose__UsesHandPose(lVar3,uVar4,0);
    if (plVar6 == (long *)0x0) {
      *plVar7 = 0;
    }
    else {
      lVar3 = *(long *)puVar1;
      if ((*plVar6 != lVar3) || (*plVar7 = (long)plVar6, *plVar6 != lVar3)) goto LAB_01bf79b4;
    }
    thunk_FUN_01b4f09c(plVar7,plVar6);
    lVar3 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar2);
    puVar1 = Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt64_Run__;
    if (lVar3 != 0) {
      plVar7 = (long *)(lVar3 + 0x50);
      lVar3 = *plVar7;
      uVar4 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_System_Linq_Expressions_Interpreter_SubOvfInstruction_SubOvfUInt64_Run__
                                );
      FUN_01bdf1f4(uVar4,param_1,
                   *(undefined8 *)Method_TMPro_TMP_SpriteAsset_<>c_<SortGlyphTable>b__40_0__,0);
      plVar6 = (long *)Oculus_Interaction_HandGrab_HandGrabPose__UsesHandPose(lVar3,uVar4,0);
      if (plVar6 == (long *)0x0) {
        *plVar7 = 0;
      }
      else {
        lVar3 = *(long *)puVar1;
        if ((*plVar6 != lVar3) || (*plVar7 = (long)plVar6, *plVar6 != lVar3)) {
LAB_01bf79b4:
                    /* WARNING: Subroutine does not return */
          FUN_01b4841c(plVar6);
        }
      }
      thunk_FUN_01b4f09c(plVar7,plVar6);
      return;
    }
  }
LAB_01bf79dc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


