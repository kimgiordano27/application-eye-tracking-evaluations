/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteDynamicProperty
ENTRY_POINT: 0718ca30
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteDynamicProperty(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  int in_w8;
  ushort *puVar8;
  ulong uVar9;
  long lVar10;
  uint unaff_w20;
  ulong unaff_x21;
  long lVar11;
  long *unaff_x27;
  long *unaff_x28;
  ushort *unaff_x29;
  undefined1 auVar12 [16];
  long in_stack_00000000;
  ushort *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  if (in_w8 == 0) {
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
  if (**(int **)(lVar7 + 0xb8) * 2 <= (int)unaff_x21) {
    unaff_x21 = (ulong)((uint)unaff_x29 >> 1 & 7);
  }
LAB_0718caa4:
  while (iVar6 = (int)unaff_x21, 3 < iVar6) {
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
    unaff_x21 = (ulong)(iVar6 - 4);
    unaff_x29 = puVar8;
    if ((uint)*puVar8 == (unaff_w20 & 0xffff)) {
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling:
      uVar9 = (long)puVar8 - (long)in_stack_00000008;
      if ((long)uVar9 < 0) {
        uVar9 = uVar9 + 1;
      }
      uVar9 = uVar9 >> 1;
FUN_0718ced4:
      if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000038) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar9);
    }
  }
  iVar6 = iVar6 + 1;
  puVar8 = unaff_x29;
  while (iVar6 = iVar6 + -1, 0 < iVar6) {
    puVar8 = puVar8 + -1;
    if ((uint)*puVar8 == (unaff_w20 & 0xffff))
    goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling;
  }
  uVar9 = FUN_070b2ab4(0);
  if (((uVar9 & 1) != 0) &&
     (uVar9 = (long)puVar8 - (long)in_stack_00000008, in_stack_00000008 <= puVar8 && uVar9 != 0)) {
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
    unaff_x29 = puVar8;
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
      puVar8 = unaff_x29 + -(long)**(int **)(lVar7 + 0xb8);
      uVar2 = *(undefined8 *)puVar8;
      uVar3 = *(undefined8 *)(puVar8 + 4);
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
      auVar12 = FUN_05185b18(uVar4,uVar5,uVar2,uVar3,*(undefined8 *)(*(long *)(lVar11 + 0x38) + 8));
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
      uVar9 = FUN_06619a14(&stack0x00000010,auVar12._0_8_,auVar12._8_8_,
                           *(undefined8 *)PTR_DAT_09212e90);
      if ((uVar9 & 1) == 0) {
        iVar6 = FUN_0719ee84(auVar12._0_8_,auVar12._8_8_,0);
        uVar9 = (long)puVar8 - (long)in_stack_00000008;
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
      unaff_x29 = unaff_x29 + -(long)iVar6;
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03d8f26c();
      }
    }
    uVar9 = (long)unaff_x29 - (long)in_stack_00000008;
    if (in_stack_00000008 <= unaff_x29 && uVar9 != 0) {
      if ((long)uVar9 < 0) {
        uVar9 = uVar9 + 1;
      }
      unaff_x21 = uVar9 >> 1;
      goto LAB_0718caa4;
    }
  }
  uVar9 = 0xffffffff;
  goto FUN_0718ced4;
}


