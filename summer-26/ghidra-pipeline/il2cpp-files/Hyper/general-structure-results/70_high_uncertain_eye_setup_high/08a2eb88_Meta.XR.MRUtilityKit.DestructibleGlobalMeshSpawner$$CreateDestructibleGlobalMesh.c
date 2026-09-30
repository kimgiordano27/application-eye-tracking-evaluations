/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.DestructibleGlobalMeshSpawner$$CreateDestructibleGlobalMesh
ENTRY_POINT: 08a2eb88
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner__CreateDestructibleGlobalMesh(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  long *plVar11;
  long *unaff_x24;
  long *unaff_x25;
  
  puVar1 = PTR_DAT_0ac527a8;
  puVar2 = PTR_DAT_0ac527a0;
  lVar5 = *unaff_x24;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar5 = *unaff_x24;
  }
  *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10) = unaff_x22;
  thunk_FUN_049ee3d8();
  FUN_08a2f278();
  uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary<ValueTuple<object,_object>,_object>__TryAdd
            (uVar6,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar6;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0xb0),uVar6);
  puVar2 = PTR_DAT_0ac524b0;
  plVar11 = *(long **)(unaff_x19 + 0x18);
  if (plVar11 != (long *)0x0) {
    lVar5 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac524b0) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
          goto LAB_08a2ec4c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_04980e68(plVar11,*(long *)PTR_DAT_0ac524b0,0xc);
LAB_08a2ec4c:
    puVar1 = PTR_DAT_0ac09cd0;
    iVar4 = (*(code *)*puVar7)(plVar11,puVar7[1]);
    if (*(int *)(unaff_x19 + 0xa0) != iVar4) {
      lVar5 = *(long *)(unaff_x19 + 0x48);
      *(int *)(unaff_x19 + 0xa0) = iVar4;
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))
                  (*(undefined8 *)(lVar5 + 0x40),iVar4,*(undefined8 *)(lVar5 + 0x28));
      }
    }
    plVar11 = *(long **)(unaff_x19 + 0x20);
    uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
    FUN_05f878c4();
    puVar3 = PTR_DAT_0ac09d30;
    if (plVar11 != (long *)0x0) {
      lVar5 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0x17) * 0x10 + 0x138);
            goto LAB_08a2ed18;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_04980e68(plVar11,*unaff_x25,0x17);
LAB_08a2ed18:
      (*(code *)*puVar7)(plVar11,uVar6,puVar7[1]);
      plVar11 = *(long **)(unaff_x19 + 0x20);
      uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
      FUN_08cc3ad0();
      if (plVar11 != (long *)0x0) {
        lVar5 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x25) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0x15) * 0x10 + 0x138);
              goto LAB_08a2eda4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_04980e68(plVar11,*unaff_x25,0x15);
LAB_08a2eda4:
        (*(code *)*puVar7)(plVar11,uVar6,puVar7[1]);
        plVar11 = *(long **)(unaff_x19 + 0x20);
        uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
        FUN_05f878c4();
        puVar1 = PTR_DAT_0ac527b0;
        if (plVar11 != (long *)0x0) {
          lVar5 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *unaff_x25) {
                puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0x13) * 0x10 + 0x138);
                goto LAB_08a2ee38;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_04980e68(plVar11,*unaff_x25,0x13);
LAB_08a2ee38:
          (*(code *)*puVar7)(plVar11,uVar6,puVar7[1]);
          plVar11 = *(long **)(unaff_x19 + 0x18);
          uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
          FUN_089c564c();
          puVar1 = PTR_DAT_0ac527b8;
          if (plVar11 != (long *)0x0) {
            lVar5 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                  puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_08a2eec8;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar7 = (undefined8 *)FUN_04980e68(plVar11,*(long *)puVar2,0);
LAB_08a2eec8:
            (*(code *)*puVar7)(plVar11,uVar6,puVar7[1]);
            plVar11 = *(long **)(unaff_x19 + 0x18);
            uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
            FUN_089c5748();
            if (plVar11 != (long *)0x0) {
              lVar5 = *plVar11;
              uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                    puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 4) * 0x10 + 0x138);
                    goto LAB_08a2ef54;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar7 = (undefined8 *)FUN_04980e68(plVar11,*(long *)puVar2,4);
