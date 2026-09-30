/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_MetadataPropertyHandling
ENTRY_POINT: 0441c380
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_MetadataPropertyHandling(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  int iVar8;
  long *plVar9;
  
  lVar2 = FUN_015c2790();
  lVar5 = *unaff_x23;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar2) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0441c408;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_015c2a80();
LAB_0441c408:
  iVar1 = (*(code *)*puVar3)();
  if (0 < iVar1) {
    iVar8 = 0;
    do {
      plVar9 = *(long **)(unaff_x21 + 0x10);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
        lVar2 = FUN_015c2790(lVar2);
      }
      lVar5 = *plVar9;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar2) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0441c494;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_015c2a80(plVar9,lVar2,0);
LAB_0441c494:
      (*(code *)*puVar3)(plVar9,iVar8,puVar3[1]);
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x132) & 1)
          == 0) {
        FUN_015c2790();
      }
      lVar2 = thunk_FUN_015d01b0();
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      if ((lVar2 != 0) &&
         (lVar5 = thunk_FUN_015d0480(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar5 == 0)) {
        uVar4 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
        FUN_0160ee7c(uVar4,0);
      }
      if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      unaff_x22[(long)(int)unaff_w19 + 4] = lVar2;
      thunk_FUN_01656ef8(unaff_x22 + (long)(int)unaff_w19 + 4,lVar2);
      iVar8 = iVar8 + 1;
      unaff_w19 = unaff_w19 + 1;
    } while (iVar8 != iVar1);
  }
  return;
}


