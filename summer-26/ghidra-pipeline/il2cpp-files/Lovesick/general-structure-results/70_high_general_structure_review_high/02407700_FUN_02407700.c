/*
FUNCTION_NAME: FUN_02407700
ENTRY_POINT: 02407700
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02407700(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  
  puVar3 = StringLiteral_8882;
  if ((DAT_03782291 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(StringLiteral_8882);
    thunk_FUN_00d48444(StringLiteral_731);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<OVRSpatialAnchor,_Guid>__ctor__)
    ;
    thunk_FUN_00d48444(PTR_DAT_033f1c08);
    thunk_FUN_00d48444(Method_System_Reflection_Emit_MethodBuilder_GetParameters__);
    thunk_FUN_00d48444(Obi_OniVolumeConstraintsBatchImpl_TypeInfo);
    thunk_FUN_00d48444(Method_Meta_WitAi_UnityEventExtensions_SetListener<string>__);
    thunk_FUN_00d48444(StringLiteral_13878);
    thunk_FUN_00d48444(StringLiteral_4381);
    thunk_FUN_00d48444(Method_System_Net_WebRequestStream_Close_internal__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Edge,_WingedEdge>_ContainsKey__)
    ;
    thunk_FUN_00d48444(StringLiteral_8436);
    thunk_FUN_00d48444(System_Collections_Generic_IList<CustomAttributeNamedArgument>_TypeInfo);
                    /* try { // try from 024077e4 to 025077e7 has its CatchHandler @ 0240786c */
    thunk_FUN_00d48444(StringLiteral_1240);
                    /* try { // try from 024077e8 to 025077eb has its CatchHandler @ 02407868 */
                    /* try { // try from 024077ec to 025077ef has its CatchHandler @ 02407864 */
    DAT_03782291 = 1;
  }
                    /* try { // try from 024077f0 to 025077f3 has its CatchHandler @ 02407860 */
                    /* try { // try from 024077f4 to 025077f7 has its CatchHandler @ 0240785c */
  FUN_02407f9c(param_1);
                    /* try { // try from 024077f8 to 025077fb has its CatchHandler @ 02407858 */
  uVar7 = FUN_02407cfc();
                    /* try { // try from 024077fc to 025077ff has its CatchHandler @ 02407854 */
                    /* try { // try from 02407800 to 02507803 has its CatchHandler @ 02407850 */
                    /* try { // try from 02407804 to 02507807 has its CatchHandler @ 0240784c */
  FUN_02408018(param_1,uVar7);
                    /* try { // try from 02407808 to 0250780b has its CatchHandler @ 02407848 */
                    /* try { // try from 0240780c to 0250780f has its CatchHandler @ 02407844 */
                    /* try { // try from 02407810 to 02507813 has its CatchHandler @ 02407840 */
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* try { // try from 02407814 to 02507817 has its CatchHandler @ 0240783c */
    thunk_FUN_00d32864();
  }
                    /* try { // try from 02407818 to 0250781b has its CatchHandler @ 02407838 */
  lVar8 = FUN_024064e0();
                    /* try { // try from 0240781c to 0250781f has its CatchHandler @ 02407834 */
  if (lVar8 != 0) {
                    /* try { // try from 02407820 to 02507823 has its CatchHandler @ 02406ff8 */
                    /* try { // try from 02407824 to 02507827 has its CatchHandler @ 02407830 */
                    /* try { // try from 02407828 to 025078bf has its CatchHandler @ 02406ff8 */
    uVar7 = *(undefined8 *)(lVar8 + 0x20);
                    /* catch() { ... } // from try @ 02407824 with catch @ 02407830 */
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_731);
    puVar2 = System_Collections_Generic_IList<CustomAttributeNamedArgument>_TypeInfo;
                    /* catch() { ... } // from try @ 0240781c with catch @ 02407834 */
    if (lVar8 != 0) {
                    /* catch() { ... } // from try @ 02407818 with catch @ 02407838 */
                    /* catch() { ... } // from try @ 02407814 with catch @ 0240783c */
                    /* catch() { ... } // from try @ 02407810 with catch @ 02407840 */
                    /* catch() { ... } // from try @ 0240780c with catch @ 02407844 */
                    /* catch() { ... } // from try @ 02407808 with catch @ 02407848 */
      thunk_FUN_023a9460(lVar8,0);
                    /* catch() { ... } // from try @ 02407804 with catch @ 0240784c */
                    /* catch() { ... } // from try @ 02407800 with catch @ 02407850 */
      lVar10 = *(long *)(lVar8 + 0x48);
                    /* catch() { ... } // from try @ 024077fc with catch @ 02407854 */
                    /* catch() { ... } // from try @ 024077f8 with catch @ 02407858 */
                    /* catch() { ... } // from try @ 024077f4 with catch @ 0240785c */
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)puVar2;
                    /* catch() { ... } // from try @ 024077f0 with catch @ 02407860 */
      *(undefined2 *)(lVar8 + 0x50) = 0x101;
                    /* catch() { ... } // from try @ 024077ec with catch @ 02407864 */
      uVar7 = FUN_02408070(uVar7);
      puVar5 = Method_System_Reflection_Emit_MethodBuilder_GetParameters__;
      puVar2 = Obi_OniVolumeConstraintsBatchImpl_TypeInfo;
                    /* catch() { ... } // from try @ 024077e8 with catch @ 02407868 */
      if (lVar10 != 0) {
                    /* catch() { ... } // from try @ 024077e4 with catch @ 0240786c */
                    /* catch() { ... } // from try @ 024074d8 with catch @ 02407870 */
                    /* catch() { ... } // from try @ 02407658 with catch @ 02407874 */
                    /* catch() { ... } // from try @ 024075e8 with catch @ 02407878 */
                    /* catch() { ... } // from try @ 02407514 with catch @ 0240787c */
                    /* catch() { ... } // from try @ 02407638 with catch @ 02407880 */
                    /* catch() { ... } // from try @ 02407538 with catch @ 02407884 */
                    /* catch() { ... } // from try @ 024074f0 with catch @ 02407888 */
                    /* catch() { ... } // from try @ 02407690 with catch @ 0240788c */
        FUN_01360964(lVar10,uVar7,*(undefined8 *)Obi_OniVolumeConstraintsBatchImpl_TypeInfo);
                    /* catch() { ... } // from try @ 0240755c with catch @ 02407890 */
                    /* catch() { ... } // from try @ 02407674 with catch @ 02407894 */
        lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
        puVar13 = (undefined8 *)StringLiteral_1240;
        puVar6 = Method_System_Net_WebRequestStream_Close_internal__;
        puVar1 = PTR_DAT_033f1c08;
                    /* catch() { ... } // from try @ 02407610 with catch @ 02407898 */
        if (lVar10 != 0) {
                    /* catch() { ... } // from try @ 024075a8 with catch @ 0240789c */
                    /* catch() { ... } // from try @ 02407580 with catch @ 024078a0 */
                    /* catch() { ... } // from try @ 02407468 with catch @ 024078a4 */
                    /* catch() { ... } // from try @ 0240740c with catch @ 024078a8 */
          FUN_01320e50(lVar10,*(undefined8 *)PTR_DAT_033f1c08);
                    /* try { // try from 024078c0 to 025078c3 has its CatchHandler @ 0240794c */
          lVar9 = *(long *)puVar6;
          uVar7 = *puVar13;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar9 = *(long *)puVar6;
          }
          puVar4 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
          lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
          if (lVar11 == 0) {
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar9 = *(long *)puVar6;
            }
                    /* try { // try from 02407910 to 02507937 has its CatchHandler @ 02407958 */
            uVar12 = **(undefined8 **)(lVar9 + 0xb8);
            lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
            if (lVar11 == 0) goto LAB_02407cf8;
            FUN_016f27fc(lVar11,uVar12,
                         *(undefined8 *)Method_Meta_WitAi_UnityEventExtensions_SetListener<string>__
                         ,0);
            *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8) = lVar11;
            puVar13 = (undefined8 *)StringLiteral_1240;
          }
          FUN_00cb1cac(lVar10,uVar7,lVar11,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<OVRSpatialAnchor,_Guid>__ctor__
                      );
          *(long *)(lVar8 + 0x58) = lVar10;
          if (param_1 != 0) {
            FUN_02408018(param_1,lVar8);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar8 = FUN_024064e0();
            if (lVar8 != 0) {
              uVar7 = *(undefined8 *)(lVar8 + 0x30);
              lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_731);
              puVar4 = StringLiteral_8436;
              if (lVar8 != 0) {
                thunk_FUN_023a9460(lVar8,0);
                lVar10 = *(long *)(lVar8 + 0x48);
                *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)puVar4;
                *(undefined2 *)(lVar8 + 0x50) = 0x101;
                uVar12 = FUN_0240831c(uVar7);
                if (lVar10 != 0) {
                  FUN_01360964(lVar10,uVar12,*(undefined8 *)puVar2);
                  lVar10 = *(long *)(lVar8 + 0x48);
                  uVar7 = FUN_024085c8(uVar7);
                  if (lVar10 != 0) {
                    FUN_01360964(lVar10,uVar7,*(undefined8 *)puVar2);
                    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                    if (lVar10 != 0) {
                      FUN_01320e50(lVar10,*(undefined8 *)puVar1);
                      lVar9 = *(long *)puVar6;
                      uVar7 = *puVar13;
                      if (*(int *)(lVar9 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar9 = *(long *)puVar6;
                      }
                      lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
                      if (lVar11 == 0) {
                        if (*(int *)(lVar9 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                          lVar9 = *(long *)puVar6;
                        }
                        uVar12 = **(undefined8 **)(lVar9 + 0xb8);
                        lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__
                                                  );
                        if (lVar11 == 0) goto LAB_02407cf8;
                        FUN_016f27fc(lVar11,uVar12,*(undefined8 *)StringLiteral_13878,0);
                        *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10) = lVar11;
                      }
                      FUN_00cb1cac(lVar10,uVar7,lVar11,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<OVRSpatialAnchor,_Guid>__ctor__
                                  );
                      *(long *)(lVar8 + 0x58) = lVar10;
                      FUN_02408018(param_1,lVar8);
                      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      lVar8 = FUN_024064e0();
                      if (lVar8 != 0) {
                        uVar7 = *(undefined8 *)(lVar8 + 0x28);
                        lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_731);
                        puVar3 = 
                        Method_System_Collections_Generic_Dictionary<Edge,_WingedEdge>_ContainsKey__
                        ;
                        if (lVar8 != 0) {
                          thunk_FUN_023a9460(lVar8,0);
                          lVar10 = *(long *)(lVar8 + 0x48);
                          *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)puVar3;
                          *(undefined2 *)(lVar8 + 0x50) = 0x101;
                          uVar12 = FUN_024087a4(uVar7);
                          if (lVar10 != 0) {
                            FUN_01360964(lVar10,uVar12,*(undefined8 *)puVar2);
                            lVar10 = *(long *)(lVar8 + 0x48);
                            uVar12 = FUN_02408928(uVar7);
                            if (lVar10 != 0) {
                              FUN_01360964(lVar10,uVar12,*(undefined8 *)puVar2);
                              lVar10 = *(long *)(lVar8 + 0x48);
                              uVar12 = FUN_02408aac(uVar7);
                              if (lVar10 != 0) {
                                FUN_01360964(lVar10,uVar12,*(undefined8 *)puVar2);
                                lVar10 = *(long *)(lVar8 + 0x48);
                                uVar12 = FUN_02408cf8(uVar7);
                                if (lVar10 != 0) {
                                  FUN_01360964(lVar10,uVar12,*(undefined8 *)puVar2);
                                  lVar10 = *(long *)(lVar8 + 0x48);
                                  uVar12 = FUN_02409034(uVar7);
                                  if (lVar10 != 0) {
                                    FUN_01360964(lVar10,uVar12,*(undefined8 *)puVar2);
                                    lVar10 = *(long *)(lVar8 + 0x48);
                                    uVar7 = FUN_0240915c(uVar7);
                                    if (lVar10 != 0) {
                                      FUN_01360964(lVar10,uVar7,*(undefined8 *)puVar2);
                                      lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
                                      if (lVar10 != 0) {
                                        FUN_01320e50(lVar10,*(undefined8 *)puVar1);
                                        lVar9 = *(long *)puVar6;
                                        uVar7 = *puVar13;
                                        if (*(int *)(lVar9 + 0xe0) == 0) {
                                          thunk_FUN_00d32864();
                                          lVar9 = *(long *)puVar6;
                                        }
                                        lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
                                        if (lVar11 == 0) {
                                          if (*(int *)(lVar9 + 0xe0) == 0) {
                                            thunk_FUN_00d32864();
                                            lVar9 = *(long *)puVar6;
                                          }
                                          uVar12 = **(undefined8 **)(lVar9 + 0xb8);
                                          lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                                              
                                                  Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__
                                                  );
                                          if (lVar11 == 0) goto LAB_02407cf8;
                                          FUN_016f27fc(lVar11,uVar12,
                                                       *(undefined8 *)StringLiteral_4381,0);
                                          *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x18) =
                                               lVar11;
                                        }
                                        FUN_00cb1cac(lVar10,uVar7,lVar11,
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<OVRSpatialAnchor,_Guid>__ctor__
                                                  );
                                        *(long *)(lVar8 + 0x58) = lVar10;
                                        FUN_02408018(param_1,lVar8);
                                        return;
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
LAB_02407cf8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


