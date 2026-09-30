/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$get_Item
ENTRY_POINT: 05f1b7d8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__get_Item
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16])

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint in_w8;
  long lVar4;
  ulong uVar5;
  undefined8 *in_x9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  ulong unaff_x27;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  
  uStack0000000000000108 = param_3._8_8_;
  uStack0000000000000100 = param_3._0_8_;
  uStack0000000000000118 = param_1._8_8_;
  uStack0000000000000110 = param_1._0_8_;
  while( true ) {
    uStack00000000000000f8 = in_x9[1];
    uStack00000000000000f0 = *in_x9;
    uVar1 = (int)unaff_x27 + 1;
                    /* try { // try from 05f1b7ec to 0601b7fb has its CatchHandler @ 05f1b7fc */
    if (in_w8 <= uVar1) break;
                    /* catch() { ... } // from try @ 05f1b76c with catch @ 05f1b7fc
                       catch() { ... } // from try @ 05f1b7ec with catch @ 05f1b7fc */
    lVar4 = unaff_x22 + (int)uVar1 * unaff_x25;
                    /* try { // try from 05f1b800 to 0601b803 has its CatchHandler @ 05f1b80c */
                    /* try { // try from 05f1b804 to 0601b80f has its CatchHandler @ 05f1b688 */
    *(undefined8 *)(lVar4 + 0x38) = uStack0000000000000108;
    *(undefined8 *)(lVar4 + 0x30) = uStack0000000000000100;
    *(undefined8 *)(lVar4 + 0x48) = uStack0000000000000118;
    *(undefined8 *)(lVar4 + 0x40) = uStack0000000000000110;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05f1b800 with catch @ 05f1b80c
                        */
    *(undefined8 *)(lVar4 + 0x28) = uStack00000000000000f8;
    *(undefined8 *)(lVar4 + 0x20) = uStack00000000000000f0;
                    /* try { // try from 05f1b810 to 0601bb13 has its CatchHandler @ 05f1b810
                       catch() { ... } // from try @ 05f1b810 with catch @ 05f1b810
                       catch() { ... } // from try @ 05f1bbec with catch @ 05f1b810
                       catch() { ... } // from try @ 05f1bcb4 with catch @ 05f1b810
                       catch() { ... } // from try @ 05f1bd60 with catch @ 05f1b810 */
    thunk_FUN_044bb4b4(lVar4 + 0x20,0);
    uVar1 = (int)unaff_x27 - 1;
    unaff_x27 = (ulong)uVar1;
    if ((int)uVar1 < unaff_w21) goto LAB_05f1b838;
    bVar2 = *(uint *)(unaff_x22 + 0x18) <= uVar1;
    while( true ) {
      if (bVar2) goto LAB_05f1b8a8;
      lVar4 = unaff_x22 + (long)(int)(uint)unaff_x27 * (long)(int)unaff_x25;
      uVar10 = *(undefined8 *)(lVar4 + 0x38);
      uVar9 = *(undefined8 *)(lVar4 + 0x30);
      uVar8 = *(undefined8 *)(lVar4 + 0x48);
      uVar7 = *(undefined8 *)(lVar4 + 0x40);
      uVar12 = *(undefined8 *)(lVar4 + 0x28);
      uVar11 = *(undefined8 *)(lVar4 + 0x20);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      in_stack_00000188 = in_stack_00000128;
      in_stack_00000180 = in_stack_00000120;
      in_stack_00000198 = in_stack_00000138;
      in_stack_00000190 = in_stack_00000130;
      in_stack_00000150 = uVar11;
      in_stack_00000158 = uVar12;
      in_stack_00000160 = uVar9;
      in_stack_00000168 = uVar10;
      in_stack_00000170 = uVar7;
      in_stack_00000178 = uVar8;
      in_stack_000001a0 = in_stack_00000140;
      in_stack_000001a8 = in_stack_00000148;
      iVar3 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000180,&stack0x00000150,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if (iVar3 < 0) break;
LAB_05f1b838:
      uVar5 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar6 = unaff_x27;
      do {
        unaff_x27 = unaff_x26;
        uVar1 = (int)uVar6 + 1;
        if ((uint)uVar5 <= uVar1) goto LAB_05f1b8a8;
        lVar4 = unaff_x22 + (int)uVar1 * unaff_x25;
        *(undefined8 *)(lVar4 + 0x38) = in_stack_00000138;
        *(undefined8 *)(lVar4 + 0x30) = in_stack_00000130;
        *(undefined8 *)(lVar4 + 0x48) = in_stack_00000148;
        *(undefined8 *)(lVar4 + 0x40) = in_stack_00000140;
        *(undefined8 *)(lVar4 + 0x28) = in_stack_00000128;
        *(undefined8 *)(lVar4 + 0x20) = in_stack_00000120;
        thunk_FUN_044bb4b4(lVar4 + 0x20,0);
        if (unaff_x27 == unaff_x24) {
          return;
        }
        uVar5 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x26 = unaff_x27 + 1;
        if ((uint)uVar5 <= (uint)unaff_x26) goto LAB_05f1b8a8;
        lVar4 = unaff_x22 + unaff_x26 * unaff_x25;
        in_stack_00000138 = *(undefined8 *)(lVar4 + 0x38);
        in_stack_00000130 = *(undefined8 *)(lVar4 + 0x30);
        in_stack_00000148 = *(undefined8 *)(lVar4 + 0x48);
        in_stack_00000140 = *(undefined8 *)(lVar4 + 0x40);
        in_stack_00000128 = *(undefined8 *)(lVar4 + 0x28);
        in_stack_00000120 = *(undefined8 *)(lVar4 + 0x20);
        uVar6 = unaff_x27;
      } while ((long)unaff_x27 < unaff_x23);
      bVar2 = (uint)uVar5 <= (uint)unaff_x27;
    }
    in_w8 = *(uint *)(unaff_x22 + 0x18);
    if (in_w8 <= (uint)unaff_x27) break;
    in_x9 = (undefined8 *)(lVar4 + 0x20);
    uStack0000000000000108 = *(undefined8 *)(lVar4 + 0x38);
    uStack0000000000000100 = *(undefined8 *)(lVar4 + 0x30);
    uStack0000000000000118 = *(undefined8 *)(lVar4 + 0x48);
    uStack0000000000000110 = *(undefined8 *)(lVar4 + 0x40);
  }
LAB_05f1b8a8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


