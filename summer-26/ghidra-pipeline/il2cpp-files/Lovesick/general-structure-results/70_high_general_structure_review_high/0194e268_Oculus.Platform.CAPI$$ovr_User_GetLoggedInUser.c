/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_User_GetLoggedInUser
ENTRY_POINT: 0194e268
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_13;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0194ea70) */

void Oculus_Platform_CAPI__ovr_User_GetLoggedInUser(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int iStack0000000000000018;
  int iStack000000000000001c;
  long lStack0000000000000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  
  puVar4 = Method_UnityEngine_InputSystem_Utilities_JsonParser_JsonValue_<>c_<ToString>b__11_0__;
  lStack0000000000000040 = param_1;
  if ((DAT_0377a1a9 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4747);
                    /* try { // try from 0194e290 to 01a4e29f has its CatchHandler @ 0194e2a0 */
    thunk_FUN_00d48444(Method_System_ReadOnlySpan<byte>_GetPinnableReference__);
                    /* catch() { ... } // from try @ 0194e1dc with catch @ 0194e2a0
                       catch() { ... } // from try @ 0194e290 with catch @ 0194e2a0 */
                    /* try { // try from 0194e2a4 to 01a4e2a7 has its CatchHandler @ 0194e2b0 */
    thunk_FUN_00d48444(
                      Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo
                      );
                    /* try { // try from 0194e2a8 to 01a4e2b3 has its CatchHandler @ 0194dda8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0194e2a4 with catch @ 0194e2b0
                        */
    thunk_FUN_00d48444(StringLiteral_1006);
    thunk_FUN_00d48444(Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<string,_STMTextInfo>__ctor__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_<OnAfterInteractionEvents>d__45_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(StringLiteral_14415);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<ITimer>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<JSONNode>_Peek__);
    thunk_FUN_00d48444(StringLiteral_8498);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_JsonParser_JsonValue_<>c_<ToString>b__11_0__
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_0377a1a9 = 1;
  }
  lVar10 = *(long *)puVar4;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar10 = *(long *)puVar4;
  }
  uVar17 = **(undefined8 **)(lVar10 + 0xb8);
  if (DAT_0377a0ed == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    DAT_0377a0ed = '\x01';
  }
  puVar4 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  uVar11 = FUN_017bc96c(uVar17,**(undefined8 **)
                                 (*(long *)
                                   Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                 + 0xb8),0);
  if ((uVar11 & 1) != 0) {
    FUN_0265d9e8(uVar17,0);
  }
  uVar18 = *(undefined8 *)(lStack0000000000000040 + 0x68);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar11 = FUN_0268b4e0(uVar18,0,0);
  lVar10 = lStack0000000000000040;
  if ((uVar11 & 1) != 0) {
LAB_0194e980:
    if (DAT_0377a0ef == '\0') {
      thunk_FUN_00d48444(
                        Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                        );
      DAT_0377a0ef = '\x01';
    }
    uVar11 = FUN_017bc96c(uVar17,**(undefined8 **)
                                   (*(long *)
                                     Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                   + 0xb8),0);
    if ((uVar11 & 1) != 0) {
      FUN_0265dab4(uVar17,0);
    }
    return;
  }
  if (param_2 != (long *)0x0) {
    bVar3 = *(byte *)(*(long *)StringLiteral_8498 + 300);
    if (bVar3 <= *(byte *)(*param_2 + 300)) {
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar3 * 8 + -8) !=
          *(long *)StringLiteral_8498) {
        param_2 = (long *)0x0;
      }
      goto LAB_0194e40c;
    }
  }
  param_2 = (long *)0x0;
