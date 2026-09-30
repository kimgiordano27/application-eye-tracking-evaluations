/*
FUNCTION_NAME: FUN_00f5f7c0
ENTRY_POINT: 00f5f7c0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_12;telemetry_or_network_hits_2
*/


undefined8 FUN_00f5f7c0(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  float fVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_b8;
  undefined4 local_58;
  undefined4 uStack_54;
  
  if ((DAT_03775786 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<CommonTouch>_get_Count__);
    thunk_FUN_00d48444(
                      Method_System_Linq_Expressions_Interpreter_ByRefMethodInfoCallInstruction_Run__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__);
    thunk_FUN_00d48444(System_Linq_Expressions_Interpreter_InterpretedFrameInfo_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Pushable,_int>_set_Item__);
    thunk_FUN_00d48444(Sirenix_Serialization_DelegateFormatter<Delegate>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_8043);
    thunk_FUN_00d48444(StringLiteral_645);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_RebindingOperation_RemoveCandidate__
                      );
    thunk_FUN_00d48444(Method_Oculus_Platform_Request<AssetDetails>__ctor__);
    DAT_03775786 = 1;
  }
  puVar6 = Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__;
  iVar1 = *(int *)(param_4 + 0x10);
  lVar14 = *(long *)(param_4 + 0x20);
  if (iVar1 == 2) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if ((lVar14 != 0) && (*(long *)(lVar14 + 0x40) != 0)) {
      FUN_019394a4(*(long *)(lVar14 + 0x40),*(undefined8 *)(lVar14 + 0x48),0);
      if (*(long *)(lVar14 + 0x40) != 0) {
        FUN_010c2c5c(*(long *)(lVar14 + 0x40),&local_58,
                     *(undefined8 *)Method_System_Collections_Generic_List<CommonTouch>_get_Count__)
        ;
        if (CONCAT44(uStack_54,local_58) != 0) {
          FUN_0266622c(CONCAT44(uStack_54,local_58),1,0);
          if ((*(long *)(lVar14 + 0x40) != 0) &&
             (plVar9 = (long *)FUN_018f0970(*(long *)(lVar14 + 0x40),8,0),
             puVar6 = StringLiteral_8043, plVar9 != (long *)0x0)) {
            bVar2 = *(byte *)(*(long *)Sirenix_Serialization_DelegateFormatter<Delegate>_TypeInfo +
                             300);
            if ((bVar2 <= *(byte *)(*plVar9 + 300)) &&
               (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar2 * 8 + -8) ==
                *(long *)Sirenix_Serialization_DelegateFormatter<Delegate>_TypeInfo)) {
              FUN_01355f48(plVar9,*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<Pushable,_int>_set_Item__
                          );
              lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
              if (lVar8 != 0) {
                FUN_018fcac0(lVar8,0,0);
                if ((*(long *)(lVar14 + 0x40) != 0) &&
                   (lVar12 = *(long *)(*(long *)(lVar14 + 0x40) + 0x60), lVar12 != 0)) {
                  if (*(int *)(lVar12 + 0x18) == 0) {
LAB_00f60008:
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  uVar15 = *(undefined4 *)(lVar12 + 0x20);
                  uVar7 = *(undefined8 *)(lVar14 + 0x20);
                  lVar12 = FUN_0268fd10(lVar14,0);
                  if (lVar12 != 0) {
                    uVar18 = FUN_0269f6b0(lVar12,0);
                    if (DAT_03774f00 == '\0') {
                      thunk_FUN_00d48444(
                                        Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                                        );
                      DAT_03774f00 = '\x01';
                    }
                    puVar6 = 
                    Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__;
                    puVar11 = *(undefined4 **)
                               (*(long *)
                                 Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                               + 0xb8);
                    FUN_018fcc14(uVar18,param_2,param_3,*puVar11,puVar11[1],puVar11[2],puVar11[3],0,
                                 lVar8,uVar15,uVar7,0);
                    if (((*(long *)(lVar14 + 0x40) != 0) && (*(long *)(lVar14 + 0x48) != 0)) &&
                       (lVar12 = *(long *)(*(long *)(lVar14 + 0x40) + 0x60), lVar12 != 0)) {
                      uVar3 = *(int *)(*(long *)(lVar14 + 0x48) + 0x24) - 1;
                      if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_00f60008;
                      uVar15 = *(undefined4 *)(lVar12 + (long)(int)uVar3 * 4 + 0x20);
                      lVar12 = lVar14 + 0x60;
                      lVar10 = FUN_026f1008(lVar12,0);
                      if (lVar10 != 0) {
                        FUN_010c2c5c(lVar10,&local_58,
                                     *(undefined8 *)
                                      Method_System_Linq_Expressions_Interpreter_ByRefMethodInfoCallInstruction_Run__
                                    );
                        lVar10 = FUN_026f1008(lVar12,0);
                        if (lVar10 != 0) {
                          lVar10 = FUN_0268fd10(lVar10,0);
                          FUN_026f10b4(lVar12,0);
                          puVar5 = System_Linq_Expressions_Interpreter_InterpretedFrameInfo_TypeInfo
                          ;
                          if (lVar10 != 0) {
                            uVar7 = FUN_026a0f08(lVar10,0);
                            if (DAT_03774f00 == '\0') {
                              thunk_FUN_00d48444(
                                                Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMethodImpl__
                                                );
                              DAT_03774f00 = '\x01';
                            }
                            puVar11 = *(undefined4 **)(*(long *)puVar6 + 0xb8);
                            FUN_018fcc14(uVar7,param_2,param_3,*puVar11,puVar11[1],puVar11[2],
                                         puVar11[3],0,lVar8,uVar15,CONCAT44(uStack_54,local_58),0);
                            *(undefined4 *)(lVar8 + 0x24) = 2;
                            FUN_01355fbc(plVar9,lVar8,*(undefined8 *)puVar5);
                            if (*(long *)(lVar14 + 0x40) != 0) {
                              FUN_018f08dc(*(long *)(lVar14 + 0x40),8,0);
                              return 0;
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
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      local_58 = 0;
      uVar7 = thunk_FUN_00d61fa0(*(undefined8 *)puVar6,&local_58);
      *(undefined8 *)(param_4 + 0x18) = uVar7;
      *(undefined4 *)(param_4 + 0x10) = 1;
      return 1;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if ((lVar14 != 0) && (*(long *)(lVar14 + 0x40) != 0)) {
      lVar8 = FUN_0268fd10(*(long *)(lVar14 + 0x40),0);
      fVar20 = (float)param_3;
      fVar19 = (float)param_2;
      FUN_026f10b4(lVar14 + 0x60,0);
      puVar6 = StringLiteral_645;
      if (lVar8 != 0) {
        uVar7 = FUN_026a0f08(lVar8,0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if ((*(long *)(lVar14 + 0x48) != 0) &&
           (lVar8 = *(long *)(*(long *)(lVar14 + 0x48) + 0x110), lVar8 != 0)) {
          FUN_0194943c(lVar8,0);
          if (*(long *)(lVar14 + 0x48) != 0) {
            lVar8 = *(long *)(*(long *)(lVar14 + 0x48) + 0x110);
            if (DAT_03774d76 == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_03774d76 = '\x01';
            }
            puVar6 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
            ;
            puVar11 = *(undefined4 **)
                       (*(long *)
                         Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                       + 0xb8);
            uVar15 = *puVar11;
            uVar16 = puVar11[1];
            uVar17 = puVar11[2];
            if (DAT_0377518c == '\0') {
              thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
              DAT_0377518c = '\x01';
            }
            puVar5 = System_Threading_Timer_TimerComparer_TypeInfo;
            if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            fVar4 = DAT_028aa038;
            fVar21 = (float)uVar7;
            fVar24 = SQRT(fVar20 * fVar20 + fVar21 * fVar21 + fVar19 * fVar19);
            if (fVar24 <= DAT_028aa038) {
              if (DAT_03774d76 == '\0') {
                thunk_FUN_00d48444(
                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                  );
                DAT_03774d76 = '\x01';
              }
              pfVar13 = *(float **)(*(long *)puVar6 + 0xb8);
              local_b8 = *pfVar13;
              fVar22 = pfVar13[1];
              fVar23 = pfVar13[2];
            }
            else {
              local_b8 = fVar21 / fVar24;
              fVar22 = fVar19 / fVar24;
              fVar23 = fVar20 / fVar24;
            }
            if (DAT_0377518c == '\0') {
              thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
              DAT_0377518c = '\x01';
            }
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if ((fVar24 <= fVar4) && (DAT_03774d76 == '\0')) {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_03774d76 = '\x01';
            }
            if (DAT_037750c4 == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_037750c4 = '\x01';
            }
            if (lVar8 != 0) {
              FUN_01948738(uVar15,uVar16,uVar17,-local_b8,-fVar22,-fVar23,lVar8,0xffff0001,
                           *(undefined8 *)Method_Oculus_Platform_Request<AssetDetails>__ctor__,0);
              if (*(long *)(lVar14 + 0x48) != 0) {
                lVar8 = *(long *)(*(long *)(lVar14 + 0x48) + 0x110);
                if (DAT_0377518c == '\0') {
                  thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                  DAT_0377518c = '\x01';
                }
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                if (fVar24 <= fVar4) {
                  if (DAT_03774d76 == '\0') {
                    thunk_FUN_00d48444(
                                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                      );
                    DAT_03774d76 = '\x01';
                  }
                  pfVar13 = *(float **)(*(long *)puVar6 + 0xb8);
                  fVar21 = *pfVar13;
                  fVar22 = pfVar13[1];
                  fVar23 = pfVar13[2];
                }
                else {
                  fVar21 = fVar21 / fVar24;
                  fVar23 = fVar20 / fVar24;
                  fVar22 = fVar19 / fVar24;
                }
                if (DAT_0377518c == '\0') {
                  thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                  DAT_0377518c = '\x01';
                }
                if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                if ((fVar24 <= fVar4) && (DAT_03774d76 == '\0')) {
                  thunk_FUN_00d48444(
                                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                    );
                  DAT_03774d76 = '\x01';
                }
                if (DAT_037750c4 == '\0') {
                  thunk_FUN_00d48444(
                                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                    );
                  DAT_037750c4 = '\x01';
                }
                if (lVar8 != 0) {
                  FUN_01948738(uVar7,fVar19,fVar20,-fVar21,-fVar22,-fVar23,lVar8,0xffff0001,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_InputActionRebindingExtensions_RebindingOperation_RemoveCandidate__
                               ,0);
                  if ((*(long *)(lVar14 + 0x48) != 0) &&
                     (lVar8 = *(long *)(*(long *)(lVar14 + 0x48) + 0x110), lVar8 != 0)) {
                    FUN_019498e8(lVar8,0);
                    if (*(long *)(lVar14 + 0x48) != 0) {
                      uVar7 = FUN_01903b2c(*(long *)(lVar14 + 0x48),0);
                      *(undefined8 *)(param_4 + 0x18) = uVar7;
                      *(undefined4 *)(param_4 + 0x10) = 2;
                      return 1;
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
  FUN_00da518c();
}


