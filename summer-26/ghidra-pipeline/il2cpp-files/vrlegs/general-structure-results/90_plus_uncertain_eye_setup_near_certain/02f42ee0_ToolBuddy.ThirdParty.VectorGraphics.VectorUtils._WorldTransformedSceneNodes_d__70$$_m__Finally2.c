/*
FUNCTION_NAME: ToolBuddy.ThirdParty.VectorGraphics.VectorUtils.<WorldTransformedSceneNodes>d__70$$<>m__Finally2
ENTRY_POINT: 02f42ee0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f43480) */
/* WARNING: Removing unreachable block (ram,0x02f4354c) */
/* WARNING: Removing unreachable block (ram,0x02f435d4) */
/* WARNING: Removing unreachable block (ram,0x02f43544) */
/* WARNING: Removing unreachable block (ram,0x02f43548) */

long * ToolBuddy_ThirdParty_VectorGraphics_VectorUtils_<WorldTransformedSceneNodes>d__70__<>m__Finally2
                 (void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  int unaff_w19;
  long unaff_x20;
  long *plVar18;
  long *unaff_x21;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 *unaff_x23;
  long *unaff_x24;
  uint uVar21;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  if (in_stack_00000038._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(unaff_x22);
  }
  if ((unaff_w19 != 3) && (unaff_w19 != 0)) {
    return unaff_x21;
  }
  if (unaff_x20 == 0) goto LAB_02f43558;
  lVar6 = thunk_FUN_01a5dd74();
  puVar4 = PTR_DAT_03d23cb8;
  lVar15 = *(long *)PTR_DAT_03d23cb8;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar15);
    lVar15 = *(long *)puVar4;
  }
  plVar18 = *(long **)(*(long *)(lVar15 + 0xb8) + 0x38);
  thunk_FUN_01a4b338();
  puVar3 = PTR_DAT_03d23df8;
  if (plVar18 == (long *)0x0) goto LAB_02f43558;
  lVar15 = (**(code **)(*plVar18 + 0x308))(plVar18,lVar6,*(undefined8 *)(*plVar18 + 0x310));
  if (lVar15 == 0) {
    lVar15 = *(long *)puVar4;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar15 = *(long *)puVar4;
    }
    uVar19 = *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x78);
    in_stack_00000038._4_1_ = '\0';
    FUN_027e0bd8(uVar19,(long)&stack0x00000038 + 4,0);
    lVar15 = *(long *)puVar4;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar15 = *(long *)puVar4;
    }
    plVar18 = *(long **)(*(long *)(lVar15 + 0xb8) + 0x38);
    thunk_FUN_01a4b338();
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar15 = (**(code **)(*plVar18 + 0x308))(plVar18,lVar6,*(undefined8 *)(*plVar18 + 0x310));
    if (lVar15 == 0) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar15 = FUN_02f45ca8(lVar6);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar5 = FUN_02f22eb4(lVar15,0);
      plVar18 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbf900);
      Newtonsoft_Json_Utilities_StringUtils__ToLower(plVar18,uVar5,0);
      plVar8 = (long *)FUN_02f239a0(lVar15,0);
      puVar3 = PTR_DAT_03cbed20;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      do {
        lVar7 = *plVar8;
        lVar15 = *(long *)puVar3;
        uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar15) {
              puVar9 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_02f430b0;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar9 = (undefined8 *)FUN_01a472ec(plVar8,lVar15,0);
LAB_02f430b0:
        uVar16 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        unaff_x23 = (undefined8 *)PTR_DAT_03cfffe8;
        puVar2 = PTR_DAT_03cbed08;
        if ((uVar16 & 1) == 0) {
          plVar8 = (long *)thunk_FUN_01a89d6c(plVar8,*(undefined8 *)PTR_DAT_03cbed08);
          if (plVar8 == (long *)0x0) goto ToolBuddy_ThirdParty_VectorGraphics_Shape__get_Contours;
          lVar15 = *plVar8;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 == 0) goto ToolBuddy_ThirdParty_VectorGraphics_PathProperties__set_Head;
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          goto ToolBuddy_ThirdParty_VectorGraphics_PathProperties__get_Stroke;
        }
        lVar7 = *plVar8;
        lVar15 = *(long *)puVar3;
        uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == lVar15) {
              puVar9 = (undefined8 *)(lVar7 + (long)(*piVar17 + 1) * 0x10 + 0x138);
              goto LAB_02f43110;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar9 = (undefined8 *)FUN_01a472ec(plVar8,lVar15,1);
LAB_02f43110:
        plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (plVar10 != (long *)0x0) {
          lVar15 = *plVar10;
          bVar1 = *(byte *)(*(long *)PTR_DAT_03d22a90 + 0x130);
          if ((*(byte *)(lVar15 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_03d22a90)) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6ee0(plVar10);
          }
          if (lVar15 == *(long *)PTR_DAT_03d23df0) {
            lVar15 = plVar10[3];
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            lVar15 = FUN_02f452c4(lVar15);
            if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar16 = FUN_02787b20(lVar15,0,0);
            if ((uVar16 & 1) != 0) {
              uVar20 = FUN_025b1328(*(undefined8 *)PTR_DAT_03ce5b68,plVar10[2],0);
              plVar11 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc07a8,1);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              if ((lVar15 != 0) &&
                 (lVar7 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar7 == 0))
              {
                uVar19 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                FUN_01ab6b14(uVar19,0);
              }
              if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              plVar11[4] = lVar15;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11 + 4,lVar15);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              plVar11 = (long *)FUN_0278a354(lVar6,uVar20,plVar11,0);
              uVar16 = FUN_0267de10(plVar11,0,0);
              if ((uVar16 & 1) != 0) {
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                uVar16 = FUN_0267dcdc(plVar11,0);
                if (((uVar16 & 1) == 0) && (uVar16 = FUN_0267dd3c(plVar11,0), (uVar16 & 1) != 0)) {
                  uVar20 = FUN_025b1328(*(undefined8 *)PTR_DAT_03ce5b70,plVar10[2],0);
                  plVar12 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc07a8,2);
                  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  if ((lVar15 != 0) &&
                     (lVar7 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar12 + 0x40)),
                     lVar7 == 0)) {
                    uVar19 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6b14(uVar19,0);
                  }
                  if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c44();
                  }
                  plVar12[4] = lVar15;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar12 + 4,lVar15);
                  lVar7 = (**(code **)(*plVar11 + 0x448))(plVar11,*(undefined8 *)(*plVar11 + 0x450))
                  ;
                  if ((lVar7 != 0) &&
                     (lVar13 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar12 + 0x40)),
                     lVar13 == 0)) {
                    uVar19 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6b14(uVar19,0);
                  }
                  if (*(uint *)(plVar12 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c44();
                  }
                  plVar12[5] = lVar7;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (plVar12 + 5,lVar7);
                  lVar7 = FUN_0278a354(lVar6,uVar20,plVar12,0);
                  uVar16 = FUN_0267de10(lVar7,0,0);
                  if ((uVar16 & 1) != 0) {
                    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c3c();
                    }
                    uVar16 = FUN_0267dcdc(lVar7,0);
                    if (((uVar16 & 1) != 0) || (uVar16 = FUN_0267dd3c(lVar7,0), (uVar16 & 1) == 0))
                    {
                      lVar7 = 0;
                    }
                  }
                  lVar13 = plVar10[2];
                  uVar20 = (**(code **)(*plVar11 + 0x448))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x450));
                  uVar14 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d239b0);
                  FUN_02f3ce64(uVar14,lVar6,lVar13,uVar20,lVar15,plVar11,lVar7,0);
                  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01ab6c3c();
                  }
                  (**(code **)(*plVar18 + 0x308))(plVar18,uVar14,*(undefined8 *)(*plVar18 + 0x310));
                }
              }
            }
          }
        }
      } while( true );
    }
    uVar20 = *(undefined8 *)PTR_DAT_03d23df8;
    lVar7 = thunk_FUN_01a89d6c(lVar15,uVar20);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(lVar15,uVar20);
    }
    goto LAB_02f4351c;
  }
  uVar19 = *(undefined8 *)puVar3;
  lVar7 = thunk_FUN_01a89d6c(lVar15,uVar19);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6ee0(lVar15,uVar19);
  }
  goto LAB_02f42be8;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
