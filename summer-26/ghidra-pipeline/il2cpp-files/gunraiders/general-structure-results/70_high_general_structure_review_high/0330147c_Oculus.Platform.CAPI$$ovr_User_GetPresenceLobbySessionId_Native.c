/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_User_GetPresenceLobbySessionId_Native
ENTRY_POINT: 0330147c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


long Oculus_Platform_CAPI__ovr_User_GetPresenceLobbySessionId_Native(undefined8 param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x19;
  uint unaff_w20;
  uint uVar9;
  long *unaff_x21;
  long lVar10;
  long unaff_x23;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  ulong unaff_x28;
  long *unaff_x29;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x0330147c:
  if ((int)param_1 != 0) {
    lVar12 = 0;
    uVar14 = 1;
    while( true ) {
      plVar4 = *(long **)(unaff_x23 + lVar12 * 8 + 0x20);
      if (plVar4 == (long *)0x0) goto LAB_03301b88;
      uVar15 = uVar14 - 1;
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
      if (*(uint *)(unaff_x19 + 0x18) <= uVar15) goto thunk_FUN_01c5d4ac;
      plVar16 = (long *)(unaff_x19 + lVar12 * 8 + 0x20);
      lVar12 = *plVar16;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar5 = FUN_032e935c(plVar4,lVar12,0);
      if ((uVar5 & 1) == 0) {
        uVar13 = *(undefined8 *)System_MonoCustomAttrs_TypeInfo;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar13 = FUN_032e04b8(uVar13,0);
        uVar5 = FUN_032e935c(plVar4,uVar13,0);
        if ((uVar5 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_03301b88;
          uVar5 = FUN_032eb6b4(plVar4,0);
          if (*(uint *)(unaff_x19 + 0x18) <= uVar15) goto thunk_FUN_01c5d4ac;
          plVar8 = (long *)*plVar16;
          if ((uVar5 & 1) == 0) {
            uVar5 = (**(code **)(*plVar4 + 0x298))(plVar4,plVar8,*(undefined8 *)(*plVar4 + 0x2a0));
          }
          else {
            if (plVar8 == (long *)0x0) goto LAB_03301b88;
            plVar8 = (long *)(**(code **)(*plVar8 + 0x318))(plVar8,*(undefined8 *)(*plVar8 + 800));
            if (plVar8 == (long *)0x0) goto LAB_033016a8;
            bVar1 = *(byte *)(*(long *)
                               UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo
                             + 0x130);
            if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_033016a8;
            if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo
               ) goto LAB_033016a8;
            if (*(uint *)(unaff_x19 + 0x18) <= uVar15) goto thunk_FUN_01c5d4ac;
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_03301b88;
            plVar16 = (long *)(**(code **)(*plVar16 + 0x318))
                                        (plVar16,*(undefined8 *)(*plVar16 + 800));
            plVar4 = (long *)(**(code **)(*plVar4 + 0x318))(plVar4,*(undefined8 *)(*plVar4 + 800));
            if (*(int *)(*(long *)
                          Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                        + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)
                                  Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                                );
            }
            lVar12 = *(long *)
                      UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo;
            if (plVar16 != (long *)0x0) {
              if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(lVar12 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8)
                  != lVar12)) {
                    /* WARNING: Subroutine does not return */
                FUN_01c5d748(plVar16);
              }
            }
            if (plVar4 != (long *)0x0) {
              if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar12 + 0x130)) ||
                 (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) !=
                  lVar12)) goto LAB_03301b8c;
            }
            uVar5 = FUN_03301c68(plVar16,plVar4);
          }
          if ((uVar5 & 1) == 0) goto LAB_033016a8;
        }
      }
      uVar5 = unaff_x28;
      if (unaff_w20 == uVar14) break;
      lVar12 = (long)(int)uVar14;
      bVar2 = *(uint *)(unaff_x23 + 0x18) <= uVar14;
      uVar14 = uVar14 + 1;
      if (bVar2) goto thunk_FUN_01c5d4ac;
    }
    do {
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar6 = FUN_032ea0d4(in_stack_00000010,0,0);
      uVar15 = unaff_w20;
      if ((uVar6 & 1) == 0) {
LAB_03301888:
        uVar14 = *(uint *)(unaff_x21 + 3);
        if (uVar14 <= uVar5) break;
        lVar12 = unaff_x21[uVar5 + 4];
        if (lVar12 != 0) {
          lVar10 = thunk_FUN_01c495e4(lVar12,*(undefined8 *)(*unaff_x21 + 0x40));
          if (lVar10 == 0) {
            uVar13 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
            FUN_01c5d37c(uVar13,0);
          }
          uVar14 = (uint)unaff_x21[3];
        }
        if (uVar14 <= in_stack_00000018._4_4_) break;
        lVar10 = (long)(int)in_stack_00000018._4_4_;
        in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
        unaff_x21[lVar10 + 4] = lVar12;
      }
      else {
        if (*(uint *)(unaff_x21 + 3) <= uVar5) break;
        plVar16 = unaff_x21 + uVar5 + 4;
        plVar4 = (long *)*plVar16;
        if ((plVar4 == (long *)0x0) ||
           (lVar12 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240)),
           lVar12 == 0)) goto LAB_03301b88;
        uVar6 = FUN_032eb6b4(lVar12,0);
        if ((uVar6 & 1) == 0) {
          if (*(uint *)(unaff_x21 + 3) <= uVar5) break;
          plVar16 = (long *)*plVar16;
          if ((plVar16 == (long *)0x0) ||
             (plVar4 = (long *)(**(code **)(*plVar16 + 0x238))
                                         (plVar16,*(undefined8 *)(*plVar16 + 0x240)),
             plVar4 == (long *)0x0)) goto LAB_03301b88;
          uVar6 = (**(code **)(*plVar4 + 0x298))
                            (plVar4,in_stack_00000010,*(undefined8 *)(*plVar4 + 0x2a0));
joined_r0x03301884:
          if ((uVar6 & 1) != 0) goto LAB_03301888;
        }
        else {
          if (in_stack_00000010 == (long *)0x0) goto LAB_03301b88;
          plVar4 = (long *)(**(code **)(*in_stack_00000010 + 0x318))
                                     (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 800));
          if (plVar4 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)
                               UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo
                             + 0x130);
            if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
               (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo
               )) {
              plVar8 = (long *)(**(code **)(*in_stack_00000010 + 0x318))
                                         (in_stack_00000010,
                                          *(undefined8 *)(*in_stack_00000010 + 800));
              if (uVar5 < *(uint *)(unaff_x21 + 3)) {
                plVar16 = (long *)*plVar16;
                if ((plVar16 != (long *)0x0) &&
                   (plVar4 = (long *)(**(code **)(*plVar16 + 0x238))
                                               (plVar16,*(undefined8 *)(*plVar16 + 0x240)),
                   plVar4 != (long *)0x0)) {
                  plVar4 = (long *)(**(code **)(*plVar4 + 0x318))
                                             (plVar4,*(undefined8 *)(*plVar4 + 800));
                  if (*(int *)(*(long *)
                                Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                              + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)
                                        Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                                      );
                  }
                  lVar12 = *(long *)
                            UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo
                  ;
                  if (plVar8 != (long *)0x0) {
                    if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar12 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 +
                                 -8) != lVar12)) {
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d748(plVar8);
                    }
                  }
                  if (plVar4 != (long *)0x0) {
                    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar12 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 +
                                 -8) != lVar12)) {
LAB_03301b8c:
                    /* WARNING: Subroutine does not return */
                      FUN_01c5d748(plVar4);
                    }
                  }
                  uVar6 = FUN_03301c68(plVar8,plVar4);
                  goto joined_r0x03301884;
                }
                goto LAB_03301b88;
              }
              break;
            }
          }
        }
      }
