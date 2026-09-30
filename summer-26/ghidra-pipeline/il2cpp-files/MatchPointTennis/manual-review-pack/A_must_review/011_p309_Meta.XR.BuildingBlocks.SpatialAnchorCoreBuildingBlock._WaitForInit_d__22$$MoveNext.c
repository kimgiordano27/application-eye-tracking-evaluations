/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock.<WaitForInit>d__22$$MoveNext
ENTRY_POINT: 076caafc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 190
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076cc650) */
/* WARNING: Removing unreachable block (ram,0x076cbbd0) */
/* WARNING: Removing unreachable block (ram,0x076cb190) */
/* WARNING: Removing unreachable block (ram,0x076cb5a0) */
/* WARNING: Removing unreachable block (ram,0x076cb7b0) */
/* WARNING: Removing unreachable block (ram,0x076cbfe8) */
/* WARNING: Removing unreachable block (ram,0x076caf38) */
/* WARNING: Removing unreachable block (ram,0x076cc864) */
/* WARNING: Removing unreachable block (ram,0x076cbddc) */
/* WARNING: Removing unreachable block (ram,0x076cc1fc) */
/* WARNING: Removing unreachable block (ram,0x076cb9c0) */
/* WARNING: Removing unreachable block (ram,0x076cc43c) */
/* WARNING: Removing unreachable block (ram,0x076cc8cc) */
/* WARNING: Removing unreachable block (ram,0x076cc91c) */

void Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock_<WaitForInit>d__22__MoveNext(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  
  FUN_04447ba8(PTR_DAT_09f2e218);
  FUN_04447ba8(PTR_DAT_09f2e220);
  FUN_04447ba8(PTR_DAT_09f2e228);
  FUN_04447ba8(PTR_DAT_09f2e230);
  FUN_04447ba8(PTR_DAT_09f2d650);
  FUN_04447ba8(PTR_DAT_09f2e238);
  FUN_04447ba8(PTR_DAT_09f2e240);
  FUN_04447ba8(PTR_DAT_09f2e248);
  FUN_04447ba8(PTR_DAT_09f2e250);
  FUN_04447ba8(PTR_DAT_09f2e258);
  FUN_04447ba8(PTR_DAT_09f2d8a0);
  FUN_04447ba8(PTR_DAT_09f2e260);
  FUN_04447ba8(PTR_DAT_09f2e268);
  FUN_04447ba8(PTR_DAT_09f2d668);
  FUN_04447ba8(PTR_DAT_09f2e270);
  FUN_04447ba8(PTR_DAT_09f2e278);
  FUN_04447ba8(PTR_DAT_09f2e280);
  FUN_04447ba8(PTR_DAT_09f1f018);
  FUN_04447ba8(PTR_DAT_09f2ddc0);
  FUN_04447ba8(PTR_DAT_09f2e1e0);
  FUN_04447ba8(PTR_DAT_09f2e288);
  FUN_04447ba8(PTR_DAT_09f2e290);
  FUN_04447ba8(PTR_DAT_09f2e298);
  FUN_04447ba8(PTR_DAT_09f26060);
  FUN_04447ba8(PTR_DAT_09f2e2a0);
  FUN_04447ba8(PTR_DAT_09f25da0);
  FUN_04447ba8(PTR_DAT_09f2e2a8);
  FUN_04447ba8(PTR_DAT_09f2dfc8);
  FUN_04447ba8(PTR_DAT_09f2e2b0);
  FUN_04447ba8(PTR_DAT_09f2e2b8);
  FUN_04447ba8(PTR_DAT_09f2e2c0);
  FUN_04447ba8(PTR_DAT_09f2e2c8);
  FUN_04447ba8(PTR_DAT_09f2e2d0);
  FUN_04447ba8(PTR_DAT_09f2e2d8);
  FUN_04447ba8(PTR_DAT_09f2e2e0);
  FUN_04447ba8(PTR_DAT_09f2e2e8);
  FUN_04447ba8(PTR_DAT_09f2e2f0);
  FUN_04447ba8(PTR_DAT_09f2e2f8);
  *(undefined1 *)(unaff_x20 + 0xdd1) = 1;
  lVar3 = thunk_FUN_0448520c(*unaff_x22);
  FUN_076c70a8();
  lVar4 = (**(code **)(*unaff_x19 + 0x198))();
  if (lVar4 != 0) {
    if (lVar3 == 0) goto LAB_076cc90c;
    FUN_076c5d54(lVar3,*(undefined8 *)PTR_DAT_09f26060,0);
    lVar4 = (**(code **)(*unaff_x19 + 0x198))();
    if (lVar4 == 0) goto LAB_076cc90c;
    FUN_076c6330(lVar4,lVar3,0);
  }
  lVar4 = (**(code **)(*unaff_x19 + 0x208))();
  if (lVar4 != 0) {
    if (lVar3 != 0) {
      FUN_076c7144(lVar3,*(undefined8 *)PTR_DAT_09f25da0,0);
      plVar5 = (long *)(**(code **)(*unaff_x19 + 0x208))();
      if (plVar5 != (long *)0x0) {
        lVar4 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f2d630) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_076cadd8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2d630,0);
LAB_076cadd8:
        plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        puVar2 = PTR_DAT_09f2d650;
        puVar1 = PTR_DAT_09f1f018;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        do {
          lVar4 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_076cae48;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cae48:
          uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar7 & 1) == 0) {
            if (plVar5 == (long *)0x0) goto LAB_076caf2c;
            lVar4 = *plVar5;
            uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar7 == 0) goto Meta_XR_BuildingBlocks_Telemetry__AddBlockVariantInfo;
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            goto LAB_076caeec;
          }
          lVar4 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_076caea4;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076caea4:
          lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_076c9f0c(lVar4,lVar3);
        } while( true );
      }
    }
    goto LAB_076cc90c;
  }
  goto LAB_076caf48;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_076cb144:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_076cb178;
    }
  }
