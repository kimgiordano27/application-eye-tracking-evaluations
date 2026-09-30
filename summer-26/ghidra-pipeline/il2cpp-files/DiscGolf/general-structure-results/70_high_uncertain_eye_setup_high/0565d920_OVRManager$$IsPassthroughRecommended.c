/*
FUNCTION_NAME: OVRManager$$IsPassthroughRecommended
ENTRY_POINT: 0565d920
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__IsPassthroughRecommended(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = 0;
  if (*(char *)(unaff_x19 + 0x60) == '\0') {
    uStack0000000000000008 = 0;
  }
  else {
                    /* try { // try from 0565d930 to 0575d937 has its CatchHandler @ 0565d97c */
                    /* try { // try from 0565d938 to 0575d977 has its CatchHandler @ 0565d864 */
    uStack0000000000000008 = FUN_050e3a74();
  }
  puVar2 = 
  System_Collections_Generic_List<ValueTuple<List<OVRSpaceUser>,_List<OVRSpatialAnchor>>>_TypeInfo;
  if ((*(long *)(unaff_x19 + 0x28) == 0) ||
     (plVar7 = *(long **)(unaff_x19 + 0x70), plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar4 = *plVar7;
  uVar1 = *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x20);
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 0565d978 to 0575d97b has its CatchHandler @ 0565d980 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0565d930 with catch @ 0565d97c
                       try { // try from 0565d97c to 0575d99f has its CatchHandler @ 0565d864 */
  if (uVar5 != 0) {
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0565d978 with catch @ 0565d980
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 0565d8f8 with catch @ 0565d984
                        */
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          *(long *)
           System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MemberInfo,_GizmoRendererManager>>>_TypeInfo
         ) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0565d9bc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_02dd004c(plVar7,*(long *)
                                System_Collections_Generic_Dictionary<Type,_List<ValueTuple<MemberInfo,_GizmoRendererManager>>>_TypeInfo
                        ,0);
LAB_0565d9bc:
  (*(code *)*puVar3)(plVar7,puVar3[1]);
  FUN_036c2724(unaff_x19 + 0x38,uVar1,unaff_x19 + 0x30,&stack0x00000008,*(undefined8 *)puVar2);
  return;
}


