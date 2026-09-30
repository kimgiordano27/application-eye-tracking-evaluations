/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_media_connect_t_session_font_id_get
ENTRY_POINT: 08138c40
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_media_connect_t_session_font_id_get
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  int in_w8;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x23;
  undefined8 uVar10;
  long unaff_x24;
  long *unaff_x26;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000008;
  
  if (in_w8 == 0) {
    thunk_FUN_03cd7500();
  }
  auVar11 = FUN_08137a1c();
  uVar9 = auVar11._8_8_;
  lVar6 = auVar11._0_8_;
  if (lVar6 == 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30(0,uVar9,0);
    }
  }
  else {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30(lVar6,uVar9,lVar6);
    }
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30(0,uVar9,lVar6);
    }
    FUN_0555e3a8(*(long *)(unaff_x20 + 0x20),*(undefined8 *)PTR_DAT_08e92b90,lVar6,
                 *(undefined8 *)PTR_DAT_08f033d0);
  }
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x24 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x19 + 8);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar9 = FUN_081371c4(uVar9,uVar10);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  FUN_06a4e380(lVar6,*(undefined8 *)PTR_DAT_08f03468,uVar9,*(undefined8 *)PTR_DAT_08e7a2d8);
  *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(unaff_x19 + 10);
  thunk_FUN_03d233cc();
  *(undefined8 *)(unaff_x20 + 0x38) = *(undefined8 *)PTR_DAT_08f034b0;
  thunk_FUN_03d233cc();
  puVar2 = PTR_DAT_08f02d50;
  plVar7 = *(long **)(unaff_x24 + 0x18);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar6 = *plVar7;
  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08f02d50) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_08138d78;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)PTR_DAT_08f02d50,0);
LAB_08138d78:
  uVar9 = (*(code *)*puVar3)(plVar7,puVar3[1]);
  uVar4 = FUN_06f74e14(uVar9,0);
  puVar1 = PTR_DAT_08e782c8;
  if ((uVar4 & 1) == 0) {
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar4 = FUN_0555e280(*(long *)(unaff_x20 + 0x20),*(undefined8 *)PTR_DAT_08e782c8,
                         *(undefined8 *)PTR_DAT_08f03450);
    if ((uVar4 & 1) == 0) {
      plVar7 = *(long **)(unaff_x24 + 0x18);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      lVar6 = *plVar7;
      lVar8 = *(long *)(unaff_x20 + 0x20);
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_08138e10;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_03cf1348(plVar7,*(long *)puVar2,0);
LAB_08138e10:
      uVar9 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      uVar9 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e79048,uVar9,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_0555e3a8(lVar8,*(undefined8 *)puVar1,uVar9,*(undefined8 *)PTR_DAT_08f033d0);
    }
  }
  plVar7 = *(long **)(unaff_x24 + 0x10);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar6 = *plVar7;
  lVar8 = *(long *)PTR_DAT_08f034a8;
  uVar9 = *(undefined8 *)PTR_DAT_08f03458;
  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)(lVar8 + 0x20)) {
        lVar6 = lVar6 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar8 + 0x50)) * 0x10 + 0x138;
        goto LAB_08138ecc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar6 = FUN_03cf1348(plVar7);
LAB_08138ecc:
  lVar6 = thunk_FUN_03c86018(*(undefined8 *)(lVar6 + 8),lVar8);
  lVar6 = (**(code **)(lVar6 + 8))(plVar7,uVar9);
  if (lVar6 != 0) {
    in_stack_00000008 = FUN_05c0b91c(lVar6,*(undefined8 *)PTR_DAT_08f02d70);
    uVar4 = FUN_05ac7d38(&stack0x00000008,*(undefined8 *)PTR_DAT_08f02d68);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
      thunk_FUN_03d233cc(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0417d8f4(unaff_x19 + 2,&stack0x00000008);
    }
    else {
      uVar9 = FUN_05ac7d7c(&stack0x00000008,*(undefined8 *)PTR_DAT_08f02d60);
      *unaff_x19 = 0xfffffffe;
      puVar2 = PTR_DAT_08f03438;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_063c7630(unaff_x19 + 2,uVar9,*(undefined8 *)puVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


