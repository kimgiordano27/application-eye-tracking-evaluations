/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.RoomFace>$$Copy
ENTRY_POINT: 047a4d28
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_RoomFace>__Copy(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_x9;
  long lVar4;
  byte in_w10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar5;
  int unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  long lVar6;
  uint unaff_w29;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  do {
    uStack0000000000000068 = *(undefined8 *)(param_1 + 0x28);
    uStack0000000000000060 = *(undefined8 *)(param_1 + 0x20);
    uStack0000000000000070 = *(undefined8 *)(param_1 + 0x30);
    uStack0000000000000048 = *(undefined8 *)(in_x9 + 0x28);
    uStack0000000000000040 = *(undefined8 *)(in_x9 + 0x20);
    uStack0000000000000050 = *(undefined8 *)(in_x9 + 0x30);
    if ((in_w10 & 1) == 0) {
      FUN_0367c9fc();
    }
    in_stack_000000d0 = uStack0000000000000070;
                    /* try { // try from 047a4d74 to 048a4d83 has its CatchHandler @ 047a4d84 */
    in_stack_000000c8 = uStack0000000000000068;
    in_stack_000000c0 = uStack0000000000000060;
    in_stack_000000a8 = uStack0000000000000048;
    in_stack_000000a0 = uStack0000000000000040;
    in_stack_000000b0 = uStack0000000000000050;
                    /* catch() { ... } // from try @ 047a4d00 with catch @ 047a4d84
                       catch() { ... } // from try @ 047a4d74 with catch @ 047a4d84 */
    uVar1 = (**(code **)(unaff_x21 + 0x18))
                      (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000000c0,&stack0x000000a0,
                       *(undefined8 *)(unaff_x21 + 0x28));
                    /* try { // try from 047a4d88 to 048a4d8b has its CatchHandler @ 047a4d94 */
    uVar3 = *(undefined8 *)(unaff_x19 + 0x18);
                    /* try { // try from 047a4d8c to 048a4d97 has its CatchHandler @ 047a4be8 */
    unaff_w29 = unaff_w29 | uVar1 >> 0x1f;
    uVar1 = unaff_w24;
    do {
      unaff_w24 = unaff_w29;
      uVar5 = unaff_w25 + unaff_w24;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 047a4d88 with catch @ 047a4d94
                        */
      if ((uint)uVar3 <= uVar5) goto LAB_047a4ea8;
      if (unaff_x21 == 0) goto LAB_047a4eac;
      lVar6 = unaff_x19 + (long)(int)uVar5 * (long)unaff_w26;
      uVar8 = *(undefined8 *)(lVar6 + 0x28);
      uVar7 = *(undefined8 *)(lVar6 + 0x20);
      uVar3 = *(undefined8 *)(lVar6 + 0x30);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      in_stack_000000d0 = in_stack_00000090;
      in_stack_000000c8 = in_stack_00000088;
      in_stack_000000c0 = in_stack_00000080;
      in_stack_000000a0 = uVar7;
      in_stack_000000a8 = uVar8;
      in_stack_000000b0 = uVar3;
      iVar2 = (**(code **)(unaff_x21 + 0x18))
                        (*(undefined8 *)(unaff_x21 + 0x40),&stack0x000000c0,&stack0x000000a0,
                         *(undefined8 *)(unaff_x21 + 0x28));
      if (-1 < iVar2) {
        uVar5 = unaff_w25 + uVar1;
LAB_047a4e54:
        if (uVar5 < *(uint *)(unaff_x19 + 0x18)) {
          lVar6 = unaff_x19 + (long)(int)uVar5 * 0x18;
          *(undefined8 *)(lVar6 + 0x28) = in_stack_00000088;
          *(undefined8 *)(lVar6 + 0x20) = in_stack_00000080;
          *(undefined8 *)(lVar6 + 0x30) = in_stack_00000090;
          thunk_FUN_036b7ad0(lVar6 + 0x20,0);
          return;
        }
        goto LAB_047a4ea8;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar5) ||
         (uVar1 = unaff_w25 + uVar1, *(uint *)(unaff_x19 + 0x18) <= uVar1)) goto LAB_047a4ea8;
      lVar4 = unaff_x19 + (long)(int)uVar1 * (long)unaff_w26;
      uVar7 = *(undefined8 *)(lVar6 + 0x28);
      uVar3 = *(undefined8 *)(lVar6 + 0x20);
      *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar6 + 0x30);
      *(undefined8 *)(lVar4 + 0x28) = uVar7;
      *(undefined8 *)(lVar4 + 0x20) = uVar3;
      thunk_FUN_036b7ad0(in_stack_00000018 + (long)(int)uVar1 * (long)unaff_w26,0);
      if (unaff_w27 < (int)unaff_w24) goto LAB_047a4e54;
      unaff_w29 = unaff_w24 * 2;
      uVar3 = *(undefined8 *)(unaff_x19 + 0x18);
      uVar1 = unaff_w24;
    } while (unaff_w23 <= (int)unaff_w29);
    uVar1 = unaff_w29 + in_stack_00000010._4_4_;
    if (((uint)uVar3 <= uVar1 - 1) || ((uint)uVar3 <= uVar1)) {
LAB_047a4ea8:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    if (unaff_x21 == 0) {
LAB_047a4eac:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    param_1 = unaff_x19 + (long)(int)(uVar1 - 1) * (long)unaff_w26;
    in_x9 = unaff_x19 + (long)(int)uVar1 * (long)unaff_w26;
    in_w10 = *(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135);
  } while( true );
}


