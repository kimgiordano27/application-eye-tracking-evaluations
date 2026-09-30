/*
FUNCTION_NAME: OVRLocatable.TrackingSpacePose$$ComputeWorldPosition
ENTRY_POINT: 0363c054
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVRLocatable_TrackingSpacePose__ComputeWorldPosition(long param_1)

{
  ulong uVar1;
  undefined8 *unaff_x19;
  long unaff_x21;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  ulong uVar4;
  undefined8 in_d3;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  undefined4 in_stack_00000038;
  
  plVar2 = *(long **)(unaff_x21 + 0x370);
  if ((*(byte *)(unaff_x22 + 0xb3e) & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record_GetUnsafeExtraMemoryPtrUnchecked__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__
                      );
    *(undefined1 *)(unaff_x22 + 0xb3e) = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  uVar3 = *(undefined8 *)(param_1 + 200);
  if (*(int *)(*plVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar1 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                    (uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    if (*(long *)(param_1 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = FUN_036385e8(*(undefined4 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x13c),
                         *(undefined4 *)(param_1 + 0x140),*(long *)(param_1 + 200),&stack0x00000020)
    ;
    if ((uVar1 & 1) != 0) {
      uVar4 = in_stack_00000030 & 0xffffffff;
      uVar1 = in_stack_00000030 >> 0x20;
      uVar5 = *(undefined4 *)(param_1 + 0x138);
      uVar6 = *(undefined4 *)(param_1 + 0x13c);
      uVar7 = *(undefined4 *)(param_1 + 0x140);
      uVar3 = FUN_0406761c(in_stack_00000028._4_4_,uVar4,uVar1,0);
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
      *unaff_x19 = 0;
      *(undefined4 *)(unaff_x19 + 3) = 0;
      FUN_0407b788(uVar5,uVar6,uVar7,uVar3,uVar4,uVar1,in_d3);
      return;
    }
  }
  if (*(int *)(*(long *)
                Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__ +
              0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0407bc90(0);
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  return;
}


