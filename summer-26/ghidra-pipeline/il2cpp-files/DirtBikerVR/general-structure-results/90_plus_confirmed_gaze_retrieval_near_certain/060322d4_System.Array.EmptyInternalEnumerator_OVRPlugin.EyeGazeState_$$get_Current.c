/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$get_Current
ENTRY_POINT: 060322d4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 167
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__get_Current(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long in_x10;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  ulong unaff_x20;
  long unaff_x23;
  uint unaff_w24;
  uint uVar9;
  uint unaff_w25;
  ulong uVar10;
  int *piVar11;
  int unaff_w29;
  long lStack0000000000000000;
  undefined8 in_stack_00000018;
  
  lStack0000000000000000 = in_x10;
  do {
    uVar9 = unaff_w24;
    lVar4 = *(long *)(unaff_x23 + 0x18);
    if (lVar4 == 0) goto LAB_060324c8;
    if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_060324cc;
    lVar4 = lVar4 + 0x20;
    piVar11 = (int *)(lVar4 + (ulong)uVar9 * (unaff_x20 & 0xffffffff));
    uVar10 = (ulong)uVar9;
    if (*piVar11 == unaff_w29) {
      plVar8 = *(long **)(unaff_x23 + 0x30);
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)FUN_04039e78(*(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18));
        if (plVar8 == (long *)0x0) goto LAB_060324c8;
        uVar6 = (**(code **)(*plVar8 + 0x1b8))
                          (plVar8,*(undefined4 *)(lVar4 + uVar10 * (unaff_x20 & 0xffffffff) + 8),
                           in_stack_00000018._4_4_,*(undefined8 *)(*plVar8 + 0x1c0));
      }
      else {
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
        uVar1 = *(undefined4 *)(lVar4 + uVar10 * (unaff_x20 & 0xffffffff) + 8);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03ac4090(lVar3);
        }
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == lVar3) {
              puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_060323dc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_03ac43c4(plVar8,lVar3,0);
LAB_060323dc:
        uVar6 = (*(code *)*puVar2)(plVar8,uVar1,in_stack_00000018._4_4_,puVar2[1]);
      }
      if ((uVar6 & 1) != 0) {
        if ((int)unaff_w25 < 0) {
          lVar3 = *(long *)(unaff_x23 + 0x10);
          if (lVar3 == 0) goto LAB_060324c8;
          if (*(uint *)(lVar3 + 0x18) <= (uint)lStack0000000000000000) goto LAB_060324cc;
          *(int *)(lVar3 + lStack0000000000000000 * 4 + 0x20) =
               *(int *)(lVar4 + uVar10 * 0x24 + 4) + 1;
        }
        else {
          lVar3 = *(long *)(unaff_x23 + 0x18);
          if (lVar3 == 0) {
LAB_060324c8:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          if (*(uint *)(lVar3 + 0x18) <= unaff_w25) {
LAB_060324cc:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          *(undefined4 *)(lVar3 + (ulong)unaff_w25 * 0x24 + 0x24) =
               *(undefined4 *)(lVar4 + uVar10 * 0x24 + 4);
        }
        uVar1 = *(undefined4 *)(unaff_x23 + 0x24);
        *piVar11 = -1;
        *(uint *)(unaff_x23 + 0x24) = uVar9;
        *(undefined4 *)(lVar4 + uVar10 * 0x24 + 4) = uVar1;
        *(ulong *)(unaff_x23 + 0x28) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x23 + 0x28) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x23 + 0x28) + 1);
        return 1;
      }
    }
    unaff_w24 = *(uint *)(lVar4 + uVar10 * (unaff_x20 & 0xffffffff) + 4);
    unaff_w25 = uVar9;
    if ((int)unaff_w24 < 0) {
      return 0;
    }
  } while( true );
}


