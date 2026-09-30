/*
FUNCTION_NAME: ToolBuddy.ThirdParty.VectorGraphics.GradientFill$$set_Addressing
ENTRY_POINT: 02f43248
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f43578) */
/* WARNING: Removing unreachable block (ram,0x02f43480) */
/* WARNING: Removing unreachable block (ram,0x02f4354c) */
/* WARNING: Removing unreachable block (ram,0x02f435d4) */
/* WARNING: Removing unreachable block (ram,0x02f43544) */
/* WARNING: Removing unreachable block (ram,0x02f43548) */

long * ToolBuddy_ThirdParty_VectorGraphics_GradientFill__set_Addressing(ulong param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  int *piVar13;
  long *unaff_x19;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  uint uVar14;
  long *unaff_x27;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  do {
    if ((param_1 & 1) != 0) {
      if (unaff_x27 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar8 = FUN_0267dcdc(unaff_x27,0);
      if (((uVar8 & 1) == 0) && (uVar8 = FUN_0267dd3c(unaff_x27,0), (uVar8 & 1) != 0)) {
        FUN_025b1328(*(undefined8 *)PTR_DAT_03ce5b70,unaff_x25[2],0);
        plVar9 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc07a8,2);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if ((unaff_x26 != 0) &&
           (lVar10 = thunk_FUN_01a89d6c(unaff_x26,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
          uVar12 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar12,0);
        }
        if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar9[4] = unaff_x26;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9 + 4,unaff_x26);
        lVar10 = (**(code **)(*unaff_x27 + 0x448))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x450));
        if ((lVar10 != 0) &&
           (lVar11 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
          uVar12 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar12,0);
        }
        if (*(uint *)(plVar9 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar9[5] = lVar10;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9 + 5,lVar10);
        lVar10 = FUN_0278a354();
        uVar8 = FUN_0267de10(lVar10,0,0);
        if ((uVar8 & 1) != 0) {
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar8 = FUN_0267dcdc(lVar10,0);
          if ((uVar8 & 1) == 0) {
            FUN_0267dd3c(lVar10,0);
          }
        }
        (**(code **)(*unaff_x27 + 0x448))(unaff_x27,*(undefined8 *)(*unaff_x27 + 0x450));
        uVar12 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d239b0);
        FUN_02f3ce64();
        if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        (**(code **)(*in_stack_00000008 + 0x308))
                  (in_stack_00000008,uVar12,*(undefined8 *)(*in_stack_00000008 + 0x310));
      }
    }
    do {
      do {
        do {
          lVar10 = *unaff_x24;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *unaff_x23) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_02f430b0;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar7 = (undefined8 *)FUN_01a472ec();
LAB_02f430b0:
          uVar8 = (*(code *)*puVar7)();
          puVar3 = PTR_DAT_03cfffe8;
          puVar2 = PTR_DAT_03cbed08;
          if ((uVar8 & 1) == 0) {
            plVar9 = (long *)thunk_FUN_01a89d6c();
            if (plVar9 == (long *)0x0) goto ToolBuddy_ThirdParty_VectorGraphics_Shape__get_Contours;
            lVar10 = *plVar9;
            uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar8 == 0) goto ToolBuddy_ThirdParty_VectorGraphics_PathProperties__set_Head;
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto ToolBuddy_ThirdParty_VectorGraphics_PathProperties__get_Stroke;
          }
          lVar10 = *unaff_x24;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *unaff_x23) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                goto LAB_02f43110;
              }
              uVar8 = uVar8 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 != 0);
          }
          puVar7 = (undefined8 *)FUN_01a472ec();
LAB_02f43110:
          unaff_x25 = (long *)(*(code *)*puVar7)();
        } while (unaff_x25 == (long *)0x0);
        lVar10 = *unaff_x25;
        bVar1 = *(byte *)(*(long *)PTR_DAT_03d22a90 + 0x130);
        if ((*(byte *)(lVar10 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d22a90)
           ) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(unaff_x25);
        }
      } while (lVar10 != *(long *)PTR_DAT_03d23df0);
      lVar10 = unaff_x25[3];
      if (*(int *)(*unaff_x19 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      unaff_x26 = FUN_02f452c4(lVar10);
      if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = FUN_02787b20(unaff_x26,0,0);
    } while ((uVar8 & 1) == 0);
    FUN_025b1328(*(undefined8 *)PTR_DAT_03ce5b68,unaff_x25[2],0);
    plVar9 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc07a8,1);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((unaff_x26 != 0) &&
       (lVar10 = thunk_FUN_01a89d6c(unaff_x26,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
      uVar12 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar12,0);
    }
    if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar9[4] = unaff_x26;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9 + 4,unaff_x26);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    unaff_x27 = (long *)FUN_0278a354();
    param_1 = FUN_0267de10(unaff_x27,0,0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar13 = piVar13 + 4;
    if (uVar8 == 0) break;
ToolBuddy_ThirdParty_VectorGraphics_PathProperties__get_Stroke:
    if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_02f43464;
    }
  }
