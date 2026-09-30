/*
FUNCTION_NAME: UnityWebSocketSharp.CloseEventArgs$$.ctor
ENTRY_POINT: 087c5900
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_7
*/


undefined8 UnityWebSocketSharp_CloseEventArgs___ctor(undefined8 param_1,int param_2)

{
  int iVar1;
  char in_NG;
  char in_OV;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  long *plVar5;
  int in_w8;
  long unaff_x19;
  int unaff_w20;
  int iVar6;
  
  if (in_NG == in_OV) {
    iVar6 = in_w8 + unaff_w20;
    if (*(char *)(unaff_x19 + 0x99) == '\0') {
      iVar1 = unaff_w20;
      do {
        if (iVar1 == 0) goto LAB_087c5a24;
        if (*(long *)(unaff_x19 + 0x20) == 0) goto UnityWebSocketSharp_PayloadData__get_Reason;
        sVar2 = FUN_078aee34(*(long *)(unaff_x19 + 0x20),param_2 + -1 + iVar1,0);
        if (*(long *)(unaff_x19 + 0x20) == 0) goto UnityWebSocketSharp_PayloadData__get_Reason;
        iVar6 = iVar6 + -1;
        iVar1 = iVar1 + -1;
        sVar3 = FUN_078aee34(*(long *)(unaff_x19 + 0x20),iVar6,0);
      } while (sVar2 == sVar3);
    }
    else {
      iVar1 = unaff_w20;
      do {
        if (iVar1 == 0) {
LAB_087c5a24:
          if (*(char *)(unaff_x19 + 0x98) != '\0') {
            unaff_w20 = 0;
          }
          *(int *)(unaff_x19 + 0x28) = unaff_w20 + iVar6;
          return 1;
        }
        plVar5 = *(long **)(unaff_x19 + 0x88);
        if (plVar5 == (long *)0x0) {
UnityWebSocketSharp_PayloadData__get_Reason:
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        plVar5 = (long *)(**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
        if ((*(long *)(unaff_x19 + 0x20) == 0) ||
           (uVar4 = FUN_078aee34(*(long *)(unaff_x19 + 0x20),param_2 + -1 + iVar1,0),
           plVar5 == (long *)0x0)) goto UnityWebSocketSharp_PayloadData__get_Reason;
        sVar2 = (**(code **)(*plVar5 + 0x1a8))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x1b0));
        plVar5 = *(long **)(unaff_x19 + 0x88);
        if (plVar5 == (long *)0x0) goto UnityWebSocketSharp_PayloadData__get_Reason;
        plVar5 = (long *)(**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
        if (*(long *)(unaff_x19 + 0x20) == 0) goto UnityWebSocketSharp_PayloadData__get_Reason;
        iVar6 = iVar6 + -1;
        uVar4 = FUN_078aee34(*(long *)(unaff_x19 + 0x20),iVar6,0);
        if (plVar5 == (long *)0x0) goto UnityWebSocketSharp_PayloadData__get_Reason;
        iVar1 = iVar1 + -1;
        sVar3 = (**(code **)(*plVar5 + 0x1a8))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x1b0));
      } while (sVar2 == sVar3);
    }
  }
  return 0;
}


