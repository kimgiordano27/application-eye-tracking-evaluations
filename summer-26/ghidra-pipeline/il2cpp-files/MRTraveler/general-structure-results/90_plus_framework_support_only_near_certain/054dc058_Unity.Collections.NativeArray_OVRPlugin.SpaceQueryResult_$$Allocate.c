/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Allocate
ENTRY_POINT: 054dc058
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Allocate(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
  do {
    uStack0000000000000028 = in_stack_00000068;
    uStack0000000000000020 = in_stack_00000060;
    uStack0000000000000030 = in_stack_00000070;
    uStack0000000000000008 = in_stack_00000048;
    uStack0000000000000000 = in_stack_00000040;
    uStack0000000000000010 = in_stack_00000050;
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 054dc008 with catch @ 054dc088
                       try { // try from 054dc088 to 055dc09f has its CatchHandler @ 054dbfbc */
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_1) {
                    /* try { // try from 054dc0b8 to 055dc11f has its CatchHandler @ 054dbfbc */
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_054dc0c4;
        }
        uVar4 = uVar4 - 1;
                    /* try { // try from 054dc0a0 to 055dc0b7 has its CatchHandler @ 054dc130 */
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348();
LAB_054dc0c4:
    iVar1 = (*(code *)*puVar2)();
    if (iVar1 == 0) {
      return unaff_w24;
    }
    if (iVar1 < 0) {
      unaff_w19 = unaff_w24 + 1;
    }
    else {
      unaff_w25 = unaff_w24 - 1;
    }
    if (unaff_w25 < (int)unaff_w19) {
      return ~unaff_w19;
    }
    unaff_w24 = unaff_w19 + ((int)(unaff_w25 - unaff_w19) >> 1);
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar3 = unaff_x23 + (long)(int)unaff_w24 * (long)unaff_w26;
    in_stack_00000070 = *(undefined8 *)(lVar3 + 0x30);
    in_stack_00000068 = *(undefined8 *)(lVar3 + 0x28);
    in_stack_00000060 = *(undefined8 *)(lVar3 + 0x20);
    in_stack_00000050 = unaff_x22[2];
    in_stack_00000048 = unaff_x22[1];
    in_stack_00000040 = *unaff_x22;
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03cf1244();
    }
    param_1 = **(long **)(lVar3 + 0xc0);
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_03cf1244(param_1);
    }
  } while( true );
}


