/*
FUNCTION_NAME: Oculus.Avatar2.Experimental.BehaviorSystem$$.cctor
ENTRY_POINT: 055a36d8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Oculus_Avatar2_Experimental_BehaviorSystem___cctor(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *unaff_x21;
  undefined8 uVar6;
  long unaff_x22;
  long unaff_x24;
  undefined8 *unaff_x26;
  uint uVar7;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  char *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  
  __cxa_end_catch();
  uVar7 = 0;
  while( true ) {
    if (*in_stack_00000020 != '\0') {
      thunk_FUN_02da42ec(*in_stack_00000028,0);
    }
    if (unaff_x24 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96858(unaff_x24);
    }
    if ((uVar7 != 7) && (uVar7 != 0)) break;
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_055abbcc();
    do {
      uVar2 = FUN_05156804(&stack0x00000040,*unaff_x29);
      if ((uVar2 & 1) == 0) {
        uVar7 = 8;
        goto LAB_055a36ec;
      }
      lVar3 = (**(code **)(*unaff_x21 + 0x298))();
    } while (lVar3 == 0);
    in_stack_00000030._4_1_ = 0;
    FUN_0554bf68();
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar4 = FUN_0556e830();
    FUN_055ab7c8(lVar3,uVar4,0);
    unaff_x24 = 0;
    uVar7 = 7;
    in_stack_00000020 = (char *)((long)&stack0x00000030 + 4);
    in_stack_00000028 = unaff_x26;
  }
LAB_055a36ec:
  FUN_05156800(in_stack_00000010,*unaff_x28);
  puVar1 = Meta_XR_ImmersiveDebugger_RuntimeSettings_DistanceOption_var;
  if (in_stack_00000008 == 0) {
    if ((uVar7 | 8) == 8) {
      lVar3 = *(long *)Meta_XR_ImmersiveDebugger_RuntimeSettings_DistanceOption_var;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar3 = *(long *)puVar1;
      }
      puVar5 = *(undefined8 **)(lVar3 + 0xb8);
      if (puVar5[6] == 0) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar6 = *puVar5;
        uVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                    UnityEngine_XR_ARFoundation_ARTrackableManager<XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider,_BoundedPlane,_ARPlane>_TypeInfo
                                  );
        FUN_03b78798(uVar4,uVar6,
                     *(undefined8 *)
                      UnityEngine_XR_ARFoundation_ARTrackableManager<XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider,_XRRaycast,_ARRaycast>_TypeInfo
                     ,0);
        puVar5 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
        *puVar5 = uVar4;
        LeanTween__value(puVar5,uVar4);
      }
      uVar4 = FUN_0360a08c();
      FUN_03615f24(uVar4,*(undefined8 *)OVRPlugin_Qpl_Annotation_Builder_var);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858(in_stack_00000008);
}


