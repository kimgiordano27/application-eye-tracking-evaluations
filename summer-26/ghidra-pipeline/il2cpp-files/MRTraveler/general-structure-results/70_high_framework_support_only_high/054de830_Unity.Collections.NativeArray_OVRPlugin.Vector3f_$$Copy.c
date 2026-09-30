/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 054de830
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
               (long param_1,undefined1 param_2 [16],long param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  
  uVar12 = param_2._8_8_;
  uVar10 = param_2._0_8_;
  while( true ) {
    *(undefined8 *)(param_1 + 0x28) = uVar12;
    *(undefined8 *)(param_1 + 0x20) = uVar10;
    thunk_FUN_03d233cc(param_3,param_4);
    if (unaff_x26 == unaff_x24) {
      return;
    }
    uVar2 = unaff_x26 + 1;
    uVar5 = (uint)*(undefined8 *)(unaff_x22 + 0x18);
    if (uVar5 <= (uint)uVar2) break;
    lVar8 = unaff_x22 + uVar2 * unaff_x25;
    uVar9 = *(undefined8 *)(lVar8 + 0x30);
    uVar12 = *(undefined8 *)(lVar8 + 0x28);
    uVar10 = *(undefined8 *)(lVar8 + 0x20);
    if (unaff_x23 <= (long)unaff_x26) {
      bVar3 = uVar5 <= (uint)unaff_x26;
      while( true ) {
        if (bVar3) goto LAB_054de864;
        uVar5 = (uint)unaff_x26;
        lVar8 = unaff_x22 + (long)(int)uVar5 * (long)(int)unaff_x25;
        uVar6 = *(undefined8 *)(lVar8 + 0x30);
        uVar13 = *(undefined8 *)(lVar8 + 0x28);
        uVar11 = *(undefined8 *)(lVar8 + 0x20);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
          FUN_03cf1244();
        }
        in_stack_000000e0 = uVar11;
        in_stack_000000e8 = uVar13;
        in_stack_000000f0 = uVar6;
        in_stack_00000100 = uVar10;
        in_stack_00000108 = uVar12;
        in_stack_00000110 = uVar9;
        iVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000100,&stack0x000000e0,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if (-1 < iVar4) break;
        if (*(uint *)(unaff_x22 + 0x18) <= uVar5) goto LAB_054de864;
        uVar11 = *(undefined8 *)(lVar8 + 0x28);
        uVar6 = *(undefined8 *)(lVar8 + 0x20);
        if (*(uint *)(unaff_x22 + 0x18) <= uVar5 + 1) goto LAB_054de864;
        lVar7 = unaff_x22 + (int)(uVar5 + 1) * unaff_x25;
        *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(lVar8 + 0x30);
        *(undefined8 *)(lVar7 + 0x28) = uVar11;
        *(undefined8 *)(lVar7 + 0x20) = uVar6;
        thunk_FUN_03d233cc(lVar7 + 0x20,0);
        uVar5 = uVar5 - 1;
        unaff_x26 = (ulong)uVar5;
        if ((int)uVar5 < unaff_w21) break;
        bVar3 = *(uint *)(unaff_x22 + 0x18) <= uVar5;
      }
      uVar5 = *(uint *)(unaff_x22 + 0x18);
    }
    uVar1 = (int)unaff_x26 + 1;
    if (uVar5 <= uVar1) break;
    param_1 = unaff_x22 + (int)uVar1 * unaff_x25;
    param_3 = param_1 + 0x20;
    param_4 = 0;
    *(undefined8 *)(param_1 + 0x30) = uVar9;
    unaff_x26 = uVar2;
  }
LAB_054de864:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


