/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AsRef<Pose>
ENTRY_POINT: 03bc8fc4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 123
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void System_Runtime_CompilerServices_Unsafe__AsRef<Pose>(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  void *unaff_x21;
  size_t unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x27;
  long unaff_x29;
  
  lVar1 = FUN_031c09d4();
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar2 = (**(code **)**(undefined8 **)(unaff_x20 + 0x38))();
  if ((uVar2 & 1) == 0) {
    pvVar4 = (void *)0x0;
    *unaff_x19 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_031c09d4();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x10))();
    if ((uVar2 & 1) == 0) {
System_Runtime_CompilerServices_Unsafe__AsRef<CAPI_ovrAvatar2MaterialExtensionEntry>:
      lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_031c09d4();
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x58))();
      if ((uVar2 & 1) != 0)
      goto System_Runtime_CompilerServices_Unsafe__AsRef<OVRPlugin_SpaceDiscoveryResult>;
      lVar5 = *(long *)(unaff_x20 + 0x38);
      lVar1 = *(long *)(lVar5 + 0x38);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_031c09d4();
        lVar5 = *(long *)(unaff_x20 + 0x38);
      }
      FUN_031896ac(lVar1,*(undefined8 *)(lVar5 + 0x60));
      uVar6 = *(undefined8 *)(unaff_x29 + -0x20);
      if (*(int *)(DAT_07259c98 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      lVar1 = FUN_06a68cb0(uVar6,0);
    }
    else {
      plVar3 = (long *)(*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x18))();
      memcpy(unaff_x24,unaff_x21,unaff_x23);
      pvVar4 = memset(unaff_x25,0,unaff_x23);
      if (plVar3 == (long *)0x0) {
        if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03188cd8();
        }
        goto 
        System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<KeyValuePair<object,_JsonParser_JsonValue>>
        ;
      }
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_x20 + 0x38) + 0x38) + 0x28)) {
        unaff_x24 = (undefined8 *)*unaff_x24;
        unaff_x25 = (undefined8 *)*unaff_x25;
      }
      lVar1 = *plVar3;
      *(undefined8 **)(unaff_x29 + -0x20) = unaff_x24;
      *(undefined8 **)(unaff_x29 + -0x18) = unaff_x25;
      lVar1 = *(long *)(lVar1 + 0x1c0);
      (**(code **)(lVar1 + 0x10))
                (*(undefined8 *)(lVar1 + 8),lVar1,plVar3,unaff_x29 + -0x20,unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0')
      goto System_Runtime_CompilerServices_Unsafe__AsRef<CAPI_ovrAvatar2MaterialExtensionEntry>;
System_Runtime_CompilerServices_Unsafe__AsRef<OVRPlugin_SpaceDiscoveryResult>:
      if (*(int *)(DAT_07259c98 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      lVar1 = (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x48))();
    }
    *unaff_x19 = lVar1;
    pvVar4 = (void *)(ulong)(lVar1 != 0);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }

  System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<KeyValuePair<object,_JsonParser_JsonValue>>
  :
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar4);
}


