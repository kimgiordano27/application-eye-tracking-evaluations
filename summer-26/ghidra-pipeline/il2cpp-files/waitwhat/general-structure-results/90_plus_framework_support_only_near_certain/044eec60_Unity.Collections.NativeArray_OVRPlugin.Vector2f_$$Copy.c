/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 044eec60
PROGRAM: waitwhat-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x044eedbc) */

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong in_x9;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  undefined1 auVar6 [16];
  long *in_stack_00000018;
  
  do {
    if (in_x9 != 0) {
                    /* try { // try from 044eec68 to 045eec7f has its CatchHandler @ 044eecf8 */
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_3) {
          puVar1 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_044eeca0;
        }
        in_x9 = in_x9 - 1;
        piVar5 = piVar5 + 4;
                    /* try { // try from 044eec80 to 045eece7 has its CatchHandler @ 044eeb94 */
      } while (in_x9 != 0);
    }
    puVar1 = (undefined8 *)FUN_031c0d08(unaff_x21,param_3,0);
LAB_044eeca0:
    auVar6 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar3 = *(uint *)(unaff_x20 + 0x18);
    if (uVar3 == *(uint *)(lVar2 + 0x18)) {
      Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_Length();
      uVar3 = *(uint *)(unaff_x20 + 0x18);
      lVar2 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    *(undefined1 (*) [16])(lVar2 + (long)(int)uVar3 * 0x10 + 0x20) = auVar6;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar2 = *in_stack_00000018;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_044eec1c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_031c0d08(in_stack_00000018,*unaff_x23,0);
LAB_044eec1c:
    uVar4 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar2 = *in_stack_00000018;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_044eed68;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    param_3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
      param_3 = FUN_031c09d4(param_3);
    }
    param_1 = *in_stack_00000018;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x21 = in_stack_00000018;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_070c2e88) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_044eed84;
    }
  }
LAB_044eed68:
  puVar1 = (undefined8 *)FUN_031c0d08(in_stack_00000018,*(long *)PTR_DAT_070c2e88,0);
LAB_044eed84:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


