/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Converters
ENTRY_POINT: 061e1d34
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_Converters(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0x700));
  *(undefined1 *)(unaff_x21 + 0x600) = 1;
  puVar1 = PTR_DAT_07d96390;
  if (unaff_x20 == (long *)0x0) {
    FUN_061e1cf0();
    thunk_FUN_037a15ac(PTR_DAT_07d8ebe8);
    uVar5 = thunk_FUN_037788cc();
    uVar6 = thunk_FUN_037a15ac(PTR_DAT_07dacfb8);
    FUN_061a1b40(uVar5,uVar6,0);
    uVar6 = thunk_FUN_037a15ac(PTR_DAT_07dacfc0);
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar5,uVar6);
  }
  lVar7 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d8ac60) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_061e1db0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_0377596c();
LAB_061e1db0:
  uVar2 = (*(code *)*puVar3)();
  FUN_061e1b30(0x40000000,unaff_x19,uVar2);
  lVar7 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_061e1e18;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_0377596c();
LAB_061e1e18:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar1 = PTR_DAT_07d89700;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  do {
    lVar8 = *plVar4;
    lVar7 = *(long *)puVar1;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_061e1e80;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar4,lVar7,0);
LAB_061e1e80:
    uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar9 & 1) == 0) {
      return;
    }
    lVar8 = *plVar4;
    lVar7 = *(long *)puVar1;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_061e1ee0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar4,lVar7,1);
LAB_061e1ee0:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
    (**(code **)(*unaff_x19 + 0x228))();
  } while( true );
}


