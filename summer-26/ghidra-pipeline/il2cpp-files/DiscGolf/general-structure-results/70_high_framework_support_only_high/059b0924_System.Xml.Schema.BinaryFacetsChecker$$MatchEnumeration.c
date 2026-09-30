/*
FUNCTION_NAME: System.Xml.Schema.BinaryFacetsChecker$$MatchEnumeration
ENTRY_POINT: 059b0924
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void System_Xml_Schema_BinaryFacetsChecker__MatchEnumeration(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  
  plVar6 = *(long **)(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x18) = 0;
                    /* catch() { ... } // from try @ 059b0920 with catch @ 059b092c */
  if (plVar6 != (long *)0x0) {
                    /* try { // try from 059b0930 to 05ab0937 has its CatchHandler @ 059b093c */
    lVar3 = *plVar6;
                    /* catch() { ... } // from try @ 059b08d0 with catch @ 059b093c
                       catch() { ... } // from try @ 059b0930 with catch @ 059b093c */
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 059b0940 to 05ab0a0b has its CatchHandler @ 059b0940
                       catch() { ... } // from try @ 059b0940 with catch @ 059b0940
                       catch() { ... } // from try @ 059b0ad8 with catch @ 059b0940
                       catch() { ... } // from try @ 059b0b64 with catch @ 059b0940
                       catch() { ... } // from try @ 059b0bc0 with catch @ 059b0940 */
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)OVRPlugin_OVRP_1_105_0_TypeInfo) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_059b0a9c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(plVar6,*(long *)OVRPlugin_OVRP_1_105_0_TypeInfo,0);
LAB_059b0a9c:
    lVar3 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    uVar2 = thunk_FUN_02dd3144(*(undefined8 *)OVRPlugin_OVRP_1_106_0_TypeInfo);
    FUN_05c50774();
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x20) = uVar2;
      LeanTween__value((undefined8 *)(lVar3 + 0x20),uVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


