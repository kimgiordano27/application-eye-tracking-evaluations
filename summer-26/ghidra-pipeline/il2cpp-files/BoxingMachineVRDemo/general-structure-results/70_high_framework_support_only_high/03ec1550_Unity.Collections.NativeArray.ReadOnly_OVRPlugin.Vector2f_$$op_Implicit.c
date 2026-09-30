/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector2f>$$op_Implicit
ENTRY_POINT: 03ec1550
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03ec15c4) */
/* WARNING: Removing unreachable block (ram,0x03ec1638) */

void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__op_Implicit(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  FUN_03aaceb0();
  in_stack_00000028 = in_stack_00000010;
  in_stack_00000020 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000018;
  while (uVar2 = FUN_04a7a4a0(&stack0x00000020,
                              *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xc0))
        , (uVar2 & 1) != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x30);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    (**(code **)(lVar3 + 0x18))
              (*(undefined8 *)(lVar3 + 0x40),in_stack_00000030,*(undefined8 *)(lVar3 + 0x28));
  }
  FUN_04a7a49c(&stack0x00000020,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 200)
              );
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x30);
    if (lVar3 == 0) goto LAB_03ec1634;
    (**(code **)(lVar3 + 0x18))
              (*(undefined8 *)(lVar3 + 0x40),*(long *)(unaff_x19 + 0x40),
               *(undefined8 *)(lVar3 + 0x28));
  }
  lVar3 = *(long *)(unaff_x19 + 0x10);
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_05029664(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
    }
    *(undefined4 *)(unaff_x19 + 0x48) = 0;
    return;
  }
LAB_03ec1634:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


