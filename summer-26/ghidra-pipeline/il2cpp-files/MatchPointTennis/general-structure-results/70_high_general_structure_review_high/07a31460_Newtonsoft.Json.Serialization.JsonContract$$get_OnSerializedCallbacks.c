/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$get_OnSerializedCallbacks
ENTRY_POINT: 07a31460
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonContract__get_OnSerializedCallbacks(void)

{
  int iVar1;
  bool in_ZR;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  int *unaff_x20;
  int unaff_w22;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  if (!in_ZR) {
    unaff_w22 = unaff_w22 + 1;
  }
  iVar3 = 1;
  do {
    lVar4 = FUN_07986d30();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    iVar1 = *(int *)(lVar4 + 0x10);
    uVar5 = FUN_07986158();
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*unaff_x25);
      if ((uVar5 & 1) == 0) goto LAB_07a314d4;
LAB_07a314a8:
      uVar5 = FUN_07a34b84();
    }
    else {
      if ((uVar5 & 1) != 0) goto LAB_07a314a8;
LAB_07a314d4:
      uVar5 = FUN_07a33dac();
    }
    if (((uVar5 & 1) != 0) && (in_stack_00000008._4_4_ < iVar1)) {
      *unaff_x20 = iVar3;
      in_stack_00000008._4_4_ = iVar1;
    }
    iVar3 = iVar3 + 1;
  } while (unaff_w22 != iVar3);
  uVar2 = FUN_07986180();
  if ((uVar2 >> 1 & 1) != 0) {
    FUN_079863c4();
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*unaff_x25);
    }
    iVar3 = FUN_07a351ec();
    if (-1 < iVar3) {
      iVar3 = iVar3 + 1;
      *unaff_x20 = iVar3;
      goto LAB_07a31564;
    }
  }
  iVar3 = *unaff_x20;
LAB_07a31564:
  if (0 < iVar3) {
    *(int *)(unaff_x19 + 0x10) = *(int *)(unaff_x19 + 0x10) + in_stack_00000008._4_4_ + -1;
  }
  return 0 < iVar3;
}


