/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$get_Length
ENTRY_POINT: 047aa6b8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Vector4s>__get_Length(void)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  FUN_0367c9fc();
  lVar3 = thunk_FUN_0367fe20();
  FUN_047a9554(lVar3,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x110));
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    uVar7 = 0;
    lVar8 = 0x20;
    do {
      lVar5 = *(long *)(unaff_x21 + 0x10);
      if (lVar5 == 0) goto LAB_047aa7f0;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) {
LAB_047aa7f4:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      if (unaff_x20 == 0) goto LAB_047aa7f0;
      puVar1 = (undefined8 *)(lVar5 + lVar8);
      in_stack_00000048 = puVar1[1];
      in_stack_00000040 = *puVar1;
      in_stack_00000058 = puVar1[3];
      in_stack_00000050 = puVar1[2];
      uVar4 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(unaff_x21 + 0x10);
        if (lVar5 == 0) goto LAB_047aa7f0;
        if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_047aa7f4;
        if (lVar3 == 0) {
LAB_047aa7f0:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        puVar1 = (undefined8 *)(lVar5 + lVar8);
        uVar10 = puVar1[1];
        uVar9 = *puVar1;
        uVar12 = puVar1[3];
        uVar11 = puVar1[2];
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_047aa7f0;
        uVar2 = *(uint *)(lVar3 + 0x18);
        if (uVar2 < *(uint *)(lVar5 + 0x18)) {
          lVar5 = lVar5 + (long)(int)uVar2 * 0x20;
          *(uint *)(lVar3 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar5 + 0x28) = uVar10;
          *(undefined8 *)(lVar5 + 0x20) = uVar9;
          *(undefined8 *)(lVar5 + 0x38) = uVar12;
          *(undefined8 *)(lVar5 + 0x30) = uVar11;
          thunk_FUN_036b7ad0(lVar5 + 0x20,0);
        }
        else {
          in_stack_00000040 = uVar9;
          in_stack_00000048 = uVar10;
          in_stack_00000050 = uVar11;
          in_stack_00000058 = uVar12;
          FUN_047a9e48(lVar3,&stack0x00000040,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x20;
    } while ((long)uVar7 < (long)*(int *)(unaff_x21 + 0x18));
  }
  return lVar3;
}


