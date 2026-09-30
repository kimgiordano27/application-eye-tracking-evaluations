/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 05f1d1e0
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


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy(void)

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
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 uStack00000000000001c0;
  undefined8 uStack00000000000001c8;
  undefined8 uStack00000000000001d0;
  undefined8 uStack00000000000001d8;
  undefined8 uStack00000000000001e0;
  undefined8 uStack00000000000001e8;
  
  do {
                    /* try { // try from 05f1d1ec to 0601d237 has its CatchHandler @ 05f1d1ec
                       catch() { ... } // from try @ 05f1d1ec with catch @ 05f1d1ec
                       catch() { ... } // from try @ 05f1d2a4 with catch @ 05f1d1ec
                       catch() { ... } // from try @ 05f1d2d4 with catch @ 05f1d1ec
                       catch() { ... } // from try @ 05f1d354 with catch @ 05f1d1ec */
    uStack00000000000001c8 = in_stack_00000048;
    uStack00000000000001c0 = in_stack_00000040;
    uStack00000000000001d8 = in_stack_00000058;
    uStack00000000000001d0 = in_stack_00000050;
    uStack00000000000001e8 = in_stack_00000068;
    uStack00000000000001e0 = in_stack_00000060;
    iVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000200,&stack0x000001c0,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if (iVar2 < 0) {
      uVar5 = (uint)unaff_x27;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar5) goto LAB_05f1d338;
      uVar12 = *(undefined8 *)(unaff_x28 + 0x38);
      uVar11 = *(undefined8 *)(unaff_x28 + 0x30);
      uVar8 = *(undefined8 *)(unaff_x28 + 0x48);
      uVar7 = *(undefined8 *)(unaff_x28 + 0x40);
                    /* try { // try from 05f1d238 to 0601d2a3 has its CatchHandler @ 05f1d2a4 */
      uVar10 = *(undefined8 *)(unaff_x28 + 0x28);
      uVar9 = *(undefined8 *)(unaff_x28 + 0x20);
      if (*(uint *)(unaff_x22 + 0x18) <= uVar5 + 1) goto LAB_05f1d338;
      lVar3 = unaff_x22 + (int)(uVar5 + 1) * unaff_x25;
      *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(unaff_x28 + 0x50);
      *(undefined8 *)(lVar3 + 0x38) = uVar12;
      *(undefined8 *)(lVar3 + 0x30) = uVar11;
      *(undefined8 *)(lVar3 + 0x48) = uVar8;
      *(undefined8 *)(lVar3 + 0x40) = uVar7;
      *(undefined8 *)(lVar3 + 0x28) = uVar10;
      *(undefined8 *)(lVar3 + 0x20) = uVar9;
      thunk_FUN_044bb4b4(lVar3 + 0x28,0);
      uVar5 = uVar5 - 1;
      unaff_x27 = (ulong)uVar5;
      if ((int)uVar5 < unaff_w21) goto LAB_05f1d2b4;
      bVar1 = *(uint *)(unaff_x22 + 0x18) <= uVar5;
    }
    else {
LAB_05f1d2b4:
      uVar4 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar6 = unaff_x27;
      do {
        unaff_x27 = unaff_x26;
        uVar5 = (int)uVar6 + 1;
        if ((uint)uVar4 <= uVar5) goto LAB_05f1d338;
        lVar3 = unaff_x22 + (int)uVar5 * unaff_x25;
        *(undefined8 *)(lVar3 + 0x50) = in_stack_000001b0;
        *(undefined8 *)(lVar3 + 0x38) = in_stack_00000198;
        *(undefined8 *)(lVar3 + 0x30) = in_stack_00000190;
        *(undefined8 *)(lVar3 + 0x48) = in_stack_000001a8;
        *(undefined8 *)(lVar3 + 0x40) = in_stack_000001a0;
        *(undefined8 *)(lVar3 + 0x28) = in_stack_00000188;
        *(undefined8 *)(lVar3 + 0x20) = in_stack_00000180;
        thunk_FUN_044bb4b4(lVar3 + 0x28,0);
        if (unaff_x27 == unaff_x24) {
          return;
        }
        uVar4 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x26 = unaff_x27 + 1;
        if ((uint)uVar4 <= (uint)unaff_x26) goto LAB_05f1d338;
        lVar3 = unaff_x22 + unaff_x26 * unaff_x25;
        in_stack_00000198 = *(undefined8 *)(lVar3 + 0x38);
        in_stack_00000190 = *(undefined8 *)(lVar3 + 0x30);
        in_stack_000001a8 = *(undefined8 *)(lVar3 + 0x48);
        in_stack_000001a0 = *(undefined8 *)(lVar3 + 0x40);
        in_stack_000001b0 = *(undefined8 *)(lVar3 + 0x50);
        in_stack_00000188 = *(undefined8 *)(lVar3 + 0x28);
        in_stack_00000180 = *(undefined8 *)(lVar3 + 0x20);
        uVar6 = unaff_x27;
      } while ((long)unaff_x27 < unaff_x23);
      bVar1 = (uint)uVar4 <= (uint)unaff_x27;
    }
    if (bVar1) {
LAB_05f1d338:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    unaff_x28 = unaff_x22 + (long)(int)unaff_x27 * (long)(int)unaff_x25;
    in_stack_00000058 = *(undefined8 *)(unaff_x28 + 0x38);
    in_stack_00000050 = *(undefined8 *)(unaff_x28 + 0x30);
    in_stack_00000068 = *(undefined8 *)(unaff_x28 + 0x48);
    in_stack_00000060 = *(undefined8 *)(unaff_x28 + 0x40);
    in_stack_00000048 = *(undefined8 *)(unaff_x28 + 0x28);
    in_stack_00000040 = *(undefined8 *)(unaff_x28 + 0x20);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
  } while( true );
}


