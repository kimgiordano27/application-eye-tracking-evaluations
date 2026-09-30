/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$Dispose
ENTRY_POINT: 04929b98
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 177
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_9;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__Dispose
          (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  uint uVar7;
  ulong unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  uint uVar8;
  ulong unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  int unaff_w28;
  int *unaff_x29;
  undefined8 uVar9;
  undefined8 uVar10;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x04929b98:
  uVar8 = (uint)unaff_x25;
  uVar7 = (uint)unaff_x20;
  uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_04929c20;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_02d9a5d4(unaff_x22,param_3,0);
LAB_04929c20:
  uVar3 = (*(code *)*puVar1)(unaff_x22,unaff_w23,unaff_w24,puVar1[1]);
  uVar5 = unaff_x25;
  unaff_x25 = unaff_x26;
  do {
    if ((uVar3 & 1) != 0) {
      if ((int)uVar7 < 0) {
        lVar4 = *(long *)(unaff_x19 + 0x10);
        if (lVar4 == 0)
        goto 
        System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
        ;
        if ((uint)in_stack_00000000 < *(uint *)(lVar4 + 0x18)) {
          *(int *)(lVar4 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(unaff_x27 + unaff_x25 * 0x24 + 0x24) + 1;
          goto LAB_04929ce8;
        }
      }
      else {
        lVar4 = *(long *)(unaff_x19 + 0x18);
        if (lVar4 == 0)
        goto 
        System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
        ;
        if (uVar7 < *(uint *)(lVar4 + 0x18)) {
          *(undefined4 *)(lVar4 + (ulong)uVar7 * 0x24 + 0x24) =
               *(undefined4 *)(unaff_x27 + unaff_x25 * 0x24 + 0x24);
LAB_04929ce8:
          lVar4 = unaff_x27 + unaff_x25 * 0x24;
          uVar10 = *(undefined8 *)(lVar4 + 0x34);
          uVar9 = *(undefined8 *)(lVar4 + 0x2c);
          in_stack_00000008[2] = *(undefined8 *)(lVar4 + 0x3c);
          in_stack_00000008[1] = uVar10;
          *in_stack_00000008 = uVar9;
          *unaff_x29 = -1;
          *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          *(uint *)(unaff_x19 + 0x24) = uVar8;
          *(ulong *)(unaff_x19 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x19 + 0x28) + 1);
          return 1;
        }
      }
System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___ctor:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    do {
      uVar8 = *(uint *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x24);
      unaff_x25 = (ulong)uVar8;
      unaff_x20 = uVar5 & 0xffffffff;
      uVar7 = (uint)uVar5;
      if ((int)uVar8 < 0) {
        *in_stack_00000008 = 0;
        in_stack_00000008[1] = 0;
        in_stack_00000008[2] = 0;
        return 0;
      }
      unaff_x27 = *(long *)(unaff_x19 + 0x18);
      if (unaff_x27 == 0)
      goto 
      System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
      ;
      if (*(uint *)(unaff_x27 + 0x18) <= uVar8)
      goto System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___ctor;
      unaff_x29 = (int *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff) + 0x20);
      uVar5 = unaff_x25;
    } while (*unaff_x29 != unaff_w28);
    unaff_x22 = *(long **)(unaff_x19 + 0x30);
    if (unaff_x22 != (long *)0x0) break;
    plVar2 = (long *)FUN_03642a0c(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
    if (plVar2 == (long *)0x0)
    goto 
    System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
    ;
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,*(undefined4 *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x28),
                       in_stack_00000018._4_4_,*(undefined8 *)(*plVar2 + 0x1c0));
  } while( true );
  if (unaff_x22 == (long *)0x0) {
System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  param_3 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
  unaff_w23 = *(undefined4 *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x28);
  if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
    param_3 = FUN_02d9a2e0(param_3);
  }
  param_1 = *unaff_x22;
  unaff_x26 = unaff_x25;
  unaff_w24 = in_stack_00000018._4_4_;
  goto code_r0x04929b98;
}


