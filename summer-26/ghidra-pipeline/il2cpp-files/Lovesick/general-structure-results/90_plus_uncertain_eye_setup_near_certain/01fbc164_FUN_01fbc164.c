/*
FUNCTION_NAME: FUN_01fbc164
ENTRY_POINT: 01fbc164
PROGRAM: Lovesick-libil2cpp.so
SCORE: 126
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_01fbc164(void)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  
  puVar7 = Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__;
  if ((DAT_03780683 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_UnitySerializationUtility_DeserializeUnityObject__
                      );
    thunk_FUN_00d48444(Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f19d8);
    thunk_FUN_00d48444(
                      Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_67_0>d>__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<__Il2CppFullySharedGenericType>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<float[]>__ctor__);
    thunk_FUN_00d48444(OVRTrackedKeyboard_<>c_TypeInfo);
    thunk_FUN_00d48444(Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5925);
    DAT_03780683 = 1;
  }
  lVar10 = *(long *)puVar7;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar10 = *(long *)puVar7;
  }
  puVar6 = Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__;
  lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x2a8);
  if (lVar10 != 0) {
    if (*(uint *)(lVar10 + 0x18) < 0xc) goto LAB_01fbc92c;
    if (*(long *)(lVar10 + 0x78) != 0) {
      uVar16 = *(undefined8 *)(*(long *)(lVar10 + 0x78) + 0x10);
      lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_FullSerializer_fsDirectConverter<Keyframe>__ctor__);
      puVar5 = Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo;
      if (lVar10 != 0) {
        FUN_01f75d58(lVar10,uVar16,
                     *(undefined8 *)Unity_XR_CoreUtils_TypeExtensions_<>c__DisplayClass2_0_TypeInfo,
                     0);
        lVar11 = FUN_01fbcbb8(*(undefined8 *)(lVar10 + 0x10));
        lVar12 = FUN_01fbcc78(lVar10,lVar11);
        plVar14 = *(long **)(*(long *)puVar7 + 0xb8);
        plVar14[2] = lVar12;
        if (lVar11 != 0) {
          *(long *)(lVar11 + 0x30) = lVar12;
          puVar8 = StringLiteral_5925;
          puVar4 = OVRTrackedKeyboard_<>c_TypeInfo;
          puVar3 = PTR_DAT_033f19d8;
          plVar14 = (long *)*plVar14;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 0x2a8))(plVar14,lVar10,lVar12,*(undefined8 *)(*plVar14 + 0x2b0))
            ;
            uVar17 = 0;
            while( true ) {
              lVar10 = *(long *)puVar7;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar10 = *(long *)puVar7;
              }
              lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x2a8);
              if (lVar11 == 0) goto LAB_01fbc928;
              if ((long)*(int *)(lVar11 + 0x18) <= (long)uVar17) break;
              if (uVar17 != 0xb) {
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar11 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x2a8);
                  if (lVar11 == 0) goto LAB_01fbc928;
                }
                if (*(uint *)(lVar11 + 0x18) <= uVar17) goto LAB_01fbc92c;
                lVar10 = *(long *)(lVar11 + uVar17 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_01fbc928;
                uVar16 = *(undefined8 *)(lVar10 + 0x10);
                lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                if (lVar10 == 0) goto LAB_01fbc928;
                FUN_01f75d58(lVar10,uVar16,*(undefined8 *)puVar5,0);
                plVar14 = (long *)FUN_01fbcbb8(*(undefined8 *)(lVar10 + 0x10));
                lVar11 = FUN_01fbcc78(lVar10,plVar14);
                if (plVar14 == (long *)0x0) goto LAB_01fbc928;
                plVar14[6] = lVar11;
                plVar13 = (long *)**(long **)(*(long *)puVar7 + 0xb8);
                if (plVar13 == (long *)0x0) goto LAB_01fbc928;
                (**(code **)(*plVar13 + 0x2a8))
                          (plVar13,lVar10,lVar11,*(undefined8 *)(*plVar13 + 0x2b0));
                if ((int)plVar14[2] == 0) {
                  lVar10 = *(long *)puVar7;
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar10 = *(long *)puVar7;
                  }
                  plVar13 = *(long **)(*(long *)(lVar10 + 0xb8) + 8);
                  uVar9 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0))
                  ;
                  if (plVar13 == (long *)0x0) goto LAB_01fbc928;
                  if ((lVar11 != 0) &&
                     (lVar10 = thunk_FUN_00d6225c(lVar11,*(undefined8 *)(*plVar13 + 0x40)),
                     lVar10 == 0)) goto LAB_01fbc944;
                  if (*(uint *)(plVar13 + 3) <= uVar9) goto LAB_01fbc92c;
                  plVar13[(long)(int)uVar9 + 4] = lVar11;
                }
              }
              uVar17 = uVar17 + 1;
            }
            uVar17 = 0;
            while( true ) {
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar10 = *(long *)puVar7;
              }
              puVar15 = *(undefined8 **)(lVar10 + 0xb8);
              lVar11 = puVar15[0x55];
              if (lVar11 == 0) goto LAB_01fbc928;
              if ((long)*(int *)(lVar11 + 0x18) <= (long)uVar17) break;
              if (uVar17 != 0xb) {
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  puVar15 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
                  lVar11 = puVar15[0x55];
                  if (lVar11 == 0) goto LAB_01fbc928;
                }
                if (*(uint *)(lVar11 + 0x18) <= uVar17) goto LAB_01fbc92c;
                lVar10 = *(long *)(lVar11 + uVar17 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_01fbc928;
                plVar14 = (long *)*puVar15;
                uVar16 = *(undefined8 *)(lVar10 + 0x10);
                lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                if ((lVar11 == 0) ||
                   (FUN_01f75d58(lVar11,uVar16,*(undefined8 *)puVar5,0), plVar14 == (long *)0x0))
                goto LAB_01fbc928;
                plVar14 = (long *)(**(code **)(*plVar14 + 0x308))
                                            (plVar14,lVar11,*(undefined8 *)(*plVar14 + 0x310));
                if (plVar14 != (long *)0x0) {
                  lVar11 = *(long *)puVar3;
                  bVar2 = *(byte *)(lVar11 + 300);
                  if ((*(byte *)(*plVar14 + 300) < bVar2) ||
                     (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da544c(plVar14);
                  }
                }
                lVar11 = *(long *)puVar7;
                iVar1 = *(int *)(lVar10 + 0x20);
                if (*(int *)(lVar11 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar11 = *(long *)puVar7;
                }
                puVar15 = *(undefined8 **)(lVar11 + 0xb8);
                if (iVar1 == 0xb) {
                  plVar13 = (long *)puVar15[2];
                }
                else {
                  lVar11 = puVar15[0x55];
                  if (lVar11 == 0) goto LAB_01fbc928;
                  if (*(uint *)(lVar11 + 0x18) <= *(uint *)(lVar10 + 0x20)) goto LAB_01fbc92c;
                  lVar10 = *(long *)(lVar11 + (long)(int)*(uint *)(lVar10 + 0x20) * 8 + 0x20);
                  if (lVar10 == 0) goto LAB_01fbc928;
                  plVar13 = (long *)*puVar15;
                  uVar16 = *(undefined8 *)(lVar10 + 0x10);
                  lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                  if ((lVar10 == 0) ||
                     (FUN_01f75d58(lVar10,uVar16,*(undefined8 *)puVar5,0), plVar13 == (long *)0x0))
                  goto LAB_01fbc928;
                  plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                              (plVar13,lVar10,*(undefined8 *)(*plVar13 + 0x310));
                  if (plVar13 != (long *)0x0) {
                    lVar10 = *(long *)puVar3;
                    if ((*(byte *)(*plVar13 + 300) < *(byte *)(lVar10 + 300)) ||
                       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar10 + 300) * 8 +
                                 -8) != lVar10)) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da544c(plVar13,lVar10);
                    }
                  }
                }
                FUN_01fbcd4c(plVar14,plVar13);
              }
              lVar10 = *(long *)puVar7;
              uVar17 = uVar17 + 1;
            }
            lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
            puVar5 = 
            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<__Il2CppFullySharedGenericType>__
            ;
            if (lVar10 != 0) {
              FUN_01f75d58(lVar10,*(undefined8 *)
                                   Method_System_Collections_Generic_List<float[]>__ctor__,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_InsertAt<__Il2CppFullySharedGenericType>__
                           ,0);
              puVar3 = 
              Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_67_0>d>__
              ;
              lVar11 = *(long *)puVar7;
              if (*(int *)(lVar11 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar11 = *(long *)puVar7;
              }
              uVar16 = FUN_01fbcc78(lVar10,*(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x270));
              lVar11 = *(long *)(*(long *)puVar7 + 0xb8);
              *(undefined8 *)(lVar11 + 0x18) = uVar16;
              if (*(long *)(lVar11 + 0x270) != 0) {
                *(undefined8 *)(*(long *)(lVar11 + 0x270) + 0x30) = uVar16;
                FUN_01fbcd4c(uVar16,*(undefined8 *)(lVar11 + 0x10));
                plVar14 = (long *)**(long **)(*(long *)puVar7 + 0xb8);
                if (plVar14 != (long *)0x0) {
                  (**(code **)(*plVar14 + 0x2a8))
                            (plVar14,lVar10,(*(long **)(*(long *)puVar7 + 0xb8))[3],
                             *(undefined8 *)(*plVar14 + 0x2b0));
                  plVar14 = *(long **)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
                  if (plVar14 != (long *)0x0) {
                    lVar10 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x18);
                    if ((lVar10 != 0) &&
                       (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar14 + 0x40)),
                       lVar11 == 0)) {
LAB_01fbc944:
                      uVar16 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                      FUN_00da5038(uVar16,0);
                    }
                    if (*(uint *)(plVar14 + 3) < 0xb) goto LAB_01fbc92c;
                    plVar14[0xe] = lVar10;
                    lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                    if (lVar10 != 0) {
                      FUN_01f75d58(lVar10,*(undefined8 *)puVar3,*(undefined8 *)puVar5,0);
                      uVar16 = FUN_01fbcc78(lVar10,*(undefined8 *)
                                                    (*(long *)(*(long *)puVar7 + 0xb8) + 0x280));
                      lVar11 = *(long *)(*(long *)puVar7 + 0xb8);
                      *(undefined8 *)(lVar11 + 0x20) = uVar16;
                      if (*(long *)(lVar11 + 0x280) != 0) {
                        *(undefined8 *)(*(long *)(lVar11 + 0x280) + 0x30) = uVar16;
                        FUN_01fbcd4c(uVar16,*(undefined8 *)(lVar11 + 0x18));
                        plVar14 = (long *)**(long **)(*(long *)puVar7 + 0xb8);
                        if (plVar14 != (long *)0x0) {
                          (**(code **)(*plVar14 + 0x2a8))
                                    (plVar14,lVar10,(*(long **)(*(long *)puVar7 + 0xb8))[4],
                                     *(undefined8 *)(*plVar14 + 0x2b0));
                          plVar14 = *(long **)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
                          if (plVar14 != (long *)0x0) {
                            lVar10 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x20);
                            if ((lVar10 != 0) &&
                               (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)(*plVar14 + 0x40))
                               , lVar11 == 0)) goto LAB_01fbc944;
                            if (*(uint *)(plVar14 + 3) < 0xc) goto LAB_01fbc92c;
                            plVar14[0xf] = lVar10;
                            lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                            if (lVar10 != 0) {
                              FUN_01f75d58(lVar10,*(undefined8 *)puVar8,*(undefined8 *)puVar5,0);
                              uVar16 = FUN_01fbcc78(lVar10,*(undefined8 *)
                                                            (*(long *)(*(long *)puVar7 + 0xb8) +
                                                            0x288));
                              lVar11 = *(long *)(*(long *)puVar7 + 0xb8);
                              *(undefined8 *)(lVar11 + 0x28) = uVar16;
                              if (*(long *)(lVar11 + 0x288) != 0) {
                                *(undefined8 *)(*(long *)(lVar11 + 0x288) + 0x30) = uVar16;
                                lVar11 = *(long *)(lVar11 + 8);
                                if (lVar11 != 0) {
                                  if (*(uint *)(lVar11 + 0x18) < 0x12) goto LAB_01fbc92c;
                                  FUN_01fbcd4c(uVar16,*(undefined8 *)(lVar11 + 0xa8));
                                  plVar14 = (long *)**(long **)(*(long *)puVar7 + 0xb8);
                                  if (plVar14 != (long *)0x0) {
                                    (**(code **)(*plVar14 + 0x2a8))
                                              (plVar14,lVar10,
                                               (*(long **)(*(long *)puVar7 + 0xb8))[5],
                                               *(undefined8 *)(*plVar14 + 0x2b0));
                                    plVar14 = *(long **)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
                                    if (plVar14 != (long *)0x0) {
                                      lVar10 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x28);
                                      if ((lVar10 != 0) &&
                                         (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8 *)
                                                                              (*plVar14 + 0x40)),
                                         lVar11 == 0)) goto LAB_01fbc944;
                                      if (*(uint *)(plVar14 + 3) < 0x36) goto LAB_01fbc92c;
                                      plVar14[0x39] = lVar10;
                                      lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                                      if (lVar10 != 0) {
                                        FUN_01f75d58(lVar10,*(undefined8 *)puVar4,
                                                     *(undefined8 *)puVar5,0);
                                        uVar16 = FUN_01fbcc78(lVar10,*(undefined8 *)
                                                                      (*(long *)(*(long *)puVar7 +
                                                                                0xb8) + 0x278));
                                        lVar11 = *(long *)(*(long *)puVar7 + 0xb8);
                                        *(undefined8 *)(lVar11 + 0x30) = uVar16;
                                        if (*(long *)(lVar11 + 0x278) != 0) {
                                          *(undefined8 *)(*(long *)(lVar11 + 0x278) + 0x30) = uVar16
                                          ;
                                          lVar11 = *(long *)(lVar11 + 8);
                                          if (lVar11 != 0) {
                                            if (*(uint *)(lVar11 + 0x18) < 0x12) {
LAB_01fbc92c:
                    /* WARNING: Subroutine does not return */
                                              FUN_00da5194();
                                            }
                                            FUN_01fbcd4c(uVar16,*(undefined8 *)(lVar11 + 0xa8));
                                            plVar14 = (long *)**(long **)(*(long *)puVar7 + 0xb8);
                                            if (plVar14 != (long *)0x0) {
                                              (**(code **)(*plVar14 + 0x2a8))
                                                        (plVar14,lVar10,
                                                         (*(long **)(*(long *)puVar7 + 0xb8))[6],
                                                         *(undefined8 *)(*plVar14 + 0x2b0));
                                              plVar14 = *(long **)(*(long *)(*(long *)puVar7 + 0xb8)
                                                                  + 8);
                                              if (plVar14 != (long *)0x0) {
                                                lVar10 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8)
                                                                  + 0x30);
                                                if ((lVar10 != 0) &&
                                                   (lVar11 = thunk_FUN_00d6225c(lVar10,*(undefined8
                                                                                         *)(*plVar14
                                                                                           + 0x40)),
                                                   lVar11 == 0)) goto LAB_01fbc944;
                                                if (0x36 < *(uint *)(plVar14 + 3)) {
                                                  plVar14[0x3a] = lVar10;
                                                  return;
                                                }
                                                goto LAB_01fbc92c;
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
    }
  }
LAB_01fbc928:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


