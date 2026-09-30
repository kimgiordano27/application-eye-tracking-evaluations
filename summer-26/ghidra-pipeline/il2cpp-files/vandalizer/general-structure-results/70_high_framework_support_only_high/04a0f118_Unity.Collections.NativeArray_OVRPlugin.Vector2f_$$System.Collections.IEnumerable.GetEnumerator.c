/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 04a0f118
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__System_Collections_IEnumerable_GetEnumerator
               (undefined1 param_1 [16],long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong unaff_x28;
  ulong unaff_x29;
  ulong uVar8;
  ulong in_stack_00000000;
  long in_stack_00000008;
  
  uVar6 = param_1._8_8_;
  uVar5 = param_1._0_8_;
  while( true ) {
    *(undefined8 *)(param_2 + 0x28) = uVar6;
    *(undefined8 *)(param_2 + 0x20) = uVar5;
    thunk_FUN_0329bf60((undefined8 *)(param_2 + 0x20),0);
    uVar7 = (int)unaff_x28 - 1;
    unaff_x28 = (ulong)uVar7;
    if ((int)uVar7 < unaff_w21) goto LAB_04a0f144;
    if (*(uint *)(unaff_x22 + 0x18) <= uVar7) break;
    while( true ) {
      unaff_x28 = (ulong)(int)uVar7;
      lVar1 = unaff_x22 + unaff_x28 * 0x10;
      uVar5 = *(undefined8 *)(lVar1 + 0x20);
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      uVar6 = *(undefined8 *)(lVar1 + 0x28);
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      iVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),unaff_x23,unaff_x24,uVar5,uVar6,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if (iVar2 < 0) break;
LAB_04a0f144:
      uVar4 = (ulong)*(uint *)(unaff_x22 + 0x18);
      do {
        uVar8 = unaff_x29;
        uVar7 = (int)unaff_x28 + 1;
        if ((uint)uVar4 <= uVar7) goto LAB_04a0f19c;
        lVar1 = unaff_x22 + (long)(int)uVar7 * 0x10;
        puVar3 = (undefined8 *)(lVar1 + 0x20);
        *puVar3 = unaff_x23;
        *(undefined8 *)(lVar1 + 0x28) = unaff_x24;
        thunk_FUN_0329bf60(puVar3,0);
        if (uVar8 == in_stack_00000000) {
          return;
        }
        uVar4 = *(ulong *)(unaff_x22 + 0x18);
        unaff_x29 = uVar8 + 1;
        if ((uint)uVar4 <= (uint)unaff_x29) goto LAB_04a0f19c;
        lVar1 = unaff_x22 + unaff_x29 * 0x10;
        unaff_x23 = *(undefined8 *)(lVar1 + 0x20);
        unaff_x24 = *(undefined8 *)(lVar1 + 0x28);
        unaff_x28 = uVar8;
      } while ((long)uVar8 < in_stack_00000008);
      uVar7 = (uint)uVar8;
      if ((uint)uVar4 <= uVar7) goto LAB_04a0f19c;
    }
    if ((*(uint *)(unaff_x22 + 0x18) <= uVar7) || (*(uint *)(unaff_x22 + 0x18) <= uVar7 + 1)) break;
    uVar6 = *(undefined8 *)(lVar1 + 0x28);
    uVar5 = *(undefined8 *)(lVar1 + 0x20);
    param_2 = unaff_x22 + (long)(int)(uVar7 + 1) * 0x10;
  }
LAB_04a0f19c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


