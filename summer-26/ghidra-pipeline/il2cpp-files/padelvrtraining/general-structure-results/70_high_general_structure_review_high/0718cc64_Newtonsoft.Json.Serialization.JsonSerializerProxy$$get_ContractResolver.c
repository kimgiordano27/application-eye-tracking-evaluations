/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_ContractResolver
ENTRY_POINT: 0718cc64
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ContractResolver(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint unaff_w19;
  uint unaff_w20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar4;
  undefined8 unaff_x23;
  long lVar5;
  undefined8 unaff_x24;
  long unaff_x25;
  ushort *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  ushort *puVar6;
  ushort *unaff_x29;
  undefined1 auVar7 [16];
  long in_stack_00000000;
  ushort *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  while( true ) {
    lVar2 = *(long *)(param_1 + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    auVar7 = FUN_05185b18(unaff_x23,unaff_x21,unaff_x24,unaff_x22,
                          *(undefined8 *)(*(long *)(unaff_x25 + 0x38) + 8));
    lVar5 = *(long *)PTR_DAT_09212ea0;
    lVar2 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar2 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    in_stack_00000018 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
    in_stack_00000010 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
    uVar3 = FUN_06619a14(&stack0x00000010,auVar7._0_8_,auVar7._8_8_,*(undefined8 *)PTR_DAT_09212e90)
    ;
    if ((uVar3 & 1) == 0) break;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar5 = *unaff_x28;
    lVar2 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar2 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    lVar4 = *unaff_x28;
    lVar5 = *(long *)(lVar4 + 0x20);
    iVar1 = **(int **)(lVar2 + 0xb8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c(lVar5);
    }
    lVar2 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar2 = *(long *)(lVar4 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    unaff_x29 = unaff_x29 + -(long)iVar1;
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    unaff_w19 = unaff_w19 - **(int **)(lVar2 + 0xb8);
    while ((int)unaff_w19 < 1) {
      uVar3 = (long)unaff_x29 - (long)in_stack_00000008;
      if (unaff_x29 < in_stack_00000008 || uVar3 == 0) {
LAB_0718ce7c:
        uVar3 = 0xffffffff;
        goto FUN_0718ced4;
      }
      if ((long)uVar3 < 0) {
        uVar3 = uVar3 + 1;
      }
      uVar3 = uVar3 >> 1;
      puVar6 = unaff_x29;
      while (iVar1 = (int)uVar3, 3 < iVar1) {
        unaff_x29 = puVar6 + -4;
        if ((uint)puVar6[-1] == (unaff_w20 & 0xffff)) {
          uVar3 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar3 < 0) {
            uVar3 = uVar3 + 1;
          }
          uVar3 = (ulong)((int)(uVar3 >> 1) + 3);
          goto FUN_0718ced4;
        }
        if ((uint)puVar6[-2] == (unaff_w20 & 0xffff)) {
          uVar3 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar3 < 0) {
            uVar3 = uVar3 + 1;
          }
          uVar3 = (ulong)((int)(uVar3 >> 1) + 2);
          goto FUN_0718ced4;
        }
        if ((uint)puVar6[-3] == (unaff_w20 & 0xffff)) {
          uVar3 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar3 < 0) {
            uVar3 = uVar3 + 1;
          }
          uVar3 = (ulong)((int)(uVar3 >> 1) + 1);
          goto FUN_0718ced4;
        }
        uVar3 = (ulong)(iVar1 - 4);
        puVar6 = unaff_x29;
        if ((uint)*unaff_x29 == (unaff_w20 & 0xffff))
        goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling;
      }
      iVar1 = iVar1 + 1;
      unaff_x29 = puVar6;
      while (iVar1 = iVar1 + -1, 0 < iVar1) {
        unaff_x29 = unaff_x29 + -1;
        if ((uint)*unaff_x29 == (unaff_w20 & 0xffff))
        goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling;
      }
      uVar3 = FUN_070b2ab4(0);
      if (((uVar3 & 1) == 0) ||
         (uVar3 = (long)unaff_x29 - (long)in_stack_00000008,
         unaff_x29 < in_stack_00000008 || uVar3 == 0)) goto LAB_0718ce7c;
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar5 = *unaff_x28;
      lVar2 = *(long *)(lVar5 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03d8f26c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03d8f26c();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar2 = *(long *)(lVar5 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03d8f26c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03d8f26c();
      }
      if ((long)uVar3 < 0) {
        uVar3 = uVar3 + 1;
      }
      iVar1 = **(int **)(lVar2 + 0xb8);
      FUN_0661200c(&stack0x00000028,unaff_w20,*(undefined8 *)PTR_DAT_09212e98);
      unaff_w19 = -iVar1 & (uint)(uVar3 >> 1);
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar5 = *unaff_x28;
    lVar2 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar2 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    unaff_x21 = in_stack_00000030;
    unaff_x23 = in_stack_00000028;
    unaff_x25 = *(long *)PTR_DAT_09212ea8;
    param_1 = *(long *)(unaff_x25 + 0x38);
    unaff_x26 = unaff_x29 + -(long)**(int **)(lVar2 + 0xb8);
    unaff_x24 = *(undefined8 *)unaff_x26;
    unaff_x22 = *(undefined8 *)(unaff_x26 + 4);
    if (param_1 == 0) {
      FUN_03d8f2c8(unaff_x25);
      param_1 = *(long *)(unaff_x25 + 0x38);
    }
  }
  iVar1 = FUN_0719ee84(auVar7._0_8_,auVar7._8_8_,0);
  uVar3 = (long)unaff_x26 - (long)in_stack_00000008;
  if ((long)uVar3 < 0) {
    uVar3 = uVar3 + 1;
  }
  uVar3 = (ulong)(uint)(iVar1 + (int)(uVar3 >> 1));
FUN_0718ced4:
  if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000038) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling:
  uVar3 = (long)unaff_x29 - (long)in_stack_00000008;
  if ((long)uVar3 < 0) {
    uVar3 = uVar3 + 1;
  }
  uVar3 = uVar3 >> 1;
  goto FUN_0718ced4;
}


