/*
FUNCTION_NAME: FUN_05fedb78
ENTRY_POINT: 05fedb78
PROGRAM: hellodot-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


long FUN_05fedb78(long param_1,long *param_2,long param_3,long *param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long local_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long local_70;
  undefined8 local_68;
  
  if ((DAT_06a82319 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc8c0);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Linq_Expressions_Interpreter_LoadLocalFromClosureBoxedInstruction_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e08e8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c48);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_Rendering_Universal_LocalMinima_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Linq_Expressions_Interpreter_LoadFieldInstruction_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Scans_LocalPosition_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Linq_Expressions_Interpreter_LoadLocalInstruction_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Niantic_Peridot_Scans_LocalScale_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d6b70);
    AkMIDIEventCallbackInfo__get_byProgramNum(Zenject_LoadSceneRelationship_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Linq_Expressions_Interpreter_LoadStaticFieldInstruction_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_LocalAppContext_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Google_Apis_Auth_OAuth2_LocalServerCodeReceiver_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_LocalAppContextSwitches_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Net_Security_LocalCertSelectionCallback_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Linq_Expressions_Interpreter_LocalVariable_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8a10);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8c40);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Linq_Expressions_Interpreter_LocalVariables_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8688);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Platform_Analytics_Telemetry_Utils_LocaleUtil_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Oculus_Platform_Models_LivestreamingVideoStats_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Xml_Schema_LocatedActiveAxis_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (UnityEngine_ResourceManagement_Util_LocationCacheKey_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_LocalDataStoreMgr_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Linq_Expressions_Interpreter_LoadCachedObjectInstruction_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(Google_Api_Gax_ResourceNames_LocationName_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Threading_Lock_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ca920);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Threading_LockQueue_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Threading_LockRecursionException_TypeInfo);
    DAT_06a82319 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  lStack_88 = 0;
  local_80 = 0;
  local_98 = 0;
  if (param_2 == (long *)0x0) goto LAB_05fee4c8;
  if ((char)param_2[0xd] != '\0') {
    return 0;
  }
  lStack_b8 = param_4[1];
  local_c0 = *param_4;
  lStack_a8 = param_4[3];
  local_b0 = param_4[2];
  if (*(int *)(*(long *)System_Linq_Expressions_Interpreter_LoadCachedObjectInstruction_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lStack_d8 = lStack_b8;
  local_e0 = local_c0;
  lStack_c8 = lStack_a8;
  lStack_d0 = local_b0;
  lVar6 = FUN_05fee5e0(param_2,&local_e0);
  if (lVar6 == 0) {
    return 0;
  }
  lVar12 = param_2[3];
  if (*(int *)(*(long *)PTR_DAT_065e08e8 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if (param_4[1] == 0) goto LAB_05fee4c8;
  if ((int)lVar12 == *(int *)(param_4[1] + 0x60)) {
    if (*(int *)(*(long *)PTR_DAT_065e08e8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    puVar2 = Oculus_Platform_Models_LivestreamingVideoStats_TypeInfo;
    plVar7 = (long *)*param_4;
    if (plVar7 != (long *)0x0) {
      lVar12 = *(long *)Oculus_Platform_Models_LivestreamingVideoStats_TypeInfo;
      if ((*(byte *)(lVar12 + 0x130) <= *(byte *)(*plVar7 + 0x130)) &&
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) == lVar12)
         ) {
        if (*(int *)(*(long *)PTR_DAT_065e08e8 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*(long *)PTR_DAT_065e08e8);
          plVar7 = (long *)*param_4;
          if (plVar7 == (long *)0x0) goto LAB_05fee4c8;
          lVar12 = *(long *)puVar2;
        }
        if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar12 + 0x130)) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar12 + 0x130) * 8 + -8) !=
            lVar12)) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce8018();
        }
        FUN_060e71f0(plVar7,lVar6,0);
        goto LAB_05fede68;
      }
    }
    if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_05eb30e4(*(undefined8 *)System_Threading_LockQueue_TypeInfo,0);
  }
LAB_05fede68:
  if (*(int *)(*(long *)PTR_DAT_065e08e8 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  if ((param_4[2] != 0) &&
     (uVar8 = FUN_05feeb5c(param_1,(int)param_2[3],&local_68), (uVar8 & 1) != 0)) {
    if (*(int *)(*(long *)PTR_DAT_065e08e8 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    if (param_4[2] == 0) goto LAB_05fee4c8;
    FUN_0467928c(param_4[2],local_68,lVar6,
                 *(undefined8 *)UnityEngine_Rendering_Universal_LocalMinima_TypeInfo);
  }
  puVar2 = PTR_DAT_065c8c40;
  if ((int)param_2[7] != -1) {
    uVar13 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_065c8c40 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar8 = FUN_05ef739c(uVar13,0,0);
    if ((uVar8 & 1) == 0) {
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (lVar12 = FUN_060e4534(*(long *)(param_1 + 0x28),0), lVar12 == 0)) goto LAB_05fee4c8;
      if (*(uint *)(lVar12 + 0x18) <= *(uint *)(param_2 + 7)) goto LAB_05fee4fc;
      FUN_060d0c78(lVar6,*(undefined8 *)(param_1 + 0x28),
                   *(undefined8 *)(lVar12 + (long)(int)*(uint *)(param_2 + 7) * 8 + 0x20),0);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_05eb364c(*(undefined8 *)System_Threading_LockRecursionException_TypeInfo,0);
    }
    if ((int)param_2[7] != -1) {
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar8 = FUN_05ef739c(uVar13,0,0);
      if ((uVar8 & 1) == 0) {
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar12 = FUN_060e4534(*(long *)(param_1 + 0x28),0), lVar12 == 0)) goto LAB_05fee4c8;
        if (*(uint *)(lVar12 + 0x18) <= *(uint *)(param_2 + 7)) {
LAB_05fee4fc:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        FUN_060d0c78(lVar6,*(undefined8 *)(param_1 + 0x28),
                     *(undefined8 *)(lVar12 + (long)(int)*(uint *)(param_2 + 7) * 8 + 0x20),0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_05eb364c(*(undefined8 *)System_Threading_LockRecursionException_TypeInfo,0);
      }
    }
  }
  bVar1 = *(byte *)(*(long *)Niantic_Platform_Analytics_Telemetry_Utils_LocaleUtil_TypeInfo + 0x130)
  ;
  if (*(byte *)(*param_2 + 0x130) < bVar1) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = param_2;
    if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Niantic_Platform_Analytics_Telemetry_Utils_LocaleUtil_TypeInfo) {
      plVar7 = (long *)0x0;
    }
  }
  if (param_3 != 0) {
    uVar8 = FUN_045dae74(param_3,(int)param_2[3],&local_70,
                         *(undefined8 *)
                          System_Linq_Expressions_Interpreter_LoadLocalInstruction_TypeInfo);
    lVar12 = local_70;
    if ((uVar8 & 1) != 0) {
      uVar13 = thunk_FUN_02cea894(*(undefined8 *)
                                   System_Linq_Expressions_Interpreter_LoadLocalFromClosureBoxedInstruction_TypeInfo
                                 );
      FUN_044613e4(uVar13,0,*(undefined8 *)System_LocalDataStoreMgr_TypeInfo,0);
      if ((lVar12 == 0) ||
         (FUN_03969d6c(lVar12,uVar13,
                       *(undefined8 *)System_Net_Security_LocalCertSelectionCallback_TypeInfo),
         local_70 == 0)) goto LAB_05fee4c8;
      FUN_03968dbc(&local_c0,local_70,*(undefined8 *)System_LocalAppContextSwitches_TypeInfo);
      puVar3 = UnityEngine_ResourceManagement_Util_LocationCacheKey_TypeInfo;
      puVar2 = System_Linq_Expressions_Interpreter_LoadStaticFieldInstruction_TypeInfo;
      lStack_88 = lStack_b8;
      local_90 = local_c0;
      local_80 = local_b0;
LAB_05fee104:
      uVar8 = FUN_0481f4e4(&local_90,*(undefined8 *)puVar2);
      if ((uVar8 & 1) != 0) {
        lVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
        FUN_04f7383c(lVar12,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        *(long *)(lVar12 + 0x10) = local_80;
        lStack_f8 = param_4[1];
        local_100 = *param_4;
        lStack_e8 = param_4[3];
        lStack_f0 = param_4[2];
        lVar9 = FUN_05fedb78(param_1,local_80,param_3,&local_100);
        if (lVar9 != 0) {
          if (plVar7 != (long *)0x0) {
            lVar14 = plVar7[0x10];
            if (lVar14 != 0) {
              uVar13 = thunk_FUN_02cea894(*(undefined8 *)
                                           System_Linq_Expressions_Interpreter_LocalVariables_TypeInfo
                                         );
              FUN_03dbdaec(uVar13,lVar12,*(undefined8 *)System_Xml_Schema_LocatedActiveAxis_TypeInfo
                           ,0);
              iVar4 = FUN_03b53010(lVar14,uVar13,
                                   *(undefined8 *)
                                    Google_Apis_Auth_OAuth2_LocalServerCodeReceiver_TypeInfo);
              if (iVar4 != -1) {
                if (plVar7[0x10] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02ce7c7c();
                }
                lVar12 = FUN_03b5248c(plVar7[0x10],iVar4,
                                      *(undefined8 *)
                                       System_Linq_Expressions_Interpreter_LocalVariable_TypeInfo);
                uVar5 = FUN_04db9688(lVar12,0);
                if (*(int *)(*(long *)PTR_DAT_065dc8c0 + 0xe0) == 0) {
                  thunk_FUN_02cd038c();
                }
                FUN_05f2a0d8(uVar5 & 1,
                             *(undefined8 *)Google_Api_Gax_ResourceNames_LocationName_TypeInfo,0);
                if (*(int *)(*(long *)PTR_DAT_065e08e8 + 0xe0) == 0) {
                  thunk_FUN_02cd038c();
                }
                lVar14 = param_4[2];
                if (lVar14 != 0) {
                  if (*(int *)(*(long *)PTR_DAT_065e08e8 + 0xe0) == 0) {
                    thunk_FUN_02cd038c(*(long *)PTR_DAT_065e08e8);
                    lVar14 = param_4[2];
                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02ce7c7c();
                    }
                  }
                  uVar8 = FUN_0467ad20(lVar14,lVar12,&local_98,
                                       *(undefined8 *)Niantic_Peridot_Scans_LocalPosition_TypeInfo);
                  if ((uVar8 & 1) != 0) {
                    if (local_98 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02ce7c7c();
                    }
                    FUN_060d4154(local_98,lVar9,0);
                    goto LAB_05fee104;
                  }
                }
                plVar10 = (long *)FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8a10,2);
                if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02ce7c7c();
                }
                if ((lVar12 != 0) &&
                   (lVar14 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar10 + 0x40)),
                   lVar14 == 0)) {
                  uVar13 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
                  FUN_02ce7b54(uVar13,0);
                }
                if ((int)plVar10[3] == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02ce7c84();
                }
                plVar10[4] = lVar12;
                if (*(int *)(*(long *)PTR_DAT_065e08e8 + 0xe0) == 0) {
                  thunk_FUN_02cd038c();
                }
                lVar12 = param_4[2];
                uVar13 = *(undefined8 *)System_Threading_Lock_TypeInfo;
                if (lVar12 == 0) {
                  lVar12 = **(long **)(*(long *)PTR_DAT_065c8688 + 0xb8);
                }
                else {
                  if (*(int *)(*(long *)PTR_DAT_065e08e8 + 0xe0) == 0) {
                    thunk_FUN_02cd038c(*(long *)PTR_DAT_065e08e8);
                    lVar12 = param_4[2];
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02ce7c7c();
                    }
                  }
                  uVar11 = FUN_04678fcc(lVar12,*(undefined8 *)
                                                Niantic_Peridot_Scans_LocalScale_TypeInfo);
                  uVar11 = FUN_033f6e28(uVar11,*(undefined8 *)PTR_DAT_065d6b70);
                  lVar12 = FUN_04db9ed8(*(undefined8 *)PTR_DAT_065ca920,uVar11,0);
                }
                if ((lVar12 != 0) &&
                   (lVar14 = thunk_FUN_02cea798(lVar12,*(undefined8 *)(*plVar10 + 0x40)),
                   lVar14 == 0)) {
                  uVar13 = thunk_FUN_02c94d60();
                    /* WARNING: Subroutine does not return */
                  FUN_02ce7b54(uVar13,0);
                }
                if (*(uint *)(plVar10 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
                  FUN_02ce7c84();
                }
                plVar10[5] = lVar12;
                if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
                  thunk_FUN_02cd038c();
                }
                FUN_05eb3304(uVar13,plVar10,0);
                FUN_060d4154(lVar6,lVar9,0);
                goto LAB_05fee104;
              }
            }
            FUN_060d4154(lVar6,lVar9,0);
            goto LAB_05fee104;
          }
          FUN_060d4154(lVar6,lVar9,0);
        }
        goto LAB_05fee104;
      }
      FUN_0481f4e0(&local_90,*(undefined8 *)Zenject_LoadSceneRelationship_TypeInfo);
    }
    if (plVar7 != (long *)0x0) {
      if (*(int *)(*(long *)PTR_DAT_065e08e8 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      lVar12 = param_4[2];
      if (lVar12 != 0) {
        if (*(int *)(*(long *)PTR_DAT_065e08e8 + 0xe0) == 0) {
          thunk_FUN_02cd038c(*(long *)PTR_DAT_065e08e8);
          lVar12 = param_4[2];
          if (lVar12 == 0) goto LAB_05fee4c8;
        }
        FUN_04679414(lVar12,*(undefined8 *)
                             System_Linq_Expressions_Interpreter_LoadFieldInstruction_TypeInfo);
      }
    }
    return lVar6;
  }
LAB_05fee4c8:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