LAB_076cb15c:
  puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cb178:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_076cb184:
  FUN_076c71ec(lVar3,0);
  goto LAB_076cb1a0;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_076cb350:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_076cb384;
    }
  }
LAB_076cb368:
  puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cb384:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_076cb390:
  FUN_076c71ec(lVar3,0);
  goto LAB_076cb3a0;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_076cb554:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_076cb588;
    }
  }
LAB_076cb56c:
  puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cb588:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_076cb594:
  FUN_076c71ec(lVar3,0);
  goto LAB_076cb5b0;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_076cb764:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_076cb798;
    }
  }
LAB_076cb77c:
  puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cb798:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_076cb7a4:
  FUN_076c71ec(lVar3,0);
  goto LAB_076cb7c0;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_076cb974:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_076cb9a8;
    }
  }
LAB_076cb98c:
  puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cb9a8:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_076cb9b4:
  FUN_076c71ec(lVar3,0);
  goto LAB_076cb9d0;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_076cbd90:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_076cbdc4;
    }
  }
LAB_076cbda8:
  puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cbdc4:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_076cbdd0:
  FUN_076c71ec(lVar3,0);
  goto LAB_076cbdec;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_076cbf9c:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_076cbfd0;
    }
  }
LAB_076cbfb4:
  puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cbfd0:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_076cbfdc:
  FUN_076c71ec(lVar3,0);
  goto LAB_076cbff8;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_076cc1b0:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_076cc1e4;
    }
  }
LAB_076cc1c8:
  puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cc1e4:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_076cc1f0:
  FUN_076c71ec(lVar3,0);
  goto LAB_076cc20c;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_076cc3f0:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_076cc424;
    }
  }
LAB_076cc408:
  puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cc424:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_076cc430:
  FUN_076c71ec(lVar3,0);
  goto LAB_076cc44c;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_076cc604:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_076cc638;
    }
  }
LAB_076cc61c:
  puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cc638:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_076cc644:
  FUN_076c71ec(lVar3,0);
  goto LAB_076cc660;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
Meta_XR_EnvironmentDepth_EnvironmentDepthManager_Mask__Dispose:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_076cc84c;
    }
  }
LAB_076cc830:
  puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cc84c:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_076cc858:
  FUN_076c71ec(lVar3,0);
  goto LAB_076cc874;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_076caeec:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f008) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_076caf20;
    }
  }
Meta_XR_BuildingBlocks_Telemetry__AddBlockVariantInfo:
  puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076caf20:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_076caf2c:
  FUN_076c71ec(lVar3,0);
