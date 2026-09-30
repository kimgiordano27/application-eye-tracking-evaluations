/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_account_get_session_fonts_t_session_font_count_set
ENTRY_POINT: 09054184
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x09054604) */
/* WARNING: Removing unreachable block (ram,0x09054348) */
/* WARNING: Removing unreachable block (ram,0x0905448c) */
/* WARNING: Removing unreachable block (ram,0x09054618) */
/* WARNING: Removing unreachable block (ram,0x0905459c) */
/* WARNING: Removing unreachable block (ram,0x090545c4) */
/* WARNING: Removing unreachable block (ram,0x090545c8) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_account_get_session_fonts_t_session_font_count_set
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  undefined4 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  int unaff_w24;
  long unaff_x25;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000018;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_090541d0;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_044822ac();
LAB_090541d0:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = PTR_DAT_09f2bbb8;
  puVar1 = PTR_DAT_09f1f018;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  do {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_09054240;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar1,0);
LAB_09054240:
    uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      if ((-1 < unaff_w24) || (plVar4 == (long *)0x0)) goto LAB_0905433c;
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_09054314;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0905429c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)puVar2,0);
LAB_0905429c:
    auVar10 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_0984a658(*unaff_x20,auVar10._0_8_,auVar10._8_8_,0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_09054330;
    }
  }
LAB_09054314:
  puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f1f008,0);
LAB_09054330:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_0905433c:
  if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_0984afbc(*unaff_x20,*(undefined4 *)(unaff_x25 + 0x28),0);
  if ((*(long *)(unaff_x25 + 0x30) != 0) &&
     (((uVar7 = thunk_FUN_078b3114(*(undefined8 *)(unaff_x25 + 0x18),*(undefined8 *)PTR_DAT_09f20c90
                                   ,0), (uVar7 & 1) != 0 ||
       (uVar7 = thunk_FUN_078b3114(*(undefined8 *)(unaff_x25 + 0x18),*(undefined8 *)PTR_DAT_09f20d78
                                   ,0), (uVar7 & 1) != 0)) ||
      (uVar7 = thunk_FUN_078b3114(*(undefined8 *)(unaff_x25 + 0x18),*(undefined8 *)PTR_DAT_09f22ec0,
                                  0), (uVar7 & 1) != 0)))) {
    lVar6 = *unaff_x20;
    uVar9 = *(undefined8 *)(unaff_x25 + 0x30);
    uVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20e00);
    FUN_0984b468(uVar5,uVar9,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_098488b8(lVar6,uVar5,0);
  }
  lVar6 = *unaff_x20;
  uVar5 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20db0);
  FUN_0984792c(uVar5,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_098487f0(lVar6,uVar5,0);
  if (*(long *)(unaff_x25 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_09848d40(*unaff_x20,0);
  in_stack_00000018 = FUN_09054894();
  uVar7 = FUN_067804ac(&stack0x00000018,*(undefined8 *)PTR_DAT_09fc1b90);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
    thunk_FUN_044bb4b4(unaff_x19 + 0xc,0);
    if (*(int *)(*(long *)PTR_DAT_09fc1b30 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_04911d1c(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    uVar5 = FUN_067804f0(&stack0x00000018,*(undefined8 *)PTR_DAT_09fc1b88);
    if ((unaff_w24 < 0) && (plVar4 = *(long **)(unaff_x19 + 10), plVar4 != (long *)0x0)) {
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f008) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_09054544;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_044822ac(plVar4,*(long *)PTR_DAT_09f1f008,0);
LAB_09054544:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
    }
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*(long *)PTR_DAT_09fc1b30 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_066f3a60(unaff_x19 + 2,uVar5,*(undefined8 *)PTR_DAT_09fc1b80);
  }
  return;
}


