/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$CopySafe
ENTRY_POINT: 0417a570
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__CopySafe(ulong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  char in_NG;
  char in_OV;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if (in_NG == in_OV) {
    uVar10 = 0;
    lVar8 = 0x20;
    do {
      lVar5 = *(long *)(unaff_x19 + 0x10);
      if (lVar5 == 0) goto LAB_0417a70c;
      if (*(uint *)(lVar5 + 0x18) <= uVar10) goto LAB_0417a710;
      puVar1 = (undefined8 *)(lVar5 + lVar8);
      if (unaff_x20 == 0) goto LAB_0417a70c;
      in_stack_00000040 = *puVar1;
      in_stack_00000048 = puVar1[1];
      in_stack_00000050 = puVar1[2];
      in_stack_00000058 = puVar1[3];
      uVar3 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar3 & 1) != 0) {
        param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
        break;
      }
      param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
      uVar10 = uVar10 + 1;
                    /* try { // try from 0417a5c8 to 0427a6db has its CatchHandler @ 0417a5c8
                       catch() { ... } // from try @ 0417a5c8 with catch @ 0417a5c8
                       catch() { ... } // from try @ 0417a7b0 with catch @ 0417a5c8
                       catch() { ... } // from try @ 0417a868 with catch @ 0417a5c8
                       catch() { ... } // from try @ 0417a870 with catch @ 0417a5c8
                       catch() { ... } // from try @ 0417a914 with catch @ 0417a5c8 */
      lVar8 = lVar8 + 0x20;
    } while ((long)uVar10 < (long)param_1);
  }
  else {
    uVar10 = 0;
  }
  if ((int)param_1 <= (int)uVar10) {
    return 0;
  }
  uVar3 = uVar10 & 0xffffffff;
  do {
    uVar10 = (ulong)((int)uVar10 + 1);
    do {
      uVar7 = (uint)uVar3;
      if ((int)param_1 <= (int)uVar10) {
        FUN_05624da8(*(undefined8 *)(unaff_x19 + 0x10),uVar3,(int)param_1 - uVar7,0);
        iVar2 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = uVar7;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar2 - uVar7;
      }
      uVar6 = -(uVar10 >> 0x1f & 1) & 0xffffffe000000000 | (uVar10 & 0xffffffff) << 5;
      uVar10 = (ulong)(int)uVar10;
      do {
        uVar6 = uVar6 + 0x20;
        lVar8 = *(long *)(unaff_x19 + 0x10);
        if (lVar8 == 0) goto LAB_0417a70c;
        if (*(uint *)(lVar8 + 0x18) <= (uint)uVar10) goto LAB_0417a710;
        puVar1 = (undefined8 *)(lVar8 + uVar6);
        if (unaff_x20 == 0) goto LAB_0417a70c;
        in_stack_00000040 = *puVar1;
        in_stack_00000048 = puVar1[1];
        in_stack_00000050 = puVar1[2];
        in_stack_00000058 = puVar1[3];
        uVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar4 & 1) == 0) {
          param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)param_1);
      uVar9 = (uint)uVar10;
    } while ((int)param_1 <= (int)uVar9);
    lVar8 = *(long *)(unaff_x19 + 0x10);
    if (lVar8 == 0) {
LAB_0417a70c:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(uint *)(lVar8 + 0x18) <= uVar9) {
LAB_0417a710:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar5 = lVar8 + (long)(int)uVar9 * 0x20;
    uVar13 = *(undefined8 *)(lVar5 + 0x20);
    uVar12 = *(undefined8 *)(lVar5 + 0x38);
    uVar11 = *(undefined8 *)(lVar5 + 0x30);
    if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_0417a710;
    lVar8 = lVar8 + (long)(int)uVar7 * 0x20;
    *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar8 + 0x20) = uVar13;
    *(undefined8 *)(lVar8 + 0x38) = uVar12;
    *(undefined8 *)(lVar8 + 0x30) = uVar11;
    thunk_FUN_02f411dc(lVar8 + 0x20,0);
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
    uVar3 = (ulong)(uVar7 + 1);
  } while( true );
}


