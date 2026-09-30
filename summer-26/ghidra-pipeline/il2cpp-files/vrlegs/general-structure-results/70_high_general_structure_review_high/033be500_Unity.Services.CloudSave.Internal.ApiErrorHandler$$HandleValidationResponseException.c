/*
FUNCTION_NAME: Unity.Services.CloudSave.Internal.ApiErrorHandler$$HandleValidationResponseException
ENTRY_POINT: 033be500
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_20;strong_file_logging_hits_2;telemetry_or_network_hits_12;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_CloudSave_Internal_ApiErrorHandler__HandleValidationResponseException
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 in_stack_00000008;
  
  puVar2 = Newtonsoft_Json_JsonSerializer_TypeInfo;
  puVar1 = Newtonsoft_Json_Linq_JPropertyKeyedCollection_TypeInfo;
  if ((DAT_0412d2e8 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cdaad0);
    FUN_01ab69ac(Newtonsoft_Json_Linq_JPropertyKeyedCollection_TypeInfo);
    FUN_01ab69ac(Newtonsoft_Json_Serialization_JsonSerializerInternalBase_TypeInfo);
    FUN_01ab69ac(Newtonsoft_Json_Serialization_JsonSerializerInternalReader_TypeInfo);
    FUN_01ab69ac(Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_TypeInfo);
    FUN_01ab69ac(Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo);
    FUN_01ab69ac(Newtonsoft_Json_JsonSerializerSettings_TypeInfo);
    FUN_01ab69ac(Newtonsoft_Json_Serialization_JsonStringContract_TypeInfo);
    FUN_01ab69ac(Newtonsoft_Json_JsonTextReader_TypeInfo);
    FUN_01ab69ac(Newtonsoft_Json_JsonTextWriter_TypeInfo);
    FUN_01ab69ac(Newtonsoft_Json_JsonSerializer_TypeInfo);
    FUN_01ab69ac(Newtonsoft_Json_JsonToken_TypeInfo);
    DAT_0412d2e8 = 1;
  }
  *(undefined8 *)(param_1 + 0x58) = param_2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x58),param_2);
  lVar4 = FUN_01f55b04(param_1,*(undefined8 *)puVar2);
  plVar7 = (long *)(param_1 + 0x98);
  *plVar7 = lVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar7);
  FUN_01f49730(param_1,&stack0x00000008,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0xa0) = in_stack_00000008;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists((undefined8 *)(param_1 + 0xa0));
  puVar2 = Newtonsoft_Json_JsonToken_TypeInfo;
  puVar1 = Newtonsoft_Json_Serialization_JsonSerializerInternalBase_TypeInfo;
  if ((*plVar7 != 0) && (plVar5 = *(long **)(param_1 + 0x60), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x5b8))
              (plVar5,*(undefined8 *)(*plVar7 + 0x28),*(undefined8 *)(*plVar5 + 0x5c0));
    lVar4 = *(long *)(param_1 + 0x78);
    uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
    FUN_021dd4e8(uVar6,param_1,*(undefined8 *)puVar1,0);
    puVar3 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader_TypeInfo;
    puVar1 = PTR_DAT_03cdaad0;
    if (lVar4 != 0) {
      puVar8 = (undefined8 *)(lVar4 + 0x70);
      *puVar8 = uVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar8,uVar6);
      lVar4 = *(long *)(param_1 + 0x78);
      uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
      FUN_02060754(uVar6,param_1,*(undefined8 *)puVar3,0);
      if (lVar4 != 0) {
        puVar8 = (undefined8 *)(lVar4 + 0x78);
        *puVar8 = uVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar8,uVar6);
        puVar3 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_TypeInfo;
        if (*(long *)(param_1 + 0x78) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x50) = *(undefined8 *)(param_1 + 0x80);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          FUN_033be93c(param_1,*(undefined8 *)(param_1 + 0x78));
          lVar4 = *(long *)(param_1 + 0x80);
          uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
          FUN_021dd4e8(uVar6,param_1,*(undefined8 *)puVar3,0);
          puVar3 = Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo;
          if (lVar4 != 0) {
            puVar8 = (undefined8 *)(lVar4 + 0x70);
            *puVar8 = uVar6;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar8,uVar6);
            lVar4 = *(long *)(param_1 + 0x80);
            uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
            FUN_02060754(uVar6,param_1,*(undefined8 *)puVar3,0);
            if (lVar4 != 0) {
              puVar8 = (undefined8 *)(lVar4 + 0x78);
              *puVar8 = uVar6;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar8,uVar6);
              if (*(long *)(param_1 + 0x80) != 0) {
                *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x48) = *(undefined8 *)(param_1 + 0x78);
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                puVar3 = Newtonsoft_Json_JsonSerializerSettings_TypeInfo;
                if (*(long *)(param_1 + 0x80) != 0) {
                  *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x50) =
                       *(undefined8 *)(param_1 + 0x88);
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                  FUN_033be93c(param_1,*(undefined8 *)(param_1 + 0x80));
                  lVar4 = *(long *)(param_1 + 0x88);
                  uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
                  FUN_021dd4e8(uVar6,param_1,*(undefined8 *)puVar3,0);
                  puVar3 = Newtonsoft_Json_Serialization_JsonStringContract_TypeInfo;
                  if (lVar4 != 0) {
                    puVar8 = (undefined8 *)(lVar4 + 0x70);
                    *puVar8 = uVar6;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar8,uVar6);
                    lVar4 = *(long *)(param_1 + 0x88);
                    uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
                    FUN_02060754(uVar6,param_1,*(undefined8 *)puVar3,0);
                    if (lVar4 != 0) {
                      puVar8 = (undefined8 *)(lVar4 + 0x78);
                      *puVar8 = uVar6;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (puVar8,uVar6);
                      if (*(long *)(param_1 + 0x88) != 0) {
                        *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x48) =
                             *(undefined8 *)(param_1 + 0x80);
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                        if (*(long *)(param_1 + 0x98) != 0) {
                          if (*(char *)(*(long *)(param_1 + 0x98) + 0x61) == '\0') {
                            uVar6 = 0;
                          }
                          else {
                            uVar6 = *(undefined8 *)(param_1 + 0x90);
                          }
                          if (*(long *)(param_1 + 0x88) != 0) {
                            *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x50) = uVar6;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                            FUN_033be93c(param_1,*(undefined8 *)(param_1 + 0x88));
                            if (*(long *)(param_1 + 0x90) != 0) {
                              lVar4 = FUN_036cbbbc(*(long *)(param_1 + 0x90),0);
                              puVar3 = Newtonsoft_Json_JsonTextReader_TypeInfo;
                              if ((*plVar7 != 0) && (lVar4 != 0)) {
                                FUN_036cf564(lVar4,*(undefined1 *)(*plVar7 + 0x61),0);
                                lVar4 = *(long *)(param_1 + 0x90);
                                uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
                                FUN_021dd4e8(uVar6,param_1,*(undefined8 *)puVar3,0);
                                puVar2 = Newtonsoft_Json_JsonTextWriter_TypeInfo;
                                if (lVar4 != 0) {
                                  puVar8 = (undefined8 *)(lVar4 + 0x70);
                                  *puVar8 = uVar6;
                                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                            (puVar8,uVar6);
                                  lVar4 = *(long *)(param_1 + 0x90);
                                  uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
                                  FUN_02060754(uVar6,param_1,*(undefined8 *)puVar2,0);
                                  if (lVar4 != 0) {
                                    puVar8 = (undefined8 *)(lVar4 + 0x78);
                                    *puVar8 = uVar6;
                                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                              (puVar8,uVar6);
                                    if (*(long *)(param_1 + 0x90) != 0) {
                                      *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x48) =
                                           *(undefined8 *)(param_1 + 0x88);
                                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                                ();
                                      FUN_033be93c(param_1,*(undefined8 *)(param_1 + 0x90));
                                      FUN_033bea6c(param_1);
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
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


