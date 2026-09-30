/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Allocate
ENTRY_POINT: 05f1b74c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Allocate(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  uint uVar5;
  ulong unaff_x27;
  ulong uVar6;
  long unaff_x28;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
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
  
  do {
    uVar10 = *(undefined8 *)(unaff_x28 + 0x38);
    uVar9 = *(undefined8 *)(unaff_x28 + 0x30);
    uVar8 = *(undefined8 *)(unaff_x28 + 0x48);
    uVar7 = *(undefined8 *)(unaff_x28 + 0x40);
    uVar12 = *(undefined8 *)(unaff_x28 + 0x28);
    uVar11 = *(undefined8 *)(unaff_x28 + 0x20);
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 05f1b6d4 with catch @ 05f1b754
                       try { // try from 05f1b754 to 0601b76b has its CatchHandler @ 05f1b688 */
    uStack0000000000000090 = uVar11;
    uStack0000000000000098 = uVar12;
    uStack00000000000000a0 = uVar9;
    uStack00000000000000a8 = uVar10;
    uStack00000000000000b0 = uVar7;
    uStack00000000000000b8 = uVar8;
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
                    /* try { // try from 05f1b76c to 0601b783 has its CatchHandler @ 05f1b7fc */
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
                    /* try { // try from 05f1b784 to 0601b7eb has its CatchHandler @ 05f1b688 */
      FUN_04481fb8();
    }
    in_stack_00000188 = in_stack_000000c8;
    in_stack_00000180 = in_stack_000000c0;
    in_stack_00000198 = in_stack_000000d8;
    in_stack_00000190 = in_stack_000000d0;
    in_stack_000001a8 = in_stack_000000e8;
    in_stack_000001a0 = in_stack_000000e0;
    in_stack_00000150 = uVar11;
    in_stack_00000158 = uVar12;
    in_stack_00000160 = uVar9;
    in_stack_00000168 = uVar10;
    in_stack_00000170 = uVar7;
    in_stack_00000178 = uVar8;
    iVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000180,&stack0x00000150,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if (iVar2 < 0) {
      uVar5 = (uint)unaff_x27;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar5) goto LAB_05f1b8a8;
      uVar11 = *(undefined8 *)(unaff_x28 + 0x30);
      uVar8 = *(undefined8 *)(unaff_x28 + 0x48);
      uVar7 = *(undefined8 *)(unaff_x28 + 0x40);
      uVar10 = *(undefined8 *)(unaff_x28 + 0x28);
      uVar9 = *(undefined8 *)(unaff_x28 + 0x20);
      if (*(uint *)(unaff_x22 + 0x18) <= uVar5 + 1) goto LAB_05f1b8a8;
      lVar3 = unaff_x22 + (int)(uVar5 + 1) * unaff_x25;
      *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(unaff_x28 + 0x38);
      *(undefined8 *)(lVar3 + 0x30) = uVar11;
      *(undefined8 *)(lVar3 + 0x48) = uVar8;
      *(undefined8 *)(lVar3 + 0x40) = uVar7;
      *(undefined8 *)(lVar3 + 0x28) = uVar10;
      *(undefined8 *)(lVar3 + 0x20) = uVar9;
      thunk_FUN_044bb4b4(lVar3 + 0x20,0);
      uVar5 = uVar5 - 1;
      unaff_x27 = (ulong)uVar5;
      if ((int)uVar5 < unaff_w21) goto LAB_05f1b838;
      bVar1 = *(uint *)(unaff_x22 + 0x18) <= uVar5;
    }
    else {
LAB_05f1b838:
      uVar4 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar6 = unaff_x27;
      do {
        unaff_x27 = unaff_x26;
        uVar5 = (int)uVar6 + 1;
        if ((uint)uVar4 <= uVar5) goto LAB_05f1b8a8;
        lVar3 = unaff_x22 + (int)uVar5 * unaff_x25;
        *(undefined8 *)(lVar3 + 0x38) = in_stack_00000138;
        *(undefined8 *)(lVar3 + 0x30) = in_stack_00000130;
        *(undefined8 *)(lVar3 + 0x48) = in_stack_00000148;
        *(undefined8 *)(lVar3 + 0x40) = in_stack_00000140;
        *(undefined8 *)(lVar3 + 0x28) = in_stack_00000128;
        *(undefined8 *)(lVar3 + 0x20) = in_stack_00000120;
        thunk_FUN_044bb4b4(lVar3 + 0x20,0);
        if (unaff_x27 == unaff_x24) {
          return;
        }
        uVar4 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x26 = unaff_x27 + 1;
        if ((uint)uVar4 <= (uint)unaff_x26) goto LAB_05f1b8a8;
        lVar3 = unaff_x22 + unaff_x26 * unaff_x25;
        in_stack_00000138 = *(undefined8 *)(lVar3 + 0x38);
        in_stack_00000130 = *(undefined8 *)(lVar3 + 0x30);
        in_stack_00000148 = *(undefined8 *)(lVar3 + 0x48);
        in_stack_00000140 = *(undefined8 *)(lVar3 + 0x40);
        in_stack_00000128 = *(undefined8 *)(lVar3 + 0x28);
        in_stack_00000120 = *(undefined8 *)(lVar3 + 0x20);
        uVar6 = unaff_x27;
      } while ((long)unaff_x27 < unaff_x23);
      bVar1 = (uint)uVar4 <= (uint)unaff_x27;
    }
    if (bVar1) {
LAB_05f1b8a8:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    unaff_x28 = unaff_x22 + (long)(int)unaff_x27 * (long)(int)unaff_x25;
    in_stack_000000c0 = in_stack_00000120;
    in_stack_000000c8 = in_stack_00000128;
    in_stack_000000d0 = in_stack_00000130;
    in_stack_000000d8 = in_stack_00000138;
    in_stack_000000e0 = in_stack_00000140;
    in_stack_000000e8 = in_stack_00000148;
  } while( true );
}


