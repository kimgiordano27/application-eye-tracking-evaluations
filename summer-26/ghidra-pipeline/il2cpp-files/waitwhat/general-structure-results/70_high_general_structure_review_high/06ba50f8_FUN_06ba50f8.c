/*
FUNCTION_NAME: FUN_06ba50f8
ENTRY_POINT: 06ba50f8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_20;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_6
*/


void FUN_06ba50f8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((DAT_07560320 & 1) == 0) {
    FUN_03188a78(
                Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Position>__ctor__
                );
    FUN_03188a78(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_get_Item__
                );
    FUN_03188a78(RoomSettingsSync_<DelaySync>d__25_TypeInfo);
    FUN_03188a78(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_set_Item__
                );
    FUN_03188a78(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_Append__
                );
    FUN_03188a78(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_RemoveAtByMovingTailWithCapacity__
                );
    FUN_03188a78(
                Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_get_Item__
                );
    DAT_07560320 = 1;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_04b335d8(*(long *)(param_1 + 0x10),
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_Append__
                );
    lVar5 = *(long *)(param_1 + 0x10);
    if (DAT_07547007 == '\0') {
      FUN_03188a78(PTR_DAT_070d2c80);
      DAT_07547007 = '\x01';
    }
    if (lVar5 != 0) {
      lVar3 = *(long *)(*(long *)PTR_DAT_070d2c80 + 0xb8);
      uStack_58 = *(undefined8 *)(lVar3 + 0x48);
      local_60 = *(undefined8 *)(lVar3 + 0x40);
      uStack_48 = *(undefined8 *)(lVar3 + 0x58);
      uStack_50 = *(undefined8 *)(lVar3 + 0x50);
      uStack_38 = *(undefined8 *)(lVar3 + 0x68);
      local_40 = *(undefined8 *)(lVar3 + 0x60);
      uStack_28 = *(undefined8 *)(lVar3 + 0x78);
      uStack_30 = *(undefined8 *)(lVar3 + 0x70);
      FUN_04b33ae0(lVar5,&local_60,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_RemoveAtByMovingTailWithCapacity__
                  );
      puVar2 = 
      Method_UnityEngine_UIElements_InlineStyleAccessPropertyBag_InlineStyleEnumProperty<Position>__ctor__
      ;
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_04b345ac(*(long *)(param_1 + 0x18),
                     *(undefined8 *)
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputManager_StateChangeMonitorTimeout>_set_Item__
                    );
        lVar5 = *(long *)(param_1 + 0x18);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        if (lVar5 != 0) {
          puVar4 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
          FUN_04b34a38(*puVar4,puVar4[1],puVar4[2],puVar4[3],lVar5,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputUser_OngoingAccountSelection>_get_Item__
                      );
          lVar5 = *(long *)(param_1 + 0x20);
          if (lVar5 != 0) {
            iVar1 = *(int *)(lVar5 + 0x18);
            *(undefined4 *)(lVar5 + 0x18) = 0;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (0 < iVar1) {
              FUN_0595236c(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
            }
            lVar5 = *(long *)(param_1 + 0x28);
            if (lVar5 != 0) {
              iVar1 = *(int *)(lVar5 + 0x18);
              *(undefined4 *)(lVar5 + 0x18) = 0;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (0 < iVar1) {
                FUN_0595236c(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
              }
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


