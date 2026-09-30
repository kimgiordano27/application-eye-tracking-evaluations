/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$.cctor
ENTRY_POINT: 0569e42c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0569e620) */
/* WARNING: Removing unreachable block (ram,0x0569e614) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16] OVRPlugin_OVRP_1_21_0___cctor(ulong param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  long unaff_x21;
  long *plVar8;
  undefined8 uVar9;
  
  plVar8 = *(long **)(unaff_x21 + 0x928);
  if ((param_1 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a19970);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(PTR_DAT_06a19928);
    *(undefined1 *)(unaff_x20 + 0x892) = 1;
  }
  puVar1 = PTR_DAT_069fbff0;
  plVar2 = (long *)FUN_0539dd78(0);
  lVar3 = *plVar8;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar3 = *plVar8;
  }
  uVar9 = **(undefined8 **)(lVar3 + 0xb8);
  plVar8 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a19970);
  FUN_05394ea8(plVar8,uVar9,plVar2,1,0);
  FUN_0569e6d8();
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_05395314(plVar8,0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
  FUN_059c8114();
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    lVar3 = *(long *)puVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0569e57c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02dd004c(plVar8,lVar3,0);
LAB_0569e57c:
    (*(code *)*puVar4)(plVar8,puVar4[1]);
  }
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    lVar3 = *(long *)puVar1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto OVRPlugin_OVRP_1_28_0__ovrp_EnqueueSetupLayer2;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02dd004c(plVar2,lVar3,0);
OVRPlugin_OVRP_1_28_0__ovrp_EnqueueSetupLayer2:
    (*(code *)*puVar4)(plVar2,puVar4[1]);
  }
  return ZEXT816(0);
}


