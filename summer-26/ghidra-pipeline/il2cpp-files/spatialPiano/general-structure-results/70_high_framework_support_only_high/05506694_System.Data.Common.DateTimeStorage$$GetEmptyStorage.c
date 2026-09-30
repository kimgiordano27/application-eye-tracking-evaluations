/*
FUNCTION_NAME: System.Data.Common.DateTimeStorage$$GetEmptyStorage
ENTRY_POINT: 05506694
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_18;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05506b68) */
/* WARNING: Removing unreachable block (ram,0x05506d10) */
/* WARNING: Removing unreachable block (ram,0x05506c4c) */
/* WARNING: Removing unreachable block (ram,0x05506d24) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Data_Common_DateTimeStorage__GetEmptyStorage(undefined8 param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  ulong extraout_x1;
  ulong extraout_x1_00;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  if ((1 << (ulong)(unaff_w21 & 0x1f) & 0x1de0U) != 0) {
    FUN_0345aea0();
    return;
  }
  if (unaff_w21 == 9) {
    FUN_0345a8cc();
    return;
  }
  if (unaff_w21 == 0x12) {
    lVar7 = FUN_054bcee4(0);
    auVar18 = FUN_05016eec(lVar7,0,0);
    if ((auVar18._0_8_ & 1) != 0) {
      if (lVar7 == 0) goto LAB_05506d18;
      uVar8 = FUN_050162b4(lVar7,0);
      if ((uVar8 & 1) == 0) {
        lVar7 = 0;
      }
    }
    auVar18 = Newtonsoft_Json_Converters_XDeclarationWrapper__get_NodeType(unaff_x20[5],lVar7,0);
    param_2 = auVar18._8_8_;
    if ((auVar18._0_8_ & 1) != 0) {
      FUN_05506da0();
      return;
    }
  }
  puVar4 = PTR_DAT_067c9c68;
  plVar9 = (long *)unaff_x20[2];
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_2;
  auVar18 = auVar19 << 0x40;
  if (plVar9 != (long *)0x0) {
    lVar7 = *(long *)(unaff_x19 + 0x18);
    uVar10 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)puVar4);
    }
    auVar18 = FUN_054d2524(uVar10,0);
    uVar10 = auVar18._0_8_;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      auVar18 = FUN_054f6fe4(*(long *)(unaff_x19 + 0x10));
      if (lVar7 != 0) {
        auVar19 = FUN_05512e44(lVar7,uVar10,auVar18._0_8_ & 0xffffffff,0);
        uVar8 = auVar19._0_8_;
        FUN_05500c08();
        puVar3 = OVRPlugin_OVRP_1_121_0_TypeInfo;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = extraout_x1;
        auVar18 = auVar1 << 0x40;
        if (*(long *)(unaff_x19 + 0x10) != 0) {
          FUN_054f85b0(*(long *)(unaff_x19 + 0x10),uVar8 & 0xffffffff);
          uVar10 = (**(code **)(*unaff_x20 + 0x188))();
          auVar18 = FUN_054ce908(uVar10,*(undefined8 *)puVar3,0);
          if (unaff_x20[3] != 0) {
            plVar9 = (long *)FUN_040bcacc(unaff_x20[3],
                                          *(undefined8 *)OVRPlugin_OVRP_1_118_0_TypeInfo);
            puVar6 = PTR_DAT_067ccec0;
            puVar5 = PTR_DAT_067ca818;
            puVar3 = PTR_DAT_067c91b8;
joined_r0x05506880:
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f089c8();
            }
            lVar14 = *plVar9;
            lVar7 = *(long *)puVar3;
            uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar16 != 0) {
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == lVar7) {
                  puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                  goto LAB_055068ec;
                }
                uVar16 = uVar16 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 != 0);
            }
            puVar11 = (undefined8 *)FUN_02f421d0(plVar9,lVar7,0);
LAB_055068ec:
            uVar16 = (*(code *)*puVar11)(plVar9,puVar11[1]);
            if ((uVar16 & 1) != 0) {
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              lVar7 = *plVar9;
              uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)OVRPlugin_OVRP_1_115_0_TypeInfo) {
                    puVar11 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_05506958;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              puVar11 = (undefined8 *)
                        FUN_02f421d0(plVar9,*(long *)OVRPlugin_OVRP_1_115_0_TypeInfo,0);
LAB_05506958:
              lVar7 = (*(code *)*puVar11)(plVar9,puVar11[1]);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              plVar12 = (long *)FUN_040bcacc(*(long *)(lVar7 + 0x10),*(undefined8 *)PTR_DAT_067ca820
                                            );
              do {
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                lVar15 = *plVar12;
                lVar14 = *(long *)puVar3;
                uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar16 != 0) {
                  piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == lVar14) {
                      puVar11 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                      goto LAB_055069e4;
                    }
                    uVar16 = uVar16 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar16 != 0);
                }
                puVar11 = (undefined8 *)FUN_02f421d0(plVar12,lVar14,0);
LAB_055069e4:
                uVar16 = (*(code *)*puVar11)(plVar12,puVar11[1]);
                if ((uVar16 & 1) == 0) goto LAB_05506ae8;
                if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                lVar14 = *plVar12;
                uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
                if (uVar16 != 0) {
                  piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
                      puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
                      goto LAB_05506a48;
                    }
                    uVar16 = uVar16 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar16 != 0);
                }
                puVar11 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar5,0);
LAB_05506a48:
                uVar10 = (*(code *)*puVar11)(plVar12,puVar11[1]);
                lVar14 = unaff_x20[5];
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                uVar10 = FUN_054c5a1c(auVar19._8_8_,uVar10,0,lVar14,0);
                uVar13 = FUN_054cbc9c(auVar18._0_8_,*(undefined8 *)(lVar7 + 0x18),0);
                lVar14 = *(long *)puVar6;
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                  lVar14 = *(long *)puVar6;
                }
                FUN_054c07d0(uVar10,uVar13,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0xd0),0);
                FUN_05505f68();
              } while( true );
            }
            if (plVar9 == (long *)0x0) goto LAB_05506c3c;
            lVar7 = *plVar9;
            uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar16 == 0) goto LAB_05506c14;
            piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_05506bfc;
          }
        }
      }
    }
  }
  goto LAB_05506d18;
LAB_05506ae8:
  if (plVar12 != (long *)0x0) {
    lVar7 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar11 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_05506b50;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)PTR_DAT_067c91b0,0);
LAB_05506b50:
    (*(code *)*puVar11)(plVar12,puVar11[1]);
  }
  goto joined_r0x05506880;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_05506bfc:
    if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar11 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_05506c30;
    }
  }
LAB_05506c14:
  puVar11 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)PTR_DAT_067c91b0,0);
LAB_05506c30:
  (*(code *)*puVar11)(plVar9,puVar11[1]);
LAB_05506c3c:
  lVar7 = unaff_x20[4];
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_054ce7b0(auVar18._0_8_,lVar7,0);
  FUN_055073c8();
  auVar2._8_8_ = 0;
  auVar2._0_8_ = extraout_x1_00;
  auVar18 = auVar2 << 0x40;
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    lVar7 = *(long *)(unaff_x19 + 0x18);
    uVar16 = FUN_054f6fe4();
    auVar18._8_8_ = uVar8;
    auVar18._0_8_ = uVar16;
    if (lVar7 != 0) {
      FUN_0550dba0(lVar7,uVar8,auVar19._8_8_,uVar16 & 0xffffffff,0);
      return;
    }
  }
LAB_05506d18:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8(auVar18._0_8_,auVar18._8_8_);
}


