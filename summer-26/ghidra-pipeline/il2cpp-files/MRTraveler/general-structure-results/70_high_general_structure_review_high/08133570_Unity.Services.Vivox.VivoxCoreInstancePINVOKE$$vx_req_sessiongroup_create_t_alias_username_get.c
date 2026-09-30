/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_create_t_alias_username_get
ENTRY_POINT: 08133570
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x081339b0) */

long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_t_alias_username_get
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  undefined1 auVar12 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  FUN_03c8f898(*(undefined8 *)(param_1 + 400));
  FUN_03c8f898(PTR_DAT_08e78878);
  *(undefined1 *)(unaff_x20 + 0xdb0) = 1;
                    /* try { // try from 081335ac to 082335b3 has its CatchHandler @ 0813368c */
  switch(*(undefined4 *)(unaff_x19 + 0x10)) {
  case 0:
    lVar5 = FUN_08825b80(*(undefined8 *)(unaff_x19 + 0x18),0);
                    /* try { // try from 081335c8 to 082335d7 has its CatchHandler @ 08133690 */
    uVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e781a0);
                    /* try { // try from 081335d8 to 082336a7 has its CatchHandler @ 081334cc */
    FUN_088236d4(uVar8,0);
    if (lVar5 == 0) goto LAB_081339a8;
    goto LAB_08133708;
  case 1:
    lVar5 = FUN_08825adc(*(undefined8 *)(unaff_x19 + 0x18),0);
    break;
  default:
    in_stack_00000008 = thunk_FUN_03ce5214(PTR_DAT_08f03250);
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000018 = *(undefined4 *)(unaff_x19 + 0x10);
    uVar8 = FUN_07138048(&stack0x00000008,0);
    uVar9 = thunk_FUN_03ce5214(PTR_DAT_08f03338);
    uVar8 = FUN_06f683f8(uVar9,uVar8,0);
    thunk_FUN_03ce5214(PTR_DAT_08e76350);
    uVar9 = thunk_FUN_03cf5234();
    FUN_07064ba8(uVar9,uVar8,0);
    uVar8 = thunk_FUN_03ce5214(PTR_DAT_08f03340);
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar9,uVar8);
  case 5:
    uVar4 = FUN_06f74e14(*(undefined8 *)(unaff_x19 + 0x28),0);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x18);
    if ((uVar4 & 1) == 0) {
      lVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e781a8);
      puVar7 = (undefined8 *)PTR_DAT_08e79190;
      goto LAB_0813367c;
    }
    lVar5 = FUN_08825d88(uVar8,**(undefined8 **)(*(long *)PTR_DAT_08e69d78 + 0xb8),0);
    break;
  case 6:
    uVar4 = FUN_06f74e14(*(undefined8 *)(unaff_x19 + 0x28),0);
    if ((uVar4 & 1) != 0) {
      thunk_FUN_03ce5214(PTR_DAT_08e76350);
      uVar8 = thunk_FUN_03cf5234();
      uVar9 = thunk_FUN_03ce5214(PTR_DAT_08f03348);
      FUN_07064ba8(uVar8,uVar9,0);
      uVar9 = thunk_FUN_03ce5214(PTR_DAT_08f03340);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar8,uVar9);
    }
    uVar8 = *(undefined8 *)(unaff_x19 + 0x18);
    lVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e781a8);
    puVar7 = (undefined8 *)PTR_DAT_08e82ee0;
LAB_0813367c:
    FUN_08824190(lVar5,uVar8,*puVar7,0);
    plVar6 = (long *)FUN_06f92ec0(0);
    if (plVar6 == (long *)0x0) goto LAB_081339a8;
    uVar8 = (**(code **)(*plVar6 + 0x268))
                      (plVar6,*(undefined8 *)(unaff_x19 + 0x28),*(undefined8 *)(*plVar6 + 0x270));
    uVar9 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e78850);
    FUN_08825cfc(uVar9,uVar8,0);
    if (lVar5 == 0) goto LAB_081339a8;
    FUN_0882453c(lVar5,uVar9,0);
    uVar8 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e781a0);
    FUN_088236d4(uVar8,0);
LAB_08133708:
    FUN_08824430(lVar5,uVar8,0);
  }
  uVar4 = FUN_06f74e14(*(undefined8 *)(unaff_x19 + 0x30),0);
  if ((uVar4 & 1) == 0) {
    if (lVar5 == 0) goto LAB_081339a8;
    FUN_088253a8(lVar5,*(undefined8 *)PTR_DAT_08e78878,*(undefined8 *)(unaff_x19 + 0x30),0);
  }
  plVar6 = *(long **)(unaff_x19 + 0x20);
  if (plVar6 != (long *)0x0) {
    lVar10 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e82e00) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_081337a4;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e82e00,0);
LAB_081337a4:
    plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    puVar2 = PTR_DAT_08e82e08;
    puVar1 = PTR_DAT_08e6a290;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar10 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_create;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar1,0);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_create_create:
      uVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar4 & 1) == 0) {
        if (plVar6 == (long *)0x0) break;
        lVar10 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar4 == 0) goto LAB_081338e0;
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_081338c8;
      }
      lVar10 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_08133870;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)puVar2,0);
LAB_08133870:
      auVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_088253a8(lVar5,auVar12._0_8_,auVar12._8_8_,0);
    } while( true );
  }
LAB_0813390c:
  plVar6 = *(long **)(unaff_x19 + 0x40);
  if (plVar6 != (long *)0x0) {
    lVar10 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e833e0) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_0813396c;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e833e0,1);
LAB_0813396c:
    uVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (lVar5 != 0) {
      FUN_0882598c(lVar5,uVar3,0);
      return lVar5;
    }
  }
LAB_081339a8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar11 = piVar11 + 4;
    if (uVar4 == 0) break;
LAB_081338c8:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_081338fc;
    }
  }
LAB_081338e0:
  puVar7 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e6a288,0);
LAB_081338fc:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  goto LAB_0813390c;
}


