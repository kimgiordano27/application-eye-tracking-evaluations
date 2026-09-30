/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest.RequestFirstResponseDelegate$$EndInvoke
ENTRY_POINT: 07202ae8
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


undefined8
Meta_WitAi_Requests_VRequest_RequestFirstResponseDelegate__EndInvoke(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
LAB_07202b70:
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  if (*(int *)((long)param_1 + 0xc) == *(int *)(lVar2 + 0x1c)) {
    uVar1 = *(uint *)(param_1 + 1);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 != 0) {
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          lVar2 = lVar2 + (long)(int)uVar1 * 0x10;
          lVar3 = *(long *)(lVar2 + 0x28);
          lVar2 = *(long *)(lVar2 + 0x20);
          *(uint *)(param_1 + 1) = uVar1 + 1;
          param_1[3] = lVar3;
          param_1[2] = lVar2;
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      goto LAB_07202b70;
    }
  }
  if ((*(ushort *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
    FUN_0406aaec();
  }
  FUN_07202b78(param_1);
  return 0;
}


