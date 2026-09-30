/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$GetSubArray
ENTRY_POINT: 02346e88
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector4s>__GetSubArray
              (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined1 param_4 [16],
              undefined1 param_5 [16],long param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  uint uVar5;
  ulong unaff_x22;
  uint unaff_w23;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  uVar13 = param_5._8_8_;
  uVar12 = param_5._0_8_;
  uVar11 = param_4._8_8_;
  uVar10 = param_4._0_8_;
  do {
    *(undefined8 *)(param_1 + 0x28) = uVar11;
    *(undefined8 *)(param_1 + 0x20) = uVar10;
    *(undefined8 *)(param_1 + 0x38) = uVar13;
    *(undefined8 *)(param_1 + 0x30) = uVar12;
    thunk_FUN_01e10808(param_6,param_7);
    uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      if ((int)uVar4 <= (int)unaff_x22) {
        FUN_033b4c84(*(undefined8 *)(unaff_x19 + 0x10),unaff_w23,(int)uVar4 - unaff_w23,0);
        iVar2 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w23;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar2 - unaff_w23;
      }
      unaff_x22 = (ulong)(int)unaff_x22;
      uVar6 = unaff_x22 << 6 | 0x20;
      do {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) goto LAB_02346edc;
        if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x22) goto LAB_02346ee0;
        puVar1 = (undefined8 *)(lVar3 + uVar6);
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
          uVar4 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        uVar4 = (ulong)*(int *)(unaff_x19 + 0x18);
        unaff_x22 = unaff_x22 + 1;
        uVar6 = uVar6 + 0x40;
      } while ((long)unaff_x22 < (long)uVar4);
      uVar5 = (uint)unaff_x22;
    } while ((int)uVar4 <= (int)uVar5);
    param_1 = *(long *)(unaff_x19 + 0x10);
    if (param_1 == 0) {
LAB_02346edc:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(uint *)(param_1 + 0x18) <= uVar5) {
LAB_02346ee0:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    lVar3 = param_1 + (long)(int)uVar5 * 0x40;
    uVar7 = *(undefined8 *)(lVar3 + 0x40);
    uVar9 = *(undefined8 *)(lVar3 + 0x58);
    uVar8 = *(undefined8 *)(lVar3 + 0x50);
    uVar11 = *(undefined8 *)(lVar3 + 0x28);
    uVar10 = *(undefined8 *)(lVar3 + 0x20);
    uVar13 = *(undefined8 *)(lVar3 + 0x38);
    uVar12 = *(undefined8 *)(lVar3 + 0x30);
    if (*(uint *)(param_1 + 0x18) <= unaff_w23) goto LAB_02346ee0;
    param_1 = param_1 + (long)(int)unaff_w23 * 0x40;
    param_6 = param_1 + 0x20;
    param_7 = 0;
    unaff_w23 = unaff_w23 + 1;
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar3 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = uVar7;
    *(undefined8 *)(param_1 + 0x58) = uVar9;
    *(undefined8 *)(param_1 + 0x50) = uVar8;
  } while( true );
}


