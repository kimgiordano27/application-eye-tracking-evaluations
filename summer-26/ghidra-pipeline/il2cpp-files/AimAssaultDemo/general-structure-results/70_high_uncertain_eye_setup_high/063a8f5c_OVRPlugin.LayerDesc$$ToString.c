/*
FUNCTION_NAME: OVRPlugin.LayerDesc$$ToString
ENTRY_POINT: 063a8f5c
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


void OVRPlugin_LayerDesc__ToString(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long in_x9;
  ulong uVar4;
  int *piVar5;
  long *unaff_x22;
  long *unaff_x23;
  
                    /* try { // try from 063a8f60 to 064a8f63 has its CatchHandler @ 063a8fe4 */
  piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
                    /* try { // try from 063a8f68 to 064a8f7b has its CatchHandler @ 063a8fdc */
    if (*(long *)(piVar5 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*piVar5 + 2) * 0x10 + 0x138);
      goto LAB_063a8f9c;
    }
    in_x9 = in_x9 + -1;
    piVar5 = piVar5 + 4;
  } while (in_x9 != 0);
                    /* try { // try from 063a8f7c to 064a8fd3 has its CatchHandler @ 063a8e74 */
  puVar1 = (undefined8 *)FUN_0377596c();
LAB_063a8f9c:
  lVar2 = (*(code *)*puVar1)();
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      if (*(int *)(lVar2 + 0x18) != 1) {
                    /* try { // try from 063a8ffc to 064a9013 has its CatchHandler @ 063a9048 */
                    /* try { // try from 063a9014 to 064a9037 has its CatchHandler @ 063a8e74 */
        FUN_078d9dec();
        return;
      }
      lVar2 = *unaff_x23;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
                    /* try { // try from 063a8fd4 to 064a8fd7 has its CatchHandler @ 063a8fe0 */
                    /* try { // try from 063a8fd8 to 064a8ffb has its CatchHandler @ 063a8e74 */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063a8f68 with catch @ 063a8fdc
                        */
          if (*(long *)(piVar5 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_063a9628;
          }
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063a8fd4 with catch @ 063a8fe0
                        */
          uVar4 = uVar4 - 1;
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 063a8f60 with catch @ 063a8fe4
                        */
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_0377596c();
LAB_063a9628:
                    /* try { // try from 063a9630 to 064a964b has its CatchHandler @ 063a978c */
      lVar2 = (*(code *)*puVar1)();
      if (lVar2 == 0) goto LAB_063a972c;
      uVar3 = FUN_049cec24(lVar2,0,*(undefined8 *)PTR_DAT_07db6c18);
      FUN_063a8640(uVar3,uVar3);
      lVar2 = *unaff_x23;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_063a96ac;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_0377596c();
LAB_063a96ac:
      (*(code *)*puVar1)();
      FUN_063a97c8();
    }
    return;
  }
LAB_063a972c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


