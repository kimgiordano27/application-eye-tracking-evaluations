/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$.ctor
ENTRY_POINT: 04929c04
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 169
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_9;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___ctor
          (long *param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  code *in_x9;
  int *piVar7;
  long unaff_x19;
  uint uVar8;
  ulong unaff_x20;
  ulong unaff_x21;
  long unaff_x24;
  uint uVar9;
  ulong unaff_x25;
  ulong uVar10;
  ulong unaff_x26;
  long unaff_x27;
  int unaff_w28;
  int *unaff_x29;
  undefined8 uVar11;
  undefined8 uVar12;
  long in_stack_00000000;
  undefined8 *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x04929c04:
  uVar9 = (uint)unaff_x25;
  uVar8 = (uint)unaff_x20;
  uVar3 = (*in_x9)(param_1,param_2,param_3,param_4);
  uVar10 = unaff_x25;
  unaff_x25 = unaff_x26;
  do {
    if ((uVar3 & 1) != 0) {
      if ((int)uVar8 < 0) {
        lVar6 = *(long *)(unaff_x19 + 0x10);
        if (lVar6 == 0)
        goto 
        System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
        ;
        if ((uint)in_stack_00000000 < *(uint *)(lVar6 + 0x18)) {
          *(int *)(lVar6 + in_stack_00000000 * 4 + 0x20) =
               *(int *)(unaff_x27 + unaff_x25 * 0x24 + 0x24) + 1;
          goto LAB_04929ce8;
        }
      }
      else {
        lVar6 = *(long *)(unaff_x19 + 0x18);
        if (lVar6 == 0)
        goto 
        System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
        ;
        if (uVar8 < *(uint *)(lVar6 + 0x18)) {
          *(undefined4 *)(lVar6 + (ulong)uVar8 * 0x24 + 0x24) =
               *(undefined4 *)(unaff_x27 + unaff_x25 * 0x24 + 0x24);
LAB_04929ce8:
          lVar6 = unaff_x27 + unaff_x25 * 0x24;
          uVar12 = *(undefined8 *)(lVar6 + 0x34);
          uVar11 = *(undefined8 *)(lVar6 + 0x2c);
          in_stack_00000008[2] = *(undefined8 *)(lVar6 + 0x3c);
          in_stack_00000008[1] = uVar12;
          *in_stack_00000008 = uVar11;
          *unaff_x29 = -1;
          *(undefined4 *)(lVar6 + 0x24) = *(undefined4 *)(unaff_x19 + 0x24);
          *(uint *)(unaff_x19 + 0x24) = uVar9;
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
      uVar9 = *(uint *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x24);
      unaff_x25 = (ulong)uVar9;
      unaff_x20 = uVar10 & 0xffffffff;
      uVar8 = (uint)uVar10;
      if ((int)uVar9 < 0) {
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
      if (*(uint *)(unaff_x27 + 0x18) <= uVar9)
      goto System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___ctor;
      unaff_x29 = (int *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff) + 0x20);
      uVar10 = unaff_x25;
    } while (*unaff_x29 != unaff_w28);
    plVar4 = *(long **)(unaff_x19 + 0x30);
    if (plVar4 == (long *)0x0) break;
    if (plVar4 == (long *)0x0)
    goto 
    System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset
    ;
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 8);
    uVar1 = *(undefined4 *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x28);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02d9a2e0(lVar6);
    }
    lVar5 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar6) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04929c20;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4(plVar4,lVar6,0);
LAB_04929c20:
    uVar3 = (*(code *)*puVar2)(plVar4,uVar1,in_stack_00000018._4_4_,puVar2[1]);
    unaff_x24 = in_stack_00000010;
  } while( true );
  param_1 = (long *)FUN_03642a0c(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x24 + 0x20) + 0xc0) + 0x18));
  if (param_1 == (long *)0x0) {
System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_Reset:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  param_3 = (ulong)in_stack_00000018._4_4_;
  param_2 = (ulong)*(uint *)(unaff_x27 + unaff_x25 * unaff_x21 + 0x28);
  in_x9 = *(code **)(*param_1 + 0x1b8);
  param_4 = *(undefined8 *)(*param_1 + 0x1c0);
  unaff_x26 = unaff_x25;
  goto code_r0x04929c04;
}


