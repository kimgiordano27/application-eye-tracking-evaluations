/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.EyeGazeState>
ENTRY_POINT: 03842130
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03842294) */

void System_Array__InternalArray__ICollection_Remove<OVRPlugin_EyeGazeState>
               (long *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *in_stack_00000018;
  
code_r0x03842130:
  puVar1 = (undefined8 *)FUN_0367cd30(param_1,param_2,param_3);
  do {
    uVar2 = (*(code *)*puVar1)(unaff_x20,puVar1[1]);
    if ((uVar2 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar3 = *in_stack_00000018;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 == 0) goto LAB_03842204;
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      goto LAB_038421ec;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar3 = *in_stack_00000018;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_038421a8;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_0367cd30(in_stack_00000018,*unaff_x23,0);
LAB_038421a8:
    (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    FUN_03841f20();
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar3 = *in_stack_00000018;
    param_2 = *unaff_x22;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    unaff_x20 = in_stack_00000018;
    if (uVar2 == 0) break;
    piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar4 + -2) != param_2) {
      uVar2 = uVar2 - 1;
      piVar4 = piVar4 + 4;
      if (uVar2 == 0) goto LAB_03842128;
    }
    puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
  } while( true );
LAB_03842128:
  param_3 = 0;
  param_1 = in_stack_00000018;
  goto code_r0x03842130;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar4 = piVar4 + 4;
    if (uVar2 == 0) break;
LAB_038421ec:
    if (*(long *)(piVar4 + -2) == *unaff_x21) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_03842220;
    }
  }
LAB_03842204:
  puVar1 = (undefined8 *)FUN_0367cd30(in_stack_00000018,*unaff_x21,0);
LAB_03842220:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


