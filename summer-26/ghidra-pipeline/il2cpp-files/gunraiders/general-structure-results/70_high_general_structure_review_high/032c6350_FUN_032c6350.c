/*
FUNCTION_NAME: FUN_032c6350
ENTRY_POINT: 032c6350
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_032c6350(long param_1,long *param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  undefined2 local_9c [2];
  undefined8 local_98;
  undefined8 local_90;
  int local_84;
  double local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_58;
  uint uStack_54;
  
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<XmlDownloadManager_<GetNonFileStreamAsync>d__5>__
  ;
  if ((DAT_04532e83 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042303d0);
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                );
    FUN_01c5d288(UnityEngine_AddressableAssets_AddressablesImpl_<>c__DisplayClass72_0_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230a80);
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<XmlDownloadManager_<GetNonFileStreamAsync>d__5>__
                );
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_AwaitUnsafeOnCompleted<TaskAwaiter<SerializableProjectConfiguration>,_CorePackageInitializer_<GetSerializedConfigOrEmptyAsync>d__54>__
                );
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_Start<StreamingAssetsConfigurationLoader_<GetConfigAsync>d__2>__
                );
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_WebConnection_<InitConnection>d__19>__
                );
    FUN_01c5d288(Method_System_Collections_Generic_Dictionary<int,_float>_GetEnumerator__);
    DAT_04532e83 = 1;
  }
  local_98 = 0;
  local_90 = 0;
  local_58 = 0;
  uStack_54 = 0;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0.0;
  local_78 = 0;
  local_84 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar7 = FUN_032c9208(param_2,0);
  puVar3 = PTR_DAT_04230a80;
  uVar9 = uVar7 & 0xffff;
  local_9c[0] = (short)uVar7;
  if (uVar9 < 0x4c) {
    if (uVar9 < 0x2f) {
      uVar9 = uVar7 & 0xffff;
      if (uVar9 < 0x26) {
        if (uVar9 == 0x20) {
          if (*(char *)(param_3 + 0x12) != '\0') {
            return 1;
          }
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar11 = FUN_032c8e84(param_1,0x20,0);
          if ((uVar11 & 1) != 0) {
            return 1;
          }
          if (*(char *)(param_3 + 0x13) == '\0') goto LAB_032c6e10;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar11 = FUN_032c803c(param_2,0);
          if ((uVar11 & 1) == 0) goto LAB_032c6e10;
          if (*(int *)(*(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar11 = FUN_032c6350(param_1,param_2,param_3,param_4,param_5);
          goto joined_r0x032c6de4;
        }
        if (uVar9 == 0x22) goto LAB_032c6890;
        if (uVar9 == 0x25) {
          if ((int)param_2[2] < (int)(*(uint *)(param_2 + 1) - 1)) {
            uVar9 = (int)param_2[2] + 1;
            if (*(uint *)(param_2 + 1) <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_01c5d4ac();
            }
            lVar12 = *param_2;
            if (*(short *)(lVar12 + (long)(int)uVar9 * 2) != 0x25) {
              return 1;
            }
            goto LAB_032c6fbc;
          }
          goto LAB_032c6fb8;
        }
      }
      else {
        if (uVar9 == 0x27) {
LAB_032c6890:
          uVar13 = FUN_03164870(0x10,0);
          lVar12 = *param_2;
          lVar1 = param_2[1];
          lVar2 = param_2[2];
          if (*(int *)(*(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                              );
          }
          uVar11 = FUN_032c7490(lVar12,lVar1,(int)lVar2,uVar13,&uStack_54);
          if ((uVar11 & 1) == 0) {
            uVar10 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042303d0,local_9c);
            FUN_032c9dec(param_5,3,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_WebConnection_<InitConnection>d__19>__
                         ,uVar10,0);
            FUN_0316493c(uVar13,0);
            return 0;
          }
          *(uint *)(param_2 + 2) = (int)param_2[2] + uStack_54 + -1;
          lVar12 = FUN_031649bc(uVar13,0);
          if (lVar12 != 0) {
            if (0 < *(int *)(lVar12 + 0x10)) {
              iVar14 = 0;
              do {
                sVar6 = FUN_0314e438(lVar12,iVar14,0);
                if ((sVar6 == 0x20) && (*(char *)(param_3 + 0x12) != '\0')) {
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  FUN_032c925c(param_1,0);
                }
                else {
                  uVar8 = FUN_0314e438(lVar12,iVar14,0);
                  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8(*(long *)puVar4);
                  }
                  uVar11 = FUN_032c8e84(param_1,uVar8,0);
                  if ((uVar11 & 1) == 0) goto LAB_032c6e10;
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < *(int *)(lVar12 + 0x10));
            }
            uVar9 = *(uint *)(param_5 + 0x24);
            if ((uVar9 >> 0xb & 1) == 0) {
              return 1;
            }
            if ((uVar9 >> 0xd & 1) != 0) {
              uVar11 = thunk_FUN_03152714(lVar12,*(undefined8 *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_Start<StreamingAssetsConfigurationLoader_<GetConfigAsync>d__2>__
                                          ,0);
              uVar9 = *(uint *)(param_5 + 0x24);
              if ((uVar11 & 1) != 0) goto LAB_032c69f8;
            }
            if ((uVar9 >> 0xe & 1) == 0) {
              return 1;
            }
            uVar11 = thunk_FUN_03152714(lVar12,*(undefined8 *)
                                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_AwaitUnsafeOnCompleted<TaskAwaiter<SerializableProjectConfiguration>,_CorePackageInitializer_<GetSerializedConfigOrEmptyAsync>d__54>__
                                        ,0);
            if ((uVar11 & 1) == 0) {
              return 1;
            }
            uVar9 = *(uint *)(param_5 + 0x24);
LAB_032c69f8:
            *(uint *)(param_5 + 0x24) = uVar9 | 0x100;
            puVar4 = PTR_DAT_04230a80;
            lVar12 = *(long *)PTR_DAT_04230a80;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
              lVar12 = *(long *)puVar4;
            }
            *(undefined8 *)(param_5 + 0x28) = **(undefined8 **)(lVar12 + 0xb8);
            return 1;
          }
          goto LAB_032c7488;
        }
        if (uVar9 == 0x2e) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar11 = FUN_032c8e84(param_1,0x2e,0);
          if ((uVar11 & 1) != 0) {
            return 1;
          }
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar11 = FUN_032c803c(param_2,0);
          if ((uVar11 & 1) != 0) {
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar11 = FUN_032c8e84(param_2,0x46,0);
            if ((uVar11 & 1) != 0) {
              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              FUN_032c9050(param_2,0);
              return 1;
            }
          }
          goto LAB_032c6e10;
        }
      }
      goto switchD_032c6708_caseD_65;
    }
    uVar9 = uVar7 & 0xffff;
    if (0x3a < uVar9) {
      if (uVar9 == 0x46) goto switchD_032c6708_caseD_66;
      if (uVar9 == 0x48) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uStack_54 = FUN_032c9050(param_2,0);
        puVar4 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__;
        uVar8 = 1;
        if (1 < (int)uStack_54) {
          uVar8 = 2;
        }
        if (*(int *)(*(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar11 = FUN_032c4aa8(param_1,uVar8,&local_70);
        if ((uVar11 & 1) != 0) {
          uVar8 = (undefined4)local_70;
          param_3 = param_5 + 0xc;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar13 = 0x48;
          goto LAB_032c7430;
        }
        goto LAB_032c6e10;
      }
      if (uVar9 == 0x4b) {
                    /* try { // try from 032c678c to 033c679b has its CatchHandler @ 032c69a4 */
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar11 = FUN_032c8e84(param_1,0x5a,0);
        puVar3 = PTR_DAT_04230a80;
        if ((uVar11 & 1) == 0) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar11 = FUN_032c8e84(param_1,0x2b,0);
          if ((uVar11 & 1) == 0) {
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar11 = FUN_032c8e84(param_1,0x2d,0);
            if ((uVar11 & 1) == 0) {
              return 1;
            }
          }
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
          puVar4 = PTR_DAT_04230a80;
          if (*(int *)(*(long *)PTR_DAT_04230a80 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          local_98 = 0;
          if (*(int *)(*(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar11 = FUN_032c5104(param_1,3,&local_98);
          uVar13 = local_98;
          if ((uVar11 & 1) == 0) goto LAB_032c6e10;
          uVar9 = *(uint *)(param_5 + 0x24);
          if ((uVar9 >> 8 & 1) != 0) {
            uVar10 = *(undefined8 *)(param_5 + 0x28);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar11 = FUN_032e8e90(uVar13,uVar10,0);
            if ((uVar11 & 1) != 0) goto LAB_032c7204;
            uVar9 = *(uint *)(param_5 + 0x24);
            uVar13 = local_98;
          }
LAB_032c7458:
          uVar9 = uVar9 | 0x100;
          *(undefined8 *)(param_5 + 0x28) = uVar13;
        }
        else {
          uVar9 = *(uint *)(param_5 + 0x24);
          if ((uVar9 >> 8 & 1) != 0) {
            uVar13 = *(undefined8 *)(param_5 + 0x28);
            lVar12 = *(long *)PTR_DAT_04230a80;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
              lVar12 = *(long *)puVar3;
            }
            uVar11 = FUN_032e8e90(uVar13,**(undefined8 **)(lVar12 + 0xb8),0);
            if ((uVar11 & 1) != 0) {
LAB_032c7204:
              uVar13 = *(undefined8 *)PTR_DAT_042303d0;
              local_9c[0] = 0x4b;
LAB_032c7218:
              uVar13 = thunk_FUN_01c49334(uVar13,local_9c);
              FUN_032c9dec(param_5,3,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<int,_float>_GetEnumerator__
                           ,uVar13,0);
              return 0;
            }
            uVar9 = *(uint *)(param_5 + 0x24);
          }
          uVar9 = uVar9 | 0x300;
          *(undefined8 *)(param_5 + 0x28) = 0;
        }
        *(uint *)(param_5 + 0x24) = uVar9;
        return 1;
      }
      goto switchD_032c6708_caseD_65;
    }
    if (uVar9 == 0x2f) {
      if ((param_4 == 0) || (lVar12 = FUN_03273738(param_4,0), lVar12 == 0)) goto LAB_032c7488;
      if (*(int *)(lVar12 + 0x10) < 2) {
LAB_032c6b54:
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar11 = FUN_032c8e84(param_1,0x2f,0);
        if ((uVar11 & 1) != 0) {
          return 1;
        }
      }
      else {
        lVar12 = FUN_03273738(param_4,0);
        if (lVar12 == 0) goto LAB_032c7488;
        sVar6 = FUN_0314e438(lVar12,0,0);
        if (sVar6 != 0x2f) goto LAB_032c6b54;
      }
      uVar13 = FUN_03273738(param_4,0);
    }
    else {
      if (uVar9 != 0x3a) goto switchD_032c6708_caseD_65;
      if ((param_4 == 0) || (lVar12 = FUN_03273d74(param_4,0), lVar12 == 0)) goto LAB_032c7488;
      if (*(int *)(lVar12 + 0x10) < 2) {
LAB_032c6584:
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar11 = FUN_032c8e84(param_1,0x3a,0);
        if ((uVar11 & 1) != 0) {
          return 1;
        }
      }
      else {
        lVar12 = FUN_03273d74(param_4,0);
        if (lVar12 == 0) goto LAB_032c7488;
        sVar6 = FUN_0314e438(lVar12,0,0);
        if (sVar6 != 0x3a) goto LAB_032c6584;
      }
      uVar13 = FUN_03273d74(param_4,0);
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar4);
    }
