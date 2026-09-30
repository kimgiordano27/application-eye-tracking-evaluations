/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_voice_font_t_session_font_id_get
ENTRY_POINT: 085666b8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x08566d30) */
/* WARNING: Removing unreachable block (ram,0x085669e4) */
/* WARNING: Removing unreachable block (ram,0x08566dcc) */
/* WARNING: Removing unreachable block (ram,0x08566d84) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_voice_font_t_session_font_id_get
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined1 uVar11;
  long in_x9;
  ulong uVar12;
  int *in_x10;
  int *piVar13;
  long unaff_x19;
  long lVar14;
  int unaff_w21;
  undefined8 *unaff_x22;
  long unaff_x26;
  long lVar15;
  undefined4 unaff_s8;
  undefined4 uStack0000000000000000;
  int iStack0000000000000004;
  long in_stack_00000010;
  long in_stack_00000028;
  long in_stack_00000038;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long *in_stack_00000068;
  
  do {
    in_x9 = in_x9 + -1;
    piVar13 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar6 = (undefined8 *)FUN_040b1e00();
      goto LAB_085666e0;
    }
    plVar9 = (long *)(in_x10 + 2);
    in_x10 = piVar13;
  } while (*plVar9 != param_3);
  puVar6 = (undefined8 *)(param_1 + (long)*piVar13 * 0x10 + 0x138);
LAB_085666e0:
  (*(code *)*puVar6)();
  plVar9 = in_stack_00000068;
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(undefined8 *)(in_stack_00000038 + 0x58) = in_stack_00000058;
  *(undefined8 *)(in_stack_00000038 + 0x50) = in_stack_00000050;
  if (in_stack_00000068 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar10 = *in_stack_00000068;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_09327080) {
        puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_08566760;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000068,*(long *)PTR_DAT_09327080,0);
LAB_08566760:
  (*(code *)*puVar6)(plVar9,&stack0x00000050,1,puVar6[1]);
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  *(long *)(in_stack_00000038 + 0x60) = in_stack_00000010;
  thunk_FUN_040ec700();
  if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  iVar4 = *(int *)(unaff_x19 + 0x210);
  *(undefined4 *)(in_stack_00000038 + 0x6c) = unaff_s8;
  *(int *)(in_stack_00000038 + 0x68) = iVar4;
  *(undefined4 *)(in_stack_00000038 + 0x70) = *(undefined4 *)(unaff_x19 + 0x220);
  if (iVar4 == 4) {
    if (*(int *)(*(long *)PTR_DAT_0932d570 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar7 = FUN_085656d8(unaff_x19 + 0x210);
    *(undefined8 *)(in_stack_00000038 + 0x78) = uVar7;
    thunk_FUN_040ec700((undefined8 *)(in_stack_00000038 + 0x78));
  }
  else {
    *(undefined8 *)(in_stack_00000038 + 0x78) = 0;
    thunk_FUN_040ec700((undefined8 *)(in_stack_00000038 + 0x78),0);
  }
  if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (*(long *)(unaff_x26 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  iVar4 = FUN_089ac10c(*(long *)(unaff_x26 + 0x18),0);
  plVar9 = in_stack_00000068;
  if (((iVar4 == 8) || (iVar4 == 0x3b)) || (iVar4 == 0x4a)) {
    if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar11 = 1;
  }
  else {
    if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar11 = 0;
  }
  *(undefined1 *)(in_stack_00000038 + 0x80) = uVar11;
  lVar10 = *(long *)PTR_DAT_0932ecd8;
  *(undefined1 *)(in_stack_00000038 + 0x81) = *(undefined1 *)(unaff_x19 + 399);
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar10 = *(long *)PTR_DAT_0932ecd8;
  }
  puVar6 = *(undefined8 **)(lVar10 + 0xb8);
  lVar15 = puVar6[1];
  if (lVar15 == 0) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar6 = *(undefined8 **)(*(long *)PTR_DAT_0932ecd8 + 0xb8);
    }
    uVar7 = *puVar6;
    lVar15 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932ecb0);
    FUN_06ac88dc(lVar15,uVar7,*(undefined8 *)PTR_DAT_0932ecc8,0);
    plVar8 = (long *)(*(long *)(*(long *)PTR_DAT_0932ecd8 + 0xb8) + 8);
    *plVar8 = lVar15;
    thunk_FUN_040ec700(plVar8,lVar15);
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar10 = *plVar9;
  lVar14 = *(long *)PTR_DAT_0932ecb8;
  uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar12 != 0) {
    piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == *(long *)(lVar14 + 0x20)) {
        lVar10 = lVar10 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar14 + 0x50)) * 0x10 + 0x138;
        goto LAB_08566940;
      }
      uVar12 = uVar12 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar12 != 0);
  }
  lVar10 = FUN_040b1e00(plVar9);
LAB_08566940:
  lVar10 = thunk_FUN_04096bb4(*(undefined8 *)(lVar10 + 8),lVar14);
  (**(code **)(lVar10 + 8))(plVar9,lVar15,lVar10);
  plVar9 = in_stack_00000068;
  puVar1 = PTR_DAT_092860c0;
  if (in_stack_00000068 != (long *)0x0) {
    lVar10 = *in_stack_00000068;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092860c0) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_085669c8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(in_stack_00000068,*(long *)PTR_DAT_092860c0,0);
LAB_085669c8:
    (*(code *)*puVar6)(plVar9,puVar6[1]);
  }
  if (iStack0000000000000004 == unaff_w21) {
    return;
  }
  if ((in_stack_00000010 != 0) && (lVar10 = FUN_08994c2c(in_stack_00000010,0), lVar10 != 0)) {
    iVar4 = FUN_0899385c(lVar10,0);
    FUN_0513e6bc(0x2f,*(undefined8 *)PTR_DAT_0932c7b8);
    plVar9 = (long *)FUN_05189b28();
    uVar3 = in_stack_00000058;
    uVar7 = in_stack_00000050;
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    *(undefined8 *)(in_stack_00000028 + 0x18) = in_stack_00000058;
    *(undefined8 *)(in_stack_00000028 + 0x10) = in_stack_00000050;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar10 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_09327ed0) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_08566adc;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_09327ed0,0);
LAB_08566adc:
    (*(code *)*puVar6)(plVar9,uVar7,uVar3,0,2,puVar6[1]);
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar7 = *unaff_x22;
    *(undefined8 *)(in_stack_00000028 + 0x28) = unaff_x22[1];
    *(undefined8 *)(in_stack_00000028 + 0x20) = uVar7;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar10 = *plVar9;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_09327080) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto FUN_08566b64;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_09327080,0);
FUN_08566b64:
    (*(code *)*puVar6)(plVar9);
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    *(long *)(in_stack_00000028 + 0x60) = in_stack_00000010;
    thunk_FUN_040ec700((long *)(in_stack_00000028 + 0x60),in_stack_00000010);
    puVar2 = PTR_DAT_0932ecd8;
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    *(int *)(in_stack_00000028 + 0x68) = iVar4 + -1;
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      lVar10 = *(long *)PTR_DAT_0932ecd8;
    }
    puVar6 = *(undefined8 **)(lVar10 + 0xb8);
    lVar15 = puVar6[2];
    if (lVar15 == 0) {
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        puVar6 = *(undefined8 **)(*(long *)PTR_DAT_0932ecd8 + 0xb8);
      }
      uVar7 = *puVar6;
      lVar15 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0932ecb0);
      FUN_06ac88dc(lVar15,uVar7,*(undefined8 *)PTR_DAT_0932ecd0,0);
      plVar8 = (long *)(*(long *)(*(long *)PTR_DAT_0932ecd8 + 0xb8) + 0x10);
      *plVar8 = lVar15;
      thunk_FUN_040ec700(plVar8,lVar15);
    }
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar10 = *plVar9;
    lVar14 = *(long *)PTR_DAT_0932ecb8;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)(lVar14 + 0x20)) {
          lVar10 = lVar10 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar14 + 0x50)) * 0x10 + 0x138;
          goto LAB_08566c98;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    lVar10 = FUN_040b1e00(plVar9);
LAB_08566c98:
    lVar10 = thunk_FUN_04096bb4(*(undefined8 *)(lVar10 + 8),lVar14);
    (**(code **)(lVar10 + 8))(plVar9,lVar15,lVar10);
    if (plVar9 != (long *)0x0) {
      lVar10 = *plVar9;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_08566d18;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)puVar1,0);
LAB_08566d18:
      (*(code *)*puVar6)(plVar9,puVar6[1]);
    }
    lVar10 = *(long *)(unaff_x19 + 0x200);
    uVar5 = FUN_089c69dc(0);
    if (lVar10 != 0) {
      FUN_0851b5c4(lVar10,uStack0000000000000000,uVar5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


