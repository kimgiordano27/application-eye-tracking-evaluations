/*
FUNCTION_NAME: FUN_0236e9bc
ENTRY_POINT: 0236e9bc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0236e9bc(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((DAT_03781d8e & 1) == 0) {
    thunk_FUN_00d48444(Sirenix_Utilities_TypeExtensions_<>c__DisplayClass48_0_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputDevice>_get_Current__
                      );
    thunk_FUN_00d48444(Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
    thunk_FUN_00d48444(StringLiteral_961);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(Method_OVRTask<__Il2CppFullySharedGenericType>_SetException__);
    thunk_FUN_00d48444(OVRManager_XrApi_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13530);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_7__);
    thunk_FUN_00d48444(PTR_DAT_033ee588);
    thunk_FUN_00d48444(Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    thunk_FUN_00d48444(Oculus_Interaction_TouchHandGrabInteractor_FingerStatus_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<NavigationMoveEvent>_TypeId__);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<InternedString,_Type>_TypeInfo);
    thunk_FUN_00d48444(Method_Mono_Security_X509_Extensions_AuthorityKeyIdentifierExtension_Encode__
                      );
    thunk_FUN_00d48444(Method_System_IO_UnexceptionalStreamReader_Read__);
    DAT_03781d8e = 1;
  }
  puVar3 = Method_UnityEngine_UIElements_EventBase<NavigationMoveEvent>_TypeId__;
  puVar2 = Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo;
  if (param_2 == 0) {
    lVar6 = *(long *)Method_UnityEngine_UIElements_EventBase<NavigationMoveEvent>_TypeId__;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar3;
    }
    param_2 = **(long **)(lVar6 + 0xb8);
  }
  lVar6 = FUN_02308ee8(*(undefined8 *)(param_1 + 0x10),0);
  lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar2 = Oculus_Interaction_TouchHandGrabInteractor_FingerStatus_TypeInfo;
  if (lVar7 != 0) {
    FUN_01320e50(lVar7,*(undefined8 *)PTR_DAT_033ee588);
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar8 != 0) {
      FUN_01320e50(lVar8,*(undefined8 *)
                          Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_7__);
      puVar2 = OVRManager_XrApi_TypeInfo;
      iVar14 = 0;
      if (*(long *)(param_1 + 0x18) != 0) {
        iVar14 = *(int *)(*(long *)(param_1 + 0x18) + 0x18);
      }
      lVar9 = *(long *)(param_1 + 0x10);
      if (lVar9 != 0) {
        iVar16 = 0;
        iVar17 = 0;
        while (iVar4 = FUN_02666048(lVar9,0), iVar17 < iVar4) {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_0236efbc;
          iVar4 = FUN_0266f260(*(long *)(param_1 + 0x10),iVar17,0);
          if (iVar4 == 2) {
            if ((*(long *)(param_1 + 0x10) == 0) ||
               (lVar9 = FUN_0266dee8(*(long *)(param_1 + 0x10),iVar17,0), lVar9 == 0))
            goto LAB_0236efbc;
            if (0 < *(int *)(lVar9 + 0x18)) {
              uVar1 = 0;
              do {
                uVar15 = uVar1;
                lVar10 = FUN_00da4fb8(*(undefined8 *)
                                       Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,6);
                if (lVar10 == 0) goto LAB_0236efbc;
                uVar1 = *(uint *)(lVar10 + 0x18);
                if (uVar1 == 0) goto LAB_0236f1a0;
                iVar4 = iVar16 + uVar15;
                *(int *)(lVar10 + 0x20) = iVar4;
                if ((uVar1 == 1) || (*(int *)(lVar10 + 0x24) = iVar4 + 1, uVar1 < 3))
                goto LAB_0236f1a0;
                *(int *)(lVar10 + 0x28) = iVar4 + 2;
                if ((uVar1 == 3) ||
                   ((*(int *)(lVar10 + 0x2c) = iVar4 + 2, uVar1 < 5 ||
                    (*(int *)(lVar10 + 0x30) = iVar4 + 3, uVar1 == 5)))) goto LAB_0236f1a0;
                *(int *)(lVar10 + 0x34) = iVar4;
                uVar5 = FUN_02300d90(iVar17,0,iVar14 + -1,0);
                FUN_022eff8c(&local_b0,0);
                uStack_88 = uStack_a8;
                local_90 = local_b0;
                uStack_78 = uStack_98;
                uStack_80 = uStack_a0;
                lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                             Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__
                                           );
                if (lVar11 == 0) goto LAB_0236efbc;
                uStack_e8 = uStack_88;
                local_f0 = local_90;
                uStack_d8 = uStack_78;
                uStack_e0 = uStack_80;
                FUN_022f986c(lVar11,lVar10,uVar5,&local_f0,0,0xffffffff,0xffffffff,1,0);
                FUN_00c9e4d8(lVar8,lVar11,
                             *(undefined8 *)
                              Method_OVRTask<__Il2CppFullySharedGenericType>_SetException__);
                if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_0236f1a0;
                if (lVar6 == 0) goto LAB_0236efbc;
                uVar1 = *(uint *)(lVar9 + (long)(int)uVar15 * 4 + 0x20);
                if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_0236f1a0;
                FUN_00ca0af8(lVar7,*(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20),
                             *(undefined8 *)puVar2);
                if ((((*(uint *)(lVar9 + 0x18) <= uVar15 + 1) ||
                     (uVar1 = *(uint *)(lVar9 + (long)(int)(uVar15 + 1) * 4 + 0x20),
                     *(uint *)(lVar6 + 0x18) <= uVar1)) ||
                    (FUN_00ca0af8(lVar7,*(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20),
                                  *(undefined8 *)puVar2), *(uint *)(lVar9 + 0x18) <= uVar15 + 2)) ||
                   (((uVar1 = *(uint *)(lVar9 + (long)(int)(uVar15 + 2) * 4 + 0x20),
                     *(uint *)(lVar6 + 0x18) <= uVar1 ||
                     (FUN_00ca0af8(lVar7,*(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20),
                                   *(undefined8 *)puVar2), *(uint *)(lVar9 + 0x18) <= uVar15 + 3))
                    || (uVar1 = *(uint *)(lVar9 + (long)(int)(uVar15 + 3) * 4 + 0x20),
                       *(uint *)(lVar6 + 0x18) <= uVar1)))) goto LAB_0236f1a0;
                FUN_00ca0af8(lVar7,*(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20),
                             *(undefined8 *)puVar2);
                uVar1 = uVar15 + 4;
              } while ((int)(uVar15 + 4) < *(int *)(lVar9 + 0x18));
              iVar4 = uVar15 + 4;
              goto LAB_0236efa8;
            }
          }
          else {
            if (iVar4 != 0) {
              thunk_FUN_00d48444(Method_RCG_Events_ShowPromptOnMessage_OnTeleport__);
              uVar12 = thunk_FUN_00d62348();
              FUN_00ac2be8();
              uVar13 = thunk_FUN_00d48444(System_Func<STMAudioClipData,_string>_TypeInfo);
              FUN_0176c578(uVar12,uVar13,0);
              uVar13 = thunk_FUN_00d48444(
                                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonReader_<SkipAsync>d__1>__
                                         );
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar12,uVar13);
            }
            if ((*(long *)(param_1 + 0x10) == 0) ||
               (lVar9 = FUN_0266dee8(*(long *)(param_1 + 0x10),iVar17,0), lVar9 == 0))
            goto LAB_0236efbc;
            if (0 < *(int *)(lVar9 + 0x18)) {
              uVar1 = 0;
              do {
                uVar15 = uVar1;
                lVar10 = FUN_00da4fb8(*(undefined8 *)
                                       Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,3);
                if (lVar10 == 0) goto LAB_0236efbc;
                uVar1 = *(uint *)(lVar10 + 0x18);
                if (uVar1 == 0) {
LAB_0236f1a0:
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                iVar4 = iVar16 + uVar15;
                *(int *)(lVar10 + 0x20) = iVar4;
                if ((uVar1 == 1) || (*(int *)(lVar10 + 0x24) = iVar4 + 1, uVar1 < 3))
                goto LAB_0236f1a0;
                *(int *)(lVar10 + 0x28) = iVar4 + 2;
                uVar5 = FUN_02300d90(iVar17,0,iVar14 + -1,0);
                FUN_022eff8c(&local_b0,0);
                uStack_88 = uStack_a8;
                local_90 = local_b0;
                uStack_78 = uStack_98;
                uStack_80 = uStack_a0;
                lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                             Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__
                                           );
                if (lVar11 == 0) goto LAB_0236efbc;
                uStack_c8 = uStack_88;
                local_d0 = local_90;
                uStack_b8 = uStack_78;
                uStack_c0 = uStack_80;
                FUN_022f986c(lVar11,lVar10,uVar5,&local_d0,0,0xffffffff,0xffffffff,1,0);
                FUN_00c9e4d8(lVar8,lVar11,
                             *(undefined8 *)
                              Method_OVRTask<__Il2CppFullySharedGenericType>_SetException__);
                if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_0236f1a0;
                if (lVar6 == 0) goto LAB_0236efbc;
                uVar1 = *(uint *)(lVar9 + (long)(int)uVar15 * 4 + 0x20);
                if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_0236f1a0;
                FUN_00ca0af8(lVar7,*(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20),
                             *(undefined8 *)puVar2);
                if ((((*(uint *)(lVar9 + 0x18) <= uVar15 + 1) ||
                     (uVar1 = *(uint *)(lVar9 + (long)(int)(uVar15 + 1) * 4 + 0x20),
                     *(uint *)(lVar6 + 0x18) <= uVar1)) ||
                    (FUN_00ca0af8(lVar7,*(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20),
                                  *(undefined8 *)puVar2), *(uint *)(lVar9 + 0x18) <= uVar15 + 2)) ||
                   (uVar1 = *(uint *)(lVar9 + (long)(int)(uVar15 + 2) * 4 + 0x20),
                   *(uint *)(lVar6 + 0x18) <= uVar1)) goto LAB_0236f1a0;
                FUN_00ca0af8(lVar7,*(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20),
                             *(undefined8 *)puVar2);
                uVar1 = uVar15 + 3;
              } while ((int)(uVar15 + 3) < *(int *)(lVar9 + 0x18));
              iVar4 = uVar15 + 3;
LAB_0236efa8:
              iVar16 = iVar16 + iVar4;
            }
          }
          lVar9 = *(long *)(param_1 + 0x10);
          iVar17 = iVar17 + 1;
          if (lVar9 == 0) goto LAB_0236efbc;
        }
        uVar12 = FUN_01325140(lVar7,*(undefined8 *)StringLiteral_13530);
        *(undefined8 *)(param_1 + 0x28) = uVar12;
        if (*(long *)(param_1 + 0x20) != 0) {
          FUN_02310d18(*(long *)(param_1 + 0x20),0);
          puVar2 = Method_System_IO_UnexceptionalStreamReader_Read__;
          if (*(long *)(param_1 + 0x20) != 0) {
            FUN_02310a38(*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),0,0);
            if (*(long *)(param_1 + 0x20) != 0) {
              FUN_0230f6a8(*(long *)(param_1 + 0x20),lVar8,0);
              lVar6 = *(long *)(param_1 + 0x20);
              if (lVar6 != 0) {
                uVar12 = FUN_0232e128(*(undefined8 *)(lVar6 + 0x50),0);
                FUN_0230fc64(lVar6,uVar12,0);
                lVar6 = *(long *)(param_1 + 0x20);
                uVar12 = FUN_00da4fb8(*(undefined8 *)
                                       System_Collections_Generic_Dictionary<InternedString,_Type>_TypeInfo
                                      ,0);
                if ((lVar6 != 0) && (FUN_0230ffc8(lVar6,uVar12,0), param_2 != 0)) {
                  if (*(char *)(param_2 + 0x10) != '\0') {
                    lVar6 = *(long *)(param_1 + 0x20);
                    if (lVar6 == 0) goto LAB_0236efbc;
                    FUN_0236f1f0(lVar6,*(undefined8 *)(lVar6 + 0x20),
                                 *(char *)(param_2 + 0x11) == '\0');
                  }
                  if (*(char *)(param_2 + 0x11) == '\0') {
                    return;
                  }
                  lVar6 = *(long *)(param_1 + 0x20);
                  if (lVar6 != 0) {
                    lVar7 = *(long *)puVar2;
                    uVar13 = *(undefined8 *)(lVar6 + 0x20);
                    uVar5 = *(undefined4 *)(param_2 + 0x14);
                    uVar12 = *(undefined8 *)(param_1 + 0x28);
                    if (*(int *)(lVar7 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar7 = *(long *)puVar2;
                    }
                    lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
                    if (lVar8 == 0) {
                      if (*(int *)(lVar7 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar7 = *(long *)puVar2;
                      }
                      uVar18 = **(undefined8 **)(lVar7 + 0xb8);
                      lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_961);
                      if (lVar8 == 0) goto LAB_0236efbc;
                      FUN_012d239c(lVar8,uVar18,
                                   *(undefined8 *)
                                    Method_Mono_Security_X509_Extensions_AuthorityKeyIdentifierExtension_Encode__
                                   ,0);
                      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar8;
                    }
                    uVar12 = FUN_010dcdb8(uVar12,lVar8,
                                          *(undefined8 *)
                                           Sirenix_Utilities_TypeExtensions_<>c__DisplayClass48_0_TypeInfo
                                         );
                    uVar12 = FUN_010df6b8(uVar12,*(undefined8 *)
                                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<InputDevice>_get_Current__
                                         );
                    FUN_02330820(uVar5,lVar6,uVar13,uVar12,0);
                    lVar6 = *(long *)(param_1 + 0x20);
                    if (lVar6 != 0) {
                      FUN_0236d764(lVar6,*(undefined8 *)(lVar6 + 0x20));
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
LAB_0236efbc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


