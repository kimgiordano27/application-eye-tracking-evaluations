/*
FUNCTION_NAME: Skonec.Weather.WeatherManager$$WindowsClose
ENTRY_POINT: 03ed26f4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Skonec_Weather_WeatherManager__WindowsClose(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 in_w8;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long *plVar7;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *in_stack_00000000;
  undefined2 uStack0000000000000008;
  
  *(undefined1 *)(unaff_x21 + 0xfed) = in_w8;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  if (DAT_0940ffee == '\0') {
    FUN_03c8f898(PTR_DAT_08e69648);
    DAT_0940ffee = '\x01';
  }
  if (in_stack_00000000 != (long *)0x0) {
    lVar4 = *in_stack_00000000;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e69648) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03ed27a0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348(in_stack_00000000,*(long *)PTR_DAT_08e69648,0);
LAB_03ed27a0:
    iVar1 = (*(code *)*puVar2)(in_stack_00000000,uStack0000000000000008,puVar2[1]);
    if (iVar1 == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = _uStack0000000000000008;
      *(long **)(unaff_x19 + 0xe) = in_stack_00000000;
      thunk_FUN_03d233cc(unaff_x19 + 0xe,0);
      FUN_03eda9d4(unaff_x19 + 2);
      return;
    }
  }
  if (DAT_0940ffef == '\0') {
    FUN_03c8f898(PTR_DAT_08e69648);
    DAT_0940ffef = '\x01';
  }
  if (in_stack_00000000 != (long *)0x0) {
    lVar4 = *in_stack_00000000;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e69648) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_03ed2838;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348(in_stack_00000000,*(long *)PTR_DAT_08e69648,2);
LAB_03ed2838:
    (*(code *)*puVar2)(in_stack_00000000,uStack0000000000000008,puVar2[1]);
  }
  if (*(char *)(unaff_x19 + 8) == '\0') {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar4 = *(long *)(unaff_x20 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar3 = FUN_03ea9194(lVar4,0);
    FUN_03ebced0(lVar4,uVar3,2,0);
  }
  else {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_03ec09e8(*(long *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x19 + 10),
                 *(undefined8 *)(unaff_x19 + 0xc),0);
    lVar4 = *(long *)(unaff_x20 + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar3 = FUN_03ea9194(lVar4,0);
    FUN_03ebced0(lVar4,uVar3,5,0);
  }
  *unaff_x19 = 0xfffffffe;
  if (DAT_0940fff2 == '\0') {
    FUN_03c8f898(PTR_DAT_08e69650);
    DAT_0940fff2 = '\x01';
  }
  plVar7 = *(long **)(unaff_x19 + 2);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08e69650) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto Skonec_Weather_WWISReqest__StopRequest;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08e69650,2);
Skonec_Weather_WWISReqest__StopRequest:
    (*(code *)*puVar2)(plVar7,puVar2[1]);
  }
  return;
}


