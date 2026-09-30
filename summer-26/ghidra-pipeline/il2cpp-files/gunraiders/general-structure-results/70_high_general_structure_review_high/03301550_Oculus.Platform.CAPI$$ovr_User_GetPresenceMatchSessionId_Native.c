/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_User_GetPresenceMatchSessionId_Native
ENTRY_POINT: 03301550
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_17;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


long Oculus_Platform_CAPI__ovr_User_GetPresenceMatchSessionId_Native(long param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  code *in_x9;
  long unaff_x19;
  uint unaff_w20;
  uint uVar12;
  long *unaff_x21;
  uint unaff_w22;
  long lVar13;
  long unaff_x23;
  long *unaff_x24;
  long lVar14;
  uint unaff_w26;
  uint uVar15;
  long *unaff_x27;
  ulong unaff_x28;
  long *unaff_x29;
  long *plVar16;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
code_r0x03301550:
  plVar4 = (long *)(*in_x9)(param_2,*(undefined8 *)(param_1 + 800));
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo +
                     0x130);
    if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo)) {
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w22) goto thunk_FUN_01c5d4ac;
      plVar4 = (long *)*unaff_x27;
      if (plVar4 == (long *)0x0) goto LAB_03301b88;
      plVar4 = (long *)(**(code **)(*plVar4 + 0x318))(plVar4,*(undefined8 *)(*plVar4 + 800));
      plVar5 = (long *)(**(code **)(*unaff_x24 + 0x318))
                                 (unaff_x24,*(undefined8 *)(*unaff_x24 + 800));
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)
                            Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                          );
      }
      lVar10 = *(long *)UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo;
      if (plVar4 != (long *)0x0) {
        if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) !=
            lVar10)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar4);
        }
      }
      if (plVar5 != (long *)0x0) {
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8) !=
            lVar10)) {
LAB_03301b8c:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748(plVar5);
        }
      }
      uVar6 = FUN_03301c68(plVar4,plVar5);
      if ((uVar6 & 1) != 0) goto LAB_03301680;
    }
  }
LAB_033016a8:
  uVar6 = unaff_x28;
  if (unaff_w22 != unaff_w20) goto LAB_033018dc;
  do {
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar7 = FUN_032ea0d4(in_stack_00000010,0,0);
    unaff_w22 = unaff_w20;
    if ((uVar7 & 1) == 0) {
LAB_03301888:
      uVar11 = *(uint *)(unaff_x21 + 3);
      if (uVar11 <= uVar6) goto thunk_FUN_01c5d4ac;
      lVar10 = unaff_x21[uVar6 + 4];
      if (lVar10 != 0) {
        lVar13 = thunk_FUN_01c495e4(lVar10,*(undefined8 *)(*unaff_x21 + 0x40));
        if (lVar13 == 0) {
          uVar8 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar8,0);
        }
        uVar11 = (uint)unaff_x21[3];
      }
      if (uVar11 <= in_stack_00000018._4_4_) goto thunk_FUN_01c5d4ac;
      lVar13 = (long)(int)in_stack_00000018._4_4_;
      in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
      unaff_x21[lVar13 + 4] = lVar10;
    }
    else {
      if (*(uint *)(unaff_x21 + 3) <= uVar6) goto thunk_FUN_01c5d4ac;
      plVar5 = unaff_x21 + uVar6 + 4;
      plVar4 = (long *)*plVar5;
      if ((plVar4 == (long *)0x0) ||
         (lVar10 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240)),
         lVar10 == 0)) goto LAB_03301b88;
      uVar7 = FUN_032eb6b4(lVar10,0);
      if ((uVar7 & 1) == 0) {
        if (*(uint *)(unaff_x21 + 3) <= uVar6) goto thunk_FUN_01c5d4ac;
        plVar5 = (long *)*plVar5;
        if ((plVar5 == (long *)0x0) ||
           (plVar4 = (long *)(**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240))
           , plVar4 == (long *)0x0)) goto LAB_03301b88;
        uVar7 = (**(code **)(*plVar4 + 0x298))
                          (plVar4,in_stack_00000010,*(undefined8 *)(*plVar4 + 0x2a0));
