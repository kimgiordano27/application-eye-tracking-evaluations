/*
FUNCTION_NAME: Renci.SshNet.Session$$OnChannelCloseReceived
ENTRY_POINT: 07624dec
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Renci_SshNet_Session__OnChannelCloseReceived(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  int in_w9;
  long unaff_x19;
  long lVar4;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long *unaff_x24;
  
  (**(code **)(param_1 + (long)(in_w9 + 3) * 0x10 + 0x138))();
  if (*unaff_x24 == 0) goto LAB_076252fc;
  uVar3 = FUN_0762949c(*unaff_x24,0);
  if ((uVar3 & 1) != 0) {
    if (((*unaff_x24 == 0) || (unaff_x20 == 0)) || (*(long *)(unaff_x19 + 0xc0) == 0))
    goto LAB_076252fc;
    lVar4 = *(long *)(*unaff_x24 + 0xb0);
    uVar1 = *(undefined1 *)(unaff_x20 + 0x10);
    iVar2 = FUN_07c745fc(*(long *)(unaff_x19 + 0xc0),0);
    if (lVar4 == 0) goto LAB_076252fc;
    FUN_0764c650(lVar4,uVar1,iVar2 - unaff_w22,0);
  }
  if (*unaff_x24 != 0) {
    uVar3 = FUN_07628800(*unaff_x24,0);
    if ((uVar3 & 1) != 0) {
      *unaff_x21 = unaff_x20;
      thunk_FUN_03d1023c();
    }
    return 1;
  }
LAB_076252fc:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


