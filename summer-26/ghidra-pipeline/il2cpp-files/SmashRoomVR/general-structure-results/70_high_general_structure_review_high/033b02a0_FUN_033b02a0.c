/*
FUNCTION_NAME: FUN_033b02a0
ENTRY_POINT: 033b02a0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_033b02a0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  int iVar18;
  long *plVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int local_68;
  undefined4 local_64;
  
  if ((DAT_03ff621c & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d8d798);
    thunk_FUN_01ad9084(PTR_DAT_03d8d7a0);
    thunk_FUN_01ad9084(StringLiteral_2459);
    thunk_FUN_01ad9084(StringLiteral_8039);
    thunk_FUN_01ad9084(StringLiteral_6709);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesBackgroundSize_IsSame__
                      );
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRScreenFade_<Fade>d__25_System_Collections_IEnumerator_Reset__);
    thunk_FUN_01ad9084(Method_OVRSpaceQuery_Options_set_UuidFilter__);
    thunk_FUN_01ad9084(StringLiteral_175);
    thunk_FUN_01ad9084(StringLiteral_176);
    thunk_FUN_01ad9084(Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__41_0__);
    DAT_03ff621c = 1;
  }
  puVar9 = (undefined8 *)StringLiteral_176;
  puVar4 = 
  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
  ;
  plVar17 = (long *)(param_1 + 0x68);
  if (*plVar17 == 0) {
LAB_033b0484:
    if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x58)) {
      lVar12 = FUN_01b47fd0(*(undefined8 *)
                             Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesBackgroundSize_IsSame__
                           );
      plVar19 = (long *)(param_1 + 0x70);
      *plVar19 = lVar12;
      thunk_FUN_01b4f09c(plVar19,lVar12);
      plVar13 = *(long **)(param_1 + 0x60);
      if ((plVar13 != (long *)0x0) &&
         (plVar13 = (long *)(**(code **)(*plVar13 + 0x328))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x330)),
         puVar3 = StringLiteral_6709,
         puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__, plVar13 != (long *)0x0
         )) {
        uVar21 = 0;
        do {
          lVar12 = *plVar13;
          uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar5 != 0) {
            piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar9 = (undefined8 *)(lVar12 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_033b0534;
              }
              uVar5 = uVar5 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar5 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)puVar2,0);
LAB_033b0534:
          uVar5 = (*(code *)*puVar9)(plVar13,puVar9[1]);
          lVar12 = *plVar19;
          if ((uVar5 & 1) == 0) {
            uVar6 = FUN_02489e00(*(undefined8 *)PTR_DAT_03d8d7a0);
            FUN_01e2488c(lVar12,uVar6,*(undefined8 *)PTR_DAT_03d8d798);
            puVar9 = (undefined8 *)StringLiteral_176;
            goto LAB_033b061c;
          }
          lVar14 = *plVar13;
          uVar5 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar5 != 0) {
            piVar11 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
                puVar9 = (undefined8 *)(lVar14 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_033b0594;
              }
              uVar5 = uVar5 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar5 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)puVar3,0);
LAB_033b0594:
          plVar10 = (long *)(*(code *)*puVar9)(plVar13,puVar9[1]);
          if ((lVar12 == 0) || (plVar10 == (long *)0x0)) break;
          if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) goto LAB_033b0948;
          puVar7 = (undefined4 *)thunk_FUN_01afac30();
          if (*(uint *)(lVar12 + 0x18) <= uVar21) goto LAB_033b094c;
          lVar14 = (long)(int)uVar21;
          uVar21 = uVar21 + 1;
          *(undefined4 *)(lVar12 + lVar14 * 4 + 0x20) = *puVar7;
        } while( true );
      }
    }
    else {
LAB_033b061c:
      puVar3 = Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__41_0__;
      puVar2 = Method_OVRSpaceQuery_Options_set_UuidFilter__;
      if (*plVar17 == 0) {
        if (*(long *)(param_1 + 0x70) == 0) {
          return;
        }
        uVar6 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_8039);
        FUN_0301ccfc(uVar6,0);
        *(undefined8 *)(param_1 + 0x68) = uVar6;
        thunk_FUN_01b4f09c(plVar17,uVar6);
        uVar6 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
        FUN_02b591b0(uVar6,*(undefined8 *)puVar2);
        *(undefined8 *)(param_1 + 0x78) = uVar6;
        thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x78),uVar6);
        lVar12 = 0;
        iVar18 = -1;
LAB_033b071c:
        puVar2 = Method_OVRScreenFade_<Fade>d__25_System_Collections_IEnumerator_Reset__;
        if (0 < *(int *)(param_1 + 0x54)) {
          uVar5 = 0;
          iVar20 = 0;
          do {
            lVar14 = *(long *)(param_1 + 0x70);
            if (lVar14 == 0) {
              iVar22 = (int)uVar5;
            }
            else {
              if (*(uint *)(lVar14 + 0x18) <= uVar5) {
LAB_033b094c:
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              iVar22 = *(int *)(lVar14 + uVar5 * 4 + 0x20);
            }
            if (iVar18 == iVar22) {
              if (lVar12 == 0) goto LAB_033b0480;
              lVar14 = *(long *)(param_1 + 0x78);
              uVar6 = FUN_02b59714(lVar12,iVar20,*puVar9);
              if (lVar14 == 0) goto LAB_033b0480;
              lVar15 = *(long *)(lVar14 + 0x10);
              lVar16 = *(long *)puVar2;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              if (lVar15 == 0) goto LAB_033b0480;
              uVar21 = *(uint *)(lVar14 + 0x18);
              if (uVar21 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar21 + 1;
                *(undefined8 *)(lVar15 + (long)(int)uVar21 * 8 + 0x20) = uVar6;
                thunk_FUN_01b4f09c();
              }
              else {
                FUN_02b599e4(lVar14,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              iVar20 = iVar20 + 1;
              if (iVar20 == *(int *)(lVar12 + 0x18)) {
                iVar18 = -1;
              }
              else {
                plVar13 = (long *)*plVar17;
                uVar6 = FUN_02b59714(lVar12,iVar20,*puVar9);
                if ((plVar13 == (long *)0x0) ||
                   (plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                                (plVar13,uVar6,*(undefined8 *)(*plVar13 + 0x310)),
                   plVar13 == (long *)0x0)) goto LAB_033b0480;
                if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar4 + 0x40))
                goto LAB_033b0948;
                piVar11 = (int *)thunk_FUN_01afac30();
                iVar18 = *piVar11;
              }
            }
            else {
              uVar6 = *(undefined8 *)(param_1 + 0x48);
              if (*(int *)(*(long *)StringLiteral_2459 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar6 = FUN_02fe55bc(iVar22,uVar6,0);
              lVar14 = *(long *)(param_1 + 0x78);
              if (lVar14 == 0) goto LAB_033b0480;
              lVar15 = *(long *)(lVar14 + 0x10);
              lVar16 = *(long *)puVar2;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              if (lVar15 == 0) goto LAB_033b0480;
              uVar21 = *(uint *)(lVar14 + 0x18);
              if (uVar21 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar21 + 1;
                puVar9 = (undefined8 *)(lVar15 + (long)(int)uVar21 * 8 + 0x20);
                *puVar9 = uVar6;
                thunk_FUN_01b4f09c(puVar9,uVar6);
              }
              else {
                FUN_02b599e4(lVar14,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              plVar13 = (long *)*plVar17;
              local_68 = iVar22;
              uVar8 = thunk_FUN_01afa70c(*(undefined8 *)puVar4,&local_68);
              if (plVar13 == (long *)0x0) goto LAB_033b0480;
              (**(code **)(*plVar13 + 0x318))(plVar13,uVar6,uVar8,*(undefined8 *)(*plVar13 + 800));
              puVar9 = (undefined8 *)StringLiteral_176;
            }
            uVar5 = uVar5 + 1;
          } while ((long)uVar5 < (long)*(int *)(param_1 + 0x54));
        }
        return;
      }
      plVar13 = (long *)(param_1 + 0x78);
      lVar12 = *plVar13;
      lVar14 = thunk_FUN_01afaadc(*(undefined8 *)
                                   Method_OVRSpatialAnchor_<>c_<GetListToStoreTheShareRequest>b__41_0__
                                 );
      FUN_02b591b0(lVar14,*(undefined8 *)puVar2);
      *plVar13 = lVar14;
      thunk_FUN_01b4f09c(plVar13,lVar14);
      if (lVar12 != 0) {
        plVar13 = *(long **)(param_1 + 0x68);
        uVar6 = FUN_02b59714(lVar12,0,*puVar9);
        if ((plVar13 != (long *)0x0) &&
           (plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                        (plVar13,uVar6,*(undefined8 *)(*plVar13 + 0x310)),
           plVar13 != (long *)0x0)) {
          if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) {
LAB_033b0948:
                    /* WARNING: Subroutine does not return */
            FUN_01b4841c();
          }
          piVar11 = (int *)thunk_FUN_01afac30();
          iVar18 = *piVar11;
          goto LAB_033b071c;
        }
      }
    }
  }
  else {
    lVar12 = *(long *)(param_1 + 0x78);
    if (lVar12 != 0) {
      iVar18 = 0;
      while( true ) {
        if (*(int *)(lVar12 + 0x18) <= iVar18) goto LAB_033b0484;
        iVar20 = *(int *)(param_1 + 0x50);
        while (uVar5 = FUN_033af344(param_1,iVar20), (uVar5 & 1) != 0) {
          iVar20 = *(int *)(param_1 + 0x50) + 1;
          *(int *)(param_1 + 0x50) = iVar20;
        }
        if (*(long *)(param_1 + 0x78) == 0) break;
        uVar6 = FUN_02b59714(*(long *)(param_1 + 0x78),iVar18,*puVar9);
        plVar13 = (long *)*plVar17;
        if ((plVar13 == (long *)0x0) ||
           (plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                        (plVar13,uVar6,*(undefined8 *)(*plVar13 + 0x310)),
           plVar13 == (long *)0x0)) break;
        if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) goto LAB_033b0948;
        puVar7 = (undefined4 *)thunk_FUN_01afac30();
        uVar1 = *puVar7;
        local_64 = *(undefined4 *)(param_1 + 0x50);
        plVar13 = *(long **)(param_1 + 0x68);
        uVar8 = thunk_FUN_01afa70c(*(undefined8 *)puVar4,&local_64);
        if (plVar13 == (long *)0x0) break;
        (**(code **)(*plVar13 + 0x318))(plVar13,uVar6,uVar8,*(undefined8 *)(*plVar13 + 800));
        FUN_033aff90(param_1,*(undefined4 *)(param_1 + 0x50),uVar1);
        lVar12 = *(long *)(param_1 + 0x78);
        iVar18 = iVar18 + 1;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
        if (lVar12 == 0) break;
      }
    }
  }
LAB_033b0480:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


