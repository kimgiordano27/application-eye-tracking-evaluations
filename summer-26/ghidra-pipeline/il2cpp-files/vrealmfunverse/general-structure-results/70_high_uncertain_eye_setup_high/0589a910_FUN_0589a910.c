/*
FUNCTION_NAME: FUN_0589a910
ENTRY_POINT: 0589a910
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_0589a910(undefined8 param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar6 = PTR_DAT_063214d0;
  if ((DAT_066d313f & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_063214d0);
    DAT_066d313f = 1;
  }
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066c4a97 == '\0') {
    FUN_02b3c81c(PTR_DAT_063214d0);
    DAT_066c4a97 = '\x01';
  }
  lVar3 = *(long *)puVar6;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *(long *)puVar6;
  }
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 0x11) == '\0') {
    return;
  }
  if (param_2[8] == 0) {
    thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
    uVar4 = thunk_FUN_02b79644();
    puVar6 = Method_System_Nullable<MRUKAnchor_SceneLabels>_get_Value__;
  }
  else {
    uVar1 = param_2[0xb];
    if (uVar1 < 2) {
      thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
      uVar4 = thunk_FUN_02b79644();
      puVar6 = Method_System_Nullable<OVRInput_Controller>__ctor__;
    }
    else if (param_2[3] == 0) {
      thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
      uVar4 = thunk_FUN_02b79644();
      puVar6 = Method_System_Nullable<OVRInput_Controller>_GetValueOrDefault__;
    }
    else if ((param_2[3] < 2) ||
            (((uVar1 != 4 && (uVar1 != 2)) || (iVar2 = FUN_05c9729c(0), iVar2 == 0xb)))) {
      if ((param_2[0xf] < 2) && ((char)param_2[0x10] != '\0')) {
        thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
        uVar4 = thunk_FUN_02b79644();
        puVar6 = Method_System_Nullable<OVRPlugin_BodyState>__ctor__;
      }
      else {
        if (*param_2 != 0) {
          return;
        }
        if ((param_2[1] != 0) && (param_2[2] != 0)) {
          return;
        }
        thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
        uVar4 = thunk_FUN_02b79644();
        puVar6 = Method_System_Nullable<OVRInput_Controller>_get_HasValue__;
      }
    }
    else {
      thunk_FUN_02ba3594(PTR_DAT_0631cbd8);
      uVar4 = thunk_FUN_02b79644();
      puVar6 = Method_System_Nullable<OVRPlugin_Posef>__ctor__;
    }
  }
  uVar5 = thunk_FUN_02ba3594(puVar6);
  FUN_04cf4a4c(uVar4,uVar5,0);
  uVar5 = thunk_FUN_02ba3594(Method_System_Nullable<OVRPlugin_Posef>_get_HasValue__);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar4,uVar5);
}


