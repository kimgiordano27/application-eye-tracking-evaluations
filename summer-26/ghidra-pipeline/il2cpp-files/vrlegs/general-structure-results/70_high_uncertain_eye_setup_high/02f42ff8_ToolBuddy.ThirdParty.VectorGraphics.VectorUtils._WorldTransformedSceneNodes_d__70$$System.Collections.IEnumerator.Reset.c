/*
FUNCTION_NAME: ToolBuddy.ThirdParty.VectorGraphics.VectorUtils.<WorldTransformedSceneNodes>d__70$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 02f42ff8
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

long * ToolBuddy_ThirdParty_VectorGraphics_VectorUtils_<WorldTransformedSceneNodes>d__70__System_Collections_IEnumerator_Reset
                 (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *unaff_x19;
  long unaff_x22;
  uint uVar17;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar7 = FUN_02f45ca8();
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar5 = FUN_02f22eb4(lVar7,0);
  plVar8 = (long *)thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbf900);
  Newtonsoft_Json_Utilities_StringUtils__ToLower(plVar8,uVar5,0);
  plVar9 = (long *)FUN_02f239a0(lVar7,0);
  puVar3 = PTR_DAT_03cbed20;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  do {
    lVar14 = *plVar9;
    lVar7 = *(long *)puVar3;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar7) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_02f430b0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_01a472ec(plVar9,lVar7,0);
LAB_02f430b0:
    uVar15 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    puVar4 = PTR_DAT_03cfffe8;
    puVar2 = PTR_DAT_03cbed08;
    if ((uVar15 & 1) == 0) {
      plVar9 = (long *)thunk_FUN_01a89d6c(plVar9,*(undefined8 *)PTR_DAT_03cbed08);
      if (plVar9 == (long *)0x0) goto ToolBuddy_ThirdParty_VectorGraphics_Shape__get_Contours;
      lVar7 = *plVar9;
      uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar15 == 0) goto ToolBuddy_ThirdParty_VectorGraphics_PathProperties__set_Head;
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar14 = *plVar9;
    lVar7 = *(long *)puVar3;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar7) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_02f43110;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_01a472ec(plVar9,lVar7,1);
LAB_02f43110:
    plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    if (plVar11 != (long *)0x0) {
      lVar7 = *plVar11;
      bVar1 = *(byte *)(*(long *)PTR_DAT_03d22a90 + 0x130);
      if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d22a90)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar11);
      }
      if (lVar7 == *(long *)PTR_DAT_03d23df0) {
        lVar7 = plVar11[3];
        if (*(int *)(*unaff_x19 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        lVar7 = FUN_02f452c4(lVar7);
        if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_02787b20(lVar7,0,0);
        if ((uVar15 & 1) != 0) {
          FUN_025b1328(*(undefined8 *)PTR_DAT_03ce5b68,plVar11[2],0);
          plVar12 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc07a8,1);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if ((lVar7 != 0) &&
             (lVar14 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar14 == 0)) {
            uVar13 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar13,0);
          }
          if ((int)plVar12[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          plVar12[4] = lVar7;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar12 + 4,lVar7);
          if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          plVar12 = (long *)FUN_0278a354();
          uVar15 = FUN_0267de10(plVar12,0,0);
          if ((uVar15 & 1) != 0) {
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            uVar15 = FUN_0267dcdc(plVar12,0);
            if (((uVar15 & 1) == 0) && (uVar15 = FUN_0267dd3c(plVar12,0), (uVar15 & 1) != 0)) {
              FUN_025b1328(*(undefined8 *)PTR_DAT_03ce5b70,plVar11[2],0);
              plVar11 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc07a8,2);
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              if ((lVar7 != 0) &&
                 (lVar14 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                FUN_01ab6b14(uVar13,0);
              }
              if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              plVar11[4] = lVar7;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11 + 4,lVar7);
              lVar7 = (**(code **)(*plVar12 + 0x448))(plVar12,*(undefined8 *)(*plVar12 + 0x450));
              if ((lVar7 != 0) &&
                 (lVar14 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0))
              {
                uVar13 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                FUN_01ab6b14(uVar13,0);
              }
              if (*(uint *)(plVar11 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c44();
              }
              plVar11[5] = lVar7;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11 + 5,lVar7);
              lVar7 = FUN_0278a354();
              uVar15 = FUN_0267de10(lVar7,0,0);
              if ((uVar15 & 1) != 0) {
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                uVar15 = FUN_0267dcdc(lVar7,0);
                if ((uVar15 & 1) == 0) {
                  FUN_0267dd3c(lVar7,0);
                }
              }
              (**(code **)(*plVar12 + 0x448))(plVar12,*(undefined8 *)(*plVar12 + 0x450));
              uVar13 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d239b0);
              FUN_02f3ce64();
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              (**(code **)(*plVar8 + 0x308))(plVar8,uVar13,*(undefined8 *)(*plVar8 + 0x310));
            }
          }
        }
      }
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
      puVar10 = (undefined8 *)(lVar7 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_02f43464;
    }
  }
ToolBuddy_ThirdParty_VectorGraphics_PathProperties__set_Head:
  puVar10 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar2,0);
LAB_02f43464:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
ToolBuddy_ThirdParty_VectorGraphics_Shape__get_Contours:
  puVar3 = PTR_DAT_03d23cb8;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar5 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
  lVar7 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d23df8,uVar5);
  (**(code **)(*plVar8 + 0x368))(plVar8,lVar7,0,*(undefined8 *)(*plVar8 + 0x370));
  lVar14 = *(long *)puVar3;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar14 = *(long *)puVar3;
  }
  plVar8 = *(long **)(*(long *)(lVar14 + 0xb8) + 0x38);
  thunk_FUN_01a4b338();
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  (**(code **)(*plVar8 + 0x318))(plVar8);
  if (in_stack_00000038._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000010,0);
  }
  if (lVar7 == 0) {
LAB_02f43558:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar8 = (long *)FUN_01ab6a94(*(undefined8 *)puVar4,*(undefined4 *)(lVar7 + 0x18));
  puVar2 = PTR_DAT_03d23de8;
  puVar3 = PTR_DAT_03d229e0;
  if (0 < *(int *)(lVar7 + 0x18)) {
    uVar17 = 0;
    do {
      plVar9 = (long *)thunk_FUN_01a89d6c();
      if (plVar9 == (long *)0x0) {
LAB_02f42c94:
        plVar9 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfb838,1);
        lVar14 = *(long *)PTR_DAT_03d229f0;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar14);
          lVar14 = *(long *)PTR_DAT_03d229f0;
        }
        if (plVar9 == (long *)0x0) goto LAB_02f43558;
        lVar14 = **(long **)(lVar14 + 0xb8);
        if ((lVar14 != 0) &&
           (lVar6 = thunk_FUN_01a89d6c(lVar14,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0))
        goto LAB_02f43560;
        if ((int)plVar9[3] == 0) goto LAB_02f4355c;
        plVar9[4] = lVar14;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9 + 4,lVar14);
      }
      else {
        lVar14 = *plVar9;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_02f42c7c;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar3,0);
LAB_02f42c7c:
        lVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if (lVar14 == 0) goto LAB_02f42c94;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar17) {
LAB_02f4355c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar14 = *(long *)(lVar7 + (long)(int)uVar17 * 8 + 0x20);
      if (lVar14 == 0) goto LAB_02f43558;
      uVar13 = *(undefined8 *)(lVar14 + 0xd8);
      lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
      FUN_02f2d730(lVar6,lVar14,uVar13);
      if (plVar8 == (long *)0x0) goto LAB_02f43558;
      if ((lVar6 != 0) &&
         (lVar14 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar14 == 0)) {
LAB_02f43560:
        uVar13 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar13,0);
      }
      if (*(uint *)(plVar8 + 3) <= uVar17) goto LAB_02f4355c;
      plVar8[(long)(int)uVar17 + 4] = lVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (plVar8 + (long)(int)uVar17 + 4,lVar6);
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < *(int *)(lVar7 + 0x18));
  }
  puVar3 = PTR_DAT_03d23cb8;
  if (in_stack_00000018 != (long *)0x0) {
    lVar7 = *(long *)PTR_DAT_03d23cb8;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *(long *)puVar3;
    }
    in_stack_00000028 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x68);
    in_stack_00000020 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x60);
    uVar13 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbed58,&stack0x00000020);
    lVar7 = *in_stack_00000018;
    uVar15 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_03cca1a0) {
          puVar10 = (undefined8 *)(lVar7 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_02f42fbc;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_01a472ec(in_stack_00000018,*(long *)PTR_DAT_03cca1a0,1);
LAB_02f42fbc:
    (*(code *)*puVar10)(in_stack_00000018,uVar13,plVar8,puVar10[1]);
  }
  return plVar8;
}


