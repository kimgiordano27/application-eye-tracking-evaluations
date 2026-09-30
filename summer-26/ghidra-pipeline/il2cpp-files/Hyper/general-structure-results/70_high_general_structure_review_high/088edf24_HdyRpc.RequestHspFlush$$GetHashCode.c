/*
FUNCTION_NAME: HdyRpc.RequestHspFlush$$GetHashCode
ENTRY_POINT: 088edf24
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void HdyRpc_RequestHspFlush__GetHashCode(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined4 *unaff_x19;
  undefined1 (*unaff_x20) [16];
  long *plVar5;
  long *unaff_x23;
  undefined1 auVar6 [16];
  
  (**(code **)(param_1 + 0x138))();
  plVar5 = *(long **)(unaff_x19 + 2);
  unaff_x19[1] = 0;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x23) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_088edf94;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_04980e68(plVar5,*unaff_x23,2);
LAB_088edf94:
  auVar6 = (*(code *)*puVar1)(plVar5,0,puVar1[1]);
  *unaff_x20 = auVar6;
  *unaff_x19 = auVar6._8_4_;
  return;
}


