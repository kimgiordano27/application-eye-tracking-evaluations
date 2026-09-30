/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$set_Item
ENTRY_POINT: 03cb791c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Vector4f>__set_Item(ushort *param_1)

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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  if ((*param_1 & 1) == 0) {
    FUN_02f41e9c();
  }
  lVar3 = thunk_FUN_02f45270();
  FUN_03cb682c(lVar3,*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x110));
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    uVar7 = 0;
    lVar8 = 0x20;
    do {
      lVar5 = *(long *)(unaff_x21 + 0x10);
      if (lVar5 == 0) goto LAB_03cb7a74;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) {
LAB_03cb7a78:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      if (unaff_x20 == 0) goto LAB_03cb7a74;
      puVar1 = (undefined8 *)(lVar5 + lVar8);
      in_stack_00000088 = puVar1[1];
      in_stack_00000080 = *puVar1;
      in_stack_00000098 = puVar1[3];
      in_stack_00000090 = puVar1[2];
      in_stack_000000a8 = puVar1[5];
      in_stack_000000a0 = puVar1[4];
      in_stack_000000b8 = puVar1[7];
      in_stack_000000b0 = puVar1[6];
      uVar4 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,
                         *(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(unaff_x21 + 0x10);
        if (lVar5 == 0) goto LAB_03cb7a74;
        if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_03cb7a78;
        if (lVar3 == 0) {
LAB_03cb7a74:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        puVar1 = (undefined8 *)(lVar5 + lVar8);
        uVar11 = puVar1[1];
        uVar9 = *puVar1;
        uVar15 = puVar1[3];
        uVar13 = puVar1[2];
        uVar12 = puVar1[5];
        uVar10 = puVar1[4];
        uVar16 = puVar1[7];
        uVar14 = puVar1[6];
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80);
        lVar5 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_03cb7a74;
        uVar2 = *(uint *)(lVar3 + 0x18);
        if (uVar2 < *(uint *)(lVar5 + 0x18)) {
          lVar5 = lVar5 + (long)(int)uVar2 * 0x40;
          *(uint *)(lVar3 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar5 + 0x28) = uVar11;
          *(undefined8 *)(lVar5 + 0x20) = uVar9;
          *(undefined8 *)(lVar5 + 0x38) = uVar15;
          *(undefined8 *)(lVar5 + 0x30) = uVar13;
          *(undefined8 *)(lVar5 + 0x48) = uVar12;
          *(undefined8 *)(lVar5 + 0x40) = uVar10;
          *(undefined8 *)(lVar5 + 0x58) = uVar16;
          *(undefined8 *)(lVar5 + 0x50) = uVar14;
        }
        else {
          in_stack_00000080 = uVar9;
          in_stack_00000088 = uVar11;
          in_stack_00000090 = uVar13;
          in_stack_00000098 = uVar15;
          in_stack_000000a0 = uVar10;
          in_stack_000000a8 = uVar12;
          in_stack_000000b0 = uVar14;
          in_stack_000000b8 = uVar16;
          FUN_03cb70cc(lVar3,&stack0x00000080,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x40;
    } while ((long)uVar7 < (long)*(int *)(unaff_x21 + 0x18));
  }
  return lVar3;
}


