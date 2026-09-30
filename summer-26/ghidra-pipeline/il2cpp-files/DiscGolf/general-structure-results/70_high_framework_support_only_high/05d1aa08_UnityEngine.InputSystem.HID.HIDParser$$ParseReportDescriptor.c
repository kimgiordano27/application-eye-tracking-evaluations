/*
FUNCTION_NAME: UnityEngine.InputSystem.HID.HIDParser$$ParseReportDescriptor
ENTRY_POINT: 05d1aa08
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


long UnityEngine_InputSystem_HID_HIDParser__ParseReportDescriptor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  
  FUN_02d965b8(OVRPlugin_OVRP_1_128_0_TypeInfo);
  FUN_02d965b8(OVRPlugin_OVRP_1_37_0_TypeInfo);
  FUN_02d965b8(PTR_DAT_06a115e0);
  *(undefined1 *)(unaff_x19 + 0xefe) = 1;
  puVar3 = 
  Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_RemoveAtByMovingTailWithCapacity__
  ;
  puVar2 = OVRPlugin_OVRP_1_37_0_TypeInfo;
  puVar1 = PTR_DAT_06a115e0;
  if (unaff_x20 != 0) {
    uVar5 = FUN_05c0c4d4();
    iVar4 = FUN_05c0c118();
    in_stack_00000008._4_4_ = iVar4;
    uVar6 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),(long)&stack0x00000008 + 4);
    uVar6 = FUN_0536e0dc(*(undefined8 *)puVar1,uVar5,uVar6,0);
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
    FUN_05d1a700(lVar7,*(undefined8 *)puVar2,uVar6);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) {
      if (iVar4 != 0x50) {
        uVar5 = uVar6;
      }
      FUN_05ccbab0(*(long *)(lVar7 + 0x10),*(undefined8 *)OVRPlugin_OVRP_1_128_0_TypeInfo,uVar5,0);
      return lVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


