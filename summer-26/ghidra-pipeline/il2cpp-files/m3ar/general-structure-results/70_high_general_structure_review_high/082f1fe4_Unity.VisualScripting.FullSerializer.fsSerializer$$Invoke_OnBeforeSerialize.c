/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnBeforeSerialize
ENTRY_POINT: 082f1fe4
PROGRAM: m3ar-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnBeforeSerialize(void)

{
  int iVar1;
  ulong uVar2;
  long *unaff_x19;
  
  FUN_082f16fc();
  uVar2 = FUN_07367c2c(unaff_x19[0x42]);
  if ((uVar2 & 1) != 0) {
    if (unaff_x19[0x20] == 0) goto LAB_082f2134;
    FUN_08595728(unaff_x19[0x20],unaff_x19[0x42],0);
  }
  FUN_082ed9d8();
  FUN_082ede78();
  if ((unaff_x19[0x20] != 0) && (iVar1 = FUN_08595a54(unaff_x19[0x20],0), iVar1 != 0)) {
    if (unaff_x19[0x20] == 0) {
LAB_082f2134:
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    iVar1 = FUN_08595a54(unaff_x19[0x20],0);
    if (iVar1 == 2) {
      *(undefined1 *)(unaff_x19 + 0x51) = 1;
    }
    (**(code **)(*unaff_x19 + 0x388))();
  }
  return;
}


