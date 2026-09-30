/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopySafe
ENTRY_POINT: 02346da4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopySafe(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar6;
  ulong unaff_x22;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  do {
    do {
      if ((int)param_1 <= (int)unaff_x22) {
        FUN_033b4c84(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,(int)param_1 - unaff_w21,0);
        iVar3 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar3 - unaff_w21;
      }
      unaff_x22 = (ulong)(int)unaff_x22;
      uVar7 = unaff_x22 << 6 | 0x20;
      do {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_02346edc;
        if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x22) goto LAB_02346ee0;
        puVar1 = (undefined8 *)(lVar5 + uVar7);
        if (unaff_x20 == 0) goto LAB_02346edc;
        in_stack_00000080 = *puVar1;
        in_stack_00000088 = puVar1[1];
        in_stack_00000090 = puVar1[2];
        in_stack_00000098 = puVar1[3];
        in_stack_000000a0 = puVar1[4];
        in_stack_000000a8 = puVar1[5];
        in_stack_000000b0 = puVar1[6];
        in_stack_000000b8 = puVar1[7];
        uVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar4 & 1) == 0) {
          param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
        unaff_x22 = unaff_x22 + 1;
        uVar7 = uVar7 + 0x40;
      } while ((long)unaff_x22 < (long)param_1);
      uVar6 = (uint)unaff_x22;
    } while ((int)param_1 <= (int)uVar6);
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) {
LAB_02346edc:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar6) {
LAB_02346ee0:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    lVar2 = lVar5 + (long)(int)uVar6 * 0x40;
    uVar8 = *(undefined8 *)(lVar2 + 0x40);
    uVar10 = *(undefined8 *)(lVar2 + 0x58);
    uVar9 = *(undefined8 *)(lVar2 + 0x50);
    uVar12 = *(undefined8 *)(lVar2 + 0x28);
    uVar11 = *(undefined8 *)(lVar2 + 0x20);
    uVar14 = *(undefined8 *)(lVar2 + 0x38);
    uVar13 = *(undefined8 *)(lVar2 + 0x30);
    if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_02346ee0;
    lVar5 = lVar5 + (long)(int)unaff_w21 * 0x40;
    unaff_w21 = unaff_w21 + 1;
    *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(lVar2 + 0x48);
    *(undefined8 *)(lVar5 + 0x40) = uVar8;
    *(undefined8 *)(lVar5 + 0x58) = uVar10;
    *(undefined8 *)(lVar5 + 0x50) = uVar9;
    *(undefined8 *)(lVar5 + 0x28) = uVar12;
    *(undefined8 *)(lVar5 + 0x20) = uVar11;
    *(undefined8 *)(lVar5 + 0x38) = uVar14;
    *(undefined8 *)(lVar5 + 0x30) = uVar13;
    thunk_FUN_01e10808(lVar5 + 0x20,0);
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
    unaff_x22 = (ulong)(uVar6 + 1);
  } while( true );
}


