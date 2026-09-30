/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert.<>c$$<DeserializeEnum>b__17_0
ENTRY_POINT: 07215340
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


void Meta_WitAi_Json_JsonConvert_<>c__<DeserializeEnum>b__17_0
               (undefined8 *param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong in_x9;
  ulong uVar7;
  int *piVar8;
  undefined4 unaff_w21;
  uint uVar9;
  int unaff_w23;
  int unaff_w24;
  uint uVar10;
  long unaff_x25;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  char cStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
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
  undefined4 uStack000000000000011c;
  undefined8 in_stack_00000120;
  long in_stack_00000128;
  undefined4 uStack0000000000000134;
  undefined8 in_stack_00000138;
  long in_stack_00000140;
  undefined4 uStack000000000000014c;
  long in_stack_00000150;
  long in_stack_00000158;
  
  if ((in_x9 & 1) == 0) {
    FUN_04077588(PTR_DAT_092bc2d0);
    FUN_04077588(PTR_DAT_092bc2d8);
    FUN_04077588(PTR_DAT_092bc2e0);
    FUN_04077588(PTR_DAT_092bc2f0);
    FUN_04077588(PTR_DAT_092bc2f8);
    FUN_04077588(PTR_DAT_092bc300);
    FUN_04077588(PTR_DAT_092869f8);
    *(undefined1 *)(unaff_x25 + 0x480) = 1;
  }
  puVar2 = PTR_DAT_092bc2d0;
  in_stack_00000150 = 0;
  in_stack_00000158 = 0;
  uStack000000000000014c = 0;
  in_stack_00000138 = 0;
  in_stack_00000140 = 0;
  uStack0000000000000134 = 0;
  in_stack_00000120 = 0;
  in_stack_00000128 = 0;
  uStack000000000000011c = 0;
  in_stack_00000108 = (undefined1 (*) [16])0x0;
  in_stack_00000110 = 0;
  _cStack00000000000000f0 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  _cStack00000000000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  _cStack00000000000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000b0 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  _cStack0000000000000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  _cStack0000000000000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  _cStack0000000000000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  if (param_3 == (long *)0x0) goto LAB_07215d08;
  lVar5 = *param_3;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092bc2d0) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0721545c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00(param_3,*(long *)PTR_DAT_092bc2d0,0);
