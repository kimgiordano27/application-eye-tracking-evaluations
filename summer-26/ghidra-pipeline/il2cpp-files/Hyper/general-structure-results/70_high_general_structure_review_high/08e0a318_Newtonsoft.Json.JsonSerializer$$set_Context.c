/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_Context
ENTRY_POINT: 08e0a318
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


void Newtonsoft_Json_JsonSerializer__set_Context(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar10;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x29;
  
  puVar4 = (undefined8 *)FUN_04980e68(param_1,param_2,5);
  uVar5 = (*(code *)*puVar4)();
  uVar6 = thunk_FUN_04983f60(*unaff_x29);
  FUN_05f851bc();
  uVar5 = FUN_05d0806c(uVar5,uVar6,*unaff_x27);
  *(undefined8 *)(unaff_x21 + 0x28) = uVar5;
  thunk_FUN_049ee3d8();
  lVar7 = *unaff_x20;
  lVar10 = *(long *)(unaff_x19 + 0x30);
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x25) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_08e0a3d8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_04980e68();
LAB_08e0a3d8:
  uVar5 = (*(code *)*puVar4)();
  uVar6 = thunk_FUN_04983f60(*unaff_x24);
  uVar8 = (ulong)*(ushort *)(*unaff_x20 + 0x12e);
  if (uVar8 != 0) {
    lVar7 = *(long *)(*unaff_x20 + 0xb0) + 8;
    do {
      if (*(long *)(lVar7 + -8) == *unaff_x25) goto LAB_08e0a448;
      uVar8 = uVar8 - 1;
      lVar7 = lVar7 + 0x10;
    } while (uVar8 != 0);
  }
  FUN_04980e68();
LAB_08e0a448:
  FUN_05f878c4(uVar6);
  puVar3 = PTR_DAT_0ac37c00;
  puVar2 = PTR_DAT_0ac0a0f8;
  puVar1 = PTR_DAT_0ac09e20;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar5 = FUN_04d0b2fc(lVar10,uVar5,uVar6,0);
  uVar6 = FUN_08aa1c24();
  FUN_05b466fc(uVar5,uVar6,*(undefined8 *)puVar3);
  uVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09d30);
  FUN_08cc3ad0();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar5 = FUN_09b8bbb0(uVar5,0);
  uVar6 = FUN_08aa1c24();
  FUN_05b466fc(uVar5,uVar6,*(undefined8 *)puVar1);
  return;
}


