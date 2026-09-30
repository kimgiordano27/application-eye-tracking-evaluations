/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 03c6d210
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>___ctor(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long lStack0000000000000058;
  
  lVar2 = tpidr_el0;
  lStack0000000000000058 = *(long *)(lVar2 + 0x28);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_050188b4(8);
  }
  uVar3 = (ulong)*(uint *)(param_1 + 0x18);
  if ((int)*(uint *)(param_1 + 0x18) < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    lVar8 = 0x20;
    do {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto LAB_03c6d3f4;
      if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_03c6d3f8;
      puVar1 = (undefined8 *)(lVar4 + lVar8);
      if (param_2 == 0) goto LAB_03c6d3f4;
                    /* try { // try from 03c6d278 to 03d6d38b has its CatchHandler @ 03c6d278
                       catch() { ... } // from try @ 03c6d278 with catch @ 03c6d278
                       catch() { ... } // from try @ 03c6d4a4 with catch @ 03c6d278
                       catch() { ... } // from try @ 03c6d52c with catch @ 03c6d278
                       catch() { ... } // from try @ 03c6d534 with catch @ 03c6d278
                       catch() { ... } // from try @ 03c6d5dc with catch @ 03c6d278 */
      in_stack_00000040 = *puVar1;
      in_stack_00000048 = puVar1[1];
      in_stack_00000050 = puVar1[2];
      uVar3 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),&stack0x00000040,
                         *(undefined8 *)(param_2 + 0x28));
      if ((uVar3 & 1) != 0) {
        uVar3 = (ulong)*(uint *)(param_1 + 0x18);
        break;
      }
      uVar3 = (ulong)*(int *)(param_1 + 0x18);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x18;
    } while ((long)uVar7 < (long)uVar3);
  }
  if ((int)uVar3 <= (int)uVar7) {
    iVar5 = 0;
Unity_Collections_NativeArray<OVRPlugin_Vector4f>__get_IsCreated:
    if (*(long *)(lVar2 + 0x28) != lStack0000000000000058) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar5);
    }
    return;
  }
  uVar10 = uVar7 & 0xffffffff;
  do {
    uVar7 = (ulong)((int)uVar7 + 1);
    do {
      iVar5 = (int)uVar7;
      uVar9 = (uint)uVar10;
      if ((int)uVar3 <= iVar5) {
        iVar5 = (int)uVar3 - uVar9;
        *(uint *)(param_1 + 0x18) = uVar9;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        goto Unity_Collections_NativeArray<OVRPlugin_Vector4f>__get_IsCreated;
      }
      lVar8 = (long)iVar5 * 0x18 + 0x20;
      uVar7 = (ulong)iVar5;
      do {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 == 0) goto LAB_03c6d3f4;
        if (*(uint *)(lVar4 + 0x18) <= (uint)uVar7) goto LAB_03c6d3f8;
        puVar1 = (undefined8 *)(lVar4 + lVar8);
        if (param_2 == 0) goto LAB_03c6d3f4;
        in_stack_00000040 = *puVar1;
        in_stack_00000048 = puVar1[1];
        in_stack_00000050 = puVar1[2];
        uVar3 = (**(code **)(param_2 + 0x18))
                          (*(undefined8 *)(param_2 + 0x40),&stack0x00000040,
                           *(undefined8 *)(param_2 + 0x28));
        if ((uVar3 & 1) == 0) {
          uVar3 = (ulong)*(uint *)(param_1 + 0x18);
          break;
        }
        uVar3 = (ulong)*(int *)(param_1 + 0x18);
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x18;
      } while ((long)uVar7 < (long)uVar3);
      uVar6 = (uint)uVar7;
    } while ((int)uVar3 <= (int)uVar6);
    lVar8 = *(long *)(param_1 + 0x10);
    if (lVar8 == 0) {
LAB_03c6d3f4:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(lVar8 + 0x18) <= uVar6) {
LAB_03c6d3f8:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    lVar4 = lVar8 + (long)(int)uVar6 * 0x18;
    uVar12 = *(undefined8 *)(lVar4 + 0x28);
    uVar11 = *(undefined8 *)(lVar4 + 0x20);
    if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_03c6d3f8;
    lVar8 = lVar8 + (long)(int)uVar9 * 0x18;
    uVar10 = (ulong)(uVar9 + 1);
    *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(lVar4 + 0x30);
    *(undefined8 *)(lVar8 + 0x28) = uVar12;
    *(undefined8 *)(lVar8 + 0x20) = uVar11;
    uVar3 = (ulong)*(uint *)(param_1 + 0x18);
  } while( true );
}