ToolBuddy_ThirdParty_VectorGraphics_PathProperties__set_Head:
  puVar7 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar2,0);
LAB_02f43464:
  (*(code *)*puVar7)(plVar9,puVar7[1]);
ToolBuddy_ThirdParty_VectorGraphics_Shape__get_Contours:
  puVar2 = PTR_DAT_03d23cb8;
  if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar4 = (**(code **)(*in_stack_00000008 + 0x298))
                    (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x2a0));
  lVar10 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d23df8,uVar4);
  (**(code **)(*in_stack_00000008 + 0x368))
            (in_stack_00000008,lVar10,0,*(undefined8 *)(*in_stack_00000008 + 0x370));
  lVar11 = *(long *)puVar2;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar11 = *(long *)puVar2;
  }
  plVar9 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x38);
  thunk_FUN_01a4b338();
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  (**(code **)(*plVar9 + 0x318))(plVar9);
  if (in_stack_00000038._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000010,0);
  }
  if (lVar10 == 0) {
LAB_02f43558:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar9 = (long *)FUN_01ab6a94(*(undefined8 *)puVar3,*(undefined4 *)(lVar10 + 0x18));
  puVar3 = PTR_DAT_03d23de8;
  puVar2 = PTR_DAT_03d229e0;
  if (0 < *(int *)(lVar10 + 0x18)) {
    uVar14 = 0;
    do {
      plVar5 = (long *)thunk_FUN_01a89d6c();
      if (plVar5 == (long *)0x0) {
LAB_02f42c94:
        plVar5 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfb838,1);
        lVar11 = *(long *)PTR_DAT_03d229f0;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar11);
          lVar11 = *(long *)PTR_DAT_03d229f0;
        }
        if (plVar5 == (long *)0x0) goto LAB_02f43558;
        lVar11 = **(long **)(lVar11 + 0xb8);
        if ((lVar11 != 0) &&
           (lVar6 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
        goto LAB_02f43560;
        if ((int)plVar5[3] == 0) goto LAB_02f4355c;
        plVar5[4] = lVar11;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 4,lVar11);
      }
      else {
        lVar11 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_02f42c7c;
            }
            uVar8 = uVar8 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_01a472ec(plVar5,*(long *)puVar2,0);
LAB_02f42c7c:
        lVar11 = (*(code *)*puVar7)(plVar5,puVar7[1]);
        if (lVar11 == 0) goto LAB_02f42c94;
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar14) {
LAB_02f4355c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar11 = *(long *)(lVar10 + (long)(int)uVar14 * 8 + 0x20);
      if (lVar11 == 0) goto LAB_02f43558;
      uVar12 = *(undefined8 *)(lVar11 + 0xd8);
      lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
      FUN_02f2d730(lVar6,lVar11,uVar12);
      if (plVar9 == (long *)0x0) goto LAB_02f43558;
      if ((lVar6 != 0) &&
         (lVar11 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
LAB_02f43560:
        uVar12 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar12,0);
      }
      if (*(uint *)(plVar9 + 3) <= uVar14) goto LAB_02f4355c;
      plVar9[(long)(int)uVar14 + 4] = lVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (plVar9 + (long)(int)uVar14 + 4,lVar6);
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < *(int *)(lVar10 + 0x18));
  }
  puVar2 = PTR_DAT_03d23cb8;
  if (in_stack_00000018 != (long *)0x0) {
    lVar10 = *(long *)PTR_DAT_03d23cb8;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar10 = *(long *)puVar2;
    }
    in_stack_00000028 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x68);
    in_stack_00000020 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x60);
    uVar12 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbed58,&stack0x00000020);
    lVar10 = *in_stack_00000018;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03cca1a0) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_02f42fbc;
        }
        uVar8 = uVar8 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec(in_stack_00000018,*(long *)PTR_DAT_03cca1a0,1);
LAB_02f42fbc:
    (*(code *)*puVar7)(in_stack_00000018,uVar12,plVar9,puVar7[1]);
  }
  return plVar9;
}


