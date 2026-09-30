/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_NullValueHandling
ENTRY_POINT: 0718cd18
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_NullValueHandling
               (undefined1 param_1 [16],undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint unaff_w19;
  uint unaff_w20;
  undefined8 unaff_x21;
  long lVar9;
  undefined8 unaff_x22;
  long lVar10;
  ushort *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  ushort *puVar11;
  ushort *unaff_x29;
  undefined1 auVar12 [16];
  long in_stack_00000000;
  ushort *in_stack_00000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  auVar3._8_8_ = unaff_x22;
  auVar3._0_8_ = unaff_x21;
  auVar12._8_8_ = param_4;
  auVar12._0_8_ = param_3;
  uStack0000000000000018 = param_1._8_8_;
  uStack0000000000000010 = param_1._0_8_;
  while( true ) {
    uVar7 = FUN_06619a14(param_2,auVar12._0_8_,auVar12._8_8_,*(undefined8 *)PTR_DAT_09212e90);
    if ((uVar7 & 1) == 0) break;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar9 = *unaff_x28;
    lVar8 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar8 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c();
    }
    lVar10 = *unaff_x28;
    lVar9 = *(long *)(lVar10 + 0x20);
    iVar6 = **(int **)(lVar8 + 0xb8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03d8f26c(lVar9);
    }
    lVar8 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar8 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c();
    }
    unaff_x29 = unaff_x29 + -(long)iVar6;
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c();
    }
    unaff_w19 = unaff_w19 - **(int **)(lVar8 + 0xb8);
    while ((int)unaff_w19 < 1) {
      uVar7 = (long)unaff_x29 - (long)in_stack_00000008;
      if (unaff_x29 < in_stack_00000008 || uVar7 == 0) {
LAB_0718ce7c:
        uVar7 = 0xffffffff;
        goto FUN_0718ced4;
      }
      if ((long)uVar7 < 0) {
        uVar7 = uVar7 + 1;
      }
      uVar7 = uVar7 >> 1;
      puVar11 = unaff_x29;
      while (iVar6 = (int)uVar7, 3 < iVar6) {
        unaff_x29 = puVar11 + -4;
        if ((uint)puVar11[-1] == (unaff_w20 & 0xffff)) {
          uVar7 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar7 < 0) {
            uVar7 = uVar7 + 1;
          }
          uVar7 = (ulong)((int)(uVar7 >> 1) + 3);
          goto FUN_0718ced4;
        }
        if ((uint)puVar11[-2] == (unaff_w20 & 0xffff)) {
          uVar7 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar7 < 0) {
            uVar7 = uVar7 + 1;
          }
          uVar7 = (ulong)((int)(uVar7 >> 1) + 2);
          goto FUN_0718ced4;
        }
        if ((uint)puVar11[-3] == (unaff_w20 & 0xffff)) {
          uVar7 = (long)unaff_x29 - (long)in_stack_00000008;
          if ((long)uVar7 < 0) {
            uVar7 = uVar7 + 1;
          }
          uVar7 = (ulong)((int)(uVar7 >> 1) + 1);
          goto FUN_0718ced4;
        }
        uVar7 = (ulong)(iVar6 - 4);
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
      uVar7 = FUN_070b2ab4(0);
      if (((uVar7 & 1) == 0) ||
         (uVar7 = (long)unaff_x29 - (long)in_stack_00000008,
         unaff_x29 < in_stack_00000008 || uVar7 == 0)) goto LAB_0718ce7c;
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar9 = *unaff_x28;
      lVar8 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03d8f26c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03d8f26c();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      lVar8 = *(long *)(lVar9 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03d8f26c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03d8f26c();
      }
      if ((long)uVar7 < 0) {
        uVar7 = uVar7 + 1;
      }
      iVar6 = **(int **)(lVar8 + 0xb8);
      FUN_0661200c(&stack0x00000028,unaff_w20,*(undefined8 *)PTR_DAT_09212e98);
      unaff_w19 = -iVar6 & (uint)(uVar7 >> 1);
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar9 = *unaff_x28;
    lVar8 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar8 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c();
    }
    uVar5 = in_stack_00000030;
    uVar4 = in_stack_00000028;
    lVar10 = *(long *)PTR_DAT_09212ea8;
    lVar9 = *(long *)(lVar10 + 0x38);
    unaff_x26 = unaff_x29 + -(long)**(int **)(lVar8 + 0xb8);
    uVar1 = *(undefined8 *)unaff_x26;
    uVar2 = *(undefined8 *)(unaff_x26 + 4);
    if (lVar9 == 0) {
      FUN_03d8f2c8(lVar10);
      lVar9 = *(long *)(lVar10 + 0x38);
    }
    lVar8 = *(long *)(lVar9 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    auVar12 = FUN_05185b18(uVar4,uVar5,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar10 + 0x38) + 8));
    lVar9 = *(long *)PTR_DAT_09212ea0;
    lVar8 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar8 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03d8f26c();
    }
    param_2 = (undefined1 *)&stack0x00000010;
    uStack0000000000000018 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x10);
    uStack0000000000000010 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8);
    auVar3 = auVar12;
  }
  iVar6 = FUN_0719ee84(auVar3._0_8_,auVar3._8_8_,0);
  uVar7 = (long)unaff_x26 - (long)in_stack_00000008;
  if ((long)uVar7 < 0) {
    uVar7 = uVar7 + 1;
  }
  uVar7 = (ulong)(uint)(iVar6 + (int)(uVar7 >> 1));
FUN_0718ced4:
  if (*(long *)(in_stack_00000000 + 0x28) == in_stack_00000038) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling:
  uVar7 = (long)unaff_x29 - (long)in_stack_00000008;
  if ((long)uVar7 < 0) {
    uVar7 = uVar7 + 1;
  }
  uVar7 = uVar7 >> 1;
  goto FUN_0718ced4;
}