LAB_076caf48:
  if (unaff_x19[3] != 0) {
    if (lVar3 == 0) goto LAB_076cc90c;
    FUN_076c7224(lVar3,*(undefined8 *)PTR_DAT_09f2e2b0,unaff_x19[3],0);
  }
  if (unaff_x19[2] != 0) {
    if (lVar3 == 0) goto LAB_076cc90c;
    FUN_076c7224(lVar3,*(undefined8 *)PTR_DAT_09f2e290,unaff_x19[2],0);
  }
  lVar4 = (**(code **)(*unaff_x19 + 0x188))();
  if (lVar4 == 0) {
LAB_076cb1a0:
    lVar4 = (**(code **)(*unaff_x19 + 0x1a8))();
    if (lVar4 == 0) {
LAB_076cb3a0:
      lVar4 = (**(code **)(*unaff_x19 + 0x1b8))();
      if (lVar4 == 0) {
LAB_076cb5b0:
        lVar4 = (**(code **)(*unaff_x19 + 0x178))();
        if (lVar4 == 0) {
LAB_076cb7c0:
          lVar4 = (**(code **)(*unaff_x19 + 0x1c8))();
          if (lVar4 == 0) {
LAB_076cb9d0:
            lVar4 = (**(code **)(*unaff_x19 + 0x1d8))();
            if (lVar4 != 0) {
              if (lVar3 == 0) goto LAB_076cc90c;
              FUN_076c7144(lVar3,*(undefined8 *)PTR_DAT_09f2e2c0,0);
              plVar5 = (long *)(**(code **)(*unaff_x19 + 0x1d8))();
              if (plVar5 == (long *)0x0) goto LAB_076cc90c;
              lVar4 = *plVar5;
              uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f2e230) {
                    puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_076cba6c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2e230,0);
LAB_076cba6c:
              plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
              puVar2 = PTR_DAT_09f2e268;
              puVar1 = PTR_DAT_09f1f018;
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
LAB_076cba90:
              lVar4 = *plVar5;
              uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                    puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_076cbadc;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cbadc:
              uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
              if ((uVar7 & 1) != 0) {
                lVar4 = *plVar5;
                uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                      goto LAB_076cbb38;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cbb38:
                lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                if (lVar4 != 0) {
                  FUN_076c6f7c(lVar4,lVar3,0);
                }
                goto LAB_076cba90;
              }
              if (plVar5 != (long *)0x0) {
                lVar4 = *plVar5;
                uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f1f008) {
                      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                      goto LAB_076cbbb8;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f1f008,0);
LAB_076cbbb8:
                (*(code *)*puVar6)(plVar5,puVar6[1]);
              }
              FUN_076c71ec(lVar3,0);
            }
            lVar4 = (**(code **)(*unaff_x19 + 0x1e8))();
            if (lVar4 == 0) {
LAB_076cbdec:
              lVar4 = (**(code **)(*unaff_x19 + 0x1f8))();
              if (lVar4 == 0) {
LAB_076cbff8:
                lVar4 = (**(code **)(*unaff_x19 + 0x218))();
                if (lVar4 == 0) {
LAB_076cc20c:
                  if (-1 < (int)unaff_x19[4]) {
                    if (lVar3 == 0) goto LAB_076cc90c;
                    FUN_04df3e04(lVar3,*(undefined8 *)PTR_DAT_09f2e2a8,(int)unaff_x19[4],
                                 *(undefined8 *)PTR_DAT_09f2ddc0);
                  }
                  lVar4 = (**(code **)(*unaff_x19 + 0x228))();
                  if (lVar4 == 0) {
LAB_076cc44c:
                    lVar4 = (**(code **)(*unaff_x19 + 0x238))();
                    if (lVar4 == 0) {
LAB_076cc660:
                      lVar4 = (**(code **)(*unaff_x19 + 0x248))();
                      if (lVar4 == 0) {
LAB_076cc874:
                        lVar4 = (**(code **)(*unaff_x19 + 600))();
                        if (lVar4 == 0) {
                          if (lVar3 != 0) {
LAB_076cc8e0:
                            FUN_076c5f44(lVar3,0);
                            return;
                          }
                        }
                        else if (lVar3 != 0) {
                          FUN_076c5d54(lVar3,*(undefined8 *)PTR_DAT_09f2dfc8,0);
                          lVar4 = (**(code **)(*unaff_x19 + 600))();
                          if (lVar4 != 0) {
                            FUN_076cd658(lVar4,lVar3);
                            goto LAB_076cc8e0;
                          }
                        }
                      }
                      else if (lVar3 != 0) {
                        FUN_076c7144(lVar3,*(undefined8 *)PTR_DAT_09f2e2d8,0);
                        plVar5 = (long *)(**(code **)(*unaff_x19 + 0x248))();
                        if (plVar5 != (long *)0x0) {
                          lVar4 = *plVar5;
                          uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                          if (uVar7 != 0) {
                            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f2d898) {
                                puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                                goto LAB_076cc704;
                              }
                              uVar7 = uVar7 - 1;
                              piVar8 = piVar8 + 4;
                            } while (uVar7 != 0);
                          }
                          puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2d898,0);
LAB_076cc704:
                          plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
                          puVar2 = PTR_DAT_09f2d8a0;
                          puVar1 = PTR_DAT_09f1f018;
                          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_04447e44();
                          }
                          do {
                            lVar4 = *plVar5;
                            uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                            if (uVar7 != 0) {
                              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                                  puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                                  goto LAB_076cc774;
                                }
                                uVar7 = uVar7 - 1;
                                piVar8 = piVar8 + 4;
                              } while (uVar7 != 0);
                            }
                            puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cc774:
                            uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                            if ((uVar7 & 1) == 0) {
                              if (plVar5 == (long *)0x0) goto LAB_076cc858;
                              lVar4 = *plVar5;
                              uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                              if (uVar7 == 0) goto LAB_076cc830;
                              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                              goto Meta_XR_EnvironmentDepth_EnvironmentDepthManager_Mask__Dispose;
                            }
                            lVar4 = *plVar5;
                            uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                            if (uVar7 != 0) {
                              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                                  puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                                  goto LAB_076cc7d0;
                                }
                                uVar7 = uVar7 - 1;
                                piVar8 = piVar8 + 4;
                              } while (uVar7 != 0);
                            }
                            puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cc7d0:
                            lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_04447e44();
                            }
                            FUN_076cd534(lVar4,lVar3);
                          } while( true );
                        }
                      }
                    }
                    else if (lVar3 != 0) {
                      FUN_076c7144(lVar3,*(undefined8 *)PTR_DAT_09f2e288,0);
                      plVar5 = (long *)(**(code **)(*unaff_x19 + 0x238))();
                      if (plVar5 != (long *)0x0) {
                        lVar4 = *plVar5;
                        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                        if (uVar7 != 0) {
                          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f2d640) {
                              puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                              goto LAB_076cc4f0;
                            }
                            uVar7 = uVar7 - 1;
                            piVar8 = piVar8 + 4;
                          } while (uVar7 != 0);
                        }
                        puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2d640,0);
