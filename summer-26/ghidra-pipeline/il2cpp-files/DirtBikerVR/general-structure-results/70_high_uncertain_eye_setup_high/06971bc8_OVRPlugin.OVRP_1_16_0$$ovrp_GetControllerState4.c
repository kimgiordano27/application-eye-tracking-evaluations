/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_GetControllerState4
ENTRY_POINT: 06971bc8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_GetControllerState4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *plVar10;
  long unaff_x25;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(param_1);
  }
  FUN_0675ff58(unaff_x25 + 0x20,0);
  uVar3 = FUN_067690d8();
  if ((uVar3 & 1) == 0) {
    plVar4 = (long *)(**(code **)(*unaff_x22 + 0x268))();
    if (plVar4 == (long *)0x0) goto LAB_06971e68;
    uVar3 = (**(code **)(*plVar4 + 0x5b8))(plVar4,*(undefined8 *)(*plVar4 + 0x5c0));
    if ((uVar3 & 1) != 0) {
      plVar4 = (long *)(**(code **)(*unaff_x22 + 0x268))();
      lVar7 = *unaff_x20;
      if ((lVar7 == 0) || (*(undefined4 *)(lVar7 + 0x48) = 0, plVar4 == (long *)0x0))
      goto LAB_06971e68;
      lVar6 = (**(code **)(*plVar4 + 0x6f8))(plVar4,0x18,*(undefined8 *)(*plVar4 + 0x700));
      if (lVar6 == 0) goto LAB_06971e68;
      lVar8 = *unaff_x20;
      *(float *)(lVar7 + 0x4c) = (float)(*(int *)(lVar6 + 0x18) + -1);
      if (lVar8 == 0) goto LAB_06971e68;
      *(undefined4 *)(lVar8 + 0x50) = 0x3f800000;
      puVar2 = PTR_DAT_084883a0;
      if (*(long *)(lVar8 + 0x30) == 0) goto LAB_06971e68;
      lVar7 = *(long *)(*(long *)(lVar8 + 0x30) + 0x100);
      uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
      FUN_07cb26a0();
      if (lVar7 == 0) goto LAB_06971e68;
      FUN_07cb2770(lVar7,uVar5,0);
      if ((*unaff_x20 == 0) || (lVar7 = *(long *)(*unaff_x20 + 0x38), lVar7 == 0))
      goto LAB_06971e68;
      lVar7 = *(long *)(lVar7 + 0x100);
      uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
      goto LAB_06971dbc;
    }
  }
  else {
    if (*unaff_x20 == 0) goto LAB_06971e68;
    plVar10 = *(long **)(*unaff_x20 + 0x28);
    plVar4 = (long *)(**(code **)(*unaff_x22 + 0x2f8))();
    if (plVar4 == (long *)0x0) goto LAB_06971e68;
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    if (plVar10 == (long *)0x0) goto LAB_06971e68;
    (**(code **)(*plVar10 + 0x5e8))(plVar10,uVar5,*(undefined8 *)(*plVar10 + 0x5f0));
    puVar2 = PTR_DAT_084883a0;
    if ((*unaff_x20 == 0) || (lVar7 = *(long *)(*unaff_x20 + 0x30), lVar7 == 0)) goto LAB_06971e68;
    lVar7 = *(long *)(lVar7 + 0x100);
    uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084883a0);
    FUN_07cb26a0();
    if (lVar7 == 0) goto LAB_06971e68;
    FUN_07cb2770(lVar7,uVar5,0);
    if ((*unaff_x20 == 0) || (lVar7 = *(long *)(*unaff_x20 + 0x38), lVar7 == 0)) goto LAB_06971e68;
    lVar7 = *(long *)(lVar7 + 0x100);
    uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
LAB_06971dbc:
    FUN_07cb26a0();
    if (lVar7 == 0) goto LAB_06971e68;
    FUN_07cb2770(lVar7,uVar5,0);
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar6 = *unaff_x20;
    lVar9 = *(long *)PTR_DAT_084b72c0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *plVar4 = lVar6;
        thunk_FUN_03afed3c(plVar4);
      }
      else {
        FUN_04de85b0(lVar7,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
LAB_06971e68:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


