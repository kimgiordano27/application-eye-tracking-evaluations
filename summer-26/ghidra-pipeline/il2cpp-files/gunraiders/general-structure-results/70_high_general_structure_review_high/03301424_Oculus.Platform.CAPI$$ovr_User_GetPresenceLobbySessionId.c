/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_User_GetPresenceLobbySessionId
ENTRY_POINT: 03301424
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


long Oculus_Platform_CAPI__ovr_User_GetPresenceLobbySessionId(ulong param_1)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  long unaff_x19;
  uint unaff_w20;
  uint uVar11;
  long *unaff_x21;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  long *in_stack_00000010;
  uint uStack000000000000001c;
  
  puVar2 = PTR_DAT_0422fb28;
  uStack000000000000001c = 0;
  uVar12 = 0;
  uVar17 = 0;
  do {
    if (unaff_x19 == 0) {
LAB_033016a8:
      if (uVar12 == unaff_w20) {
LAB_033016b0:
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar7 = FUN_032ea0d4(in_stack_00000010,0,0);
        uVar12 = unaff_w20;
        if ((uVar7 & 1) == 0) {
LAB_03301888:
          uVar10 = *(uint *)(unaff_x21 + 3);
          if (uVar10 <= uVar17) goto thunk_FUN_01c5d4ac;
          lVar6 = unaff_x21[uVar17 + 4];
          if (lVar6 != 0) {
            lVar14 = thunk_FUN_01c495e4(lVar6,*(undefined8 *)(*unaff_x21 + 0x40));
            if (lVar14 == 0) {
              uVar15 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
              FUN_01c5d37c(uVar15,0);
            }
            uVar10 = (uint)unaff_x21[3];
          }
          if (uVar10 <= uStack000000000000001c) goto thunk_FUN_01c5d4ac;
          lVar14 = (long)(int)uStack000000000000001c;
          uStack000000000000001c = uStack000000000000001c + 1;
          unaff_x21[lVar14 + 4] = lVar6;
        }
        else {
          if (*(uint *)(unaff_x21 + 3) <= uVar17) goto thunk_FUN_01c5d4ac;
          plVar16 = unaff_x21 + uVar17 + 4;
          plVar5 = (long *)*plVar16;
          if ((plVar5 == (long *)0x0) ||
             (lVar6 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)),
             lVar6 == 0)) goto LAB_03301b88;
          uVar7 = FUN_032eb6b4(lVar6,0);
          if ((uVar7 & 1) == 0) {
            if (*(uint *)(unaff_x21 + 3) <= uVar17) goto thunk_FUN_01c5d4ac;
            plVar16 = (long *)*plVar16;
            if ((plVar16 == (long *)0x0) ||
               (plVar5 = (long *)(**(code **)(*plVar16 + 0x238))
                                           (plVar16,*(undefined8 *)(*plVar16 + 0x240)),
               plVar5 == (long *)0x0)) goto LAB_03301b88;
            uVar7 = (**(code **)(*plVar5 + 0x298))
                              (plVar5,in_stack_00000010,*(undefined8 *)(*plVar5 + 0x2a0));
joined_r0x03301884:
            if ((uVar7 & 1) != 0) goto LAB_03301888;
          }
          else {
            if (in_stack_00000010 == (long *)0x0) goto LAB_03301b88;
            plVar5 = (long *)(**(code **)(*in_stack_00000010 + 0x318))
                                       (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 800))
            ;
            if (plVar5 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)
                                 UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo
                               + 0x130);
              if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
                 (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
                  *(long *)
                   UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo)) {
                plVar9 = (long *)(**(code **)(*in_stack_00000010 + 0x318))
                                           (in_stack_00000010,
                                            *(undefined8 *)(*in_stack_00000010 + 800));
                if (uVar17 < *(uint *)(unaff_x21 + 3)) {
                  plVar16 = (long *)*plVar16;
                  if ((plVar16 != (long *)0x0) &&
                     (plVar5 = (long *)(**(code **)(*plVar16 + 0x238))
                                                 (plVar16,*(undefined8 *)(*plVar16 + 0x240)),
                     plVar5 != (long *)0x0)) {
                    plVar5 = (long *)(**(code **)(*plVar5 + 0x318))
                                               (plVar5,*(undefined8 *)(*plVar5 + 800));
                    if (*(int *)(*(long *)
                                  Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                                + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8(*(long *)
                                          Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                                        );
                    }
                    lVar6 = *(long *)
                             UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo
                    ;
                    if (plVar9 != (long *)0x0) {
                      if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 +
                                   -8) != lVar6)) {
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d748(plVar9);
                      }
                    }
                    if (plVar5 != (long *)0x0) {
                      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 +
                                   -8) != lVar6)) {
LAB_03301b8c:
                    /* WARNING: Subroutine does not return */
                        FUN_01c5d748(plVar5);
                      }
                    }
                    uVar7 = FUN_03301c68(plVar9,plVar5);
                    goto joined_r0x03301884;
                  }
                  goto LAB_03301b88;
                }
                goto thunk_FUN_01c5d4ac;
              }
            }
          }
        }
      }
    }
    else {
      if ((param_1 & 0xffffffff) <= uVar17) goto thunk_FUN_01c5d4ac;
      plVar5 = (long *)unaff_x21[uVar17 + 4];
      if ((plVar5 == (long *)0x0) ||
         (lVar6 = (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250)),
         lVar6 == 0)) goto LAB_03301b88;
      uVar10 = (uint)*(undefined8 *)(lVar6 + 0x18);
      if (unaff_w20 == uVar10) {
        if ((int)unaff_w20 < 1) {
          uVar12 = 0;
          goto LAB_033016a8;
        }
        if (uVar10 != 0) {
          lVar14 = 0;
          uVar10 = 1;
          while( true ) {
            plVar5 = *(long **)(lVar6 + lVar14 * 8 + 0x20);
            if (plVar5 == (long *)0x0) goto LAB_03301b88;
            uVar12 = uVar10 - 1;
            plVar5 = (long *)(**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0))
            ;
            if (*(uint *)(unaff_x19 + 0x18) <= uVar12) goto thunk_FUN_01c5d4ac;
            plVar16 = (long *)(unaff_x19 + lVar14 * 8 + 0x20);
            lVar14 = *plVar16;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar7 = FUN_032e935c(plVar5,lVar14,0);
            if ((uVar7 & 1) == 0) {
              uVar15 = *(undefined8 *)System_MonoCustomAttrs_TypeInfo;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              uVar15 = FUN_032e04b8(uVar15,0);
              uVar7 = FUN_032e935c(plVar5,uVar15,0);
              if ((uVar7 & 1) == 0) {
                if (plVar5 == (long *)0x0) goto LAB_03301b88;
                uVar7 = FUN_032eb6b4(plVar5,0);
                if (*(uint *)(unaff_x19 + 0x18) <= uVar12) goto thunk_FUN_01c5d4ac;
                plVar9 = (long *)*plVar16;
                if ((uVar7 & 1) == 0) {
                  uVar7 = (**(code **)(*plVar5 + 0x298))
                                    (plVar5,plVar9,*(undefined8 *)(*plVar5 + 0x2a0));
                }
                else {
                  if (plVar9 == (long *)0x0) goto LAB_03301b88;
                  plVar9 = (long *)(**(code **)(*plVar9 + 0x318))
                                             (plVar9,*(undefined8 *)(*plVar9 + 800));
                  if (plVar9 == (long *)0x0) goto LAB_033016a8;
                  bVar1 = *(byte *)(*(long *)
                                     UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo
                                   + 0x130);
                  if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)
                       UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo))
                  goto LAB_033016a8;
                  if (*(uint *)(unaff_x19 + 0x18) <= uVar12) goto thunk_FUN_01c5d4ac;
                  plVar16 = (long *)*plVar16;
                  if (plVar16 == (long *)0x0) goto LAB_03301b88;
                  plVar16 = (long *)(**(code **)(*plVar16 + 0x318))
                                              (plVar16,*(undefined8 *)(*plVar16 + 800));
                  plVar5 = (long *)(**(code **)(*plVar5 + 0x318))
                                             (plVar5,*(undefined8 *)(*plVar5 + 800));
                  if (*(int *)(*(long *)
                                Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                              + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)
                                        Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                                      );
                  }
                  lVar14 = *(long *)
                            UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo
                  ;
                  if (plVar16 != (long *)0x0) {
                    if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 +
                                 -8) != lVar14)) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d748(plVar16);
                    }
                  }
                  if (plVar5 != (long *)0x0) {
                    if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 +
                                 -8) != lVar14)) goto LAB_03301b8c;
                  }
                  uVar7 = FUN_03301c68(plVar16,plVar5);
                }
                if ((uVar7 & 1) == 0) goto LAB_033016a8;
              }
            }
            if (unaff_w20 == uVar10) break;
            lVar14 = (long)(int)uVar10;
            bVar3 = *(uint *)(lVar6 + 0x18) <= uVar10;
            uVar10 = uVar10 + 1;
            if (bVar3) goto thunk_FUN_01c5d4ac;
          }
          goto LAB_033016b0;
        }
        goto thunk_FUN_01c5d4ac;
      }
    }
    uVar10 = *(uint *)(unaff_x21 + 3);
    param_1 = (ulong)uVar10;
    uVar17 = uVar17 + 1;
  } while ((long)uVar17 < (long)(int)uVar10);
  if (uStack000000000000001c == 0) {
    lVar6 = 0;
  }
  else {
    if (uStack000000000000001c == 1) {
      if (uVar10 == 0) {
thunk_FUN_01c5d4ac:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
    }
    else {
      lVar6 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04232bd8,unaff_w20);
      if (0 < (int)unaff_w20) {
        if (lVar6 == 0) {
LAB_03301b88:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar12 = *(uint *)(lVar6 + 0x18);
        uVar17 = 0;
        do {
          if (uVar12 <= uVar17) goto thunk_FUN_01c5d4ac;
          *(int *)(lVar6 + 0x20 + uVar17 * 4) = (int)uVar17;
          uVar17 = uVar17 + 1;
        } while (unaff_w20 != uVar17);
      }
      if ((int)uStack000000000000001c < 2) {
        uVar12 = 0;
      }
      else {
        bVar3 = false;
        uVar10 = 1;
        uVar11 = 0;
        do {
          if (*(uint *)(unaff_x21 + 3) <= uVar11) goto thunk_FUN_01c5d4ac;
          plVar16 = unaff_x21 + (long)(int)uVar11 + 4;
          plVar5 = (long *)*plVar16;
          if (plVar5 == (long *)0x0) goto LAB_03301b88;
          uVar15 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
          if (*(uint *)(unaff_x21 + 3) <= uVar10) goto thunk_FUN_01c5d4ac;
          plVar9 = unaff_x21 + (long)(int)uVar10 + 4;
          plVar5 = (long *)*plVar9;
          if (plVar5 == (long *)0x0) goto LAB_03301b88;
          uVar8 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)
                                Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                              );
          }
          iVar4 = FUN_03301e8c(uVar15,uVar8,in_stack_00000010);
          if ((unaff_x19 != 0) && (iVar4 == 0)) {
            if (*(uint *)(unaff_x21 + 3) <= uVar11) goto thunk_FUN_01c5d4ac;
            plVar5 = (long *)*plVar16;
            if (plVar5 == (long *)0x0) goto LAB_03301b88;
            uVar15 = (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
            if (*(uint *)(unaff_x21 + 3) <= uVar10) goto thunk_FUN_01c5d4ac;
            plVar5 = (long *)*plVar9;
            if (plVar5 == (long *)0x0) goto LAB_03301b88;
            uVar8 = (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                        + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)
                                  Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                                );
            }
            iVar4 = FUN_03302228(uVar15,lVar6,0,uVar8,lVar6,0);
          }
          if (iVar4 == 0) {
            if ((*(uint *)(unaff_x21 + 3) <= uVar11) || (*(uint *)(unaff_x21 + 3) <= uVar10))
            goto thunk_FUN_01c5d4ac;
            lVar14 = *plVar16;
            lVar13 = *plVar9;
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                        + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            iVar4 = FUN_03302678(lVar14,lVar13);
            bVar3 = (bool)(bVar3 | iVar4 == 0);
          }
          uVar12 = uVar10;
          if (iVar4 != 2) {
            uVar12 = uVar11;
          }
          uVar10 = uVar10 + 1;
          bVar3 = (bool)(bVar3 & iVar4 != 2);
          uVar11 = uVar12;
        } while (uStack000000000000001c != uVar10);
        if (bVar3) {
          uVar15 = thunk_FUN_01c273e8(
                                     DarkTonic_MasterAudio_PlaylistController_PlaylistEndedEventHandler_TypeInfo
                                     );
          uVar15 = FUN_03313b64(uVar15,0);
          thunk_FUN_01c273e8(OVRRaycaster_<>c_TypeInfo);
          uVar8 = thunk_FUN_01c496e0();
          FUN_0320e3ec(uVar8,uVar15,0);
          uVar15 = thunk_FUN_01c273e8(
                                     Method_System_Collections_Generic_Dictionary<string,_TranslationQuery>_get_Item__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar8,uVar15);
        }
      }
      if (*(uint *)(unaff_x21 + 3) <= uVar12) goto thunk_FUN_01c5d4ac;
      unaff_x21 = unaff_x21 + (int)uVar12;
    }
    lVar6 = unaff_x21[4];
  }
  return lVar6;
}


