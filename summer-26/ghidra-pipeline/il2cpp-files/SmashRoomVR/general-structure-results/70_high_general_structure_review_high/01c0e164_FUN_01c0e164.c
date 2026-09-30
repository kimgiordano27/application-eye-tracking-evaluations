/*
FUNCTION_NAME: FUN_01c0e164
ENTRY_POINT: 01c0e164
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x01c0e81c) */
/* WARNING: Removing unreachable block (ram,0x01c0ea18) */

void FUN_01c0e164(long param_1,uint param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  int *piVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  
  if ((DAT_03fed3f1 & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_17__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_VisualTreeAsset_<>c__DisplayClass61_0_<CloneSetupRecursively>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_VisualTreeAsset_<get_stylesheets>d__23_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__2__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_VisualTreeAsset_<get_templateDependencies>d__19_System_Collections_IEnumerator_Reset__
                      );
    DAT_03fed3f1 = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(long *)(param_1 + 0x178) != 0) {
    FUN_0391fb70(*(long *)(param_1 + 0x178),0,0);
    plVar15 = (long *)(param_1 + 0x38);
    lVar17 = *plVar15;
    *(uint *)(param_1 + 0xac) = param_2;
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    *(undefined1 *)(param_1 + 0x51) = 0;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    puVar3 = 
    Method_UnityEngine_UIElements_VisualTreeAsset_<get_stylesheets>d__23_System_Collections_IEnumerator_Reset__
    ;
    uVar9 = FUN_0391f968(lVar17,0,0);
    if ((uVar9 & 1) != 0) {
      if ((*plVar15 == 0) || (lVar17 = FUN_01ed712c(*plVar15,*(undefined8 *)puVar3), lVar17 == 0))
      goto LAB_01c0e9fc;
      if (*(char *)(lVar17 + 0x24) == '\0') {
        lVar17 = *plVar15;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_03923a90(lVar17,0);
      }
    }
    puVar4 = Method_Meta_WitAi_TTS_TTSService_<>c__DisplayClass48_0_<Load>b__2__;
    lVar17 = *(long *)(param_1 + 0x90);
    if (lVar17 != 0) {
      if (*(uint *)(lVar17 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      if (*(long *)(param_1 + 0x60) != 0) {
        uVar16 = *(undefined8 *)(lVar17 + (long)(int)param_2 * 8 + 0x20);
        uVar10 = FUN_0391fab4(*(long *)(param_1 + 0x60),0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar2);
        }
        lVar17 = FUN_01f25880(uVar16,uVar10,*(undefined8 *)puVar4);
        *plVar15 = lVar17;
        thunk_FUN_01b4f09c(plVar15,lVar17);
        if (*plVar15 != 0) {
          FUN_01ed7044(*plVar15,*(undefined8 *)
                                 Method_UnityEngine_UIElements_VisualTreeAsset_<>c__DisplayClass61_0_<CloneSetupRecursively>b__0__
                      );
          if ((*plVar15 != 0) &&
             (lVar17 = FUN_01ed712c(*plVar15,*(undefined8 *)puVar3), lVar17 != 0)) {
            *(undefined1 *)(lVar17 + 0x24) = 0;
            *(undefined4 *)(param_1 + 0x100) = 0x40000000;
            *(undefined8 *)(param_1 + 0x120) = 0;
            *(undefined4 *)(param_1 + 0x110) = 0x3f800000;
            *(undefined4 *)(param_1 + 0x128) = 0;
            *(undefined2 *)(param_1 + 0x130) = 1;
            if (*(long *)(param_1 + 0x38) != 0) {
              iVar8 = FUN_0391faf0(*(long *)(param_1 + 0x38),0);
              if (iVar8 == 0x14) {
                *(undefined2 *)(param_1 + 0x130) = 1;
                return;
              }
              if (*(int *)(*(long *)
                            Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_038f2acc(*(undefined8 *)
                            Method_UnityEngine_UIElements_VisualTreeAsset_<get_templateDependencies>d__19_System_Collections_IEnumerator_Reset__
                           ,0);
              if ((*plVar15 != 0) && (lVar17 = FUN_0391fab4(*plVar15,0), lVar17 != 0)) {
                plVar15 = (long *)FUN_0392a954(lVar17,0);
                puVar7 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__;
                puVar6 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__;
                puVar4 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__;
                puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_17__;
                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                do {
                  lVar17 = *plVar15;
                  uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar9 != 0) {
                    piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)puVar6) {
                        puVar11 = (undefined8 *)(lVar17 + (long)*piVar14 * 0x10 + 0x138);
                        goto LAB_01c0e460;
                      }
                      uVar9 = uVar9 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_01ae9f78(plVar15,*(long *)puVar6,0);
LAB_01c0e460:
                  uVar9 = (*(code *)*puVar11)(plVar15,puVar11[1]);
                  puVar5 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__;
                  if ((uVar9 & 1) == 0) {
                    plVar15 = (long *)thunk_FUN_01afa9e0(plVar15,*(undefined8 *)
                                                                                                                                    
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                                  );
                    if (plVar15 == (long *)0x0) {
                      return;
                    }
                    lVar17 = *plVar15;
                    uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
                    if (uVar9 == 0) goto LAB_01c0e910;
                    piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    goto LAB_01c0e8f8;
                  }
                  lVar17 = *plVar15;
                  uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar9 != 0) {
                    piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)puVar6) {
                        puVar11 = (undefined8 *)(lVar17 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                        goto LAB_01c0e4c4;
                      }
                      uVar9 = uVar9 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_01ae9f78(plVar15,*(long *)puVar6,1);
LAB_01c0e4c4:
                  plVar12 = (long *)(*(code *)*puVar11)(plVar15,puVar11[1]);
                  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01b48178();
                  }
                  lVar17 = *(long *)puVar7;
                  bVar1 = *(byte *)(lVar17 + 0x130);
                  if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != lVar17)) {
                    /* WARNING: Subroutine does not return */
                    FUN_01b4841c(plVar12);
                  }
                  uVar10 = FUN_01e8a9f8(plVar12,*(undefined8 *)puVar4);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar9 = FUN_0391f968(uVar10,0,0);
                  if ((uVar9 & 1) != 0) {
                    lVar17 = FUN_01e8a9f8(plVar12,*(undefined8 *)puVar4);
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01b48178();
                    }
                    FUN_0395a360(lVar17,1,0);
                    lVar17 = FUN_01e8a9f8(plVar12,*(undefined8 *)puVar4);
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01b48178();
                    }
                    FUN_0395a294(lVar17,0,0);
                  }
                  uVar10 = FUN_01e8a9f8(plVar12,*(undefined8 *)puVar3);
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar9 = FUN_03923030(uVar10,0);
                  if ((uVar9 & 1) != 0) {
                    lVar17 = FUN_01e8a9f8(plVar12,*(undefined8 *)puVar3);
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01b48178();
                    }
                    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(lVar17 + 0x20);
                    lVar17 = FUN_01e8a9f8(plVar12,*(undefined8 *)puVar3);
                    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01b48178();
                    }
                    *(undefined4 *)(lVar17 + 0x20) = 0x4b189680;
                  }
                  plVar12 = (long *)FUN_0392a954(plVar12,0);
                  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01b48178();
                  }

                  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<object,_bool,_bool,_object,_object>>__Start<HttpWebRequest_<GetResponseFromData>d__244>
                  :
                  lVar17 = *plVar12;
                  uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
                  if (uVar9 != 0) {
                    piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)puVar6) {
                        puVar11 = (undefined8 *)(lVar17 + (long)*piVar14 * 0x10 + 0x138);
                        goto LAB_01c0e62c;
                      }
                      uVar9 = uVar9 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar9 != 0);
                  }
                  puVar11 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar6,0);
