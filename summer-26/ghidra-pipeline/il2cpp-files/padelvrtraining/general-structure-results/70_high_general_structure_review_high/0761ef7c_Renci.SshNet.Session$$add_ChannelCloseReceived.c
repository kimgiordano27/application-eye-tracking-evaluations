/*
FUNCTION_NAME: Renci.SshNet.Session$$add_ChannelCloseReceived
ENTRY_POINT: 0761ef7c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Renci_SshNet_Session__add_ChannelCloseReceived(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  uint uStack000000000000000c;
  
  plVar3 = (long *)thunk_FUN_03d2ef40();
  FUN_06fe1978(plVar3,0);
  puVar2 = PTR_DAT_0922cdc8;
  puVar1 = PTR_DAT_091af1e0;
  uStack000000000000000c = 0;
  if (unaff_x19 != 0) {
    if (0 < *(int *)(unaff_x19 + 0x18)) {
      do {
        uVar4 = FUN_07175a38(&stack0x0000000c,0);
        uVar4 = FUN_06fc5244(uVar4,*(undefined8 *)puVar1,0);
        if (plVar3 == (long *)0x0) goto LAB_0761f04c;
        FUN_06fdb1c8(plVar3,uVar4,0);
        if (*(uint *)(unaff_x19 + 0x18) <= uStack000000000000000c) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        FUN_06fe43e0(plVar3,*(undefined8 *)
                             (unaff_x19 + (long)(int)uStack000000000000000c * 8 + 0x20),0);
        FUN_06fdb1c8(plVar3,*(undefined8 *)puVar2,0);
        uStack000000000000000c = uStack000000000000000c + 1;
      } while ((int)uStack000000000000000c < *(int *)(unaff_x19 + 0x18));
    }
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      return;
    }
  }
LAB_0761f04c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


