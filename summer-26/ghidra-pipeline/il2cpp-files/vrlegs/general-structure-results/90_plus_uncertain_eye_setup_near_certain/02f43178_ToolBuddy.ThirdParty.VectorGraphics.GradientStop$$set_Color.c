/*
FUNCTION_NAME: ToolBuddy.ThirdParty.VectorGraphics.GradientStop$$set_Color
ENTRY_POINT: 02f43178
PROGRAM: vrlegs-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f43578) */
/* WARNING: Removing unreachable block (ram,0x02f43480) */
/* WARNING: Removing unreachable block (ram,0x02f4354c) */
/* WARNING: Removing unreachable block (ram,0x02f435d4) */
/* WARNING: Removing unreachable block (ram,0x02f43544) */
/* WARNING: Removing unreachable block (ram,0x02f43548) */

long * ToolBuddy_ThirdParty_VectorGraphics_GradientStop__set_Color(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  int in_w8;
  int *piVar13;
  long *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  uint uVar14;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  do {
    if (in_w8 == 0) {
      thunk_FUN_01a58e78();
    }
    lVar7 = FUN_02f452c4(unaff_x21);
    if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar8 = FUN_02787b20(lVar7,0,0);
    if ((uVar8 & 1) != 0) {
      FUN_025b1328(*(undefined8 *)PTR_DAT_03ce5b68,unaff_x25[2],0);
      plVar9 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc07a8,1);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if ((lVar7 != 0) &&
         (lVar10 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
        uVar12 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar12,0);
      }
      if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar9[4] = lVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar9 + 4,lVar7);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar9 = (long *)FUN_0278a354();
      uVar8 = FUN_0267de10(plVar9,0,0);
      if ((uVar8 & 1) != 0) {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar8 = FUN_0267dcdc(plVar9,0);
        if (((uVar8 & 1) == 0) && (uVar8 = FUN_0267dd3c(plVar9,0), (uVar8 & 1) != 0)) {
          FUN_025b1328(*(undefined8 *)PTR_DAT_03ce5b70,unaff_x25[2],0);
          plVar11 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc07a8,2);
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if ((lVar7 != 0) &&
             (lVar10 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0)) {
            uVar12 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar12,0);
          }
          if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          plVar11[4] = lVar7;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11 + 4,lVar7);
          lVar7 = (**(code **)(*plVar9 + 0x448))(plVar9,*(undefined8 *)(*plVar9 + 0x450));
          if ((lVar7 != 0) &&
             (lVar10 = thunk_FUN_01a89d6c(lVar7,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0)) {
            uVar12 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar12,0);
          }
          if (*(uint *)(plVar11 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          plVar11[5] = lVar7;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11 + 5,lVar7);
          lVar7 = FUN_0278a354();
          uVar8 = FUN_0267de10(lVar7,0,0);
          if ((uVar8 & 1) != 0) {
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            uVar8 = FUN_0267dcdc(lVar7,0);
            if ((uVar8 & 1) == 0) {
              FUN_0267dd3c(lVar7,0);
            }
          }
          (**(code **)(*plVar9 + 0x448))(plVar9,*(undefined8 *)(*plVar9 + 0x450));
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
    }
    do {
      do {
        lVar7 = *unaff_x24;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x23) {
              puVar6 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_02f430b0;
            }
            uVar8 = uVar8 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_01a472ec();
LAB_02f430b0:
        uVar8 = (*(code *)*puVar6)();
        puVar3 = PTR_DAT_03cfffe8;
        puVar2 = PTR_DAT_03cbed08;
        if ((uVar8 & 1) == 0) {
          plVar9 = (long *)thunk_FUN_01a89d6c();
          if (plVar9 == (long *)0x0) goto ToolBuddy_ThirdParty_VectorGraphics_Shape__get_Contours;
          lVar7 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 == 0) goto ToolBuddy_ThirdParty_VectorGraphics_PathProperties__set_Head;
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto ToolBuddy_ThirdParty_VectorGraphics_PathProperties__get_Stroke;
        }
        lVar7 = *unaff_x24;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x23) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_02f43110;
            }
            uVar8 = uVar8 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_01a472ec();
