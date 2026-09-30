/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 054dfb04
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


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  uint in_w8;
  uint in_w9;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long lVar8;
  uint unaff_w26;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  int iStack0000000000000000;
  int iStack0000000000000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    lVar1 = unaff_x19 + (long)(int)in_w9 * 0x10;
    lVar8 = unaff_x19 + (long)(int)in_w8 * 0x10;
    uVar9 = *(undefined8 *)(lVar1 + 0x20);
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    uVar10 = *(undefined8 *)(lVar8 + 0x20);
    uVar4 = *(undefined8 *)(lVar8 + 0x28);
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
    uVar5 = (**(code **)(unaff_x23 + 0x18))
                      (*(undefined8 *)(unaff_x23 + 0x40),uVar9,uVar3,uVar10,uVar4,
                       *(undefined8 *)(unaff_x23 + 0x28));
    unaff_w26 = unaff_w26 | uVar5 >> 0x1f;
    uVar5 = unaff_w21;
    do {
      unaff_w21 = unaff_w26;
      uVar11 = unaff_w20 + unaff_w21;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar11) goto LAB_054dfc30;
      lVar8 = (long)(int)uVar11;
      lVar1 = unaff_x19 + lVar8 * 0x10;
      uVar9 = *(undefined8 *)(lVar1 + 0x20);
      if (unaff_x23 == 0) goto LAB_054dfc34;
      uVar10 = *(undefined8 *)(lVar1 + 0x28);
      if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      iVar6 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),in_stack_00000008,in_stack_00000010,uVar9
                         ,uVar10,*(undefined8 *)(unaff_x23 + 0x28));
      if (-1 < iVar6) {
        uVar11 = unaff_w20 + uVar5;
        lVar8 = (long)(int)uVar11;
LAB_054dfbec:
        if (uVar11 < *(uint *)(unaff_x19 + 0x18)) {
          lVar1 = unaff_x19 + lVar8 * 0x10;
          puVar7 = (undefined8 *)(lVar1 + 0x20);
          *puVar7 = in_stack_00000008;
          *(undefined8 *)(lVar1 + 0x28) = in_stack_00000010;
          thunk_FUN_03d233cc(puVar7,0);
          return;
        }
        goto LAB_054dfc30;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar11) ||
         (*(uint *)(unaff_x19 + 0x18) <= unaff_w20 + uVar5)) goto LAB_054dfc30;
      uVar9 = *(undefined8 *)(lVar1 + 0x20);
      lVar2 = unaff_x19 + (long)(int)(unaff_w20 + uVar5) * 0x10;
      puVar7 = (undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      *puVar7 = uVar9;
      thunk_FUN_03d233cc(puVar7,0);
      if (iStack0000000000000004 < (int)unaff_w21) goto LAB_054dfbec;
      unaff_w26 = unaff_w21 * 2;
      uVar5 = unaff_w21;
    } while (in_stack_00000018._4_4_ <= (int)unaff_w26);
    in_w8 = unaff_w26 + iStack0000000000000000;
    in_w9 = in_w8 - 1;
    if ((*(uint *)(unaff_x19 + 0x18) <= in_w9) || (*(uint *)(unaff_x19 + 0x18) <= in_w8)) {
LAB_054dfc30:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    if (unaff_x23 == 0) {
LAB_054dfc34:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    param_1 = *(long *)(unaff_x22 + 0x20);
  } while( true );
}


