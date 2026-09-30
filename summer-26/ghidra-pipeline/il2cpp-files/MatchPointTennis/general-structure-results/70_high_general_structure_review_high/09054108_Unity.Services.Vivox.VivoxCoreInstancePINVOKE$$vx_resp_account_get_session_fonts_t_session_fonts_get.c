/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_account_get_session_fonts_t_session_fonts_get
ENTRY_POINT: 09054108
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x09054604) */
/* WARNING: Removing unreachable block (ram,0x09054618) */
/* WARNING: Removing unreachable block (ram,0x09054348) */
/* WARNING: Removing unreachable block (ram,0x0905459c) */
/* WARNING: Removing unreachable block (ram,0x090545c4) */
/* WARNING: Removing unreachable block (ram,0x090545c8) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_account_get_session_fonts_t_session_fonts_get
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  int *unaff_x19;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  iVar11 = *unaff_x19;
  if (iVar11 != 0) {
    lVar12 = *(long *)(unaff_x19 + 8);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar5 = *(undefined8 *)(lVar12 + 0x10);
    uVar10 = *(undefined8 *)(lVar12 + 0x18);
    lVar3 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20c88);
    FUN_098484c8(lVar3,uVar5,uVar10,0);
    plVar9 = (long *)(unaff_x19 + 10);
    *plVar9 = lVar3;
    thunk_FUN_044bb4b4(plVar9,lVar3);
    plVar8 = *(long **)(lVar12 + 0x20);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar3 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2bbb0) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_090541d0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09f2bbb0,0);
LAB_090541d0:
    plVar8 = (long *)(*(code *)*puVar4)(plVar8,puVar4[1]);
    puVar2 = PTR_DAT_09f2bbb8;
    puVar1 = PTR_DAT_09f1f018;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    do {
      lVar3 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_09054240;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_044822ac(plVar8,*(long *)puVar1,0);
LAB_09054240:
      uVar6 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if ((uVar6 & 1) == 0) {
        if ((-1 < iVar11) || (plVar8 == (long *)0x0)) goto LAB_0905433c;
        lVar3 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar6 == 0) goto LAB_09054314;
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_090542fc;
      }
      lVar3 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0905429c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_044822ac(plVar8,*(long *)puVar2,0);
LAB_0905429c:
      auVar13 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_0984a658(*plVar9,auVar13._0_8_,auVar13._8_8_,0);
    } while( true );
  }
  uStack0000000000000018 = *(undefined8 *)(unaff_x19 + 0xc);
  iVar11 = -1;
  unaff_x19[0xc] = 0;
  unaff_x19[0xd] = 0;
  *unaff_x19 = -1;
  goto LAB_09054464;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_090542fc:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar4 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_09054330;
    }
  }
LAB_09054314:
  puVar4 = (undefined8 *)FUN_044822ac(plVar8,*(long *)PTR_DAT_09f1f008,0);
LAB_09054330:
  (*(code *)*puVar4)(plVar8,puVar4[1]);
LAB_0905433c:
  if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_0984afbc(*plVar9,*(undefined4 *)(lVar12 + 0x28),0);
  if ((*(long *)(lVar12 + 0x30) != 0) &&
     (((uVar6 = thunk_FUN_078b3114(*(undefined8 *)(lVar12 + 0x18),*(undefined8 *)PTR_DAT_09f20c90,0)
       , (uVar6 & 1) != 0 ||
       (uVar6 = thunk_FUN_078b3114(*(undefined8 *)(lVar12 + 0x18),*(undefined8 *)PTR_DAT_09f20d78,0)
       , (uVar6 & 1) != 0)) ||
      (uVar6 = thunk_FUN_078b3114(*(undefined8 *)(lVar12 + 0x18),*(undefined8 *)PTR_DAT_09f22ec0,0),
      (uVar6 & 1) != 0)))) {
    lVar3 = *plVar9;
    uVar10 = *(undefined8 *)(lVar12 + 0x30);
    uVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20e00);
    FUN_0984b468(uVar5,uVar10,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_098488b8(lVar3,uVar5,0);
  }
  lVar3 = *plVar9;
  uVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20db0);
  FUN_0984792c(uVar5,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_098487f0(lVar3,uVar5,0);
  if (*(long *)(lVar12 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_09848d40(*plVar9,0);
  uStack0000000000000018 = FUN_09054894();
  uVar6 = FUN_067804ac(&stack0x00000018,*(undefined8 *)PTR_DAT_09fc1b90);
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = uStack0000000000000018;
    thunk_FUN_044bb4b4(unaff_x19 + 0xc,0);
    if (*(int *)(*(long *)PTR_DAT_09fc1b30 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_04911d1c(unaff_x19 + 2,&stack0x00000018);
    return;
  }
LAB_09054464:
  uVar5 = FUN_067804f0(&stack0x00000018,*(undefined8 *)PTR_DAT_09fc1b88);
  if ((iVar11 < 0) && (plVar9 = *(long **)(unaff_x19 + 10), plVar9 != (long *)0x0)) {
    lVar12 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar4 = (undefined8 *)(lVar12 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_09054544;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar9,*(long *)PTR_DAT_09f1f008,0);
LAB_09054544:
    (*(code *)*puVar4)(plVar9,puVar4[1]);
  }
  *unaff_x19 = -2;
  if (*(int *)(*(long *)PTR_DAT_09fc1b30 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_066f3a60(unaff_x19 + 2,uVar5,*(undefined8 *)PTR_DAT_09fc1b80);
  return;
}


