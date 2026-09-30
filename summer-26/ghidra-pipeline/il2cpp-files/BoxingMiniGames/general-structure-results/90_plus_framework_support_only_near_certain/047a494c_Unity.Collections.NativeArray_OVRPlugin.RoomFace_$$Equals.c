/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.RoomFace>$$Equals
ENTRY_POINT: 047a494c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_RoomFace>__Equals(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  byte in_w9;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w24;
  int unaff_w25;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  
  while( true ) {
    uStack0000000000000030 = param_1;
    if ((in_w9 & 1) == 0) {
      FUN_0367c9fc();
    }
    in_stack_00000090 = uStack0000000000000030;
    in_stack_00000088 = in_stack_00000028;
    in_stack_00000080 = in_stack_00000020;
    in_stack_00000068 = in_stack_00000048;
    in_stack_00000060 = in_stack_00000040;
    in_stack_00000070 = in_stack_00000050;
    iVar1 = (**(code **)(unaff_x22 + 0x18))
                      (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000080,&stack0x00000060,
                       *(undefined8 *)(unaff_x22 + 0x28));
    if (-1 < iVar1) {
      do {
        unaff_w24 = unaff_w24 - 1;
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) goto LAB_047a4ae4;
        lVar2 = unaff_x20 + (long)(int)unaff_w24 * (long)unaff_w25;
        uVar5 = *(undefined8 *)(lVar2 + 0x28);
        uVar4 = *(undefined8 *)(lVar2 + 0x20);
                    /* try { // try from 047a49b4 to 048a49ff has its CatchHandler @ 047a49b4
                       catch() { ... } // from try @ 047a49b4 with catch @ 047a49b4
                       catch() { ... } // from try @ 047a4a5c with catch @ 047a49b4
                       catch() { ... } // from try @ 047a4a8c with catch @ 047a49b4
                       catch() { ... } // from try @ 047a4b08 with catch @ 047a49b4 */
        uVar3 = *(undefined8 *)(lVar2 + 0x30);
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
        in_stack_00000090 = in_stack_00000050;
        in_stack_00000088 = in_stack_00000048;
        in_stack_00000080 = in_stack_00000040;
        in_stack_00000060 = uVar4;
        in_stack_00000068 = uVar5;
        in_stack_00000070 = uVar3;
        iVar1 = (**(code **)(unaff_x22 + 0x18))
                          (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000080,&stack0x00000060,
                           *(undefined8 *)(unaff_x22 + 0x28));
                    /* try { // try from 047a4a00 to 048a4a5b has its CatchHandler @ 047a4a5c */
      } while (iVar1 < 0);
      if ((int)unaff_w24 <= (int)unaff_w19) {
        lVar2 = *(long *)(unaff_x21 + 0x20);
                    /* try { // try from 047a4a74 to 048a4a8b has its CatchHandler @ 047a4b00 */
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0367c9fc();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
                    /* try { // try from 047a4a8c to 048a4aef has its CatchHandler @ 047a49b4 */
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0367c9fc();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0367c9fc();
        }
        FUN_047a42cc();
        return unaff_w19;
      }
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0367c9fc();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0367c9fc();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if ((*(ushort *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      FUN_047a42cc();
    }
    unaff_w19 = unaff_w19 + 1;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) break;
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar2 = unaff_x20 + (long)(int)unaff_w19 * (long)unaff_w25;
    in_w9 = *(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135);
    in_stack_00000028 = *(undefined8 *)(lVar2 + 0x28);
    in_stack_00000020 = *(undefined8 *)(lVar2 + 0x20);
    param_1 = *(undefined8 *)(lVar2 + 0x30);
  }
LAB_047a4ae4:
                    /* WARNING: Subroutine does not return */
  FUN_03642c20();
}