LAB_076cc4f0:
                        plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
                        puVar2 = PTR_DAT_09f2d668;
                        puVar1 = PTR_DAT_09f1f018;
                        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_04447e44();
                        }
                        do {
                          lVar4 = *plVar5;
                          uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                          if (uVar7 != 0) {
                            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                                puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                                goto LAB_076cc560;
                              }
                              uVar7 = uVar7 - 1;
                              piVar8 = piVar8 + 4;
                            } while (uVar7 != 0);
                          }
                          puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cc560:
                          uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                          if ((uVar7 & 1) == 0) {
                            if (plVar5 == (long *)0x0) goto LAB_076cc644;
                            lVar4 = *plVar5;
                            uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                            if (uVar7 == 0) goto LAB_076cc61c;
                            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                            goto LAB_076cc604;
                          }
                          lVar4 = *plVar5;
                          uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                          if (uVar7 != 0) {
                            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                                puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                                goto LAB_076cc5bc;
                              }
                              uVar7 = uVar7 - 1;
                              piVar8 = piVar8 + 4;
                            } while (uVar7 != 0);
                          }
                          puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cc5bc:
                          lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_04447e44();
                          }
                          FUN_076cd48c(lVar4,lVar3);
                        } while( true );
                      }
                    }
                  }
                  else if (lVar3 != 0) {
                    FUN_076c7144(lVar3,*(undefined8 *)PTR_DAT_09f2e298,0);
                    plVar5 = (long *)(**(code **)(*unaff_x19 + 0x228))();
                    if (plVar5 != (long *)0x0) {
                      lVar4 = *plVar5;
                      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                      if (uVar7 != 0) {
                        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f2e200) {
                            puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                            goto LAB_076cc2dc;
                          }
                          uVar7 = uVar7 - 1;
                          piVar8 = piVar8 + 4;
                        } while (uVar7 != 0);
                      }
                      puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2e200,0);
