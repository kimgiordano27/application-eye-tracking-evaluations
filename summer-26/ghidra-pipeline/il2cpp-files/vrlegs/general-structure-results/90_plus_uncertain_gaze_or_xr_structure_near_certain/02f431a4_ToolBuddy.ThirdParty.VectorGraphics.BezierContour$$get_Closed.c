/*
FUNCTION_NAME: ToolBuddy.ThirdParty.VectorGraphics.BezierContour$$get_Closed
ENTRY_POINT: 02f431a4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f43578) */
/* WARNING: Removing unreachable block (ram,0x02f43480) */
/* WARNING: Removing unreachable block (ram,0x02f4354c) */
/* WARNING: Removing unreachable block (ram,0x02f435d4) */
/* WARNING: Removing unreachable block (ram,0x02f43544) */
/* WARNING: Removing unreachable block (ram,0x02f43548) */

long * ToolBuddy_ThirdParty_VectorGraphics_BezierContour__get_Closed(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
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
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  do {
    uVar7 = FUN_02787b20(unaff_x26,0,0);
    if ((uVar7 & 1) != 0) {
      FUN_025b1328(*(undefined8 *)PTR_DAT_03ce5b68,unaff_x25[2],0);
      plVar8 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc07a8,1);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if ((unaff_x26 != 0) &&
         (lVar9 = thunk_FUN_01a89d6c(unaff_x26,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
        uVar12 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar12,0);
      }
      if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar8[4] = unaff_x26;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8 + 4,unaff_x26);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      plVar8 = (long *)FUN_0278a354();
      uVar7 = FUN_0267de10(plVar8,0,0);
      if ((uVar7 & 1) != 0) {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar7 = FUN_0267dcdc(plVar8,0);
        if (((uVar7 & 1) == 0) && (uVar7 = FUN_0267dd3c(plVar8,0), (uVar7 & 1) != 0)) {
          FUN_025b1328(*(undefined8 *)PTR_DAT_03ce5b70,unaff_x25[2],0);
          plVar10 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cc07a8,2);
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if ((unaff_x26 != 0) &&
             (lVar9 = thunk_FUN_01a89d6c(unaff_x26,*(undefined8 *)(*plVar10 + 0x40)), lVar9 == 0)) {
            uVar12 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar12,0);
          }
          if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          plVar10[4] = unaff_x26;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10 + 4,unaff_x26);
          lVar9 = (**(code **)(*plVar8 + 0x448))(plVar8,*(undefined8 *)(*plVar8 + 0x450));
          if ((lVar9 != 0) &&
             (lVar11 = thunk_FUN_01a89d6c(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0)) {
            uVar12 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar12,0);
          }
          if (*(uint *)(plVar10 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c44();
          }
          plVar10[5] = lVar9;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10 + 5,lVar9);
          lVar9 = FUN_0278a354();
          uVar7 = FUN_0267de10(lVar9,0,0);
          if ((uVar7 & 1) != 0) {
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            uVar7 = FUN_0267dcdc(lVar9,0);
            if ((uVar7 & 1) == 0) {
              FUN_0267dd3c(lVar9,0);
            }
          }
          (**(code **)(*plVar8 + 0x448))(plVar8,*(undefined8 *)(*plVar8 + 0x450));
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
        lVar9 = *unaff_x24;
        uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x23) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_02f430b0;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_01a472ec();
LAB_02f430b0:
        uVar7 = (*(code *)*puVar6)();
        puVar3 = PTR_DAT_03cfffe8;
        puVar2 = PTR_DAT_03cbed08;
        if ((uVar7 & 1) == 0) {
          plVar8 = (long *)thunk_FUN_01a89d6c();
          if (plVar8 == (long *)0x0) goto ToolBuddy_ThirdParty_VectorGraphics_Shape__get_Contours;
          lVar9 = *plVar8;
          uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar7 == 0) goto ToolBuddy_ThirdParty_VectorGraphics_PathProperties__set_Head;
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto ToolBuddy_ThirdParty_VectorGraphics_PathProperties__get_Stroke;
        }
        lVar9 = *unaff_x24;
        uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *unaff_x23) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_02f43110;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_01a472ec();
