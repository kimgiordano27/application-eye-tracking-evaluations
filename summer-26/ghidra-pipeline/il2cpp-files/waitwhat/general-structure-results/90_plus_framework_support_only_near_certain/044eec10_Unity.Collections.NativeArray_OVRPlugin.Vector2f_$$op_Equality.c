/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$op_Equality
ENTRY_POINT: 044eec10
PROGRAM: waitwhat-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x044eedbc) */

void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__op_Equality(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int *in_x10;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  undefined1 auVar7 [16];
  long *in_stack_00000018;
  
code_r0x044eec10:
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  while (uVar1 = (*(code *)*puVar2)(unaff_x21,puVar2[1]), (uVar1 & 1) != 0) {
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 044eebe4 with catch @ 044eec50
                       try { // try from 044eec50 to 045eec67 has its CatchHandler @ 044eeb94 */
      lVar3 = FUN_031c09d4(lVar3);
    }
    lVar4 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_044eeca0;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(in_stack_00000018,lVar3,0);
LAB_044eeca0:
    auVar7 = (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar5 = *(uint *)(unaff_x20 + 0x18);
    if (uVar5 == *(uint *)(lVar3 + 0x18)) {
      Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_Length();
      uVar5 = *(uint *)(unaff_x20 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar5 + 1;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar5 + 1;
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    *(undefined1 (*) [16])(lVar3 + (long)(int)uVar5 * 0x10 + 0x20) = auVar7;
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    param_1 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x21 = in_stack_00000018;
    if (uVar1 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == *unaff_x23) goto code_r0x044eec10;
        uVar1 = uVar1 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(in_stack_00000018,*unaff_x23,0);
  }
  if (in_stack_00000018 != (long *)0x0) {
    lVar3 = *in_stack_00000018;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_070c2e88) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_044eed84;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_031c0d08(in_stack_00000018,*(long *)PTR_DAT_070c2e88,0);
LAB_044eed84:
    (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
  }
  return;
}


