/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_account_get_session_fonts_t_session_font_count_get
ENTRY_POINT: 09054208
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x09054604) */
/* WARNING: Removing unreachable block (ram,0x09054348) */
/* WARNING: Removing unreachable block (ram,0x0905448c) */
/* WARNING: Removing unreachable block (ram,0x09054618) */
/* WARNING: Removing unreachable block (ram,0x0905459c) */
/* WARNING: Removing unreachable block (ram,0x090545c4) */
/* WARNING: Removing unreachable block (ram,0x090545c8) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_account_get_session_fonts_t_session_font_count_get
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong in_x9;
  long in_x10;
  int *piVar5;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar6;
  long *unaff_x23;
  undefined8 uVar7;
  int unaff_w24;
  long unaff_x25;
  undefined1 auVar8 [16];
  undefined8 in_stack_00000018;
  
  do {
    piVar5 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_09054240;
      }
      in_x9 = in_x9 - 1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_044822ac();
LAB_09054240:
      uVar2 = (*(code *)*puVar1)();
      if ((uVar2 & 1) == 0) {
        if ((-1 < unaff_w24) || (unaff_x22 == (long *)0x0)) goto LAB_0905433c;
        lVar4 = *unaff_x22;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 == 0) goto LAB_09054314;
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_090542fc;
      }
      lVar4 = *unaff_x22;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x23) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0905429c;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_044822ac();
LAB_0905429c:
      auVar8 = (*(code *)*puVar1)();
      if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_0984a658(*unaff_x20,auVar8._0_8_,auVar8._8_8_,0);
      param_1 = *unaff_x22;
      param_3 = *unaff_x21;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
LAB_090542fc:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_09054330;
    }
  }
LAB_09054314:
  puVar1 = (undefined8 *)FUN_044822ac();
LAB_09054330:
  (*(code *)*puVar1)();
LAB_0905433c:
  if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_0984afbc(*unaff_x20,*(undefined4 *)(unaff_x25 + 0x28),0);
  if ((*(long *)(unaff_x25 + 0x30) != 0) &&
     (((uVar2 = thunk_FUN_078b3114(*(undefined8 *)(unaff_x25 + 0x18),*(undefined8 *)PTR_DAT_09f20c90
                                   ,0), (uVar2 & 1) != 0 ||
       (uVar2 = thunk_FUN_078b3114(*(undefined8 *)(unaff_x25 + 0x18),*(undefined8 *)PTR_DAT_09f20d78
                                   ,0), (uVar2 & 1) != 0)) ||
      (uVar2 = thunk_FUN_078b3114(*(undefined8 *)(unaff_x25 + 0x18),*(undefined8 *)PTR_DAT_09f22ec0,
                                  0), (uVar2 & 1) != 0)))) {
    lVar4 = *unaff_x20;
    uVar7 = *(undefined8 *)(unaff_x25 + 0x30);
    uVar3 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20e00);
    FUN_0984b468(uVar3,uVar7,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_098488b8(lVar4,uVar3,0);
  }
  lVar4 = *unaff_x20;
  uVar3 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f20db0);
  FUN_0984792c(uVar3,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  FUN_098487f0(lVar4,uVar3,0);
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
  uVar2 = FUN_067804ac(&stack0x00000018,*(undefined8 *)PTR_DAT_09fc1b90);
  if ((uVar2 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
    thunk_FUN_044bb4b4(unaff_x19 + 0xc,0);
    if (*(int *)(*(long *)PTR_DAT_09fc1b30 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_04911d1c(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    uVar3 = FUN_067804f0(&stack0x00000018,*(undefined8 *)PTR_DAT_09fc1b88);
    if ((unaff_w24 < 0) && (plVar6 = *(long **)(unaff_x19 + 10), plVar6 != (long *)0x0)) {
      lVar4 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09f1f008) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_09054544;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar1 = (undefined8 *)FUN_044822ac(plVar6,*(long *)PTR_DAT_09f1f008,0);
LAB_09054544:
      (*(code *)*puVar1)(plVar6,puVar1[1]);
    }
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*(long *)PTR_DAT_09fc1b30 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_066f3a60(unaff_x19 + 2,uVar3,*(undefined8 *)PTR_DAT_09fc1b80);
  }
  return;
}


