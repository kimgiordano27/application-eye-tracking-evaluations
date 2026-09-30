/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_unset_focus_t_base__get
ENTRY_POINT: 08162634
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_unset_focus_t_base__get
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_08162670;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar2 = (undefined8 *)FUN_03cf1348();
LAB_08162670:
  plVar3 = (long *)(*(code *)*puVar2)();
  uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f04c88);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar5 = *plVar3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f04a00) {
        lVar5 = lVar5 + (long)(*piVar7 + 0xc) * 0x10 + 0x138;
        goto LAB_081626f0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  lVar5 = FUN_03cf1348(plVar3,*(long *)PTR_DAT_08f04a00,0xc);
LAB_081626f0:
  FUN_04d6ed0c(uVar4,plVar3,*(undefined8 *)(lVar5 + 8),0);
  lVar5 = FUN_048bd7d8();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  in_stack_00000008 = FUN_05c0b91c(lVar5,*(undefined8 *)PTR_DAT_08f04a20);
  uVar6 = FUN_05ac7d38(&stack0x00000008,*(undefined8 *)PTR_DAT_08f04a18);
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000008;
    thunk_FUN_03d233cc(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_04183290(unaff_x19 + 2,&stack0x00000008);
  }
  else {
    lVar5 = FUN_05ac7d7c(&stack0x00000008,*(undefined8 *)PTR_DAT_08f04a10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_0815da00();
    uVar4 = *(undefined8 *)(lVar5 + 0x20);
    *unaff_x19 = 0xfffffffe;
    puVar1 = PTR_DAT_08e7c2e8;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_063c7630(unaff_x19 + 2,uVar4,*(undefined8 *)puVar1);
  }
  return;
}


