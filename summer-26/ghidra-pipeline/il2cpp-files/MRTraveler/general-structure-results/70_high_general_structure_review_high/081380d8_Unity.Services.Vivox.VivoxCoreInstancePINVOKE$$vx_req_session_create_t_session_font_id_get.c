/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_create_t_session_font_id_get
ENTRY_POINT: 081380d8
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_create_t_session_font_id_get
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  int *unaff_x19;
  long unaff_x20;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined2 uStack0000000000000008;
  undefined2 uStack000000000000000c;
  undefined8 in_stack_00000018;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e7a2d8);
  FUN_03c8f898(PTR_DAT_08f03440);
  FUN_03c8f898(PTR_DAT_08f02d50);
  FUN_03c8f898(PTR_DAT_08f033d0);
  FUN_03c8f898(PTR_DAT_08f03448);
  FUN_03c8f898(PTR_DAT_08f03450);
  FUN_03c8f898(PTR_DAT_08e75c48);
  FUN_03c8f898(PTR_DAT_08e98298);
  FUN_03c8f898(PTR_DAT_08e69770);
  FUN_03c8f898(PTR_DAT_08f02d60);
  FUN_03c8f898(PTR_DAT_08f02d68);
  FUN_03c8f898(PTR_DAT_08f02d70);
  FUN_03c8f898(PTR_DAT_08e92b90);
  FUN_03c8f898(PTR_DAT_08f03458);
  FUN_03c8f898(PTR_DAT_08f03460);
  FUN_03c8f898(PTR_DAT_08ebfa98);
  FUN_03c8f898(PTR_DAT_08f03468);
  FUN_03c8f898(PTR_DAT_08f03470);
  FUN_03c8f898(PTR_DAT_08e78878);
  FUN_03c8f898(PTR_DAT_08e78880);
  FUN_03c8f898(PTR_DAT_08e782c8);
  FUN_03c8f898(PTR_DAT_08f03478);
  FUN_03c8f898(PTR_DAT_08e79048);
  FUN_03c8f898(PTR_DAT_08e69460);
  *(undefined1 *)(unaff_x20 + 0xde1) = 1;
  puVar3 = PTR_DAT_08f03400;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*(long *)(unaff_x19 + 8) == 0) {
      thunk_FUN_03ce5214(PTR_DAT_08e80728);
      uVar5 = thunk_FUN_03cf5234();
      uVar12 = thunk_FUN_03ce5214(PTR_DAT_08f03480);
      FUN_0813298c(uVar5,0,uVar12,0);
      uVar12 = thunk_FUN_03ce5214(PTR_DAT_08f03488);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar5,uVar12);
    }
    lVar13 = *(long *)(unaff_x19 + 10);
    lVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f03428);
    FUN_0813648c();
    puVar1 = PTR_DAT_08e69770;
    uVar5 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,0);
    lVar6 = FUN_03c8f97c(*(undefined8 *)puVar1,2);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_08e78880;
    thunk_FUN_03d233cc();
    if (*(uint *)(lVar6 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)PTR_DAT_08ebfa98;
    thunk_FUN_03d233cc();
    puVar1 = PTR_DAT_08f033c8;
    if (*(int *)(*(long *)PTR_DAT_08f033c8 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    auVar15 = FUN_081378a4(uVar5);
    lVar11 = auVar15._0_8_;
    if (lVar11 != 0) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30(lVar11,auVar15._8_8_,lVar11);
      }
      if (*(long *)(lVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30(0,auVar15._8_8_,lVar11);
      }
      FUN_0555e3a8(*(long *)(lVar4 + 0x20),*(undefined8 *)PTR_DAT_08e78878,lVar11,
                   *(undefined8 *)PTR_DAT_08f033d0);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    auVar15 = FUN_08137a1c(lVar6);
    uVar5 = auVar15._8_8_;
    lVar6 = auVar15._0_8_;
    if (lVar6 == 0) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30(0,uVar5,0);
      }
    }
    else {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30(lVar6,uVar5,lVar6);
      }
      if (*(long *)(lVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30(0,uVar5,lVar6);
      }
      FUN_0555e3a8(*(long *)(lVar4 + 0x20),*(undefined8 *)PTR_DAT_08e92b90,lVar6,
                   *(undefined8 *)PTR_DAT_08f033d0);
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar6 = *(long *)(lVar4 + 0x10);
    uVar5 = *(undefined8 *)(lVar13 + 0x18);
    uVar12 = *(undefined8 *)(unaff_x19 + 8);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar5 = FUN_081371c4(uVar5,uVar12);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_06a4e380(lVar6,*(undefined8 *)PTR_DAT_08f03468,uVar5,*(undefined8 *)PTR_DAT_08e7a2d8);
    if ((char)unaff_x19[0xc] != '\0') {
      lVar6 = *(long *)(lVar4 + 0x18);
      uVar12 = *(undefined8 *)(lVar13 + 0x18);
      uStack000000000000000c = (undefined2)unaff_x19[0xc];
      uVar5 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e98298,(long)&stack0x00000008 + 4);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar5 = FUN_0813669c(uVar12,*(undefined8 *)PTR_DAT_08e69460,*(undefined8 *)PTR_DAT_08f03460,
                           uVar5);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30(uVar5,uVar5);
      }
      FUN_0555da18(lVar6,uVar5,*(undefined8 *)PTR_DAT_08f03448);
    }
    if (*(char *)((long)unaff_x19 + 0x32) != '\0') {
      lVar6 = *(long *)(lVar4 + 0x18);
      uVar12 = *(undefined8 *)(lVar13 + 0x18);
      uStack0000000000000008 = *(undefined2 *)((long)unaff_x19 + 0x32);
      uVar5 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e98298,&stack0x00000008);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar5 = FUN_0813669c(uVar12,*(undefined8 *)PTR_DAT_08e69460,*(undefined8 *)PTR_DAT_08f03470,
                           uVar5);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30(uVar5,uVar5);
      }
      FUN_0555da18(lVar6,uVar5,*(undefined8 *)PTR_DAT_08f03448);
    }
    *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)PTR_DAT_08f03478;
    thunk_FUN_03d233cc();
    puVar1 = PTR_DAT_08f02d50;
    plVar10 = *(long **)(lVar13 + 0x18);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08f02d50) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0813852c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar10,*(long *)PTR_DAT_08f02d50,0);
