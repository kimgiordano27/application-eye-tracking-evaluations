/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$AsReadOnly
ENTRY_POINT: 054dfab0
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


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__AsReadOnly(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  int in_w3;
  long in_x4;
  long in_x5;
  uint in_w8;
  int in_w9;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x24;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint unaff_w29;
  int iStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  iStack0000000000000004 = in_w9 >> 1;
  if ((int)unaff_w21 <= iStack0000000000000004) {
    do {
      uVar8 = unaff_w21 * 2;
      if ((int)uVar8 < in_stack_00000018._4_4_) {
        uVar5 = uVar8 + in_w3;
        if ((*(uint *)(unaff_x19 + 0x18) <= uVar5 - 1) || (*(uint *)(unaff_x19 + 0x18) <= uVar5))
        goto LAB_054dfc30;
        if (in_x4 == 0) goto LAB_054dfc34;
        lVar1 = unaff_x19 + (long)(int)(uVar5 - 1) * 0x10;
        lVar2 = unaff_x19 + (long)(int)uVar5 * 0x10;
        uVar9 = *(undefined8 *)(lVar1 + 0x20);
        uVar3 = *(undefined8 *)(lVar1 + 0x28);
        uVar10 = *(undefined8 *)(lVar2 + 0x20);
        uVar4 = *(undefined8 *)(lVar2 + 0x28);
        if ((*(byte *)(*(long *)(in_x5 + 0x20) + 0x135) & 1) == 0) {
          FUN_03cf1244();
        }
        uVar5 = (**(code **)(in_x4 + 0x18))
                          (*(undefined8 *)(in_x4 + 0x40),uVar9,uVar3,uVar10,uVar4,
                           *(undefined8 *)(in_x4 + 0x28));
        uVar8 = uVar8 | uVar5 >> 0x1f;
      }
      unaff_w29 = unaff_w20 + uVar8;
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w29) goto LAB_054dfc30;
      unaff_x24 = (long)(int)unaff_w29;
      lVar1 = unaff_x19 + unaff_x24 * 0x10;
      uVar9 = *(undefined8 *)(lVar1 + 0x20);
      if (in_x4 == 0) {
LAB_054dfc34:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar10 = *(undefined8 *)(lVar1 + 0x28);
      if ((*(byte *)(*(long *)(in_x5 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      iVar6 = (**(code **)(in_x4 + 0x18))
                        (*(undefined8 *)(in_x4 + 0x40),in_stack_00000008,in_stack_00000010,uVar9,
                         uVar10,*(undefined8 *)(in_x4 + 0x28));
      if (-1 < iVar6) {
        unaff_w29 = unaff_w20 + unaff_w21;
        unaff_x24 = (long)(int)unaff_w29;
        break;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w29) ||
         (*(uint *)(unaff_x19 + 0x18) <= unaff_w20 + unaff_w21)) goto LAB_054dfc30;
      uVar9 = *(undefined8 *)(lVar1 + 0x20);
      lVar2 = unaff_x19 + (long)(int)(unaff_w20 + unaff_w21) * 0x10;
      puVar7 = (undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      *puVar7 = uVar9;
      thunk_FUN_03d233cc(puVar7,0);
      unaff_w21 = uVar8;
    } while ((int)uVar8 <= iStack0000000000000004);
    in_w8 = *(uint *)(unaff_x19 + 0x18);
  }
  if (unaff_w29 < in_w8) {
    lVar1 = unaff_x19 + unaff_x24 * 0x10;
    puVar7 = (undefined8 *)(lVar1 + 0x20);
    *puVar7 = in_stack_00000008;
    *(undefined8 *)(lVar1 + 0x28) = in_stack_00000010;
    thunk_FUN_03d233cc(puVar7,0);
    return;
  }
LAB_054dfc30:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


