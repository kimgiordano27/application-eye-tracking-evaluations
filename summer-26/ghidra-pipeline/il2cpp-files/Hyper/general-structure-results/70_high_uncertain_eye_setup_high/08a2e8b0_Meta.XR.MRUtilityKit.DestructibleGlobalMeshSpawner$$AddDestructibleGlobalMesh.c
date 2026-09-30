/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleGlobalMeshSpawner$$AddDestructibleGlobalMesh
ENTRY_POINT: 08a2e8b0
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner__AddDestructibleGlobalMesh
               (undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *unaff_x25;
  
  plVar13 = (long *)*param_1;
  uVar6 = thunk_FUN_04983b98(*(undefined8 *)(in_x9 + 0x48));
  uVar6 = FUN_08bc9f74(*(undefined8 *)PTR_DAT_0ac52820,uVar6,0);
  if (plVar13 != (long *)0x0) {
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x25) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 3) * 0x10 + 0x138);
          goto LAB_08a2e930;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_04980e68(plVar13,*unaff_x25,3);
LAB_08a2e930:
    (*(code *)*puVar7)(plVar13,uVar6,puVar7[1]);
    puVar14 = (undefined8 *)(unaff_x19 + 0x20);
    *puVar14 = unaff_x20;
    thunk_FUN_049ee3d8(puVar14);
    puVar7 = (undefined8 *)(unaff_x19 + 0x18);
    *puVar7 = unaff_x21;
    thunk_FUN_049ee3d8(puVar7);
    puVar2 = PTR_DAT_0ac4c9f0;
    plVar13 = (long *)*puVar14;
    if (plVar13 != (long *)0x0) {
      lVar10 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac4c9f0) {
            puVar14 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x2f) * 0x10 + 0x138);
            goto LAB_08a2e9c8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar14 = (undefined8 *)FUN_04980e68(plVar13,*(long *)PTR_DAT_0ac4c9f0,0x2f);
LAB_08a2e9c8:
      plVar13 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
      puVar1 = PTR_DAT_0ac527c0;
      puVar4 = PTR_DAT_0ac4f840;
      if (plVar13 != (long *)0x0) {
        lVar10 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac4e5c8) {
              puVar14 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_08a2ea40;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar14 = (undefined8 *)FUN_04980e68(plVar13,*(long *)PTR_DAT_0ac4e5c8,0);
LAB_08a2ea40:
        uVar6 = (*(code *)*puVar14)(plVar13,puVar14[1]);
        uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
        FUN_089b9c54(uVar8,uVar6,0);
        *(undefined8 *)(unaff_x19 + 0x28) = uVar8;
        thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x28),uVar8);
        uVar6 = *(undefined8 *)(unaff_x19 + 0x20);
        lVar10 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
        FUN_089be1e8(lVar10,uVar6,0);
        plVar13 = (long *)(unaff_x19 + 0x30);
        *plVar13 = lVar10;
        thunk_FUN_049ee3d8(plVar13,lVar10);
        puVar1 = PTR_DAT_0ac52808;
        puVar4 = PTR_DAT_0ac51da0;
        plVar15 = *(long **)(unaff_x19 + 0x20);
        if (plVar15 != (long *)0x0) {
          lVar10 = *plVar15;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                puVar14 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
                goto LAB_08a2eb14;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar14 = (undefined8 *)FUN_04980e68(plVar15,*(long *)puVar2,0xd);
LAB_08a2eb14:
          uVar6 = (*(code *)*puVar14)(plVar15,puVar14[1]);
          uVar8 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
          FUN_08a1629c(uVar8,uVar6,0);
          *(undefined8 *)(unaff_x19 + 0xd0) = uVar8;
          thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0xd0),uVar8);
          uVar6 = *(undefined8 *)(unaff_x19 + 0x20);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          if (DAT_0b32c482 == '\0') {
            FUN_04947ee4(PTR_DAT_0ac51da0);
            DAT_0b32c482 = '\x01';
          }
          puVar3 = PTR_DAT_0ac527a8;
          puVar1 = PTR_DAT_0ac527a0;
          lVar10 = *(long *)puVar4;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_049a583c();
            lVar10 = *(long *)puVar4;
          }
          puVar14 = (undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10);
          *puVar14 = uVar6;
          thunk_FUN_049ee3d8(puVar14,uVar6);
          FUN_08a2f278();
          uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
          System_Collections_Generic_Dictionary<ValueTuple<object,_object>,_object>__TryAdd
                    (uVar6,*(undefined8 *)puVar1);
          *(undefined8 *)(unaff_x19 + 0xb0) = uVar6;
          thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0xb0),uVar6);
          puVar4 = PTR_DAT_0ac524b0;
          plVar15 = *(long **)(unaff_x19 + 0x18);
          if (plVar15 != (long *)0x0) {
            lVar10 = *plVar15;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0ac524b0) {
                  puVar14 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
                  goto LAB_08a2ec4c;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar14 = (undefined8 *)FUN_04980e68(plVar15,*(long *)PTR_DAT_0ac524b0,0xc);
LAB_08a2ec4c:
            puVar1 = PTR_DAT_0ac09cd0;
            iVar5 = (*(code *)*puVar14)(plVar15,puVar14[1]);
            if (*(int *)(unaff_x19 + 0xa0) != iVar5) {
              lVar10 = *(long *)(unaff_x19 + 0x48);
              *(int *)(unaff_x19 + 0xa0) = iVar5;
              if (lVar10 != 0) {
                (**(code **)(lVar10 + 0x18))
                          (*(undefined8 *)(lVar10 + 0x40),iVar5,*(undefined8 *)(lVar10 + 0x28));
              }
            }
            plVar15 = *(long **)(unaff_x19 + 0x20);
            uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
            FUN_05f878c4();
            puVar3 = PTR_DAT_0ac09d30;
            if (plVar15 != (long *)0x0) {
              lVar10 = *plVar15;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar14 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x17) * 0x10 + 0x138);
                    goto LAB_08a2ed18;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar14 = (undefined8 *)FUN_04980e68(plVar15,*(long *)puVar2,0x17);
