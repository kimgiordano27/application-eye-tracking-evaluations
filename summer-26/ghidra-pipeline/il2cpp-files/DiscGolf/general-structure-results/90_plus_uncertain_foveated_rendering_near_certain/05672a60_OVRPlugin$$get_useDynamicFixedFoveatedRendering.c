/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 05672a60
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 119
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRPlugin__get_useDynamicFixedFoveatedRendering(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_02d965b8(System_Collections_Generic_List<LinkedAccount>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<Level2Map>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x679) = 1;
  lVar1 = thunk_FUN_02dd3144(*unaff_x22);
  FUN_0567adf0(lVar1,0);
  if (lVar1 != 0) {
    lVar4 = *(long *)(unaff_x19 + 0x198);
    *(undefined4 *)(lVar1 + 0x10) = unaff_w20;
    if (lVar4 == 0) {
      return 0;
    }
    if (*(long *)(unaff_x19 + 0x188) != 0) {
      uVar2 = FUN_03bff3e8(*(long *)(unaff_x19 + 0x188),unaff_w20,
                           *(undefined8 *)System_Collections_Generic_List<Leaderboard>_TypeInfo);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      if (*(long *)(unaff_x19 + 0x188) != 0) {
        FUN_03bff5dc(*(long *)(unaff_x19 + 0x188),*(undefined4 *)(lVar1 + 0x10),
                     *(undefined8 *)
                      System_Collections_Generic_List<LigatureSubstitutionRecord>_TypeInfo);
        lVar4 = *(long *)(unaff_x19 + 400);
        uVar3 = thunk_FUN_02dd3144(*(undefined8 *)System_Collections_Generic_List<Line>_TypeInfo);
        FUN_0446295c(uVar3,lVar1,
                     *(undefined8 *)System_Collections_Generic_List<LinkedAccount>_TypeInfo,0);
        if (lVar4 != 0) {
          FUN_0401a6c0(lVar4,uVar3,
                       *(undefined8 *)
                        System_Collections_Generic_List<LigatureSubstitutionRecord>_TypeInfo);
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


