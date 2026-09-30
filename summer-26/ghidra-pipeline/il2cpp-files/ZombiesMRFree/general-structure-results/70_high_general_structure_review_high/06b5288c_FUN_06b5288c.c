/*
FUNCTION_NAME: FUN_06b5288c
ENTRY_POINT: 06b5288c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_19
*/


long FUN_06b5288c(long param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined1 local_7c [4];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  
  if ((DAT_073ab8de & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f72008);
    FUN_02fe925c(Unity_Serialization_Json_SerializedArrayViewPropertyBag_Enumerator_TypeInfo);
    FUN_02fe925c(Unity_Serialization_Json_SerializedArrayViewPropertyBag_Property_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6df30);
    FUN_02fe925c(ParadoxNotion_Serialization_SerializedConstructorInfo_<>c_TypeInfo);
    FUN_02fe925c(ParadoxNotion_Serialization_SerializedConstructorInfo_<>c__DisplayClass5_0_TypeInfo
                );
    FUN_02fe925c(ParadoxNotion_Serialization_SerializedMethodInfo_<>c_TypeInfo);
    FUN_02fe925c(ParadoxNotion_Serialization_SerializedMethodInfo_<>c__DisplayClass6_0_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f6dd60);
    FUN_02fe925c(PTR_DAT_06f6df38);
    FUN_02fe925c(PTR_DAT_06f6d618);
    FUN_02fe925c(AchievementsManager_TypeInfo);
    FUN_02fe925c(Unity_Serialization_Json_SerializedObjectView_Enumerator_TypeInfo);
    FUN_02fe925c(Unity_Serialization_Binary_BinaryPropertyReader_TypeInfo);
    FUN_02fe925c(Unity_Serialization_Json_SerializedObjectViewPropertyBag_Enumerable_TypeInfo);
    FUN_02fe925c(Unity_Properties_TypeConverter<short,_int>_TypeInfo);
    FUN_02fe925c(Unity_Entities_Serialization_BinaryReader_TypeInfo);
    FUN_02fe925c(Unity_Properties_TypeConverter<short,_long>_TypeInfo);
    FUN_02fe925c(Unity_Serialization_Json_SerializedObjectViewPropertyBag_Enumerator_TypeInfo);
    FUN_02fe925c(PTR_DAT_06fc1290);
    FUN_02fe925c(Unity_Serialization_Json_SerializedObjectViewPropertyBag_Property_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f70890);
    FUN_02fe925c(System_Net_ServerCertValidationCallback_CallbackContext_TypeInfo);
    FUN_02fe925c(System_Net_ServicePointManager_SPKey_TypeInfo);
    FUN_02fe925c(System_Net_ServicePointScheduler_AsyncManualResetEvent_TypeInfo);
    FUN_02fe925c(System_Net_ServicePointScheduler_ConnectionGroup_TypeInfo);
    FUN_02fe925c(PTR_DAT_06fc12a8);
    FUN_02fe925c(NodeCanvas_Tasks_Actions_SetBoolean_BoolSetModes_TypeInfo);
    FUN_02fe925c(NodeCanvas_Tasks_Actions_SetObjectActive_SetActiveMode_TypeInfo);
    DAT_073ab8de = 1;
  }
  puVar3 = PTR_DAT_06f6d618;
  if ((0 < param_2) || (param_5 != 0xf)) {
    if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar4 = FUN_068f9b78(param_1,0,0);
    if ((uVar4 & 1) == 0) {
      if (param_1 == 0) goto LAB_06b53270;
      uVar4 = FUN_068d0590(param_1,*(undefined8 *)Unity_Entities_Serialization_BinaryReader_TypeInfo
                           ,0);
      if ((uVar4 & 1) == 0) {
        uVar13 = FUN_068fc8bc(param_1,0);
        puVar10 = (undefined8 *)
                  Unity_Serialization_Json_SerializedObjectViewPropertyBag_Enumerable_TypeInfo;
      }
      else {
        uVar4 = FUN_068d0590(param_1,*(undefined8 *)PTR_DAT_06fc1290,0);
        if ((uVar4 & 1) == 0) {
          uVar13 = FUN_068fc8bc(param_1,0);
          puVar10 = (undefined8 *)System_Net_ServicePointScheduler_ConnectionGroup_TypeInfo;
        }
        else {
          uVar4 = FUN_068d0590(param_1,*(undefined8 *)
                                        Unity_Serialization_Binary_BinaryPropertyReader_TypeInfo,0);
          if ((uVar4 & 1) == 0) {
            uVar13 = FUN_068fc8bc(param_1,0);
            puVar10 = (undefined8 *)NodeCanvas_Tasks_Actions_SetBoolean_BoolSetModes_TypeInfo;
          }
          else {
            uVar4 = FUN_068d0590(param_1,*(undefined8 *)
                                          Unity_Properties_TypeConverter<short,_int>_TypeInfo,0);
            if ((uVar4 & 1) == 0) {
              uVar13 = FUN_068fc8bc(param_1,0);
              puVar10 = (undefined8 *)System_Net_ServicePointManager_SPKey_TypeInfo;
            }
            else {
              uVar4 = FUN_068d0590(param_1,*(undefined8 *)
                                            Unity_Properties_TypeConverter<short,_long>_TypeInfo,0);
              if ((uVar4 & 1) == 0) {
                uVar13 = FUN_068fc8bc(param_1,0);
                puVar10 = (undefined8 *)
                          Unity_Serialization_Json_SerializedObjectViewPropertyBag_Enumerator_TypeInfo
                ;
              }
              else {
                uVar4 = FUN_068d0590(param_1,*(undefined8 *)PTR_DAT_06fc12a8,0);
                plVar12 = (long *)AchievementsManager_TypeInfo;
                if ((uVar4 & 1) != 0) {
                  lVar5 = *(long *)AchievementsManager_TypeInfo;
                  if (*(int *)(lVar5 + 0xe0) == 0) {
                    thunk_FUN_02fdcff0();
                    lVar5 = *plVar12;
                  }
                  if (**(long **)(lVar5 + 0xb8) != 0) {
                    iVar1 = *(int *)(**(long **)(lVar5 + 0xb8) + 0x18);
                    if (0 < iVar1) {
                      iVar11 = 0;
                      while( true ) {
                        if (*(int *)(lVar5 + 0xe0) == 0) {
                          thunk_FUN_02fdcff0();
                          lVar5 = *plVar12;
                        }
                        if ((**(long **)(lVar5 + 0xb8) == 0) ||
                           (lVar5 = FUN_04430018(**(long **)(lVar5 + 0xb8),iVar11,
                                                 *(undefined8 *)
                                                  ParadoxNotion_Serialization_SerializedMethodInfo_<>c_TypeInfo
                                                ), lVar5 == 0)) goto LAB_06b53270;
                        uVar13 = *(undefined8 *)(lVar5 + 0x10);
                        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                          thunk_FUN_02fdcff0();
                        }
                        uVar4 = FUN_068f9b78(uVar13,param_1,0);
                        if ((((((uVar4 & 1) != 0) && (*(int *)(lVar5 + 0x24) == param_2)) &&
                             (*(int *)(lVar5 + 0x28) == param_3)) &&
                            ((*(int *)(lVar5 + 0x2c) == param_4 &&
                             (*(int *)(lVar5 + 0x30) == param_6)))) &&
                           ((*(int *)(lVar5 + 0x34) == param_7 &&
                            (*(int *)(lVar5 + 0x3c) == param_5)))) {
                          *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
                          return *(long *)(lVar5 + 0x18);
                        }
                        if (iVar1 + -1 == iVar11) break;
                        lVar5 = *(long *)AchievementsManager_TypeInfo;
                        iVar11 = iVar11 + 1;
                        plVar12 = (long *)AchievementsManager_TypeInfo;
                      }
                    }
                    lVar5 = thunk_FUN_0301080c(*(undefined8 *)
                                                ParadoxNotion_Serialization_SerializedMethodInfo_<>c__DisplayClass6_0_TypeInfo
                                              );
                    *(undefined4 *)(lVar5 + 0x2c) = 8;
                    FUN_05b32c00(lVar5,0);
                    *(undefined4 *)(lVar5 + 0x20) = 1;
                    *(long *)(lVar5 + 0x10) = param_1;
                    thunk_FUN_03048534((long *)(lVar5 + 0x10),param_1);
                    lVar6 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f6dd60);
                    FUN_068cfa34(lVar6,param_1,0);
                    plVar12 = (long *)(lVar5 + 0x18);
                    *plVar12 = lVar6;
                    thunk_FUN_03048534(plVar12,lVar6);
                    if (*plVar12 != 0) {
                      FUN_068fd73c(*plVar12,0x3d,0);
                      lVar9 = *(long *)(lVar5 + 0x18);
                      *(int *)(lVar5 + 0x24) = param_2;
                      *(int *)(lVar5 + 0x28) = param_3;
                      *(int *)(lVar5 + 0x2c) = param_4;
                      *(int *)(lVar5 + 0x30) = param_6;
                      *(int *)(lVar5 + 0x34) = param_7;
                      *(int *)(lVar5 + 0x3c) = param_5;
                      *(bool *)(lVar5 + 0x38) = param_3 != 0 && 0 < param_7;
                      plVar7 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6df38,8);
                      puVar3 = PTR_DAT_06f6df30;
                      local_64 = param_2;
                      lVar6 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f6df30,&local_64);
                      if (plVar7 != (long *)0x0) {
                        if ((lVar6 != 0) &&
                           (lVar8 = thunk_FUN_03010710(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                           lVar8 == 0)) {
LAB_06b53278:
                          uVar13 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                                             ();
                    /* WARNING: Subroutine does not return */
                          FUN_02fe93c0(uVar13,0);
                        }
                        if ((int)plVar7[3] != 0) {
                          plVar7[4] = lVar6;
                          thunk_FUN_03048534(plVar7 + 4,lVar6);
                          local_68 = param_3;
                          lVar6 = thunk_FUN_0301043c(*(undefined8 *)
                                                                                                            
                                                  Unity_Serialization_Json_SerializedObjectView_Enumerator_TypeInfo
                                                  ,&local_68);
                          if ((lVar6 != 0) &&
                             (lVar8 = thunk_FUN_03010710(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                             lVar8 == 0)) goto LAB_06b53278;
                          if (1 < *(uint *)(plVar7 + 3)) {
                            plVar7[5] = lVar6;
                            thunk_FUN_03048534(plVar7 + 5,lVar6);
                            local_6c = param_4;
                            lVar6 = thunk_FUN_0301043c(*(undefined8 *)
                                                                                                                
                                                  Unity_Serialization_Json_SerializedArrayViewPropertyBag_Property_TypeInfo
                                                  ,&local_6c);
                            if ((lVar6 != 0) &&
                               (lVar8 = thunk_FUN_03010710(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                               lVar8 == 0)) goto LAB_06b53278;
                            if (2 < *(uint *)(plVar7 + 3)) {
                              plVar7[6] = lVar6;
                              thunk_FUN_03048534(plVar7 + 6,lVar6);
                              local_70 = param_7;
                              lVar6 = thunk_FUN_0301043c(*(undefined8 *)puVar3,&local_70);
                              if ((lVar6 != 0) &&
                                 (lVar8 = thunk_FUN_03010710(lVar6,*(undefined8 *)(*plVar7 + 0x40)),
                                 lVar8 == 0)) goto LAB_06b53278;
                              if (3 < *(uint *)(plVar7 + 3)) {
                                plVar7[7] = lVar6;
                                thunk_FUN_03048534(plVar7 + 7,lVar6);
                                local_74 = param_6;
                                lVar6 = thunk_FUN_0301043c(*(undefined8 *)puVar3,&local_74);
                                if ((lVar6 != 0) &&
                                   (lVar8 = thunk_FUN_03010710(lVar6,*(undefined8 *)(*plVar7 + 0x40)
                                                              ), lVar8 == 0)) goto LAB_06b53278;
                                if (4 < *(uint *)(plVar7 + 3)) {
                                  plVar7[8] = lVar6;
                                  thunk_FUN_03048534(plVar7 + 8,lVar6);
                                  local_78 = param_5;
                                  lVar6 = thunk_FUN_0301043c(*(undefined8 *)
                                                                                                                            
                                                  Unity_Serialization_Json_SerializedArrayViewPropertyBag_Enumerator_TypeInfo
                                                  ,&local_78);
                                  if ((lVar6 != 0) &&
                                     (lVar8 = thunk_FUN_03010710(lVar6,*(undefined8 *)
                                                                        (*plVar7 + 0x40)),
                                     lVar8 == 0)) goto LAB_06b53278;
                                  if (5 < *(uint *)(plVar7 + 3)) {
                                    plVar7[9] = lVar6;
                                    thunk_FUN_03048534(plVar7 + 9,lVar6);
                                    local_7c[0] = *(undefined1 *)(lVar5 + 0x38);
                                    lVar6 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f72008,
                                                               local_7c);
                                    if ((lVar6 != 0) &&
                                       (lVar8 = thunk_FUN_03010710(lVar6,*(undefined8 *)
                                                                          (*plVar7 + 0x40)),
                                       lVar8 == 0)) goto LAB_06b53278;
                                    if (6 < *(uint *)(plVar7 + 3)) {
                                      plVar7[10] = lVar6;
                                      thunk_FUN_03048534(plVar7 + 10,lVar6);
                                      lVar6 = FUN_068fc8bc(param_1,0);
                                      if ((lVar6 != 0) &&
                                         (lVar8 = thunk_FUN_03010710(lVar6,*(undefined8 *)
                                                                            (*plVar7 + 0x40)),
                                         lVar8 == 0)) goto LAB_06b53278;
                                      puVar3 = AchievementsManager_TypeInfo;
                                      if (7 < *(uint *)(plVar7 + 3)) {
                                        plVar7[0xb] = lVar6;
                                        thunk_FUN_03048534(plVar7 + 0xb,lVar6);
                                        uVar13 = FUN_05972680(*(undefined8 *)
                                                                                                                              
                                                  NodeCanvas_Tasks_Actions_SetObjectActive_SetActiveMode_TypeInfo
                                                  ,plVar7,0);
                                        if (lVar9 != 0) {
                                          FUN_068fc96c(lVar9,uVar13,0);
                                          if (*plVar12 != 0) {
                                            FUN_068d1a6c((float)param_2,*plVar12,
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_Entities_Serialization_BinaryReader_TypeInfo
                                                  ,0);
                                            if (*plVar12 != 0) {
                                              FUN_068d1a6c((float)param_3,*plVar12,
                                                           *(undefined8 *)PTR_DAT_06fc1290,0);
                                              if (*plVar12 != 0) {
                                                FUN_068d1a6c((float)param_4,*plVar12,
                                                             *(undefined8 *)
                                                                                                                            
                                                  Unity_Serialization_Binary_BinaryPropertyReader_TypeInfo
                                                  ,0);
                                                if (*plVar12 != 0) {
                                                  FUN_068d1a6c((float)param_6,*plVar12,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Unity_Properties_TypeConverter<short,_int>_TypeInfo
                                                  ,0);
                                                  if (*plVar12 != 0) {
                                                    FUN_068d1a6c((float)param_7,*plVar12,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Unity_Properties_TypeConverter<short,_long>_TypeInfo
                                                  ,0);
                                                  if (*plVar12 != 0) {
                                                    FUN_068d1a6c((float)param_5,*plVar12,
                                                                 *(undefined8 *)PTR_DAT_06fc12a8,0);
                                                    if (*(long *)(lVar5 + 0x18) != 0) {
                                                      uVar14 = 0;
                                                      if (*(char *)(lVar5 + 0x38) != '\0') {
                                                        uVar14 = 0x3f800000;
                                                      }
                                                      FUN_068d1a6c(uVar14,*(long *)(lVar5 + 0x18),
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  System_Net_ServicePointScheduler_AsyncManualResetEvent_TypeInfo
                                                  ,0);
                                                  if (*plVar12 != 0) {
                                                    if (*(char *)(lVar5 + 0x38) == '\0') {
                                                      FUN_068d0868(*plVar12,*(undefined8 *)
                                                                                                                                                          
                                                  Unity_Serialization_Json_SerializedObjectViewPropertyBag_Property_TypeInfo
                                                  ,0);
                                                  }
                                                  else {
                                                    FUN_068d0824();
                                                  }
                                                  lVar6 = *(long *)puVar3;
                                                  if (*(int *)(lVar6 + 0xe0) == 0) {
                                                    thunk_FUN_02fdcff0();
                                                    lVar6 = *(long *)puVar3;
                                                  }
                                                  lVar6 = **(long **)(lVar6 + 0xb8);
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    lVar8 = *(long *)
                                                  ParadoxNotion_Serialization_SerializedConstructorInfo_<>c_TypeInfo
                                                  ;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      plVar7 = (long *)(lVar9 + (long)(int)uVar2 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar5;
                                                      thunk_FUN_03048534(plVar7,lVar5);
                                                    }
                                                    else {
                                                      FUN_044302e8(lVar6,lVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  return *plVar12;
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
                                        goto LAB_06b53270;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                    /* WARNING: Subroutine does not return */
                        FUN_02fe94f0();
                      }
                    }
                  }
LAB_06b53270:
                    /* WARNING: Subroutine does not return */
                  FUN_02fe94e8();
                }
                uVar13 = FUN_068fc8bc(param_1,0);
                puVar10 = (undefined8 *)
                          System_Net_ServerCertValidationCallback_CallbackContext_TypeInfo;
              }
            }
          }
        }
      }
      uVar13 = FUN_05971ec8(*(undefined8 *)PTR_DAT_06f70890,uVar13,*puVar10,0);
      if (*(int *)(*(long *)AchievementsManager_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)AchievementsManager_TypeInfo);
      }
      FUN_06b53284(uVar13,param_1);
    }
  }
  return param_1;
}


