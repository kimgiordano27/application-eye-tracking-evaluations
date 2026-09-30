/*
FUNCTION_NAME: Unity.Properties.TypeConverter<TransformOrigin,-StyleTransformOrigin>$$Invoke
ENTRY_POINT: 068c7a28
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void Unity_Properties_TypeConverter<TransformOrigin,_StyleTransformOrigin>__Invoke
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  FUN_054b958c(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0xc0));
  if (unaff_x22 != 0) {
    FUN_04c5a9f4();
    puVar3 = PTR_DAT_09f2a080;
    puVar2 = PTR_DAT_09f2a048;
    if ((*unaff_x21 != 0) && (lVar7 = *(long *)(*unaff_x21 + 0x508), lVar7 != 0)) {
      uVar12 = *(undefined8 *)(lVar7 + 0x4b0);
      uVar4 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f2a048);
      FUN_054b958c();
      FUN_04db869c(uVar12,uVar4,*(undefined8 *)puVar3);
      if ((*(long *)(unaff_x19 + 0x4b0) != 0) &&
         (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x4b0) + 0x500), lVar7 != 0)) {
        uVar12 = *(undefined8 *)(lVar7 + 0x4b0);
        uVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
        FUN_054b958c();
        FUN_04db869c(uVar12,uVar4,*(undefined8 *)puVar3);
        *(undefined8 *)(unaff_x19 + 0x4b0) = 0;
        thunk_FUN_044bb4b4();
        lVar11 = *(long *)(unaff_x19 + 0x4a8);
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_04481fb8();
        }
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_04481fb8();
        }
        if (lVar11 != 0) {
          FUN_09694948(lVar11,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20),0);
          lVar11 = *(long *)(unaff_x19 + 0x4a8);
          lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_04481fb8();
          }
          if (lVar11 != 0) {
            FUN_09694948(lVar11,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x28),0);
            lVar11 = *(long *)(unaff_x19 + 0x4a8);
            lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
            if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_04481fb8();
            }
            if (lVar11 != 0) {
              FUN_09694948(lVar11,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18),0);
              lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
              if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_04481fb8();
              }
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_044a54b4();
              }
              if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60) + 0x135
                            ) & 1) == 0) {
                FUN_04481fb8();
              }
              FUN_09694948();
              lVar11 = *(long *)(unaff_x19 + 0x4a8);
              lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xa0);
              if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_04481fb8();
              }
              if (lVar11 != 0) {
                FUN_09694948(lVar11,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10),0);
                if (*(long *)(unaff_x19 + 0x4b8) == 0) {
                  return;
                }
                if (*(long *)(unaff_x19 + 0x4a8) != 0) {
                  plVar5 = (long *)FUN_0968ec20(*(long *)(unaff_x19 + 0x4a8),0);
                  if (DAT_0a51bf43 == '\0') {
                    FUN_04447ba8(PTR_DAT_09f1e740);
                    DAT_0a51bf43 = '\x01';
                  }
                  if (plVar5 != (long *)0x0) {
                    plVar1 = (long *)(unaff_x19 + 0x4b8);
                    lVar7 = *plVar5;
                    puVar9 = *(undefined4 **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
                    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    uVar14 = puVar9[1];
                    uVar13 = puVar9[2];
                    uVar15 = *puVar9;
                    if (uVar8 != 0) {
                      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09f2a068) {
                          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                          goto LAB_068c7d14;
                        }
                        uVar8 = uVar8 - 1;
                        piVar10 = piVar10 + 4;
                      } while (uVar8 != 0);
                    }
                    puVar6 = (undefined8 *)FUN_044822ac(plVar5,*(long *)PTR_DAT_09f2a068,1);
LAB_068c7d14:
                    (*(code *)*puVar6)(uVar15,uVar14,uVar13,plVar5,puVar6[1]);
                    if (*plVar1 != 0) {
                      FUN_0969a7a8(*plVar1,0);
                      lVar7 = *(long *)(unaff_x19 + 0x4a8);
                      uVar4 = thunk_FUN_0448520c(*unaff_x25);
                      FUN_054b958c();
                      if (lVar7 != 0) {
                        FUN_04c5a9f4(lVar7,uVar4,0,*unaff_x24);
                        *plVar1 = 0;
                        thunk_FUN_044bb4b4(plVar1,0);
                        lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x60);
                        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                          lVar7 = FUN_04481fb8();
                        }
                        if (*(int *)(lVar7 + 0xe4) == 0) {
                          thunk_FUN_044a54b4();
                        }
                        if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) +
                                                0x60) + 0x135) & 1) == 0) {
                          FUN_04481fb8();
                        }
                        FUN_09694948();
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


