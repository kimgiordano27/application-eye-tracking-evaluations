/*
FUNCTION_NAME: Best.HTTP.Hosts.Connections.ConnectionHelper$$ResendRequestAndCloseConnection
ENTRY_POINT: 02e80e80
PROGRAM: beastcraft-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] Best_HTTP_Hosts_Connections_ConnectionHelper__ResendRequestAndCloseConnection(void)

{
  long *plVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  int *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  ulong uVar6;
  long unaff_x23;
  ulong unaff_x24;
  ulong uVar7;
  ulong unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  do {
    unaff_x21 = unaff_x23 + unaff_x21 & unaff_x24;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = unaff_x21;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = unaff_x26;
    uVar8 = SUB168(auVar3 * auVar4,8) >> 5;
    uVar6 = unaff_x21 - uVar8 * unaff_x27;
    if ((*(byte *)(*(long *)(unaff_x20 + 0x48) + uVar8 * 0x10 + (uVar6 >> 3) + 10) >> (uVar6 & 7) &
        1) == 0) {
      uVar6 = unaff_x21;
      if (unaff_x25 != 0xffffffffffffffff) {
        uVar6 = unaff_x25;
      }
      unaff_x21 = 0xffffffffffffffff;
LAB_02e80e9c:
      auVar10._8_8_ = uVar6;
      auVar10._0_8_ = unaff_x21;
      return auVar10;
    }
    uVar5 = FUN_02e80ebc();
    uVar7 = unaff_x25;
    if ((uVar5 & 1) == 0) {
      plVar1 = (long *)(*(long *)(unaff_x20 + 0x48) + uVar8 * 0x10);
      lVar9 = *plVar1;
      uVar6 = FUN_02e404a4((long)plVar1 + 10,uVar6 & 0xffffffff);
      piVar2 = (int *)(lVar9 + (uVar6 & 0xffff) * 0x20);
      if ((*unaff_x19 == *piVar2) &&
         ((*unaff_x19 != 0 ||
          (*(long *)(unaff_x19 + 2) == *(long *)(piVar2 + 2) &&
           *(long *)(unaff_x19 + 4) == *(long *)(piVar2 + 4))))) {
        uVar6 = 0xffffffffffffffff;
        goto LAB_02e80e9c;
      }
    }
    else {
      uVar7 = unaff_x21;
      if (unaff_x25 != 0xffffffffffffffff) {
        uVar7 = unaff_x25;
      }
    }
    unaff_x23 = unaff_x23 + 1;
    unaff_x25 = uVar7;
  } while( true );
}