LAB_032c6ddc:
    uVar11 = FUN_032c8d34(param_1,uVar13,0);
  }
  else if (uVar9 < 0x69) {
    uVar9 = uVar7 & 0xffff;
    if (uVar9 < 0x5b) {
      if (uVar9 == 0x4d) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar9 = FUN_032c9050(param_2,0);
        uStack_54 = uVar9;
        if ((int)uVar9 < 3) {
          if (*(int *)(*(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar11 = FUN_032c4aa8(param_1,uVar9,(long)&local_68 + 4);
          if ((uVar11 & 1) == 0) {
            if (*(char *)(param_3 + 0x14) == '\0') goto LAB_032c6e10;
            lVar12 = *(long *)(param_3 + 0x18);
            if (lVar12 == 0) goto LAB_032c7488;
            uVar11 = (**(code **)(lVar12 + 0x18))
                               (*(undefined8 *)(lVar12 + 0x40),param_1,uVar9,(long)&local_68 + 4,
                                *(undefined8 *)(lVar12 + 0x28));
            if ((uVar11 & 1) == 0) goto LAB_032c6e10;
          }
        }
        else {
          if (*(int *)(*(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                      + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          if (uVar9 == 3) {
            uVar11 = FUN_032c52cc();
          }
          else {
            uVar11 = FUN_032c54a8(param_1,param_4,(long)&local_68 + 4);
          }
          if ((uVar11 & 1) == 0) goto LAB_032c6e10;
          *(uint *)(param_5 + 0x24) = *(uint *)(param_5 + 0x24) | 0x400;
        }
        uVar8 = local_68._4_4_;
        param_3 = param_5 + 4;
        if (*(int *)(*(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar13 = 0x4d;
        goto LAB_032c7430;
      }
      if (uVar9 == 0x5a) {
        uVar9 = *(uint *)(param_5 + 0x24);
        if ((uVar9 >> 8 & 1) != 0) {
          uVar13 = *(undefined8 *)(param_5 + 0x28);
          lVar12 = *(long *)PTR_DAT_04230a80;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar12 = *(long *)puVar3;
          }
          uVar11 = FUN_032e8e90(uVar13,**(undefined8 **)(lVar12 + 0xb8),0);
          if ((uVar11 & 1) != 0) {
            uVar13 = *(undefined8 *)PTR_DAT_042303d0;
            local_9c[0] = 0x5a;
            goto LAB_032c7218;
          }
          uVar9 = *(uint *)(param_5 + 0x24);
        }
        *(undefined8 *)(param_5 + 0x28) = 0;
        *(uint *)(param_5 + 0x24) = uVar9 | 0x300;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        if (*(int *)(*(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar11 = FUN_032bf114(param_1);
        if ((uVar11 & 1) != 0) {
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
          return 1;
        }
        goto LAB_032c6e10;
      }
      goto switchD_032c6708_caseD_65;
    }
    switch(uVar9) {
    case 100:
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar9 = FUN_032c9050(param_2,0);
      puVar4 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__;
                    /* try { // try from 032c672c to 033c678b has its CatchHandler @ 032c672c
                       catch() { ... } // from try @ 032c672c with catch @ 032c672c
                       catch() { ... } // from try @ 032c68f0 with catch @ 032c672c
                       catch() { ... } // from try @ 032c6988 with catch @ 032c672c
                       catch() { ... } // from try @ 032c69f8 with catch @ 032c672c */
      uStack_54 = uVar9;
      if ((int)uVar9 < 3) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar11 = FUN_032c4aa8(param_1,uVar9,&local_68);
        if ((uVar11 & 1) == 0) {
          if (*(char *)(param_3 + 0x14) == '\0') goto LAB_032c6e10;
          lVar12 = *(long *)(param_3 + 0x18);
          if (lVar12 == 0) goto LAB_032c7488;
          uVar11 = (**(code **)(lVar12 + 0x18))
                             (*(undefined8 *)(lVar12 + 0x40),param_1,uVar9,&local_68,
                              *(undefined8 *)(lVar12 + 0x28));
          if ((uVar11 & 1) == 0) goto LAB_032c6e10;
        }
        lVar12 = *(long *)puVar4;
        uVar8 = (undefined4)local_68;
        param_3 = param_5;
      }
      else {
        if (*(int *)(*(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        if (uVar9 == 3) {
          uVar11 = Newtonsoft_Json_Converters_EntityKeyMemberConverter__ReadJson();
        }
        else {
          uVar11 = FUN_032c583c(param_1,param_4,(long)&local_70 + 4);
        }
        if ((uVar11 & 1) == 0) goto LAB_032c6e10;
        lVar12 = *(long *)puVar4;
        local_70._4_4_ = (undefined4)((ulong)local_70 >> 0x20);
        uVar8 = local_70._4_4_;
      }
      param_3 = param_3 + 8;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar13 = 100;
LAB_032c7430:
      uVar11 = FUN_032c5e24(param_3,uVar8,uVar13,param_5);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      return 1;
    case 0x65:
      goto switchD_032c6708_caseD_65;
    case 0x66:
switchD_032c6708_caseD_66:
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar9 = FUN_032c9050(param_2,0);
      uStack_54 = uVar9;
      if ((int)uVar9 < 8) {
        if (*(int *)(*(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar11 = FUN_032c4de4(param_1,uVar9,&local_80);
        if (((uVar7 & 0xffff) == 0x66) && ((uVar11 & 1) == 0)) goto LAB_032c6e10;
        if (*(double *)(param_5 + 0x18) < 0.0) {
          *(double *)(param_5 + 0x18) = local_80;
          return 1;
        }
        if (local_80 == *(double *)(param_5 + 0x18)) {
          return 1;
        }
        uVar13 = *(undefined8 *)PTR_DAT_042303d0;
        goto LAB_032c7218;
      }
      goto LAB_032c6e10;
    case 0x67:
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uStack_54 = FUN_032c9050(param_2,0);
      if (*(int *)(*(long *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                          );
      }
      uVar11 = FUN_032c59a0(param_1,param_4,param_5 + 0x20);
      break;
    case 0x68:
      uVar8 = 1;
      *(undefined1 *)(param_3 + 0x10) = 1;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uStack_54 = FUN_032c9050(param_2,0);
      puVar4 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__;
      if (1 < (int)uStack_54) {
        uVar8 = 2;
      }
      if (*(int *)(*(long *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                  + 0xe0) == 0) {
        thunk_FUN_01c1d1e8(*(long *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                          );
      }
      uVar11 = FUN_032c4aa8(param_1,uVar8,&local_70);
      if ((uVar11 & 1) != 0) {
        uVar8 = (undefined4)local_70;
        param_3 = param_5 + 0xc;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar13 = 0x68;
        goto LAB_032c7430;
      }
      goto LAB_032c6e10;
    default:
      if (uVar9 != 0x5c) goto switchD_032c6708_caseD_65;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar11 = FUN_032c803c(param_2,0);
      if ((uVar11 & 1) == 0) {
LAB_032c6fb8:
        lVar12 = *param_2;
LAB_032c6fbc:
        FUN_032c9d2c(param_5,lVar12,param_2[1],0);
        return 0;
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar7 = FUN_032c9208(param_2,0);
      goto LAB_032c6e04;
    }
  }
  else {
    uVar9 = uVar7 & 0xffff;
    if (uVar9 < 0x74) {
      if (uVar9 == 0x6d) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uStack_54 = FUN_032c9050(param_2,0);
        puVar4 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__;
        uVar8 = 1;
        if (1 < (int)uStack_54) {
          uVar8 = 2;
        }
        if (*(int *)(*(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar11 = FUN_032c4aa8(param_1,uVar8,(long)&local_78 + 4);
        if ((uVar11 & 1) != 0) {
          uVar8 = local_78._4_4_;
          param_3 = param_5 + 0x10;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar13 = 0x6d;
          goto LAB_032c7430;
        }
        goto LAB_032c6e10;
      }
      if (uVar9 == 0x73) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uStack_54 = FUN_032c9050(param_2,0);
        puVar4 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__;
        uVar8 = 1;
        if (1 < (int)uStack_54) {
          uVar8 = 2;
        }
        if (*(int *)(*(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar11 = FUN_032c4aa8(param_1,uVar8,&local_78);
        if ((uVar11 & 1) != 0) {
          uVar8 = (undefined4)local_78;
          param_3 = param_5 + 0x14;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar13 = 0x73;
          goto LAB_032c7430;
        }
        goto LAB_032c6e10;
      }
    }
    else {
      if (uVar9 == 0x74) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar9 = FUN_032c9050(param_2,0);
        uStack_54 = uVar9;
        if (*(int *)(*(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                            );
        }
        if (uVar9 == 1) {
          uVar11 = FUN_032c5cd4();
        }
        else {
          uVar11 = FUN_032c5b3c(param_1,param_4,&local_84);
        }
        if ((uVar11 & 1) == 0) goto LAB_032c6e10;
        if (*(int *)(param_3 + 0xc) == -1) {
          *(int *)(param_3 + 0xc) = local_84;
          return 1;
        }
        if (*(int *)(param_3 + 0xc) == local_84) {
          return 1;
        }
        uVar13 = *(undefined8 *)PTR_DAT_042303d0;
        local_9c[0] = 0x74;
        goto LAB_032c7218;
      }
      if (uVar9 == 0x7a) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar9 = FUN_032c9050(param_2,0);
        puVar4 = PTR_DAT_04230a80;
        uStack_54 = uVar9;
        if (*(int *)(*(long *)PTR_DAT_04230a80 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)PTR_DAT_04230a80);
        }
        local_90 = 0;
        if (*(int *)(*(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar11 = FUN_032c5104(param_1,uVar9,&local_90);
        uVar13 = local_90;
        if ((uVar11 & 1) == 0) goto LAB_032c6e10;
        uVar9 = *(uint *)(param_5 + 0x24);
        if ((uVar9 >> 8 & 1) != 0) {
          uVar10 = *(undefined8 *)(param_5 + 0x28);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          uVar11 = FUN_032e8e90(uVar13,uVar10,0);
          if ((uVar11 & 1) != 0) {
            uVar13 = *(undefined8 *)PTR_DAT_042303d0;
            local_9c[0] = 0x7a;
            goto LAB_032c7218;
          }
          uVar9 = *(uint *)(param_5 + 0x24);
          uVar13 = local_90;
        }
        goto LAB_032c7458;
      }
      if (uVar9 == 0x79) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar9 = FUN_032c9050(param_2,0);
        puVar4 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__;
        uStack_54 = uVar9;
        if (*(int *)(*(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                    + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                            );
        }
        uVar11 = FUN_032c7c24(param_1,param_4,0);
        if ((uVar11 & 1) == 0) {
          if (param_4 == 0) goto LAB_032c7488;
          uVar11 = Newtonsoft_Json_Utilities_DateTimeUtils__TryParseDateTimeOffset(param_4,0);
          if ((uVar11 & 1) == 0) {
            if ((int)uVar9 < 3) {
              *(undefined1 *)(param_3 + 0x11) = 1;
            }
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar11 = FUN_032c4aa8(param_1,uVar9,&local_58);
          }
          else {
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            uVar11 = FUN_032c4c40(param_1,1,4,&local_58);
          }
          if ((uVar11 & 1) == 0) {
            if (*(char *)(param_3 + 0x14) == '\0') goto LAB_032c6e10;
            lVar12 = *(long *)(param_3 + 0x18);
            if (lVar12 == 0) goto LAB_032c7488;
            uVar11 = (**(code **)(lVar12 + 0x18))
                               (*(undefined8 *)(lVar12 + 0x40),param_1,uVar9,&local_58,
                                *(undefined8 *)(lVar12 + 0x28));
            if ((uVar11 & 1) == 0) goto LAB_032c6e10;
          }
        }
        else {
          local_58 = 1;
        }
        uVar8 = local_58;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar13 = 0x79;
        param_3 = param_5;
        goto LAB_032c7430;
      }
    }
switchD_032c6708_caseD_65:
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_Start<StreamingAssetsConfigurationLoader_<GetConfigAsync>d__2>__
    ;
    uVar11 = FUN_032c7b14(param_2,*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SerializableProjectConfiguration>_Start<StreamingAssetsConfigurationLoader_<GetConfigAsync>d__2>__
                          ,0);
    if ((uVar11 & 1) != 0) {
      lVar12 = *(long *)puVar3;
      if (lVar12 == 0) {
LAB_032c7488:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      *(int *)(param_2 + 2) = (int)param_2[2] + *(int *)(lVar12 + 0x10) + -1;
      *(uint *)(param_5 + 0x24) = *(uint *)(param_5 + 0x24) | 0x100;
      puVar5 = PTR_DAT_04230a80;
      lVar12 = *(long *)PTR_DAT_04230a80;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar12 = *(long *)puVar5;
      }
      *(undefined8 *)(param_5 + 0x28) = **(undefined8 **)(lVar12 + 0xb8);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar13 = *(undefined8 *)puVar3;
      goto LAB_032c6ddc;
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
LAB_032c6e04:
    uVar11 = FUN_032c8e84(param_1,uVar7,0);
  }
joined_r0x032c6de4:
  if ((uVar11 & 1) != 0) {
    return 1;
  }
LAB_032c6e10:
  FUN_032c9d90(param_5,0);
  return 0;
}