LAB_0813852c:
    uVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
    uVar8 = FUN_06f74e14(uVar5,0);
    puVar2 = PTR_DAT_08e782c8;
    if ((uVar8 & 1) == 0) {
      if (*(long *)(lVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar8 = FUN_0555e280(*(long *)(lVar4 + 0x20),*(undefined8 *)PTR_DAT_08e782c8,
                           *(undefined8 *)PTR_DAT_08f03450);
      if ((uVar8 & 1) == 0) {
        plVar10 = *(long **)(lVar13 + 0x18);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar6 = *plVar10;
        lVar11 = *(long *)(lVar4 + 0x20);
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_081385c4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_03cf1348(plVar10,*(long *)puVar1,0);
LAB_081385c4:
        uVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
        uVar5 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e79048,uVar5,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_0555e3a8(lVar11,*(undefined8 *)puVar2,uVar5,*(undefined8 *)PTR_DAT_08f033d0);
      }
    }
    plVar10 = *(long **)(lVar13 + 0x10);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar6 = *plVar10;
    lVar11 = *(long *)PTR_DAT_08f03440;
    uVar5 = *(undefined8 *)(lVar13 + 0x18);
    uVar12 = *(undefined8 *)(unaff_x19 + 0xe);
    uVar14 = *(undefined8 *)PTR_DAT_08f03458;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)(lVar11 + 0x20)) {
          lVar6 = lVar6 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
          goto LAB_08138680;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar6 = FUN_03cf1348(plVar10);
LAB_08138680:
    lVar6 = thunk_FUN_03c86018(*(undefined8 *)(lVar6 + 8),lVar11);
    lVar4 = (**(code **)(lVar6 + 8))(plVar10,uVar14,lVar4,uVar5,uVar12,lVar6);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000018 = FUN_05c0b91c(lVar4,*(undefined8 *)PTR_DAT_08f02d70);
    uVar8 = FUN_05ac7d38(&stack0x00000018,*(undefined8 *)PTR_DAT_08f02d68);
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_03d233cc(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0417d6e0(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  uVar5 = FUN_05ac7d7c(&stack0x00000018,*(undefined8 *)PTR_DAT_08f02d60);
  *unaff_x19 = -2;
  puVar1 = PTR_DAT_08f03438;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_063c7630(unaff_x19 + 2,uVar5,*(undefined8 *)puVar1);
  return;
}


