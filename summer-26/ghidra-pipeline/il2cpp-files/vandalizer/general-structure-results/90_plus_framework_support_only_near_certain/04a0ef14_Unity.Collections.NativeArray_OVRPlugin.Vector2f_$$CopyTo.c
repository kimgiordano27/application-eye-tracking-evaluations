/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopyTo
ENTRY_POINT: 04a0ef14
PROGRAM: vandalizer-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopyTo(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  long in_x9;
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
    lVar1 = unaff_x19 + param_1 * 0x10;
    uVar9 = *(undefined8 *)(in_x9 + 0x20);
    uVar3 = *(undefined8 *)(in_x9 + 0x28);
    uVar10 = *(undefined8 *)(lVar1 + 0x20);
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
      FUN_0322bef4();
    }
    uVar5 = (**(code **)(unaff_x23 + 0x18))
                      (*(undefined8 *)(unaff_x23 + 0x40),uVar9,uVar3,uVar10,uVar4,
                       *(undefined8 *)(unaff_x23 + 0x28));
    unaff_w26 = unaff_w26 | uVar5 >> 0x1f;
    uVar5 = unaff_w21;
    do {
      unaff_w21 = unaff_w26;
      uVar11 = unaff_w20 + unaff_w21;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar11) goto LAB_04a0f034;
      lVar8 = (long)(int)uVar11;
      lVar1 = unaff_x19 + lVar8 * 0x10;
      uVar9 = *(undefined8 *)(lVar1 + 0x20);
      if (unaff_x23 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetEnumerator;
      uVar10 = *(undefined8 *)(lVar1 + 0x28);
      if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      iVar6 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),in_stack_00000008,in_stack_00000010,uVar9
                         ,uVar10,*(undefined8 *)(unaff_x23 + 0x28));
      if (-1 < iVar6) {
        uVar11 = unaff_w20 + uVar5;
        lVar8 = (long)(int)uVar11;
LAB_04a0eff0:
        if (uVar11 < *(uint *)(unaff_x19 + 0x18)) {
          lVar1 = unaff_x19 + lVar8 * 0x10;
          puVar7 = (undefined8 *)(lVar1 + 0x20);
          *puVar7 = in_stack_00000008;
          *(undefined8 *)(lVar1 + 0x28) = in_stack_00000010;
          thunk_FUN_0329bf60(puVar7,0);
          return;
        }
        goto LAB_04a0f034;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar11) ||
         (*(uint *)(unaff_x19 + 0x18) <= unaff_w20 + uVar5)) goto LAB_04a0f034;
      uVar9 = *(undefined8 *)(lVar1 + 0x20);
      lVar2 = unaff_x19 + (long)(int)(unaff_w20 + uVar5) * 0x10;
      puVar7 = (undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
      *puVar7 = uVar9;
      thunk_FUN_0329bf60(puVar7,0);
      if (iStack0000000000000004 < (int)unaff_w21) goto LAB_04a0eff0;
      unaff_w26 = unaff_w21 * 2;
      uVar5 = unaff_w21;
    } while (in_stack_00000018._4_4_ <= (int)unaff_w26);
    uVar5 = unaff_w26 + iStack0000000000000000;
    if ((*(uint *)(unaff_x19 + 0x18) <= uVar5 - 1) || (*(uint *)(unaff_x19 + 0x18) <= uVar5)) {
LAB_04a0f034:
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    if (unaff_x23 == 0) {
Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetEnumerator:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    param_2 = *(long *)(unaff_x22 + 0x20);
    param_1 = (long)(int)uVar5;
    in_x9 = unaff_x19 + (long)(int)(uVar5 - 1) * 0x10;
  } while( true );
}


