/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$get_Item
ENTRY_POINT: 023440dc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__get_Item(ulong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  uint uVar5;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  
  do {
    if ((param_1 & 1) == 0) {
      iVar2 = *(int *)(unaff_x19 + 0x18);
LAB_023440fc:
      uVar5 = (uint)unaff_x22;
      if ((int)uVar5 < iVar2) {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) {
LAB_023441bc:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_023441c0;
        lVar4 = lVar3 + (long)(int)uVar5 * (long)(int)unaff_x23;
        uVar11 = *(undefined8 *)(lVar4 + 0x38);
        uVar10 = *(undefined8 *)(lVar4 + 0x30);
        uVar7 = *(undefined8 *)(lVar4 + 0x48);
        uVar6 = *(undefined8 *)(lVar4 + 0x40);
        uVar9 = *(undefined8 *)(lVar4 + 0x28);
        uVar8 = *(undefined8 *)(lVar4 + 0x20);
        if (*(uint *)(lVar3 + 0x18) <= unaff_w21) goto LAB_023441c0;
        lVar3 = lVar3 + (int)unaff_w21 * unaff_x23;
        unaff_w21 = unaff_w21 + 1;
        *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(lVar4 + 0x50);
        *(undefined8 *)(lVar3 + 0x38) = uVar11;
        *(undefined8 *)(lVar3 + 0x30) = uVar10;
        *(undefined8 *)(lVar3 + 0x48) = uVar7;
        *(undefined8 *)(lVar3 + 0x40) = uVar6;
        *(undefined8 *)(lVar3 + 0x28) = uVar9;
        *(undefined8 *)(lVar3 + 0x20) = uVar8;
        thunk_FUN_01e10808(lVar3 + 0x20,0);
        iVar2 = *(int *)(unaff_x19 + 0x18);
        uVar5 = uVar5 + 1;
      }
      if (iVar2 <= (int)uVar5) {
        FUN_033b4c84(*(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar2 - unaff_w21,0);
        iVar2 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = unaff_w21;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar2 - unaff_w21;
      }
      unaff_x24 = (long)(int)uVar5 * (long)(int)unaff_x23 + 0x20;
      unaff_x22 = (long)(int)uVar5;
    }
    else {
      iVar2 = *(int *)(unaff_x19 + 0x18);
      unaff_x22 = unaff_x22 + 1;
      unaff_x24 = unaff_x24 + 0x38;
      if (iVar2 <= unaff_x22) goto LAB_023440fc;
    }
    lVar3 = *(long *)(unaff_x19 + 0x10);
    if (lVar3 == 0) goto LAB_023441bc;
    if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x22) {
LAB_023441c0:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    puVar1 = (undefined8 *)(lVar3 + unaff_x24);
    if (unaff_x20 == 0) goto LAB_023441bc;
    in_stack_00000080 = *puVar1;
    in_stack_00000088 = puVar1[1];
    in_stack_00000090 = puVar1[2];
    in_stack_00000098 = puVar1[3];
    in_stack_000000a0 = puVar1[4];
    in_stack_000000a8 = puVar1[5];
    in_stack_000000b0 = puVar1[6];
    param_1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,
                         *(undefined8 *)(unaff_x20 + 0x28));
  } while( true );
}


