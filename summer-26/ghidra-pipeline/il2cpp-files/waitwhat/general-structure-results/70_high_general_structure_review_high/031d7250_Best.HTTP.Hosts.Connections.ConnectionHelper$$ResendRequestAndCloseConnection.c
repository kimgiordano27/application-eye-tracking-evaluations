/*
FUNCTION_NAME: Best.HTTP.Hosts.Connections.ConnectionHelper$$ResendRequestAndCloseConnection
ENTRY_POINT: 031d7250
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Best_HTTP_Hosts_Connections_ConnectionHelper__ResendRequestAndCloseConnection
                (undefined4 *param_1)

{
  ulong uVar1;
  char in_NG;
  char in_OV;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 *in_x9;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 unaff_w19;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x23;
  undefined4 *puVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  if (in_NG == in_OV) {
    uVar3 = FUN_031d1894("Out of thread static storage slots");
                    /* WARNING: Subroutine does not return */
    FUN_031d03dc(uVar3,0);
  }
  if (in_x9 < DAT_07562790) {
    puVar7 = in_x9 + 1;
    *in_x9 = unaff_w19;
  }
  else {
    uVar1 = unaff_x20 + 1;
    if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0318bf00(&DAT_07562780);
    }
    uVar6 = (long)DAT_07562790 - (long)param_1 >> 1;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffffb < (ulong)((long)DAT_07562790 - (long)param_1)) {
      uVar6 = 0x3fffffffffffffff;
    }
    if (uVar6 == 0) {
      auVar9 = ZEXT816(0);
    }
    else {
      auVar9 = FUN_031de348(&DAT_07562790);
      param_1 = (undefined4 *)*unaff_x23;
      in_x9 = (undefined4 *)unaff_x23[1];
    }
    puVar5 = (undefined4 *)(auVar9._0_8_ + unaff_x20 * 4);
    puVar7 = puVar5 + 1;
    *puVar5 = unaff_w19;
    while (in_x9 != param_1) {
      in_x9 = in_x9 + -1;
      puVar5 = puVar5 + -1;
      *puVar5 = *in_x9;
    }
    *unaff_x23 = puVar5;
    unaff_x23[1] = puVar7;
    unaff_x23[2] = auVar9._0_8_ + auVar9._8_8_ * 4;
    if (param_1 != (undefined4 *)0x0) {
      operator_delete(param_1);
    }
  }
  plVar8 = (long *)*DAT_075627b0;
  DAT_07562788 = puVar7;
  if (plVar8 != (long *)DAT_075627b0[1]) {
    plVar4 = DAT_075627b0;
    do {
      lVar2 = *(long *)(*(long *)(*plVar8 + 0x10) + 0x60);
      if (lVar2 != 0) {
        FUN_031d9980(lVar2,(unaff_x21 & 0x3fffc) << 0x1e | unaff_x20 >> 0x10 & 0xffff,unaff_w19);
        plVar4 = DAT_075627b0;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != (long *)plVar4[1]);
  }
  FUN_03189f7c(&stack0x00000008);
  return unaff_x20 & 0xffffffff;
}


