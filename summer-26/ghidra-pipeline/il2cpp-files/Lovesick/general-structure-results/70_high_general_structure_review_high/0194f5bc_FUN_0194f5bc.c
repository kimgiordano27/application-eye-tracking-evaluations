/*
FUNCTION_NAME: FUN_0194f5bc
ENTRY_POINT: 0194f5bc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0194ffac) */

void FUN_0194f5bc(undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  long lVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
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
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_b4;
  float local_b0;
  float local_ac;
  long local_a8;
  
  puVar3 = Method_System_Collections_Generic_List<Match>_Contains__;
  if ((DAT_0377a1b0 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(Method_System_ReadOnlySpan<byte>_GetPinnableReference__);
    thunk_FUN_00d48444(
                      Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_1006);
    thunk_FUN_00d48444(Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_<OnAfterInteractionEvents>d__45_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(StringLiteral_14415);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponent<ITimer>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<JSONNode>_Peek__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Match>_Contains__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_0377a1b0 = 1;
  }
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar3;
  }
  uVar12 = **(undefined8 **)(lVar7 + 0xb8);
  if (DAT_0377a0ed == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    DAT_0377a0ed = '\x01';
  }
  puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  uVar8 = FUN_017bc96c(uVar12,**(undefined8 **)
                                (*(long *)
                                  Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                + 0xb8),0);
  if ((uVar8 & 1) != 0) {
    FUN_0265d9e8(uVar12,0);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_0268b4e0(param_5,0,0);
  if ((uVar8 & 1) == 0) {
    if (*(long *)(param_4 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    lVar7 = FUN_0268fd4c(*(long *)(param_4 + 0x48),0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar8 = FUN_0268ad68(lVar7,0);
    if ((uVar8 & 1) != 0) {
      FUN_0194f358(param_4);
      FUN_01950180(param_4);
      if (*(long *)(param_4 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar7 = *(long *)(param_4 + 0x48);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      fVar28 = *(float *)(*(long *)(param_4 + 0x50) + 0x80);
      fVar30 = *(float *)(lVar7 + 0xa4);
      fVar32 = *(float *)(param_4 + 0x70);
      fVar26 = *(float *)(param_4 + 0x68);
      lVar7 = FUN_0268fd10(lVar7,0);
      if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar9 = FUN_0268fd10(param_5,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0269f578(lVar9,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      fVar17 = (float)FUN_026a0f08(lVar7,0);
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
      puVar6 = StringLiteral_1006;
      puVar5 = Method_System_ReadOnlySpan<byte>_GetPinnableReference__;
      puVar4 = 
      Newtonsoft_Json_Utilities_ThreadSafeStore<StructMultiKey<Type,_NamingStrategy>,_EnumInfo>_TypeInfo
      ;
      puVar3 = Oculus_Platform_Request<AssetFileDownloadCancelResult>_TypeInfo;
      fVar2 = DAT_028aa038;
      lVar7 = *(long *)(param_4 + 0x50);
      if (lVar7 != 0) {
        local_ac = -(fVar30 * fVar32 * fVar26);
        iVar13 = 0;
        iVar15 = 0;
        do {
          lVar7 = *(long *)(lVar7 + 0x90);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(int *)(lVar7 + 0x18) <= iVar15) {
            FUN_01950420(param_4);
            goto LAB_0194fe98;
          }
          FUN_013572a0(lVar7,iVar15,&local_a8,
                       *(undefined8 *)Method_System_Collections_Generic_Stack<JSONNode>_Peek__);
          lVar7 = local_a8;
          if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (0 < *(int *)(local_a8 + 0x18)) {
            uVar8 = 0;
            iVar14 = iVar13 << 1;
            lVar9 = 0x30;
            do {
              lVar10 = *(long *)(lVar7 + 0x10);
              iVar16 = (int)uVar8;
              if (uVar8 < 2) {
                iVar16 = 1;
              }
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(uint *)(lVar10 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              if (*(uint *)(lVar10 + 0x18) <= iVar16 - 1U) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              fVar26 = *(float *)(param_4 + 0x70);
              lVar1 = lVar10 + lVar9;
              lVar10 = lVar10 + (ulong)(iVar16 - 1U) * 0x44;
              fVar18 = *(float *)(lVar1 + -0x10);
              fVar32 = *(float *)(lVar1 + -0xc);
              fVar19 = *(float *)(lVar1 + -8);
              fVar20 = *(float *)(lVar10 + 0x20);
              fVar21 = *(float *)(lVar10 + 0x24);
              fVar22 = *(float *)(lVar10 + 0x28);
              if (DAT_03774e1a == '\0') {
                thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                DAT_03774e1a = '\x01';
              }
              if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              local_b4 = fVar28 / fVar30;
              if (*(char *)(param_4 + 0x74) != '\0') {
                if (*(long *)(param_4 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                local_b4 = *(float *)(*(long *)(param_4 + 0x50) + 0x80);
              }
              lVar10 = *(long *)(lVar7 + 0x10);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(uint *)(lVar10 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              fVar23 = *(float *)(param_4 + 0x78);
              lVar10 = lVar10 + lVar9;
              fVar31 = *(float *)(lVar10 + 0x30);
              local_b0 = *(float *)(lVar10 + -0x10);
              fVar29 = *(float *)(lVar10 + -0xc);
              fVar27 = *(float *)(lVar10 + -8);
              if (DAT_0377518c == '\0') {
                thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                DAT_0377518c = '\x01';
              }
              if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              local_b0 = local_b0 - fVar17;
              fVar29 = fVar29 - param_2;
              fVar27 = fVar27 - param_3;
              fVar25 = SQRT(fVar27 * fVar27 + local_b0 * local_b0 + fVar29 * fVar29);
              if (fVar25 <= fVar2) {
                if (DAT_03774d76 == '\0') {
                  thunk_FUN_00d48444(
                                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                    );
                  DAT_03774d76 = '\x01';
                }
                pfVar11 = *(float **)
                           (*(long *)
                             Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                           + 0xb8);
                local_b0 = *pfVar11;
                fVar29 = pfVar11[1];
                fVar27 = pfVar11[2];
              }
              else {
                local_b0 = local_b0 / fVar25;
                fVar29 = fVar29 / fVar25;
                fVar27 = fVar27 / fVar25;
              }
              lVar10 = *(long *)(lVar7 + 0x10);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(uint *)(lVar10 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              pfVar11 = (float *)(lVar10 + lVar9);
              fVar25 = *pfVar11;
              fVar34 = pfVar11[1];
              fVar33 = pfVar11[-1];
              if (DAT_037757b2 == '\0') {
                thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                DAT_037757b2 = '\x01';
              }
              if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              fVar24 = fVar29 * fVar34 - fVar27 * fVar25;
              fVar34 = fVar27 * fVar33 - local_b0 * fVar34;
              fVar25 = local_b0 * fVar25 - fVar29 * fVar33;
              fVar33 = SQRT(fVar25 * fVar25 + fVar24 * fVar24 + fVar34 * fVar34 + 0.0);
              if (fVar33 <= fVar2) {
                if (DAT_037757b3 == '\0') {
                  thunk_FUN_00d48444(Method_System_Nullable<XRBaseInteractable_MovementType>__ctor__
                                    );
                  DAT_037757b3 = '\x01';
                }
                pfVar11 = *(float **)
                           (*(long *)Method_System_Nullable<XRBaseInteractable_MovementType>__ctor__
                           + 0xb8);
                fVar24 = *pfVar11;
                fVar34 = pfVar11[1];
                fVar33 = pfVar11[2];
              }
              else {
                fVar24 = -fVar24 / fVar33;
                fVar34 = -fVar34 / fVar33;
                fVar33 = -fVar25 / fVar33;
              }
              lVar10 = *(long *)(lVar7 + 0x10);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(uint *)(lVar10 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              if (*(long *)(param_4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar10 = lVar10 + lVar9;
              fVar31 = fVar31 * fVar23;
              FUN_00ac4f98(*(float *)(lVar10 + -0x10) - fVar31 * fVar24,
                           *(float *)(lVar10 + -0xc) - fVar31 * fVar34,
                           *(float *)(lVar10 + -8) - fVar31 * fVar33,*(long *)(param_4 + 0x18),
                           *(undefined8 *)puVar6);
              lVar10 = *(long *)(lVar7 + 0x10);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(uint *)(lVar10 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              if (*(long *)(param_4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar10 = lVar10 + lVar9;
              FUN_00ac4f98(fVar31 * fVar24 + *(float *)(lVar10 + -0x10),
                           fVar31 * fVar34 + *(float *)(lVar10 + -0xc),
                           fVar31 * fVar33 + *(float *)(lVar10 + -8),*(long *)(param_4 + 0x18),
                           *(undefined8 *)puVar6);
              if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_00ac4f98(-local_b0,-fVar29,-fVar27,*(long *)(param_4 + 0x20),*(undefined8 *)puVar6
                          );
              if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_00ac4f98(-local_b0,-fVar29,-fVar27,*(long *)(param_4 + 0x20),*(undefined8 *)puVar6
                          );
              if (*(long *)(param_4 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_00bcd1a4(fVar24,fVar34,fVar33,0x3f800000,*(long *)(param_4 + 0x28),
                           *(undefined8 *)puVar4);
              if (*(long *)(param_4 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_00bcd1a4(fVar24,fVar34,fVar33,0x3f800000,*(long *)(param_4 + 0x28),
                           *(undefined8 *)puVar4);
              lVar10 = *(long *)(lVar7 + 0x10);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(uint *)(lVar10 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              if (*(long *)(param_4 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar10 = lVar10 + lVar9;
              FUN_00ad3d7c(*(undefined4 *)(lVar10 + 0x20),*(undefined4 *)(lVar10 + 0x24),
                           *(undefined4 *)(lVar10 + 0x28),*(undefined4 *)(lVar10 + 0x2c),
                           *(long *)(param_4 + 0x38),*(undefined8 *)puVar5);
              lVar10 = *(long *)(lVar7 + 0x10);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              if (*(uint *)(lVar10 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              if (*(long *)(param_4 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              lVar10 = lVar10 + lVar9;
              FUN_00ad3d7c(*(undefined4 *)(lVar10 + 0x20),*(undefined4 *)(lVar10 + 0x24),
                           *(undefined4 *)(lVar10 + 0x28),*(undefined4 *)(lVar10 + 0x2c),
                           *(long *)(param_4 + 0x38),*(undefined8 *)puVar5);
              if (*(long *)(param_4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              fVar18 = fVar18 - fVar20;
              fVar32 = fVar32 - fVar21;
              fVar19 = fVar19 - fVar22;
              local_ac = local_ac +
                         fVar26 * (SQRT(fVar19 * fVar19 + fVar18 * fVar18 + fVar32 * fVar32) /
                                  local_b4);
              FUN_00bbed00(0,*(long *)(param_4 + 0x30),*(undefined8 *)puVar3);
              if (*(long *)(param_4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_00bbed00(0x3f800000,local_ac,*(long *)(param_4 + 0x30),*(undefined8 *)puVar3);
              if ((long)uVar8 < (long)(*(int *)(lVar7 + 0x18) + -1)) {
                if (*(long *)(param_4 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_00ac20f0(*(long *)(param_4 + 0x40),iVar14,*(undefined8 *)StringLiteral_4747);
                if (*(long *)(param_4 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_00ac20f0(*(long *)(param_4 + 0x40),iVar14 + 2,*(undefined8 *)StringLiteral_4747)
                ;
                if (*(long *)(param_4 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_00ac20f0(*(long *)(param_4 + 0x40),iVar14 + 1,*(undefined8 *)StringLiteral_4747)
                ;
                if (*(long *)(param_4 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_00ac20f0(*(long *)(param_4 + 0x40),iVar14 + 1,*(undefined8 *)StringLiteral_4747)
                ;
                if (*(long *)(param_4 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_00ac20f0(*(long *)(param_4 + 0x40),iVar14 + 2,*(undefined8 *)StringLiteral_4747)
                ;
                if (*(long *)(param_4 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00da518c();
                }
                FUN_00ac20f0(*(long *)(param_4 + 0x40),iVar14 + 3,*(undefined8 *)StringLiteral_4747)
                ;
              }
              uVar8 = uVar8 + 1;
              iVar14 = iVar14 + 2;
              lVar9 = lVar9 + 0x44;
            } while ((long)uVar8 < (long)*(int *)(lVar7 + 0x18));
            iVar13 = iVar13 + (int)uVar8;
          }
          lVar7 = *(long *)(param_4 + 0x50);
          iVar15 = iVar15 + 1;
        } while (lVar7 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
LAB_0194fe98:
  if (DAT_0377a0ef == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    DAT_0377a0ef = '\x01';
  }
  uVar8 = FUN_017bc96c(uVar12,**(undefined8 **)
                                (*(long *)
                                  Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                                + 0xb8),0);
  if ((uVar8 & 1) != 0) {
    FUN_0265dab4(uVar12,0);
  }
  return;
}


