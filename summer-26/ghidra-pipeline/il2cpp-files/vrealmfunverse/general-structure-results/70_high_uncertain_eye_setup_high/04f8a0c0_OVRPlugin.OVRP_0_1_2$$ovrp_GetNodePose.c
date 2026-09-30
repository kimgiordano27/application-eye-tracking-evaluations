/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$ovrp_GetNodePose
ENTRY_POINT: 04f8a0c0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long *unaff_x22;
  
  FUN_04f85044();
  *(undefined8 *)(unaff_x19 + 0xc0) = param_1;
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x19 + 0xc0),param_1);
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar2 = *unaff_x22;
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    uVar3 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313050,
                         *(undefined4 *)(**(long **)(lVar2 + 0xb8) + 0x18));
    *(undefined8 *)(unaff_x19 + 0xd0) = uVar3;
    thunk_FUN_02bb0e9c();
    puVar1 = System_Func<MouseDownEvent>_TypeInfo;
    if (**(long **)(*unaff_x22 + 0xb8) != 0) {
      uVar3 = FUN_02b3c908(*(undefined8 *)System_Func<MouseDownEvent>_TypeInfo,
                           *(undefined4 *)(**(long **)(*unaff_x22 + 0xb8) + 0x18));
      *(undefined8 *)(unaff_x19 + 0xd8) = uVar3;
      thunk_FUN_02bb0e9c();
      if (**(long **)(*unaff_x22 + 0xb8) != 0) {
        uVar3 = FUN_02b3c908(*(undefined8 *)puVar1,
                             *(undefined4 *)(**(long **)(*unaff_x22 + 0xb8) + 0x18));
        *(undefined8 *)(unaff_x19 + 0xe0) = uVar3;
        thunk_FUN_02bb0e9c();
        puVar1 = PTR_DAT_06318b00;
        if (**(long **)(*unaff_x22 + 0xb8) != 0) {
          uVar3 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06318b00,
                               *(undefined4 *)(**(long **)(*unaff_x22 + 0xb8) + 0x18));
          *(undefined8 *)(unaff_x19 + 0x140) = uVar3;
          thunk_FUN_02bb0e9c(unaff_x19 + 0x140,uVar3);
          if (**(long **)(*unaff_x22 + 0xb8) != 0) {
            uVar3 = FUN_02b3c908(*(undefined8 *)puVar1,
                                 *(undefined4 *)(**(long **)(*unaff_x22 + 0xb8) + 0x18));
            *(undefined8 *)(unaff_x19 + 0x148) = uVar3;
            thunk_FUN_02bb0e9c(unaff_x19 + 0x148,uVar3);
            if (**(long **)(*unaff_x22 + 0xb8) != 0) {
              uVar3 = FUN_02b3c908(*(undefined8 *)puVar1,
                                   *(undefined4 *)(**(long **)(*unaff_x22 + 0xb8) + 0x18));
              *(undefined8 *)(unaff_x19 + 0x150) = uVar3;
              thunk_FUN_02bb0e9c(unaff_x19 + 0x150,uVar3);
              puVar1 = System_Func<InteractorUnregisteredEventArgs>_TypeInfo;
              if (**(long **)(*unaff_x22 + 0xb8) != 0) {
                uVar3 = FUN_02b3c908(*(undefined8 *)System_Func<MouseCaptureOutEvent>_TypeInfo,
                                     *(undefined4 *)(**(long **)(*unaff_x22 + 0xb8) + 0x18));
                *(undefined8 *)(unaff_x19 + 0x158) = uVar3;
                thunk_FUN_02bb0e9c(unaff_x19 + 0x158,uVar3);
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                FUN_04f879a4();
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


