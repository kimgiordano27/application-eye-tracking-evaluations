/*
FUNCTION_NAME: CustomWebSocketSharp.Net.HttpListenerRequest$$GetClientCertificate
ENTRY_POINT: 038f6760
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void CustomWebSocketSharp_Net_HttpListenerRequest__GetClientCertificate(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  uint unaff_w19;
  long unaff_x20;
  ulong unaff_x21;
  long *plVar4;
  long unaff_x23;
  char *pcVar5;
  long *unaff_x24;
  undefined8 uVar6;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  FUN_0373b518();
  FUN_0373b518(PTR_DAT_07d89620);
  FUN_0373b518(PTR_DAT_07d89638);
  FUN_0373b518(PTR_DAT_07d8a398);
                    /* try { // try from 038f6788 to 039f678b has its CatchHandler @ 038f6f60 */
                    /* try { // try from 038f6790 to 039f6793 has its CatchHandler @ 038f6f28 */
  FUN_0373b518(PTR_DAT_07d8a3a0);
  FUN_0373b518(PTR_DAT_07d8a3a8);
  FUN_0373b518(PTR_DAT_07d86398);
  *(undefined1 *)(unaff_x23 + 0xeed) = 1;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  lVar2 = FUN_03f0dcd0();
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70(*unaff_x24);
  }
  uVar3 = FUN_075b0180(lVar2,0);
  if ((uVar3 & 1) != 0) {
    if (lVar2 == 0) goto LAB_038f6998;
    lVar2 = thunk_FUN_075707e4(lVar2,0);
    pcVar5 = (char *)(unaff_x20 + 0x38);
    if (*pcVar5 == '\0') {
      if (lVar2 == 0) goto LAB_038f6998;
      FUN_07574ae8(lVar2,0);
      FUN_04e5a69c();
      *(undefined4 *)(unaff_x20 + 0x48) = 0;
      *(undefined8 *)(unaff_x20 + 0x40) = 0;
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5[4] = '\0';
      pcVar5[5] = '\0';
      pcVar5[6] = '\0';
      pcVar5[7] = '\0';
      if ((unaff_w19 & 1) != 0)
      goto CustomWebSocketSharp_Net_HttpListenerResponse__get_CloseConnection;
LAB_038f6878:
      uVar6 = FUN_04e5a6b8(pcVar5,*(undefined8 *)PTR_DAT_07d8a3a8);
    }
    else {
      if ((unaff_w19 & 1) == 0) goto LAB_038f6878;
CustomWebSocketSharp_Net_HttpListenerResponse__get_CloseConnection:
      if ((unaff_x21 & 1) == 0) goto LAB_038f6878;
      uVar6 = 0x42480000;
    }
    if (lVar2 == 0) goto LAB_038f6998;
    FUN_07574c0c(uVar6,lVar2,0);
  }
  plVar4 = (long *)(unaff_x20 + 0x30);
  lVar2 = *plVar4;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar3 = FUN_075ac5e0(lVar2,0,0);
  if ((uVar3 & 1) != 0) {
    uVar6 = FUN_03f0e0d8();
    *(undefined8 *)(unaff_x20 + 0x30) = uVar6;
    thunk_FUN_037aeb94(plVar4,uVar6);
  }
  lVar2 = *plVar4;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar3 = FUN_075aa744(lVar2,0,0);
  if ((uVar3 & 1) != 0) {
    if ((*plVar4 == 0) || (lVar2 = *(long *)(*plVar4 + 0x40), lVar2 == 0)) {
LAB_038f6998:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_049cf910(&stack0x00000018,lVar2,*(undefined8 *)PTR_DAT_07d89638);
    puVar1 = PTR_DAT_07d89618;
    while (uVar3 = FUN_05d64e98(&stack0x00000018,*(undefined8 *)puVar1), (uVar3 & 1) != 0) {
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_07634f2c(in_stack_00000028,unaff_w19 & 1,0);
    }
    FUN_05d64e94(&stack0x00000018,*(undefined8 *)PTR_DAT_07d89610);
  }
  return;
}


