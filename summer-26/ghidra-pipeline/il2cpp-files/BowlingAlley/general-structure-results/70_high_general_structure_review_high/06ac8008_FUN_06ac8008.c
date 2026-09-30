/*
FUNCTION_NAME: FUN_06ac8008
ENTRY_POINT: 06ac8008
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06ac8008(long *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined1 local_48 [16];
  long local_38;
  
  puVar1 = 
  Method_UnityEngine_XR_ARSubsystems_TrackingSubsystem<XRRaycast,_XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider>__ctor__
  ;
  if ((DAT_076e31a9 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARSubsystems_TrackingSubsystem<XRRaycast,_XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Events_UnityEvent<CustomMatchmaking_RoomOperationResult>_Invoke__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<InputAction_CallbackContext>__ctor__);
    DAT_076e31a9 = 1;
  }
  local_48._8_8_ = 0;
  local_38 = 0;
  local_48._0_8_ = 0;
  plVar2 = (long *)thunk_FUN_032a55a4(param_2,*(undefined8 *)puVar1);
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    lVar4 = *(long *)puVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06ac80d8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_032937ac(plVar2,lVar4,0);
LAB_06ac80d8:
    lVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((lVar4 != 0) &&
       (uVar6 = (**(code **)(*param_1 + 0x248))
                          (param_1,param_2,param_3,*(undefined8 *)(*param_1 + 0x250)),
       (uVar6 & 1) != 0)) {
      if (param_3 != (long *)0x0) {
        lVar5 = *param_3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                *(long *)
                 Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
               ) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
              goto LAB_06ac8168;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_032937ac(param_3,*(long *)
                                       Method_System_Threading_Tasks_TaskCompletionSource<OvrAvatarManager_AvatarRequestBoolResults>__ctor__
                              ,6);
LAB_06ac8168:
        uVar6 = (*(code *)*puVar3)(param_3,puVar3[1]);
        if (((uVar6 & 1) != 0) &&
           (uVar6 = (**(code **)(*param_1 + 0x4a8))
                              (param_1,lVar4,param_3,*(undefined8 *)(*param_1 + 0x4b0)),
           (uVar6 & 1) == 0)) {
          return;
        }
        if (param_1[0x21] != 0) {
          local_48 = FUN_03fdb010(param_1[0x21],&local_38,
                                  *(undefined8 *)
                                   Method_UnityEngine_Events_UnityEvent<CustomMatchmaking_RoomOperationResult>_Invoke__
                                 );
          if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          *(long *)(local_38 + 0x28) = (long)param_1;
          thunk_FUN_0333a630((long *)(local_38 + 0x28),param_1);
          if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          *(undefined8 *)(local_38 + 0x10) = param_2;
          thunk_FUN_0333a630((undefined8 *)(local_38 + 0x10),param_2);
          if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          *(long *)(local_38 + 0x18) = (long)param_3;
          thunk_FUN_0333a630((long *)(local_38 + 0x18),param_3);
          if (local_38 != 0) {
            *(long *)(local_38 + 0x20) = lVar4;
            thunk_FUN_0333a630((long *)(local_38 + 0x20),lVar4);
            (**(code **)(*param_1 + 0x428))
                      (param_1,lVar4,param_3,local_38,*(undefined8 *)(*param_1 + 0x430));
            FUN_0479c18c(local_48,*(undefined8 *)
                                   Method_UnityEngine_Events_UnityEvent<InputAction_CallbackContext>__ctor__
                        );
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
  }
  return;
}


