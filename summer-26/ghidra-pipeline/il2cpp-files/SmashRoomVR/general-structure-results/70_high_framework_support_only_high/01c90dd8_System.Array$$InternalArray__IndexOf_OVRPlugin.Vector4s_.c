/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.Vector4s>
ENTRY_POINT: 01c90dd8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IndexOf<OVRPlugin_Vector4s>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  thunk_FUN_01ad9084();
  thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__);
  thunk_FUN_01ad9084(StringLiteral_542);
  thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_6__);
  thunk_FUN_01ad9084(StringLiteral_551);
  thunk_FUN_01ad9084(StringLiteral_552);
  *(undefined1 *)(unaff_x21 + 0x84c) = 1;
  puVar4 = StringLiteral_552;
  puVar3 = StringLiteral_542;
  puVar1 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
  if (*(char *)(unaff_x20 + 0x20) == '\0') {
    return;
  }
  lVar5 = *(long *)StringLiteral_542;
                    /* catch() { ... } // from try @ 01c90e98 with catch @ 01c90e3c */
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar5 = *(long *)puVar3;
  }
  puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__;
  uVar6 = FUN_02ee6c30(**(undefined8 **)(lVar5 + 0xb8),*(undefined8 *)puVar4);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 01c90e84 to 01d90e97 has its CatchHandler @ 01c90ec4 */
    thunk_FUN_01ac7298(*(long *)puVar1);
  }
  FUN_038f2acc(uVar6,0);
                    /* try { // try from 01c90e98 to 01d90edb has its CatchHandler @ 01c90e3c */
  lVar5 = FUN_01b47fd0(*(undefined8 *)puVar2,5);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
                    /* catch() { ... } // from try @ 01c90e84 with catch @ 01c90ec4 */
      *(undefined8 *)(lVar5 + 0x20) = **(undefined8 **)(*(long *)puVar3 + 0xb8);
      thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x20));
      if (1 < *(uint *)(lVar5 + 0x18)) {
        *(undefined8 *)(lVar5 + 0x28) =
             *(undefined8 *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_6__;
        thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x28));
        if (2 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x30) = unaff_x19;
          thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x30));
          if (3 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)StringLiteral_551;
            thunk_FUN_01b4f09c((undefined8 *)(lVar5 + 0x38));
            in_stack_00000008 = FUN_01c902bc();
            uVar6 = FUN_0303f0f0(&stack0x00000008,0);
            if (4 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x40) = uVar6;
              thunk_FUN_01b4f09c();
              uVar6 = FUN_02ee6e18(lVar5,0);
              FUN_038f2acc(uVar6,0);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


