/*
FUNCTION_NAME: Oculus.Avatar2.Experimental.CAPI$$ovrAvatarXBehavior_GetEventDefinitions
ENTRY_POINT: 055a362c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x055a3688) */
/* WARNING: Removing unreachable block (ram,0x055a37d8) */

void Oculus_Avatar2_Experimental_CAPI__ovrAvatarXBehavior_GetEventDefinitions(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *unaff_x21;
  undefined8 uVar6;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  
  while( true ) {
    FUN_0554bf68();
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar3 = FUN_0556e830();
    FUN_055ab7c8(unaff_x23,uVar3,0);
    if (in_stack_00000030._4_1_ != '\0') {
      thunk_FUN_02da42ec(*in_stack_00000028,0);
    }
    if (unaff_x19 == 0) break;
    FUN_055abbcc();
    do {
      uVar2 = FUN_05156804(&stack0x00000040,*unaff_x29);
      if ((uVar2 & 1) == 0) {
        FUN_05156800(in_stack_00000010,*unaff_x28);
        puVar1 = Meta_XR_ImmersiveDebugger_RuntimeSettings_DistanceOption_var;
        if (in_stack_00000008 == 0) {
          lVar4 = *(long *)Meta_XR_ImmersiveDebugger_RuntimeSettings_DistanceOption_var;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar4 = *(long *)puVar1;
          }
          puVar5 = *(undefined8 **)(lVar4 + 0xb8);
          if (puVar5[6] == 0) {
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
            }
            uVar6 = *puVar5;
            uVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                                        UnityEngine_XR_ARFoundation_ARTrackableManager<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider,_BoundedPlane,_ARPlane>_TypeInfo
                                      );
            FUN_03b78798(uVar3,uVar6,
                         *(undefined8 *)
                          UnityEngine_XR_ARFoundation_ARTrackableManager<XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider,_XRRaycast,_ARRaycast>_TypeInfo
                         ,0);
            puVar5 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
            *puVar5 = uVar3;
            LeanTween__value(puVar5,uVar3);
          }
          uVar3 = FUN_0360a08c();
          FUN_03615f24(uVar3,*(undefined8 *)OVRPlugin_Qpl_Annotation_Builder_var);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96858(in_stack_00000008);
      }
      unaff_x23 = (**(code **)(*unaff_x21 + 0x298))();
    } while (unaff_x23 == 0);
    in_stack_00000030._4_1_ = '\0';
    in_stack_00000028 = unaff_x26;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