LAB_0721545c:
  (*(code *)*puVar3)(param_3,unaff_w21,&stack0x00000158,&stack0x00000150,&stack0x0000014c,puVar3[1])
  ;
  puVar1 = PTR_DAT_092869f8;
  if (in_stack_00000158 == 0) goto LAB_07215d08;
  lVar5 = FUN_04077674(*(undefined8 *)PTR_DAT_092869f8,*(undefined4 *)(in_stack_00000158 + 0x20));
  plVar11 = (long *)(param_2 + 0x10);
  *plVar11 = lVar5;
  thunk_FUN_040ec700(plVar11,lVar5);
  uVar4 = FUN_0758dc78(*plVar11,3,0);
  *(undefined8 *)(param_2 + 0x28) = uVar4;
  if (in_stack_00000158 == 0) goto LAB_07215d08;
  uVar9 = 1;
  if ((*(long *)(in_stack_00000158 + 0x48) != 0) &&
     (uVar9 = 1, -1 < *(int *)(in_stack_00000158 + 0x10))) {
    uVar9 = 2;
  }
  in_stack_00000138 = 0;
  in_stack_00000140 = 0;
  uStack0000000000000134 = 0;
  if (-1 < unaff_w23) {
    uVar4 = FUN_04077674(*(undefined8 *)puVar1,*(undefined4 *)(in_stack_00000158 + 0x20));
    puVar3 = (undefined8 *)(param_2 + 0x18);
    *puVar3 = uVar4;
    thunk_FUN_040ec700(puVar3,uVar4);
    uVar4 = FUN_0758dc78(*puVar3,3,0);
    *(undefined8 *)(param_2 + 0x30) = uVar4;
    lVar5 = *param_3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07215568;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(param_3,*(long *)puVar2,0);
LAB_07215568:
    (*(code *)*puVar3)(param_3,unaff_w23,&stack0x00000140,&stack0x00000138,&stack0x00000134,
                       puVar3[1]);
    if (in_stack_00000140 == 0) goto LAB_07215d08;
    if ((*(long *)(in_stack_00000140 + 0x48) == 0) || (*(int *)(in_stack_00000140 + 0x10) < 0)) {
      uVar9 = uVar9 + 1;
    }
    else {
      uVar9 = uVar9 + 2;
    }
  }
  in_stack_00000120 = 0;
  in_stack_00000128 = 0;
  uStack000000000000011c = 0;
  if (-1 < unaff_w24) {
    if (in_stack_00000158 == 0) goto LAB_07215d08;
    uVar4 = FUN_04077674(*(undefined8 *)puVar1,*(undefined4 *)(in_stack_00000158 + 0x20));
    puVar3 = (undefined8 *)(param_2 + 0x20);
    *puVar3 = uVar4;
    thunk_FUN_040ec700(puVar3,uVar4);
    uVar4 = FUN_0758dc78(*puVar3,3,0);
    *(undefined8 *)(param_2 + 0x38) = uVar4;
    lVar5 = *param_3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0721563c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(param_3,*(long *)puVar2,0);
LAB_0721563c:
    (*(code *)*puVar3)(param_3,unaff_w23,&stack0x00000128,&stack0x00000120,&stack0x0000011c,
                       puVar3[1]);
    if (in_stack_00000128 == 0) goto LAB_07215d08;
    if ((*(long *)(in_stack_00000128 + 0x48) == 0) || (*(int *)(in_stack_00000128 + 0x10) < 0)) {
      uVar9 = uVar9 + 1;
    }
    else {
      uVar9 = uVar9 + 2;
    }
  }
  FUN_05f3fcdc(&stack0x00000108,uVar9,4,1,*(undefined8 *)PTR_DAT_092bc2e0);
  lVar5 = *plVar11;
  if (lVar5 == 0) goto LAB_07215d08;
  if (*(int *)(lVar5 + 0x18) == 0) goto LAB_07215d0c;
  _cStack00000000000000f0 = 0;
  in_stack_000000f8 = 0;
  in_stack_00000100 = 0;
  if (in_stack_00000150 == 0) {
    uVar10 = 0;
LAB_07215728:
    if (in_stack_00000158 == 0) goto LAB_07215d08;
    if (*(long *)(in_stack_00000158 + 0x48) != 0) {
      lVar6 = *param_3;
      uVar4 = *(undefined8 *)(*(long *)(in_stack_00000158 + 0x48) + 0x18);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_0721578c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_040b1e00(param_3,*(long *)puVar2,1);
LAB_0721578c:
      (*(code *)*puVar3)(param_3,uVar4,&stack0x000000e8,puVar3[1]);
      if ((in_stack_00000158 == 0) || (*(long *)(in_stack_00000158 + 0x48) == 0)) goto LAB_07215d08;
      lVar6 = *param_3;
      uVar4 = *(undefined8 *)(*(long *)(in_stack_00000158 + 0x48) + 0x20);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto FUN_07215804;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_040b1e00(param_3,*(long *)puVar2,2);
FUN_07215804:
      (*(code *)*puVar3)(param_3,uVar4,&stack0x000000e0,puVar3[1]);
      if (((in_stack_00000158 == 0) || (lVar6 = *(long *)(in_stack_00000158 + 0x48), lVar6 == 0)) ||
         (*(long *)(lVar6 + 0x18) == 0)) goto LAB_07215d08;
      FUN_072167a0(&stack0x00000010,in_stack_000000e8,in_stack_000000e0,
                   *(undefined4 *)(lVar6 + 0x10),*(undefined4 *)(*(long *)(lVar6 + 0x18) + 0x18),
                   *(undefined4 *)(in_stack_00000158 + 0x18),lVar5 + 0x20,0xc,&stack0x000000f0);
      in_stack_000000c8 = in_stack_00000018;
      _cStack00000000000000c0 = in_stack_00000010;
      uVar4 = _cStack00000000000000c0;
      cStack00000000000000c0 = (char)in_stack_00000010;
      in_stack_000000d0 = in_stack_00000020;
      if (cStack00000000000000c0 == '\0') goto LAB_07215c9c;
      _cStack00000000000000c0 = uVar4;
      auVar12 = FUN_06016048(&stack0x000000c0,*(undefined8 *)PTR_DAT_092bc300);
      uVar7 = (ulong)uVar10;
      uVar10 = uVar10 + 1;
      in_stack_00000108[uVar7] = auVar12;
    }
    if (in_stack_00000140 != 0) {
      lVar5 = *(long *)(param_2 + 0x18);
      if (lVar5 == 0) goto LAB_07215d08;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_07215d0c;
      in_stack_000000a8 = 0;
      in_stack_000000b0 = 0;
      _cStack00000000000000a0 = 0;
      if (-1 < *(int *)(in_stack_00000140 + 0x10)) {
        FUN_07216310(&stack0x00000010,in_stack_00000138,*(undefined4 *)(in_stack_00000140 + 0x20),
                     *(undefined4 *)(in_stack_00000140 + 0x18),uStack0000000000000134,lVar5 + 0x20,
                     0xc,*(undefined1 *)(in_stack_00000140 + 0x1c),0);
        in_stack_000000a8 = in_stack_00000018;
        _cStack00000000000000a0 = in_stack_00000010;
        uVar4 = _cStack00000000000000a0;
        cStack00000000000000a0 = (char)in_stack_00000010;
        in_stack_000000b0 = in_stack_00000020;
        if (cStack00000000000000a0 == '\0') goto LAB_07215c9c;
        _cStack00000000000000a0 = uVar4;
        auVar12 = FUN_06016048(&stack0x000000a0,*(undefined8 *)PTR_DAT_092bc300);
        in_stack_00000108[uVar10] = auVar12;
        if (in_stack_00000140 == 0) goto LAB_07215d08;
        uVar10 = uVar10 + 1;
      }
      if (*(long *)(in_stack_00000140 + 0x48) != 0) {
        lVar6 = *param_3;
        uVar4 = *(undefined8 *)(*(long *)(in_stack_00000140 + 0x48) + 0x18);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_07215988;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_040b1e00(param_3,*(long *)puVar2,1);
LAB_07215988:
        (*(code *)*puVar3)(param_3,uVar4,&stack0x00000098,puVar3[1]);
        if ((in_stack_00000140 == 0) || (*(long *)(in_stack_00000140 + 0x48) == 0))
        goto LAB_07215d08;
        lVar6 = *param_3;
        uVar4 = *(undefined8 *)(*(long *)(in_stack_00000140 + 0x48) + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_07215a00;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_040b1e00(param_3,*(long *)puVar2,2);
LAB_07215a00:
        (*(code *)*puVar3)(param_3,uVar4,&stack0x00000090,puVar3[1]);
        if (((in_stack_00000140 == 0) || (lVar6 = *(long *)(in_stack_00000140 + 0x48), lVar6 == 0))
           || (*(long *)(lVar6 + 0x18) == 0)) goto LAB_07215d08;
        FUN_072167a0(&stack0x00000010,in_stack_00000098,in_stack_00000090,
                     *(undefined4 *)(lVar6 + 0x10),*(undefined4 *)(*(long *)(lVar6 + 0x18) + 0x18),
                     *(undefined4 *)(in_stack_00000140 + 0x18),lVar5 + 0x20,0xc,&stack0x000000a0);
        in_stack_00000078 = in_stack_00000018;
        _cStack0000000000000070 = in_stack_00000010;
        uVar4 = _cStack0000000000000070;
        cStack0000000000000070 = (char)in_stack_00000010;
        in_stack_00000080 = in_stack_00000020;
        if (cStack0000000000000070 == '\0') goto LAB_07215c9c;
        _cStack0000000000000070 = uVar4;
        auVar12 = FUN_06016048(&stack0x00000070,*(undefined8 *)PTR_DAT_092bc300);
        uVar7 = (ulong)uVar10;
        uVar10 = uVar10 + 1;
        in_stack_00000108[uVar7] = auVar12;
      }
    }
    if (in_stack_00000128 != 0) {
      lVar5 = *(long *)(param_2 + 0x20);
      if (lVar5 == 0) goto LAB_07215d08;
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_07215d0c:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      in_stack_00000058 = 0;
      in_stack_00000060 = 0;
      _cStack0000000000000050 = 0;
      if (-1 < *(int *)(in_stack_00000128 + 0x10)) {
        FUN_07216310(&stack0x00000010,in_stack_00000120,*(undefined4 *)(in_stack_00000128 + 0x20),
                     *(undefined4 *)(in_stack_00000128 + 0x18),uStack000000000000011c,lVar5 + 0x20,
                     0xc,*(undefined1 *)(in_stack_00000128 + 0x1c),0);
        in_stack_00000058 = in_stack_00000018;
        _cStack0000000000000050 = in_stack_00000010;
        uVar4 = _cStack0000000000000050;
        cStack0000000000000050 = (char)in_stack_00000010;
        in_stack_00000060 = in_stack_00000020;
        if (cStack0000000000000050 == '\0') goto LAB_07215c9c;
        _cStack0000000000000050 = uVar4;
        auVar12 = FUN_06016048(&stack0x00000050,*(undefined8 *)PTR_DAT_092bc300);
        in_stack_00000108[uVar10] = auVar12;
        if (in_stack_00000128 == 0) goto LAB_07215d08;
        uVar10 = uVar10 + 1;
      }
      if (*(long *)(in_stack_00000128 + 0x48) != 0) {
        lVar6 = *param_3;
        uVar4 = *(undefined8 *)(*(long *)(in_stack_00000128 + 0x48) + 0x18);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_07215b84;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_040b1e00(param_3,*(long *)puVar2,1);
LAB_07215b84:
        (*(code *)*puVar3)(param_3,uVar4,&stack0x00000048,puVar3[1]);
        if ((in_stack_00000128 == 0) || (*(long *)(in_stack_00000128 + 0x48) == 0)) {
LAB_07215d08:
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar6 = *param_3;
        uVar4 = *(undefined8 *)(*(long *)(in_stack_00000128 + 0x48) + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_07215bfc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_040b1e00(param_3,*(long *)puVar2,2);
LAB_07215bfc:
        (*(code *)*puVar3)(param_3,uVar4,&stack0x00000040,puVar3[1]);
        if (((in_stack_00000128 == 0) || (lVar6 = *(long *)(in_stack_00000128 + 0x48), lVar6 == 0))
           || (*(long *)(lVar6 + 0x18) == 0)) goto LAB_07215d08;
        FUN_072167a0(&stack0x00000028,in_stack_00000048,in_stack_00000040,
                     *(undefined4 *)(lVar6 + 0x10),*(undefined4 *)(*(long *)(lVar6 + 0x18) + 0x18),
                     *(undefined4 *)(in_stack_00000128 + 0x18),lVar5 + 0x20,0xc,&stack0x00000050);
        if (cStack0000000000000028 == '\0') goto LAB_07215c9c;
        auVar12 = FUN_06016048(&stack0x00000028,*(undefined8 *)PTR_DAT_092bc300);
        in_stack_00000108[uVar10] = auVar12;
      }
    }
    if (uVar9 < 2) {
      auVar12 = *in_stack_00000108;
    }
    else {
      auVar12 = FUN_0896aff0(in_stack_00000108,in_stack_00000110,0);
    }
    FUN_05f3ffd8(&stack0x00000108,*(undefined8 *)PTR_DAT_092bc2d8);
    puVar2 = PTR_DAT_092bc2f0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_06016030(param_1,auVar12._0_8_,auVar12._8_8_,*(undefined8 *)puVar2);
  }
  else {
    if (in_stack_00000158 == 0) goto LAB_07215d08;
    FUN_07216310(&stack0x00000010,in_stack_00000150,*(undefined4 *)(in_stack_00000158 + 0x20),
                 *(undefined4 *)(in_stack_00000158 + 0x18),uStack000000000000014c,lVar5 + 0x20,0xc,
                 *(undefined1 *)(in_stack_00000158 + 0x1c),0);
    in_stack_000000f8 = in_stack_00000018;
    _cStack00000000000000f0 = in_stack_00000010;
    uVar4 = _cStack00000000000000f0;
    cStack00000000000000f0 = (char)in_stack_00000010;
    in_stack_00000100 = in_stack_00000020;
    if (cStack00000000000000f0 != '\0') {
      _cStack00000000000000f0 = uVar4;
      auVar12 = FUN_06016048(&stack0x000000f0,*(undefined8 *)PTR_DAT_092bc300);
      uVar10 = 1;
      *in_stack_00000108 = auVar12;
      goto LAB_07215728;
    }
LAB_07215c9c:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