LAB_02f43110:
        unaff_x25 = (long *)(*(code *)*puVar6)();
      } while (unaff_x25 == (long *)0x0);
      lVar7 = *unaff_x25;
      bVar1 = *(byte *)(*(long *)PTR_DAT_03d22a90 + 0x130);
      if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d22a90)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(unaff_x25);
      }
    } while (lVar7 != *(long *)PTR_DAT_03d23df0);
    unaff_x21 = unaff_x25[3];
    in_w8 = *(int *)(*unaff_x19 + 0xe0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar13 = piVar13 + 4;
    if (uVar8 == 0) break;
ToolBuddy_ThirdParty_VectorGraphics_PathProperties__get_Stroke:
    if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_02f43464;
    }
  }
ToolBuddy_ThirdParty_VectorGraphics_PathProperties__set_Head:
  puVar6 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar2,0);
LAB_02f43464:
  (*(code *)*puVar6)(plVar9,puVar6[1]);
ToolBuddy_ThirdParty_VectorGraphics_Shape__get_Contours:
  puVar2 = PTR_DAT_03d23cb8;
  if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar4 = (**(code **)(*in_stack_00000008 + 0x298))
                    (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x2a0));
  lVar7 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d23df8,uVar4);
  (**(code **)(*in_stack_00000008 + 0x368))
            (in_stack_00000008,lVar7,0,*(undefined8 *)(*in_stack_00000008 + 0x370));
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar10 = *(long *)puVar2;
  }
  plVar9 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x38);
  thunk_FUN_01a4b338();
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  (**(code **)(*plVar9 + 0x318))(plVar9);
  if (in_stack_00000038._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000010,0);
  }
  if (lVar7 == 0) {
LAB_02f43558:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar9 = (long *)FUN_01ab6a94(*(undefined8 *)puVar3,*(undefined4 *)(lVar7 + 0x18));
  puVar3 = PTR_DAT_03d23de8;
  puVar2 = PTR_DAT_03d229e0;
  if (0 < *(int *)(lVar7 + 0x18)) {
    uVar14 = 0;
    do {
      plVar11 = (long *)thunk_FUN_01a89d6c();
      if (plVar11 == (long *)0x0) {
LAB_02f42c94:
        plVar11 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfb838,1);
        lVar10 = *(long *)PTR_DAT_03d229f0;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar10);
          lVar10 = *(long *)PTR_DAT_03d229f0;
        }
        if (plVar11 == (long *)0x0) goto LAB_02f43558;
        lVar10 = **(long **)(lVar10 + 0xb8);
        if ((lVar10 != 0) &&
           (lVar5 = thunk_FUN_01a89d6c(lVar10,*(undefined8 *)(*plVar11 + 0x40)), lVar5 == 0))
        goto LAB_02f43560;
        if ((int)plVar11[3] == 0) goto LAB_02f4355c;
        plVar11[4] = lVar10;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar11 + 4,lVar10);
      }
      else {
        lVar10 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_02f42c7c;
            }
            uVar8 = uVar8 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_01a472ec(plVar11,*(long *)puVar2,0);
LAB_02f42c7c:
        lVar10 = (*(code *)*puVar6)(plVar11,puVar6[1]);
        if (lVar10 == 0) goto LAB_02f42c94;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar14) {
LAB_02f4355c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar10 = *(long *)(lVar7 + (long)(int)uVar14 * 8 + 0x20);
      if (lVar10 == 0) goto LAB_02f43558;
      uVar12 = *(undefined8 *)(lVar10 + 0xd8);
      lVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
      FUN_02f2d730(lVar5,lVar10,uVar12);
      if (plVar9 == (long *)0x0) goto LAB_02f43558;
      if ((lVar5 != 0) &&
         (lVar10 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0)) {
LAB_02f43560:
        uVar12 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar12,0);
      }
      if (*(uint *)(plVar9 + 3) <= uVar14) goto LAB_02f4355c;
      plVar9[(long)(int)uVar14 + 4] = lVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (plVar9 + (long)(int)uVar14 + 4,lVar5);
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < *(int *)(lVar7 + 0x18));
  }
  puVar2 = PTR_DAT_03d23cb8;
  if (in_stack_00000018 != (long *)0x0) {
    lVar7 = *(long *)PTR_DAT_03d23cb8;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *(long *)puVar2;
    }
    in_stack_00000028 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x68);
    in_stack_00000020 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x60);
    uVar12 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbed58,&stack0x00000020);
    lVar7 = *in_stack_00000018;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03cca1a0) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_02f42fbc;
        }
        uVar8 = uVar8 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01a472ec(in_stack_00000018,*(long *)PTR_DAT_03cca1a0,1);
LAB_02f42fbc:
    (*(code *)*puVar6)(in_stack_00000018,uVar12,plVar9,puVar6[1]);
  }
  return plVar9;
}


