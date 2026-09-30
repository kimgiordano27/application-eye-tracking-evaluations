/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert.<DeserializeTokenAsync>d__6$$MoveNext
ENTRY_POINT: 07215468
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_Json_JsonConvert_<DeserializeTokenAsync>d__6__MoveNext(code *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *unaff_x19;
  long *unaff_x20;
  uint uVar7;
  long unaff_x22;
  int unaff_w23;
  int unaff_w24;
  uint uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *unaff_x27;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  char cStack0000000000000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  char cStack0000000000000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  char cStack00000000000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  char cStack00000000000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  char cStack00000000000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined1 (*in_stack_00000108) [16];
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  long in_stack_00000140;
  undefined8 in_stack_00000148;
  long in_stack_00000150;
  long in_stack_00000158;
  
  (*param_1)();
  puVar1 = PTR_DAT_092869f8;
  if (in_stack_00000158 == 0) goto LAB_07215d08;
  lVar2 = FUN_04077674(*(undefined8 *)PTR_DAT_092869f8,*(undefined4 *)(in_stack_00000158 + 0x20));
  plVar9 = (long *)(unaff_x22 + 0x10);
  *plVar9 = lVar2;
  thunk_FUN_040ec700(plVar9,lVar2);
  uVar3 = FUN_0758dc78(*plVar9,3,0);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  if (in_stack_00000158 == 0) goto LAB_07215d08;
  uVar7 = 1;
  if ((*(long *)(in_stack_00000158 + 0x48) != 0) &&
     (uVar7 = 1, -1 < *(int *)(in_stack_00000158 + 0x10))) {
    uVar7 = 2;
  }
  in_stack_00000138 = 0;
  in_stack_00000140 = 0;
  in_stack_00000130._4_4_ = 0;
  if (-1 < unaff_w23) {
    uVar3 = FUN_04077674(*(undefined8 *)puVar1,*(undefined4 *)(in_stack_00000158 + 0x20));
    puVar10 = (undefined8 *)(unaff_x22 + 0x18);
    *puVar10 = uVar3;
    thunk_FUN_040ec700(puVar10,uVar3);
    uVar3 = FUN_0758dc78(*puVar10,3,0);
    *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
    lVar2 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar10 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_07215568;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar10 = (undefined8 *)FUN_040b1e00();
LAB_07215568:
    (*(code *)*puVar10)();
    if (in_stack_00000140 == 0) goto LAB_07215d08;
    if ((*(long *)(in_stack_00000140 + 0x48) == 0) || (*(int *)(in_stack_00000140 + 0x10) < 0)) {
      uVar7 = uVar7 + 1;
    }
    else {
      uVar7 = uVar7 + 2;
    }
  }
  in_stack_00000120 = 0;
  in_stack_00000128 = 0;
  in_stack_00000118._4_4_ = 0;
  if (-1 < unaff_w24) {
    if (in_stack_00000158 == 0) goto LAB_07215d08;
    uVar3 = FUN_04077674(*(undefined8 *)puVar1,*(undefined4 *)(in_stack_00000158 + 0x20));
    puVar10 = (undefined8 *)(unaff_x22 + 0x20);
    *puVar10 = uVar3;
    thunk_FUN_040ec700(puVar10,uVar3);
    uVar3 = FUN_0758dc78(*puVar10,3,0);
    *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
    lVar2 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar10 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0721563c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar10 = (undefined8 *)FUN_040b1e00();
LAB_0721563c:
    (*(code *)*puVar10)();
    if (in_stack_00000128 == 0) goto LAB_07215d08;
    if ((*(long *)(in_stack_00000128 + 0x48) == 0) || (*(int *)(in_stack_00000128 + 0x10) < 0)) {
      uVar7 = uVar7 + 1;
    }
    else {
      uVar7 = uVar7 + 2;
    }
  }
  FUN_05f3fcdc(&stack0x00000108,uVar7,4,1,*(undefined8 *)PTR_DAT_092bc2e0);
  lVar2 = *plVar9;
  if (lVar2 == 0) goto LAB_07215d08;
  if (*(int *)(lVar2 + 0x18) == 0) goto LAB_07215d0c;
  _cStack00000000000000f0 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  if (in_stack_00000150 == 0) {
    uVar8 = 0;
LAB_07215728:
    if (in_stack_00000158 == 0) goto LAB_07215d08;
    if (*(long *)(in_stack_00000158 + 0x48) != 0) {
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x27) {
            puVar10 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_0721578c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar10 = (undefined8 *)FUN_040b1e00();
LAB_0721578c:
      (*(code *)*puVar10)();
      if ((in_stack_00000158 == 0) || (*(long *)(in_stack_00000158 + 0x48) == 0)) goto LAB_07215d08;
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x27) {
            puVar10 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto FUN_07215804;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar10 = (undefined8 *)FUN_040b1e00();
FUN_07215804:
      (*(code *)*puVar10)();
      if (((in_stack_00000158 == 0) || (lVar4 = *(long *)(in_stack_00000158 + 0x48), lVar4 == 0)) ||
         (*(long *)(lVar4 + 0x18) == 0)) goto LAB_07215d08;
      FUN_072167a0(&stack0x00000010,in_stack_000000e8,in_stack_000000e0,
                   *(undefined4 *)(lVar4 + 0x10),*(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x18),
                   *(undefined4 *)(in_stack_00000158 + 0x18),lVar2 + 0x20,0xc,&stack0x000000f0);
      in_stack_000000c8 = in_stack_00000018;
      _cStack00000000000000c0 = in_stack_00000010;
      uVar3 = _cStack00000000000000c0;
      cStack00000000000000c0 = (char)in_stack_00000010;
      in_stack_000000d0 = in_stack_00000020;
      if (cStack00000000000000c0 == '\0') goto LAB_07215c9c;
      _cStack00000000000000c0 = uVar3;
      auVar11 = FUN_06016048(&stack0x000000c0,*(undefined8 *)PTR_DAT_092bc300);
      uVar5 = (ulong)uVar8;
      uVar8 = uVar8 + 1;
      in_stack_00000108[uVar5] = auVar11;
    }
    if (in_stack_00000140 != 0) {
      lVar2 = *(long *)(unaff_x22 + 0x18);
      if (lVar2 == 0) goto LAB_07215d08;
      if (*(int *)(lVar2 + 0x18) == 0) goto LAB_07215d0c;
      in_stack_000000a8 = 0;
      in_stack_000000b0 = 0;
      _cStack00000000000000a0 = 0;
      if (-1 < *(int *)(in_stack_00000140 + 0x10)) {
        FUN_07216310(&stack0x00000010,in_stack_00000138,*(undefined4 *)(in_stack_00000140 + 0x20),
                     *(undefined4 *)(in_stack_00000140 + 0x18),in_stack_00000130._4_4_,lVar2 + 0x20,
                     0xc,*(undefined1 *)(in_stack_00000140 + 0x1c),0);
        in_stack_000000a8 = in_stack_00000018;
        _cStack00000000000000a0 = in_stack_00000010;
        uVar3 = _cStack00000000000000a0;
        cStack00000000000000a0 = (char)in_stack_00000010;
        in_stack_000000b0 = in_stack_00000020;
        if (cStack00000000000000a0 == '\0') goto LAB_07215c9c;
        _cStack00000000000000a0 = uVar3;
        auVar11 = FUN_06016048(&stack0x000000a0,*(undefined8 *)PTR_DAT_092bc300);
        in_stack_00000108[uVar8] = auVar11;
        if (in_stack_00000140 == 0) goto LAB_07215d08;
        uVar8 = uVar8 + 1;
      }
      if (*(long *)(in_stack_00000140 + 0x48) != 0) {
        lVar4 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x27) {
              puVar10 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_07215988;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar10 = (undefined8 *)FUN_040b1e00();
LAB_07215988:
        (*(code *)*puVar10)();
        if ((in_stack_00000140 == 0) || (*(long *)(in_stack_00000140 + 0x48) == 0))
        goto LAB_07215d08;
        lVar4 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x27) {
              puVar10 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_07215a00;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar10 = (undefined8 *)FUN_040b1e00();
LAB_07215a00:
        (*(code *)*puVar10)();
        if (((in_stack_00000140 == 0) || (lVar4 = *(long *)(in_stack_00000140 + 0x48), lVar4 == 0))
           || (*(long *)(lVar4 + 0x18) == 0)) goto LAB_07215d08;
        FUN_072167a0(&stack0x00000010,in_stack_00000098,in_stack_00000090,
                     *(undefined4 *)(lVar4 + 0x10),*(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x18),
                     *(undefined4 *)(in_stack_00000140 + 0x18),lVar2 + 0x20,0xc,&stack0x000000a0);
        in_stack_00000078 = in_stack_00000018;
        _cStack0000000000000070 = in_stack_00000010;
        uVar3 = _cStack0000000000000070;
        cStack0000000000000070 = (char)in_stack_00000010;
        in_stack_00000080 = in_stack_00000020;
        if (cStack0000000000000070 == '\0') goto LAB_07215c9c;
        _cStack0000000000000070 = uVar3;
        auVar11 = FUN_06016048(&stack0x00000070,*(undefined8 *)PTR_DAT_092bc300);
        uVar5 = (ulong)uVar8;
        uVar8 = uVar8 + 1;
        in_stack_00000108[uVar5] = auVar11;
      }
    }
    if (in_stack_00000128 != 0) {
      lVar2 = *(long *)(unaff_x22 + 0x20);
      if (lVar2 == 0) goto LAB_07215d08;
      if (*(int *)(lVar2 + 0x18) == 0) {
LAB_07215d0c:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      in_stack_00000058 = 0;
      in_stack_00000060 = 0;
      _cStack0000000000000050 = 0;
      if (-1 < *(int *)(in_stack_00000128 + 0x10)) {
        FUN_07216310(&stack0x00000010,in_stack_00000120,*(undefined4 *)(in_stack_00000128 + 0x20),
                     *(undefined4 *)(in_stack_00000128 + 0x18),in_stack_00000118._4_4_,lVar2 + 0x20,
                     0xc,*(undefined1 *)(in_stack_00000128 + 0x1c),0);
        in_stack_00000058 = in_stack_00000018;
        _cStack0000000000000050 = in_stack_00000010;
        uVar3 = _cStack0000000000000050;
        cStack0000000000000050 = (char)in_stack_00000010;
        in_stack_00000060 = in_stack_00000020;
        if (cStack0000000000000050 == '\0') goto LAB_07215c9c;
        _cStack0000000000000050 = uVar3;
        auVar11 = FUN_06016048(&stack0x00000050,*(undefined8 *)PTR_DAT_092bc300);
        in_stack_00000108[uVar8] = auVar11;
        if (in_stack_00000128 == 0) goto LAB_07215d08;
        uVar8 = uVar8 + 1;
      }
      if (*(long *)(in_stack_00000128 + 0x48) != 0) {
        lVar4 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x27) {
              puVar10 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_07215b84;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar10 = (undefined8 *)FUN_040b1e00();
LAB_07215b84:
        (*(code *)*puVar10)();
        if ((in_stack_00000128 == 0) || (*(long *)(in_stack_00000128 + 0x48) == 0)) {
LAB_07215d08:
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar4 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x27) {
              puVar10 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_07215bfc;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar10 = (undefined8 *)FUN_040b1e00();
LAB_07215bfc:
        (*(code *)*puVar10)();
        if (((in_stack_00000128 == 0) || (lVar4 = *(long *)(in_stack_00000128 + 0x48), lVar4 == 0))
           || (*(long *)(lVar4 + 0x18) == 0)) goto LAB_07215d08;
        FUN_072167a0(&stack0x00000028,in_stack_00000048,in_stack_00000040,
                     *(undefined4 *)(lVar4 + 0x10),*(undefined4 *)(*(long *)(lVar4 + 0x18) + 0x18),
                     *(undefined4 *)(in_stack_00000128 + 0x18),lVar2 + 0x20,0xc,&stack0x00000050);
        if (in_stack_00000028 == '\0') goto LAB_07215c9c;
        auVar11 = FUN_06016048(&stack0x00000028,*(undefined8 *)PTR_DAT_092bc300);
        in_stack_00000108[uVar8] = auVar11;
      }
    }
    if (1 < uVar7) {
      FUN_0896aff0(in_stack_00000108,in_stack_00000110,0);
    }
    FUN_05f3ffd8(&stack0x00000108,*(undefined8 *)PTR_DAT_092bc2d8);
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    FUN_06016030();
  }
  else {
    if (in_stack_00000158 == 0) goto LAB_07215d08;
    FUN_07216310(&stack0x00000010,in_stack_00000150,*(undefined4 *)(in_stack_00000158 + 0x20),
                 *(undefined4 *)(in_stack_00000158 + 0x18),in_stack_00000148._4_4_,lVar2 + 0x20,0xc,
                 *(undefined1 *)(in_stack_00000158 + 0x1c),0);
    in_stack_000000f8 = in_stack_00000018;
    _cStack00000000000000f0 = in_stack_00000010;
    uVar3 = _cStack00000000000000f0;
    cStack00000000000000f0 = (char)in_stack_00000010;
    in_stack_00000100 = in_stack_00000020;
    if (cStack00000000000000f0 != '\0') {
      _cStack00000000000000f0 = uVar3;
      auVar11 = FUN_06016048(&stack0x000000f0,*(undefined8 *)PTR_DAT_092bc300);
      uVar8 = 1;
      *in_stack_00000108 = auVar11;
      goto LAB_07215728;
    }
LAB_07215c9c:
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
  }
  return;
}


