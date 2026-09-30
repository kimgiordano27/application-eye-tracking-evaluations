/*
FUNCTION_NAME: FUN_059b0ee8
ENTRY_POINT: 059b0ee8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_059b0ee8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_06dc149c & 1) == 0) {
                    /* try { // try from 059b0f08 to 05ab0f13 has its CatchHandler @ 059b1074 */
    FUN_02d965b8(OVRPlugin_OVRP_1_105_0_TypeInfo);
    DAT_06dc149c = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)OVRPlugin_OVRP_1_105_0_TypeInfo) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 3) * 0x10 + 0x138);
        goto System_Xml_Schema_XmlSchemaInference___ctor;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02dd004c(plVar5,*(long *)OVRPlugin_OVRP_1_105_0_TypeInfo,3);
System_Xml_Schema_XmlSchemaInference___ctor:
                    /* WARNING: Could not recover jumptable at 0x059b0f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
  return;
}


