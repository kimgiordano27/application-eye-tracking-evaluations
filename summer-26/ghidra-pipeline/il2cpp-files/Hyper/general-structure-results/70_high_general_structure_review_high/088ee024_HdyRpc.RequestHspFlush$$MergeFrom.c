/*
FUNCTION_NAME: HdyRpc.RequestHspFlush$$MergeFrom
ENTRY_POINT: 088ee024
PROGRAM: Hyper-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void HdyRpc_RequestHspFlush__MergeFrom(void)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 in_w8;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x33d) = in_w8;
  lVar4 = unaff_x19[2];
  if ((lVar4 == 0) || (plVar2 = *(long **)(lVar4 + 0x38), plVar2 == (long *)0x0)) {
    plVar2 = (long *)unaff_x19[1];
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      uVar1 = *(undefined4 *)((long)unaff_x19 + 4);
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac47438) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_088ee0bc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_04980e68(plVar2,*(long *)PTR_DAT_0ac47438,0);
LAB_088ee0bc:
      (*(code *)*puVar3)(plVar2,uVar1,puVar3[1]);
      *unaff_x19 = 0;
      *unaff_x20 = 0;
      unaff_x20[1] = 0;
    }
  }
  else {
    (**(code **)(*plVar2 + 0x398))
              (plVar2,*(undefined8 *)(lVar4 + 0x18),0,*(undefined4 *)((long)unaff_x19 + 4),
               *(undefined8 *)(*plVar2 + 0x3a0));
    *(undefined4 *)((long)unaff_x19 + 4) = 0;
  }
  return;
}


