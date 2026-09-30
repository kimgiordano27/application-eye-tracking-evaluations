/*
FUNCTION_NAME: FUN_059b0c00
ENTRY_POINT: 059b0c00
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_059b0c00(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_06dc1499 & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_105_0_TypeInfo);
    DAT_06dc1499 = 1;
  }
  puVar1 = OVRPlugin_OVRP_1_105_0_TypeInfo;
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)OVRPlugin_OVRP_1_105_0_TypeInfo) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_059b0c88;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_02dd004c(plVar7,*(long *)OVRPlugin_OVRP_1_105_0_TypeInfo,0);
LAB_059b0c88:
  uVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_059b0ce8;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
                    /* try { // try from 059b0cd0 to 05ab0dd7 has its CatchHandler @ 059b0cd0
                       catch() { ... } // from try @ 059b0cd0 with catch @ 059b0cd0
                       catch() { ... } // from try @ 059b1068 with catch @ 059b0cd0
                       catch() { ... } // from try @ 059b10bc with catch @ 059b0cd0
                       catch() { ... } // from try @ 059b1124 with catch @ 059b0cd0
                       catch() { ... } // from try @ 059b1140 with catch @ 059b0cd0
                       catch() { ... } // from try @ 059b1190 with catch @ 059b0cd0 */
  puVar2 = (undefined8 *)FUN_02dd004c(plVar7,*(long *)puVar1,1);
LAB_059b0ce8:
                    /* WARNING: Could not recover jumptable at 0x059b0cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar7,uVar3,puVar2[1]);
  return;
}


