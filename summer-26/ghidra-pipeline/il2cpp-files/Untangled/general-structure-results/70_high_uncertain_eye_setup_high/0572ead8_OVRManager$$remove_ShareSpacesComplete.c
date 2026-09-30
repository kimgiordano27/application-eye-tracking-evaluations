/*
FUNCTION_NAME: OVRManager$$remove_ShareSpacesComplete
ENTRY_POINT: 0572ead8
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_ShareSpacesComplete(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  long *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar6;
  long *unaff_x25;
  
  iVar1 = (**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  if (iVar1 + -1 == unaff_w20) {
    lVar6 = 0;
  }
  else {
    lVar6 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0572eb58;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02eea86c();
LAB_0572eb58:
    lVar6 = (*(code *)*puVar2)();
  }
  if (unaff_x23 != 0) {
    *(long *)(unaff_x23 + 0x20) = lVar6;
    thunk_FUN_02f411dc((long *)(unaff_x23 + 0x20),lVar6);
  }
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x18) = unaff_x23;
    thunk_FUN_02f411dc((long *)(lVar6 + 0x18));
  }
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  *(undefined8 *)(unaff_x22 + 0x10) = 0;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x22 + 0x10),0);
  *(undefined8 *)(unaff_x22 + 0x18) = 0;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x22 + 0x18),0);
  *(undefined8 *)(unaff_x22 + 0x20) = 0;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x22 + 0x20),0);
  lVar6 = *unaff_x21;
  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x25) {
        puVar2 = (undefined8 *)(lVar6 + (long)(*piVar5 + 4) * 0x10 + 0x138);
        goto LAB_0572ec18;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02eea86c();
LAB_0572ec18:
  (*(code *)*puVar2)();
  if (unaff_x19[6] != 0) {
    uVar3 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3aef0);
    FUN_05fcf3e0(uVar3,2,unaff_w20,0);
    (**(code **)(*unaff_x19 + 0x618))();
  }
  if (unaff_x19[8] != 0) {
    uVar3 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d58898);
    FUN_06016cb8(uVar3,1);
                    /* WARNING: Could not recover jumptable at 0x0572ecc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x628))();
    return;
  }
  return;
}


