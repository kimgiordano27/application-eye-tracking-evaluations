/*
FUNCTION_NAME: FUN_033fdc58
ENTRY_POINT: 033fdc58
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 180
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033fe200) */
/* WARNING: Removing unreachable block (ram,0x033fe020) */

long FUN_033fdc58(long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined1 uVar19;
  int iVar20;
  undefined8 uVar21;
  
  if ((DAT_04832653 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRControllerHelper_InputFocusAquired__);
    thunk_FUN_01efb3a4(Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04832653 = 1;
  }
  plVar10 = *(long **)(param_1 + 0x20);
  if ((plVar10 != (long *)0x0) &&
     (iVar8 = (**(code **)(*plVar10 + 0x298))(plVar10,*(undefined8 *)(*plVar10 + 0x2a0)), 0 < iVar8)
     ) {
    plVar10 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                          Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__);
    FUN_0353e574(plVar10,0);
    plVar11 = *(long **)(param_1 + 0x20);
    if (plVar11 != (long *)0x0) {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x388))(plVar11,*(undefined8 *)(*plVar11 + 0x390));
      puVar7 = Method_OVRControllerHelper_InputFocusAquired__;
      puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar8 = 0;
      do {
        lVar16 = *plVar11;
        lVar15 = *(long *)puVar5;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar15) {
              puVar12 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_033fdd7c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238(plVar11,lVar15,0);
LAB_033fdd7c:
        uVar17 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        puVar6 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
        if ((uVar17 & 1) == 0) {
          plVar11 = (long *)thunk_FUN_01f116d0(plVar11,*(undefined8 *)
                                                                                                                
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                              );
          if (plVar11 == (long *)0x0) goto LAB_033fe014;
          lVar15 = *plVar11;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar17 == 0) goto LAB_033fdef0;
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          goto LAB_033fded8;
        }
        lVar16 = *plVar11;
        lVar15 = *(long *)puVar5;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar15) {
              puVar12 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_033fdddc;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238(plVar11,lVar15,1);
LAB_033fdddc:
        plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar15 = *plVar13;
        bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
        if ((*(byte *)(lVar15 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc();
        }
        lVar15 = (**(code **)(lVar15 + 0x178))(plVar13,*(undefined8 *)(lVar15 + 0x180));
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        (**(code **)(*plVar10 + 0x308))(plVar10,lVar15,*(undefined8 *)(*plVar10 + 0x310));
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        iVar8 = iVar8 + *(int *)(lVar15 + 0x18);
      } while( true );
    }
    goto LAB_033fe0cc;
  }
  lVar15 = *(long *)(param_1 + 0x18);
