/*
FUNCTION_NAME: System.Data.Common.DateTimeStorage$$ConvertObjectToXml
ENTRY_POINT: 055065a4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x05506b68) */
/* WARNING: Removing unreachable block (ram,0x05506d10) */
/* WARNING: Removing unreachable block (ram,0x05506c4c) */
/* WARNING: Removing unreachable block (ram,0x05506d24) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Data_Common_DateTimeStorage__ConvertObjectToXml(undefined8 *param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong extraout_x1;
  ulong extraout_x1_00;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  undefined8 uVar19;
  long *unaff_x24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  if (unaff_x22 == 0) {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      param_1 = *(undefined8 **)(*unaff_x24 + 0xb8);
    }
    uVar19 = *param_1;
    uVar9 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
    FUN_04e0200c(uVar9,uVar19,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo,0);
    *(undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 0x10) = uVar9;
  }
  auVar20 = FUN_03385ff8();
  uVar11 = auVar20._8_8_;
  if ((auVar20._0_8_ & 1) != 0) {
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar11;
    auVar20 = auVar21 << 0x40;
    if (unaff_x20[3] == 0) goto LAB_05506d18;
    auVar20 = FUN_040bc85c(unaff_x20[3],*(undefined8 *)PTR_DAT_067ca828);
    plVar14 = (long *)unaff_x20[2];
    if (auVar20._0_4_ == 0) {
      FUN_05501c04();
      if (unaff_x20[4] == 0) {
        return;
      }
      FUN_05500c08();
      return;
    }
    if (plVar14 == (long *)0x0) goto LAB_05506d18;
    uVar9 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
    if (*(int *)(*(long *)PTR_DAT_067cbc80 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067cbc80);
    }
    uVar8 = FUN_0552b2a0(uVar9,0);
    auVar20 = FUN_05016ec0(unaff_x20[5],0,0);
    uVar11 = auVar20._8_8_;
    if ((auVar20._0_8_ & 1) != 0) {
      if (0x12 < uVar8) goto LAB_05506794;
      if ((1 << (ulong)(uVar8 & 0x1f) & 0x1de0U) != 0) {
        FUN_0345aea0();
        return;
      }
      if (uVar8 == 9) {
        FUN_0345a8cc();
        return;
      }
    }
    if (uVar8 == 0x12) {
      lVar10 = FUN_054bcee4(0);
      auVar20 = FUN_05016eec(lVar10,0,0);
      if ((auVar20._0_8_ & 1) != 0) {
        if (lVar10 == 0) goto LAB_05506d18;
        uVar11 = FUN_050162b4(lVar10,0);
        if ((uVar11 & 1) == 0) {
          lVar10 = 0;
        }
      }
      auVar20 = Newtonsoft_Json_Converters_XDeclarationWrapper__get_NodeType(unaff_x20[5],lVar10,0);
      uVar11 = auVar20._8_8_;
      if ((auVar20._0_8_ & 1) != 0) {
        FUN_05506da0();
        return;
      }
    }
  }
LAB_05506794:
  puVar5 = PTR_DAT_067c9c68;
  plVar14 = (long *)unaff_x20[2];
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar11;
  auVar20 = auVar1 << 0x40;
  if (plVar14 != (long *)0x0) {
    lVar10 = *(long *)(unaff_x19 + 0x18);
    uVar9 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)puVar5);
    }
    auVar20 = FUN_054d2524(uVar9,0);
    uVar9 = auVar20._0_8_;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      auVar20 = FUN_054f6fe4(*(long *)(unaff_x19 + 0x10));
      if (lVar10 != 0) {
        auVar21 = FUN_05512e44(lVar10,uVar9,auVar20._0_8_ & 0xffffffff,0);
        uVar11 = auVar21._0_8_;
        FUN_05500c08();
        puVar4 = OVRPlugin_OVRP_1_121_0_TypeInfo;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = extraout_x1;
        auVar20 = auVar2 << 0x40;
        if (*(long *)(unaff_x19 + 0x10) != 0) {
          FUN_054f85b0(*(long *)(unaff_x19 + 0x10),uVar11 & 0xffffffff);
          uVar9 = (**(code **)(*unaff_x20 + 0x188))();
          auVar20 = FUN_054ce908(uVar9,*(undefined8 *)puVar4,0);
          if (unaff_x20[3] != 0) {
            plVar14 = (long *)FUN_040bcacc(unaff_x20[3],
                                           *(undefined8 *)OVRPlugin_OVRP_1_118_0_TypeInfo);
            puVar7 = PTR_DAT_067ccec0;
            puVar6 = PTR_DAT_067ca818;
            puVar4 = PTR_DAT_067c91b8;
joined_r0x05506880:
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar15 = *plVar14;
            lVar10 = *(long *)puVar4;
            uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
            if (uVar17 != 0) {
              piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar18 + -2) == lVar10) {
                  puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                  goto LAB_055068ec;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            puVar12 = (undefined8 *)FUN_02f421d0(plVar14,lVar10,0);
LAB_055068ec:
            uVar17 = (*(code *)*puVar12)(plVar14,puVar12[1]);
            if ((uVar17 & 1) != 0) {
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar10 = *plVar14;
              uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar17 != 0) {
                piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar18 + -2) == *(long *)OVRPlugin_OVRP_1_115_0_TypeInfo) {
                    puVar12 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
                    goto LAB_05506958;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              puVar12 = (undefined8 *)
                        FUN_02f421d0(plVar14,*(long *)OVRPlugin_OVRP_1_115_0_TypeInfo,0);
LAB_05506958:
              lVar10 = (*(code *)*puVar12)(plVar14,puVar12[1]);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              plVar13 = (long *)FUN_040bcacc(*(long *)(lVar10 + 0x10),
                                             *(undefined8 *)PTR_DAT_067ca820);
              do {
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                lVar16 = *plVar13;
                lVar15 = *(long *)puVar4;
                uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar17 != 0) {
                  piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == lVar15) {
                      puVar12 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_055069e4;
                    }
                    uVar17 = uVar17 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar17 != 0);
                }
                puVar12 = (undefined8 *)FUN_02f421d0(plVar13,lVar15,0);
LAB_055069e4:
                uVar17 = (*(code *)*puVar12)(plVar13,puVar12[1]);
                if ((uVar17 & 1) == 0) goto LAB_05506ae8;
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                lVar15 = *plVar13;
                uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar17 != 0) {
                  piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == *(long *)puVar6) {
                      puVar12 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
                      goto LAB_05506a48;
                    }
                    uVar17 = uVar17 - 1;
                    piVar18 = piVar18 + 4;
                  } while (uVar17 != 0);
                }
                puVar12 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar6,0);
LAB_05506a48:
                uVar9 = (*(code *)*puVar12)(plVar13,puVar12[1]);
                lVar15 = unaff_x20[5];
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                uVar9 = FUN_054c5a1c(auVar21._8_8_,uVar9,0,lVar15,0);
                uVar19 = FUN_054cbc9c(auVar20._0_8_,*(undefined8 *)(lVar10 + 0x18),0);
                lVar15 = *(long *)puVar7;
                if (*(int *)(lVar15 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                  lVar15 = *(long *)puVar7;
                }
                FUN_054c07d0(uVar9,uVar19,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0xd0),0);
                FUN_05505f68();
              } while( true );
            }
            if (plVar14 == (long *)0x0) goto LAB_05506c3c;
            lVar10 = *plVar14;
            uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar17 == 0) goto LAB_05506c14;
            piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            goto LAB_05506bfc;
          }
        }
      }
    }
  }
LAB_05506d18:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8(auVar20._0_8_,auVar20._8_8_);
LAB_05506ae8:
  if (plVar13 != (long *)0x0) {
    lVar10 = *plVar13;
    uVar17 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar12 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_05506b50;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)PTR_DAT_067c91b0,0);
LAB_05506b50:
    (*(code *)*puVar12)(plVar13,puVar12[1]);
  }
  goto joined_r0x05506880;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_05506bfc:
    if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar12 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_05506c30;
    }
  }
LAB_05506c14:
  puVar12 = (undefined8 *)FUN_02f421d0(plVar14,*(long *)PTR_DAT_067c91b0,0);
LAB_05506c30:
  (*(code *)*puVar12)(plVar14,puVar12[1]);
LAB_05506c3c:
  lVar10 = unaff_x20[4];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_054ce7b0(auVar20._0_8_,lVar10,0);
  FUN_055073c8();
  auVar3._8_8_ = 0;
  auVar3._0_8_ = extraout_x1_00;
  auVar20 = auVar3 << 0x40;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    lVar10 = *(long *)(unaff_x19 + 0x18);
    uVar17 = FUN_054f6fe4();
    auVar20._8_8_ = uVar11;
    auVar20._0_8_ = uVar17;
    if (lVar10 != 0) {
      FUN_0550dba0(lVar10,uVar11,auVar21._8_8_,uVar17 & 0xffffffff,0);
      return;
    }
  }
  goto LAB_05506d18;
}


