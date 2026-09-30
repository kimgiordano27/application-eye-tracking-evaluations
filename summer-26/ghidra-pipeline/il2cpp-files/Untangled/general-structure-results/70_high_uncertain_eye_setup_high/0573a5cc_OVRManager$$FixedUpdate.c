/*
FUNCTION_NAME: OVRManager$$FixedUpdate
ENTRY_POINT: 0573a5cc
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0573a7b0) */
/* WARNING: Removing unreachable block (ram,0x0573a7c0) */

undefined8 OVRManager__FixedUpdate(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *plVar12;
  long unaff_x20;
  
  plVar12 = *(long **)(unaff_x19 + 0x338);
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d06338);
    FUN_02f07e70(PTR_DAT_06d01f60);
    FUN_02f07e70(PTR_DAT_06d57af8);
    FUN_02f07e70(PTR_DAT_06d550c8);
    FUN_02f07e70(PTR_DAT_06d35ec8);
    *(undefined1 *)(unaff_x20 + 0x938) = 1;
  }
  puVar3 = PTR_DAT_06d550c8;
  puVar2 = PTR_DAT_06d35ec8;
  if (*(int *)(*plVar12 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar1 = PTR_DAT_06d01f60;
  uVar4 = FUN_055b5920(0);
  plVar12 = (long *)thunk_FUN_02ef1808(*(undefined8 *)puVar2);
  FUN_055888fc(plVar12,uVar4,0);
  plVar5 = (long *)thunk_FUN_02ef1808(*(undefined8 *)puVar3);
  FUN_056bb0f4(plVar5,plVar12,0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_056d0fe0(plVar5,param_2,0);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  uVar4 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
  uVar6 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d57af8);
  FUN_05747788(uVar6,uVar4,0xd,0);
  lVar9 = *plVar5;
  lVar8 = *(long *)puVar1;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar8) {
        puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_0573a724;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_02eea86c(plVar5,lVar8,0);
LAB_0573a724:
  (*(code *)*puVar7)(plVar5,puVar7[1]);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    lVar8 = *(long *)puVar1;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0573a788;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02eea86c(plVar12,lVar8,0);
LAB_0573a788:
    (*(code *)*puVar7)(plVar12,puVar7[1]);
  }
  return uVar6;
}