LAB_033018dc:
      do {
        uVar14 = *(uint *)(unaff_x21 + 3);
        unaff_x28 = uVar5 + 1;
        if ((long)(int)uVar14 <= (long)unaff_x28) {
          if (in_stack_00000018._4_4_ == 0) {
            return 0;
          }
          if (in_stack_00000018._4_4_ == 1) {
            if (uVar14 != 0) goto LAB_03301b60;
            goto thunk_FUN_01c5d4ac;
          }
          lVar12 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04232bd8,unaff_w20);
          if ((int)unaff_w20 < 1) goto LAB_03301964;
          if (lVar12 == 0) goto LAB_03301b88;
          uVar14 = *(uint *)(lVar12 + 0x18);
          uVar5 = 0;
          goto LAB_0330194c;
        }
        if (unaff_x19 != 0) {
          if (uVar14 <= unaff_x28) goto thunk_FUN_01c5d4ac;
          plVar4 = (long *)unaff_x21[uVar5 + 5];
          if ((plVar4 == (long *)0x0) ||
             (unaff_x23 = (**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250)),
             unaff_x23 == 0)) goto LAB_03301b88;
          param_1 = *(undefined8 *)(unaff_x23 + 0x18);
          uVar5 = unaff_x28;
          if (unaff_w20 != (uint)param_1) goto LAB_033018dc;
          if (0 < (int)unaff_w20) goto code_r0x0330147c;
          uVar15 = 0;
        }
