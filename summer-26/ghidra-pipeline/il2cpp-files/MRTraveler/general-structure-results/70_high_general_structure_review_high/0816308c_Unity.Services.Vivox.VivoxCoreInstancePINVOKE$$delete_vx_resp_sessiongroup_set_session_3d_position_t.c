/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_resp_sessiongroup_set_session_3d_position_t
ENTRY_POINT: 0816308c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_resp_sessiongroup_set_session_3d_position_t
               (ulong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000008;
  
  do {
    if ((param_1 & 0xffffffff) <= unaff_x26) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    uVar1 = *(undefined4 *)(unaff_x27 + unaff_x26 * 4);
    uVar4 = thunk_FUN_03cf5234(*unaff_x28);
    FUN_08169474(uVar4,uVar1,0);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar6 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar2 = *(uint *)(unaff_x22 + 0x18);
    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      puVar5 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
      *puVar5 = uVar4;
      thunk_FUN_03d233cc(puVar5,uVar4);
    }
    else {
      FUN_05212cf4();
    }
    param_1 = (ulong)*(uint *)(unaff_x25 + 0x18);
    unaff_x26 = unaff_x26 + 1;
  } while ((long)unaff_x26 < (long)(int)*(uint *)(unaff_x25 + 0x18));
  uVar10 = *(undefined8 *)(unaff_x19 + 10);
  uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f04d10);
  FUN_08179484(uVar4,uVar10);
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
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e83800) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_081631c8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_03cf1348(plVar9,*(long *)PTR_DAT_08e83800,0);
LAB_081631c8:
  plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
  uVar4 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f04cf0);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f04a00) {
        lVar6 = lVar6 + (long)(*piVar8 + 0xe) * 0x10 + 0x138;
        goto LAB_08163248;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar6 = FUN_03cf1348(plVar9,*(long *)PTR_DAT_08f04a00,0xe);
LAB_08163248:
  FUN_04d6ed0c(uVar4,plVar9,*(undefined8 *)(lVar6 + 8),0);
  lVar6 = FUN_048bd7d8();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  in_stack_00000008 = FUN_05c0b91c(lVar6,*(undefined8 *)PTR_DAT_08f04d30);
  uVar7 = FUN_05ac7d38(&stack0x00000008,*(undefined8 *)PTR_DAT_08f04d28);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000008;
    thunk_FUN_03d233cc(unaff_x19 + 0xe,0);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_041834ac(unaff_x19 + 2,&stack0x00000008);
  }
  else {
    lVar6 = FUN_05ac7d7c(&stack0x00000008,*(undefined8 *)PTR_DAT_08f04d20);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar4 = *(undefined8 *)(lVar6 + 0x20);
    *unaff_x19 = 0xfffffffe;
    puVar3 = PTR_DAT_08f04ce8;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    FUN_063c7630(unaff_x19 + 2,uVar4,*(undefined8 *)puVar3);
  }
  return;
}


