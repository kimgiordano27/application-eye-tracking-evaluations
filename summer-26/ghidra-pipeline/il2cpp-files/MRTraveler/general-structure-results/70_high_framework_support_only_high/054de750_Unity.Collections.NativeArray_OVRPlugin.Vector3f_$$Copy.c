/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 054de750
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


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
               (code *param_1,undefined1 param_2 [16],undefined1 param_3 [16])

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
  long unaff_x25;
  ulong unaff_x26;
  uint uVar5;
  ulong unaff_x27;
  ulong uVar6;
  long unaff_x28;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  
  uVar8 = param_3._8_8_;
  uVar7 = param_3._0_8_;
  uStack0000000000000108 = param_2._8_8_;
  uStack0000000000000100 = param_2._0_8_;
  uStack0000000000000110 = in_x9;
  do {
    uStack00000000000000e0 = uVar7;
    uStack00000000000000e8 = uVar8;
    uStack00000000000000f0 = in_x10;
    iVar2 = (*param_1)(*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000100,&stack0x000000e0,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if (iVar2 < 0) {
      uVar5 = (uint)unaff_x27;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar5) goto LAB_054de864;
      uVar8 = *(undefined8 *)(unaff_x28 + 0x28);
      uVar7 = *(undefined8 *)(unaff_x28 + 0x20);
      if (*(uint *)(unaff_x22 + 0x18) <= uVar5 + 1) goto LAB_054de864;
      lVar3 = unaff_x22 + (int)(uVar5 + 1) * unaff_x25;
      *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(unaff_x28 + 0x30);
      *(undefined8 *)(lVar3 + 0x28) = uVar8;
      *(undefined8 *)(lVar3 + 0x20) = uVar7;
      thunk_FUN_03d233cc(lVar3 + 0x20,0);
      uVar5 = uVar5 - 1;
      unaff_x27 = (ulong)uVar5;
      if ((int)uVar5 < unaff_w21) goto LAB_054de7f0;
      bVar1 = *(uint *)(unaff_x22 + 0x18) <= uVar5;
    }
    else {
LAB_054de7f0:
      uVar4 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar6 = unaff_x27;
      do {
        unaff_x27 = unaff_x26;
        uVar5 = (int)uVar6 + 1;
        if ((uint)uVar4 <= uVar5) goto LAB_054de864;
        lVar3 = unaff_x22 + (int)uVar5 * unaff_x25;
        *(undefined8 *)(lVar3 + 0x30) = in_stack_000000d0;
        *(undefined8 *)(lVar3 + 0x28) = in_stack_000000c8;
        *(undefined8 *)(lVar3 + 0x20) = in_stack_000000c0;
        thunk_FUN_03d233cc(lVar3 + 0x20,0);
        if (unaff_x27 == unaff_x24) {
          return;
        }
        uVar4 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x26 = unaff_x27 + 1;
        if ((uint)uVar4 <= (uint)unaff_x26) goto LAB_054de864;
        lVar3 = unaff_x22 + unaff_x26 * unaff_x25;
        in_stack_000000d0 = *(undefined8 *)(lVar3 + 0x30);
        in_stack_000000c8 = *(undefined8 *)(lVar3 + 0x28);
        in_stack_000000c0 = *(undefined8 *)(lVar3 + 0x20);
        uVar6 = unaff_x27;
      } while ((long)unaff_x27 < unaff_x23);
      bVar1 = (uint)uVar4 <= (uint)unaff_x27;
    }
    if (bVar1) {
LAB_054de864:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    unaff_x28 = unaff_x22 + (long)(int)unaff_x27 * (long)(int)unaff_x25;
    in_x10 = *(undefined8 *)(unaff_x28 + 0x30);
    uVar8 = *(undefined8 *)(unaff_x28 + 0x28);
    uVar7 = *(undefined8 *)(unaff_x28 + 0x20);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    param_1 = *(code **)(unaff_x20 + 0x18);
    uStack0000000000000110 = in_stack_000000d0;
    uStack0000000000000100 = in_stack_000000c0;
    uStack0000000000000108 = in_stack_000000c8;
  } while( true );
}


