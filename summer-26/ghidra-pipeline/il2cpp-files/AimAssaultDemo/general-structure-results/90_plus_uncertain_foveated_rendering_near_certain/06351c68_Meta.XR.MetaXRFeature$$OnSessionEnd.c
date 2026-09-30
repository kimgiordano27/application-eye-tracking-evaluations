/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionEnd
ENTRY_POINT: 06351c68
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


long Meta_XR_MetaXRFeature__OnSessionEnd(void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  int *piVar17;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *plVar18;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  FUN_0373b518(PTR_DAT_07db4f88);
  FUN_0373b518(PTR_DAT_07db4b68);
  *(undefined1 *)(unaff_x24 + 0x3a1) = 1;
  lVar5 = thunk_FUN_037788cc(*unaff_x25);
  FUN_049ce6c0(lVar5,*unaff_x20);
  puVar2 = PTR_DAT_07db4f20;
  if (unaff_x19 != (long *)0x0) {
    while (iVar3 = (**(code **)(*unaff_x19 + 0x238))(), iVar3 != 4) {
      if (iVar3 != 5) {
        if (iVar3 == 0xd) {
          return lVar5;
        }
        FUN_031a5e18();
        uVar4 = (**(code **)(*unaff_x19 + 0x238))();
        in_stack_00000018 = thunk_FUN_037a15ac(PTR_DAT_07db23b0);
        in_stack_00000020 = 0xffffffffffffffff;
        in_stack_00000028 = uVar4;
        uVar14 = FUN_06278b80(&stack0x00000018,0);
        uVar15 = thunk_FUN_037a15ac(PTR_DAT_07db4b80);
        System_Convert__ToInt32(uVar15,uVar14,0);
        goto LAB_063521cc;
      }
LAB_063520c8:
      uVar12 = (**(code **)(*unaff_x19 + 0x288))();
      if ((uVar12 & 1) == 0) {
        FUN_0634fda8();
        return lVar5;
      }
    }
    plVar6 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar6 != (long *)0x0) {
      uVar14 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      lVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4ee0);
      FUN_06352c74(lVar7,uVar14,0);
      if (((unaff_x21 != 0) && (lVar8 = FUN_06338600(), lVar8 != 0)) &&
         (lVar8 = FUN_0633a078(lVar8,uVar14), lVar7 != 0)) {
        plVar6 = (long *)(lVar7 + 0x20);
        *plVar6 = lVar8;
        thunk_FUN_037aeb94(plVar6,lVar8);
        if (*(long *)(unaff_x21 + 0xd8) != 0) {
          lVar8 = FUN_0633a078(*(long *)(unaff_x21 + 0xd8),uVar14);
          plVar18 = (long *)(lVar7 + 0x18);
          *plVar18 = lVar8;
          thunk_FUN_037aeb94(plVar18,lVar8);
          if (lVar5 != 0) {
            lVar8 = *(long *)(lVar5 + 0x10);
            lVar16 = *(long *)puVar2;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                *plVar9 = lVar7;
                thunk_FUN_037aeb94(plVar9,lVar7);
              }
              else {
                FUN_049ceef4(lVar5,lVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              lVar8 = *plVar6;
              if ((lVar8 == 0) && (lVar8 = *plVar18, lVar8 == 0)) {
                uVar12 = (**(code **)(*unaff_x19 + 0x288))();
                if ((uVar12 & 1) != 0) {
                  plVar6 = *(long **)(unaff_x22 + 0x28);
                  if (plVar6 != (long *)0x0) {
                    lVar8 = *plVar6;
                    uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    if (uVar12 != 0) {
                      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_07db27e8) {
                          puVar10 = (undefined8 *)(lVar8 + (long)*piVar17 * 0x10 + 0x138);
                          goto LAB_06351f30;
                        }
                        uVar12 = uVar12 - 1;
                        piVar17 = piVar17 + 4;
                      } while (uVar12 != 0);
                    }
                    puVar10 = (undefined8 *)FUN_0377596c(plVar6,*(long *)PTR_DAT_07db27e8,0);
LAB_06351f30:
                    iVar3 = (*(code *)*puVar10)(plVar6,puVar10[1]);
                    if (3 < iVar3) {
                      plVar6 = *(long **)(unaff_x22 + 0x28);
                      uVar15 = (**(code **)(*unaff_x19 + 0x278))();
                      if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
                        thunk_FUN_03798b70(*(long *)PTR_DAT_07d88078);
                      }
                      uVar13 = FUN_061d52c8(0);
                      uVar13 = FUN_06334b04(*(undefined8 *)PTR_DAT_07db4f88,uVar13,uVar14,
                                            *(undefined8 *)(unaff_x21 + 0x60));
                      if (*(int *)(*(long *)PTR_DAT_07d9b718 + 0xe4) == 0) {
                        thunk_FUN_03798b70(*(long *)PTR_DAT_07d9b718);
                      }
                      uVar11 = thunk_FUN_037787d0();
                      uVar15 = FUN_062d6f1c(uVar11,uVar15,uVar13,0);
                      if (plVar6 == (long *)0x0) goto LAB_06352130;
                      lVar8 = *plVar6;
                      uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
                      if (uVar12 != 0) {
                        piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_07db27e8) {
                            puVar10 = (undefined8 *)(lVar8 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                            goto LAB_06352050;
                          }
                          uVar12 = uVar12 - 1;
                          piVar17 = piVar17 + 4;
                        } while (uVar12 != 0);
                      }
                      puVar10 = (undefined8 *)FUN_0377596c(plVar6,*(long *)PTR_DAT_07db27e8,1);
LAB_06352050:
                      (*(code *)*puVar10)(plVar6,4,uVar15,0,puVar10[1]);
                    }
                  }
                  if (*(char *)(unaff_x21 + 0xc0) == '\0') {
                    if (*(long *)(unaff_x22 + 0x20) == 0) goto LAB_06352130;
                    iVar3 = *(int *)(*(long *)(unaff_x22 + 0x20) + 0x20);
                  }
                  else {
                    iVar3 = *(int *)(unaff_x21 + 0xc4);
                  }
                  if (iVar3 == 1) {
                    thunk_FUN_037a15ac(PTR_DAT_07d88078);
                    FUN_031ae340();
                    uVar15 = FUN_061d52c8(0);
                    FUN_031a5e18(unaff_x29);
                    uVar13 = (**(code **)(*unaff_x29 + 0x1b8))
                                       (unaff_x29,*(undefined8 *)(*unaff_x29 + 0x1c0));
                    uVar11 = thunk_FUN_037a15ac(PTR_DAT_07db4c00);
                    FUN_06334b04(uVar11,uVar15,uVar14,uVar13);
                    goto LAB_063521cc;
                  }
LAB_0635208c:
                  if (*(long *)(unaff_x21 + 0xe0) == 0) {
                    FUN_062dc848();
                  }
                  else {
                    uVar14 = FUN_063526ec();
Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering:
                    *(undefined8 *)(lVar7 + 0x30) = uVar14;
                    thunk_FUN_037aeb94((undefined8 *)(lVar7 + 0x30),uVar14);
                  }
                  goto LAB_063520c8;
                }
              }
              else if (*(char *)(lVar8 + 0x80) == '\0') {
                if (*(long *)(lVar8 + 0x48) == 0) {
                  uVar15 = FUN_063488fc();
                  *(undefined8 *)(lVar8 + 0x48) = uVar15;
                  thunk_FUN_037aeb94((long *)(lVar8 + 0x48),uVar15);
                }
                plVar6 = (long *)FUN_06348d4c();
                uVar12 = FUN_062dcd48();
                if ((uVar12 & 1) != 0) {
                  if ((plVar6 == (long *)0x0) ||
                     (uVar12 = (**(code **)(*plVar6 + 0x1a8))
                                         (plVar6,*(undefined8 *)(*plVar6 + 0x1b0)),
                     (uVar12 & 1) == 0)) {
                    uVar14 = FUN_063491cc();
                  }
                  else {
                    uVar14 = FUN_06348db8();
                  }
                  goto Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering;
                }
              }
              else {
                uVar12 = (**(code **)(*unaff_x19 + 0x288))();
                if ((uVar12 & 1) != 0) goto LAB_0635208c;
              }
              thunk_FUN_037a15ac(PTR_DAT_07d88078);
              FUN_031ae340();
              uVar15 = FUN_061d52c8(0);
              uVar13 = thunk_FUN_037a15ac(PTR_DAT_07db4bf0);
              FUN_063349e4(uVar13,uVar15,uVar14);
LAB_063521cc:
              uVar14 = FUN_062d5fcc();
              uVar15 = thunk_FUN_037a15ac(PTR_DAT_07db4f90);
                    /* WARNING: Subroutine does not return */
              FUN_0373b680(uVar14,uVar15);
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