LAB_08a2ed18:
              (*(code *)*puVar14)(plVar15,uVar6,puVar14[1]);
              plVar15 = *(long **)(unaff_x19 + 0x20);
              uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
              FUN_08cc3ad0();
              if (plVar15 != (long *)0x0) {
                lVar10 = *plVar15;
                uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                      puVar14 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x15) * 0x10 + 0x138);
                      goto LAB_08a2eda4;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar14 = (undefined8 *)FUN_04980e68(plVar15,*(long *)puVar2,0x15);
LAB_08a2eda4:
                (*(code *)*puVar14)(plVar15,uVar6,puVar14[1]);
                plVar15 = *(long **)(unaff_x19 + 0x20);
                uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
                FUN_05f878c4();
                puVar1 = PTR_DAT_0ac527b0;
                if (plVar15 != (long *)0x0) {
                  lVar10 = *plVar15;
                  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar11 != 0) {
                    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                        puVar14 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x13) * 0x10 + 0x138);
                        goto LAB_08a2ee38;
                      }
                      uVar11 = uVar11 - 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar11 != 0);
                  }
                  puVar14 = (undefined8 *)FUN_04980e68(plVar15,*(long *)puVar2,0x13);
LAB_08a2ee38:
                  (*(code *)*puVar14)(plVar15,uVar6,puVar14[1]);
                  plVar15 = *(long **)(unaff_x19 + 0x18);
                  uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
                  FUN_089c564c();
                  puVar2 = PTR_DAT_0ac527b8;
                  if (plVar15 != (long *)0x0) {
                    lVar10 = *plVar15;
                    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    if (uVar11 != 0) {
                      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                          puVar14 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                          goto LAB_08a2eec8;
                        }
                        uVar11 = uVar11 - 1;
                        piVar12 = piVar12 + 4;
                      } while (uVar11 != 0);
                    }
                    puVar14 = (undefined8 *)FUN_04980e68(plVar15,*(long *)puVar4,0);
LAB_08a2eec8:
                    (*(code *)*puVar14)(plVar15,uVar6,puVar14[1]);
                    plVar15 = *(long **)(unaff_x19 + 0x18);
                    uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
                    FUN_089c5748();
                    if (plVar15 != (long *)0x0) {
                      lVar10 = *plVar15;
                      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                      if (uVar11 != 0) {
                        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                            puVar14 = (undefined8 *)(lVar10 + (long)(*piVar12 + 4) * 0x10 + 0x138);
                            goto LAB_08a2ef54;
                          }
                          uVar11 = uVar11 - 1;
                          piVar12 = piVar12 + 4;
                        } while (uVar11 != 0);
                      }
                      puVar14 = (undefined8 *)FUN_04980e68(plVar15,*(long *)puVar4,4);
LAB_08a2ef54:
                      (*(code *)*puVar14)(plVar15,uVar6,puVar14[1]);
                      plVar15 = *(long **)(unaff_x19 + 0x18);
                      uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
                      FUN_08cc3ad0();
                      if (plVar15 != (long *)0x0) {
                        lVar10 = *plVar15;
                        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                        if (uVar11 != 0) {
                          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                              puVar14 = (undefined8 *)(lVar10 + (long)(*piVar12 + 6) * 0x10 + 0x138)
                              ;
                              goto LAB_08a2efd8;
                            }
                            uVar11 = uVar11 - 1;
                            piVar12 = piVar12 + 4;
                          } while (uVar11 != 0);
                        }
                        puVar14 = (undefined8 *)FUN_04980e68(plVar15,*(long *)puVar4,6);
