/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$add_OnAddonCreateOrUpdateNintendoRequestEvent
ENTRY_POINT: 0522a7b4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void PlayFab_Events_PlayFabEvents__add_OnAddonCreateOrUpdateNintendoRequestEvent(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar7;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  plVar7 = *(long **)(unaff_x21 + 0xa68);
  if ((*(byte *)(unaff_x20 + 0x182) & 1) == 0) {
    FUN_02d4dc40(Unity_Properties_ContainerPropertyBag<Translate>_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06647a68);
    FUN_02d4dc40(Unity_Properties_ContainerPropertyBag<TextAutoSize>_TypeInfo);
    FUN_02d4dc40(Unity_Properties_ContainerPropertyBag<TextShadow>_TypeInfo);
    FUN_02d4dc40(Unity_Properties_ContainerPropertyBag<TimeValue>_TypeInfo);
    FUN_02d4dc40(Unity_Properties_ContainerPropertyBag<TransformOrigin>_TypeInfo);
    *(undefined1 *)(unaff_x20 + 0x182) = 1;
  }
  lVar5 = *plVar7;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
    lVar5 = *plVar7;
  }
  puVar4 = Unity_Properties_ContainerPropertyBag<TransformOrigin>_TypeInfo;
  puVar3 = Unity_Properties_ContainerPropertyBag<TimeValue>_TypeInfo;
  puVar2 = Unity_Properties_ContainerPropertyBag<TextShadow>_TypeInfo;
  puVar1 = Unity_Properties_ContainerPropertyBag<TextAutoSize>_TypeInfo;
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xb0);
  if (lVar5 != 0) {
    _in_stack_00000010 =
         FUN_039369e0(lVar5,*(undefined8 *)Unity_Properties_ContainerPropertyBag<Translate>_TypeInfo
                     );
    _in_stack_00000020 = FUN_04005224(&stack0x00000010,*(undefined8 *)puVar2);
    while( true ) {
      uVar6 = FUN_04005300(&stack0x00000020,*(undefined8 *)puVar3);
      if ((uVar6 & 1) == 0) {
        FUN_0400538c(&stack0x00000020,*(undefined8 *)puVar1);
        return;
      }
      lVar5 = FUN_04005238(&stack0x00000020,*(undefined8 *)puVar4);
      if (lVar5 == 0) break;
      if (*(byte *)(lVar5 + 0x20) == unaff_w19) {
        if (*(int *)(*plVar7 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        FUN_052253bc(lVar5);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