LAB_076cc2dc:
                      plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
                      puVar2 = PTR_DAT_09f2e260;
                      puVar1 = PTR_DAT_09f1f018;
                      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_04447e44();
                      }
                      do {
                        lVar4 = *plVar5;
                        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                        if (uVar7 != 0) {
                          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                              puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                              goto LAB_076cc34c;
                            }
                            uVar7 = uVar7 - 1;
                            piVar8 = piVar8 + 4;
                          } while (uVar7 != 0);
                        }
                        puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cc34c:
                        uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                        if ((uVar7 & 1) == 0) {
                          if (plVar5 == (long *)0x0) goto LAB_076cc430;
                          lVar4 = *plVar5;
                          uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                          if (uVar7 == 0) goto LAB_076cc408;
                          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                          goto LAB_076cc3f0;
                        }
                        lVar4 = *plVar5;
                        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                        if (uVar7 != 0) {
                          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                              puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                              goto LAB_076cc3a8;
                            }
                            uVar7 = uVar7 - 1;
                            piVar8 = piVar8 + 4;
                          } while (uVar7 != 0);
                        }
                        puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cc3a8:
                        lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_04447e44();
                        }
                        FUN_076cd3f0(lVar4,lVar3);
                      } while( true );
                    }
                  }
                }
                else if (lVar3 != 0) {
                  FUN_076c7144(lVar3,*(undefined8 *)PTR_DAT_09f2e2e0,0);
                  plVar5 = (long *)(**(code **)(*unaff_x19 + 0x218))();
                  if (plVar5 != (long *)0x0) {
                    lVar4 = *plVar5;
                    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    if (uVar7 != 0) {
                      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f2e1f8) {
                          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                          goto LAB_076cc09c;
                        }
                        uVar7 = uVar7 - 1;
                        piVar8 = piVar8 + 4;
                      } while (uVar7 != 0);
                    }
                    puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2e1f8,0);
LAB_076cc09c:
                    plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
                    puVar2 = PTR_DAT_09f2e240;
                    puVar1 = PTR_DAT_09f1f018;
                    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04447e44();
                    }
                    do {
                      lVar4 = *plVar5;
                      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                      if (uVar7 != 0) {
                        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                            puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                            goto LAB_076cc10c;
                          }
                          uVar7 = uVar7 - 1;
                          piVar8 = piVar8 + 4;
                        } while (uVar7 != 0);
                      }
                      puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cc10c:
                      uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                      if ((uVar7 & 1) == 0) {
                        if (plVar5 == (long *)0x0) goto LAB_076cc1f0;
                        lVar4 = *plVar5;
                        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                        if (uVar7 == 0) goto LAB_076cc1c8;
                        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                        goto LAB_076cc1b0;
                      }
                      lVar4 = *plVar5;
                      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                      if (uVar7 != 0) {
                        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                            puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                            goto LAB_076cc168;
                          }
                          uVar7 = uVar7 - 1;
                          piVar8 = piVar8 + 4;
                        } while (uVar7 != 0);
                      }
                      puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cc168:
                      lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_04447e44();
                      }
                      FUN_076cd28c(lVar4,lVar3);
                    } while( true );
                  }
                }
              }
              else if (lVar3 != 0) {
                FUN_076c7144(lVar3,*(undefined8 *)PTR_DAT_09f2e2f0,0);
                plVar5 = (long *)(**(code **)(*unaff_x19 + 0x1f8))();
                if (plVar5 != (long *)0x0) {
                  lVar4 = *plVar5;
                  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                  if (uVar7 != 0) {
                    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f2e1f0) {
                        puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                        goto LAB_076cbe88;
                      }
                      uVar7 = uVar7 - 1;
                      piVar8 = piVar8 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2e1f0,0);
LAB_076cbe88:
                  plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
                  puVar2 = PTR_DAT_09f2e250;
                  puVar1 = PTR_DAT_09f1f018;
                  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  do {
                    lVar4 = *plVar5;
                    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    if (uVar7 != 0) {
                      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                          goto 
                          Meta_XR_EnvironmentDepth_EnvironmentDepthManager__SetOcclusionShaderKeywords
                          ;
                        }
                        uVar7 = uVar7 - 1;
                        piVar8 = piVar8 + 4;
                      } while (uVar7 != 0);
                    }
                    puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
