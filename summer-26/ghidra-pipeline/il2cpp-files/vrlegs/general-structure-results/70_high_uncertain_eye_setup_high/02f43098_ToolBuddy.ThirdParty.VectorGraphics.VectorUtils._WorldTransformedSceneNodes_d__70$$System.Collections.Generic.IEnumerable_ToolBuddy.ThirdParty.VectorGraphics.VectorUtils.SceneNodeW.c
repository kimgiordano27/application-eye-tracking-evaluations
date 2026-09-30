/*
FUNCTION_NAME: ToolBuddy.ThirdParty.VectorGraphics.VectorUtils.<WorldTransformedSceneNodes>d__70$$System.Collections.Generic.IEnumerable<ToolBuddy.ThirdParty.VectorGraphics.VectorUtils.SceneNodeWorldTransform>.GetEnumerator
ENTRY_POINT: 02f43098
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f43578) */
/* WARNING: Removing unreachable block (ram,0x02f43480) */
/* WARNING: Removing unreachable block (ram,0x02f4354c) */
/* WARNING: Removing unreachable block (ram,0x02f435d4) */
/* WARNING: Removing unreachable block (ram,0x02f43544) */
/* WARNING: Removing unreachable block (ram,0x02f43548) */

long * ToolBuddy_ThirdParty_VectorGraphics_VectorUtils_<WorldTransformedSceneNodes>d__70__System_Collections_Generic_IEnumerable<ToolBuddy_ThirdParty_VectorGraphics_VectorUtils_SceneNodeWorldTransform>_GetEnumerator
                 (void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  uint uVar14;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
code_r0x02f43098:
  puVar6 = (undefined8 *)FUN_01a472ec();
  do {
    uVar7 = (*(code *)*puVar6)();
    puVar3 = PTR_DAT_03cfffe8;
    puVar2 = PTR_DAT_03cbed08;
    if ((uVar7 & 1) == 0) {
      plVar8 = (long *)thunk_FUN_01a89d6c();
      if (plVar8 == (long *)0x0) goto ToolBuddy_ThirdParty_VectorGraphics_Shape__get_Contours;
      lVar12 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 == 0) goto ToolBuddy_ThirdParty_VectorGraphics_PathProperties__set_Head;
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    lVar12 = *unaff_x24;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x23) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_02f43110;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_01a472ec();
LAB_02f43110:
    plVar8 = (long *)(*(code *)*puVar6)();
    if (plVar8 != (long *)0x0) {
      lVar12 = *plVar8;
      bVar1 = *(byte *)(*(long *)PTR_DAT_03d22a90 + 0x130);
      if ((*(byte *)(lVar12 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d22a90))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar8);
      }
      if (lVar12 == *(long *)PTR_DAT_03d23df0) {
        lVar12 = plVar8[3];
        if (*(int *)(*unaff_x19 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar12 = FUN_02f452c4(lVar12);
        if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_02787b20(lVar12,0,0);
        if ((uVar7 & 1) != 0) {
          FUN_025b1328(*(undefined8 *)PTR_DAT_03ce5b68,plVar8[2],0);
          plVar9 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc07a8,1);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if ((lVar12 != 0) &&
             (lVar10 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
            uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar11,0);
          }
          if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          plVar9[4] = lVar12;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9 + 4,lVar12);
          if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          plVar9 = (long *)FUN_0278a354();
          uVar7 = FUN_0267de10(plVar9,0,0);
          if ((uVar7 & 1) != 0) {
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            uVar7 = FUN_0267dcdc(plVar9,0);
            if (((uVar7 & 1) == 0) && (uVar7 = FUN_0267dd3c(plVar9,0), (uVar7 & 1) != 0)) {
              FUN_025b1328(*(undefined8 *)PTR_DAT_03ce5b70,plVar8[2],0);
              plVar8 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc07a8,2);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              if ((lVar12 != 0) &&
                 (lVar10 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
              {
                uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                FUN_01ab6b14(uVar11,0);
              }
              if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              plVar8[4] = lVar12;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 4,lVar12);
              lVar12 = (**(code **)(*plVar9 + 0x448))(plVar9,*(undefined8 *)(*plVar9 + 0x450));
              if ((lVar12 != 0) &&
                 (lVar10 = thunk_FUN_01a89d6c(lVar12,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
              {
                uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                FUN_01ab6b14(uVar11,0);
              }
              if (*(uint *)(plVar8 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              plVar8[5] = lVar12;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 5,lVar12);
              lVar12 = FUN_0278a354();
              uVar7 = FUN_0267de10(lVar12,0,0);
              if ((uVar7 & 1) != 0) {
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                uVar7 = FUN_0267dcdc(lVar12,0);
                if ((uVar7 & 1) == 0) {
                  FUN_0267dd3c(lVar12,0);
                }
              }
              (**(code **)(*plVar9 + 0x448))(plVar9,*(undefined8 *)(*plVar9 + 0x450));
              uVar11 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d239b0);
              FUN_02f3ce64();
              if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              (**(code **)(*in_stack_00000008 + 0x308))
                        (in_stack_00000008,uVar11,*(undefined8 *)(*in_stack_00000008 + 0x310));
            }
          }
        }
      }
    }
    lVar12 = *unaff_x24;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 == 0) goto code_r0x02f43098;
    piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    while (*(long *)(piVar13 + -2) != *unaff_x23) {
      uVar7 = uVar7 - 1;
      piVar13 = piVar13 + 4;
      if (uVar7 == 0) goto code_r0x02f43098;
    }
    puVar6 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar13 = piVar13 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
      puVar6 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_02f43464;
    }
  }
