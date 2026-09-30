/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Allocate
ENTRY_POINT: 054dcfc0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Allocate
               (ulong param_1,undefined1 param_2 [16])

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  int iVar6;
  long unaff_x25;
  ulong unaff_x26;
  uint uVar7;
  ulong uVar8;
  ulong unaff_x27;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  
  uVar9 = param_2._0_8_;
  uVar11 = param_2._8_8_;
  while( true ) {
    uStack0000000000000008 = uVar11;
    uStack0000000000000000 = uVar9;
    uVar8 = unaff_x26;
    uStack0000000000000010 = in_stack_000000d0;
    uVar7 = (int)unaff_x27 + 1;
    if ((uint)param_1 <= uVar7) break;
    iVar6 = (int)unaff_x25;
    lVar5 = unaff_x22 + (long)(int)uVar7 * (long)iVar6;
    *(undefined8 *)(lVar5 + 0x30) = in_stack_000000d0;
    *(undefined8 *)(lVar5 + 0x28) = uStack0000000000000008;
    *(undefined8 *)(lVar5 + 0x20) = uStack0000000000000000;
    if (uVar8 == unaff_x24) {
      return;
    }
    param_1 = *(ulong *)(unaff_x22 + 0x18);
    unaff_x26 = uVar8 + 1;
    if ((uint)param_1 <= (uint)unaff_x26) break;
    lVar5 = unaff_x22 + unaff_x26 * unaff_x25;
    in_stack_000000d0 = *(undefined8 *)(lVar5 + 0x30);
    uVar11 = *(undefined8 *)(lVar5 + 0x28);
    uVar9 = *(undefined8 *)(lVar5 + 0x20);
    unaff_x27 = uVar8;
    if (unaff_x23 <= (long)uVar8) {
      bVar1 = (uint)param_1 <= (uint)uVar8;
      while( true ) {
        if (bVar1) goto LAB_054dd01c;
        uVar7 = (uint)uVar8;
        lVar5 = unaff_x22 + (long)(int)uVar7 * (long)iVar6;
        uVar3 = *(undefined8 *)(lVar5 + 0x30);
        uVar12 = *(undefined8 *)(lVar5 + 0x28);
        uVar10 = *(undefined8 *)(lVar5 + 0x20);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_03cf1244();
        }
        in_stack_000000e0 = uVar10;
        in_stack_000000e8 = uVar12;
        in_stack_000000f0 = uVar3;
        in_stack_00000100 = uVar9;
        in_stack_00000108 = uVar11;
        in_stack_00000110 = in_stack_000000d0;
        iVar2 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000100,&stack0x000000e0,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if (-1 < iVar2) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar7) goto LAB_054dd01c;
        uVar10 = *(undefined8 *)(lVar5 + 0x28);
        uVar3 = *(undefined8 *)(lVar5 + 0x20);
        if (*(uint *)(unaff_x22 + 0x18) <= uVar7 + 1) goto LAB_054dd01c;
        lVar4 = unaff_x22 + (long)(int)(uVar7 + 1) * (long)iVar6;
        uVar7 = uVar7 - 1;
        uVar8 = (ulong)uVar7;
        *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar5 + 0x30);
        *(undefined8 *)(lVar4 + 0x28) = uVar10;
        *(undefined8 *)(lVar4 + 0x20) = uVar3;
        if ((int)uVar7 < unaff_w21) break;
        bVar1 = *(uint *)(unaff_x22 + 0x18) <= uVar7;
      }
      param_1 = (ulong)*(uint *)(unaff_x22 + 0x18);
      unaff_x27 = uVar8;
    }
  }
LAB_054dd01c:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


