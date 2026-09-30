/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteReferenceIdProperty
ENTRY_POINT: 0718c0a0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReferenceIdProperty
              (long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x23;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long *unaff_x27;
  long lVar10;
  undefined8 unaff_x29;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  long in_stack_00000028;
  
  while( true ) {
    lVar10 = *(long *)(*(long *)(param_1 + 0xc0) + 0x60);
    lVar6 = *(long *)(lVar10 + 0x20);
    uStack0000000000000018 = unaff_x21;
    uStack0000000000000020 = unaff_x29;
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    uVar7 = FUN_06619a14(&stack0x00000018,unaff_x26,unaff_x25,
                         *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x48));
    if ((uVar7 & 1) == 0) break;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar10 = *(long *)PTR_DAT_09212e78;
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    unaff_x23 = FUN_071c5e28(unaff_x23,**(undefined4 **)(lVar6 + 0xb8),0);
    uVar7 = FUN_071c5e1c();
    uVar8 = FUN_071c5e1c(unaff_x23,0);
    if (uVar7 < uVar8) break;
    puVar1 = (undefined8 *)(unaff_x20 + unaff_x23 * 2);
    puVar2 = (undefined8 *)(unaff_x19 + unaff_x23 * 2);
    unaff_x21 = *puVar1;
    unaff_x29 = puVar1[1];
    unaff_x26 = *puVar2;
    unaff_x25 = puVar2[1];
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar10 = *(long *)PTR_DAT_09212e80;
    lVar6 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    param_1 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_03d8f26c();
    }
  }
  uVar7 = FUN_071c5e1c();
  uVar9 = FUN_071c5e28(unaff_x23,4,0);
  uVar8 = FUN_071c5e1c(uVar9,0);
  if (uVar8 <= uVar7) {
    do {
      uVar7 = FUN_071d4e54(*(undefined8 *)(unaff_x20 + unaff_x23 * 2),
                           *(undefined8 *)(unaff_x19 + unaff_x23 * 2),0);
      if ((uVar7 & 1) != 0) break;
      unaff_x23 = FUN_071c5e28(unaff_x23,4,0);
      uVar7 = FUN_071c5e1c();
      uVar9 = FUN_071c5e28(unaff_x23,4,0);
      uVar8 = FUN_071c5e1c(uVar9,0);
    } while (uVar8 <= uVar7);
  }
  uVar7 = FUN_071c5e1c();
  uVar9 = FUN_071c5e28(unaff_x23,2,0);
  uVar8 = FUN_071c5e1c(uVar9,0);
  if ((uVar8 <= uVar7) &&
     (*(int *)(unaff_x20 + unaff_x23 * 2) == *(int *)(unaff_x19 + unaff_x23 * 2))) {
    unaff_x23 = FUN_071c5e28(unaff_x23,2,0);
  }
  uVar7 = FUN_071c5e1c(unaff_x23,0);
  uVar8 = FUN_071c5e1c();
  puVar4 = PTR_DAT_091a0ff0;
  iVar5 = in_stack_00000010._4_4_;
  if (uVar7 < uVar8) {
    do {
      uVar3 = *(undefined2 *)(unaff_x19 + unaff_x23 * 2);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      iVar5 = FUN_070d1880(unaff_x20 + unaff_x23 * 2,uVar3,0);
      if (iVar5 != 0) break;
      unaff_x23 = FUN_071c5e28(unaff_x23,1,0);
      uVar7 = FUN_071c5e1c(unaff_x23,0);
      uVar8 = FUN_071c5e1c();
      iVar5 = in_stack_00000010._4_4_;
    } while (uVar7 < uVar8);
  }
  if (*(long *)(in_stack_00000008 + 0x28) != in_stack_00000028) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}


