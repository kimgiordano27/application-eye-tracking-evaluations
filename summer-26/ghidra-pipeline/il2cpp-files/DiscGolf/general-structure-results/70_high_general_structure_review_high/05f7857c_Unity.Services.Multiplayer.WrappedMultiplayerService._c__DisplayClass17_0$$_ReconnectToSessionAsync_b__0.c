/*
FUNCTION_NAME: Unity.Services.Multiplayer.WrappedMultiplayerService.<>c__DisplayClass17_0$$<ReconnectToSessionAsync>b__0
ENTRY_POINT: 05f7857c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Unity_Services_Multiplayer_WrappedMultiplayerService_<>c__DisplayClass17_0__<ReconnectToSessionAsync>b__0
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  
  puVar2 = 
  Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SortDirection>_set_defaultValue__;
  if ((*(byte *)(unaff_x20 + 0x4a1) & 1) == 0) {
    FUN_02d965b8(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ulong>_set_defaultValue__
                );
    FUN_02d965b8(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<Columns_StretchMode>_set_defaultValue__
                );
    FUN_02d965b8(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollView_NestedInteractionKind>_set_defaultValue__
                );
    FUN_02d965b8(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SortDirection>_set_defaultValue__
                );
    FUN_02d965b8(
                Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollView_TouchScrollBehavior>_set_defaultValue__
                );
    FUN_02d965b8(PTR_DAT_069fb990);
    *(undefined1 *)(unaff_x20 + 0x4a1) = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar5 = FUN_05f76f3c();
  if (lVar5 != 0) {
    uVar6 = FUN_05f77124();
    if ((uVar6 & 1) != 0) {
      uVar4 = 0;
LAB_05f78744:
      return uVar4 & 1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar5 = FUN_05f76f3c();
    if (lVar5 != 0) {
      if (DAT_06dc44f4 == '\0') {
        FUN_02d965b8(
                    Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<SortDirection>_set_defaultValue__
                    );
        DAT_06dc44f4 = '\x01';
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar5 = *(long *)puVar2;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (lVar5 != 0) {
        FUN_04010c90(&stack0x00000008,lVar5,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollView_TouchScrollBehavior>_set_defaultValue__
                    );
        puVar3 = 
        Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<Columns_StretchMode>_set_defaultValue__
        ;
        puVar1 = PTR_DAT_069fb990;
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        in_stack_00000008 = 0;
        in_stack_00000010 = &stack0x00000020;
        do {
          do {
            do {
              uVar4 = FUN_05156804(&stack0x00000020,*(undefined8 *)puVar3);
              lVar5 = in_stack_00000030;
              if ((uVar4 & 1) == 0) goto LAB_05f78730;
            } while (in_stack_00000030 == 0);
            uVar7 = *(undefined8 *)(in_stack_00000030 + 0x18);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar6 = FUN_06350670(uVar7,0,0);
          } while ((uVar6 & 1) != 0);
          lVar5 = *(long *)(lVar5 + 0x18);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar7 = *(undefined8 *)(lVar5 + 0x20);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar6 = FUN_05f77f70(param_1,lVar5,uVar7);
        } while (((((uVar6 & 1) != 0) || (*(char *)(lVar5 + 0x58) == '\0')) ||
                 (*(int *)(lVar5 + 0x60) == 0)) || (*(char *)(lVar5 + 0x5a) == '\0'));
LAB_05f78730:
        FUN_05156800(&stack0x00000020,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ulong>_set_defaultValue__
                    );
        goto LAB_05f78744;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


