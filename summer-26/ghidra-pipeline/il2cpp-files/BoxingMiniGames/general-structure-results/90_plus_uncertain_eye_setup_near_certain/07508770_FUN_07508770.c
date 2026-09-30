/*
FUNCTION_NAME: FUN_07508770
ENTRY_POINT: 07508770
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_11
*/


void FUN_07508770(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar2 = Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__;
  if ((DAT_07ef4add & 1) == 0) {
    FUN_03642964(PTR_DAT_079fdb30);
    FUN_03642964(PTR_DAT_079fff00);
    FUN_03642964(Method_OVRTaskBuilder<bool>_SetStateMachine__);
    FUN_03642964(Method_OVRTaskBuilder<bool>_get_Task__);
    FUN_03642964(Method_Unity_AppUI_UI_NumericalField<float>_set_unit__);
    FUN_03642964(PTR_DAT_079ff9e8);
    FUN_03642964(
                Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__7>__
                );
    FUN_03642964(Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRFuture_<When>d__0>__);
    FUN_03642964(
                Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRAnchor_Tracker_<SetupMarkerTracker>d__5>__
                );
    FUN_03642964(Method_OVRTaskBuilder<OVRPlugin_Result>_Create__);
    FUN_03642964(
                Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRFuture_<When>d__0>__
                );
    DAT_07ef4add = 1;
  }
  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_05e5ae34(lVar5,0);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = param_1;
    thunk_FUN_036b7ad0((long *)(lVar5 + 0x10),param_1);
    *(undefined8 *)(lVar5 + 0x18) = param_2;
    thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x18),param_2);
    *(undefined8 *)(lVar5 + 0x20) = param_3;
    thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20),param_3);
    iVar3 = FUN_07508ad4(param_1);
    if (iVar3 != 2) {
      if (iVar3 != 1) {
        uVar11 = FUN_074ef718();
        uVar12 = thunk_FUN_036aa1c8(Method_OVRTaskBuilder<OVRPlugin_Result>_SetException__);
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar11,uVar12);
      }
      uVar11 = *(undefined8 *)(lVar5 + 0x18);
      uVar12 = *(undefined8 *)(lVar5 + 0x20);
      uVar6 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fdb30);
      FUN_04164968(uVar6,lVar5,
                   *(undefined8 *)
                    Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__7>__
                   ,0);
LAB_07508a84:
      FUN_07508d24(param_1,uVar11,uVar12,uVar6);
      return;
    }
    lVar7 = thunk_FUN_0367fe20(*(undefined8 *)Method_OVRTaskBuilder<OVRPlugin_Result>_Create__);
    FUN_05e5ae34(lVar7,0);
    if (lVar7 != 0) {
      plVar13 = (long *)(lVar7 + 0x18);
      *plVar13 = lVar5;
      thunk_FUN_036b7ad0(plVar13,lVar5);
      if (*plVar13 != 0) {
        uVar11 = FUN_03d9b618(*(undefined8 *)(*plVar13 + 0x20),
                              *(undefined8 *)Method_OVRTaskBuilder<bool>_SetStateMachine__);
        if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978(*(long *)(PTR_DAT_079f4610 + 0xe0));
        }
        uVar8 = FUN_05e30794(uVar11,0,0);
        if ((uVar8 & 1) != 0) {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_07508aa8;
          uVar4 = FUN_03d9b58c(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x70),
                               *(undefined8 *)PTR_DAT_079fff00);
          FUN_074ef380(uVar4 & 1,
                       *(undefined8 *)
                        Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRFuture_<When>d__0>__
                      );
        }
        lVar5 = *plVar13;
        if ((lVar5 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
          uVar12 = *(undefined8 *)(lVar5 + 0x18);
          uVar1 = *(undefined8 *)(lVar5 + 0x20);
          uVar6 = *(undefined8 *)(param_1 + 0x18);
          uVar10 = *(undefined8 *)(param_1 + 0x20);
          uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x70);
          uVar9 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079ff9e8);
          FUN_07527314(uVar9,uVar10,0);
          if (*(long *)(param_1 + 0x10) != 0) {
            uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x78);
            uVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                         Method_Unity_AppUI_UI_NumericalField<float>_set_unit__);
            FUN_075265a4(uVar10,uVar12,uVar6,uVar11,uVar1,uVar14,uVar9,uVar15,0);
            uVar11 = thunk_FUN_0367fe20(*(undefined8 *)Method_OVRTaskBuilder<bool>_get_Task__);
            FUN_07526ec8(uVar11,uVar10,0);
            *(undefined8 *)(lVar7 + 0x10) = uVar11;
            thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x10),uVar11);
            lVar5 = *(long *)(lVar7 + 0x18);
            if (lVar5 != 0) {
              uVar11 = *(undefined8 *)(lVar5 + 0x18);
              uVar12 = *(undefined8 *)(lVar5 + 0x20);
              uVar6 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fdb30);
              FUN_04164968(uVar6,lVar7,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<OVRPlugin_Result>_Start<OVRAnchor_Tracker_<SetupMarkerTracker>d__5>__
                           ,0);
              goto LAB_07508a84;
            }
          }
        }
      }
    }
  }
LAB_07508aa8:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


