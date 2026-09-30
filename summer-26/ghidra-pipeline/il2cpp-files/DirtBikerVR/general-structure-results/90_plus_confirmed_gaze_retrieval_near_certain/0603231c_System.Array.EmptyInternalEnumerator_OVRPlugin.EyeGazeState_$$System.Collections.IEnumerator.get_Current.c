/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0603231c
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
System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  uint uVar8;
  ulong unaff_x24;
  uint uVar9;
  ulong unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  int *unaff_x28;
  int unaff_w29;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x0603231c:
  uVar8 = (uint)unaff_x24;
  uVar9 = (uint)unaff_x25;
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + 8);
  uVar1 = *(undefined4 *)(unaff_x26 + (unaff_x27 & 0xffffffff) * (unaff_x20 & 0xffffffff) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03ac4090(lVar4);
  }
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_060323dc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_03ac43c4(unaff_x21,lVar4,0);
LAB_060323dc:
  uVar6 = (*(code *)*puVar2)(unaff_x21,uVar1,in_stack_00000018._4_4_,puVar2[1]);
  do {
    if ((uVar6 & 1) != 0) {
      if ((int)uVar9 < 0) {
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
          if (uVar9 < *(uint *)(lVar4 + 0x18)) {
            *(undefined4 *)(lVar4 + (ulong)uVar9 * 0x24 + 0x24) =
                 *(undefined4 *)(unaff_x26 + (unaff_x27 & 0xffffffff) * 0x24 + 4);
LAB_06032494:
            uVar1 = *(undefined4 *)(in_stack_00000008 + 0x24);
            *unaff_x28 = -1;
            *(uint *)(in_stack_00000008 + 0x24) = uVar8;
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
      uVar9 = (uint)unaff_x24;
      uVar8 = *(uint *)(unaff_x26 + (unaff_x27 & 0xffffffff) * (unaff_x20 & 0xffffffff) + 4);
      unaff_x24 = (ulong)uVar8;
      if ((int)uVar8 < 0) {
        return 0;
      }
      lVar4 = *(long *)(in_stack_00000008 + 0x18);
      if (lVar4 == 0) goto LAB_060324c8;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_060324cc;
      unaff_x26 = lVar4 + 0x20;
      unaff_x28 = (int *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff));
      unaff_x27 = unaff_x24;
    } while (*unaff_x28 != unaff_w29);
    unaff_x19 = *(long **)(in_stack_00000008 + 0x30);
    param_1 = in_stack_00000010;
    unaff_x21 = unaff_x19;
    if (unaff_x19 != (long *)0x0) goto code_r0x0603231c;
    plVar3 = (long *)FUN_04039e78(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
    if (plVar3 == (long *)0x0) goto LAB_060324c8;
    uVar6 = (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,*(undefined4 *)(unaff_x26 + unaff_x24 * (unaff_x20 & 0xffffffff) + 8),
                       in_stack_00000018._4_4_,*(undefined8 *)(*plVar3 + 0x1c0));
  } while( true );
}


