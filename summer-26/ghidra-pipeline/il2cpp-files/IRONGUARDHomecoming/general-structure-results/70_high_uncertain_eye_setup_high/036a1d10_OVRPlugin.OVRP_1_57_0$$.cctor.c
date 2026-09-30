/*
FUNCTION_NAME: OVRPlugin.OVRP_1_57_0$$.cctor
ENTRY_POINT: 036a1d10
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_57_0___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x23;
  
  puVar2 = Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_16__;
  puVar1 = Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_67__;
  lVar3 = *unaff_x23;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *unaff_x23;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                              );
    FUN_034f6024(lVar5,uVar6,
                 *(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_7__,0);
    plVar4 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
    *plVar4 = lVar5;
    thunk_FUN_01f51358(plVar4,lVar5);
  }
  *(long *)(unaff_x19 + 0xb8) = lVar5;
  thunk_FUN_01f51358((long *)(unaff_x19 + 0xb8),lVar5);
  uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  OVRPlugin_OVRP_1_44_0__ovrp_GetHandTrackingEnabled();
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar6;
  thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0xc0),uVar6);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *(long *)puVar2;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    uVar6 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__,
                         *(undefined4 *)(**(long **)(lVar3 + 0xb8) + 0x18));
    *(undefined8 *)(unaff_x19 + 0xd0) = uVar6;
    thunk_FUN_01f51358();
    puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_6__;
    if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
      uVar6 = FUN_01f08890(*(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_6__
                           ,*(undefined4 *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18));
      *(undefined8 *)(unaff_x19 + 0xd8) = uVar6;
      thunk_FUN_01f51358();
      if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
        uVar6 = FUN_01f08890(*(undefined8 *)puVar1,
                             *(undefined4 *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18));
        *(undefined8 *)(unaff_x19 + 0xe0) = uVar6;
        thunk_FUN_01f51358();
        puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__;
        if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
          uVar6 = FUN_01f08890(*(undefined8 *)
                                Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__,
                               *(undefined4 *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18));
          *(undefined8 *)(unaff_x19 + 0x140) = uVar6;
          thunk_FUN_01f51358(unaff_x19 + 0x140);
          if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
            uVar6 = FUN_01f08890(*(undefined8 *)puVar1,
                                 *(undefined4 *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18));
            *(undefined8 *)(unaff_x19 + 0x148) = uVar6;
            thunk_FUN_01f51358(unaff_x19 + 0x148);
            if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
              uVar6 = FUN_01f08890(*(undefined8 *)puVar1,
                                   *(undefined4 *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18));
              *(undefined8 *)(unaff_x19 + 0x150) = uVar6;
              thunk_FUN_01f51358(unaff_x19 + 0x150);
              puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__;
              if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
                uVar6 = FUN_01f08890(*(undefined8 *)
                                      Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_56__,
                                     *(undefined4 *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18));
                *(undefined8 *)(unaff_x19 + 0x158) = uVar6;
                thunk_FUN_01f51358(unaff_x19 + 0x158);
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                FUN_0369f958();
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


