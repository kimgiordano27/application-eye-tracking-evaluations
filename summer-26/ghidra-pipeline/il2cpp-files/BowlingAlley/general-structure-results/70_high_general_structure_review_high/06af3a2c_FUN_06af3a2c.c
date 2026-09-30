/*
FUNCTION_NAME: FUN_06af3a2c
ENTRY_POINT: 06af3a2c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_8;functionality_data_collection_or_telemetry_hits_8
*/


void FUN_06af3a2c(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  puVar1 = PTR_DAT_072794f0;
  if ((DAT_076e337e & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_Unity_VisualScripting_UnitPortDefinitionCollection<ControlInputDefinition>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_VisualScripting_UnitPort<ControlOutput,_IUnitOutputPort,_ControlConnection>_get_key__
                      );
    thunk_FUN_032e1da0(
                      Method_Unity_VisualScripting_UnitPort<ControlOutput,_IUnitOutputPort,_ControlConnection>_DisconnectInvalid__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_UIElements_VisualElement_VisualElementScheduledItem<Action>__ctor__
                      );
    thunk_FUN_032e1da0(Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnCancel__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_Rendering_VolumeParameter<Vector3>__ctor__);
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnComplete__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_Rendering_VolumeParameter<Vector4>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_Rendering_VolumeParameter<Vector4>_op_Inequality__);
    thunk_FUN_032e1da0(
                      Method_Unity_AppUI_Core_WeakReferenceTable<VisualElement,_VisualElementExtensions_AdditionalData>__ctor__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(
                      Method_Unity_AppUI_Core_WeakReferenceTable<VisualElement,_VisualElementExtensions_AdditionalData>_GetOrCreateValue__
                      );
    DAT_076e337e = 1;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uVar5 = param_2[6];
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar3 = FUN_06be9890(uVar5,0,0);
  lVar4 = *(long *)(param_1 + 0x68);
  if ((uVar3 & 1) == 0) {
    if ((lVar4 != 0) &&
       (lVar4 = FUN_050f8940(lVar4,*(undefined8 *)
                                    Method_UnityEngine_Rendering_VolumeParameter<Vector3>__ctor__),
       lVar4 != 0)) {
      FUN_04c929a8(&local_88,lVar4,
                   *(undefined8 *)
                    Method_Unity_AppUI_Core_WeakReferenceTable<VisualElement,_VisualElementExtensions_AdditionalData>_GetOrCreateValue__
                  );
      puVar2 = Method_UnityEngine_Rendering_VolumeParameter<Vector4>_op_Inequality__;
      puVar1 = 
      Method_Unity_VisualScripting_UnitPortDefinitionCollection<ControlInputDefinition>__ctor__;
      while( true ) {
        uVar3 = FUN_05392010(&local_88,*(undefined8 *)puVar2);
        if ((uVar3 & 1) == 0) {
          FUN_0539200c(&local_88,
                       *(undefined8 *)Method_UnityEngine_Rendering_VolumeParameter<Vector4>__ctor__)
          ;
          return;
        }
        if (local_78 == 0) break;
        local_70 = *param_2;
        uStack_68 = param_2[1];
        local_60 = param_2[2];
        uStack_58 = param_2[3];
        local_50 = param_2[4];
        uStack_48 = param_2[5];
        local_40 = param_2[6];
        FUN_04b1c068(local_78,&local_70,*(undefined8 *)puVar1);
      }
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
  }
  else if (lVar4 != 0) {
    uVar3 = FUN_050f8d04(lVar4,param_2[6],
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_VisualElement_VisualElementScheduledItem<Action>__ctor__
                        );
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0x68);
      uVar6 = param_2[6];
      uVar5 = thunk_FUN_032a56a0(*(undefined8 *)
                                  Method_Unity_VisualScripting_UnitPort<ControlOutput,_IUnitOutputPort,_ControlConnection>_DisconnectInvalid__
                                );
      local_40 = 0;
      uStack_58 = 0;
      local_60 = 0;
      uStack_48 = 0;
      local_50 = 0;
      uStack_68 = 0;
      local_70 = 0;
      FUN_04b310bc(uVar5,&local_70,1,0,0,
                   *(undefined8 *)
                    Method_Unity_VisualScripting_UnitPort<ControlOutput,_IUnitOutputPort,_ControlConnection>_get_key__
                  );
      if (lVar4 == 0) goto LAB_06af3cdc;
      FUN_050f8afc(lVar4,uVar6,uVar5,
                   *(undefined8 *)
                    Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnComplete__)
      ;
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      lVar4 = FUN_050f8a90(*(long *)(param_1 + 0x68),param_2[6],
                           *(undefined8 *)
                            Method_Meta_Voice_VoiceRequestEvents<VoiceServiceRequestEvent>_get_OnCancel__
                          );
      if (lVar4 != 0) {
        local_70 = *param_2;
        uStack_68 = param_2[1];
        local_60 = param_2[2];
        uStack_58 = param_2[3];
        local_50 = param_2[4];
        uStack_48 = param_2[5];
        local_40 = param_2[6];
        FUN_04b1c068(lVar4,&local_70,
                     *(undefined8 *)
                      Method_Unity_VisualScripting_UnitPortDefinitionCollection<ControlInputDefinition>__ctor__
                    );
        return;
      }
    }
  }
LAB_06af3cdc:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


