/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$get_GlobalMesh
ENTRY_POINT: 0771cd74
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUKAnchor__get_GlobalMesh(long param_1)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  int *piVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  
  if ((DAT_0a523157 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f30ec0);
    FUN_04447ba8(PTR_DAT_09f1e540);
    FUN_04447ba8(PTR_DAT_09f1f030);
    FUN_04447ba8(PTR_DAT_09f1f078);
    FUN_04447ba8(PTR_DAT_09f1f070);
    FUN_04447ba8(PTR_DAT_09f308d8);
    FUN_04447ba8(PTR_DAT_09f30ec8);
    FUN_04447ba8(PTR_DAT_09f30ed0);
    FUN_04447ba8(PTR_DAT_09f30e80);
    FUN_04447ba8(PTR_DAT_09f309a0);
    FUN_04447ba8(PTR_DAT_09f309a8);
    FUN_04447ba8(PTR_DAT_09f30ed8);
    DAT_0a523157 = 1;
  }
  plVar14 = *(long **)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    lVar3 = *(long *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar3 != 0) && (lVar4 = *(long *)(param_1 + 0x48), lVar4 != 0)) {
      cVar1 = *(char *)(lVar3 + 0x10);
      *(char *)(lVar4 + 0x10) = cVar1;
      if (cVar1 == '\0') {
        *(undefined1 *)(lVar4 + 0x11) = 1;
        return 0;
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
      thunk_FUN_044bb4b4((long *)(param_1 + 0x58),0);
      uVar11 = *(int *)(param_1 + 0x50) + 1;
      *(uint *)(param_1 + 0x50) = uVar11;
      if (plVar14 != (long *)0x0) {
LAB_0771cf50:
        if (plVar14[0x1a] != 0) {
          if ((int)uVar11 < *(int *)(plVar14[0x1a] + 0x18)) {
            if (*(char *)((long)plVar14 + 0x84) == '\0') {
              lVar3 = plVar14[0x11];
              uVar9 = 0;
            }
            else {
              lVar3 = plVar14[0x14];
              if (lVar3 == 0) goto LAB_0771d3fc;
              if (*(uint *)(lVar3 + 0x18) <= uVar11) goto LAB_0771d400;
              lVar4 = *(long *)(lVar3 + (long)(int)uVar11 * 8 + 0x20);
              if ((lVar4 == 0) || (*(long *)(param_1 + 0x28) == 0)) goto LAB_0771d3fc;
              lVar3 = *(long *)(lVar4 + 0x10);
              uVar9 = *(undefined8 *)(lVar4 + 0x20);
              *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x33) = *(undefined1 *)(lVar4 + 0x18);
            }
            uVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f30ec0);
            FUN_0776c150(uVar7,0);
            *(undefined8 *)(param_1 + 0x58) = uVar7;
            thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x58),uVar7);
            lVar4 = plVar14[0x1a];
            if (lVar4 != 0) {
              if (*(uint *)(lVar4 + 0x18) <= *(uint *)(param_1 + 0x50)) {
LAB_0771d400:
                    /* WARNING: Subroutine does not return */
                FUN_04447e4c();
              }
              uVar18 = *(undefined8 *)(lVar4 + (long)(int)*(uint *)(param_1 + 0x50) * 8 + 0x20);
              lVar4 = *(long *)(param_1 + 0x28);
              uVar7 = *(undefined8 *)(param_1 + 0x30);
              lVar5 = plVar14[0x17];
              uVar8 = (**(code **)(*plVar14 + 0x338))(plVar14,*(undefined8 *)(*plVar14 + 0x340));
              if (lVar4 != 0) {
                uVar9 = FUN_077696dc(*(undefined4 *)(param_1 + 0x40),lVar4,uVar7,uVar18,lVar3,lVar5,
                                     uVar9,uVar8,*(undefined8 *)(param_1 + 0x38));
                *(undefined8 *)(param_1 + 0x18) = uVar9;
                thunk_FUN_044bb4b4((undefined8 *)(param_1 + 0x18),uVar9);
                *(undefined4 *)(param_1 + 0x10) = 1;
                return 1;
              }
            }
          }
          else {
            FUN_0771ade8(plVar14);
            if (*(long *)(param_1 + 0x48) != 0) {
              if ((*(char *)(*(long *)(param_1 + 0x48) + 0x10) != '\0') &&
                 (plVar15 = *(long **)(param_1 + 0x38), plVar15 != (long *)0x0)) {
                uVar9 = (**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180));
                lVar3 = *plVar15;
                uVar16 = (ulong)*(ushort *)(lVar3 + 0x12e);
                if (uVar16 != 0) {
                  piVar13 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_09f308d8) {
                      puVar6 = (undefined8 *)(lVar3 + (long)(*piVar13 + 0x17) * 0x10 + 0x138);
                      goto LAB_0771d114;
                    }
                    uVar16 = uVar16 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar16 != 0);
                }
                puVar6 = (undefined8 *)FUN_044822ac(plVar15,*(long *)PTR_DAT_09f308d8,0x17);
