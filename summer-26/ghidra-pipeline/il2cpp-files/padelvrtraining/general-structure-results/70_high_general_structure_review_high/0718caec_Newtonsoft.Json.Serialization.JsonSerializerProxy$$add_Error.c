/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$add_Error
ENTRY_POINT: 0718caec
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_5
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__add_Error(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ushort *puVar8;
  ulong uVar9;
  uint unaff_w20;
  ulong unaff_x21;
  long lVar10;
  long lVar11;
  ushort *puVar12;
  long *unaff_x27;
  long *unaff_x28;
  ushort *unaff_x29;
  undefined1 auVar13 [16];
  long in_stack_00000000;
  ushort *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  while( true ) {
    iVar6 = (int)unaff_x21 + 1;
    puVar8 = unaff_x29;
    while (iVar6 = iVar6 + -1, 0 < iVar6) {
      puVar8 = puVar8 + -1;
      if ((uint)*puVar8 == (unaff_w20 & 0xffff))
      goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling;
    }
    uVar9 = FUN_070b2ab4(0);
    if (((uVar9 & 1) == 0) ||
       (uVar9 = (long)puVar8 - (long)in_stack_00000008, puVar8 < in_stack_00000008 || uVar9 == 0))
    break;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar10 = *unaff_x28;
    lVar7 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03d8f26c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03d8f26c();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar7 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03d8f26c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03d8f26c();
    }
    if ((long)uVar9 < 0) {
      uVar9 = uVar9 + 1;
    }
    iVar6 = **(int **)(lVar7 + 0xb8);
    FUN_0661200c(&stack0x00000028,unaff_w20,*(undefined8 *)PTR_DAT_09212e98);
    for (uVar1 = -iVar6 & (uint)(uVar9 >> 1); 0 < (int)uVar1;
        uVar1 = uVar1 - **(int **)(lVar7 + 0xb8)) {
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar10 = *unaff_x28;
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      uVar5 = in_stack_00000030;
      uVar4 = in_stack_00000028;
      lVar11 = *(long *)PTR_DAT_09212ea8;
      lVar10 = *(long *)(lVar11 + 0x38);
      puVar12 = puVar8 + -(long)**(int **)(lVar7 + 0xb8);
      uVar2 = *(undefined8 *)puVar12;
      uVar3 = *(undefined8 *)(puVar12 + 4);
      if (lVar10 == 0) {
        FUN_03d8f2c8(lVar11);
        lVar10 = *(long *)(lVar11 + 0x38);
      }
      lVar7 = *(long *)(lVar10 + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      auVar13 = FUN_05185b18(uVar4,uVar5,uVar2,uVar3,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 8));
      lVar10 = *(long *)PTR_DAT_09212ea0;
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      in_stack_00000018 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
      in_stack_00000010 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
      uVar9 = FUN_06619a14(&stack0x00000010,auVar13._0_8_,auVar13._8_8_,
                           *(undefined8 *)PTR_DAT_09212e90);
      if ((uVar9 & 1) == 0) {
        iVar6 = FUN_0719ee84(auVar13._0_8_,auVar13._8_8_,0);
        uVar9 = (long)puVar12 - (long)in_stack_00000008;
        if ((long)uVar9 < 0) {
          uVar9 = uVar9 + 1;
        }
        uVar9 = (ulong)(uint)(iVar6 + (int)(uVar9 >> 1));
        goto FUN_0718ced4;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar10 = *unaff_x28;
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar7 = *(long *)(lVar10 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      lVar11 = *unaff_x28;
      lVar10 = *(long *)(lVar11 + 0x20);
      iVar6 = **(int **)(lVar7 + 0xb8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03d8f26c(lVar10);
      }
      lVar7 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar7 = *(long *)(lVar11 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      puVar8 = puVar8 + -(long)iVar6;
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
    }
    uVar9 = (long)puVar8 - (long)in_stack_00000008;
    if (puVar8 < in_stack_00000008 || uVar9 == 0) break;
    if ((long)uVar9 < 0) {
      uVar9 = uVar9 + 1;
    }
    unaff_x21 = uVar9 >> 1;
    unaff_x29 = puVar8;
    while (3 < (int)unaff_x21) {
      puVar8 = unaff_x29 + -4;
      if ((uint)unaff_x29[-1] == (unaff_w20 & 0xffff)) {
        uVar9 = (long)puVar8 - (long)in_stack_00000008;
        if ((long)uVar9 < 0) {
          uVar9 = uVar9 + 1;
        }
        uVar9 = (ulong)((int)(uVar9 >> 1) + 3);
        goto FUN_0718ced4;
      }
      if ((uint)unaff_x29[-2] == (unaff_w20 & 0xffff)) {
        uVar9 = (long)puVar8 - (long)in_stack_00000008;
        if ((long)uVar9 < 0) {
          uVar9 = uVar9 + 1;
        }
        uVar9 = (ulong)((int)(uVar9 >> 1) + 2);
        goto FUN_0718ced4;
      }
      if ((uint)unaff_x29[-3] == (unaff_w20 & 0xffff)) {
        uVar9 = (long)puVar8 - (long)in_stack_00000008;
        if ((long)uVar9 < 0) {
          uVar9 = uVar9 + 1;
        }
        uVar9 = (ulong)((int)(uVar9 >> 1) + 1);
        goto FUN_0718ced4;
      }
      unaff_x21 = (ulong)((int)unaff_x21 - 4);
      unaff_x29 = puVar8;
      if ((uint)*puVar8 == (unaff_w20 & 0xffff))
      goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling;
    }
  }
  uVar9 = 0xffffffff;
FUN_0718ced4:
  if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000038) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling:
  uVar9 = (long)puVar8 - (long)in_stack_00000008;
  if ((long)uVar9 < 0) {
    uVar9 = uVar9 + 1;
  }
  uVar9 = uVar9 >> 1;
  goto FUN_0718ced4;
}


