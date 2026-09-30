/*
FUNCTION_NAME: Oculus.Interaction.Demo.WaterSpray.NonAlloc$$GetRootsFromOverlapResults
ENTRY_POINT: 035259cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_Demo_WaterSpray_NonAlloc__GetRootsFromOverlapResults(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 in_stack_00000008;
  
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar3 = FUN_0354e060(*(long *)(*unaff_x20 + 0xb8) + 8,0);
  if (lVar3 <= unaff_x19) {
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar3 = FUN_0354e060(*(long *)(*unaff_x20 + 0xb8) + 0x10,0);
    if (unaff_x19 <= lVar3) {
      return;
    }
  }
  thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
  FUN_01bc4c70();
  uVar4 = FUN_03532f80(0);
  uVar5 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_45__);
  uVar5 = FUN_035ac8e0(uVar5,0);
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vabsq_s32__;
  thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vabsq_s32__);
  FUN_01bc4c70();
  lVar3 = thunk_FUN_01efb3a4(puVar2);
  puVar1 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
  in_stack_00000008 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
  uVar6 = thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
  uVar6 = thunk_FUN_01f113fc(uVar6,&stack0x00000008);
  thunk_FUN_01efb3a4(puVar2);
  thunk_FUN_01efb3a4(puVar1);
  uVar7 = thunk_FUN_01f113fc();
  uVar4 = FUN_0340f474(uVar4,uVar5,uVar6,uVar7,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar5 = thunk_FUN_01f117cc();
  uVar6 = thunk_FUN_01efb3a4(Method_System_Reflection_MemberInfo_GetCustomAttributesData__);
  FUN_034f3578(uVar5,uVar6,uVar4,0);
  uVar4 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vabsq_s64__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar5,uVar4);
}


