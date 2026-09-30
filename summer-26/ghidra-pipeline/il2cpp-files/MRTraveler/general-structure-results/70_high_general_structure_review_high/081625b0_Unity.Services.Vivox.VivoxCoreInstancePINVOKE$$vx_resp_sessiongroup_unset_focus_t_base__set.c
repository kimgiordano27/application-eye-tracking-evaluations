/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_unset_focus_t_base__set
ENTRY_POINT: 081625b0
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_unset_focus_t_base__set
               (void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int in_w8;
  long lVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x24;
  long *plVar10;
  undefined8 in_stack_00000008;
  
  plVar10 = *(long **)(unaff_x24 + 0x210);
  if (in_w8 == 0) {
    in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0xc);
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    uVar2 = FUN_06f7ad2c(*(undefined8 *)(unaff_x19 + 8),0);
    if ((uVar2 & 1) != 0) {
      thunk_FUN_03ce5214(PTR_DAT_08e80470);
      uVar3 = thunk_FUN_03cf5234();
      uVar8 = thunk_FUN_03ce5214(PTR_DAT_08f04a78);
      uVar5 = thunk_FUN_03ce5214(PTR_DAT_08f04a38);
      FUN_070660f4(uVar3,uVar8,uVar5,0);
      uVar8 = thunk_FUN_03ce5214(PTR_DAT_08f04ca8);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar3,uVar8);
    }
    uVar8 = *(undefined8 *)(unaff_x19 + 8);
    uVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f04c90);
    FUN_08178320(uVar3,uVar8,0,0,0,0);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    plVar9 = *(long **)(unaff_x20 + 0x10);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar6 = *plVar9;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08e83800) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_08162670;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e83800,0);
LAB_08162670:
    plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
    uVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f04c88);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar6 = *plVar9;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f04a00) {
          lVar6 = lVar6 + (long)(*piVar7 + 0xc) * 0x10 + 0x138;
          goto LAB_081626f0;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    lVar6 = FUN_03cf1348(plVar9,*(long *)PTR_DAT_08f04a00,0xc);
LAB_081626f0:
    FUN_04d6ed0c(uVar3,plVar9,*(undefined8 *)(lVar6 + 8),0);
    lVar6 = FUN_048bd7d8();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = FUN_05c0b91c(lVar6,*(undefined8 *)PTR_DAT_08f04a20);
    uVar2 = FUN_05ac7d38(&stack0x00000008,*(undefined8 *)PTR_DAT_08f04a18);
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000008;
      thunk_FUN_03d233cc(unaff_x19 + 0xc,0);
      if (*(int *)(*plVar10 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_04183290(unaff_x19 + 2,&stack0x00000008);
      return;
    }
  }
  lVar6 = FUN_05ac7d7c(&stack0x00000008,*(undefined8 *)PTR_DAT_08f04a10);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (unaff_x20 != 0) {
    FUN_0815da00();
    uVar3 = *(undefined8 *)(lVar6 + 0x20);
    *unaff_x19 = 0xfffffffe;
    puVar1 = PTR_DAT_08e7c2e8;
    if (*(int *)(*plVar10 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_063c7630(unaff_x19 + 2,uVar3,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