LAB_033016a8:
        uVar5 = unaff_x28;
      } while (uVar15 != unaff_w20);
    } while( true );
  }
  goto thunk_FUN_01c5d4ac;
  while( true ) {
    *(int *)(lVar12 + 0x20 + uVar5 * 4) = (int)uVar5;
    uVar5 = uVar5 + 1;
    if (unaff_w20 == uVar5) break;
LAB_0330194c:
    if (uVar14 <= uVar5) goto thunk_FUN_01c5d4ac;
  }
LAB_03301964:
  if ((int)in_stack_00000018._4_4_ < 2) {
    uVar14 = 0;
  }
  else {
    bVar2 = false;
    uVar15 = 1;
    uVar9 = 0;
    do {
      if (*(uint *)(unaff_x21 + 3) <= uVar9) goto thunk_FUN_01c5d4ac;
      plVar16 = unaff_x21 + (long)(int)uVar9 + 4;
      plVar4 = (long *)*plVar16;
      if (plVar4 == (long *)0x0) goto LAB_03301b88;
      uVar13 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
      if (*(uint *)(unaff_x21 + 3) <= uVar15) goto thunk_FUN_01c5d4ac;
      plVar8 = unaff_x21 + (long)(int)uVar15 + 4;
      plVar4 = (long *)*plVar8;
      if (plVar4 == (long *)0x0) goto LAB_03301b88;
      uVar7 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)
                            Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                          );
      }
      iVar3 = FUN_03301e8c(uVar13,uVar7,in_stack_00000010);
      if ((unaff_x19 != 0) && (iVar3 == 0)) {
        if (*(uint *)(unaff_x21 + 3) <= uVar9) goto thunk_FUN_01c5d4ac;
        plVar4 = (long *)*plVar16;
        if (plVar4 == (long *)0x0) {
LAB_03301b88:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar13 = (**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250));
        if (*(uint *)(unaff_x21 + 3) <= uVar15) goto thunk_FUN_01c5d4ac;
        plVar4 = (long *)*plVar8;
        if (plVar4 == (long *)0x0) goto LAB_03301b88;
        uVar7 = (**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250));
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                            );
        }
        iVar3 = FUN_03302228(uVar13,lVar12,0,uVar7,lVar12,0);
      }
      if (iVar3 == 0) {
        if ((*(uint *)(unaff_x21 + 3) <= uVar9) || (*(uint *)(unaff_x21 + 3) <= uVar15))
        goto thunk_FUN_01c5d4ac;
        lVar10 = *plVar16;
        lVar11 = *plVar8;
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        iVar3 = FUN_03302678(lVar10,lVar11);
        bVar2 = (bool)(bVar2 | iVar3 == 0);
      }
      uVar14 = uVar15;
      if (iVar3 != 2) {
        uVar14 = uVar9;
      }
      uVar15 = uVar15 + 1;
      bVar2 = (bool)(bVar2 & iVar3 != 2);
      uVar9 = uVar14;
    } while (in_stack_00000018._4_4_ != uVar15);
    if (bVar2) {
      uVar13 = thunk_FUN_01c273e8(
                                 DarkTonic_MasterAudio_PlaylistController_PlaylistEndedEventHandler_TypeInfo
                                 );
      uVar13 = FUN_03313b64(uVar13,0);
      thunk_FUN_01c273e8(OVRRaycaster_<>c_TypeInfo);
      uVar7 = thunk_FUN_01c496e0();
      FUN_0320e3ec(uVar7,uVar13,0);
      uVar13 = thunk_FUN_01c273e8(
                                 Method_System_Collections_Generic_Dictionary<string,_TranslationQuery>_get_Item__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar7,uVar13);
    }
  }
  if (uVar14 < *(uint *)(unaff_x21 + 3)) {
    unaff_x21 = unaff_x21 + (int)uVar14;
LAB_03301b60:
    return unaff_x21[4];
  }
thunk_FUN_01c5d4ac:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


