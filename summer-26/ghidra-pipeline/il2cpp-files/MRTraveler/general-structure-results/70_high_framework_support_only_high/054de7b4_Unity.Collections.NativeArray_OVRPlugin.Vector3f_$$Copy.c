/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 054de7b4
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


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(long param_1,undefined1 param_2 [16])

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 in_x9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  uint uVar6;
  ulong unaff_x27;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  
  uVar8 = param_2._8_8_;
  uVar3 = param_2._0_8_;
  while( true ) {
    lVar4 = unaff_x22 + param_1 * unaff_x25;
    *(undefined8 *)(lVar4 + 0x30) = in_x9;
    *(undefined8 *)(lVar4 + 0x28) = uVar8;
    *(undefined8 *)(lVar4 + 0x20) = uVar3;
    thunk_FUN_03d233cc(lVar4 + 0x20,0);
    uVar6 = (int)unaff_x27 - 1;
    unaff_x27 = (ulong)uVar6;
    if ((int)uVar6 < unaff_w21) goto LAB_054de7f0;
    bVar1 = *(uint *)(unaff_x22 + 0x18) <= uVar6;
    while( true ) {
      if (bVar1) goto LAB_054de864;
      uVar6 = (uint)unaff_x27;
      lVar4 = unaff_x22 + (long)(int)uVar6 * (long)(int)unaff_x25;
      uVar3 = *(undefined8 *)(lVar4 + 0x30);
      uVar9 = *(undefined8 *)(lVar4 + 0x28);
      uVar8 = *(undefined8 *)(lVar4 + 0x20);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      in_stack_00000108 = in_stack_000000c8;
      in_stack_00000100 = in_stack_000000c0;
      in_stack_000000e0 = uVar8;
      in_stack_000000e8 = uVar9;
      in_stack_000000f0 = uVar3;
      in_stack_00000110 = in_stack_000000d0;
      iVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000100,&stack0x000000e0,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if (iVar2 < 0) break;
LAB_054de7f0:
      uVar5 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar7 = unaff_x27;
      do {
        unaff_x27 = unaff_x26;
        uVar6 = (int)uVar7 + 1;
        if ((uint)uVar5 <= uVar6) goto LAB_054de864;
        lVar4 = unaff_x22 + (int)uVar6 * unaff_x25;
        *(undefined8 *)(lVar4 + 0x30) = in_stack_000000d0;
        *(undefined8 *)(lVar4 + 0x28) = in_stack_000000c8;
        *(undefined8 *)(lVar4 + 0x20) = in_stack_000000c0;
        thunk_FUN_03d233cc(lVar4 + 0x20,0);
        if (unaff_x27 == unaff_x24) {
          return;
        }
        uVar5 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x26 = unaff_x27 + 1;
        if ((uint)uVar5 <= (uint)unaff_x26) goto LAB_054de864;
        lVar4 = unaff_x22 + unaff_x26 * unaff_x25;
        in_stack_000000d0 = *(undefined8 *)(lVar4 + 0x30);
        in_stack_000000c8 = *(undefined8 *)(lVar4 + 0x28);
        in_stack_000000c0 = *(undefined8 *)(lVar4 + 0x20);
        uVar7 = unaff_x27;
      } while ((long)unaff_x27 < unaff_x23);
      bVar1 = (uint)uVar5 <= (uint)unaff_x27;
    }
    if (*(uint *)(unaff_x22 + 0x18) <= uVar6) break;
    in_x9 = *(undefined8 *)(lVar4 + 0x30);
    uVar8 = *(undefined8 *)(lVar4 + 0x28);
    uVar3 = *(undefined8 *)(lVar4 + 0x20);
    if (*(uint *)(unaff_x22 + 0x18) <= uVar6 + 1) break;
    param_1 = (long)(int)(uVar6 + 1);
  }
LAB_054de864:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


