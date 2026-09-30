/*
FUNCTION_NAME: OVRPlugin$$StopKeyboardTracking
ENTRY_POINT: 0338b7d4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__StopKeyboardTracking(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar10;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0xb28));
  FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<MouseUpEvent>_SetCreateFunction__);
  FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<MouseOverEvent>_TypeId__);
  FUN_01c5d288(Method_UnityEngine_UIElements_EventBase<MouseUpEvent>_TypeId__);
  *(undefined1 *)(unaff_x19 + 0x655) = 1;
  lVar3 = thunk_FUN_01c496e0(*unaff_x21);
  FUN_0338cc44(lVar3,0);
  puVar2 = Method_UnityEngine_UIElements_EventBase<MouseUpEvent>_TypeId__;
  puVar1 = System_Runtime_Remoting_InternalRemotingServices_TypeInfo;
  if (unaff_x20 != (long *)0x0) {
    lVar4 = (**(code **)(*unaff_x20 + 0x1c8))();
    uVar5 = (**(code **)(*unaff_x20 + 0x1b8))();
    uVar5 = FUN_03146988(*(undefined8 *)puVar2,uVar5,0);
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(lVar9);
    }
    if (lVar4 != 0) {
      plVar6 = (long *)FUN_032eb9dc(lVar4,uVar5,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
      uVar7 = FUN_0321094c(plVar6,0,0);
      if ((uVar7 & 1) != 0) {
        return 0;
      }
      if (plVar6 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar6 + 0x3b8))(plVar6,*(undefined8 *)(*plVar6 + 0x3c0));
        uVar10 = *(undefined8 *)PTR_DAT_0422fb38;
        if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fb28);
        }
        uVar10 = FUN_032e04b8(uVar10,0);
        uVar7 = FUN_032ea0d4(uVar5,uVar10,0);
        if ((uVar7 & 1) != 0) {
          return 0;
        }
        if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        plVar8 = (long *)FUN_033a78fc(0);
        if (plVar8 != (long *)0x0) {
          lVar4 = thunk_FUN_01bedf90(*(undefined8 *)
                                      (*plVar8 + (ulong)*(ushort *)
                                                         (*(long *)
                                                  Method_System_Collections_Generic_List_Enumerator<UIRenderDevice_AllocToUpdate>_MoveNext__
                                                  + 0x50) * 0x10 + 0x140));
          uVar5 = (**(code **)(lVar4 + 8))(plVar8,plVar6,lVar4);
          if (lVar3 != 0) {
            *(undefined8 *)(lVar3 + 0x10) = uVar5;
            uVar5 = thunk_FUN_01c496e0(*(undefined8 *)
                                        Method_System_Collections_Generic_List_Enumerator<Pet>_get_Current__
                                      );
            FUN_02f898a4(uVar5,lVar3,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_EventBase<MouseUpEvent>_SetCreateFunction__,
                         0);
            return uVar5;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


