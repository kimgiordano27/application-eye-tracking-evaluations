/*
FUNCTION_NAME: FUN_05f3a2d4
ENTRY_POINT: 05f3a2d4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05f3b3d0) */
/* WARNING: Removing unreachable block (ram,0x05f3b1b0) */
/* WARNING: Removing unreachable block (ram,0x05f3b3e0) */
/* WARNING: Removing unreachable block (ram,0x05f3af24) */
/* WARNING: Removing unreachable block (ram,0x05f3b2d0) */

void FUN_05f3a2d4(undefined8 param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  char cVar22;
  int iStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  long lStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_6c [4];
  undefined8 uStack_68;
  
  puVar2 = PTR_DAT_06ab5e18;
  uStack_68 = param_1;
  if ((bRam0000000006e9456a & 1) == 0) {
    FUN_02e3ca1c(System_SerializableAttribute_var);
    FUN_02e3ca1c(PTR_DAT_06a6e600);
    FUN_02e3ca1c(PTR_DAT_06aadea8);
    FUN_02e3ca1c(PTR_DAT_06a723b0);
    FUN_02e3ca1c(PTR_DAT_06a2ed98);
    FUN_02e3ca1c(VContainer_Unity_VContainerStartup_var);
    FUN_02e3ca1c(VContainer_Unity_VContainerUpdate_var);
    FUN_02e3ca1c(UnityEngine_VFX_VFXBatchedEffectInfo_var);
    FUN_02e3ca1c(UnityEngine_VFX_VFXEventAttribute_var);
    FUN_02e3ca1c(System_Runtime_Remoting_Contexts_Context_var);
    FUN_02e3ca1c(UnityEngine_UIElements_UxmlRootElementFactory_var);
    FUN_02e3ca1c(PTR_DAT_06a2ed80);
    FUN_02e3ca1c(PTR_DAT_06ab5e18);
    FUN_02e3ca1c(PTR_DAT_06ab16d8);
    FUN_02e3ca1c(PTR_DAT_06a2f488);
    FUN_02e3ca1c(PTR_DAT_06a6e658);
    FUN_02e3ca1c(Newtonsoft_Json_Utilities_CollectionWrapper<T>_var);
    FUN_02e3ca1c(UnityEditor_Analytics_AssetExportAnalytic_var);
    FUN_02e3ca1c(PTR_DAT_06aad9d8);
    FUN_02e3ca1c(PTR_DAT_06a33ad0);
    FUN_02e3ca1c(UnityEngine_VFX_VFXOutputEventArgs_var);
    FUN_02e3ca1c(UnityEngine_VFX_VFXSpawnerState_var);
    FUN_02e3ca1c(UnityEngine_Analytics_VRDeviceActiveControllersAnalytic_var);
    FUN_02e3ca1c(Unity_Services_CloudCode_Internal_Models_ValidationErrorResponse_var);
    FUN_02e3ca1c(Unity_Services_CloudSave_Internal_Models_ValidationErrorResponse_var);
    FUN_02e3ca1c(Unity_Services_Economy_Internal_Models_ValidationErrorResponse_var);
    FUN_02e3ca1c(Unity_Services_Leaderboards_Internal_Models_ValidationErrorResponse_var);
    FUN_02e3ca1c(System_Runtime_CompilerServices_ValueTaskAwaiter_var);
    FUN_02e3ca1c(MemoryPack_Formatters_ValueTupleFormatter<T1>_var);
    FUN_02e3ca1c(MemoryPack_Formatters_ValueTupleFormatter<T1,_T2>_var);
    bRam0000000006e9456a = 1;
  }
  auStack_6c[0] = 0;
  lStack_80 = 0;
  lStack_78 = 0;
  plStack_a8 = (long *)0x0;
  plStack_98 = (long *)0x0;
  lStack_a0 = 0;
  plStack_88 = (long *)0x0;
  uStack_90 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_c8 = 0;
  uVar11 = FUN_03a21438(2,*(undefined8 *)puVar2);
  FUN_05dc67fc(auStack_6c,uVar11,0);
  lStack_d8 = 0;
  puStack_d0 = auStack_6c;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  FUN_038ad044(param_2,&lStack_78,*(undefined8 *)PTR_DAT_06a723b0);
  lVar13 = lStack_78;
  if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar12 = FUN_06267b6c(lVar13,0,0);
  lVar13 = lStack_78;
  puVar2 = PTR_DAT_06a6e658;
  if ((uVar12 & 1) != 0) {
    if (lStack_78 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    if (*(int *)(lStack_78 + 0x2c) == 1) goto LAB_05f3b388;
  }
  if (*(int *)(*(long *)PTR_DAT_06a6e658 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  lVar13 = FUN_05f3c098(param_2,lVar13);
  if ((lVar13 == 0) || (bVar6 = FUN_05ec2250(lVar13,0,0), (bVar6 & lStack_78 != 0) != 1)) {
    lVar14 = 0;
  }
  else {
    lVar14 = FUN_05f26b84(lStack_78,0);
  }
  lVar15 = lStack_78;
  if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  uVar12 = FUN_06267b6c(lVar15,0,0);
  if ((uVar12 & 1) == 0) {
    bVar4 = false;
  }
  else {
    if (lStack_78 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    bVar4 = *(char *)(lStack_78 + 0x4c) != '\0';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  bVar6 = FUN_05f404d8();
  lVar15 = FUN_05f39ffc();
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  if (*(long *)(lVar15 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  if (lVar14 == 0) {
LAB_05f3ab74:
    iStack_110 = -1;
  }
  else {
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    plVar16 = (long *)Oculus_Platform_RosterOptions__AddSuggestedUser(lVar13,0);
    lVar15 = *(long *)puVar2;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar15 = *(long *)puVar2;
    }
    **(undefined1 **)(lVar15 + 0xb8) = 0;
    puVar1 = PTR_DAT_06a2f000;
    if (*(int *)(lVar14 + 0x18) < 1) goto LAB_05f3ab74;
    bVar5 = false;
    iVar10 = 0;
    iStack_110 = -1;
    do {
      lVar15 = FUN_03f2b33c(lVar14,iVar10,
                            *(undefined8 *)UnityEngine_UIElements_UxmlRootElementFactory_var);
      if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar12 = FUN_062696b0(lVar15,0,0);
      if ((uVar12 & 1) == 0) {
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        uVar12 = FUN_062645f8(lVar15,0);
        if ((uVar12 & 1) != 0) {
          FUN_038ad044(lVar15,&lStack_80,*(undefined8 *)PTR_DAT_06a723b0);
          lVar19 = lStack_80;
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          plVar17 = (long *)FUN_05f3c098(lVar15,lVar19);
          if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          plVar18 = (long *)Oculus_Platform_RosterOptions__AddSuggestedUser(plVar17,0);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          uVar12 = FUN_0561eba0(plVar18,plVar16,0);
          if ((uVar12 & 1) == 0) {
            uVar9 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
            lVar19 = lStack_80;
            if ((uVar9 >> 1 & 1) == 0) {
              lVar19 = FUN_02e3cb08(*(undefined8 *)PTR_DAT_06a2f488,5);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              if (*(int *)(lVar19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3cccc();
              }
              *(undefined8 *)(lVar19 + 0x20) =
                   *(undefined8 *)Unity_Services_Economy_Internal_Models_ValidationErrorResponse_var
              ;
              thunk_FUN_02ee2be8();
              uVar11 = thunk_FUN_0626d4fc(lVar15,0);
              if ((*(uint *)(lVar19 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3cccc();
              }
              *(undefined8 *)(lVar19 + 0x28) = uVar11;
              thunk_FUN_02ee2be8();
              if (*(uint *)(lVar19 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3cccc();
              }
              *(undefined8 *)(lVar19 + 0x30) =
                   *(undefined8 *)
                    Unity_Services_CloudCode_Internal_Models_ValidationErrorResponse_var;
              thunk_FUN_02ee2be8();
              plVar17 = (long *)Oculus_Platform_RosterOptions__AddSuggestedUser(lVar13,0);
              if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              uVar11 = (**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
              if ((*(uint *)(lVar19 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3cccc();
              }
              *(undefined8 *)(lVar19 + 0x38) = uVar11;
              thunk_FUN_02ee2be8();
              if (*(uint *)(lVar19 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3cccc();
              }
              *(undefined8 *)(lVar19 + 0x40) =
                   *(undefined8 *)MemoryPack_Formatters_ValueTupleFormatter<T1>_var;
              thunk_FUN_02ee2be8();
              uVar11 = FUN_0548dc0c(lVar19,0);
              if (*(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              FUN_06222224(uVar11,0);
            }
            else {
              if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              uVar12 = FUN_062696b0(lVar19,0,0);
              if ((uVar12 & 1) == 0) {
                if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02e3ccc4();
                }
                if (*(int *)(lStack_80 + 0x2c) == 1) {
                  lVar15 = *(long *)puVar2;
                  if (*(int *)(lVar15 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                    lVar15 = *(long *)puVar2;
                  }
                  bVar8 = **(byte **)(lVar15 + 0xb8);
                  bVar7 = FUN_05f405b8();
                  **(byte **)(*(long *)puVar2 + 0xb8) = bVar8 | bVar7 & 1;
                  if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02e3ccc4();
                  }
                  bVar4 = (bool)(bVar4 | *(char *)(lStack_80 + 0x4c) != '\0');
                  iStack_110 = iVar10;
                  goto LAB_05f3ab4c;
                }
              }
              uVar11 = thunk_FUN_0626d4fc(lVar15,0);
              if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              lStack_f8 = CONCAT44(lStack_f8._4_4_,*(undefined4 *)(lStack_80 + 0x2c));
              uVar21 = thunk_FUN_02e786f0(*(undefined8 *)System_SerializableAttribute_var,&lStack_f8
                                         );
              uVar21 = FUN_054838b8(*(undefined8 *)
                                     System_Runtime_CompilerServices_ValueTaskAwaiter_var,uVar21,0);
              uVar11 = FUN_0548db04(*(undefined8 *)
                                     UnityEngine_Analytics_VRDeviceActiveControllersAnalytic_var,
                                    uVar11,*(undefined8 *)PTR_DAT_06a33ad0,uVar21,0);
              if (*(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              FUN_06222224(uVar11,0);
            }
          }
          else {
            lVar19 = FUN_02e3cb08(*(undefined8 *)PTR_DAT_06a2f488,9);
            if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            if (*(int *)(lVar19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3cccc();
            }
            *(undefined8 *)(lVar19 + 0x20) = *(undefined8 *)UnityEngine_VFX_VFXOutputEventArgs_var;
            thunk_FUN_02ee2be8();
            uVar11 = thunk_FUN_0626d4fc(lVar15,0);
            if ((*(uint *)(lVar19 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3cccc();
            }
            *(undefined8 *)(lVar19 + 0x28) = uVar11;
            thunk_FUN_02ee2be8();
            if (*(uint *)(lVar19 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3cccc();
            }
            *(undefined8 *)(lVar19 + 0x30) =
                 *(undefined8 *)MemoryPack_Formatters_ValueTupleFormatter<T1,_T2>_var;
            thunk_FUN_02ee2be8();
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            uVar11 = (**(code **)(*plVar18 + 0x1b8))(plVar18,*(undefined8 *)(*plVar18 + 0x1c0));
            if ((*(uint *)(lVar19 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3cccc();
            }
            *(undefined8 *)(lVar19 + 0x38) = uVar11;
            thunk_FUN_02ee2be8();
            if (*(uint *)(lVar19 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3cccc();
            }
            *(undefined8 *)(lVar19 + 0x40) = *(undefined8 *)UnityEngine_VFX_VFXSpawnerState_var;
            thunk_FUN_02ee2be8();
            uVar11 = thunk_FUN_0626d4fc(param_2,0);
            if (*(uint *)(lVar19 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3cccc();
            }
            *(undefined8 *)(lVar19 + 0x48) = uVar11;
            thunk_FUN_02ee2be8();
            if (*(uint *)(lVar19 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3cccc();
            }
            *(undefined8 *)(lVar19 + 0x50) =
                 *(undefined8 *)
                  Unity_Services_Leaderboards_Internal_Models_ValidationErrorResponse_var;
            thunk_FUN_02ee2be8();
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3ccc4();
            }
            uVar11 = (**(code **)(*plVar16 + 0x1b8))(plVar16,*(undefined8 *)(*plVar16 + 0x1c0));
            if ((*(uint *)(lVar19 + 0x18) & 0xfffffff8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3cccc();
            }
            *(undefined8 *)(lVar19 + 0x58) = uVar11;
            thunk_FUN_02ee2be8();
            if (*(uint *)(lVar19 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
              FUN_02e3cccc();
            }
            *(undefined8 *)(lVar19 + 0x60) =
                 *(undefined8 *)Unity_Services_CloudSave_Internal_Models_ValidationErrorResponse_var
            ;
            thunk_FUN_02ee2be8();
            uVar11 = FUN_0548dc0c(lVar19,0);
            if (*(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            FUN_06222224(uVar11,0);
          }
        }
      }
      else {
        bVar5 = true;
      }
LAB_05f3ab4c:
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(lVar14 + 0x18));
    if (bVar5) {
      if (lStack_78 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      FUN_05f26ff4(lStack_78,0);
    }
  }
  if (lStack_78 == 0) {
    bVar5 = true;
  }
  else {
    bVar5 = *(char *)(lStack_78 + 0x5b) != '\0';
  }
  if (*(int *)(*(long *)PTR_DAT_06aad9d8 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  lVar15 = FUN_05da5dbc(0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  FUN_05da037c(lVar15,param_2,bVar5,0);
  if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  FUN_03e39348(&lStack_f8,*(long *)(lVar15 + 0x10),
               *(undefined8 *)UnityEngine_VFX_VFXEventAttribute_var);
  bVar5 = false;
  plStack_98 = plStack_f0;
  lStack_a0 = lStack_f8;
  plStack_88 = plStack_e0;
  uStack_90 = uStack_e8;
  lStack_f8 = 0;
  plStack_f0 = &lStack_a0;
  while (uVar12 = FUN_04f9f934(&lStack_a0,*(undefined8 *)VContainer_Unity_VContainerUpdate_var),
        plVar16 = plStack_88, (uVar12 & 1) != 0) {
    plStack_a8 = plStack_88;
    if (plStack_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    bVar8 = *(byte *)(*(long *)Newtonsoft_Json_Utilities_CollectionWrapper<T>_var + 0x130);
    if (*(byte *)(*plStack_88 + 0x130) < bVar8) {
      plVar17 = (long *)0x0;
    }
    else {
      plVar17 = plStack_88;
      if (*(long *)(*(long *)(*plStack_88 + 200) + (ulong)bVar8 * 8 + -8) !=
          *(long *)Newtonsoft_Json_Utilities_CollectionWrapper<T>_var) {
        plVar17 = (long *)0x0;
      }
    }
    uVar12 = FUN_05d9fec0(plStack_88,0);
    if ((uVar12 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_05f40684(param_2,plVar16);
      if (*(int *)(*(long *)PTR_DAT_06aad9d8 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar12 = FUN_05da5d58(0);
      FUN_0623036c(uVar12,uVar12 & 0xffffffff,0);
      bVar5 = true;
    }
    uVar11 = uStack_68;
    uStack_108 = 0;
    puStack_100 = (undefined8 *)0x0;
    FUN_05f3b728(&uStack_108,uStack_68,param_2);
    lVar19 = lStack_78;
    uStack_c0 = uStack_108;
    uStack_108 = 0;
    uStack_b8 = puStack_100;
    puStack_100 = &uStack_c0;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    FUN_05f3b838(param_2,lVar19);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar19 = FUN_05f3c180(*(undefined8 *)(lVar13 + 0x138),param_2,lStack_78,0);
    uVar12 = FUN_05d9fec0(plVar16,0);
    if ((uVar12 & 1) != 0) {
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      *(long **)(lVar19 + 0x1a0) = plVar16;
      thunk_FUN_02ee2be8(lVar19 + 0x1a0,plVar16);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_05f40808(lVar19,&plStack_a8);
      FUN_05da0c30(lVar15,plVar16,param_2,0);
      if (*(int *)(*(long *)UnityEditor_Analytics_AssetExportAnalytic_var + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_05f40ba0(param_2,plVar17);
    }
    lVar20 = lStack_78;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    FUN_05f3c6ec(param_2,lVar20,iStack_110 == -1,param_3 & 1,lVar19);
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    *(byte *)(lVar19 + 0x192) = **(byte **)(*(long *)puVar2 + 0xb8) | *(byte *)(lVar19 + 0x192);
    uVar12 = FUN_05d9fec0(plVar16,0);
    bVar8 = bVar6;
    if ((uVar12 & 1) != 0) {
      bVar8 = FUN_05da400c(plVar16,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    lVar20 = FUN_05f39ffc();
    if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    if ((bVar8 & *(char *)(lVar20 + 0x55) != '\0') == 0) {
LAB_05f3aec0:
      cVar22 = '\0';
    }
    else {
      uVar21 = FUN_06220e0c(param_2,0);
      if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      uVar12 = FUN_062696b0(uVar21,0,0);
      if (((uVar12 & 1) == 0) ||
         ((iVar10 = FUN_06220348(param_2,0), iVar10 != 1 &&
          (iVar10 = FUN_06220348(param_2,0), iVar10 != 8)))) goto LAB_05f3aec0;
      cVar22 = *(char *)(lVar19 + 0x18e);
    }
    lVar20 = *(long *)puVar2;
    *(bool *)(lVar19 + 0x1ad) = bVar4;
    *(bool *)(lVar19 + 0x195) = cVar22 != '\0';
    if (*(int *)(lVar20 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    FUN_05f3cef8(uVar11,lVar19);
    if (*(int *)(*(long *)PTR_DAT_06a6e600 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    FUN_05f4321c(puStack_100);
    if (plStack_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    uVar12 = FUN_05d9fec0(plStack_a8,0);
    if ((uVar12 & 1) != 0) {
      if (*(int *)(*(long *)UnityEditor_Analytics_AssetExportAnalytic_var + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
      }
      FUN_05f40c70(param_2,plVar17);
    }
    if (iStack_110 != -1) {
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      if (0 < *(int *)(lVar14 + 0x18)) {
        iVar10 = 0;
        do {
          lVar19 = FUN_03f2b33c(lVar14,iVar10,
                                *(undefined8 *)UnityEngine_UIElements_UxmlRootElementFactory_var);
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02e3ccc4();
          }
          uVar12 = FUN_062645f8(lVar19,0);
          if ((uVar12 & 1) != 0) {
            FUN_038ad044(lVar19,&lStack_c8,*(undefined8 *)PTR_DAT_06a723b0);
            lVar20 = lStack_c8;
            if (*(int *)(*(long *)PTR_DAT_06a2ed80 + 0xe4) == 0) {
              thunk_FUN_02e9a04c();
            }
            uVar12 = FUN_06267b6c(lVar20,0,0);
            lVar20 = lStack_c8;
            if ((uVar12 & 1) != 0) {
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              lVar20 = FUN_05f3c098(lVar19,lVar20);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              lVar20 = FUN_05f3c180(*(undefined8 *)(lVar20 + 0x138),param_2,lStack_78,0);
              plVar16 = plStack_a8;
              if (plStack_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              uVar12 = FUN_05d9fec0(plStack_a8,0);
              if ((uVar12 & 1) != 0) {
                if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02e3ccc4();
                }
                *(long **)(lVar20 + 0x1a0) = plVar16;
                thunk_FUN_02ee2be8(lVar20 + 0x1a0,plVar16);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_02e9a04c();
                }
                FUN_05f40808(lVar20,&plStack_a8);
              }
              lVar3 = lStack_c8;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              FUN_05f3c6ec(lVar19,lVar3,0,param_3 & 1,lVar20);
              if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              *(long *)(lVar20 + 0xd8) = lVar19;
              thunk_FUN_02ee2be8((long *)(lVar20 + 0xd8),lVar19);
              *(long *)(lVar20 + 0x230) = param_2;
              thunk_FUN_02ee2be8(lVar20 + 0x230,param_2);
              if (lStack_c8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02e3ccc4();
              }
              uVar11 = FUN_05f26a70(lStack_c8,0);
              FUN_05f40684(uVar11,plVar16);
              uVar11 = uStack_68;
              uStack_108 = 0;
              puStack_100 = (undefined8 *)0x0;
              FUN_05f3b728(&uStack_108,uStack_68,lVar19);
              lVar3 = lStack_c8;
              uStack_c0 = uStack_108;
              uStack_108 = 0;
              uStack_b8 = puStack_100;
              puStack_100 = &uStack_c0;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              FUN_05f3b838(lVar19,lVar3);
              FUN_05f3c6ec(lVar19,lStack_c8,iStack_110 == iVar10,param_3 & 1,lVar20);
              *(bool *)(lVar20 + 0x1ad) = bVar4;
              *(bool *)(lVar20 + 0x195) = cVar22 != '\0';
              FUN_05da0c30(lVar15,*(undefined8 *)(lVar20 + 0x1a0),lVar19,0);
              FUN_05f3cef8(uVar11,lVar20);
              if (*(int *)(*(long *)PTR_DAT_06a6e600 + 0xe4) == 0) {
                thunk_FUN_02e9a04c();
              }
              FUN_05f4321c(puStack_100);
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(lVar14 + 0x18));
      }
    }
  }
  FUN_04f9f930(plStack_f0,*(undefined8 *)VContainer_Unity_VContainerStartup_var);
  if (lStack_f8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccbc();
  }
  if (bVar5) {
    if (*(int *)(*(long *)PTR_DAT_06aadea8 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar11 = FUN_05dae0e0(0);
    if (*(int *)(*(long *)PTR_DAT_06aad9d8 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    FUN_05da5ef8(uVar11,param_2,0);
    if (*(int *)(*(long *)PTR_DAT_06ab16d8 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    FUN_062a20bc(&uStack_68,uVar11,0);
    FUN_062a1f6c(&uStack_68,0);
    FUN_05dae220(uVar11,0);
  }
  if (*(int *)(*(long *)PTR_DAT_06aad9d8 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_05da5e20(0);
LAB_05f3b388:
  lVar13 = lStack_d8;
  FUN_05dc6808(puStack_d0,0);
  if (lVar13 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccbc(lVar13);
}


