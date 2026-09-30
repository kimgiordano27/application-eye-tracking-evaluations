/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetInternalSerializer
ENTRY_POINT: 054b91b8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetInternalSerializer(void)

{
  short sVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  
  thunk_FUN_02df485c();
                    /* try { // try from 054b91c0 to 055b91c3 has its CatchHandler @ 054b93ac */
  iVar2 = FUN_05372d78();
  if ((iVar2 != 0) && (iVar2 < 1)) {
                    /* try { // try from 054b91fc to 055b9233 has its CatchHandler @ 054b93b0 */
    return **(undefined8 **)(*(long *)(unaff_x23 + 0x90) + 0xb8);
  }
  lVar3 = FUN_0536f444();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  iVar2 = *(int *)(lVar3 + 0x10);
  if (iVar2 < 2) {
    lVar5 = *unaff_x22;
    if (iVar2 == 1) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar5);
        lVar5 = *unaff_x22;
      }
      if ((*(short *)(*(long *)(lVar5 + 0xb8) + 10) == 0x5c) && (1 < *(int *)(unaff_x20 + 0x10))) {
        sVar1 = FUN_053674f8();
        lVar5 = *unaff_x22;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c(lVar5);
          lVar5 = *unaff_x22;
        }
        if (*(short *)(*(long *)(lVar5 + 0xb8) + 0x18) == sVar1) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02df485c(lVar5);
          }
          if (*(int *)(*(long *)(unaff_x23 + 0x88) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          lVar5 = *(long *)(*unaff_x22 + 0xb8) + 0x18;
          goto LAB_054b9370;
        }
      }
    }
  }
  else {
    lVar5 = *unaff_x22;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar5);
      lVar5 = *unaff_x22;
    }
    if (*(short *)(*(long *)(lVar5 + 0xb8) + 10) == 0x5c) {
      sVar1 = FUN_053674f8(lVar3,iVar2 + -1,0);
      lVar5 = *unaff_x22;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar5);
        lVar5 = *unaff_x22;
      }
      if (*(short *)(*(long *)(lVar5 + 0xb8) + 0x18) == sVar1) {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c(lVar5);
        }
        if (*(int *)(*(long *)(unaff_x23 + 0x88) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        lVar5 = *(long *)(*unaff_x22 + 0xb8) + 10;
LAB_054b9370:
        uVar4 = FUN_054484f0(lVar5,0);
        uVar4 = FUN_05362cb4(lVar3,uVar4,0);
        return uVar4;
      }
    }
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c(lVar5);
  }
  uVar4 = FUN_054bd7a8(lVar3);
  return uVar4;
}


