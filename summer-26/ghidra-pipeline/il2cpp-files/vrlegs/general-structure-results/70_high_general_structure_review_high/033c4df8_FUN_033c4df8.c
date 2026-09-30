/*
FUNCTION_NAME: FUN_033c4df8
ENTRY_POINT: 033c4df8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;telemetry;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_7;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only
*/


void FUN_033c4df8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 local_38;
  
  puVar1 = Liv_Lck_Settings_LckSettings_TypeInfo;
  puVar2 = Newtonsoft_Json_Linq_JPropertyKeyedCollection_TypeInfo;
  if ((DAT_0412d33d & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cdaad0);
    FUN_01ab69ac(Newtonsoft_Json_Linq_JPropertyKeyedCollection_TypeInfo);
    FUN_01ab69ac(Liv_Lck_LckStorageWatcher_TypeInfo);
    FUN_01ab69ac(Liv_Lck_Telemetry_LckTelemetry_TypeInfo);
    FUN_01ab69ac(Liv_Lck_LckUpdateManager_TypeInfo);
    FUN_01ab69ac(Oculus_Platform_Models_Leaderboard_TypeInfo);
    FUN_01ab69ac(Liv_Lck_Settings_LckSettings_TypeInfo);
    FUN_01ab69ac(Newtonsoft_Json_JsonToken_TypeInfo);
    DAT_0412d33d = 1;
  }
  *(undefined8 *)(param_1 + 0x58) = param_2;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(param_1 + 0x58),param_2);
  lVar4 = FUN_01f55b04(param_1,*(undefined8 *)puVar1);
  plVar8 = (long *)(param_1 + 0x80);
  *plVar8 = lVar4;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar8,lVar4);
  FUN_01f49730(param_1,&local_38,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x88) = local_38;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists((undefined8 *)(param_1 + 0x88));
  puVar1 = Liv_Lck_LckStorageWatcher_TypeInfo;
  puVar2 = Newtonsoft_Json_JsonToken_TypeInfo;
  if ((*plVar8 != 0) && (plVar5 = *(long **)(param_1 + 0x60), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x5b8))
              (plVar5,*(undefined8 *)(*plVar8 + 0x28),*(undefined8 *)(*plVar5 + 0x5c0));
    lVar4 = *(long *)(param_1 + 0x70);
    uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
    FUN_021dd4e8(uVar6,param_1,*(undefined8 *)puVar1,0);
    puVar3 = Liv_Lck_Telemetry_LckTelemetry_TypeInfo;
    puVar1 = PTR_DAT_03cdaad0;
    if (lVar4 != 0) {
      puVar7 = (undefined8 *)(lVar4 + 0x70);
      *puVar7 = uVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar7,uVar6);
      lVar4 = *(long *)(param_1 + 0x70);
      uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
      FUN_02060754(uVar6,param_1,*(undefined8 *)puVar3,0);
      if (lVar4 != 0) {
        puVar7 = (undefined8 *)(lVar4 + 0x78);
        *puVar7 = uVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar7,uVar6);
        puVar3 = Liv_Lck_LckUpdateManager_TypeInfo;
        if (*(long *)(param_1 + 0x70) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x50) = *(undefined8 *)(param_1 + 0x78);
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          FUN_033c5064(param_1,*(undefined8 *)(param_1 + 0x70));
          lVar4 = *(long *)(param_1 + 0x78);
          uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
          FUN_021dd4e8(uVar6,param_1,*(undefined8 *)puVar3,0);
          puVar2 = Oculus_Platform_Models_Leaderboard_TypeInfo;
          if (lVar4 != 0) {
            puVar7 = (undefined8 *)(lVar4 + 0x70);
            *puVar7 = uVar6;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar7,uVar6);
            lVar4 = *(long *)(param_1 + 0x78);
            uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
            FUN_02060754(uVar6,param_1,*(undefined8 *)puVar2,0);
            if (lVar4 != 0) {
              puVar7 = (undefined8 *)(lVar4 + 0x78);
              *puVar7 = uVar6;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar7,uVar6);
              if (*(long *)(param_1 + 0x78) != 0) {
                *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x48) = *(undefined8 *)(param_1 + 0x70);
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                FUN_033c5064(param_1,*(undefined8 *)(param_1 + 0x78));
                return;
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


