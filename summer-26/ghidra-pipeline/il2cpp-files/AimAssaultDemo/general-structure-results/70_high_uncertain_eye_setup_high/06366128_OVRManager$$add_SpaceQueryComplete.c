/*
FUNCTION_NAME: OVRManager$$add_SpaceQueryComplete
ENTRY_POINT: 06366128
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


undefined8 OVRManager__add_SpaceQueryComplete(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x28;
  undefined8 in_stack_00000018;
  
  FUN_06331298();
  if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar1 = FUN_0625b9c4(in_stack_00000018,0,0);
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)FUN_063655ac();
    if (plVar2 == (long *)0x0) goto LAB_06366490;
    lVar5 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_063666f4;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar2,*unaff_x28,0);
LAB_063666f4:
    lVar5 = (*(code *)*puVar3)(plVar2,in_stack_00000018,puVar3[1]);
    if (lVar5 == 0) goto LAB_06366490;
    if (*(int *)(lVar5 + 0x24) == 3) {
      lVar5 = *(long *)(unaff_x19 + 0x30);
      uVar4 = FUN_06365b68();
      if (lVar5 == 0) goto LAB_06366490;
      puVar3 = (undefined8 *)(lVar5 + 0xc0);
      *puVar3 = uVar4;
      thunk_FUN_037aeb94(puVar3,uVar4);
    }
  }
  lVar5 = FUN_0636579c();
  if (lVar5 != 0) {
    return *(undefined8 *)(lVar5 + 0x18);
  }
LAB_06366490:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


