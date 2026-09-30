/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_TypeNameHandling
ENTRY_POINT: 0718ce14
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_TypeNameHandling(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int iVar5;
  long lVar6;
  uint unaff_w19;
  uint unaff_w20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *unaff_x27;
  long *unaff_x28;
  ushort *puVar10;
  ushort *unaff_x29;
  undefined1 auVar11 [16];
  long in_stack_00000000;
  ushort *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  do {
    if ((bool)in_ZR || in_NG != in_OV) {
      do {
        uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
        if (unaff_x29 < in_stack_00000008 || uVar8 == 0) {
LAB_0718ce7c:
          uVar8 = 0xffffffff;
          goto FUN_0718ced4;
        }
        if ((long)uVar8 < 0) {
          uVar8 = uVar8 + 1;
        }
        uVar8 = uVar8 >> 1;
        puVar10 = unaff_x29;
        while (iVar5 = (int)uVar8, 3 < iVar5) {
          unaff_x29 = puVar10 + -4;
          if ((uint)puVar10[-1] == (unaff_w20 & 0xffff)) {
            uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
            if ((long)uVar8 < 0) {
              uVar8 = uVar8 + 1;
            }
            uVar8 = (ulong)((int)(uVar8 >> 1) + 3);
            goto FUN_0718ced4;
          }
          if ((uint)puVar10[-2] == (unaff_w20 & 0xffff)) {
            uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
            if ((long)uVar8 < 0) {
              uVar8 = uVar8 + 1;
            }
            uVar8 = (ulong)((int)(uVar8 >> 1) + 2);
            goto FUN_0718ced4;
          }
          if ((uint)puVar10[-3] == (unaff_w20 & 0xffff)) {
            uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
            if ((long)uVar8 < 0) {
              uVar8 = uVar8 + 1;
            }
            uVar8 = (ulong)((int)(uVar8 >> 1) + 1);
            goto FUN_0718ced4;
          }
          uVar8 = (ulong)(iVar5 - 4);
          puVar10 = unaff_x29;
          if ((uint)*unaff_x29 == (unaff_w20 & 0xffff))
          goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling;
        }
        iVar5 = iVar5 + 1;
        unaff_x29 = puVar10;
        while (iVar5 = iVar5 + -1, 0 < iVar5) {
          unaff_x29 = unaff_x29 + -1;
          if ((uint)*unaff_x29 == (unaff_w20 & 0xffff))
          goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling;
        }
        uVar8 = FUN_070b2ab4(0);
        if (((uVar8 & 1) == 0) ||
           (uVar8 = (long)unaff_x29 - (long)in_stack_00000008,
           unaff_x29 < in_stack_00000008 || uVar8 == 0)) goto LAB_0718ce7c;
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_03db619c();
        }
        lVar7 = *unaff_x28;
        lVar6 = *(long *)(lVar7 + 0x20);
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
        lVar6 = *(long *)(lVar7 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03d8f26c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03d8f26c();
        }
        if ((long)uVar8 < 0) {
          uVar8 = uVar8 + 1;
        }
        unaff_w19 = -**(int **)(lVar6 + 0xb8) & (uint)(uVar8 >> 1);
        FUN_0661200c(&stack0x00000028,unaff_w20,*(undefined8 *)PTR_DAT_09212e98);
      } while ((int)unaff_w19 < 1);
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar7 = *unaff_x28;
    lVar6 = *(long *)(lVar7 + 0x20);
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
    lVar6 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    uVar4 = in_stack_00000030;
    uVar3 = in_stack_00000028;
    lVar9 = *(long *)PTR_DAT_09212ea8;
    lVar7 = *(long *)(lVar9 + 0x38);
    puVar10 = unaff_x29 + -(long)**(int **)(lVar6 + 0xb8);
    uVar1 = *(undefined8 *)puVar10;
    uVar2 = *(undefined8 *)(puVar10 + 4);
    if (lVar7 == 0) {
      FUN_03d8f2c8(lVar9);
      lVar7 = *(long *)(lVar9 + 0x38);
    }
    lVar6 = *(long *)(lVar7 + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    auVar11 = FUN_05185b18(uVar3,uVar4,uVar1,uVar2,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 8));
    lVar7 = *(long *)PTR_DAT_09212ea0;
    lVar6 = *(long *)(lVar7 + 0x20);
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
    lVar6 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    in_stack_00000018 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
    in_stack_00000010 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
    uVar8 = FUN_06619a14(&stack0x00000010,auVar11._0_8_,auVar11._8_8_,
                         *(undefined8 *)PTR_DAT_09212e90);
    if ((uVar8 & 1) == 0) {
      iVar5 = FUN_0719ee84(auVar11._0_8_,auVar11._8_8_,0);
      uVar8 = (long)puVar10 - (long)in_stack_00000008;
      if ((long)uVar8 < 0) {
        uVar8 = uVar8 + 1;
      }
      uVar8 = (ulong)(uint)(iVar5 + (int)(uVar8 >> 1));
FUN_0718ced4:
      if (*(long *)(in_stack_00000000 + 0x28) != in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar8);
      }
      return;
    }
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar7 = *unaff_x28;
    lVar6 = *(long *)(lVar7 + 0x20);
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
    lVar6 = *(long *)(lVar7 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    lVar9 = *unaff_x28;
    lVar7 = *(long *)(lVar9 + 0x20);
    iVar5 = **(int **)(lVar6 + 0xb8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03d8f26c(lVar7);
    }
    lVar6 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    lVar6 = *(long *)(lVar9 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    unaff_x29 = unaff_x29 + -(long)iVar5;
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    unaff_w19 = unaff_w19 - **(int **)(lVar6 + 0xb8);
    in_NG = (int)unaff_w19 < 0;
    in_ZR = unaff_w19 == 0;
    in_OV = '\0';
  } while( true );
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameHandling:
  uVar8 = (long)unaff_x29 - (long)in_stack_00000008;
  if ((long)uVar8 < 0) {
    uVar8 = uVar8 + 1;
  }
  uVar8 = uVar8 >> 1;
  goto FUN_0718ced4;
}


