/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 054dfb9c
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


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor(int param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  uint unaff_w26;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint unaff_w29;
  int iStack0000000000000000;
  int iStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while (uVar7 = unaff_w26, param_1 < 0) {
    if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w29) ||
       (*(uint *)(unaff_x19 + 0x18) <= unaff_w20 + unaff_w21)) goto LAB_054dfc30;
    uVar8 = *unaff_x25;
    lVar2 = unaff_x19 + (long)(int)(unaff_w20 + unaff_w21) * 0x10;
    puVar6 = (undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x28) = unaff_x25[1];
    *puVar6 = uVar8;
    thunk_FUN_03d233cc(puVar6,0);
    if (iStack0000000000000004 < (int)uVar7) goto LAB_054dfbec;
    unaff_w26 = uVar7 * 2;
    if ((int)unaff_w26 < in_stack_00000018._4_4_) {
      uVar5 = unaff_w26 + iStack0000000000000000;
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar5 - 1) || (*(uint *)(unaff_x19 + 0x18) <= uVar5))
      goto LAB_054dfc30;
      if (unaff_x23 == 0) goto LAB_054dfc34;
      lVar2 = unaff_x19 + (long)(int)(uVar5 - 1) * 0x10;
      lVar1 = unaff_x19 + (long)(int)uVar5 * 0x10;
      uVar8 = *(undefined8 *)(lVar2 + 0x20);
      uVar3 = *(undefined8 *)(lVar2 + 0x28);
      uVar9 = *(undefined8 *)(lVar1 + 0x20);
      uVar4 = *(undefined8 *)(lVar1 + 0x28);
      if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      uVar5 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),uVar8,uVar3,uVar9,uVar4,
                         *(undefined8 *)(unaff_x23 + 0x28));
      unaff_w26 = unaff_w26 | uVar5 >> 0x1f;
    }
    unaff_w29 = unaff_w20 + unaff_w26;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_054dfc30;
    unaff_x24 = (long)(int)unaff_w29;
    lVar2 = unaff_x19 + unaff_x24 * 0x10;
    unaff_x25 = (undefined8 *)(lVar2 + 0x20);
    uVar8 = *unaff_x25;
    if (unaff_x23 == 0) {
LAB_054dfc34:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar9 = *(undefined8 *)(lVar2 + 0x28);
    if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    param_1 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),in_stack_00000008,in_stack_00000010,uVar8
                         ,uVar9,*(undefined8 *)(unaff_x23 + 0x28));
    unaff_w21 = uVar7;
  }
  unaff_w29 = unaff_w20 + unaff_w21;
  unaff_x24 = (long)(int)unaff_w29;
LAB_054dfbec:
  if (unaff_w29 < *(uint *)(unaff_x19 + 0x18)) {
    lVar2 = unaff_x19 + unaff_x24 * 0x10;
    puVar6 = (undefined8 *)(lVar2 + 0x20);
    *puVar6 = in_stack_00000008;
    *(undefined8 *)(lVar2 + 0x28) = in_stack_00000010;
    thunk_FUN_03d233cc(puVar6,0);
    return;
  }
LAB_054dfc30:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


