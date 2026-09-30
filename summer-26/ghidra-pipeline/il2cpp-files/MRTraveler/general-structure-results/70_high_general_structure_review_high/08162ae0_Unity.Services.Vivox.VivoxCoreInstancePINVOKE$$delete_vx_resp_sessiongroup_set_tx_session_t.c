/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_resp_sessiongroup_set_tx_session_t
ENTRY_POINT: 08162ae0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_resp_sessiongroup_set_tx_session_t
               (undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar6;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  thunk_FUN_03cf5234(*param_1);
  FUN_08178be8();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  plVar6 = *(long **)(unaff_x20 + 0x10);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08e83800) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_08162b7c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_03cf1348(plVar6,*(long *)PTR_DAT_08e83800,0);
LAB_08162b7c:
  plVar6 = (long *)(*(code *)*puVar1)(plVar6,puVar1[1]);
  uVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f04cb8);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08f04a00) {
        lVar3 = lVar3 + (long)(*piVar5 + 0xd) * 0x10 + 0x138;
        goto LAB_08162bfc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  lVar3 = FUN_03cf1348(plVar6,*(long *)PTR_DAT_08f04a00,0xd);
LAB_08162bfc:
  FUN_04d6ed0c(uVar2,plVar6,*(undefined8 *)(lVar3 + 8),0);
  lVar3 = FUN_048bd440();
  if (lVar3 != 0) {
    in_stack_00000008 = FUN_05c0b91c(lVar3,*(undefined8 *)PTR_DAT_08e83818);
    uVar4 = FUN_05ac7d38(&stack0x00000008,*(undefined8 *)PTR_DAT_08e83810);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000008;
      thunk_FUN_03d233cc(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_04523d98(unaff_x19 + 2,&stack0x00000008);
    }
    else {
      FUN_05ac7d7c(&stack0x00000008,*(undefined8 *)PTR_DAT_08e83808);
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_0701e078(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


