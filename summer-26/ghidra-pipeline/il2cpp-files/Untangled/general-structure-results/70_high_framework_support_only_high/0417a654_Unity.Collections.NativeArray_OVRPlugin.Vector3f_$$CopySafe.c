/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopySafe
ENTRY_POINT: 0417a654
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopySafe(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar6;
  ulong unaff_x22;
  ulong unaff_x23;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
code_r0x0417a654:
  if ((long)unaff_x22 < (long)param_1) goto LAB_0417a608;
  do {
    iVar4 = (int)param_1;
    uVar6 = (uint)unaff_x22;
    if ((int)uVar6 < iVar4) {
      lVar5 = *(long *)(unaff_x19 + 0x10);
      if (lVar5 == 0) goto LAB_0417a70c;
      if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_0417a710;
      lVar2 = lVar5 + (long)(int)uVar6 * 0x20;
      uVar9 = *(undefined8 *)(lVar2 + 0x20);
      uVar8 = *(undefined8 *)(lVar2 + 0x38);
      uVar7 = *(undefined8 *)(lVar2 + 0x30);
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_0417a710;
      lVar5 = lVar5 + (long)(int)unaff_w21 * 0x20;
      unaff_w21 = unaff_w21 + 1;
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(lVar5 + 0x20) = uVar9;
      *(undefined8 *)(lVar5 + 0x38) = uVar8;
      *(undefined8 *)(lVar5 + 0x30) = uVar7;
      thunk_FUN_02f411dc(lVar5 + 0x20,0);
      iVar4 = *(int *)(unaff_x19 + 0x18);
      unaff_x22 = (ulong)(uVar6 + 1);
    }
    if (iVar4 <= (int)unaff_x22) {
                    /* try { // try from 0417a6dc to 0427a703 has its CatchHandler @ 0417a888 */
      FUN_05624da8(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar4 - unaff_w21,0);
      iVar4 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x18) = unaff_w21;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return iVar4 - unaff_w21;
    }
    unaff_x23 = -(unaff_x22 >> 0x1f & 1) & 0xffffffe000000000 | (unaff_x22 & 0xffffffff) << 5;
    unaff_x22 = (ulong)(int)unaff_x22;
LAB_0417a608:
    unaff_x23 = unaff_x23 + 0x20;
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) {
LAB_0417a70c:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x22) {
LAB_0417a710:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    puVar1 = (undefined8 *)(lVar5 + unaff_x23);
    if (unaff_x20 == 0) goto LAB_0417a70c;
    in_stack_00000040 = *puVar1;
    in_stack_00000048 = puVar1[1];
    in_stack_00000050 = puVar1[2];
    in_stack_00000058 = puVar1[3];
    uVar3 = (**(code **)(unaff_x20 + 0x18))
                      (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                       *(undefined8 *)(unaff_x20 + 0x28));
    if ((uVar3 & 1) != 0) break;
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
  } while( true );
  param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
  unaff_x22 = unaff_x22 + 1;
  goto code_r0x0417a654;
}


