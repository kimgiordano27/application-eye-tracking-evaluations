/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopySafe
ENTRY_POINT: 04a127c4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  
                    /* try { // try from 04a127c4 to 04b127cb has its CatchHandler @ 04a128a8 */
  FUN_04a12100(param_2,param_3,unaff_w24,unaff_w23,*(undefined8 *)(param_1 + 0x70));
  if (unaff_x20 == 0) {
LAB_04a129d4:
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if (unaff_w24 < *(uint *)(unaff_x20 + 0x18)) {
    lVar2 = unaff_x20 + (long)(int)unaff_w24 * 0x20;
    uVar10 = *(undefined8 *)(lVar2 + 0x28);
    uVar8 = *(undefined8 *)(lVar2 + 0x20);
    uVar6 = *(undefined8 *)(lVar2 + 0x38);
    uVar4 = *(undefined8 *)(lVar2 + 0x30);
    uVar3 = unaff_w23 - 1;
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
                    /* try { // try from 04a12804 to 04b1280b has its CatchHandler @ 04a128b0 */
      FUN_0322bef4();
    }
                    /* try { // try from 04a1280c to 04b12887 has its CatchHandler @ 04a125e0 */
    FUN_04a12250();
    if ((int)uVar3 <= (int)unaff_w19) {
LAB_04a12964:
      lVar2 = *(long *)(unaff_x21 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0322bef4();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      FUN_04a12250();
      return unaff_w19;
    }
    while (unaff_w19 = unaff_w19 + 1, unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      lVar2 = unaff_x20 + (long)(int)unaff_w19 * 0x20;
      uVar11 = *(undefined8 *)(lVar2 + 0x28);
      uVar9 = *(undefined8 *)(lVar2 + 0x20);
      uVar7 = *(undefined8 *)(lVar2 + 0x38);
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
      if (unaff_x22 == 0) goto LAB_04a129d4;
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_0322bef4();
      }
      in_stack_000000e0 = uVar8;
      in_stack_000000e8 = uVar10;
      in_stack_000000f0 = uVar4;
      in_stack_000000f8 = uVar6;
      in_stack_00000100 = uVar9;
      in_stack_00000108 = uVar11;
      in_stack_00000110 = uVar5;
      in_stack_00000118 = uVar7;
      iVar1 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000100,&stack0x000000e0,
                         *(undefined8 *)(unaff_x22 + 0x28));
      if (-1 < iVar1) {
        do {
          uVar3 = uVar3 - 1;
          if (*(uint *)(unaff_x20 + 0x18) <= uVar3) goto LAB_04a129d0;
          lVar2 = unaff_x20 + (long)(int)uVar3 * 0x20;
          uVar11 = *(undefined8 *)(lVar2 + 0x28);
          uVar9 = *(undefined8 *)(lVar2 + 0x20);
          uVar7 = *(undefined8 *)(lVar2 + 0x38);
          uVar5 = *(undefined8 *)(lVar2 + 0x30);
          if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
            FUN_0322bef4();
          }
          in_stack_000000e0 = uVar9;
          in_stack_000000e8 = uVar11;
          in_stack_000000f0 = uVar5;
          in_stack_000000f8 = uVar7;
          in_stack_00000100 = uVar8;
          in_stack_00000108 = uVar10;
          in_stack_00000110 = uVar4;
          in_stack_00000118 = uVar6;
          iVar1 = (**(code **)(unaff_x22 + 0x18))
                            (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000100,&stack0x000000e0,
                             *(undefined8 *)(unaff_x22 + 0x28));
        } while (iVar1 < 0);
        if ((int)uVar3 <= (int)unaff_w19) goto LAB_04a12964;
        lVar2 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0322bef4();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0322bef4();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_0322bef4();
        }
        FUN_04a12250();
      }
    }
  }
LAB_04a129d0:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


