/*
FUNCTION_NAME: FUN_05220914
ENTRY_POINT: 05220914
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_20;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1
*/


void FUN_05220914(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint local_34;
  
  if ((DAT_066cfae6 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631eec8);
    DAT_066cfae6 = 1;
  }
  if ((int)param_1 < 0x29) {
    if ((int)param_1 < 0xb) {
      if (param_1 == 4) {
        if (*(int *)(*(long *)PTR_DAT_0631eec8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_052218d0(param_2);
        return;
      }
      if (param_1 == 10) {
        if (*(int *)(*(long *)PTR_DAT_0631eec8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05221a80(param_2,param_3,param_4);
        return;
      }
    }
    else if ((int)param_1 < 0x1e) {
      if (param_1 == 0xb) {
        if (*(int *)(*(long *)PTR_DAT_0631eec8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05221c88(param_2,param_3,param_4);
        return;
      }
      if (param_1 == 0x1c) {
        if (*(int *)(*(long *)PTR_DAT_0631eec8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05220e90(param_2,param_4);
        return;
      }
      if (param_1 == 0x1d) {
        if (*(int *)(*(long *)PTR_DAT_0631eec8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05222274(param_2,param_4);
        return;
      }
    }
    else {
      if (param_1 == 0x1e) {
        if (*(int *)(*(long *)PTR_DAT_0631eec8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05221060(param_2,param_4);
        return;
      }
      if (param_1 == 0x22) {
        if (*(int *)(*(long *)PTR_DAT_0631eec8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05221230(param_2,param_4);
        return;
      }
      if (param_1 == 0x28) {
        if (*(int *)(*(long *)PTR_DAT_0631eec8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0522215c(param_2);
        return;
      }
    }
  }
  else if (param_1 < 0x37) {
    if (param_1 == 0x2c) {
      if (*(int *)(*(long *)PTR_DAT_0631eec8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05221ff4(param_2,param_3);
      return;
    }
    if (param_1 == 0x31) {
      if (*(int *)(*(long *)PTR_DAT_0631eec8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05222760(param_2,param_4);
      return;
    }
    if (param_1 == 0x36) {
      if (*(int *)(*(long *)PTR_DAT_0631eec8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_052225c8(param_2,param_4);
      return;
    }
  }
  else if ((int)param_1 < 0x4f) {
    if ((int)param_1 < 0x4d) {
      if (param_1 == 0x3c) {
        if (*(int *)(*(long *)PTR_DAT_0631eec8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05221eac(param_2,param_3);
        return;
      }
      if (param_1 == 0x3e) {
        if (*(int *)(*(long *)PTR_DAT_0631eec8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_0522240c(param_2,param_3);
        return;
      }
    }
    else {
      if (param_1 == 0x4d) {
        if (*(int *)(*(long *)PTR_DAT_0631eec8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_052228f8(param_2,param_4);
        return;
      }
      if (param_1 == 0x4e) {
        if (*(int *)(*(long *)PTR_DAT_0631eec8 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_052229c8(param_2,param_4);
        return;
      }
    }
  }
  else if ((int)param_1 < 0x52) {
    if (param_1 == 0x4f) {
      if (*(int *)(*(long *)PTR_DAT_0631eec8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05222960(param_2,param_4);
      return;
    }
    if (param_1 == 0x50) {
      if (*(int *)(*(long *)PTR_DAT_0631eec8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05222a30(param_2,param_4);
      return;
    }
  }
  else {
    if (param_1 == 0x52) {
      if (*(int *)(*(long *)PTR_DAT_0631eec8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05221738(param_2,param_4);
      return;
    }
    if (param_1 == 0x53) {
      if (*(int *)(*(long *)PTR_DAT_0631eec8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_052215a0(param_2,param_4);
      return;
    }
    if (param_1 == 0x54) {
      if (*(int *)(*(long *)PTR_DAT_0631eec8 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05221408(param_2,param_4);
      return;
    }
  }
  local_34 = param_1;
  uVar1 = thunk_FUN_02ba3594(Mono_Security_Interface_MonoTlsProvider_TypeInfo);
  uVar1 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(uVar1,&local_34);
  uVar2 = thunk_FUN_02ba3594(OVRPassthroughLayer_TypeInfo);
  uVar1 = FUN_0522a61c(uVar1,uVar2,0);
  uVar2 = thunk_FUN_02ba3594(OVRPermissionsRequester_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar1,uVar2);
}


