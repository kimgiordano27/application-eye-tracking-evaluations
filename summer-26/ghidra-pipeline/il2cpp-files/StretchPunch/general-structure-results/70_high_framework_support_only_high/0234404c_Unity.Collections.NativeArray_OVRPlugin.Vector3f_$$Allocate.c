/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Allocate
ENTRY_POINT: 0234404c
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


int Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Allocate(ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  ulong unaff_x22;
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
  
  if ((int)param_1 <= (int)unaff_x22) {
    return 0;
  }
  uVar6 = unaff_x22 & 0xffffffff;
  do {
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      iVar7 = (int)unaff_x22;
      uVar5 = (uint)uVar6;
      if ((int)param_1 <= iVar7) {
        FUN_033b4c84(*(undefined8 *)(unaff_x19 + 0x10),uVar6,(int)param_1 - uVar5,0);
        iVar7 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = uVar5;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar7 - uVar5;
      }
      lVar4 = (long)iVar7 * 0x38 + 0x20;
      unaff_x22 = (ulong)iVar7;
      do {
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) goto LAB_023441bc;
        if (*(uint *)(lVar3 + 0x18) <= (uint)unaff_x22) goto LAB_023441c0;
        puVar1 = (undefined8 *)(lVar3 + lVar4);
        if (unaff_x20 == 0) goto LAB_023441bc;
        in_stack_00000080 = *puVar1;
        in_stack_00000088 = puVar1[1];
        in_stack_00000090 = puVar1[2];
        in_stack_00000098 = puVar1[3];
        in_stack_000000a0 = puVar1[4];
        in_stack_000000a8 = puVar1[5];
        in_stack_000000b0 = puVar1[6];
        uVar2 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),&stack0x00000080,
                           *(undefined8 *)(unaff_x20 + 0x28));
        if ((uVar2 & 1) == 0) {
          param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
          break;
        }
        param_1 = (ulong)*(int *)(unaff_x19 + 0x18);
        unaff_x22 = unaff_x22 + 1;
        lVar4 = lVar4 + 0x38;
      } while ((long)unaff_x22 < (long)param_1);
      uVar8 = (uint)unaff_x22;
    } while ((int)param_1 <= (int)uVar8);
    lVar4 = *(long *)(unaff_x19 + 0x10);
    if (lVar4 == 0) {
LAB_023441bc:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar8) {
LAB_023441c0:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    lVar3 = lVar4 + (long)(int)uVar8 * 0x38;
    uVar14 = *(undefined8 *)(lVar3 + 0x38);
    uVar13 = *(undefined8 *)(lVar3 + 0x30);
    uVar10 = *(undefined8 *)(lVar3 + 0x48);
    uVar9 = *(undefined8 *)(lVar3 + 0x40);
    uVar12 = *(undefined8 *)(lVar3 + 0x28);
    uVar11 = *(undefined8 *)(lVar3 + 0x20);
    if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_023441c0;
    lVar4 = lVar4 + (long)(int)uVar5 * 0x38;
    *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(lVar3 + 0x50);
    *(undefined8 *)(lVar4 + 0x38) = uVar14;
    *(undefined8 *)(lVar4 + 0x30) = uVar13;
    *(undefined8 *)(lVar4 + 0x48) = uVar10;
    *(undefined8 *)(lVar4 + 0x40) = uVar9;
    *(undefined8 *)(lVar4 + 0x28) = uVar12;
    *(undefined8 *)(lVar4 + 0x20) = uVar11;
    thunk_FUN_01e10808(lVar4 + 0x20,0);
    param_1 = (ulong)*(uint *)(unaff_x19 + 0x18);
    uVar6 = (ulong)(uVar5 + 1);
  } while( true );
}