Meta_XR_EnvironmentDepth_EnvironmentDepthManager__SetOcclusionShaderKeywords:
                    uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                    if ((uVar7 & 1) == 0) {
                      if (plVar5 == (long *)0x0) goto LAB_076cbfdc;
                      lVar4 = *plVar5;
                      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                      if (uVar7 == 0) goto LAB_076cbfb4;
                      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                      goto LAB_076cbf9c;
                    }
                    lVar4 = *plVar5;
                    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    if (uVar7 != 0) {
                      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                          goto LAB_076cbf54;
                        }
                        uVar7 = uVar7 - 1;
                        piVar8 = piVar8 + 4;
                      } while (uVar7 != 0);
                    }
                    puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cbf54:
                    lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_04447e44();
                    }
                    FUN_076c8d94(lVar4,lVar3);
                  } while( true );
                }
              }
            }
            else if (lVar3 != 0) {
              FUN_076c7144(lVar3,*(undefined8 *)PTR_DAT_09f2e2f8,0);
              plVar5 = (long *)(**(code **)(*unaff_x19 + 0x1e8))();
              if (plVar5 != (long *)0x0) {
                lVar4 = *plVar5;
                uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f2e208) {
                      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                      goto LAB_076cbc7c;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2e208,0);
LAB_076cbc7c:
                plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
                puVar2 = PTR_DAT_09f2e248;
                puVar1 = PTR_DAT_09f1f018;
                if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                do {
                  lVar4 = *plVar5;
                  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                  if (uVar7 != 0) {
                    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                        puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                        goto LAB_076cbcec;
                      }
                      uVar7 = uVar7 - 1;
                      piVar8 = piVar8 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cbcec:
                  uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                  if ((uVar7 & 1) == 0) {
                    if (plVar5 == (long *)0x0) goto LAB_076cbdd0;
                    lVar4 = *plVar5;
                    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    if (uVar7 == 0) goto LAB_076cbda8;
                    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    goto LAB_076cbd90;
                  }
                  lVar4 = *plVar5;
                  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                  if (uVar7 != 0) {
                    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                        puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                        goto LAB_076cbd48;
                      }
                      uVar7 = uVar7 - 1;
                      piVar8 = piVar8 + 4;
                    } while (uVar7 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cbd48:
                  lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_04447e44();
                  }
                  FUN_076c7f18(lVar4,lVar3);
                } while( true );
              }
            }
          }
          else if (lVar3 != 0) {
            FUN_076c7144(lVar3,*(undefined8 *)PTR_DAT_09f2e2d0,0);
            plVar5 = (long *)(**(code **)(*unaff_x19 + 0x1c8))();
            if (plVar5 != (long *)0x0) {
              lVar4 = *plVar5;
              uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f2e228) {
                    puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_076cb85c;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2e228,0);
LAB_076cb85c:
              plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
              puVar2 = PTR_DAT_09f2e270;
              puVar1 = PTR_DAT_09f1f018;
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              do {
                lVar4 = *plVar5;
                uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                      goto LAB_076cb8cc;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cb8cc:
                uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                if ((uVar7 & 1) == 0) {
                  if (plVar5 == (long *)0x0) goto LAB_076cb9b4;
                  lVar4 = *plVar5;
                  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                  if (uVar7 == 0) goto LAB_076cb98c;
                  piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  goto LAB_076cb974;
                }
                lVar4 = *plVar5;
                uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                      goto LAB_076cb928;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cb928:
                lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_04447e44();
                }
                FUN_076c6ac0(lVar4,lVar3,0);
              } while( true );
            }
          }
        }
        else if (lVar3 != 0) {
          FUN_076c7144(lVar3,*(undefined8 *)PTR_DAT_09f2e2b8,0);
          plVar5 = (long *)(**(code **)(*unaff_x19 + 0x178))();
          if (plVar5 != (long *)0x0) {
            lVar4 = *plVar5;
            uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f2e1e8) {
                  puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_076cb64c;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2e1e8,0);
LAB_076cb64c:
            plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
            puVar2 = PTR_DAT_09f2e278;
            puVar1 = PTR_DAT_09f1f018;
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            do {
              lVar4 = *plVar5;
              uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                    puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_076cb6bc;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cb6bc:
              uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
              if ((uVar7 & 1) == 0) {
                if (plVar5 == (long *)0x0) goto LAB_076cb7a4;
                lVar4 = *plVar5;
                uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar7 == 0) goto LAB_076cb77c;
                piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                goto LAB_076cb764;
              }
              lVar4 = *plVar5;
              uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                    puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_076cb718;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cb718:
              lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04447e44();
              }
              FUN_076c5524(lVar4,lVar3,0);
            } while( true );
          }
        }
      }
      else if (lVar3 != 0) {
        FUN_076c7144(lVar3,*(undefined8 *)PTR_DAT_09f2e2e8,0);
        plVar5 = (long *)(**(code **)(*unaff_x19 + 0x1b8))();
        if (plVar5 != (long *)0x0) {
          lVar4 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f2e218) {
                puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_076cb43c;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2e218,0);
LAB_076cb43c:
          plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
          puVar2 = PTR_DAT_09f2e258;
          puVar1 = PTR_DAT_09f1f018;
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          do {
            lVar4 = *plVar5;
            uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                  puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_076cb4ac;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cb4ac:
            uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            if ((uVar7 & 1) == 0) {
              if (plVar5 == (long *)0x0) goto LAB_076cb594;
              lVar4 = *plVar5;
              uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar7 == 0) goto LAB_076cb56c;
              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              goto LAB_076cb554;
            }
            lVar4 = *plVar5;
            uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_076cb508;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cb508:
            lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04447e44();
            }
            FUN_076c65fc(lVar4,lVar3,0);
          } while( true );
        }
      }
    }
    else if (lVar3 != 0) {
      FUN_076c7144(lVar3,*(undefined8 *)PTR_DAT_09f2e2c8,0);
      plVar5 = (long *)(**(code **)(*unaff_x19 + 0x1a8))();
      if (plVar5 != (long *)0x0) {
        lVar4 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f2e210) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_076cb23c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2e210,0);
