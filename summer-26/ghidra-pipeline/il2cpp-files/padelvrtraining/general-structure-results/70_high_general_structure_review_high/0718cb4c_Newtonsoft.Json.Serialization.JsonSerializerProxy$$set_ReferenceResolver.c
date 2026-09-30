/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ReferenceResolver
ENTRY_POINT: 0718cb4c
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ReferenceResolver(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar9;
  long lVar10;
  long *unaff_x27;
  long *unaff_x28;
  ushort *puVar11;
  ushort *unaff_x29;
  undefined1 auVar12 [16];
  long in_stack_00000000;
  ushort *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  while( true ) {
    lVar7 = *(long *)(param_1 + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03d8f26c();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar7 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03d8f26c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03d8f26c();
    }
    if ((long)unaff_x19 < 0) {
      unaff_x19 = unaff_x19 + 1;
    }
    iVar6 = **(int **)(lVar7 + 0xb8);
    FUN_0661200c(&stack0x00000028,unaff_w20,*(undefined8 *)PTR_DAT_09212e98);
    for (uVar1 = -iVar6 & (uint)(unaff_x19 >> 1); 0 < (int)uVar1;
        uVar1 = uVar1 - **(int **)(lVar7 + 0xb8)) {
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar9 = *unaff_x28;
      lVar7 = *(long *)(lVar9 + 0x20);
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
      lVar7 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      uVar5 = in_stack_00000030;
      uVar4 = in_stack_00000028;
      lVar10 = *(long *)PTR_DAT_09212ea8;
      lVar9 = *(long *)(lVar10 + 0x38);
      puVar11 = unaff_x29 + -(long)**(int **)(lVar7 + 0xb8);
      uVar2 = *(undefined8 *)puVar11;
      uVar3 = *(undefined8 *)(puVar11 + 4);
      if (lVar9 == 0) {
        FUN_03d8f2c8(lVar10);
        lVar9 = *(long *)(lVar10 + 0x38);
      }
      lVar7 = *(long *)(lVar9 + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      auVar12 = FUN_05185b18(uVar4,uVar5,uVar2,uVar3,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 8));
      lVar9 = *(long *)PTR_DAT_09212ea0;
      lVar7 = *(long *)(lVar9 + 0x20);
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
      lVar7 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      in_stack_00000018 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
      in_stack_00000010 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
      uVar8 = FUN_06619a14(&stack0x00000010,auVar12._0_8_,auVar12._8_8_,
                           *(undefined8 *)PTR_DAT_09212e90);
      if ((uVar8 & 1) == 0) {
        iVar6 = FUN_0719ee84(auVar12._0_8_,auVar12._8_8_,0);
        uVar8 = (long)puVar11 - (long)in_stack_00000008;
        if ((long)uVar8 < 0) {
          uVar8 = uVar8 + 1;
        }
        uVar8 = (ulong)(uint)(iVar6 + (int)(uVar8 >> 1));
        goto FUN_0718ced4;
      }
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar9 = *unaff_x28;
      lVar7 = *(long *)(lVar9 + 0x20);
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
      lVar7 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
      lVar10 = *unaff_x28;
      lVar9 = *(long *)(lVar10 + 0x20);
      iVar6 = **(int **)(lVar7 + 0xb8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03d8f26c(lVar9);
      }
      lVar7 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
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
      unaff_x29 = unaff_x29 + -(long)iVar6;
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
    }
    uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
    if (unaff_x29 < in_stack_00000008 || uVar8 == 0) break;
    if ((long)uVar8 < 0) {
      uVar8 = uVar8 + 1;
    }
    uVar8 = uVar8 >> 1;
    puVar11 = unaff_x29;
    while (iVar6 = (int)uVar8, 3 < iVar6) {
      unaff_x29 = puVar11 + -4;
      if ((uint)puVar11[-1] == (unaff_w20 & 0xffff)) {
        uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
        if ((long)uVar8 < 0) {
          uVar8 = uVar8 + 1;
        }
        uVar8 = (ulong)((int)(uVar8 >> 1) + 3);
        goto FUN_0718ced4;
      }
      if ((uint)puVar11[-2] == (unaff_w20 & 0xffff)) {
        uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
        if ((long)uVar8 < 0) {
          uVar8 = uVar8 + 1;
        }
        uVar8 = (ulong)((int)(uVar8 >> 1) + 2);
        goto FUN_0718ced4;
      }
      if ((uint)puVar11[-3] == (unaff_w20 & 0xffff)) {
        uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
        if ((long)uVar8 < 0) {
          uVar8 = uVar8 + 1;
        }
        uVar8 = (ulong)((int)(uVar8 >> 1) + 1);
        goto FUN_0718ced4;
      }
      uVar8 = (ulong)(iVar6 - 4);
      puVar11 = unaff_x29;
      if ((uint)*unaff_x29 == (unaff_w20 & 0xffff))
      goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling;
    }
    iVar6 = iVar6 + 1;
    unaff_x29 = puVar11;
    while (iVar6 = iVar6 + -1, 0 < iVar6) {
      unaff_x29 = unaff_x29 + -1;
      if ((uint)*unaff_x29 == (unaff_w20 & 0xffff))
      goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling;
    }
    uVar8 = FUN_070b2ab4(0);
    if (((uVar8 & 1) == 0) ||
       (unaff_x19 = (long)unaff_x29 - (long)in_stack_00000008,
       unaff_x29 < in_stack_00000008 || unaff_x19 == 0)) break;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    unaff_x21 = *unaff_x28;
    lVar7 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03d8f26c();
    }
    param_1 = *(long *)(lVar7 + 0xc0);
  }
  uVar8 = 0xffffffff;
FUN_0718ced4:
  if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000038) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling:
  uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
  if ((long)uVar8 < 0) {
    uVar8 = uVar8 + 1;
  }
  uVar8 = uVar8 >> 1;
  goto FUN_0718ced4;
}


