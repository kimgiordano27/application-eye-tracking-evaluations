/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 054dcea0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>___ctor(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  int iVar7;
  long unaff_x25;
  ulong unaff_x26;
  ulong uVar8;
  uint uVar9;
  ulong unaff_x27;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 uStack00000000000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  
  do {
    uVar8 = unaff_x26;
    uVar9 = (uint)param_1;
    uStack00000000000000d0 = *(undefined8 *)(in_x9 + 0x30);
    uStack00000000000000c8 = *(undefined8 *)(in_x9 + 0x28);
    uStack00000000000000c0 = *(undefined8 *)(in_x9 + 0x20);
    iVar7 = (int)unaff_x25;
    if (unaff_x23 <= (long)unaff_x27) {
      bVar3 = uVar9 <= (uint)unaff_x27;
      while( true ) {
        uVar2 = uStack00000000000000d0;
        uVar14 = uStack00000000000000c8;
        uVar12 = uStack00000000000000c0;
        if (bVar3) goto LAB_054dd01c;
        uVar9 = (uint)unaff_x27;
        lVar10 = unaff_x22 + (long)(int)uVar9 * (long)iVar7;
        uVar5 = *(undefined8 *)(lVar10 + 0x30);
        uVar13 = *(undefined8 *)(lVar10 + 0x28);
        uVar11 = *(undefined8 *)(lVar10 + 0x20);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_03cf1244();
        }
        in_stack_00000108 = uVar14;
        in_stack_00000100 = uVar12;
        in_stack_000000e0 = uVar11;
        in_stack_000000e8 = uVar13;
        in_stack_000000f0 = uVar5;
        in_stack_00000110 = uVar2;
        iVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000100,&stack0x000000e0,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if (-1 < iVar4) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar9) goto LAB_054dd01c;
        uVar14 = *(undefined8 *)(lVar10 + 0x28);
        uVar12 = *(undefined8 *)(lVar10 + 0x20);
        if (*(uint *)(unaff_x22 + 0x18) <= uVar9 + 1) goto LAB_054dd01c;
        lVar6 = unaff_x22 + (long)(int)(uVar9 + 1) * (long)iVar7;
        uVar9 = uVar9 - 1;
        unaff_x27 = (ulong)uVar9;
        *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar10 + 0x30);
        *(undefined8 *)(lVar6 + 0x28) = uVar14;
        *(undefined8 *)(lVar6 + 0x20) = uVar12;
        if ((int)uVar9 < unaff_w21) break;
        bVar3 = *(uint *)(unaff_x22 + 0x18) <= uVar9;
      }
      uVar9 = *(uint *)(unaff_x22 + 0x18);
    }
    uVar1 = (int)unaff_x27 + 1;
    if (uVar9 <= uVar1) {
LAB_054dd01c:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    lVar10 = unaff_x22 + (long)(int)uVar1 * (long)iVar7;
    *(undefined8 *)(lVar10 + 0x30) = uStack00000000000000d0;
    *(undefined8 *)(lVar10 + 0x28) = uStack00000000000000c8;
    *(undefined8 *)(lVar10 + 0x20) = uStack00000000000000c0;
    if (uVar8 == unaff_x24) {
      return;
    }
    param_1 = *(undefined8 *)(unaff_x22 + 0x18);
    unaff_x26 = uVar8 + 1;
    if ((uint)param_1 <= (uint)unaff_x26) goto LAB_054dd01c;
    in_x9 = unaff_x22 + unaff_x26 * unaff_x25;
    unaff_x27 = uVar8;
  } while( true );
}