LAB_033fde54:
  if (lVar15 == 0) {
    lVar16 = FUN_01f08890(*(undefined8 *)
                           Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,2);
    uVar19 = 0;
  }
  else {
    uVar17 = *(ulong *)(lVar15 + 0x18);
    iVar8 = (int)uVar17;
    if (iVar8 < 0x80) {
      lVar16 = FUN_01f08890(*(undefined8 *)
                             Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,
                            iVar8 + 2);
      FUN_03596b60(lVar15,0,lVar16,2,uVar17 & 0xffffffff,0);
    }
    else {
      uVar19 = (undefined1)uVar17;
      if (iVar8 < 0x100) {
        lVar16 = FUN_01f08890(*(undefined8 *)
                               Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,
                              iVar8 + 3);
        FUN_03596b60(lVar15,0,lVar16,3,uVar17 & 0xffffffff,0);
        if (lVar16 == 0) goto LAB_033fe0cc;
        if (*(uint *)(lVar16 + 0x18) < 3) goto LAB_033fe1f8;
        *(undefined1 *)(lVar16 + 0x22) = uVar19;
        iVar8 = 0x81;
      }
      else {
        uVar3 = (undefined1)(uVar17 >> 8);
        if (iVar8 < 0x10000) {
          lVar16 = FUN_01f08890(*(undefined8 *)
                                 Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,
                                iVar8 + 4);
          FUN_03596b60(lVar15,0,lVar16,4,uVar17 & 0xffffffff,0);
          if (lVar16 == 0) goto LAB_033fe0cc;
          if ((*(uint *)(lVar16 + 0x18) < 3) ||
             (*(undefined1 *)(lVar16 + 0x22) = uVar3, *(uint *)(lVar16 + 0x18) == 3))
          goto LAB_033fe1f8;
          *(undefined1 *)(lVar16 + 0x23) = uVar19;
          iVar8 = 0x82;
        }
        else {
          uVar4 = (undefined1)(uVar17 >> 0x10);
          if (iVar8 < 0x1000000) {
            lVar16 = FUN_01f08890(*(undefined8 *)
                                   Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__
                                  ,iVar8 + 5);
            FUN_03596b60(lVar15,0,lVar16,5,uVar17 & 0xffffffff,0);
            if (lVar16 == 0) goto LAB_033fe0cc;
            uVar1 = *(uint *)(lVar16 + 0x18);
            if (((uVar1 < 3) || (*(undefined1 *)(lVar16 + 0x22) = uVar4, uVar1 == 3)) ||
               (*(undefined1 *)(lVar16 + 0x23) = uVar3, uVar1 < 5)) goto LAB_033fe1f8;
            *(undefined1 *)(lVar16 + 0x24) = uVar19;
            iVar8 = 0x83;
          }
          else {
            lVar16 = FUN_01f08890(*(undefined8 *)
                                   Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__
                                  ,iVar8 + 6);
            FUN_03596b60(lVar15,0,lVar16,6,uVar17 & 0xffffffff,0);
            if (lVar16 == 0) goto LAB_033fe0cc;
            uVar1 = *(uint *)(lVar16 + 0x18);
            if (((uVar1 < 3) || (*(char *)(lVar16 + 0x22) = (char)(uVar17 >> 0x18), uVar1 == 3)) ||
               ((*(undefined1 *)(lVar16 + 0x23) = uVar4, uVar1 < 5 ||
                (*(undefined1 *)(lVar16 + 0x24) = uVar3, uVar1 == 5)))) goto LAB_033fe1f8;
            *(undefined1 *)(lVar16 + 0x25) = uVar19;
            iVar8 = 0x84;
          }
        }
      }
    }
    uVar19 = (undefined1)iVar8;
    plVar10 = (long *)(param_1 + 0x18);
    if (*plVar10 == 0) {
      *plVar10 = lVar15;
      thunk_FUN_01f51358(plVar10,lVar15);
    }
  }
  if (lVar16 != 0) {
    if ((*(int *)(lVar16 + 0x18) != 0) &&
       (*(undefined1 *)(lVar16 + 0x20) = *(undefined1 *)(param_1 + 0x10),
       *(int *)(lVar16 + 0x18) != 1)) {
      *(undefined1 *)(lVar16 + 0x21) = uVar19;
      return lVar16;
    }
LAB_033fe1f8:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  goto LAB_033fe0cc;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_033fded8:
    if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
      puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_033fe008;
    }
  }
LAB_033fdef0:
  puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar6,0);
LAB_033fe008:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_033fe014:
  puVar5 = Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__;
  lVar15 = FUN_01f08890(*(undefined8 *)
                         Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,iVar8);
  plVar11 = *(long **)(param_1 + 0x20);
  if (plVar11 != (long *)0x0) {
    iVar20 = 0;
    iVar8 = 0;
    do {
      iVar9 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
      if (iVar9 <= iVar8) goto LAB_033fde54;
      if ((plVar10 == (long *)0x0) ||
         (lVar16 = (**(code **)(*plVar10 + 0x2e8))(plVar10,iVar8,*(undefined8 *)(*plVar10 + 0x2f0)),
         lVar16 == 0)) break;
      uVar21 = *(undefined8 *)puVar5;
      lVar14 = thunk_FUN_01f116d0(lVar16,uVar21);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar16,uVar21);
      }
      FUN_03596b60(lVar14,0,lVar15,iVar20,*(undefined4 *)(lVar14 + 0x18),0);
      plVar11 = *(long **)(param_1 + 0x20);
      iVar8 = iVar8 + 1;
      iVar20 = iVar20 + *(int *)(lVar14 + 0x18);
    } while (plVar11 != (long *)0x0);
  }
LAB_033fe0cc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


