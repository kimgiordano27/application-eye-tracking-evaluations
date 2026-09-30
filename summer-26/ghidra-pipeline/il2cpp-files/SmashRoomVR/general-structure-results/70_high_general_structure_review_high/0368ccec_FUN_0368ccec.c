/*
FUNCTION_NAME: FUN_0368ccec
ENTRY_POINT: 0368ccec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0368d6c4) */
/* WARNING: Removing unreachable block (ram,0x0368d4c0) */

void FUN_0368ccec(long param_1,long *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  undefined4 local_64;
  undefined *puVar18;
  
  puVar18 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff7421 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_3129);
    thunk_FUN_01ad9084(StringLiteral_1547);
    thunk_FUN_01ad9084(StringLiteral_1542);
    thunk_FUN_01ad9084(StringLiteral_2029);
    thunk_FUN_01ad9084(StringLiteral_1541);
    thunk_FUN_01ad9084(PTR_DAT_03d9b8b0);
    thunk_FUN_01ad9084(PTR_DAT_03d816d0);
    thunk_FUN_01ad9084(PTR_DAT_03d9b7c0);
    thunk_FUN_01ad9084(PTR_DAT_03d9b5c8);
    thunk_FUN_01ad9084(PTR_DAT_03d9a970);
    thunk_FUN_01ad9084(PTR_DAT_03d9b8d0);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__);
    thunk_FUN_01ad9084(PTR_DAT_03d9a2b8);
    thunk_FUN_01ad9084(PTR_DAT_03d9a2c0);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesBackgroundSize_IsSame__
                      );
    thunk_FUN_01ad9084(
                      Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9b6d8);
    thunk_FUN_01ad9084(PTR_DAT_03d9b598);
    thunk_FUN_01ad9084(Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__);
    thunk_FUN_01ad9084(PTR_DAT_03d9a2e0);
    thunk_FUN_01ad9084(PTR_DAT_03d9b5a0);
    thunk_FUN_01ad9084(PTR_DAT_03d9b6e0);
    thunk_FUN_01ad9084(PTR_DAT_03d9a318);
    thunk_FUN_01ad9084(PTR_DAT_03d9b5a8);
    thunk_FUN_01ad9084(
                      Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d9a2e8);
    thunk_FUN_01ad9084(PTR_DAT_03d9b6e8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d9c268);
    thunk_FUN_01ad9084(PTR_DAT_03d9c168);
    DAT_03ff7421 = 1;
  }
  local_64 = 0;
  if (*(int *)(*(long *)puVar18 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_03922f24(param_1,0,0);
  puVar3 = PTR_DAT_03d9a2e8;
  puVar18 = PTR_DAT_03d9a2e0;
  if ((uVar6 & 1) == 0) {
    if (param_2 != (long *)0x0) {
      if (param_1 != 0) {
        uVar7 = Unity_VisualScripting_Member__Invoke(param_1,0,0);
        lVar8 = thunk_FUN_01afaadc(*(undefined8 *)puVar3);
        FUN_02b592d8(lVar8,uVar7,*(undefined8 *)puVar18);
        puVar4 = PTR_DAT_03d9b6e8;
        puVar3 = PTR_DAT_03d9b6e0;
        puVar18 = PTR_DAT_03d9a2b8;
        if (*(long *)(param_1 + 0x30) != 0) {
          iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 0x18);
          lVar9 = FUN_03632758(param_1,0);
          lVar10 = thunk_FUN_01afaadc(*(undefined8 *)puVar4);
          FUN_02b591b0(lVar10,*(undefined8 *)puVar3);
          lVar19 = *param_2;
          uVar6 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar6 != 0) {
            piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == *(long *)puVar18) {
                puVar11 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
                goto LAB_0368cfbc;
              }
              uVar6 = uVar6 - 1;
              piVar22 = piVar22 + 4;
            } while (uVar6 != 0);
          }
          puVar11 = (undefined8 *)FUN_01ae9f78(param_2,*(long *)puVar18,0);
LAB_0368cfbc:
          plVar12 = (long *)(*(code *)*puVar11)(param_2,puVar11[1]);
          puVar18 = StringLiteral_1547;
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          do {
            lVar19 = *plVar12;
            uVar6 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar6 != 0) {
              piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) ==
                    *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__) {
                  puVar11 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
                  goto LAB_0368d030;
                }
                uVar6 = uVar6 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar6 != 0);
            }
            puVar11 = (undefined8 *)
                      FUN_01ae9f78(plVar12,*(long *)
                                            Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_2__
                                   ,0);