LAB_0771d114:
                (*(code *)*puVar6)(plVar15,uVar9,puVar6[1]);
              }
              lVar3 = (**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180));
              if (lVar3 != 0) {
                *(undefined4 *)(lVar3 + 0x1c) = 0;
                lVar3 = (**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180));
                uVar9 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f30e80,0);
                if (lVar3 != 0) {
                  *(undefined8 *)(lVar3 + 0x30) = uVar9;
                  thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x30),uVar9);
                  lVar3 = (**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180))
                  ;
                  if (lVar3 != 0) {
                    cVar1 = *(char *)((long)plVar14 + 0x84);
                    *(char *)(lVar3 + 0x38) = cVar1;
                    if (cVar1 == '\0') {
                      plVar15 = (long *)FUN_04447c90(*(undefined8 *)PTR_DAT_09f309a0,1);
                      lVar3 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f309a8);
                      FUN_07711f2c();
                      if (plVar15 != (long *)0x0) {
                        if ((lVar3 != 0) &&
                           (lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*plVar15 + 0x40)),
                           lVar4 == 0)) {
LAB_0771d404:
                          uVar9 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
                          FUN_04447d10(uVar9,0);
                        }
                        if ((int)plVar15[3] != 0) {
                          plVar17 = plVar15 + 4;
                          *plVar17 = lVar3;
                          thunk_FUN_044bb4b4(plVar17,lVar3);
                          if ((int)plVar15[3] != 0) {
                            if (*plVar17 != 0) {
                              *(long *)(*plVar17 + 0x10) = plVar14[0x11];
                              thunk_FUN_044bb4b4();
                              if ((int)plVar15[3] == 0) goto LAB_0771d400;
                              lVar3 = *plVar17;
                              if (lVar3 != 0) {
                                *(undefined1 *)(lVar3 + 0x18) =
                                     *(undefined1 *)((long)plVar14 + 0x51);
                                uVar9 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1f070);
                                FUN_05bad610(uVar9,*(undefined8 *)PTR_DAT_09f1f078);
                                *(undefined8 *)(lVar3 + 0x20) = uVar9;
                                thunk_FUN_044bb4b4((undefined8 *)(lVar3 + 0x20),uVar9);
                                lVar3 = (**(code **)(*plVar14 + 0x178))
                                                  (plVar14,*(undefined8 *)(*plVar14 + 0x180));
                                puVar2 = PTR_DAT_09f1f030;
                                if (lVar3 != 0) {
                                  lVar4 = 0;
                                  while (*(long *)(lVar3 + 0x20) != 0) {
                                    if (*(int *)(*(long *)(lVar3 + 0x20) + 0x18) <= (int)(uint)lVar4
                                       ) {
                                      lVar3 = (**(code **)(*plVar14 + 0x178))
                                                        (plVar14,*(undefined8 *)(*plVar14 + 0x180));
                                      if (lVar3 != 0) {
                                        plVar17 = (long *)(lVar3 + 0x28);
                                        *plVar17 = (long)plVar15;
                                        goto LAB_0771d3a0;
                                      }
                                      break;
                                    }
                                    if ((int)plVar15[3] == 0) goto LAB_0771d400;
                                    if (*plVar17 == 0) break;
                                    lVar5 = *(long *)(*plVar17 + 0x20);
                                    lVar3 = (**(code **)(*plVar14 + 0x178))
                                                      (plVar14,*(undefined8 *)(*plVar14 + 0x180));
                                    if ((lVar3 == 0) ||
                                       (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) break;
                                    if (*(uint *)(lVar3 + 0x18) <= (uint)lVar4) goto LAB_0771d400;
                                    lVar3 = *(long *)(lVar3 + lVar4 * 8 + 0x20);
                                    if ((lVar3 == 0) || (lVar5 == 0)) break;
                                    uVar9 = *(undefined8 *)(lVar3 + 0x10);
                                    lVar3 = *(long *)(lVar5 + 0x10);
                                    lVar12 = *(long *)puVar2;
                                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                    if (lVar3 == 0) break;
                                    uVar11 = *(uint *)(lVar5 + 0x18);
                                    if (uVar11 < *(uint *)(lVar3 + 0x18)) {
                                      *(uint *)(lVar5 + 0x18) = uVar11 + 1;
                                      *(undefined8 *)(lVar3 + (long)(int)uVar11 * 8 + 0x20) = uVar9;
                                      thunk_FUN_044bb4b4();
                                    }
                                    else {
                                      FUN_05bade44(lVar5,uVar9,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    lVar3 = (**(code **)(*plVar14 + 0x178))
                                                      (plVar14,*(undefined8 *)(*plVar14 + 0x180));
                                    lVar4 = lVar4 + 1;
                                    if (lVar3 == 0) break;
                                  }
                                }
                              }
                            }
                            goto LAB_0771d3fc;
                          }
                        }
                        goto LAB_0771d400;
                      }
                    }
                    else {
                      lVar3 = (**(code **)(*plVar14 + 0x178))
                                        (plVar14,*(undefined8 *)(*plVar14 + 0x180));
                      if (lVar3 != 0) {
                        plVar15 = (long *)plVar14[0x14];
                        plVar17 = (long *)(lVar3 + 0x28);
                        *plVar17 = (long)plVar15;
LAB_0771d3a0:
                        thunk_FUN_044bb4b4(plVar17,plVar15);
                        if (*(int *)((long)plVar14 + 0x2c) < 3) {
                          return 0;
                        }
                        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
                          thunk_FUN_044a54b4();
                        }
                        FUN_094c652c(*(undefined8 *)PTR_DAT_09f30ed8,0);
                        return 0;
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
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar14 != (long *)0x0) {
      if (*(char *)((long)plVar14 + 0x84) == '\0') {
        uVar10 = 1;
      }
      else {
        if (plVar14[0x14] == 0) goto LAB_0771d3fc;
        uVar10 = *(undefined4 *)(plVar14[0x14] + 0x18);
      }
      lVar3 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f30ec8,uVar10);
      plVar15 = plVar14 + 0x1a;
      *plVar15 = lVar3;
      thunk_FUN_044bb4b4(plVar15,lVar3);
      puVar2 = PTR_DAT_09f30ed0;
      plVar17 = (long *)*plVar15;
      if (plVar17 != (long *)0x0) {
        uVar16 = 0;
        lVar3 = 0x20;
        do {
          if ((long)(int)plVar17[3] <= (long)uVar16) {
            uVar11 = 0;
            *(undefined4 *)(param_1 + 0x50) = 0;
            goto LAB_0771cf50;
          }
          lVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
          FUN_07a80df4(lVar4,0);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_04485110(lVar4,*(undefined8 *)(*plVar17 + 0x40)), lVar5 == 0))
          goto LAB_0771d404;
          if (*(uint *)(plVar17 + 3) <= uVar16) goto LAB_0771d400;
          plVar17[uVar16 + 4] = lVar4;
          thunk_FUN_044bb4b4((long)plVar17 + lVar3,lVar4);
          plVar17 = (long *)*plVar15;
          uVar16 = uVar16 + 1;
          lVar3 = lVar3 + 8;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
LAB_0771d3fc:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


