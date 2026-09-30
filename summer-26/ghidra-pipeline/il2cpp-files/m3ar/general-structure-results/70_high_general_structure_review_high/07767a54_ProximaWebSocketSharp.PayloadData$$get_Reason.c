/*
FUNCTION_NAME: ProximaWebSocketSharp.PayloadData$$get_Reason
ENTRY_POINT: 07767a54
PROGRAM: m3ar-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void ProximaWebSocketSharp_PayloadData__get_Reason(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  long *unaff_x21;
  
  do {
    in_x9 = in_x9 + -1;
    piVar2 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar4 = (undefined8 *)FUN_0406ae20();
      goto LAB_07767a80;
    }
    plVar1 = (long *)(in_x10 + 2);
    in_x10 = piVar2;
  } while (*plVar1 != param_3);
  puVar4 = (undefined8 *)(param_1 + (long)(*piVar2 + 2) * 0x10 + 0x138);
LAB_07767a80:
  iVar3 = (*(code *)*puVar4)();
  lVar8 = *unaff_x21;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0408f364(lVar8);
    lVar8 = *unaff_x21;
  }
  if (iVar3 == *(int *)(*(long *)(lVar8 + 0xb8) + 8)) {
    lVar8 = ProximaWebSocketSharp_CloseEventArgs___ctor();
    if (lVar8 != 0) {
      lVar8 = ProximaWebSocketSharp_CloseEventArgs___ctor();
                    /* try { // try from 07767ad0 to 07867b7b has its CatchHandler @ 07767ad0
                       catch() { ... } // from try @ 07767ad0 with catch @ 07767ad0
                       catch() { ... } // from try @ 07767b9c with catch @ 07767ad0
                       catch() { ... } // from try @ 07767bc4 with catch @ 07767ad0
                       catch() { ... } // from try @ 07767bf0 with catch @ 07767ad0
                       catch() { ... } // from try @ 07767c14 with catch @ 07767ad0 */
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if ((*(int *)(lVar8 + 0x10) != 0) && (*(char *)(unaff_x19 + 0x28) != '\0')) {
        if (*(int *)(*(long *)PTR_DAT_08f658d0 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar5 = FUN_0852c978(0);
        if ((uVar5 & 1) != 0) {
          uVar5 = FUN_07767c10();
          if ((uVar5 & 1) != 0) {
            return;
          }
          if (*(int *)(*(long *)PTR_DAT_08f655a0 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          FUN_08538e90(*(undefined8 *)PTR_DAT_08fb0ba0,0);
        }
      }
    }
    FUN_07767ddc();
    return;
  }
  thunk_FUN_04097b88(PTR_DAT_08f65af8);
  uVar6 = thunk_FUN_0406deb8();
                    /* try { // try from 07767b7c to 07867b83 has its CatchHandler @ 07767bd0 */
  uVar7 = thunk_FUN_04097b88(PTR_DAT_08fb0ba8);
  FUN_0751c708(uVar6,uVar7,0);
  uVar7 = thunk_FUN_04097b88(PTR_DAT_08fb0bb0);
                    /* WARNING: Subroutine does not return */
  FUN_04031750(uVar6,uVar7);
}