LAB_0368d030:
            uVar6 = (*(code *)*puVar11)(plVar12,puVar11[1]);
            if ((uVar6 & 1) == 0) {
              if (plVar12 == (long *)0x0) goto LAB_0368d4b4;
              lVar9 = *plVar12;
              uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar6 == 0) goto LAB_0368d48c;
              piVar22 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_0368d474;
            }
            lVar19 = *plVar12;
            uVar6 = (ulong)*(ushort *)(lVar19 + 0x12e);
            if (uVar6 != 0) {
              piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)PTR_DAT_03d9a2c0) {
                  puVar11 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
                  goto LAB_0368d094;
                }
                uVar6 = uVar6 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar6 != 0);
            }
            puVar11 = (undefined8 *)FUN_01ae9f78(plVar12,*(long *)PTR_DAT_03d9a2c0,0);
LAB_0368d094:
            lVar19 = (*(code *)*puVar11)(plVar12,puVar11[1]);
            lVar13 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9b5c8);
            FUN_0361e13c(lVar13,0);
            lVar14 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a2e8);
            FUN_02b591b0(lVar14,*(undefined8 *)PTR_DAT_03d9b5a0);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            plVar26 = (long *)(lVar13 + 0x18);
            *plVar26 = lVar14;
            thunk_FUN_01b4f09c(plVar26,lVar14);
            lVar14 = thunk_FUN_01afaadc(*(undefined8 *)
                                         Method_DinoFractureDemo_StartParticleSystemWhenInView_<StartParticleSystem>d__4_System_Collections_IEnumerator_Reset__
                                       );
            FUN_02b2c088(lVar14,*(undefined8 *)Method_StartMenu_<>c__DisplayClass3_0_<Start>b__0__);
            plVar27 = (long *)(lVar13 + 0x20);
            *plVar27 = lVar14;
            thunk_FUN_01b4f09c(plVar27,lVar14);
            lVar14 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9a970);
            Unity_VisualScripting_GlobalMessageListener__OnApplicationFocus(lVar14,lVar19,0);
            plVar25 = (long *)(lVar13 + 0x10);
            *plVar25 = lVar14;
            thunk_FUN_01b4f09c(plVar25,lVar14);
            lVar14 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_1541);
            FUN_0255494c(lVar14,*(undefined8 *)StringLiteral_1542);
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            if (*(long *)(lVar19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            lVar15 = FUN_01b47fd0(*(undefined8 *)
                                   Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesBackgroundSize_IsSame__
                                  ,*(undefined4 *)(*(long *)(lVar19 + 0x10) + 0x18));
            lVar20 = *(long *)(lVar19 + 0x10);
            if (lVar20 == 0) {
LAB_0368d5cc:
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            lVar23 = 8;
            while( true ) {
              uVar6 = lVar23 - 8;
              if ((long)(int)*(uint *)(lVar20 + 0x18) <= (long)uVar6) break;
              if (*(uint *)(lVar20 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              uVar16 = FUN_025568c8(lVar14,*(undefined4 *)(lVar20 + lVar23 * 4),&local_64,
                                    *(undefined8 *)puVar18);
              if ((uVar16 & 1) == 0) {
                if (*plVar26 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                local_64 = *(undefined4 *)(*plVar26 + 0x18);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                if (*(uint *)(lVar15 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48180();
                }
                *(undefined4 *)(lVar15 + lVar23 * 4) = local_64;
                lVar20 = *(long *)(lVar19 + 0x10);
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                if (*(uint *)(lVar20 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48180();
                }
                FUN_02555230(lVar14,*(undefined4 *)(lVar20 + lVar23 * 4),local_64,
                             *(undefined8 *)StringLiteral_3129);
                lVar20 = *(long *)(lVar19 + 0x10);
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                if (*(uint *)(lVar20 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48180();
                }
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                lVar24 = *plVar26;
                uVar7 = FUN_02b59714(lVar8,*(undefined4 *)(lVar20 + lVar23 * 4),
                                     *(undefined8 *)PTR_DAT_03d9b5a8);
                if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                lVar20 = *(long *)(lVar24 + 0x10);
                lVar21 = *(long *)PTR_DAT_03d9b598;
                *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                uVar2 = *(uint *)(lVar24 + 0x18);
                if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                  *(uint *)(lVar24 + 0x18) = uVar2 + 1;
                  *(undefined8 *)(lVar20 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
                  thunk_FUN_01b4f09c();
                }
                else {
                  FUN_02b599e4(lVar24,uVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                }
                lVar20 = *(long *)(lVar19 + 0x10);
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                if (*(uint *)(lVar20 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48180();
                }
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                lVar24 = *plVar27;
                iVar5 = FUN_02555194(lVar9,*(undefined4 *)(lVar20 + lVar23 * 4),
                                     *(undefined8 *)StringLiteral_2029);
                if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                lVar20 = *(long *)(lVar24 + 0x10);
                lVar21 = *(long *)
                          Method_Oculus_Interaction_Throw_StandardVelocityCalculator_<>c_<_ctor>b__115_0__
                ;
                *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                uVar2 = *(uint *)(lVar24 + 0x18);
                iVar5 = iVar5 + iVar1;
                if (uVar2 < *(uint *)(lVar20 + 0x18)) {
                  *(uint *)(lVar24 + 0x18) = uVar2 + 1;
                  *(int *)(lVar20 + (long)(int)uVar2 * 4 + 0x20) = iVar5;
                }
                else {
                  FUN_02b2c8dc(lVar24,iVar5,
                               *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
                }
              }
              else {
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                if (*(uint *)(lVar15 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48180();
                }
                *(undefined4 *)(lVar15 + lVar23 * 4) = local_64;
              }
              lVar20 = *(long *)(lVar19 + 0x10);
              lVar23 = lVar23 + 1;
              if (lVar20 == 0) goto LAB_0368d5cc;
            }
            lVar19 = *plVar25;
            uVar7 = FUN_01ec4500(lVar15,*(undefined8 *)PTR_DAT_03d816d0);
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178(uVar7,uVar7);
            }
            FUN_0361bc2c(lVar19,uVar7,0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            lVar19 = *(long *)(lVar10 + 0x10);
            lVar14 = *(long *)PTR_DAT_03d9b6d8;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            uVar2 = *(uint *)(lVar10 + 0x18);
            if (uVar2 < *(uint *)(lVar19 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar2 + 1;
              plVar25 = (long *)(lVar19 + (long)(int)uVar2 * 8 + 0x20);
              *plVar25 = lVar13;
              thunk_FUN_01b4f09c(plVar25,lVar13);
            }
            else {
              FUN_02b599e4(lVar10,lVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
          } while( true );
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    thunk_FUN_01ad9084(StringLiteral_2191);
    uVar7 = thunk_FUN_01afaadc();
    puVar18 = PTR_DAT_03d9aa50;
  }
  else {
    thunk_FUN_01ad9084(StringLiteral_2191);
    uVar7 = thunk_FUN_01afaadc();
    puVar18 = PTR_DAT_03d83a18;
  }
  uVar17 = thunk_FUN_01ad9084(puVar18);
  FUN_02fd1220(uVar7,uVar17,0);
  uVar17 = thunk_FUN_01ad9084(PTR_DAT_03d9c270);
                    /* WARNING: Subroutine does not return */
  FUN_01b48050(uVar7,uVar17);
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar22 = piVar22 + 4;
    if (uVar6 == 0) break;
LAB_0368d474:
    if (*(long *)(piVar22 + -2) ==
        *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
      puVar11 = (undefined8 *)(lVar9 + (long)*piVar22 * 0x10 + 0x138);
      goto LAB_0368d4a8;
    }
  }
LAB_0368d48c:
  puVar11 = (undefined8 *)
            FUN_01ae9f78(plVar12,*(long *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0);
LAB_0368d4a8:
  (*(code *)*puVar11)(plVar12,puVar11[1]);
LAB_0368d4b4:
  puVar18 = PTR_DAT_03d9c168;
  FUN_0361da1c(lVar10,param_1,lVar8,0,0);
  if ((param_3 & 1) != 0) {
    FUN_03679d04(param_1,param_2,0);
  }
  FUN_03635fe0(param_1,0,0);
  lVar8 = *(long *)puVar18;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar8 = *(long *)puVar18;
  }
  puVar4 = PTR_DAT_03d9b8b0;
  puVar3 = PTR_DAT_03d9b7c0;
  lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if (lVar9 == 0) {
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar8 = *(long *)puVar18;
    }
    uVar7 = **(undefined8 **)(lVar8 + 0xb8);
    lVar9 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d9b8d0);
    FUN_028b7004(lVar9,uVar7,*(undefined8 *)PTR_DAT_03d9c268,0);
    plVar12 = (long *)(*(long *)(*(long *)puVar18 + 0xb8) + 8);
    *plVar12 = lVar9;
    thunk_FUN_01b4f09c(plVar12,lVar9);
  }
  uVar7 = FUN_01ebc520(lVar10,lVar9,*(undefined8 *)puVar4);
  FUN_01ec6884(uVar7,*(undefined8 *)puVar3);
  return;
}


