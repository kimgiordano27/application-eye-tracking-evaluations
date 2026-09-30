/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$GetEnumerator
ENTRY_POINT: 047a7974
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


long Unity_Collections_NativeArray<OVRPlugin_Vector2f>__GetEnumerator(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  lVar3 = thunk_FUN_0367fe20();
  FUN_047a6784(lVar3,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x110));
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    uVar8 = 0;
    lVar9 = 0x20;
    do {
      lVar5 = *(long *)(unaff_x21 + 0x10);
      if (lVar5 == 0) goto LAB_047a7ae0;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) {
LAB_047a7ae4:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      if (unaff_x20 == 0) goto LAB_047a7ae0;
      puVar1 = (undefined8 *)(lVar5 + lVar9);
      in_stack_00000048 = puVar1[1];
      in_stack_00000040 = *puVar1;
      in_stack_00000050 = puVar1[2];
      uVar4 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000040,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(unaff_x21 + 0x10);
        if (lVar5 == 0) goto LAB_047a7ae0;
        if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_047a7ae4;
        if (lVar3 == 0) {
LAB_047a7ae0:
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        puVar1 = (undefined8 *)(lVar5 + lVar9);
        uVar11 = puVar1[1];
        uVar10 = *puVar1;
        uVar6 = puVar1[2];
        lVar7 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_047a7ae0;
        uVar2 = *(uint *)(lVar3 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (long)(int)uVar2 * 0x18;
          *(uint *)(lVar3 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar7 + 0x28) = uVar11;
          *(undefined8 *)(lVar7 + 0x20) = uVar10;
          *(undefined8 *)(lVar7 + 0x30) = uVar6;
          thunk_FUN_036b7ad0(lVar7 + 0x20,0);
        }
        else {
          in_stack_00000040 = uVar10;
          in_stack_00000048 = uVar11;
          in_stack_00000050 = uVar6;
          FUN_047a70a8(lVar3,&stack0x00000040,
                       *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x18;
    } while ((long)uVar8 < (long)*(int *)(unaff_x21 + 0x18));
  }
  return lVar3;
}


