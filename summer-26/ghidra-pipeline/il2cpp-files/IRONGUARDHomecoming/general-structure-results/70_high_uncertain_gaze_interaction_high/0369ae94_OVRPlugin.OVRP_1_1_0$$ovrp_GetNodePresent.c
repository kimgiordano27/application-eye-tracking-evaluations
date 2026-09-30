/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetNodePresent
ENTRY_POINT: 0369ae94
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_gaze_interaction_hits_1
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetNodePresent(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long unaff_x21;
  undefined8 uVar5;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(
                    Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__
                    );
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_0__);
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_1__);
  *(undefined1 *)(unaff_x21 + 0xf24) = 1;
  *(undefined4 *)(unaff_x19 + 0x140) = 0x3dcccccd;
  puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_1__;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0407bc90(0);
  *(undefined8 *)(unaff_x19 + 0x158) = uStack0000000000000014;
  *(ulong *)(unaff_x19 + 0x150) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  *(undefined8 *)(unaff_x19 + 0x14c) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x144) = in_stack_00000000;
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar2 = *(long *)puVar1;
  }
  lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar2 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    lVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateQuaternion>b__19_1__
                              );
    FUN_02ab2244(lVar4,uVar5,
                 *(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_0__,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar3 = lVar4;
    thunk_FUN_01f51358(plVar3,lVar4);
  }
  *(long *)(unaff_x19 + 0x168) = lVar4;
  thunk_FUN_01f51358(unaff_x19 + 0x168,lVar4);
  FUN_02f499f0();
  return;
}


