/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.EyeGazeState>$$.ctor
ENTRY_POINT: 02f15e84
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x02f15ef4) */
/* WARNING: Removing unreachable block (ram,0x02f15fa4) */

void System_Array_InternalEnumerator<OVRPlugin_EyeGazeState>___ctor(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  if (unaff_x23 != (long *)0x0) {
    lVar3 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02f15edc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01dde8fc();
LAB_02f15edc:
    (*(code *)*puVar1)();
  }
  if (0 < (int)unaff_x21) {
    if (unaff_x22 == 0) {
LAB_02f15f90:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar4 = 0;
    do {
      uVar2 = FUN_03604bc4();
      if ((uVar2 & 1) != 0) {
        if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_02f15f90;
        if (*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        FUN_02f123d0();
      }
      uVar4 = uVar4 + 1;
    } while (unaff_x21 != uVar4);
  }
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


