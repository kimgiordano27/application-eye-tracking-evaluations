/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.EyeGazeState>
ENTRY_POINT: 02f73728
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 152
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_EyeGazeState>(ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  undefined8 *unaff_x25;
  long unaff_x29;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 *in_stack_00000008;
  
code_r0x02f73728:
  if (param_1 == 5) {
    FUN_02f74138(unaff_x21,unaff_x21 + 2,unaff_x21 + 4,unaff_x21 + 6,unaff_x22);
    return;
  }
  do {
    if ((long)param_1 < 0x18) {
      if ((unaff_x23 & 1) != 0) {
        FUN_02f73a08();
        return;
      }
      FUN_02f73ad4(unaff_x21,unaff_x20);
      return;
    }
    if (unaff_x29 == 1) {
      if (unaff_x21 == unaff_x20) {
        return;
      }
      FUN_02f74214(unaff_x21,unaff_x20,unaff_x20);
      return;
    }
    puVar1 = unaff_x21 + (param_1 >> 1) * 2;
    if (param_1 < 0x81) {
      FUN_02f73b78(puVar1,unaff_x21,unaff_x22);
      if ((unaff_x23 & 1) == 0) goto LAB_02f737e4;
LAB_02f737f8:
      auVar8 = FUN_02f73d98(unaff_x21,unaff_x20);
      puVar1 = auVar8._0_8_;
      if ((auVar8._8_8_ & 1) == 0) {
LAB_02f73844:
        FUN_02f736a8(unaff_x21,puVar1);
        puVar4 = puVar1 + 2;
        goto LAB_02f73878;
      }
      uVar2 = FUN_02f73ec0(unaff_x21,puVar1);
      uVar3 = FUN_02f73ec0(puVar1 + 2,unaff_x20);
      if ((uVar3 & 1) == 0) {
        puVar4 = puVar1 + 2;
        if ((uVar2 & 1) == 0) goto LAB_02f73844;
      }
      else {
        if ((uVar2 & 1) != 0) {
          return;
        }
        unaff_x22 = puVar1 + -2;
        in_stack_00000008 = puVar1 + -4;
        unaff_x25 = puVar1 + -6;
        unaff_x20 = puVar1;
        puVar4 = unaff_x21;
      }
    }
    else {
      FUN_02f73b78(unaff_x21,puVar1,unaff_x22);
      puVar4 = unaff_x21 + 2;
      FUN_02f73b78(puVar4,puVar1 + -2,in_stack_00000008);
      FUN_02f73b78(unaff_x21 + 4,puVar4 + (param_1 >> 1) * 2,unaff_x25);
      FUN_02f73b78(puVar1 + -2,puVar1,puVar4 + (param_1 >> 1) * 2);
      uVar7 = unaff_x21[1];
      uVar5 = *unaff_x21;
      uVar6 = *puVar1;
      unaff_x21[1] = puVar1[1];
      *unaff_x21 = uVar6;
      puVar1[1] = uVar7;
      *puVar1 = uVar5;
      if ((unaff_x23 & 1) != 0) goto LAB_02f737f8;
LAB_02f737e4:
      uVar2 = FUN_02f27ed8(unaff_x19 + 1,unaff_x21[-2],*unaff_x21);
      if ((uVar2 & 1) != 0) goto LAB_02f737f8;
      puVar4 = (undefined8 *)FUN_02f73c74(unaff_x21,unaff_x20);
LAB_02f73878:
      unaff_x23 = 0;
    }
    unaff_x21 = puVar4;
    unaff_x29 = unaff_x29 + 1;
    param_1 = (long)unaff_x20 - (long)unaff_x21 >> 4;
    if (2 < (long)param_1) break;
    if (param_1 < 2) {
      return;
    }
    if (param_1 == 2) {
      puVar1 = unaff_x20 + -2;
      uVar2 = FUN_02f27ed8(unaff_x19 + 1,*puVar1,*unaff_x21);
      if ((uVar2 & 1) != 0) {
        uVar6 = unaff_x21[1];
        uVar5 = *unaff_x21;
        uVar7 = *puVar1;
        unaff_x21[1] = unaff_x20[-1];
        *unaff_x21 = uVar7;
        unaff_x20[-1] = uVar6;
        *puVar1 = uVar5;
      }
      return;
    }
  } while( true );
  if (param_1 == 3) {
    FUN_02f73b78(unaff_x21,unaff_x21 + 2,unaff_x22);
    return;
  }
  if (param_1 == 4) {
    FUN_02f7408c(unaff_x21,unaff_x21 + 2,unaff_x21 + 4,unaff_x22);
    return;
  }
  goto code_r0x02f73728;
}


