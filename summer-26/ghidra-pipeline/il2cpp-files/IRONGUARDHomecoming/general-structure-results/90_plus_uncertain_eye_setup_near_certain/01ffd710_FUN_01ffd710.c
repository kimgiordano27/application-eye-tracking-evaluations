/*
FUNCTION_NAME: FUN_01ffd710
ENTRY_POINT: 01ffd710
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_12;weak_xr_or_state_hits_12;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_12
*/


long FUN_01ffd710(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  puVar4 = Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_get_Value__;
  puVar3 = Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>__ctor__;
  puVar2 = Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Item__;
  if ((DAT_0482ef24 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_get_Value__
                      );
    thunk_FUN_01efb3a4(
                      Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
                      );
    thunk_FUN_01efb3a4(
                      Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Item__);
    DAT_0482ef24 = 1;
  }
  lVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_030f2380(lVar5,*(undefined8 *)puVar3);
  lVar6 = FUN_022c6500(param_1,*(undefined8 *)puVar4);
  puVar2 = Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__;
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      uVar10 = 0;
      do {
        if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar7 = *(long *)(lVar6 + (long)(int)uVar10 * 8 + 0x20);
        if (lVar7 == 0) goto LAB_01ffd85c;
        lVar7 = *(long *)(lVar7 + 0x68);
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0xe8) != '\0')) {
          if (lVar5 == 0) goto LAB_01ffd85c;
          lVar8 = *(long *)(lVar5 + 0x10);
          lVar9 = *(long *)puVar2;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar8 == 0) goto LAB_01ffd85c;
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
            thunk_FUN_01f51358();
          }
          else {
            FUN_030f2bb4(lVar5,lVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar1);
    }
    return lVar5;
  }
LAB_01ffd85c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


