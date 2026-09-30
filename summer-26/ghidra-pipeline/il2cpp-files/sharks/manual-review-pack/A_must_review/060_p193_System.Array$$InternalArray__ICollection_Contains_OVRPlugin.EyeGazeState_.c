/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.EyeGazeState>
ENTRY_POINT: 01b688e8
PROGRAM: sharks-libil2cpp.so
SCORE: 149
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8 System_Array__InternalArray__ICollection_Contains<OVRPlugin_EyeGazeState>(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar3;
  int unaff_w21;
  ulong unaff_x22;
  long *unaff_x23;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (unaff_w21 < 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0185daa4(lVar1);
    }
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if ((*(byte *)(*unaff_x23 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) != lVar1))
    {
LAB_01b68adc:
                    /* WARNING: Subroutine does not return */
      FUN_017fc944();
    }
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0185daa4(lVar1);
    }
    lVar3 = *unaff_x23;
    if ((*(byte *)(lVar3 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) != lVar1))
    goto LAB_01b68adc;
    uVar2 = (**(code **)(lVar3 + 0x198))();
    if ((uVar2 & 1) == 0) goto LAB_01b68a1c;
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0185daa4();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
  }
  else {
    if ((*(byte *)(*(long *)(param_1 + 0x40) + 0x135) & 1) == 0) {
      FUN_0185daa4(*(long *)(param_1 + 0x40));
    }
    lVar1 = thunk_FUN_01861ac0();
    if (lVar1 == 0) {
LAB_01b68a1c:
      if ((unaff_x22 & 0x7fffffff) != 0) {
        *unaff_x19 = 0;
        unaff_x19[1] = 0;
        return 0;
      }
      lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x38);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x60);
      lVar1 = *(long *)(lVar3 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar1 = *(long *)(lVar3 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      uVar5 = (*(undefined8 **)(lVar1 + 0xb8))[1];
      uVar4 = **(undefined8 **)(lVar1 + 0xb8);
      goto LAB_01b68ab4;
    }
  }
  FUN_021ead5c();
  uVar5 = 0;
  uVar4 = 0;
LAB_01b68ab4:
  unaff_x19[1] = uVar5;
  *unaff_x19 = uVar4;
  thunk_FUN_0188fd20();
  return 1;
}


