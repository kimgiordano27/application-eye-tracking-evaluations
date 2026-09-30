/*
FUNCTION_NAME: HdyRpc.RequestHspFlush$$Equals
ENTRY_POINT: 088ede74
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void HdyRpc_RequestHspFlush__Equals(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  undefined1 (*unaff_x20) [16];
  long unaff_x21;
  undefined1 auVar10 [16];
  
  FUN_04947ee4(PTR_DAT_0ac47438);
  FUN_04947ee4(PTR_DAT_0ac107b8);
  *(undefined1 *)(unaff_x21 + 0x33c) = 1;
  puVar2 = PTR_DAT_0ac47438;
  lVar7 = *(long *)(unaff_x19 + 4);
  if ((lVar7 == 0) || (plVar3 = *(long **)(lVar7 + 0x38), plVar3 == (long *)0x0)) {
    plVar3 = *(long **)(unaff_x19 + 2);
    if (plVar3 == (long *)0x0) {
      thunk_FUN_049ae08c(PTR_DAT_0ac486a0);
      uVar5 = thunk_FUN_04983f60();
      FUN_088cea70(uVar5,0);
      uVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac486a8);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar5,uVar6);
    }
    lVar7 = *plVar3;
    uVar1 = unaff_x19[1];
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac47438) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_088edf28;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_04980e68(plVar3,*(long *)PTR_DAT_0ac47438,0);
LAB_088edf28:
    (*(code *)*puVar4)(plVar3,uVar1,puVar4[1]);
    plVar3 = *(long **)(unaff_x19 + 2);
    unaff_x19[1] = 0;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar7 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_088edf94;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_04980e68(plVar3,*(long *)puVar2,2);
LAB_088edf94:
    auVar10 = (*(code *)*puVar4)(plVar3,0,puVar4[1]);
    *unaff_x20 = auVar10;
    *unaff_x19 = auVar10._8_4_;
  }
  else {
    (**(code **)(*plVar3 + 0x398))
              (plVar3,*(undefined8 *)(lVar7 + 0x18),0,unaff_x19[1],*(undefined8 *)(*plVar3 + 0x3a0))
    ;
    unaff_x19[1] = 0;
  }
  return;
}


