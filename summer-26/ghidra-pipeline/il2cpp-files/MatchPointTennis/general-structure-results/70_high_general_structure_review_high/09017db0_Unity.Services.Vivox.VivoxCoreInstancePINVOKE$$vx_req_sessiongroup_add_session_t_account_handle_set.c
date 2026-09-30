/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_add_session_t_account_handle_set
ENTRY_POINT: 09017db0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_add_session_t_account_handle_set
          (undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_0a533609 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09fbffe0);
    FUN_04447ba8(PTR_DAT_09f49298);
    DAT_0a533609 = 1;
  }
  if (param_2 != (long *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    if (iVar1 == 0xb) {
      return 0;
    }
    lVar2 = FUN_07b6d470(param_2,0);
    lVar5 = *(long *)PTR_DAT_09f49298;
    lVar4 = *(long *)(lVar5 + 0x38);
    if (lVar4 == 0) {
      FUN_04482014(lVar5);
      lVar4 = *(long *)(lVar5 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8();
    }
    if (lVar2 != 0) {
      uVar3 = FUN_07b74960(lVar2,0,**(undefined8 **)(lVar4 + 0xb8),0);
      if (*(int *)(*(long *)PTR_DAT_09fbffe0 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)PTR_DAT_09fbffe0);
      }
      uVar3 = FUN_09017108(uVar3);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


