/*
FUNCTION_NAME: OVRPlugin.Quatf$$ToString
ENTRY_POINT: 063a7d90
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Quatf__ToString(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long in_x9;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x24;
  long *unaff_x26;
  
  do {
    in_x9 = in_x9 + -1;
                    /* try { // try from 063a7d94 to 064a7d9b has its CatchHandler @ 063a7e70 */
    piVar5 = in_x10 + 4;
    if (in_x9 == 0) {
                    /* try { // try from 063a7d9c to 064a7dd3 has its CatchHandler @ 063a7a44 */
      puVar1 = (undefined8 *)FUN_0377596c();
      goto LAB_063a8078;
    }
    plVar3 = (long *)(in_x10 + 2);
    in_x10 = piVar5;
  } while (*plVar3 != param_3);
  puVar1 = (undefined8 *)(param_1 + (long)(*piVar5 + 2) * 0x10 + 0x138);
LAB_063a8078:
  lVar2 = (*(code *)*puVar1)();
  if ((lVar2 != 0) && (plVar3 = (long *)FUN_049cec24(lVar2,0,*unaff_x24), plVar3 != (long *)0x0)) {
    lVar2 = *plVar3;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar5 + 5) * 0x10 + 0x138);
          goto LAB_063a80ec;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c(plVar3,*unaff_x26,5);
LAB_063a80ec:
    (*(code *)*puVar1)(plVar3,puVar1[1]);
    if (unaff_x19 != (long *)0x0) {
      (**(code **)(*unaff_x19 + 0x698))();
      (**(code **)(*unaff_x20 + 0x1e8))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


