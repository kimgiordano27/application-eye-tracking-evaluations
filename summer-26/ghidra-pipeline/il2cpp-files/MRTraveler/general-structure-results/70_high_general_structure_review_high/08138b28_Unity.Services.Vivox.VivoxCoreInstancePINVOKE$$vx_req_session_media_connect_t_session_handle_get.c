/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_media_connect_t_session_handle_get
ENTRY_POINT: 08138b28
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_20;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_media_connect_t_session_handle_get
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int in_w8;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x26;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000008;
  
  plVar14 = *(long **)(unaff_x26 + 0x400);
  if (in_w8 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    if (*(long *)(unaff_x19 + 8) == 0) {
      thunk_FUN_03ce5214(PTR_DAT_08e80728);
      uVar10 = thunk_FUN_03cf5234();
      uVar11 = thunk_FUN_03ce5214(PTR_DAT_08f034b8);
      FUN_0813298c(uVar10,0,uVar11,0);
      uVar11 = thunk_FUN_03ce5214(PTR_DAT_08f034c0);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar10,uVar11);
    }
    if (*(long *)(unaff_x19 + 10) == 0) {
      thunk_FUN_03ce5214(PTR_DAT_08e80728);
      uVar10 = thunk_FUN_03cf5234();
      uVar11 = thunk_FUN_03ce5214(PTR_DAT_08f034c8);
      FUN_0813298c(uVar10,0,uVar11,0);
      uVar11 = thunk_FUN_03ce5214(PTR_DAT_08f034c0);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar10,uVar11);
    }
    lVar12 = *(long *)(unaff_x19 + 0xc);
    lVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f03428);
    FUN_0813648c();
    puVar1 = PTR_DAT_08e69770;
    lVar4 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,1);
    puVar2 = PTR_DAT_08e78880;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_08e78880;
    thunk_FUN_03d233cc();
    lVar5 = FUN_03c8f97c(*(undefined8 *)puVar1,2);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar2;
    thunk_FUN_03d233cc();
    if (*(uint *)(lVar5 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_08ebfa98;
    thunk_FUN_03d233cc();
    puVar1 = PTR_DAT_08f033c8;
    if (*(int *)(*(long *)PTR_DAT_08f033c8 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    auVar15 = FUN_081378a4(lVar4);
    lVar4 = auVar15._0_8_;
    if (lVar4 != 0) {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30(lVar4,auVar15._8_8_,lVar4);
      }
      if (*(long *)(lVar3 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30(0,auVar15._8_8_,lVar4);
      }
      FUN_0555e3a8(*(long *)(lVar3 + 0x20),*(undefined8 *)PTR_DAT_08e78878,lVar4,
                   *(undefined8 *)PTR_DAT_08f033d0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    auVar15 = FUN_08137a1c(lVar5);
    uVar10 = auVar15._8_8_;
    lVar4 = auVar15._0_8_;
    if (lVar4 == 0) {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30(0,uVar10,0);
      }
    }
    else {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30(lVar4,uVar10,lVar4);
      }
      if (*(long *)(lVar3 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30(0,uVar10,lVar4);
      }
      FUN_0555e3a8(*(long *)(lVar3 + 0x20),*(undefined8 *)PTR_DAT_08e92b90,lVar4,
                   *(undefined8 *)PTR_DAT_08f033d0);
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar4 = *(long *)(lVar3 + 0x10);
    uVar10 = *(undefined8 *)(lVar12 + 0x18);
    uVar11 = *(undefined8 *)(unaff_x19 + 8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar10 = FUN_081371c4(uVar10,uVar11);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_06a4e380(lVar4,*(undefined8 *)PTR_DAT_08f03468,uVar10,*(undefined8 *)PTR_DAT_08e7a2d8);
    *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(unaff_x19 + 10);
    thunk_FUN_03d233cc();
    *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)PTR_DAT_08f034b0;
    thunk_FUN_03d233cc();
    puVar1 = PTR_DAT_08f02d50;
    plVar9 = *(long **)(lVar12 + 0x18);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar4 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f02d50) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_08138d78;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08f02d50,0);
LAB_08138d78:
    uVar10 = (*(code *)*puVar6)(plVar9,puVar6[1]);
    uVar7 = FUN_06f74e14(uVar10,0);
    puVar2 = PTR_DAT_08e782c8;
    if ((uVar7 & 1) == 0) {
      if (*(long *)(lVar3 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar7 = FUN_0555e280(*(long *)(lVar3 + 0x20),*(undefined8 *)PTR_DAT_08e782c8,
                           *(undefined8 *)PTR_DAT_08f03450);
      if ((uVar7 & 1) == 0) {
        plVar9 = *(long **)(lVar12 + 0x18);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar4 = *plVar9;
        lVar5 = *(long *)(lVar3 + 0x20);
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_08138e10;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)puVar1,0);
LAB_08138e10:
        uVar10 = (*(code *)*puVar6)(plVar9,puVar6[1]);
        uVar10 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e79048,uVar10,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_0555e3a8(lVar5,*(undefined8 *)puVar2,uVar10,*(undefined8 *)PTR_DAT_08f033d0);
      }
    }
    plVar9 = *(long **)(lVar12 + 0x10);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar4 = *plVar9;
    lVar5 = *(long *)PTR_DAT_08f034a8;
    uVar10 = *(undefined8 *)(lVar12 + 0x18);
    uVar11 = *(undefined8 *)(unaff_x19 + 0xe);
    uVar13 = *(undefined8 *)PTR_DAT_08f03458;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)(lVar5 + 0x20)) {
          lVar4 = lVar4 + (long)(int)(*piVar8 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 + 0x138;
          goto LAB_08138ecc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    lVar4 = FUN_03cf1348(plVar9);
LAB_08138ecc:
    lVar4 = thunk_FUN_03c86018(*(undefined8 *)(lVar4 + 8),lVar5);
    lVar3 = (**(code **)(lVar4 + 8))(plVar9,uVar13,lVar3,uVar10,uVar11,lVar4);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = FUN_05c0b91c(lVar3,*(undefined8 *)PTR_DAT_08f02d70);
    uVar7 = FUN_05ac7d38(&stack0x00000008,*(undefined8 *)PTR_DAT_08f02d68);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_03d233cc(unaff_x19 + 0x10,0);
      if (*(int *)(*plVar14 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0417d8f4(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  uVar10 = FUN_05ac7d7c(&stack0x00000008,*(undefined8 *)PTR_DAT_08f02d60);
  *unaff_x19 = 0xfffffffe;
  puVar1 = PTR_DAT_08f03438;
  if (*(int *)(*plVar14 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_063c7630(unaff_x19 + 2,uVar10,*(undefined8 *)puVar1);
  return;
}