ToolBuddy_ThirdParty_VectorGraphics_PathProperties__get_Stroke:
    if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_02f43464;
    }
  }
ToolBuddy_ThirdParty_VectorGraphics_PathProperties__set_Head:
  puVar9 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)puVar2,0);
LAB_02f43464:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
ToolBuddy_ThirdParty_VectorGraphics_Shape__get_Contours:
  puVar4 = PTR_DAT_03d23cb8;
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar5 = (**(code **)(*plVar18 + 0x298))(plVar18,*(undefined8 *)(*plVar18 + 0x2a0));
  lVar7 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d23df8,uVar5);
  (**(code **)(*plVar18 + 0x368))(plVar18,lVar7,0,*(undefined8 *)(*plVar18 + 0x370));
  lVar15 = *(long *)puVar4;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar15 = *(long *)puVar4;
  }
  plVar18 = *(long **)(*(long *)(lVar15 + 0xb8) + 0x38);
  thunk_FUN_01a4b338();
  if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  (**(code **)(*plVar18 + 0x318))(plVar18,lVar6,lVar7,*(undefined8 *)(*plVar18 + 800));
LAB_02f4351c:
  if (in_stack_00000038._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar19,0);
  }
LAB_02f42be8:
  if (lVar7 != 0) {
    plVar18 = (long *)FUN_01ab6a94(*unaff_x23,*(undefined4 *)(lVar7 + 0x18));
    puVar3 = PTR_DAT_03d23de8;
    puVar4 = PTR_DAT_03d229e0;
    if (0 < *(int *)(lVar7 + 0x18)) {
      uVar21 = 0;
      do {
        plVar8 = (long *)thunk_FUN_01a89d6c(unaff_x20,*(undefined8 *)puVar4);
        if (plVar8 == (long *)0x0) {
LAB_02f42c94:
          plVar8 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfb838,1);
          lVar6 = *(long *)PTR_DAT_03d229f0;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_01a58e78(lVar6);
            lVar6 = *(long *)PTR_DAT_03d229f0;
          }
          if (plVar8 == (long *)0x0) goto LAB_02f43558;
          lVar6 = **(long **)(lVar6 + 0xb8);
          if ((lVar6 != 0) &&
             (lVar15 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar15 == 0))
          goto LAB_02f43560;
          if ((int)plVar8[3] == 0) goto LAB_02f4355c;
          plVar8[4] = lVar6;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 4,lVar6);
        }
        else {
          lVar15 = *plVar8;
          lVar6 = *(long *)puVar4;
          uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == lVar6) {
                puVar9 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_02f42c7c;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar9 = (undefined8 *)FUN_01a472ec(plVar8,lVar6,0);
LAB_02f42c7c:
          lVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
          if (lVar6 == 0) goto LAB_02f42c94;
          plVar8 = (long *)0x0;
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar21) {
LAB_02f4355c:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        lVar6 = *(long *)(lVar7 + (long)(int)uVar21 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_02f43558;
        uVar19 = *(undefined8 *)(lVar6 + 0xd8);
        lVar15 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
        FUN_02f2d730(lVar15,lVar6,uVar19,unaff_x20,plVar8,0);
        if (plVar18 == (long *)0x0) goto LAB_02f43558;
        if ((lVar15 != 0) &&
           (lVar6 = thunk_FUN_01a89d6c(lVar15,*(undefined8 *)(*plVar18 + 0x40)), lVar6 == 0)) {
LAB_02f43560:
          uVar19 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar19,0);
        }
        if (*(uint *)(plVar18 + 3) <= uVar21) goto LAB_02f4355c;
        plVar18[(long)(int)uVar21 + 4] = lVar15;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  (plVar18 + (long)(int)uVar21 + 4,lVar15);
        uVar21 = uVar21 + 1;
      } while ((int)uVar21 < *(int *)(lVar7 + 0x18));
    }
    puVar4 = PTR_DAT_03d23cb8;
    if (in_stack_00000018 != (long *)0x0) {
      lVar6 = *(long *)PTR_DAT_03d23cb8;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar6 = *(long *)puVar4;
      }
      in_stack_00000028 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x68);
      in_stack_00000020 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x60);
      uVar19 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbed58,&stack0x00000020);
      lVar6 = *in_stack_00000018;
      uVar16 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_03cca1a0) {
            puVar9 = (undefined8 *)(lVar6 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_02f42fbc;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar9 = (undefined8 *)FUN_01a472ec(in_stack_00000018,*(long *)PTR_DAT_03cca1a0,1);
LAB_02f42fbc:
      (*(code *)*puVar9)(in_stack_00000018,uVar19,plVar18,puVar9[1]);
    }
    return plVar18;
  }
LAB_02f43558:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


