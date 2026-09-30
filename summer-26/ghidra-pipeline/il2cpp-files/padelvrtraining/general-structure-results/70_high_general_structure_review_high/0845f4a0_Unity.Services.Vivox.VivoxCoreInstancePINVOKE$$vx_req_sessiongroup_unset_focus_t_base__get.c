/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_unset_focus_t_base__get
ENTRY_POINT: 0845f4a0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_unset_focus_t_base__get
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_0927d2a8;
  if (param_1 == 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
    lVar2 = *(long *)PTR_DAT_0927d2a8;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar2 = *(long *)puVar1;
    }
    lVar7 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (lVar7 == 0) {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar2 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar2 + 0xb8);
      lVar7 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927d288);
      FUN_054b37cc(lVar7,uVar8,*(undefined8 *)PTR_DAT_0927d298,0);
      plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar3 = lVar7;
      thunk_FUN_03d1023c(plVar3,lVar7);
      lVar2 = *(long *)puVar1;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
      lVar2 = *(long *)puVar1;
    }
    lVar9 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
    if (lVar9 == 0) {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar2 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar2 + 0xb8);
      lVar9 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_0927d288);
      FUN_054b37cc(lVar9,uVar8,*(undefined8 *)PTR_DAT_0927d2a0,0);
      plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar3 = lVar9;
      thunk_FUN_03d1023c(plVar3,lVar9);
    }
    uVar6 = FUN_04f1f824(uVar6,lVar7,lVar9,*(undefined8 *)PTR_DAT_0927d280);
    plVar3 = *(long **)(unaff_x20 + 0x20);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    lVar2 = *plVar3;
    lVar7 = *(long *)PTR_DAT_0927d290;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)(lVar7 + 0x20)) {
          lVar2 = lVar2 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
          goto LAB_0845f624;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    lVar2 = FUN_03d8f370(plVar3);
LAB_0845f624:
    lVar2 = thunk_FUN_03d6c7f0(*(undefined8 *)(lVar2 + 8),lVar7);
    lVar2 = (**(code **)(lVar2 + 8))(plVar3,uVar6,lVar2);
    *unaff_x19 = lVar2;
    thunk_FUN_03d1023c();
    param_1 = *unaff_x19;
  }
  return param_1;
}


