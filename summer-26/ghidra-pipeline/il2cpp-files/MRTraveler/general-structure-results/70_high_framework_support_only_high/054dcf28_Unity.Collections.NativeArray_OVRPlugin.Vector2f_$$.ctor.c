/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 054dcf28
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>___ctor
               (undefined1 param_1 [16],undefined1 param_2 [16])

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 in_x9;
  undefined8 in_x10;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  int iVar5;
  long unaff_x25;
  ulong unaff_x26;
  uint uVar6;
  ulong unaff_x27;
  ulong uVar7;
  long unaff_x28;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  
  uVar10 = param_2._8_8_;
  uVar8 = param_2._0_8_;
  uVar9 = param_1._0_8_;
  uVar11 = param_1._8_8_;
  do {
    uStack00000000000000e0 = uVar8;
    uStack00000000000000e8 = uVar10;
    uStack00000000000000f0 = in_x10;
    uStack0000000000000100 = uVar9;
    uStack0000000000000108 = uVar11;
    uStack0000000000000110 = in_x9;
    iVar2 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000100,&stack0x000000e0,
                       *(undefined8 *)(unaff_x20 + 0x28));
    iVar5 = (int)unaff_x25;
    if (iVar2 < 0) {
      uVar6 = (uint)unaff_x27;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar6) goto LAB_054dd01c;
      uVar11 = *(undefined8 *)(unaff_x28 + 0x28);
      uVar9 = *(undefined8 *)(unaff_x28 + 0x20);
      if (*(uint *)(unaff_x22 + 0x18) <= uVar6 + 1) goto LAB_054dd01c;
      lVar3 = unaff_x22 + (long)(int)(uVar6 + 1) * (long)iVar5;
      uVar6 = uVar6 - 1;
      unaff_x27 = (ulong)uVar6;
      *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(unaff_x28 + 0x30);
      *(undefined8 *)(lVar3 + 0x28) = uVar11;
      *(undefined8 *)(lVar3 + 0x20) = uVar9;
      if ((int)uVar6 < unaff_w21) goto LAB_054dcfb8;
      bVar1 = *(uint *)(unaff_x22 + 0x18) <= uVar6;
    }
    else {
LAB_054dcfb8:
                    /* try { // try from 054dcfb8 to 055dd0db has its CatchHandler @ 054dcfb8
                       catch() { ... } // from try @ 054dcfb8 with catch @ 054dcfb8
                       catch() { ... } // from try @ 054dd224 with catch @ 054dcfb8
                       catch() { ... } // from try @ 054dd2b0 with catch @ 054dcfb8
                       catch() { ... } // from try @ 054dd2b8 with catch @ 054dcfb8
                       catch() { ... } // from try @ 054dd360 with catch @ 054dcfb8 */
      uVar4 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar7 = unaff_x27;
      do {
        unaff_x27 = unaff_x26;
        uVar6 = (int)uVar7 + 1;
        if ((uint)uVar4 <= uVar6) goto LAB_054dd01c;
        lVar3 = unaff_x22 + (long)(int)uVar6 * (long)iVar5;
        *(undefined8 *)(lVar3 + 0x30) = in_stack_000000d0;
        *(undefined8 *)(lVar3 + 0x28) = in_stack_000000c8;
        *(undefined8 *)(lVar3 + 0x20) = in_stack_000000c0;
        if (unaff_x27 == unaff_x24) {
          return;
        }
        uVar4 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x26 = unaff_x27 + 1;
        if ((uint)uVar4 <= (uint)unaff_x26) goto LAB_054dd01c;
        lVar3 = unaff_x22 + unaff_x26 * unaff_x25;
        in_stack_000000d0 = *(undefined8 *)(lVar3 + 0x30);
        in_stack_000000c8 = *(undefined8 *)(lVar3 + 0x28);
        in_stack_000000c0 = *(undefined8 *)(lVar3 + 0x20);
        uVar7 = unaff_x27;
      } while ((long)unaff_x27 < unaff_x23);
      bVar1 = (uint)uVar4 <= (uint)unaff_x27;
    }
    if (bVar1) {
LAB_054dd01c:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    unaff_x28 = unaff_x22 + (long)(int)unaff_x27 * (long)iVar5;
    in_x10 = *(undefined8 *)(unaff_x28 + 0x30);
    uVar10 = *(undefined8 *)(unaff_x28 + 0x28);
    uVar8 = *(undefined8 *)(unaff_x28 + 0x20);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_x9 = in_stack_000000d0;
    uVar9 = in_stack_000000c0;
    uVar11 = in_stack_000000c8;
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
  } while( true );
}


