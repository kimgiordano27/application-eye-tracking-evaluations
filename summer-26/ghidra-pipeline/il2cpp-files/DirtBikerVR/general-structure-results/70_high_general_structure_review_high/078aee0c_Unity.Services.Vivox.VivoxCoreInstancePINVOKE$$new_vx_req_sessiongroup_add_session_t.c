/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_req_sessiongroup_add_session_t
ENTRY_POINT: 078aee0c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_req_sessiongroup_add_session_t
               (undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  undefined8 uStack0000000000000018;
  
  *(undefined8 *)(unaff_x19 + 0xc) = 0;
  *unaff_x19 = 0xffffffff;
  uStack0000000000000018 = param_1;
  uVar3 = FUN_0587c704(&stack0x00000018,
                       *(undefined8 *)System_Collections_Generic_List<PanelSettings>_TypeInfo);
  if (unaff_x20 != 0) {
    FUN_078ad680();
    lVar4 = *(long *)(unaff_x20 + 0x28);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),uVar3,*(undefined8 *)(lVar4 + 0x28))
      ;
    }
    puVar2 = System_Collections_Generic_List<object>_TypeInfo;
    iVar1 = *(int *)(*unaff_x24 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar3,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


