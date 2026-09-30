/*
FUNCTION_NAME: FUN_031035d8
ENTRY_POINT: 031035d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_031035d8(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar1 = UnityEngine_EventSystems_ExecuteEvents_EventFunction<IPointerDownHandler>_TypeInfo;
  if ((DAT_0412ba4b & 1) == 0) {
    FUN_01ab69ac(UnityEngine_EventSystems_ExecuteEvents_EventFunction<IPointerEnterHandler>_TypeInfo
                );
    FUN_01ab69ac(PTR_DAT_03cc8808);
    FUN_01ab69ac(System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo)
    ;
    FUN_01ab69ac(UnityEngine_EventSystems_ExecuteEvents_EventFunction<IPointerExitHandler>_TypeInfo)
    ;
    FUN_01ab69ac(UnityEngine_EventSystems_ExecuteEvents_EventFunction<IPointerDownHandler>_TypeInfo)
    ;
    DAT_0412ba4b = 1;
  }
  lVar4 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
  FUN_027b3d9c(lVar4,0);
  puVar3 = UnityEngine_EventSystems_ExecuteEvents_EventFunction<IPointerExitHandler>_TypeInfo;
  puVar2 = UnityEngine_EventSystems_ExecuteEvents_EventFunction<IPointerEnterHandler>_TypeInfo;
  puVar1 = PTR_DAT_03cc8808;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = param_2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar4 + 0x10),param_2);
    *(undefined8 *)(lVar4 + 0x18) = param_4;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar4 + 0x18),param_4);
    *(undefined8 *)(lVar4 + 0x20) = param_5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar4 + 0x20),param_5);
    lVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
    UnityEngine_InputSystem_InputDevice__get_allControls();
    uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
    FUN_021dd4e8(uVar6,lVar4,*(undefined8 *)puVar3,0);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x98) = uVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar5 + 0x98),uVar6);
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      if (param_3 != 0) {
        uStack_68 = 0;
        local_70 = 0;
        local_60 = 0;
        FUN_01fdff7c(&local_a8,param_3,lVar5,&local_70,
                     *(undefined8 *)
                      System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_TypeInfo
                    );
        param_1[1] = uStack_a0;
        *param_1 = local_a8;
        param_1[3] = uStack_90;
        param_1[2] = local_98;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


