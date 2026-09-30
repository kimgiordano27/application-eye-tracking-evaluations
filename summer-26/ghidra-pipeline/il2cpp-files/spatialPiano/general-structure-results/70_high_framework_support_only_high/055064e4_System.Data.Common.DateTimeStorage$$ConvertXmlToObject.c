/*
FUNCTION_NAME: System.Data.Common.DateTimeStorage$$ConvertXmlToObject
ENTRY_POINT: 055064e4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_15;weak_xr_or_state_hits_15;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_15
*/


/* WARNING: Removing unreachable block (ram,0x05506b68) */
/* WARNING: Removing unreachable block (ram,0x05506d10) */
/* WARNING: Removing unreachable block (ram,0x05506c4c) */
/* WARNING: Removing unreachable block (ram,0x05506d24) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Data_Common_DateTimeStorage__ConvertXmlToObject(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong extraout_x1;
  ulong extraout_x1_00;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  FUN_02f08768(OVRPlugin_OVRP_1_118_0_TypeInfo);
  FUN_02f08768(PTR_DAT_067ca820);
  FUN_02f08768(PTR_DAT_067ca828);
  FUN_02f08768(OVRPlugin_OVRP_1_119_0_TypeInfo);
  FUN_02f08768(PTR_DAT_067cbc80);
  FUN_02f08768(OVRPlugin_OVRP_1_11_0_TypeInfo);
  FUN_02f08768(OVRPlugin_OVRP_1_120_0_TypeInfo);
  FUN_02f08768(PTR_DAT_067ccec0);
  auVar20 = FUN_02f08768(OVRPlugin_OVRP_1_121_0_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x569) = 1;
  puVar5 = OVRPlugin_OVRP_1_120_0_TypeInfo;
  if (unaff_x20 == (long *)0x0) goto LAB_05506d18;
  if (*unaff_x20 != *(long *)OVRPlugin_OVRP_1_119_0_TypeInfo) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48();
  }
  lVar17 = unaff_x20[3];
  lVar9 = *(long *)OVRPlugin_OVRP_1_120_0_TypeInfo;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar9 = *(long *)puVar5;
  }
  puVar4 = OVRPlugin_OVRP_1_113_0_TypeInfo;
  puVar13 = *(undefined8 **)(lVar9 + 0xb8);
  lVar18 = puVar13[2];
  if (lVar18 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar13 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
    }
    uVar19 = *puVar13;
    lVar18 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_114_0_TypeInfo);
    FUN_04e0200c(lVar18,uVar19,*(undefined8 *)OVRPlugin_OVRP_1_11_0_TypeInfo,0);
    *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10) = lVar18;
  }
  auVar20 = FUN_03385ff8(lVar17,lVar18,*(undefined8 *)puVar4);
  uVar10 = auVar20._8_8_;
  if ((auVar20._0_8_ & 1) != 0) {
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar10;
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
    uVar19 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
    if (*(int *)(*(long *)PTR_DAT_067cbc80 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067cbc80);
    }
    uVar8 = FUN_0552b2a0(uVar19,0);
    auVar20 = FUN_05016ec0(unaff_x20[5],0,0);
    uVar10 = auVar20._8_8_;
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
      lVar9 = FUN_054bcee4(0);
      auVar20 = FUN_05016eec(lVar9,0,0);
      if ((auVar20._0_8_ & 1) != 0) {
        if (lVar9 == 0) goto LAB_05506d18;
        uVar10 = FUN_050162b4(lVar9,0);
        if ((uVar10 & 1) == 0) {
          lVar9 = 0;
        }
      }
      auVar20 = Newtonsoft_Json_Converters_XDeclarationWrapper__get_NodeType(unaff_x20[5],lVar9,0);
      uVar10 = auVar20._8_8_;
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
  auVar1._0_8_ = uVar10;
  auVar20 = auVar1 << 0x40;
  if (plVar14 != (long *)0x0) {
    lVar9 = *(long *)(unaff_x19 + 0x18);
    uVar19 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)puVar5);
    }
    auVar20 = FUN_054d2524(uVar19,0);
    uVar19 = auVar20._0_8_;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      auVar20 = FUN_054f6fe4(*(long *)(unaff_x19 + 0x10));
      if (lVar9 != 0) {
        auVar21 = FUN_05512e44(lVar9,uVar19,auVar20._0_8_ & 0xffffffff,0);
        uVar10 = auVar21._0_8_;
        FUN_05500c08();
        puVar4 = OVRPlugin_OVRP_1_121_0_TypeInfo;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = extraout_x1;
        auVar20 = auVar2 << 0x40;
        if (*(long *)(unaff_x19 + 0x10) != 0) {
          FUN_054f85b0(*(long *)(unaff_x19 + 0x10),uVar10 & 0xffffffff);
          uVar19 = (**(code **)(*unaff_x20 + 0x188))();
          auVar20 = FUN_054ce908(uVar19,*(undefined8 *)puVar4,0);
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
            lVar17 = *plVar14;
            lVar9 = *(long *)puVar4;
            uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar9) {
                  puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_055068ec;
                }
                uVar15 = uVar15 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar15 != 0);
            }
            puVar13 = (undefined8 *)FUN_02f421d0(plVar14,lVar9,0);
LAB_055068ec:
            uVar15 = (*(code *)*puVar13)(plVar14,puVar13[1]);
            if ((uVar15 & 1) != 0) {
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar9 = *plVar14;
              uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)OVRPlugin_OVRP_1_115_0_TypeInfo) {
                    puVar13 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_05506958;
                  }
                  uVar15 = uVar15 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar15 != 0);
              }
              puVar13 = (undefined8 *)
                        FUN_02f421d0(plVar14,*(long *)OVRPlugin_OVRP_1_115_0_TypeInfo,0);
LAB_05506958:
              lVar9 = (*(code *)*puVar13)(plVar14,puVar13[1]);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              plVar11 = (long *)FUN_040bcacc(*(long *)(lVar9 + 0x10),*(undefined8 *)PTR_DAT_067ca820
                                            );
              do {
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                lVar18 = *plVar11;
                lVar17 = *(long *)puVar4;
                uVar15 = (ulong)*(ushort *)(lVar18 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar17) {
                      puVar13 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_055069e4;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar13 = (undefined8 *)FUN_02f421d0(plVar11,lVar17,0);
LAB_055069e4:
                uVar15 = (*(code *)*puVar13)(plVar11,puVar13[1]);
                if ((uVar15 & 1) == 0) goto LAB_05506ae8;
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                lVar17 = *plVar11;
                uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
                      puVar13 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
                      goto LAB_05506a48;
                    }
                    uVar15 = uVar15 - 1;
                    piVar16 = piVar16 + 4;
                  } while (uVar15 != 0);
                }
                puVar13 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar6,0);
LAB_05506a48:
                uVar19 = (*(code *)*puVar13)(plVar11,puVar13[1]);
                lVar17 = unaff_x20[5];
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                uVar19 = FUN_054c5a1c(auVar21._8_8_,uVar19,0,lVar17,0);
                uVar12 = FUN_054cbc9c(auVar20._0_8_,*(undefined8 *)(lVar9 + 0x18),0);
                lVar17 = *(long *)puVar7;
                if (*(int *)(lVar17 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                  lVar17 = *(long *)puVar7;
                }
                FUN_054c07d0(uVar19,uVar12,*(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0xd0),0);
                FUN_05505f68();
              } while( true );
            }
            if (plVar14 == (long *)0x0) goto LAB_05506c3c;
            lVar9 = *plVar14;
            uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar15 == 0) goto LAB_05506c14;
            piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
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
  if (plVar11 != (long *)0x0) {
    lVar9 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar13 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_05506b50;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar13 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)PTR_DAT_067c91b0,0);
LAB_05506b50:
    (*(code *)*puVar13)(plVar11,puVar13[1]);
  }
  goto joined_r0x05506880;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_05506bfc:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar13 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_05506c30;
    }
  }
LAB_05506c14:
  puVar13 = (undefined8 *)FUN_02f421d0(plVar14,*(long *)PTR_DAT_067c91b0,0);
LAB_05506c30:
  (*(code *)*puVar13)(plVar14,puVar13[1]);
LAB_05506c3c:
  lVar9 = unaff_x20[4];
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_054ce7b0(auVar20._0_8_,lVar9,0);
  FUN_055073c8();
  auVar3._8_8_ = 0;
  auVar3._0_8_ = extraout_x1_00;
  auVar20 = auVar3 << 0x40;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    lVar9 = *(long *)(unaff_x19 + 0x18);
    uVar15 = FUN_054f6fe4();
    auVar20._8_8_ = uVar10;
    auVar20._0_8_ = uVar15;
    if (lVar9 != 0) {
      FUN_0550dba0(lVar9,uVar10,auVar21._8_8_,uVar15 & 0xffffffff,0);
      return;
    }
  }
  goto LAB_05506d18;
}


