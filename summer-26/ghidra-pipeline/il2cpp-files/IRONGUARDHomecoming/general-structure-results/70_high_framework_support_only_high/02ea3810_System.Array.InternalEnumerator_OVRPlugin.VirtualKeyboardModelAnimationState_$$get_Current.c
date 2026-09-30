/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$get_Current
ENTRY_POINT: 02ea3810
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ea38f4) */

undefined8
System_Array_InternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__get_Current
          (undefined8 param_1,long param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  char in_stack_00000000;
  undefined8 in_stack_00000008;
  
  (**(code **)(param_2 + 0x10))();
  uVar2 = in_stack_00000008;
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01ecaf44();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
    lVar5 = lVar4;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_01ecaf44();
      lVar4 = *(long *)(unaff_x20 + 0x20);
      uVar1 = *(ushort *)(lVar4 + 0x135);
    }
    uVar6 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x48);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    lVar5 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x48);
    in_stack_00000008 = uVar2;
    (**(code **)(lVar5 + 0x10))(uVar6,lVar5,lVar3,&stack0x00000008,&stack0x00000004);
    if (in_stack_00000000 != '\0') {
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit();
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