LAB_076cb23c:
        plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        puVar2 = PTR_DAT_09f2e280;
        puVar1 = PTR_DAT_09f1f018;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        do {
          lVar4 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_076cb2ac;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cb2ac:
          uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar7 & 1) == 0) {
            if (plVar5 == (long *)0x0) goto LAB_076cb390;
            lVar4 = *plVar5;
            uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar7 == 0) goto LAB_076cb368;
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            goto LAB_076cb350;
          }
          lVar4 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_076cb308;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cb308:
          lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e44();
          }
          FUN_076c64b8(lVar4,lVar3,0);
        } while( true );
      }
    }
  }
  else if (lVar3 != 0) {
    FUN_076c7144(lVar3,*(undefined8 *)PTR_DAT_09f2e2a0,0);
    plVar5 = (long *)(**(code **)(*unaff_x19 + 0x188))();
    if (plVar5 != (long *)0x0) {
      lVar4 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09f2e220) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_076cb02c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2e220,0);
LAB_076cb02c:
      plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      puVar2 = PTR_DAT_09f2e238;
      puVar1 = PTR_DAT_09f1f018;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      do {
        lVar4 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_076cb09c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar1,0);
LAB_076cb09c:
        uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar5 == (long *)0x0) goto LAB_076cb184;
          lVar4 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar7 == 0) goto LAB_076cb15c;
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_076cb144;
        }
        lVar4 = *plVar5;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_076cb0f8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)puVar2,0);
LAB_076cb0f8:
        lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        FUN_076c67bc(lVar4,lVar3,0);
      } while( true );
    }
  }
LAB_076cc90c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