LAB_01c0e62c:
                  uVar9 = (*(code *)*puVar11)(plVar12,puVar11[1]);
                  if ((uVar9 & 1) != 0) {
                    lVar17 = *plVar12;
                    uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
                    if (uVar9 != 0) {
                      piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == *(long *)puVar6) {
                          puVar11 = (undefined8 *)(lVar17 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                          goto LAB_01c0e68c;
                        }
                        uVar9 = uVar9 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar9 != 0);
                    }
                    puVar11 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)puVar6,1);
LAB_01c0e68c:
                    plVar13 = (long *)(*(code *)*puVar11)(plVar12,puVar11[1]);
                    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01b48178();
                    }
                    lVar17 = *(long *)puVar7;
                    bVar1 = *(byte *)(lVar17 + 0x130);
                    if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != lVar17)) {
                    /* WARNING: Subroutine does not return */
                      FUN_01b4841c(plVar13);
                    }
                    uVar10 = FUN_01e8a9f8(plVar13,*(undefined8 *)puVar4);
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar9 = FUN_0391f968(uVar10,0,0);
                    if ((uVar9 & 1) != 0) {
                      lVar17 = FUN_01e8a9f8(plVar13,*(undefined8 *)puVar4);
                      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01b48178();
                      }
                      FUN_0395a360(lVar17,1,0);
                      lVar17 = FUN_01e8a9f8(plVar13,*(undefined8 *)puVar4);
                      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01b48178();
                      }
                      FUN_0395a294(lVar17,0,0);
                    }
                    uVar10 = FUN_01e8a9f8(plVar13,*(undefined8 *)puVar3);
                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar9 = FUN_03923030(uVar10,0);
                    if ((uVar9 & 1) != 0) {
                      lVar17 = FUN_01e8a9f8(plVar13,*(undefined8 *)puVar3);
                      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01b48178();
                      }
                      *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(lVar17 + 0x20);
                      lVar17 = FUN_01e8a9f8(plVar13,*(undefined8 *)puVar3);
                      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01b48178();
                      }
                      *(undefined4 *)(lVar17 + 0x20) = 0x4b189680;
                    }
                    goto 
                    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<object,_bool,_bool,_object,_object>>__Start<HttpWebRequest_<GetResponseFromData>d__244>
                    ;
                  }
                  plVar12 = (long *)thunk_FUN_01afa9e0(plVar12,*(undefined8 *)
                                                                                                                                
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                                  );
                  if (plVar12 != (long *)0x0) {
                    lVar17 = *plVar12;
                    uVar9 = (ulong)*(ushort *)(lVar17 + 0x12e);
                    if (uVar9 != 0) {
                      piVar14 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) ==
                            *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
                          puVar11 = (undefined8 *)(lVar17 + (long)*piVar14 * 0x10 + 0x138);
                          goto LAB_01c0e80c;
                        }
                        uVar9 = uVar9 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar9 != 0);
                    }
                    puVar11 = (undefined8 *)
                              FUN_01ae9f78(plVar12,*(long *)
                                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                           ,0);
LAB_01c0e80c:
                    (*(code *)*puVar11)(plVar12,puVar11[1]);
                  }
                } while( true );
              }
            }
          }
        }
      }
    }
  }
LAB_01c0e9fc:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar14 = piVar14 + 4;
    if (uVar9 == 0) break;
LAB_01c0e8f8:
    if (*(long *)(piVar14 + -2) == *(long *)puVar5) {
      puVar11 = (undefined8 *)(lVar17 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_01c0e92c;
    }
  }
LAB_01c0e910:
  puVar11 = (undefined8 *)FUN_01ae9f78(plVar15,*(long *)puVar5,0);
LAB_01c0e92c:
  (*(code *)*puVar11)(plVar15,puVar11[1]);
  return;
}


