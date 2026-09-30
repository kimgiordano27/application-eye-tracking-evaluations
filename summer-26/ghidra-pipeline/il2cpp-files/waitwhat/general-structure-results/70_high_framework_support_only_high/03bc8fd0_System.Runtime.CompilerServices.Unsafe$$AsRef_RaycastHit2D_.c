/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AsRef<RaycastHit2D>
ENTRY_POINT: 03bc8fd0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 84
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Runtime_CompilerServices_Unsafe__AsRef<RaycastHit2D>(void)

{
  ulong uVar1;
  long lVar2;
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
  
  thunk_FUN_031e5338();
  uVar1 = (**(code **)**(undefined8 **)(unaff_x20 + 0x38))();
  if ((uVar1 & 1) == 0) {
    pvVar4 = (void *)0x0;
    *unaff_x19 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar1 = (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x10))();
    if ((uVar1 & 1) == 0) {
System_Runtime_CompilerServices_Unsafe__AsRef<CAPI_ovrAvatar2MaterialExtensionEntry>:
      lVar2 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar1 = (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x58))();
      if ((uVar1 & 1) != 0)
      goto System_Runtime_CompilerServices_Unsafe__AsRef<OVRPlugin_SpaceDiscoveryResult>;
      lVar5 = *(long *)(unaff_x20 + 0x38);
      lVar2 = *(long *)(lVar5 + 0x38);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_031c09d4();
        lVar5 = *(long *)(unaff_x20 + 0x38);
      }
      FUN_031896ac(lVar2,*(undefined8 *)(lVar5 + 0x60));
      uVar6 = *(undefined8 *)(unaff_x29 + -0x20);
      if (*(int *)(DAT_07259c98 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      lVar2 = FUN_06a68cb0(uVar6,0);
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
      lVar2 = *plVar3;
      *(undefined8 **)(unaff_x29 + -0x20) = unaff_x24;
      *(undefined8 **)(unaff_x29 + -0x18) = unaff_x25;
      lVar2 = *(long *)(lVar2 + 0x1c0);
      (**(code **)(lVar2 + 0x10))
                (*(undefined8 *)(lVar2 + 8),lVar2,plVar3,unaff_x29 + -0x20,unaff_x29 + -0xc);
      if (*(char *)(unaff_x29 + -0xc) == '\0')
      goto System_Runtime_CompilerServices_Unsafe__AsRef<CAPI_ovrAvatar2MaterialExtensionEntry>;
System_Runtime_CompilerServices_Unsafe__AsRef<OVRPlugin_SpaceDiscoveryResult>:
      if (*(int *)(DAT_07259c98 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      lVar2 = (*(code *)**(undefined8 **)(*(long *)(unaff_x20 + 0x38) + 0x48))();
    }
    *unaff_x19 = lVar2;
    pvVar4 = (void *)(ulong)(lVar2 != 0);
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }

  System_Runtime_CompilerServices_Unsafe__IsAddressLessThan<KeyValuePair<object,_JsonParser_JsonValue>>
  :
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pvVar4);
}


