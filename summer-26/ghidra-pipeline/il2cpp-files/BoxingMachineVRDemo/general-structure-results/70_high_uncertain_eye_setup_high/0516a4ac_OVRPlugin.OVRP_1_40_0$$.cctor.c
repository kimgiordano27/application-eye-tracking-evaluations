/*
FUNCTION_NAME: OVRPlugin.OVRP_1_40_0$$.cctor
ENTRY_POINT: 0516a4ac
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_40_0___cctor(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x25;
  long *unaff_x26;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x26) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_0516a4fc;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_0516a4fc:
  lVar2 = (*(code *)*puVar1)();
  if (lVar2 != 0) {
                    /* try { // try from 0516a514 to 0526a5cb has its CatchHandler @ 0516a514
                       catch() { ... } // from try @ 0516a514 with catch @ 0516a514
                       catch() { ... } // from try @ 0516a5f4 with catch @ 0516a514
                       catch() { ... } // from try @ 0516a630 with catch @ 0516a514
                       catch() { ... } // from try @ 0516a678 with catch @ 0516a514 */
    return;
  }
  lVar2 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x25) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xb) * 0x10 + 0x138);
        goto LAB_0516a594;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_0516a594:
  (*(code *)*puVar1)();
  lVar2 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x26) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_0516a5fc;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_0516a5fc:
                    /* WARNING: Could not recover jumptable at 0x0516a61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


