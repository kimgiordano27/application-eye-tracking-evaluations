/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$GetEnumerator
ENTRY_POINT: 03c6948c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__GetEnumerator(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  iVar2 = unaff_w21;
  do {
    if (unaff_w21 != iVar2) break;
    lVar3 = *(long *)(unaff_x20 + 0x10);
    if (lVar3 == 0) {
LAB_03c69524:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(lVar3 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    puVar1 = (undefined8 *)(lVar3 + unaff_x23);
    if (unaff_x19 == 0) goto LAB_03c69524;
    in_stack_00000040 = *puVar1;
    in_stack_00000048 = puVar1[1];
    in_stack_00000050 = puVar1[2];
    in_stack_00000058 = puVar1[3];
    in_stack_00000060 = puVar1[4];
    in_stack_00000068 = puVar1[5];
    in_stack_00000070 = puVar1[6];
    in_stack_00000078 = puVar1[7];
    (**(code **)(unaff_x19 + 0x18))
              (*(undefined8 *)(unaff_x19 + 0x40),&stack0x00000040,*(undefined8 *)(unaff_x19 + 0x28))
    ;
    iVar2 = *(int *)(unaff_x20 + 0x1c);
    unaff_x22 = unaff_x22 + 1;
    unaff_x23 = unaff_x23 + 0x40;
  } while ((long)unaff_x22 < (long)*(int *)(unaff_x20 + 0x18));
  if (unaff_w21 != iVar2) {
    FUN_05027c8c(0);
  }
  return;
}