LAB_0194e40c:
  FUN_0194e068(lStack0000000000000040);
  FUN_0194ebe0(lVar10);
  if (*(long *)(lVar10 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar9 = FUN_01946798();
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(long *)(lStack0000000000000040 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  fVar22 = *(float *)((long)param_2 + 0xa4);
  fVar24 = *(float *)(lStack0000000000000040 + 0x60);
  fVar21 = *(float *)(lStack0000000000000040 + 0x58);
  fVar26 = *(float *)(*(long *)(lStack0000000000000040 + 0x48) + 0x80);
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  if (DAT_037757b3 == '\0') {
    thunk_FUN_00d48444(Method_System_Nullable<XRBaseInteractable_MovementType>__ctor__);
    DAT_037757b3 = '\x01';
  }
  if (DAT_03774d77 == '\0') {
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__);
    DAT_03774d77 = '\x01';
  }
  puVar8 = StringLiteral_1006;
  puVar7 = Method_UnityEngine_Events_UnityEvent<string,_STMTextInfo>__ctor__;
  puVar6 = Method_System_ReadOnlySpan<byte>_GetPinnableReference__;
  puVar5 = 
  Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo
  ;
  puVar4 = Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
  lVar10 = *(long *)(lStack0000000000000040 + 0x48);
  if (lVar10 != 0) {
    iVar19 = 0;
    iVar15 = 0;
    iVar1 = iVar9 + 1;
    fVar21 = -(fVar24 * fVar22 * fVar21);
    do {
      lVar10 = *(long *)(lVar10 + 0x90);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(int *)(lVar10 + 0x18) <= iVar15) {
        FUN_0194ee80(lStack0000000000000040);
        goto LAB_0194e980;
      }
      FUN_013572a0(lVar10,iVar15,&stack0x00000048,
                   *(undefined8 *)Method_System_Collections_Generic_Stack<JSONNode>_Peek__);
      lVar10 = CONCAT44(fStack000000000000004c,fStack0000000000000048);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (0 < *(int *)(lVar10 + 0x18)) {
        uVar11 = 0;
        iStack0000000000000018 = iVar1 * (iVar19 + 1);
        iStack000000000000001c = iVar1 * iVar19;
        do {
          lVar12 = *(long *)(lVar10 + 0x10);
          iVar16 = (int)uVar11;
          if (uVar11 < 2) {
            iVar16 = 1;
          }
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          if (*(uint *)(lVar12 + 0x18) <= iVar16 - 1U) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          fVar24 = *(float *)(lStack0000000000000040 + 0x60);
          lVar14 = lVar12 + uVar11 * 0x44;
          lVar12 = lVar12 + (ulong)(iVar16 - 1U) * 0x44;
          fVar27 = *(float *)(lVar14 + 0x20);
          fVar29 = *(float *)(lVar14 + 0x24);
          fVar28 = *(float *)(lVar14 + 0x28);
          fVar25 = *(float *)(lVar12 + 0x20);
          fVar23 = *(float *)(lVar12 + 0x24);
          fVar30 = *(float *)(lVar12 + 0x28);
          if (DAT_03774e1a == '\0') {
            thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
            DAT_03774e1a = '\x01';
          }
          if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fVar20 = fVar26 / fVar22;
          if (*(char *)(lStack0000000000000040 + 100) != '\0') {
            if (*(long *)(lStack0000000000000040 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            fVar20 = *(float *)(*(long *)(lStack0000000000000040 + 0x48) + 0x80);
          }
          lVar12 = *(long *)(lVar10 + 0x10);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          fVar27 = fVar27 - fVar25;
          fVar29 = fVar29 - fVar23;
          fVar28 = fVar28 - fVar30;
          fVar21 = fVar21 + fVar24 * (SQRT(fVar28 * fVar28 + fVar27 * fVar27 + fVar29 * fVar29) /
                                     fVar20);
          if (-1 < iVar9) {
            iVar16 = 0;
            fVar24 = *(float *)(lVar12 + uVar11 * 0x44 + 0x60) *
                     *(float *)(lStack0000000000000040 + 0x70);
            do {
              if (*(long *)(lStack0000000000000040 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar12 = *(long *)(*(long *)(lStack0000000000000040 + 0x68) + 0x18);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_0132138c(lVar12,iVar16,&stack0x00000048,*(undefined8 *)puVar7);
              lVar12 = lStack0000000000000040;
              lVar14 = *(long *)(lVar10 + 0x10);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(uint *)(lVar14 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              if (*(long *)(lStack0000000000000040 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar13 = lVar14 + uVar11 * 0x44;
              lVar14 = lVar14 + uVar11 * 0x44;
              uVar18 = *(undefined8 *)(lVar14 + 0x20);
              fVar20 = *(float *)(lStack0000000000000040 + 0x5c);
              fVar30 = *(float *)(lVar13 + 0x30);
              fVar23 = *(float *)(lVar13 + 0x34);
              fVar31 = *(float *)(lVar13 + 0x2c);
              fVar29 = fVar24 * ((float)*(undefined8 *)(lVar13 + 0x38) * fStack0000000000000048 +
                                (float)*(undefined8 *)(lVar13 + 0x44) * fStack000000000000004c);
              fVar28 = fVar24 * ((float)((ulong)*(undefined8 *)(lVar13 + 0x38) >> 0x20) *
                                 fStack0000000000000048 +
                                (float)((ulong)*(undefined8 *)(lVar13 + 0x44) >> 0x20) *
                                fStack000000000000004c);
              fVar25 = fVar24 * (fStack0000000000000048 * *(float *)(lVar13 + 0x40) +
                                fStack000000000000004c * *(float *)(lVar13 + 0x4c));
              fVar27 = fVar28 + (float)((ulong)uVar18 >> 0x20);
              FUN_00ac4f98(CONCAT44(fVar27,fVar29 + (float)uVar18),fVar27,
                           fVar25 + *(float *)(lVar14 + 0x28),
                           *(long *)(lStack0000000000000040 + 0x18),*(undefined8 *)puVar8);
              if (*(long *)(lVar12 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_00ac4f98(CONCAT44(fVar28,fVar29),fVar28,fVar25,*(long *)(lVar12 + 0x20),
                           *(undefined8 *)puVar8);
              if (*(long *)(lStack0000000000000040 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_00bcd1a4(fVar23 * fVar28 - fVar30 * fVar25,fVar25 * fVar31 - fVar23 * fVar29,
                           fVar30 * fVar29 - fVar31 * fVar28,0xbf800000,
                           *(long *)(lStack0000000000000040 + 0x28),*(undefined8 *)puVar5);
              lVar12 = *(long *)(lVar10 + 0x10);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(uint *)(lVar12 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              if (*(long *)(lStack0000000000000040 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar12 = lVar12 + uVar11 * 0x44;
              FUN_00ad3d7c(*(undefined4 *)(lVar12 + 0x50),*(undefined4 *)(lVar12 + 0x54),
                           *(undefined4 *)(lVar12 + 0x58),*(undefined4 *)(lVar12 + 0x5c),
                           *(long *)(lStack0000000000000040 + 0x38),*(undefined8 *)puVar6);
              if (*(long *)(lStack0000000000000040 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_00bbed00(((float)iVar16 / (float)iVar9) * fVar20,fVar21,
                           *(long *)(lStack0000000000000040 + 0x30),*(undefined8 *)puVar4);
              if ((iVar16 < iVar9) && ((long)uVar11 < (long)(*(int *)(lVar10 + 0x18) + -1))) {
                if (*(long *)(lStack0000000000000040 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_00ac20f0(*(long *)(lStack0000000000000040 + 0x40),
                             iStack000000000000001c + iVar16,*(undefined8 *)StringLiteral_4747);
                if (*(long *)(lStack0000000000000040 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_00ac20f0(*(long *)(lStack0000000000000040 + 0x40),
                             iStack0000000000000018 + iVar16,*(undefined8 *)StringLiteral_4747);
                if (*(long *)(lStack0000000000000040 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                iVar2 = iStack000000000000001c + iVar16 + 1;
                FUN_00ac20f0(*(long *)(lStack0000000000000040 + 0x40),iVar2,
                             *(undefined8 *)StringLiteral_4747);
                if (*(long *)(lStack0000000000000040 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_00ac20f0(*(long *)(lStack0000000000000040 + 0x40),iVar2,
                             *(undefined8 *)StringLiteral_4747);
                if (*(long *)(lStack0000000000000040 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_00ac20f0(*(long *)(lStack0000000000000040 + 0x40),
                             iStack0000000000000018 + iVar16,*(undefined8 *)StringLiteral_4747);
                if (*(long *)(lStack0000000000000040 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_00ac20f0(*(long *)(lStack0000000000000040 + 0x40),
                             iStack0000000000000018 + iVar16 + 1,*(undefined8 *)StringLiteral_4747);
              }
              iVar16 = iVar16 + 1;
            } while (iVar16 <= iVar9);
          }
          uVar11 = uVar11 + 1;
          iVar19 = iVar19 + 1;
          iStack0000000000000018 = iStack0000000000000018 + iVar1;
          iStack000000000000001c = iStack000000000000001c + iVar1;
        } while ((long)uVar11 < (long)*(int *)(lVar10 + 0x18));
      }
      lVar10 = *(long *)(lStack0000000000000040 + 0x48);
      iVar15 = iVar15 + 1;
    } while (lVar10 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


