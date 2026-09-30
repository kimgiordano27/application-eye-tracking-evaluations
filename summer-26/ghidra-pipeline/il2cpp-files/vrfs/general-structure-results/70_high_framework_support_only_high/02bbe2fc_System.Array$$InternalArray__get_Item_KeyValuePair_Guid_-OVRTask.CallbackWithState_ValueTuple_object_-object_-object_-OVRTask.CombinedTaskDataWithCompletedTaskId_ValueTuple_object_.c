/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<KeyValuePair<Guid,-OVRTask.CallbackWithState<ValueTuple<object,-object,-object>,-OVRTask.CombinedTaskDataWithCompletedTaskId<ValueTuple<object,-object,-object>>>>>
ENTRY_POINT: 02bbe2fc
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16]
System_Array__InternalArray__get_Item<KeyValuePair<Guid,_OVRTask_CallbackWithState<ValueTuple<object,_object,_object>,_OVRTask_CombinedTaskDataWithCompletedTaskId<ValueTuple<object,_object,_object>>>>>
          (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 unaff_d8;
  ulong unaff_d9;
  undefined8 in_register_00005128;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000088;
  
  uVar2 = FUN_051d94d4(param_1,param_2,0);
  if ((uVar2 & 1) == 0) {
    if (DAT_0722a13e == '\0') {
      thunk_FUN_0159f088(PTR_DAT_06e50440);
      DAT_0722a13e = '\x01';
    }
    if (unaff_x20 == 0) goto LAB_02bbe4dc;
    unaff_d9 = (ulong)**(uint **)(*(long *)PTR_DAT_06e50440 + 0xb8);
    in_register_00005128 = 0;
    iVar1 = Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>___ctor();
    if (iVar1 == 0) {
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_02bbe4dc;
      lVar4 = FUN_051e5130(*(long *)(unaff_x19 + 0x100),0);
    }
    else {
      uVar3 = FUN_036e1620();
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_016466fc(*unaff_x21);
      }
      uVar2 = FUN_051d2ac0(uVar3,0,0);
      if ((uVar2 & 1) == 0) goto LAB_02bbe4b8;
      lVar4 = FUN_036e1620();
      if (lVar4 == 0) goto LAB_02bbe4dc;
      uVar3 = 0;
      FUN_051d81ac(&stack0x00000018,lVar4,0);
      in_stack_00000048 = in_stack_00000020;
      in_stack_00000040 = in_stack_00000018;
      in_stack_00000050 = in_stack_00000028;
      if ((*(long *)(unaff_x19 + 0x100) == 0) ||
         (lVar4 = FUN_051e5130(*(long *)(unaff_x19 + 0x100),0), lVar4 == 0)) goto LAB_02bbe4dc;
      uVar5 = FUN_04f1b1c0(lVar4,0);
      if ((*(long *)(unaff_x19 + 0x100) == 0) ||
         (uVar8 = unaff_d8, uVar9 = uVar3, lVar4 = FUN_051e5130(*(long *)(unaff_x19 + 0x100),0),
         lVar4 == 0)) goto LAB_02bbe4dc;
      uVar6 = Fusion_CloudServices_<Join>d__84__SetStateMachine(lVar4,0);
      FUN_051db00c(uVar5,unaff_d8,uVar3,uVar6,uVar8,uVar9,&stack0x00000030,0);
      FUN_051db478(&stack0x00000030);
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_02bbe4dc;
      lVar4 = FUN_051e5130(*(long *)(unaff_x19 + 0x100),0);
      FUN_051dcd8c(in_stack_00000088._4_4_,&stack0x00000040,0);
    }
    if (lVar4 == 0) {
LAB_02bbe4dc:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    auVar7 = FUN_04f1c838(lVar4,0);
    in_register_00005128 = auVar7._8_8_;
    unaff_d9 = auVar7._0_8_;
  }
LAB_02bbe4b8:
  auVar7._8_8_ = in_register_00005128;
  auVar7._0_8_ = unaff_d9;
  return auVar7;
}


