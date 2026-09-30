/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionBegin
ENTRY_POINT: 06351bb0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 129
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;telemetry_or_network_hits_2;strong_foveation_hits_4;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_MetaXRFeature__OnSessionBegin
               (long param_1,long param_2,undefined8 param_3,long *param_4,long *param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  int *piVar18;
  long *plVar19;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  puVar3 = PTR_DAT_07db4f80;
  puVar2 = PTR_DAT_07db4f78;
  if ((DAT_0825c3a1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db4ee0);
    FUN_0373b518(PTR_DAT_07d88078);
    FUN_0373b518(PTR_DAT_07db21d8);
    FUN_0373b518(PTR_DAT_07db27e8);
    FUN_0373b518(PTR_DAT_07d9b718);
    FUN_0373b518(PTR_DAT_07db4f20);
    FUN_0373b518(PTR_DAT_07db4f80);
    FUN_0373b518(PTR_DAT_07db4f78);
    FUN_0373b518(PTR_DAT_07db21f0);
    FUN_0373b518(PTR_DAT_07db27b0);
    FUN_0373b518(PTR_DAT_07db4f88);
    FUN_0373b518(PTR_DAT_07db4b68);
    DAT_0825c3a1 = 1;
  }
  lVar6 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
  FUN_049ce6c0(lVar6,*(undefined8 *)puVar3);
  puVar2 = PTR_DAT_07db4f20;
  if (param_4 != (long *)0x0) {
    while (iVar4 = (**(code **)(*param_4 + 0x238))(param_4,*(undefined8 *)(*param_4 + 0x240)),
          iVar4 != 4) {
      if (iVar4 != 5) {
        if (iVar4 == 0xd) {
          return lVar6;
        }
        FUN_031a5e18(param_4);
        uVar5 = (**(code **)(*param_4 + 0x238))(param_4,*(undefined8 *)(*param_4 + 0x240));
        in_stack_00000018 = thunk_FUN_037a15ac(PTR_DAT_07db23b0);
        in_stack_00000020 = 0xffffffffffffffff;
        in_stack_00000028 = uVar5;
        uVar15 = FUN_06278b80(&stack0x00000018,0);
        uVar16 = thunk_FUN_037a15ac(PTR_DAT_07db4b80);
        uVar15 = System_Convert__ToInt32(uVar16,uVar15,0);
        goto LAB_063521cc;
      }
LAB_063520c8:
      uVar13 = (**(code **)(*param_4 + 0x288))(param_4,*(undefined8 *)(*param_4 + 0x290));
      if ((uVar13 & 1) == 0) {
        FUN_0634fda8(param_1,param_4,param_2,0,*(undefined8 *)PTR_DAT_07db4b68);
        return lVar6;
      }
    }
    plVar7 = (long *)(**(code **)(*param_4 + 0x248))(param_4,*(undefined8 *)(*param_4 + 0x250));
    if (plVar7 != (long *)0x0) {
      uVar15 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      lVar8 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4ee0);
      FUN_06352c74(lVar8,uVar15,0);
      if (((param_2 != 0) && (lVar9 = FUN_06338600(param_2), lVar9 != 0)) &&
         (lVar9 = FUN_0633a078(lVar9,uVar15), lVar8 != 0)) {
        plVar7 = (long *)(lVar8 + 0x20);
        *plVar7 = lVar9;
        thunk_FUN_037aeb94(plVar7,lVar9);
        if (*(long *)(param_2 + 0xd8) != 0) {
          lVar9 = FUN_0633a078(*(long *)(param_2 + 0xd8),uVar15);
          plVar19 = (long *)(lVar8 + 0x18);
          *plVar19 = lVar9;
          thunk_FUN_037aeb94(plVar19,lVar9);
          if (lVar6 != 0) {
            lVar9 = *(long *)(lVar6 + 0x10);
            lVar17 = *(long *)puVar2;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar9 != 0) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                *plVar10 = lVar8;
                thunk_FUN_037aeb94(plVar10,lVar8);
              }
              else {
                FUN_049ceef4(lVar6,lVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              lVar9 = *plVar7;
              if ((lVar9 == 0) && (lVar9 = *plVar19, lVar9 == 0)) {
                uVar13 = (**(code **)(*param_4 + 0x288))(param_4,*(undefined8 *)(*param_4 + 0x290));
                if ((uVar13 & 1) != 0) {
                  plVar7 = *(long **)(param_1 + 0x28);
                  if (plVar7 != (long *)0x0) {
                    lVar9 = *plVar7;
                    uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar13 != 0) {
                      piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07db27e8) {
                          puVar11 = (undefined8 *)(lVar9 + (long)*piVar18 * 0x10 + 0x138);
                          goto LAB_06351f30;
                        }
                        uVar13 = uVar13 - 1;
                        piVar18 = piVar18 + 4;
                      } while (uVar13 != 0);
                    }
                    puVar11 = (undefined8 *)FUN_0377596c(plVar7,*(long *)PTR_DAT_07db27e8,0);
LAB_06351f30:
                    iVar4 = (*(code *)*puVar11)(plVar7,puVar11[1]);
                    if (3 < iVar4) {
                      plVar7 = *(long **)(param_1 + 0x28);
                      uVar16 = (**(code **)(*param_4 + 0x278))
                                         (param_4,*(undefined8 *)(*param_4 + 0x280));
                      if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
                        thunk_FUN_03798b70(*(long *)PTR_DAT_07d88078);
                      }
                      uVar14 = FUN_061d52c8(0);
                      uVar14 = FUN_06334b04(*(undefined8 *)PTR_DAT_07db4f88,uVar14,uVar15,
                                            *(undefined8 *)(param_2 + 0x60));
                      if (*(int *)(*(long *)PTR_DAT_07d9b718 + 0xe4) == 0) {
                        thunk_FUN_03798b70(*(long *)PTR_DAT_07d9b718);
                      }
                      uVar12 = thunk_FUN_037787d0(param_4,*(undefined8 *)PTR_DAT_07db21d8);
                      uVar16 = FUN_062d6f1c(uVar12,uVar16,uVar14,0);
                      if (plVar7 == (long *)0x0) goto LAB_06352130;
                      lVar9 = *plVar7;
                      uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
                      if (uVar13 != 0) {
                        piVar18 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_07db27e8) {
                            puVar11 = (undefined8 *)(lVar9 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                            goto LAB_06352050;
                          }
                          uVar13 = uVar13 - 1;
                          piVar18 = piVar18 + 4;
                        } while (uVar13 != 0);
                      }
                      puVar11 = (undefined8 *)FUN_0377596c(plVar7,*(long *)PTR_DAT_07db27e8,1);
LAB_06352050:
                      (*(code *)*puVar11)(plVar7,4,uVar16,0,puVar11[1]);
                    }
                  }
                  if (*(char *)(param_2 + 0xc0) == '\0') {
                    if (*(long *)(param_1 + 0x20) == 0) goto LAB_06352130;
                    iVar4 = *(int *)(*(long *)(param_1 + 0x20) + 0x20);
                  }
                  else {
                    iVar4 = *(int *)(param_2 + 0xc4);
                  }
                  if (iVar4 == 1) {
                    thunk_FUN_037a15ac(PTR_DAT_07d88078);
                    FUN_031ae340();
                    uVar16 = FUN_061d52c8(0);
                    FUN_031a5e18(param_5);
                    uVar14 = (**(code **)(*param_5 + 0x1b8))
                                       (param_5,*(undefined8 *)(*param_5 + 0x1c0));
                    uVar12 = thunk_FUN_037a15ac(PTR_DAT_07db4c00);
                    uVar15 = FUN_06334b04(uVar12,uVar16,uVar15,uVar14);
                    goto LAB_063521cc;
                  }
LAB_0635208c:
                  if (*(long *)(param_2 + 0xe0) == 0) {
                    FUN_062dc848(param_4,0);
                  }
                  else {
                    uVar15 = FUN_063526ec(param_1,param_2,param_3,param_4);
Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering:
                    *(undefined8 *)(lVar8 + 0x30) = uVar15;
                    thunk_FUN_037aeb94((undefined8 *)(lVar8 + 0x30),uVar15);
                  }
                  goto LAB_063520c8;
                }
              }
              else if (*(char *)(lVar9 + 0x80) == '\0') {
                lVar17 = *(long *)(lVar9 + 0x48);
                if (lVar17 == 0) {
                  uVar16 = FUN_063488fc(param_1,*(undefined8 *)(lVar9 + 0x40));
                  *(undefined8 *)(lVar9 + 0x48) = uVar16;
                  thunk_FUN_037aeb94((long *)(lVar9 + 0x48),uVar16);
                  lVar17 = *(long *)(lVar9 + 0x48);
                }
                plVar7 = (long *)FUN_06348d4c(param_1,lVar17,*(undefined8 *)(lVar9 + 0x78),param_2,
                                              param_3);
                uVar13 = FUN_062dcd48(param_4,*(undefined8 *)(lVar9 + 0x48),plVar7 != (long *)0x0,0)
                ;
                if ((uVar13 & 1) != 0) {
                  if ((plVar7 == (long *)0x0) ||
                     (uVar13 = (**(code **)(*plVar7 + 0x1a8))
                                         (plVar7,*(undefined8 *)(*plVar7 + 0x1b0)),
                     (uVar13 & 1) == 0)) {
                    uVar15 = FUN_063491cc(param_1,param_4,*(undefined8 *)(lVar9 + 0x40),
                                          *(undefined8 *)(lVar9 + 0x48),lVar9,param_2,param_3,0);
                  }
                  else {
                    uVar15 = FUN_06348db8(param_1,plVar7,param_4,*(undefined8 *)(lVar9 + 0x40),0);
                  }
                  goto Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering;
                }
              }
              else {
                uVar13 = (**(code **)(*param_4 + 0x288))(param_4,*(undefined8 *)(*param_4 + 0x290));
                if ((uVar13 & 1) != 0) goto LAB_0635208c;
              }
              thunk_FUN_037a15ac(PTR_DAT_07d88078);
              FUN_031ae340();
              uVar16 = FUN_061d52c8(0);
              uVar14 = thunk_FUN_037a15ac(PTR_DAT_07db4bf0);
              uVar15 = FUN_063349e4(uVar14,uVar16,uVar15);
LAB_063521cc:
              uVar15 = FUN_062d5fcc(param_4,uVar15,0);
              uVar16 = thunk_FUN_037a15ac(PTR_DAT_07db4f90);
                    /* WARNING: Subroutine does not return */
              FUN_0373b680(uVar15,uVar16);
            }
          }
        }
      }
    }
  }
LAB_06352130:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