joined_r0x03301884:
        if ((uVar7 & 1) != 0) goto LAB_03301888;
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
              *(long *)UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo))
          {
            plVar4 = (long *)(**(code **)(*in_stack_00000010 + 0x318))
                                       (in_stack_00000010,*(undefined8 *)(*in_stack_00000010 + 800))
            ;
            if (uVar6 < *(uint *)(unaff_x21 + 3)) {
              plVar5 = (long *)*plVar5;
              if ((plVar5 != (long *)0x0) &&
                 (plVar5 = (long *)(**(code **)(*plVar5 + 0x238))
                                             (plVar5,*(undefined8 *)(*plVar5 + 0x240)),
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
                lVar10 = *(long *)
                          UnityEngine_ResourceManagement_ResourceLocations_IResourceLocation_TypeInfo
                ;
                if (plVar4 != (long *)0x0) {
                  if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
                     (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8
                               ) != lVar10)) {
                    /* WARNING: Subroutine does not return */
                    FUN_01c5d748(plVar4);
                  }
                }
                if (plVar5 != (long *)0x0) {
                  if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar10 + 0x130)) ||
                     (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar10 + 0x130) * 8 + -8
                               ) != lVar10)) goto LAB_03301b8c;
                }
                uVar7 = FUN_03301c68(plVar4,plVar5);
                goto joined_r0x03301884;
              }
              goto LAB_03301b88;
            }
            goto thunk_FUN_01c5d4ac;
          }
        }
      }
    }
LAB_033018dc:
    do {
      uVar11 = *(uint *)(unaff_x21 + 3);
      unaff_x28 = uVar6 + 1;
      if ((long)(int)uVar11 <= (long)unaff_x28) {
        if (in_stack_00000018._4_4_ == 0) {
          return 0;
        }
        if (in_stack_00000018._4_4_ == 1) {
          if (uVar11 != 0) goto LAB_03301b60;
          goto thunk_FUN_01c5d4ac;
        }
        lVar10 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04232bd8,unaff_w20);
        if ((int)unaff_w20 < 1) goto LAB_03301964;
        if (lVar10 == 0) goto LAB_03301b88;
        uVar11 = *(uint *)(lVar10 + 0x18);
        uVar6 = 0;
        goto LAB_0330194c;
      }
      if (unaff_x19 == 0) goto LAB_033016a8;
      if (uVar11 <= unaff_x28) goto thunk_FUN_01c5d4ac;
      plVar4 = (long *)unaff_x21[uVar6 + 5];
      if ((plVar4 == (long *)0x0) ||
         (unaff_x23 = (**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250)),
         unaff_x23 == 0)) goto LAB_03301b88;
      uVar11 = (uint)*(undefined8 *)(unaff_x23 + 0x18);
      uVar6 = unaff_x28;
    } while (unaff_w20 != uVar11);
    if ((int)unaff_w20 < 1) {
      unaff_w22 = 0;
      goto LAB_033016a8;
    }
    if (uVar11 == 0) goto thunk_FUN_01c5d4ac;
    lVar10 = 0;
    unaff_w26 = 1;
    while( true ) {
      plVar4 = *(long **)(unaff_x23 + lVar10 * 8 + 0x20);
      if (plVar4 == (long *)0x0) goto LAB_03301b88;
      unaff_w22 = unaff_w26 - 1;
      unaff_x24 = (long *)(**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_w22) goto thunk_FUN_01c5d4ac;
      unaff_x27 = (long *)(unaff_x19 + lVar10 * 8 + 0x20);
      lVar10 = *unaff_x27;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar6 = FUN_032e935c(unaff_x24,lVar10,0);
      if ((uVar6 & 1) == 0) {
        uVar8 = *(undefined8 *)System_MonoCustomAttrs_TypeInfo;
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar8 = FUN_032e04b8(uVar8,0);
        uVar6 = FUN_032e935c(unaff_x24,uVar8,0);
        if ((uVar6 & 1) == 0) {
          if (unaff_x24 == (long *)0x0) goto LAB_03301b88;
          uVar6 = FUN_032eb6b4(unaff_x24,0);
          if (*(uint *)(unaff_x19 + 0x18) <= unaff_w22) goto thunk_FUN_01c5d4ac;
          param_2 = (long *)*unaff_x27;
          if ((uVar6 & 1) != 0) {
            if (param_2 == (long *)0x0) goto LAB_03301b88;
            param_1 = *param_2;
            in_x9 = *(code **)(param_1 + 0x318);
            goto code_r0x03301550;
          }
          uVar6 = (**(code **)(*unaff_x24 + 0x298))
                            (unaff_x24,param_2,*(undefined8 *)(*unaff_x24 + 0x2a0));
          if ((uVar6 & 1) == 0) goto LAB_033016a8;
        }
      }
LAB_03301680:
      uVar6 = unaff_x28;
      if (unaff_w20 == unaff_w26) break;
      lVar10 = (long)(int)unaff_w26;
      bVar2 = *(uint *)(unaff_x23 + 0x18) <= unaff_w26;
      unaff_w26 = unaff_w26 + 1;
      if (bVar2) goto thunk_FUN_01c5d4ac;
    }
  } while( true );
  while( true ) {
    *(int *)(lVar10 + 0x20 + uVar6 * 4) = (int)uVar6;
    uVar6 = uVar6 + 1;
    if (unaff_w20 == uVar6) break;
LAB_0330194c:
    if (uVar11 <= uVar6) goto thunk_FUN_01c5d4ac;
  }