LAB_08a2efd8:
                        (*(code *)*puVar14)(plVar15,uVar6,puVar14[1]);
                        if ((*plVar13 != 0) && (lVar10 = *(long *)(*plVar13 + 0x28), lVar10 != 0)) {
                          uVar11 = FUN_089bcfec(lVar10,0);
                          if ((uVar11 & 1) != 0) {
                            plVar13 = (long *)*puVar7;
                            if (plVar13 == (long *)0x0) goto LAB_08a2f274;
                            lVar10 = *plVar13;
                            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                            if (uVar11 != 0) {
                              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                                  puVar14 = (undefined8 *)
                                            (lVar10 + (long)(*piVar12 + 10) * 0x10 + 0x138);
                                  goto LAB_08a2f05c;
                                }
                                uVar11 = uVar11 - 1;
                                piVar12 = piVar12 + 4;
                              } while (uVar11 != 0);
                            }
                            puVar14 = (undefined8 *)FUN_04980e68(plVar13,*(long *)puVar4,10);
LAB_08a2f05c:
                            uVar11 = (*(code *)*puVar14)(plVar13,puVar14[1]);
                            if ((uVar11 & 1) != 0) {
                              plVar13 = (long *)*puVar7;
                              if (plVar13 == (long *)0x0) goto LAB_08a2f274;
                              lVar10 = *plVar13;
                              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                              if (uVar11 != 0) {
                                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                                    puVar7 = (undefined8 *)
                                             (lVar10 + (long)(*piVar12 + 0xb) * 0x10 + 0x138);
                                    goto LAB_08a2f0c4;
                                  }
                                  uVar11 = uVar11 - 1;
                                  piVar12 = piVar12 + 4;
                                } while (uVar11 != 0);
                              }
                              puVar7 = (undefined8 *)FUN_04980e68(plVar13,*(long *)puVar4,0xb);
LAB_08a2f0c4:
                              uVar11 = (*(code *)*puVar7)(plVar13,puVar7[1]);
                              if ((uVar11 & 1) != 0) {
                                FUN_08a2f44c();
                              }
                            }
                          }
                          puVar2 = PTR_DAT_0ac09d18;
                          lVar10 = FUN_08dea498(0);
                          plVar13 = (long *)(unaff_x19 + 0x10);
                          *plVar13 = lVar10;
                          thunk_FUN_049ee3d8(plVar13,lVar10);
                          if (*plVar13 == 0) {
                            lVar10 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac44360);
                            Nakama_Console_UserGroupListUserGroup__set_State(lVar10,0);
                            *plVar13 = lVar10;
                            thunk_FUN_049ee3d8(plVar13,lVar10);
                            FUN_08dea364(*plVar13,0);
                          }
                          plVar13 = (long *)(unaff_x19 + 0x68);
                          lVar10 = *plVar13;
                          uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
                          FUN_05f901fc();
                          lVar10 = FUN_08dc2b6c(lVar10,uVar6,0);
                          if (lVar10 == 0) {
                            lVar9 = 0;
                            *plVar13 = 0;
                          }
                          else {
                            uVar6 = *(undefined8 *)puVar2;
                            lVar9 = thunk_FUN_04983e64(lVar10,uVar6);
                            if (lVar9 == 0) {
LAB_08a2f1b8:
                    /* WARNING: Subroutine does not return */
                              FUN_0494850c(lVar10,uVar6);
                            }
                            uVar6 = *(undefined8 *)puVar2;
                            *plVar13 = lVar9;
                            lVar9 = thunk_FUN_04983e64(lVar10,uVar6);
                            if (lVar9 == 0) goto LAB_08a2f1b8;
                          }
                          puVar1 = PTR_DAT_0ac52810;
                          puVar4 = PTR_DAT_0ac4e560;
                          puVar2 = PTR_DAT_0ac4e558;
                          thunk_FUN_049ee3d8(plVar13,lVar9);
                          uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar4);
                          FUN_063dfc4c();
                          lVar10 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
                          FUN_08a2f6e4(lVar10,uVar6,*(undefined8 *)puVar1);
                          plVar13 = (long *)(unaff_x19 + 0xb8);
                          *plVar13 = lVar10;
                          thunk_FUN_049ee3d8(plVar13,lVar10);
                          plVar13 = (long *)*plVar13;
                          if (plVar13 != (long *)0x0) {
                            (**(code **)(*plVar13 + 0x1d8))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
                            FUN_08a2f768();
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
    }
  }
LAB_08a2f274:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


