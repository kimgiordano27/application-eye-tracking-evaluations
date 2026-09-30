/*
FUNCTION_NAME: OVRManager$$remove_SpaceQueryComplete
ENTRY_POINT: 0636621c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__remove_SpaceQueryComplete(long *param_1)

{
  ulong uVar1;
  int *piVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  
  uVar6 = *unaff_x20;
  if (*(int *)(*param_1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_04056a1c(uVar6,*(undefined8 *)PTR_DAT_07db5568);
  uVar6 = *unaff_x20;
  if (*(int *)(*(long *)PTR_DAT_07d96680 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar6 = FUN_06331088(uVar6,0);
  if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70(*(long *)(PTR_DAT_07d86548 + 0xe0));
  }
  uVar1 = FUN_0625b9c4(uVar6,0,0);
  if ((uVar1 & 1) != 0) {
    lVar3 = *(long *)(unaff_x19 + 0x30);
    uVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db52a0);
    FUN_049ce6c0(uVar6,*(undefined8 *)PTR_DAT_07db52a8);
    if (lVar3 == 0) goto LAB_06366490;
    puVar4 = (undefined8 *)(lVar3 + 0x98);
    *puVar4 = uVar6;
    thunk_FUN_037aeb94(puVar4,uVar6);
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_06366490;
    plVar5 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0x98);
    uVar6 = FUN_06365b68();
    if (plVar5 == (long *)0x0) goto LAB_06366490;
    lVar3 = *plVar5;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar2 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) == *(long *)PTR_DAT_07db52e0) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar2 + 2) * 0x10 + 0x138);
          goto LAB_06366754;
        }
        uVar1 = uVar1 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar1 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07db52e0,2);
LAB_06366754:
    (*(code *)*puVar4)(plVar5,uVar6,puVar4[1]);
  }
  lVar3 = FUN_0636579c();
  if (lVar3 != 0) {
    return *(undefined8 *)(lVar3 + 0x18);
  }
LAB_06366490:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


