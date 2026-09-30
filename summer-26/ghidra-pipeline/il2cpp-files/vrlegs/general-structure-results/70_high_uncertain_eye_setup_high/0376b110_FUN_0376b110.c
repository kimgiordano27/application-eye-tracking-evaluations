/*
FUNCTION_NAME: FUN_0376b110
ENTRY_POINT: 0376b110
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0376b9ec) */
/* WARNING: Removing unreachable block (ram,0x0376b834) */

long FUN_0376b110(long *param_1,long *param_2,int *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  int iVar16;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined1 *local_90;
  long *plStack_88;
  undefined1 local_7c [4];
  undefined8 local_78;
  char local_6c [4];
  long local_68;
  
  puVar2 = PTR_DAT_03cc5248;
  puVar1 = PTR_DAT_03cbe5e8;
  if ((DAT_041371ef & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc5208);
    FUN_01ab69ac(PTR_DAT_03cc5218);
    FUN_01ab69ac(PTR_DAT_03cd74d0);
    FUN_01ab69ac(PTR_DAT_03cc5238);
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<GameObject,_AsyncOperationHandle<GameObject>>_Add__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<GameObject,_AsyncOperationHandle<GameObject>>_Remove__
                );
    FUN_01ab69ac(PTR_DAT_03cc5240);
    FUN_01ab69ac(PTR_DAT_03cc5248);
    FUN_01ab69ac(PTR_DAT_03cc5250);
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<GameObject,_AsyncOperationHandle<GameObject>>_TryGetValue__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>__ctor__
                );
    FUN_01ab69ac(PTR_DAT_03cc5260);
    FUN_01ab69ac(PTR_DAT_03cc5270);
    FUN_01ab69ac(PTR_DAT_03cd72d0);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    FUN_01ab69ac(PTR_DAT_03cc5280);
    FUN_01ab69ac(PTR_DAT_03cc5288);
    FUN_01ab69ac(PTR_DAT_03cd7f80);
    FUN_01ab69ac(PTR_DAT_03cdfce0);
    FUN_01ab69ac(PTR_DAT_03cdfce8);
    FUN_01ab69ac(PTR_DAT_03cdad90);
    FUN_01ab69ac(PTR_DAT_03cda658);
    FUN_01ab69ac(PTR_DAT_03cdfcf8);
    FUN_01ab69ac(PTR_DAT_03cdfd00);
    FUN_01ab69ac(PTR_DAT_03cdfd10);
    FUN_01ab69ac(PTR_DAT_03cc4138);
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_Add__
                );
    FUN_01ab69ac(PTR_DAT_03cdfd28);
    FUN_01ab69ac(PTR_DAT_03cdfd30);
    FUN_01ab69ac(PTR_DAT_03cdfd38);
    FUN_01ab69ac(PTR_DAT_03cdfd40);
    FUN_01ab69ac(PTR_DAT_03cc52d8);
    FUN_01ab69ac(PTR_DAT_03cc3930);
    DAT_041371ef = 1;
  }
  local_68 = 0;
  local_6c[0] = '\0';
  local_78 = 0;
  local_7c[0] = 0;
  uVar15 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar15 = FUN_0277b678(uVar15,0);
  uVar8 = FUN_02786d28(param_1,uVar15,0);
  plVar12 = (long *)PTR_DAT_03cdfce8;
  if ((uVar8 & 1) == 0) {
    uVar15 = *(undefined8 *)PTR_DAT_03cc5288;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar15 = FUN_0277b678(uVar15,0);
    uVar8 = FUN_02786d28(param_1,uVar15,0);
    plVar12 = (long *)PTR_DAT_03cdfd38;
    if ((uVar8 & 1) == 0) {
      uVar15 = *(undefined8 *)PTR_DAT_03cc5240;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar15 = FUN_0277b678(uVar15,0);
      uVar8 = FUN_02786d28(param_1,uVar15,0);
      plVar12 = (long *)PTR_DAT_03cdad90;
      if ((uVar8 & 1) == 0) {
        uVar15 = *(undefined8 *)PTR_DAT_03cc5280;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar15 = FUN_0277b678(uVar15,0);
        uVar8 = FUN_02786d28(param_1,uVar15,0);
        plVar12 = (long *)PTR_DAT_03cdfcf8;
        if ((uVar8 & 1) == 0) {
          uVar15 = *(undefined8 *)PTR_DAT_03cc5218;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          uVar15 = FUN_0277b678(uVar15,0);
          uVar8 = FUN_02786d28(param_1,uVar15,0);
          plVar12 = (long *)PTR_DAT_03cdfd30;
          if ((uVar8 & 1) == 0) {
            uVar15 = *(undefined8 *)PTR_DAT_03cd74d0;
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar15 = FUN_0277b678(uVar15,0);
            uVar8 = FUN_02786d28(param_1,uVar15,0);
            plVar12 = (long *)PTR_DAT_03cdfd00;
            if ((uVar8 & 1) == 0) {
              uVar15 = *(undefined8 *)PTR_DAT_03cc5208;
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar15 = FUN_0277b678(uVar15,0);
              uVar8 = FUN_02786d28(param_1,uVar15,0);
              plVar12 = (long *)PTR_DAT_03cdfd10;
              if ((uVar8 & 1) == 0) {
                uVar15 = *(undefined8 *)PTR_DAT_03cc5250;
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01a58e78();
                }
                uVar15 = FUN_0277b678(uVar15,0);
                uVar8 = FUN_02786d28(param_1,uVar15,0);
                plVar12 = (long *)PTR_DAT_03cdfd28;
                if ((uVar8 & 1) == 0) {
                  uVar15 = *(undefined8 *)PTR_DAT_03cd7f80;
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar15 = FUN_0277b678(uVar15,0);
                  uVar8 = FUN_02786d28(param_1,uVar15,0);
                  plVar12 = (long *)PTR_DAT_03cdfd40;
                  if ((uVar8 & 1) == 0) {
                    uVar15 = *(undefined8 *)PTR_DAT_03cc5260;
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01a58e78();
                    }
                    uVar15 = FUN_0277b678(uVar15,0);
                    uVar8 = FUN_02786d28(param_1,uVar15,0);
                    plVar12 = (long *)PTR_DAT_03cc52d8;
                    if ((uVar8 & 1) == 0) {
                      uVar15 = *(undefined8 *)PTR_DAT_03cc5238;
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_01a58e78();
                      }
                      uVar15 = FUN_0277b678(uVar15,0);
                      uVar8 = FUN_02786d28(param_1,uVar15,0);
                      plVar12 = (long *)PTR_DAT_03cdfce0;
                      if ((uVar8 & 1) == 0) {
                        uVar15 = *(undefined8 *)PTR_DAT_03cc5270;
                        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                          thunk_FUN_01a58e78();
                        }
                        uVar15 = FUN_0277b678(uVar15,0);
                        uVar8 = FUN_02786d28(param_1,uVar15,0);
                        plVar12 = (long *)PTR_DAT_03cda658;
                        if ((uVar8 & 1) == 0) {
                          if (param_1 != (long *)0x0) {
                            lVar9 = (**(code **)(*param_1 + 0x208))
                                              (param_1,*(undefined8 *)(*param_1 + 0x210));
                            uVar8 = (**(code **)(*param_1 + 0x498))
                                              (param_1,*(undefined8 *)(*param_1 + 0x4a0));
                            if ((uVar8 & 1) != 0) {
                              return lVar9;
                            }
                            uVar8 = FUN_02787e28(param_1,0);
                            if ((uVar8 & 1) != 0) {
                              uVar15 = (**(code **)(*param_1 + 0x218))
                                                 (param_1,*(undefined8 *)(*param_1 + 0x220));
                              if (*(int *)(*(long *)PTR_DAT_03cd72d0 + 0xe0) == 0) {
                                thunk_FUN_01a58e78(*(long *)PTR_DAT_03cd72d0);
                              }
                              uVar15 = FUN_0376b110(uVar15,param_2,param_3);
                              lVar9 = FUN_025bdc88(uVar15,*(undefined8 *)PTR_DAT_03cc3930,lVar9,0);
                            }
                            uVar8 = (**(code **)(*param_1 + 0x4c8))
                                              (param_1,*(undefined8 *)(*param_1 + 0x4d0));
                            if ((uVar8 & 1) == 0) {
                              return lVar9;
                            }
                            if (lVar9 != 0) {
                              iVar5 = FUN_025c2f58(lVar9,0x60,0);
                              lVar10 = (**(code **)(*param_1 + 0x578))
                                                 (param_1,*(undefined8 *)(*param_1 + 0x580));
                              if (lVar10 != 0) {
                                if (iVar5 < 0) {
                                  iVar6 = *(int *)(lVar10 + 0x18);
                                }
                                else {
                                  uVar15 = FUN_025c262c(lVar9,iVar5 + 1,0);
                                  iVar6 = FUN_02767c6c(uVar15,0);
                                  lVar9 = FUN_025bfca8(lVar9,iVar5,0);
                                }
                                puVar1 = PTR_DAT_03cd72d0;
                                local_68 = 0;
                                lVar10 = *(long *)PTR_DAT_03cd72d0;
                                if (*(int *)(lVar10 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar10 = *(long *)puVar1;
                                }
                                uVar15 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x20);
                                local_6c[0] = '\0';
                                FUN_027e0bd8(uVar15,local_6c,0);
                                lVar10 = *(long *)puVar1;
                                if (*(int *)(lVar10 + 0xe0) == 0) {
                                  thunk_FUN_01a58e78();
                                  lVar10 = *(long *)puVar1;
                                }
                                lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x18);
                                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_01ab6c3c();
                                }
                                local_68 = FUN_0224917c(lVar10,*(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Dictionary<GameObject,_AsyncOperationHandle<GameObject>>_TryGetValue__
                                                  );
                                if (local_6c[0] != '\0') {
                                  OVRManager_<>c__<InitOVRManager>b__424_0(uVar15,0);
                                }
                                puVar4 = 
                                Method_System_Collections_Generic_Dictionary<GameObject,_AsyncOperationHandle<GameObject>>_Remove__
                                ;
                                puVar3 = 
                                Method_System_Collections_Generic_Dictionary<GameObject,_AsyncOperationHandle<GameObject>>_Add__
                                ;
                                puVar2 = PTR_DAT_03cc4138;
                                puStack_98 = &local_78;
                                local_90 = local_7c;
                                plStack_88 = &local_68;
                                local_a0 = 0;
                                if (0 < iVar6) {
                                  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_01ab6c3c();
                                  }
                                  iVar16 = *param_3;
                                  iVar5 = 0;
                                  do {
                                    lVar10 = *param_2;
                                    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
                                    if (uVar8 != 0) {
                                      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
                                          puVar11 = (undefined8 *)
                                                    (lVar10 + (long)*piVar14 * 0x10 + 0x138);
                                          goto LAB_0376b8c4;
                                        }
                                        uVar8 = uVar8 - 1;
                                        piVar14 = piVar14 + 4;
                                      } while (uVar8 != 0);
                                    }
                                    puVar11 = (undefined8 *)FUN_01a472ec(param_2,*(long *)puVar3,0);
LAB_0376b8c4:
                                    iVar7 = (*(code *)*puVar11)(param_2,puVar11[1]);
                                    if (iVar7 <= iVar16) break;
                                    if (iVar5 != 0) {
                                      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_01ab6c3c();
                                      }
                                      FUN_025ce690(local_68,*(undefined8 *)puVar2,0);
                                    }
                                    lVar10 = local_68;
                                    lVar13 = *param_2;
                                    iVar16 = *param_3;
                                    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
                                    if (uVar8 != 0) {
                                      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
                                          puVar11 = (undefined8 *)
                                                    (lVar13 + (long)*piVar14 * 0x10 + 0x138);
                                          goto LAB_0376b944;
                                        }
                                        uVar8 = uVar8 - 1;
                                        piVar14 = piVar14 + 4;
                                      } while (uVar8 != 0);
                                    }
                                    puVar11 = (undefined8 *)FUN_01a472ec(param_2,*(long *)puVar4,0);
LAB_0376b944:
                                    uVar15 = (*(code *)*puVar11)(param_2,iVar16,puVar11[1]);
                                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                                      thunk_FUN_01a58e78();
                                    }
                                    uVar15 = FUN_0376aff8(uVar15);
                                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_01ab6c3c(uVar15,uVar15);
                                    }
                                    FUN_025ce690(lVar10,uVar15,0);
                                    iVar5 = iVar5 + 1;
                                    iVar16 = *param_3 + 1;
                                    *param_3 = iVar16;
                                  } while (iVar5 != iVar6);
                                }
                                if (local_68 != 0) {
                                  iVar5 = FUN_025cee48(local_68,0);
                                  if (0 < iVar5) {
                                    lVar9 = FUN_025be86c(*(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_Add__
                                                  ,lVar9,local_68,0);
                                  }
                                  FUN_01a1bed0(&local_a0);
                                  return lVar9;
                                }
                    /* WARNING: Subroutine does not return */
                                FUN_01ab6c3c();
                              }
                            }
                          }
                    /* WARNING: Subroutine does not return */
                          FUN_01ab6c3c();
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
  return *plVar12;
}