LAB_08a2ef54:
              (*(code *)*puVar7)(plVar11,uVar6,puVar7[1]);
              plVar11 = *(long **)(unaff_x19 + 0x18);
              uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar3);
              FUN_08cc3ad0();
              if (plVar11 != (long *)0x0) {
                lVar5 = *plVar11;
                uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                      puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 6) * 0x10 + 0x138);
                      goto LAB_08a2efd8;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 != 0);
                }
                puVar7 = (undefined8 *)FUN_04980e68(plVar11,*(long *)puVar2,6);
LAB_08a2efd8:
                (*(code *)*puVar7)(plVar11,uVar6,puVar7[1]);
                if ((*unaff_x21 != 0) && (lVar5 = *(long *)(*unaff_x21 + 0x28), lVar5 != 0)) {
                  uVar9 = FUN_089bcfec(lVar5,0);
                  if ((uVar9 & 1) != 0) {
                    plVar11 = (long *)*unaff_x20;
                    if (plVar11 == (long *)0x0) goto LAB_08a2f274;
                    lVar5 = *plVar11;
                    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    if (uVar9 != 0) {
                      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 10) * 0x10 + 0x138);
                          goto LAB_08a2f05c;
                        }
                        uVar9 = uVar9 - 1;
                        piVar10 = piVar10 + 4;
                      } while (uVar9 != 0);
                    }
                    puVar7 = (undefined8 *)FUN_04980e68(plVar11,*(long *)puVar2,10);
LAB_08a2f05c:
                    uVar9 = (*(code *)*puVar7)(plVar11,puVar7[1]);
                    if ((uVar9 & 1) != 0) {
                      plVar11 = (long *)*unaff_x20;
                      if (plVar11 == (long *)0x0) goto LAB_08a2f274;
                      lVar5 = *plVar11;
                      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
                      if (uVar9 != 0) {
                        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
                            goto LAB_08a2f0c4;
                          }
                          uVar9 = uVar9 - 1;
                          piVar10 = piVar10 + 4;
                        } while (uVar9 != 0);
                      }
                      puVar7 = (undefined8 *)FUN_04980e68(plVar11,*(long *)puVar2,0xb);
LAB_08a2f0c4:
                      uVar9 = (*(code *)*puVar7)(plVar11,puVar7[1]);
                      if ((uVar9 & 1) != 0) {
                        FUN_08a2f44c();
                      }
                    }
                  }
                  puVar2 = PTR_DAT_0ac09d18;
                  lVar5 = FUN_08dea498(0);
                  plVar11 = (long *)(unaff_x19 + 0x10);
                  *plVar11 = lVar5;
                  thunk_FUN_049ee3d8(plVar11,lVar5);
                  if (*plVar11 == 0) {
                    lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac44360);
                    Nakama_Console_UserGroupListUserGroup__set_State(lVar5,0);
                    *plVar11 = lVar5;
                    thunk_FUN_049ee3d8(plVar11,lVar5);
                    FUN_08dea364(*plVar11,0);
                  }
                  plVar11 = (long *)(unaff_x19 + 0x68);
                  lVar5 = *plVar11;
                  uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
                  FUN_05f901fc();
                  lVar5 = FUN_08dc2b6c(lVar5,uVar6,0);
                  if (lVar5 == 0) {
                    lVar8 = 0;
                    *plVar11 = 0;
                  }
                  else {
                    uVar6 = *(undefined8 *)puVar2;
                    lVar8 = thunk_FUN_04983e64(lVar5,uVar6);
                    if (lVar8 == 0) {
LAB_08a2f1b8:
                    /* WARNING: Subroutine does not return */
                      FUN_0494850c(lVar5,uVar6);
                    }
                    uVar6 = *(undefined8 *)puVar2;
                    *plVar11 = lVar8;
                    lVar8 = thunk_FUN_04983e64(lVar5,uVar6);
                    if (lVar8 == 0) goto LAB_08a2f1b8;
                  }
                  puVar3 = PTR_DAT_0ac52810;
                  puVar1 = PTR_DAT_0ac4e560;
                  puVar2 = PTR_DAT_0ac4e558;
                  thunk_FUN_049ee3d8(plVar11,lVar8);
                  uVar6 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
                  FUN_063dfc4c();
                  lVar5 = thunk_FUN_04983f60(*(undefined8 *)puVar2);
                  FUN_08a2f6e4(lVar5,uVar6,*(undefined8 *)puVar3);
                  plVar11 = (long *)(unaff_x19 + 0xb8);
                  *plVar11 = lVar5;
                  thunk_FUN_049ee3d8(plVar11,lVar5);
                  plVar11 = (long *)*plVar11;
                  if (plVar11 != (long *)0x0) {
                    (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
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
LAB_08a2f274:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


