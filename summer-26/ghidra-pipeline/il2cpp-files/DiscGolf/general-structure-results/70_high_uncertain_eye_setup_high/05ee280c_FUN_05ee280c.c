/*
FUNCTION_NAME: FUN_05ee280c
ENTRY_POINT: 05ee280c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05ee280c(long param_1,char param_2)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  undefined8 local_28;
  
  if ((DAT_06dc3f85 & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Count__);
    FUN_02d965b8(Method_UnityEngine_Rendering_ObservableList<DebugUI_Widget>_get_Item__);
    FUN_02d965b8(Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>__ctor__);
    DAT_06dc3f85 = 1;
  }
  local_28 = 0;
  if (param_2 != '\x04') {
    return;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    if ((*(char *)(*(long *)(param_1 + 0x10) + 0x25) != '\0') || (*(char *)(param_1 + 0x18) != '\0')
       ) {
      FUN_05ee0fe8(param_1);
    }
    puVar3 = Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>__ctor__;
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 != 0) {
      iVar7 = 0;
      do {
        iVar1 = *(int *)(lVar4 + 0x18);
        if (iVar1 <= iVar7) {
          *(undefined4 *)(lVar4 + 0x18) = 0;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (0 < iVar1) {
            FUN_0550afb4(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
          }
          plVar5 = *(long **)(param_1 + 0x10);
          if (plVar5 == (long *)0x0) break;
          uVar6 = (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
          lVar4 = *(long *)(param_1 + 0x10);
          if ((uVar6 & 1) == 0) {
            if (lVar4 == 0) break;
            cVar2 = *(char *)(lVar4 + 0x25);
          }
          else {
            if (lVar4 == 0) break;
            cVar2 = *(char *)(lVar4 + 0x26);
          }
          if (cVar2 == '\0') {
            return;
          }
          FUN_05ee29c8();
          return;
        }
        local_28 = FUN_0411866c(lVar4,iVar7,*(undefined8 *)puVar3);
        if (*(long *)(param_1 + 0x10) == 0) break;
        FUN_05ee295c(*(long *)(param_1 + 0x10),&local_28);
        lVar4 = *(long *)(param_1 + 0x30);
        iVar7 = iVar7 + 1;
      } while (lVar4 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


