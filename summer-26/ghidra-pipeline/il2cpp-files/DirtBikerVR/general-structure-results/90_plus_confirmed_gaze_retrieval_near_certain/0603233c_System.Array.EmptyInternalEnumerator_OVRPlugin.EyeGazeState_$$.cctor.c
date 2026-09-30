/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$.cctor
ENTRY_POINT: 0603233c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 167
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___cctor
          (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ushort in_w9;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined4 unaff_w23;
  uint uVar7;
  ulong unaff_x24;
  uint uVar8;
  ulong unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  int *unaff_x28;
  int unaff_w29;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x0603233c:
  uVar7 = (uint)unaff_x24;
  uVar8 = (uint)unaff_x25;
  uVar1 = *(undefined4 *)(param_1 + 8);
  if ((in_w9 & 1) == 0) {
    param_3 = FUN_03ac4090(param_3);
  }
  lVar4 = *unaff_x19;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == param_3) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_060323dc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_03ac43c4(unaff_x21,param_3,0);
LAB_060323dc:
  uVar5 = (*(code *)*puVar2)(unaff_x21,uVar1,unaff_w23,puVar2[1]);
  do {
    if ((uVar5 & 1) != 0) {
      if ((int)uVar8 < 0) {
        lVar4 = *(long *)(in_stack_00000008 + 0x10);
        if (lVar4 != 0) {
          if ((uint)in_stack_00000000 < *(uint *)(lVar4 + 0x18)) {
            *(int *)(lVar4 + in_stack_00000000 * 4 + 0x20) =
                 *(int *)(unaff_x26 + (unaff_x27 & 0xffffffff) * 0x24 + 4) + 1;
            goto LAB_06032494;
          }
          goto LAB_060324cc;
        }
      }
      else {
        lVar4 = *(long *)(in_stack_00000008 + 0x18);
        if (lVar4 != 0) {
          if (uVar8 < *(uint *)(lVar4 + 0x18)) {
            *(undefined4 *)(lVar4 + (ulong)uVar8 * 0x24 + 0x24) =
                 *(undefined4 *)(unaff_x26 + (unaff_x27 & 0xffffffff) * 0x24 + 4);
LAB_06032494:
            uVar1 = *(undefined4 *)(in_stack_00000008 + 0x24);
            *unaff_x28 = -1;
            *(uint *)(in_stack_00000008 + 0x24) = uVar7;
            *(undefined4 *)(unaff_x26 + (unaff_x27 & 0xffffffff) * 0x24 + 4) = uVar1;
            *(ulong *)(in_stack_00000008 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(in_stack_00000008 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(in_stack_00000008 + 0x28) + 1);
            return 1;
          }
LAB_060324cc:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
      }
LAB_060324c8:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    do {
      unaff_x25 = unaff_x24 & 0xffffffff;
      uVar8 = (uint)unaff_x24;
      uVar7 = *(uint *)(unaff_x26 + (unaff_x27 & 0xffffffff) * (unaff_x20 & 0xffffffff) + 4);
      unaff_x24 = (ulong)uVar7;
      if ((int)uVar7 < 0) {
        return 0;
      }
      lVar4 = *(long *)(in_stack_00000008 + 0x18);
      if (lVar4 == 0) goto LAB_060324c8;
      if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_060324cc;
      unaff_x26 = lVar4 + 0x20;
      unaff_x28 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff));
      unaff_x27 = unaff_x24;
    } while (*unaff_x28 != unaff_w29);
    unaff_x19 = *(long **)(in_stack_00000008 + 0x30);
    if (unaff_x19 != (long *)0x0) break;
    plVar3 = (long *)FUN_04039e78(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
    if (plVar3 == (long *)0x0) goto LAB_060324c8;
    uVar5 = (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,*(undefined4 *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 8),
                       in_stack_00000018._4_4_,*(undefined8 *)(*plVar3 + 0x1c0));
  } while( true );
  param_3 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
  param_1 = unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff);
  in_w9 = *(ushort *)(param_3 + 0x135);
  unaff_x21 = unaff_x19;
  unaff_w23 = in_stack_00000018._4_4_;
  goto code_r0x0603233c;
}


