/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 05672aac
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRPlugin__set_useDynamicFixedFoveatedRendering(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  undefined4 unaff_w20;
  long unaff_x21;
  
  uVar1 = FUN_03bff3e8(param_1,unaff_w20,
                       *(undefined8 *)System_Collections_Generic_List<Leaderboard>_TypeInfo);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (*(long *)(unaff_x19 + 0x188) != 0) {
    FUN_03bff5dc(*(long *)(unaff_x19 + 0x188),*(undefined4 *)(unaff_x21 + 0x10),
                 *(undefined8 *)System_Collections_Generic_List<LigatureSubstitutionRecord>_TypeInfo
                );
    lVar3 = *(long *)(unaff_x19 + 400);
    uVar2 = thunk_FUN_02dd3144(*(undefined8 *)System_Collections_Generic_List<Line>_TypeInfo);
    FUN_0446295c();
    if (lVar3 != 0) {
      FUN_0401a6c0(lVar3,uVar2,
                   *(undefined8 *)
                    System_Collections_Generic_List<LigatureSubstitutionRecord>_TypeInfo);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


