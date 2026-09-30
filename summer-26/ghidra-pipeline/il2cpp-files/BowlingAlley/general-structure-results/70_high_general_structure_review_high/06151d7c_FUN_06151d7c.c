/*
FUNCTION_NAME: FUN_06151d7c
ENTRY_POINT: 06151d7c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


long FUN_06151d7c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar6 = System_Collections_Generic_List<DebugPanel>_TypeInfo;
                    /* try { // try from 06151d90 to 06251d93 has its CatchHandler @ 06152030 */
                    /* try { // try from 06151d94 to 06251da7 has its CatchHandler @ 06152098 */
  if ((DAT_076dda7a & 1) == 0) {
                    /* try { // try from 06151dac to 06251db7 has its CatchHandler @ 061520cc */
    thunk_FUN_032e1da0(PTR_DAT_072a1928);
    thunk_FUN_032e1da0(System_Collections_Generic_List<DebugPanel>_TypeInfo);
                    /* try { // try from 06151dc0 to 06251dcb has its CatchHandler @ 061520b0 */
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionCancelEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionEndEvent>_TypeInfo);
                    /* try { // try from 06151de8 to 06251deb has its CatchHandler @ 0615202c */
    thunk_FUN_032e1da0(System_Func<DependencyStatus>_TypeInfo);
                    /* try { // try from 06151df0 to 06251dff has its CatchHandler @ 06152094 */
    thunk_FUN_032e1da0(System_Func<FocusExitEventArgs>_TypeInfo);
                    /* try { // try from 06151e04 to 06251e0f has its CatchHandler @ 061520c8 */
    thunk_FUN_032e1da0(System_Func<FocusOutEvent>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                      );
                    /* try { // try from 06151e14 to 06251e1f has its CatchHandler @ 061520ac */
    thunk_FUN_032e1da0(System_Collections_Generic_List<DebugUIHandlerPanel>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<FileInfo,_long>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<FingerFeature,_Nullable<float>>_TypeInfo);
                    /* try { // try from 06151e3c to 06251e3f has its CatchHandler @ 06152028 */
                    /* try { // try from 06151e40 to 06251e53 has its CatchHandler @ 06152090 */
    thunk_FUN_032e1da0(System_Func<HandGrabInteractable>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<Decimal,_object>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07284210);
                    /* try { // try from 06151e5c to 06251e67 has its CatchHandler @ 0615206c */
    thunk_FUN_032e1da0(System_Func<JsonSchemaModel,_IEnumerable<string>>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_07292b30);
                    /* try { // try from 06151e7c to 06251e7f has its CatchHandler @ 06152000 */
    thunk_FUN_032e1da0(System_Func<Exception,_bool>_TypeInfo);
                    /* try { // try from 06151e80 to 06251e8f has its CatchHandler @ 06152068 */
    thunk_FUN_032e1da0(System_Func<FieldInfo,_bool>_TypeInfo);
                    /* try { // try from 06151e90 to 06251e9b has its CatchHandler @ 06152064 */
    thunk_FUN_032e1da0(PTR_DAT_0727c6d0);
                    /* try { // try from 06151ea0 to 06251eab has its CatchHandler @ 06152060 */
    thunk_FUN_032e1da0(PTR_DAT_07285080);
    DAT_076dda7a = 1;
  }
  if (**(long **)(*(long *)puVar6 + 0xb8) != 0) {
    return **(long **)(*(long *)puVar6 + 0xb8);
  }
                    /* try { // try from 06151ec0 to 06251ec3 has its CatchHandler @ 06151ffc */
                    /* try { // try from 06151ec4 to 06251ed3 has its CatchHandler @ 0615205c */
  lVar7 = thunk_FUN_032a56a0(*(undefined8 *)
                              System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                            );
                    /* try { // try from 06151ed4 to 06251edf has its CatchHandler @ 06152058 */
  FUN_0619a190(lVar7,0);
  puVar5 = System_Func<FingerFeature,_Nullable<float>>_TypeInfo;
  if (lVar7 != 0) {
                    /* try { // try from 06151ee4 to 06251eef has its CatchHandler @ 06152018 */
    *(undefined8 *)(lVar7 + 0x48) =
         *(undefined8 *)System_Func<FingerFeature,_Nullable<float>>_TypeInfo;
    thunk_FUN_0333a630();
    lVar8 = FUN_0619ac40(lVar7,0);
    if (lVar8 != 0) {
                    /* try { // try from 06151f0c to 06251f0f has its CatchHandler @ 06151ff4 */
                    /* try { // try from 06151f10 to 06251f1f has its CatchHandler @ 06152014 */
      FUN_0624fea8(lVar8,*(undefined8 *)PTR_DAT_07292b30,*(undefined8 *)puVar5,0);
      puVar4 = System_Func<TransitionEndEvent>_TypeInfo;
                    /* try { // try from 06151f20 to 06251f2b has its CatchHandler @ 06152010 */
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)System_Func<TransitionEndEvent>_TypeInfo);
                    /* try { // try from 06151f30 to 06251f3b has its CatchHandler @ 0615207c */
      FUN_0619ce78(lVar8,0);
      if (lVar8 != 0) {
                    /* try { // try from 06151f40 to 06251f4b has its CatchHandler @ 06152078 */
        *(undefined8 *)(lVar8 + 0x60) = *(undefined8 *)System_Func<FileInfo,_long>_TypeInfo;
        thunk_FUN_0333a630();
        puVar3 = System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo;
        uVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                    System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo
                                  );
        puVar2 = PTR_DAT_07285080;
                    /* try { // try from 06151f64 to 06251f67 has its CatchHandler @ 0615201c */
                    /* try { // try from 06151f6c to 06251f77 has its CatchHandler @ 06152074 */
        FUN_0624b7a8(uVar9,*(undefined8 *)System_Func<FieldInfo,_bool>_TypeInfo,
                     *(undefined8 *)PTR_DAT_07285080,0);
        FUN_0619cc6c(lVar8,uVar9,0);
                    /* try { // try from 06151f98 to 06251f9b has its CatchHandler @ 06152194 */
                    /* try { // try from 06151f9c to 06251f9f has its CatchHandler @ 061521d0 */
        if (*(long *)(lVar7 + 0x60) != 0) {
                    /* try { // try from 06151fa0 to 06251fa7 has its CatchHandler @ 06152194 */
                    /* try { // try from 06151fa8 to 06251faf has its CatchHandler @ 061521d0 */
          FUN_0619bae4(*(long *)(lVar7 + 0x60),lVar8,0);
                    /* try { // try from 06151fb0 to 06251fb3 has its CatchHandler @ 0615219c */
          lVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
                    /* try { // try from 06151fb4 to 06251fb7 has its CatchHandler @ 061521d0 */
                    /* try { // try from 06151fb8 to 06251fbf has its CatchHandler @ 0615219c */
          FUN_0619ce78(lVar8,0);
                    /* try { // try from 06151fc0 to 06251fc3 has its CatchHandler @ 06152104 */
          if (lVar8 != 0) {
                    /* try { // try from 06151fc4 to 06251fcb has its CatchHandler @ 061521d0 */
                    /* try { // try from 06151fcc to 06251fcf has its CatchHandler @ 061520dc */
                    /* try { // try from 06151fd0 to 06251fd3 has its CatchHandler @ 06152188 */
                    /* try { // try from 06151fd4 to 06251fd7 has its CatchHandler @ 061520c4 */
            *(undefined8 *)(lVar8 + 0x60) =
                 *(undefined8 *)System_Func<HandGrabInteractable>_TypeInfo;
                    /* try { // try from 06151fd8 to 06251fdf has its CatchHandler @ 06152188 */
            thunk_FUN_0333a630();
                    /* try { // try from 06151fe0 to 06251fe3 has its CatchHandler @ 061520a4 */
            uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                    /* try { // try from 06151fe4 to 06251fe7 has its CatchHandler @ 06152170 */
                    /* try { // try from 06151fe8 to 06251feb has its CatchHandler @ 06152054 */
                    /* try { // try from 06151fec to 06251fef has its CatchHandler @ 06152050 */
                    /* catch() { ... } // from try @ 06151d30 with catch @ 06151ff0
                       try { // try from 06151ff0 to 062521e7 has its CatchHandler @ 06151370 */
                    /* catch() { ... } // from try @ 06151f0c with catch @ 06151ff4 */
                    /* catch() { ... } // from try @ 06151ce4 with catch @ 06151ff8 */
                    /* catch() { ... } // from try @ 06151ec0 with catch @ 06151ffc */
            FUN_0624b7a8(uVar9,*(undefined8 *)System_Func<Exception,_bool>_TypeInfo,
                         *(undefined8 *)puVar2,0);
                    /* catch() { ... } // from try @ 06151e7c with catch @ 06152000 */
                    /* catch() { ... } // from try @ 06151d44 with catch @ 06152004 */
            FUN_0619cc6c(lVar8,uVar9,0);
            if (*(long *)(lVar7 + 0x60) != 0) {
              FUN_0619bae4(*(long *)(lVar7 + 0x60),lVar8,0);
              lVar8 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
              FUN_0619ce78(lVar8,0);
              puVar1 = PTR_DAT_0727c6d0;
              if (lVar8 != 0) {
                *(undefined8 *)(lVar8 + 0x60) = *(undefined8 *)PTR_DAT_0727c6d0;
                thunk_FUN_0333a630();
                lVar10 = thunk_FUN_032a56a0(*(undefined8 *)System_Func<FocusOutEvent>_TypeInfo);
                thunk_FUN_061acbf4(lVar10,0);
                lVar11 = thunk_FUN_032a56a0(*(undefined8 *)System_Func<FocusExitEventArgs>_TypeInfo)
                ;
                FUN_061ad0f0(lVar11,0);
                uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                FUN_0624b7a8(uVar9,*(undefined8 *)System_Func<Decimal,_object>_TypeInfo,
                             *(undefined8 *)puVar2,0);
                if (lVar11 != 0) {
                  FUN_061acf88(lVar11,uVar9,0);
                  puVar2 = System_Func<DependencyStatus>_TypeInfo;
                  lVar12 = thunk_FUN_032a56a0(*(undefined8 *)System_Func<DependencyStatus>_TypeInfo)
                  ;
                  FUN_061a1b08(lVar12,0);
                  if (lVar12 != 0) {
                    *(undefined8 *)(lVar12 + 0x50) = *(undefined8 *)PTR_DAT_07284210;
                    thunk_FUN_0333a630();
                    if (*(long *)(lVar11 + 0x60) != 0) {
                      FUN_0619bae4(*(long *)(lVar11 + 0x60),lVar12,0);
                      lVar12 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
                      FUN_061a1b08(lVar12,0);
                      puVar2 = System_Func<JsonSchemaModel,_IEnumerable<string>>_TypeInfo;
                      if (lVar12 != 0) {
                        *(undefined8 *)(lVar12 + 0x50) =
                             *(undefined8 *)
                              System_Func<JsonSchemaModel,_IEnumerable<string>>_TypeInfo;
                        thunk_FUN_0333a630();
                        if ((*(long *)(lVar11 + 0x60) != 0) &&
                           (FUN_0619bae4(*(long *)(lVar11 + 0x60),lVar12,0), lVar10 != 0)) {
                          *(long *)(lVar10 + 0x98) = lVar11;
                          thunk_FUN_0333a630((long *)(lVar10 + 0x98),lVar11);
                          *(long *)(lVar8 + 0x88) = lVar10;
                          thunk_FUN_0333a630((long *)(lVar8 + 0x88),lVar10);
                          *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)puVar2;
                          thunk_FUN_0333a630();
                          if (*(long *)(lVar7 + 0x60) != 0) {
                            FUN_0619bae4(*(long *)(lVar7 + 0x60),lVar8,0);
                            lVar8 = thunk_FUN_032a56a0(*(undefined8 *)
                                                        System_Func<TransitionCancelEvent>_TypeInfo)
                            ;
                            FUN_0619d4a0(lVar8,0);
                            if (lVar8 != 0) {
                              *(undefined8 *)(lVar8 + 0x50) =
                                   *(undefined8 *)
                                    System_Collections_Generic_List<DebugUIHandlerPanel>_TypeInfo;
                              thunk_FUN_0333a630();
                              lVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
                              FUN_0619ce78(lVar10,0);
                              uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                              FUN_0624b7a8(uVar9,*(undefined8 *)System_Func<FileInfo,_long>_TypeInfo
                                           ,*(undefined8 *)puVar5,0);
                              if (lVar10 != 0) {
                                FUN_0619cbc4(lVar10,uVar9,0);
                                if (*(long *)(lVar8 + 0x58) != 0) {
                                  FUN_0619bae4(*(long *)(lVar8 + 0x58),lVar10,0);
                                  lVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
                                  FUN_0619ce78(lVar10,0);
                                  uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                                  FUN_0624b7a8(uVar9,*(undefined8 *)puVar1,*(undefined8 *)puVar5,0);
                                  if (lVar10 != 0) {
                                    FUN_0619cbc4(lVar10,uVar9,0);
                                    if (*(long *)(lVar8 + 0x58) != 0) {
                                      FUN_0619bae4(*(long *)(lVar8 + 0x58),lVar10,0);
                                      lVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
                                      FUN_0619ce78(lVar10,0);
                                      uVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
                                      FUN_0624b7a8(uVar9,*(undefined8 *)
                                                          System_Func<HandGrabInteractable>_TypeInfo
                                                   ,*(undefined8 *)puVar5,0);
                                      if (lVar10 != 0) {
                                        FUN_0619cbc4(lVar10,uVar9,0);
                                        if (*(long *)(lVar8 + 0x58) != 0) {
                                          FUN_0619bae4(*(long *)(lVar8 + 0x58),lVar10,0);
                                          if (*(long *)(lVar7 + 0x60) != 0) {
                                            FUN_0619bae4(*(long *)(lVar7 + 0x60),lVar8,0);
                                            *(undefined1 *)(lVar7 + 0x7a) = 1;
                                            uVar9 = thunk_FUN_032a56a0(*(undefined8 *)
                                                                        PTR_DAT_072a1928);
                                            System_Net_FtpDataStream__get_ReadTimeout(uVar9,0);
                                            FUN_0619a708(lVar7,uVar9,0,0,0);
                                            FUN_032ef8c0(*(undefined8 *)(*(long *)puVar6 + 0xb8),
                                                         lVar7,0);
                                            return **(long **)(*(long *)puVar6 + 0xb8);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


