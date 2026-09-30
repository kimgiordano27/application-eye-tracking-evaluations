/*
FUNCTION_NAME: FUN_05a0b270
ENTRY_POINT: 05a0b270
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05a0b270(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_28;
  
  if ((DAT_06bc1fa1 & 1) == 0) {
    FUN_02f08768(Method_System_Nullable<TimeZoneInfo_TransitionTime>_GetValueOrDefault__);
    FUN_02f08768(Method_System_Nullable<TimeZoneInfo_TransitionTime>_get_HasValue__);
    FUN_02f08768(Method_System_Nullable<OVRPlugin_Result>_get_Value__);
    FUN_02f08768(Method_System_Nullable<XRBaseInteractable_MovementType>__ctor__);
    FUN_02f08768(Method_System_Nullable<XRBaseInteractable_MovementType>_GetValueOrDefault__);
    FUN_02f08768(Method_System_Nullable<XRBaseInteractable_MovementType>_get_HasValue__);
    FUN_02f08768(PTR_DAT_067c9740);
    DAT_06bc1fa1 = 1;
  }
  puVar2 = Method_System_Nullable<OVRPlugin_Result>_get_Value__;
  local_28 = 0;
  if (*param_1 == 0) {
    local_28 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(*(long *)PTR_DAT_067c9740 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar4 = FUN_0514e9cc(uVar6,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    local_28 = FUN_0432ed88(lVar4,*(undefined8 *)
                                   Method_System_Nullable<XRBaseInteractable_MovementType>_get_HasValue__
                           );
    uVar5 = FUN_04302950(&local_28,
                         *(undefined8 *)
                          Method_System_Nullable<XRBaseInteractable_MovementType>_GetValueOrDefault__
                        );
    if ((uVar5 & 1) == 0) {
      lVar4 = *(long *)puVar2;
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = local_28;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_0301b4f4(param_1 + 2,&local_28,param_1,
                   *(undefined8 *)
                    Method_System_Nullable<TimeZoneInfo_TransitionTime>_GetValueOrDefault__);
      return;
    }
  }
  uVar6 = FUN_04302990(&local_28,
                       *(undefined8 *)
                        Method_System_Nullable<XRBaseInteractable_MovementType>__ctor__);
  puVar3 = Method_System_Nullable<TimeZoneInfo_TransitionTime>_get_HasValue__;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *param_1 = -2;
  if (iVar1 == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_03d7590c(param_1 + 2,uVar6,*(undefined8 *)puVar3);
  return;
}


