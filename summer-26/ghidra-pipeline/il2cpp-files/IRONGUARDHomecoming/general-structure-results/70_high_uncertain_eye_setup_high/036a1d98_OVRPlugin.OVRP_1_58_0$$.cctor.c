/*
FUNCTION_NAME: OVRPlugin.OVRP_1_58_0$$.cctor
ENTRY_POINT: 036a1d98
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_58_0___cctor(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x22;
  undefined8 *unaff_x24;
  
  uVar2 = thunk_FUN_01f117cc(*unaff_x24);
  OVRPlugin_OVRP_1_44_0__ovrp_GetHandTrackingEnabled();
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar2;
  thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0xc0),uVar2);
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *unaff_x22;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    uVar2 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__,
                         *(undefined4 *)(**(long **)(lVar3 + 0xb8) + 0x18));
    *(undefined8 *)(unaff_x19 + 0xd0) = uVar2;
    thunk_FUN_01f51358();
    puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_6__;
    if (**(long **)(*unaff_x22 + 0xb8) != 0) {
      uVar2 = FUN_01f08890(*(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_6__
                           ,*(undefined4 *)(**(long **)(*unaff_x22 + 0xb8) + 0x18));
      *(undefined8 *)(unaff_x19 + 0xd8) = uVar2;
      thunk_FUN_01f51358();
      if (**(long **)(*unaff_x22 + 0xb8) != 0) {
        uVar2 = FUN_01f08890(*(undefined8 *)puVar1,
                             *(undefined4 *)(**(long **)(*unaff_x22 + 0xb8) + 0x18));
        *(undefined8 *)(unaff_x19 + 0xe0) = uVar2;
        thunk_FUN_01f51358();
        puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__;
        if (**(long **)(*unaff_x22 + 0xb8) != 0) {
          uVar2 = FUN_01f08890(*(undefined8 *)
                                Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__,
                               *(undefined4 *)(**(long **)(*unaff_x22 + 0xb8) + 0x18));
          *(undefined8 *)(unaff_x19 + 0x140) = uVar2;
          thunk_FUN_01f51358(unaff_x19 + 0x140);
          if (**(long **)(*unaff_x22 + 0xb8) != 0) {
            uVar2 = FUN_01f08890(*(undefined8 *)puVar1,
                                 *(undefined4 *)(**(long **)(*unaff_x22 + 0xb8) + 0x18));
            *(undefined8 *)(unaff_x19 + 0x148) = uVar2;
            thunk_FUN_01f51358(unaff_x19 + 0x148);
            if (**(long **)(*unaff_x22 + 0xb8) != 0) {
              uVar2 = FUN_01f08890(*(undefined8 *)puVar1,
                                   *(undefined4 *)(**(long **)(*unaff_x22 + 0xb8) + 0x18));
              *(undefined8 *)(unaff_x19 + 0x150) = uVar2;
              thunk_FUN_01f51358(unaff_x19 + 0x150);
              puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__;
              if (**(long **)(*unaff_x22 + 0xb8) != 0) {
                uVar2 = FUN_01f08890(*(undefined8 *)
                                      Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_56__,
                                     *(undefined4 *)(**(long **)(*unaff_x22 + 0xb8) + 0x18));
                *(undefined8 *)(unaff_x19 + 0x158) = uVar2;
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