LAB_02f43110:
        unaff_x25 = (long *)(*(code *)*puVar6)();
      } while (unaff_x25 == (long *)0x0);
      lVar9 = *unaff_x25;
      bVar1 = *(byte *)(*(long *)PTR_DAT_03d22a90 + 0x130);
      if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03d22a90)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(unaff_x25);
      }
    } while (lVar9 != *(long *)PTR_DAT_03d23df0);
    lVar9 = unaff_x25[3];
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    unaff_x26 = FUN_02f452c4(lVar9);
    if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar13 = piVar13 + 4;
    if (uVar7 == 0) break;
ToolBuddy_ThirdParty_VectorGraphics_PathProperties__get_Stroke:
    if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
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
  lVar9 = FUN_01ab6a94(*(undefined8 *)PTR_DAT_03d23df8,uVar4);
  (**(code **)(*in_stack_00000008 + 0x368))
            (in_stack_00000008,lVar9,0,*(undefined8 *)(*in_stack_00000008 + 0x370));
  lVar11 = *(long *)puVar2;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar11 = *(long *)puVar2;
  }
  plVar8 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x38);
  thunk_FUN_01a4b338();
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  (**(code **)(*plVar8 + 0x318))(plVar8);
  if (in_stack_00000038._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000010,0);
  }
  if (lVar9 == 0) {
LAB_02f43558:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar8 = (long *)FUN_01ab6a94(*(undefined8 *)puVar3,*(undefined4 *)(lVar9 + 0x18));
  puVar3 = PTR_DAT_03d23de8;
  puVar2 = PTR_DAT_03d229e0;
  if (0 < *(int *)(lVar9 + 0x18)) {
    uVar14 = 0;
    do {
      plVar10 = (long *)thunk_FUN_01a89d6c();
      if (plVar10 == (long *)0x0) {
LAB_02f42c94:
        plVar10 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfb838,1);
        lVar11 = *(long *)PTR_DAT_03d229f0;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar11);
          lVar11 = *(long *)PTR_DAT_03d229f0;
        }
        if (plVar10 == (long *)0x0) goto LAB_02f43558;
        lVar11 = **(long **)(lVar11 + 0xb8);
        if ((lVar11 != 0) &&
           (lVar5 = thunk_FUN_01a89d6c(lVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar5 == 0))
        goto LAB_02f43560;
        if ((int)plVar10[3] == 0) goto LAB_02f4355c;
        plVar10[4] = lVar11;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar10 + 4,lVar11);
      }
      else {
        lVar11 = *plVar10;
        uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_02f42c7c;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_01a472ec(plVar10,*(long *)puVar2,0);
LAB_02f42c7c:
        lVar11 = (*(code *)*puVar6)(plVar10,puVar6[1]);
        if (lVar11 == 0) goto LAB_02f42c94;
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar14) {
LAB_02f4355c:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      lVar11 = *(long *)(lVar9 + (long)(int)uVar14 * 8 + 0x20);
      if (lVar11 == 0) goto LAB_02f43558;
      uVar12 = *(undefined8 *)(lVar11 + 0xd8);
      lVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
      FUN_02f2d730(lVar5,lVar11,uVar12);
      if (plVar8 == (long *)0x0) goto LAB_02f43558;
      if ((lVar5 != 0) &&
         (lVar11 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
LAB_02f43560:
        uVar12 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar12,0);
      }
      if (*(uint *)(plVar8 + 3) <= uVar14) goto LAB_02f4355c;
      plVar8[(long)(int)uVar14 + 4] = lVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                (plVar8 + (long)(int)uVar14 + 4,lVar5);
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < *(int *)(lVar9 + 0x18));
  }
  puVar2 = PTR_DAT_03d23cb8;
  if (in_stack_00000018 != (long *)0x0) {
    lVar9 = *(long *)PTR_DAT_03d23cb8;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar9 = *(long *)puVar2;
    }
    in_stack_00000028 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x68);
    in_stack_00000020 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x60);
    uVar12 = thunk_FUN_01a89a98(*(undefined8 *)PTR_DAT_03cbed58,&stack0x00000020);
    lVar9 = *in_stack_00000018;
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_03cca1a0) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_02f42fbc;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_01a472ec(in_stack_00000018,*(long *)PTR_DAT_03cca1a0,1);
LAB_02f42fbc:
    (*(code *)*puVar6)(in_stack_00000018,uVar12,plVar8,puVar6[1]);
  }
  return plVar8;
}