LAB_03301964:
  if ((int)in_stack_00000018._4_4_ < 2) {
    uVar11 = 0;
  }
  else {
    bVar2 = false;
    uVar15 = 1;
    uVar12 = 0;
    do {
      if (*(uint *)(unaff_x21 + 3) <= uVar12) goto thunk_FUN_01c5d4ac;
      plVar5 = unaff_x21 + (long)(int)uVar12 + 4;
      plVar4 = (long *)*plVar5;
      if (plVar4 == (long *)0x0) goto LAB_03301b88;
      uVar8 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
      if (*(uint *)(unaff_x21 + 3) <= uVar15) goto thunk_FUN_01c5d4ac;
      plVar16 = unaff_x21 + (long)(int)uVar15 + 4;
      plVar4 = (long *)*plVar16;
      if (plVar4 == (long *)0x0) goto LAB_03301b88;
      uVar9 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)
                            Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                          );
      }
      iVar3 = FUN_03301e8c(uVar8,uVar9,in_stack_00000010);
      if ((unaff_x19 != 0) && (iVar3 == 0)) {
        if (*(uint *)(unaff_x21 + 3) <= uVar12) goto thunk_FUN_01c5d4ac;
        plVar4 = (long *)*plVar5;
        if (plVar4 == (long *)0x0) {
LAB_03301b88:
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        uVar8 = (**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250));
        if (*(uint *)(unaff_x21 + 3) <= uVar15) goto thunk_FUN_01c5d4ac;
        plVar4 = (long *)*plVar16;
        if (plVar4 == (long *)0x0) goto LAB_03301b88;
        uVar9 = (**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250));
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                            );
        }
        iVar3 = FUN_03302228(uVar8,lVar10,0,uVar9,lVar10,0);
      }
      if (iVar3 == 0) {
        if ((*(uint *)(unaff_x21 + 3) <= uVar12) || (*(uint *)(unaff_x21 + 3) <= uVar15))
        goto thunk_FUN_01c5d4ac;
        lVar13 = *plVar5;
        lVar14 = *plVar16;
        if (*(int *)(*(long *)
                      Method_System_Collections_Generic_Dictionary<string,_AssetBundleUnloadOperation>_Remove__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        iVar3 = FUN_03302678(lVar13,lVar14);
        bVar2 = (bool)(bVar2 | iVar3 == 0);
      }
      uVar11 = uVar15;
      if (iVar3 != 2) {
        uVar11 = uVar12;
      }
      uVar15 = uVar15 + 1;
      bVar2 = (bool)(bVar2 & iVar3 != 2);
      uVar12 = uVar11;
    } while (in_stack_00000018._4_4_ != uVar15);
    if (bVar2) {
      uVar8 = thunk_FUN_01c273e8(
                                DarkTonic_MasterAudio_PlaylistController_PlaylistEndedEventHandler_TypeInfo
                                );
      uVar8 = FUN_03313b64(uVar8,0);
      thunk_FUN_01c273e8(OVRRaycaster_<>c_TypeInfo);
      uVar9 = thunk_FUN_01c496e0();
      FUN_0320e3ec(uVar9,uVar8,0);
      uVar8 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_Dictionary<string,_TranslationQuery>_get_Item__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar9,uVar8);
    }
  }
  if (uVar11 < *(uint *)(unaff_x21 + 3)) {
    unaff_x21 = unaff_x21 + (int)uVar11;
LAB_03301b60:
    return unaff_x21[4];
  }
thunk_FUN_01c5d4ac:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


