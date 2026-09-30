/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_resp_sessiongroup_set_focus_t
ENTRY_POINT: 08162534
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_resp_sessiongroup_set_focus_t(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  int *unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 in_stack_00000008;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e83800);
  FUN_03c8f898(PTR_DAT_08f04c90);
  FUN_03c8f898(PTR_DAT_08f04a08);
  FUN_03c8f898(PTR_DAT_08f04a10);
  FUN_03c8f898(PTR_DAT_08f04a18);
  FUN_03c8f898(PTR_DAT_08f04a20);
  FUN_03c8f898(PTR_DAT_08f04c98);
  FUN_03c8f898(PTR_DAT_08f04ca0);
  *(undefined1 *)(unaff_x20 + 0xfa9) = 1;
  puVar1 = PTR_DAT_08e7c210;
  in_stack_00000008 = 0;
  lVar9 = *(long *)(unaff_x19 + 10);
  if (*unaff_x19 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    uVar3 = FUN_06f7ad2c(*(undefined8 *)(unaff_x19 + 8),0);
    if ((uVar3 & 1) != 0) {
      thunk_FUN_03ce5214(PTR_DAT_08e80470);
      uVar4 = thunk_FUN_03cf5234();
      uVar10 = thunk_FUN_03ce5214(PTR_DAT_08f04a78);
      uVar6 = thunk_FUN_03ce5214(PTR_DAT_08f04a38);
      FUN_070660f4(uVar4,uVar10,uVar6,0);
      uVar10 = thunk_FUN_03ce5214(PTR_DAT_08f04ca8);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar4,uVar10);
    }
    uVar10 = *(undefined8 *)(unaff_x19 + 8);
    uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f04c90);
    FUN_08178320(uVar4,uVar10,0,0,0,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    plVar11 = *(long **)(lVar9 + 0x10);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = *plVar11;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e83800) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_08162670;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_03cf1348(plVar11,*(long *)PTR_DAT_08e83800,0);
LAB_08162670:
    plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
    uVar10 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f04c88);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = *plVar11;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f04a00) {
          lVar7 = lVar7 + (long)(*piVar8 + 0xc) * 0x10 + 0x138;
          goto LAB_081626f0;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    lVar7 = FUN_03cf1348(plVar11,*(long *)PTR_DAT_08f04a00,0xc);
LAB_081626f0:
    FUN_04d6ed0c(uVar10,plVar11,*(undefined8 *)(lVar7 + 8),0);
    lVar7 = FUN_048bd7d8(lVar9,*(undefined8 *)PTR_DAT_08f04ca0,uVar10,uVar4,
                         *(undefined8 *)PTR_DAT_08f04c98);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = FUN_05c0b91c(lVar7,*(undefined8 *)PTR_DAT_08f04a20);
    uVar3 = FUN_05ac7d38(&stack0x00000008,*(undefined8 *)PTR_DAT_08f04a18);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000008;
      thunk_FUN_03d233cc(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_04183290(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  lVar7 = FUN_05ac7d7c(&stack0x00000008,*(undefined8 *)PTR_DAT_08f04a10);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (lVar9 != 0) {
    FUN_0815da00(lVar9,*(undefined8 *)(lVar7 + 0x20));
    uVar4 = *(undefined8 *)(lVar7 + 0x20);
    *unaff_x19 = -2;
    puVar2 = PTR_DAT_08e7c2e8;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_063c7630(unaff_x19 + 2,uVar4,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


