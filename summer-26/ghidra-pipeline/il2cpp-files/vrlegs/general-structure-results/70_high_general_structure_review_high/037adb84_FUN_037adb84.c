/*
FUNCTION_NAME: FUN_037adb84
ENTRY_POINT: 037adb84
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


void FUN_037adb84(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_DAT_03cbfcb0;
  if ((DAT_04137655 & 1) == 0) {
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_get_Count__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_get_Item__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_get_Keys__
                );
    FUN_01ab69ac(PTR_DAT_03cbfcb0);
    FUN_01ab69ac(
                Unity_Properties_Internal_ReflectedPropertyBagProvider_<GetPropertyMembers>d__22_TypeInfo
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_set_Item__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_GetEnumerator__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_Dictionary<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_set_Item__
                );
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<LocomotionSystem,_Pose>__ctor__);
    FUN_01ab69ac(Method_System_Collections_Generic_Dictionary<LocomotionSystem,_Pose>_TryGetValue__)
    ;
    DAT_04137655 = 1;
  }
  lVar5 = FUN_01ab6a94(*(undefined8 *)puVar1,5);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(undefined8 *)(lVar5 + 0x20) =
           *(undefined8 *)
            Method_System_Collections_Generic_Dictionary<LocomotionSystem,_Pose>_TryGetValue__;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar5 + 0x20));
      if (1 < *(uint *)(lVar5 + 0x18)) {
        *(undefined8 *)(lVar5 + 0x28) =
             *(undefined8 *)
              Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_set_Item__
        ;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar5 + 0x28));
        if (2 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x30) =
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<LocomotionSystem,_Pose>__ctor__;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(lVar5 + 0x30));
          if (3 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x38) =
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_GetEnumerator__
            ;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lVar5 + 0x38));
            puVar4 = 
            Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_get_Keys__
            ;
            puVar3 = 
            Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_get_Item__
            ;
            puVar2 = 
            Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_get_Count__
            ;
            puVar1 = 
            Unity_Properties_Internal_ReflectedPropertyBagProvider_<GetPropertyMembers>d__22_TypeInfo
            ;
            if (4 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x40) =
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_set_Item__
              ;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              *(long *)(param_1 + 0x18) = lVar5;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((long *)(param_1 + 0x18),lVar5);
              uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
              FUN_021f3c54(uVar6,*(undefined8 *)puVar3);
              *(undefined8 *)(param_1 + 0x20) = uVar6;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(param_1 + 0x20),uVar6);
              uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
              FUN_021f3c54(uVar6,*(undefined8 *)puVar3);
              *(undefined8 *)(param_1 + 0x28) = uVar6;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(param_1 + 0x28),uVar6);
              FUN_027b3d9c(param_1,0);
              uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
              FUN_039127a0(uVar6,param_1,*(undefined8 *)puVar2,0);
              FUN_03911684(uVar6,0);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


