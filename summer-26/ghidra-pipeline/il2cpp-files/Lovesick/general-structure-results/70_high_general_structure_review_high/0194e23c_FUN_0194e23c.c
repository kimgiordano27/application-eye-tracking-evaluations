/*
FUNCTION_NAME: FUN_0194e23c
ENTRY_POINT: 0194e23c
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

void FUN_0194e23c(long param_1,long *param_2)

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
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int iVar18;
  float fVar19;
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
  int local_d8;
  int local_d4;
  float local_a8;
  float fStack_a4;
  
  puVar4 = Method_UnityEngine_InputSystem_Utilities_JsonParser_JsonValue_<>c_<ToString>b__11_0__;
  if ((DAT_0377a1a9 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(Method_System_ReadOnlySpan<byte>_GetPinnableReference__);
    thunk_FUN_00d48444(
                      Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo
                      );
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
  uVar16 = **(undefined8 **)(lVar10 + 0xb8);
  if (DAT_0377a0ed == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    DAT_0377a0ed = '\x01';
  }
  puVar4 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  uVar11 = FUN_017bc96c(uVar16,**(undefined8 **)
                                 (*(long *)
                                   Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                 + 0xb8),0);
  if ((uVar11 & 1) != 0) {
    FUN_0265d9e8(uVar16,0);
  }
  uVar17 = *(undefined8 *)(param_1 + 0x68);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar11 = FUN_0268b4e0(uVar17,0,0);
  if ((uVar11 & 1) != 0) {
LAB_0194e980:
    if (DAT_0377a0ef == '\0') {
      thunk_FUN_00d48444(
                        Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                        );
      DAT_0377a0ef = '\x01';
    }
    uVar11 = FUN_017bc96c(uVar16,**(undefined8 **)
                                   (*(long *)
                                     Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                   + 0xb8),0);
    if ((uVar11 & 1) != 0) {
      FUN_0265dab4(uVar16,0);
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
  FUN_0194e068(param_1);
  FUN_0194ebe0(param_1);
  if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar9 = FUN_01946798();
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  fVar21 = *(float *)((long)param_2 + 0xa4);
  fVar23 = *(float *)(param_1 + 0x60);
  fVar20 = *(float *)(param_1 + 0x58);
  fVar25 = *(float *)(*(long *)(param_1 + 0x48) + 0x80);
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
  lVar10 = *(long *)(param_1 + 0x48);
  if (lVar10 != 0) {
    iVar18 = 0;
    iVar14 = 0;
    iVar1 = iVar9 + 1;
    fVar20 = -(fVar23 * fVar21 * fVar20);
    do {
      lVar10 = *(long *)(lVar10 + 0x90);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(int *)(lVar10 + 0x18) <= iVar14) {
        FUN_0194ee80(param_1);
        goto LAB_0194e980;
      }
      FUN_013572a0(lVar10,iVar14,&local_a8,
                   *(undefined8 *)Method_System_Collections_Generic_Stack<JSONNode>_Peek__);
      lVar10 = CONCAT44(fStack_a4,local_a8);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (0 < *(int *)(lVar10 + 0x18)) {
        uVar11 = 0;
        local_d8 = iVar1 * (iVar18 + 1);
        local_d4 = iVar1 * iVar18;
        do {
          lVar12 = *(long *)(lVar10 + 0x10);
          iVar15 = (int)uVar11;
          if (uVar11 < 2) {
            iVar15 = 1;
          }
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          if (*(uint *)(lVar12 + 0x18) <= iVar15 - 1U) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          fVar23 = *(float *)(param_1 + 0x60);
          lVar13 = lVar12 + uVar11 * 0x44;
          lVar12 = lVar12 + (ulong)(iVar15 - 1U) * 0x44;
          fVar26 = *(float *)(lVar13 + 0x20);
          fVar28 = *(float *)(lVar13 + 0x24);
          fVar27 = *(float *)(lVar13 + 0x28);
          fVar24 = *(float *)(lVar12 + 0x20);
          fVar22 = *(float *)(lVar12 + 0x24);
          fVar29 = *(float *)(lVar12 + 0x28);
          if (DAT_03774e1a == '\0') {
            thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
            DAT_03774e1a = '\x01';
          }
          if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fVar19 = fVar25 / fVar21;
          if (*(char *)(param_1 + 100) != '\0') {
            if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            fVar19 = *(float *)(*(long *)(param_1 + 0x48) + 0x80);
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
          fVar26 = fVar26 - fVar24;
          fVar28 = fVar28 - fVar22;
          fVar27 = fVar27 - fVar29;
          fVar20 = fVar20 + fVar23 * (SQRT(fVar27 * fVar27 + fVar26 * fVar26 + fVar28 * fVar28) /
                                     fVar19);
          if (-1 < iVar9) {
            iVar15 = 0;
            fVar23 = *(float *)(lVar12 + uVar11 * 0x44 + 0x60) * *(float *)(param_1 + 0x70);
            do {
              if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar12 = *(long *)(*(long *)(param_1 + 0x68) + 0x18);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_0132138c(lVar12,iVar15,&local_a8,*(undefined8 *)puVar7);
              lVar12 = *(long *)(lVar10 + 0x10);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(uint *)(lVar12 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar13 = lVar12 + uVar11 * 0x44;
              lVar12 = lVar12 + uVar11 * 0x44;
              uVar17 = *(undefined8 *)(lVar12 + 0x20);
              fVar19 = *(float *)(param_1 + 0x5c);
              fVar29 = *(float *)(lVar13 + 0x30);
              fVar22 = *(float *)(lVar13 + 0x34);
              fVar30 = *(float *)(lVar13 + 0x2c);
              fVar28 = fVar23 * ((float)*(undefined8 *)(lVar13 + 0x38) * local_a8 +
                                (float)*(undefined8 *)(lVar13 + 0x44) * fStack_a4);
              fVar27 = fVar23 * ((float)((ulong)*(undefined8 *)(lVar13 + 0x38) >> 0x20) * local_a8 +
                                (float)((ulong)*(undefined8 *)(lVar13 + 0x44) >> 0x20) * fStack_a4);
              fVar24 = fVar23 * (local_a8 * *(float *)(lVar13 + 0x40) +
                                fStack_a4 * *(float *)(lVar13 + 0x4c));
              fVar26 = fVar27 + (float)((ulong)uVar17 >> 0x20);
              FUN_00ac4f98(CONCAT44(fVar26,fVar28 + (float)uVar17),fVar26,
                           fVar24 + *(float *)(lVar12 + 0x28),*(long *)(param_1 + 0x18),
                           *(undefined8 *)puVar8);
              if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_00ac4f98(CONCAT44(fVar27,fVar28),fVar27,fVar24,*(long *)(param_1 + 0x20),
                           *(undefined8 *)puVar8);
              if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_00bcd1a4(fVar22 * fVar27 - fVar29 * fVar24,fVar24 * fVar30 - fVar22 * fVar28,
                           fVar29 * fVar28 - fVar30 * fVar27,0xbf800000,*(long *)(param_1 + 0x28),
                           *(undefined8 *)puVar5);
              lVar12 = *(long *)(lVar10 + 0x10);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(uint *)(lVar12 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar12 = lVar12 + uVar11 * 0x44;
              FUN_00ad3d7c(*(undefined4 *)(lVar12 + 0x50),*(undefined4 *)(lVar12 + 0x54),
                           *(undefined4 *)(lVar12 + 0x58),*(undefined4 *)(lVar12 + 0x5c),
                           *(long *)(param_1 + 0x38),*(undefined8 *)puVar6);
              if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_00bbed00(((float)iVar15 / (float)iVar9) * fVar19,fVar20,*(long *)(param_1 + 0x30),
                           *(undefined8 *)puVar4);
              if ((iVar15 < iVar9) && ((long)uVar11 < (long)(*(int *)(lVar10 + 0x18) + -1))) {
                if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_00ac20f0(*(long *)(param_1 + 0x40),local_d4 + iVar15,
                             *(undefined8 *)StringLiteral_4747);
                if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_00ac20f0(*(long *)(param_1 + 0x40),local_d8 + iVar15,
                             *(undefined8 *)StringLiteral_4747);
                if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                iVar2 = local_d4 + iVar15 + 1;
                FUN_00ac20f0(*(long *)(param_1 + 0x40),iVar2,*(undefined8 *)StringLiteral_4747);
                if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_00ac20f0(*(long *)(param_1 + 0x40),iVar2,*(undefined8 *)StringLiteral_4747);
                if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_00ac20f0(*(long *)(param_1 + 0x40),local_d8 + iVar15,
                             *(undefined8 *)StringLiteral_4747);
                if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_00ac20f0(*(long *)(param_1 + 0x40),local_d8 + iVar15 + 1,
                             *(undefined8 *)StringLiteral_4747);
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 <= iVar9);
          }
          uVar11 = uVar11 + 1;
          iVar18 = iVar18 + 1;
          local_d8 = local_d8 + iVar1;
          local_d4 = local_d4 + iVar1;
        } while ((long)uVar11 < (long)*(int *)(lVar10 + 0x18));
      }
      lVar10 = *(long *)(param_1 + 0x48);
      iVar14 = iVar14 + 1;
    } while (lVar10 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