ToolBuddy_ThirdParty_VectorGraphics_PathProperties__set_Head:
  puVar6 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)puVar2,0);
LAB_02f43464:
  (*(code *)*puVar6)(plVar8,puVar6[1]);
ToolBuddy_ThirdParty_VectorGraphics_Shape__get_Contours:
  puVar2 = PTR_DAT_03d23cb8;
  if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar4 = (**(code **)(*in_stack_00000008 + 0x298))
                    (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x2a0));
  lVar12 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d23df8,uVar4);
  (**(code **)(*in_stack_00000008 + 0x368))
            (in_stack_00000008,lVar12,0,*(undefined8 *)(*in_stack_00000008 + 0x370));
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar10 = *(long *)puVar2;
  }
  plVar8 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x38);
  thunk_FUN_01a4b338();
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  (**(code **)(*plVar8 + 0x318))(plVar8);
  if (in_stack_00000038._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000010,0);
  }
  if (lVar12 == 0) {
LAB_02f43558:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar8 = (long *)FUN_01ab6a94(*(undefined8 *)puVar3,*(undefined4 *)(lVar12 + 0x18));
  puVar3 = PTR_DAT_03d23de8;
  puVar2 = PTR_DAT_03d229e0;
  if (0 < *(int *)(lVar12 + 0x18)) {
    uVar14 = 0;
    do {
      plVar9 = (long *)thunk_FUN_01a89d6c();
      if (plVar9 == (long *)0x0) {
LAB_02f42c94:
        plVar9 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfb838,1);
        lVar10 = *(long *)PTR_DAT_03d229f0;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar10);
          lVar10 = *(long *)PTR_DAT_03d229f0;
        }
        if (plVar9 == (long *)0x0) goto LAB_02f43558;
        lVar10 = **(long **)(lVar10 + 0xb8);
        if ((lVar10 != 0) &&
           (lVar5 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0))
        goto LAB_02f43560;
        if ((int)plVar9[3] == 0) goto LAB_02f4355c;
        plVar9[4] = lVar10;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9 + 4,lVar10);
      }
      else {
        lVar10 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_02f42c7c;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar2,0);
LAB_02f42c7c:
        lVar10 = (*(code *)*puVar6)(plVar9,puVar6[1]);
        if (lVar10 == 0) goto LAB_02f42c94;
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar14) {
LAB_02f4355c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar10 = *(long *)(lVar12 + (long)(int)uVar14 * 8 + 0x20);
      if (lVar10 == 0) goto LAB_02f43558;
      uVar11 = *(undefined8 *)(lVar10 + 0xd8);
      lVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
      FUN_02f2d730(lVar5,lVar10,uVar11);
      if (plVar8 == (long *)0x0) goto LAB_02f43558;
      if ((lVar5 != 0) &&
         (lVar10 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
LAB_02f43560:
        uVar11 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar11,0);
      }
      if (*(uint *)(plVar8 + 3) <= uVar14) goto LAB_02f4355c;
      plVar8[(long)(int)uVar14 + 4] = lVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (plVar8 + (long)(int)uVar14 + 4,lVar5);
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < *(int *)(lVar12 + 0x18));
  }
  puVar2 = PTR_DAT_03d23cb8;
  if (in_stack_00000018 != (long *)0x0) {
    lVar12 = *(long *)PTR_DAT_03d23cb8;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar12 = *(long *)puVar2;
    }
    in_stack_00000028 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x68);
    in_stack_00000020 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x60);
    uVar11 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbed58,&stack0x00000020);
    lVar12 = *in_stack_00000018;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03cca1a0) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_02f42fbc;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_01a472ec(in_stack_00000018,*(long *)PTR_DAT_03cca1a0,1);
LAB_02f42fbc:
    (*(code *)*puVar6)(in_stack_00000018,uVar11,plVar8,puVar6[1]);
  }
  return plVar8;
}


