/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_DefaultValueHandling
ENTRY_POINT: 0718cc40
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DefaultValueHandling(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *in_x9;
  uint unaff_w19;
  uint unaff_w20;
  undefined8 unaff_x21;
  long lVar6;
  undefined8 unaff_x23;
  long lVar7;
  long *unaff_x27;
  long *unaff_x28;
  ushort *puVar8;
  ushort *unaff_x29;
  undefined1 auVar9 [16];
  long in_stack_00000000;
  ushort *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  while( true ) {
    lVar7 = *in_x9;
    lVar5 = *(long *)(lVar7 + 0x38);
    puVar8 = unaff_x29 + -(long)*param_1;
    uVar1 = *(undefined8 *)puVar8;
    uVar2 = *(undefined8 *)(puVar8 + 4);
    if (lVar5 == 0) {
      FUN_03d8f2c8(lVar7);
      lVar5 = *(long *)(lVar7 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    auVar9 = FUN_05185b18(unaff_x23,unaff_x21,uVar1,uVar2,
                          *(undefined8 *)(*(long *)(lVar7 + 0x38) + 8));
    lVar7 = *(long *)PTR_DAT_09212ea0;
    lVar5 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar5 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    in_stack_00000018 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
    in_stack_00000010 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
    uVar4 = FUN_06619a14(&stack0x00000010,auVar9._0_8_,auVar9._8_8_,*(undefined8 *)PTR_DAT_09212e90)
    ;
    if ((uVar4 & 1) == 0) break;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar7 = *unaff_x28;
    lVar5 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar5 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    lVar6 = *unaff_x28;
    lVar7 = *(long *)(lVar6 + 0x20);
    iVar3 = **(int **)(lVar5 + 0xb8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03d8f26c(lVar7);
    }
    lVar5 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar5 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    unaff_x29 = unaff_x29 + -(long)iVar3;
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    unaff_w19 = unaff_w19 - **(int **)(lVar5 + 0xb8);
    while ((int)unaff_w19 < 1) {
      uVar4 = (long)unaff_x29 - (long)in_stack_00000008;
      if (unaff_x29 < in_stack_00000008 || uVar4 == 0) {
LAB_0718ce7c:
        uVar4 = 0xffffffff;
        goto FUN_0718ced4;
      }
      if ((long)uVar4 < 0) {
        uVar4 = uVar4 + 1;
      }
      uVar4 = uVar4 >> 1;
      puVar8 = unaff_x29;
      while (iVar3 = (int)uVar4, 3 < iVar3) {
        unaff_x29 = puVar8 + -4;
        if ((uint)puVar8[-1] == (unaff_w20 & 0xffff)) {
          uVar4 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar4 < 0) {
            uVar4 = uVar4 + 1;
          }
          uVar4 = (ulong)((int)(uVar4 >> 1) + 3);
          goto FUN_0718ced4;
        }
        if ((uint)puVar8[-2] == (unaff_w20 & 0xffff)) {
          uVar4 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar4 < 0) {
            uVar4 = uVar4 + 1;
          }
          uVar4 = (ulong)((int)(uVar4 >> 1) + 2);
          goto FUN_0718ced4;
        }
        if ((uint)puVar8[-3] == (unaff_w20 & 0xffff)) {
          uVar4 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar4 < 0) {
            uVar4 = uVar4 + 1;
          }
          uVar4 = (ulong)((int)(uVar4 >> 1) + 1);
          goto FUN_0718ced4;
        }
        uVar4 = (ulong)(iVar3 - 4);
        puVar8 = unaff_x29;
        if ((uint)*unaff_x29 == (unaff_w20 & 0xffff))
        goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling;
      }
      iVar3 = iVar3 + 1;
      unaff_x29 = puVar8;
      while (iVar3 = iVar3 + -1, 0 < iVar3) {
        unaff_x29 = unaff_x29 + -1;
        if ((uint)*unaff_x29 == (unaff_w20 & 0xffff))
        goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling;
      }
      uVar4 = FUN_070b2ab4(0);
      if (((uVar4 & 1) == 0) ||
         (uVar4 = (long)unaff_x29 - (long)in_stack_00000008,
         unaff_x29 < in_stack_00000008 || uVar4 == 0)) goto LAB_0718ce7c;
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar7 = *unaff_x28;
      lVar5 = *(long *)(lVar7 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03d8f26c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03d8f26c();
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar5 = *(long *)(lVar7 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03d8f26c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03d8f26c();
      }
      if ((long)uVar4 < 0) {
        uVar4 = uVar4 + 1;
      }
      iVar3 = **(int **)(lVar5 + 0xb8);
      FUN_0661200c(&stack0x00000028,unaff_w20,*(undefined8 *)PTR_DAT_09212e98);
      unaff_w19 = -iVar3 & (uint)(uVar4 >> 1);
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar7 = *unaff_x28;
    lVar5 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar5 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03d8f26c();
    }
    param_1 = *(int **)(lVar5 + 0xb8);
    in_x9 = (long *)PTR_DAT_09212ea8;
    unaff_x21 = in_stack_00000030;
    unaff_x23 = in_stack_00000028;
  }
  iVar3 = FUN_0719ee84(auVar9._0_8_,auVar9._8_8_,0);
  uVar4 = (long)puVar8 - (long)in_stack_00000008;
  if ((long)uVar4 < 0) {
    uVar4 = uVar4 + 1;
  }
  uVar4 = (ulong)(uint)(iVar3 + (int)(uVar4 >> 1));
FUN_0718ced4:
  if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000038) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling:
  uVar4 = (long)unaff_x29 - (long)in_stack_00000008;
  if ((long)uVar4 < 0) {
    uVar4 = uVar4 + 1;
  }
  uVar4 = uVar4 >> 1;
  goto FUN_0718ced4;
}


