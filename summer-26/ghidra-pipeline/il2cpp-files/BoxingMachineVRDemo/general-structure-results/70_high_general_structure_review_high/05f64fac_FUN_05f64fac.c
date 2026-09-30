/*
FUNCTION_NAME: FUN_05f64fac
ENTRY_POINT: 05f64fac
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_05f64fac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  
  if ((DAT_06b8420b & 1) == 0) {
    FUN_02d6084c(Method_System_Runtime_Serialization_EnumDataContract_WriteEnumValue__);
    FUN_02d6084c(Method_UnityEngine_UIElements_EnumField_ProcessPointerDown<PointerDownEvent>__);
    FUN_02d6084c(Method_UnityEngine_UIElements_EnumField_ProcessPointerDown<PointerMoveEvent>__);
    FUN_02d6084c(Method_UnityEngine_UIElements_EnumField_<ShowMenu>b__42_0__);
    FUN_02d6084c(Method_UnityEngine_UIElements_EnumField_Init__);
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<StartDiscoveringColocationSessions>d__21>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<StopAdvertisingColocationSession>d__20>__
                );
    FUN_02d6084c(Method_UnityEngine_UIElements_EnumField_OnNavigationSubmit__);
    DAT_06b8420b = 1;
  }
  puVar3 = Method_UnityEngine_UIElements_EnumField_ProcessPointerDown<PointerDownEvent>__;
  local_80 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_90 = 0;
  uStack_88 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar7 = FUN_0479a25c(*(long *)(param_1 + 0x30),
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_EnumField_ProcessPointerDown<PointerDownEvent>__
                        );
    puVar6 = Method_UnityEngine_UIElements_EnumField_OnNavigationSubmit__;
    puVar5 = Method_UnityEngine_UIElements_EnumField_<ShowMenu>b__42_0__;
    puVar4 = Method_UnityEngine_UIElements_EnumField_ProcessPointerDown<PointerMoveEvent>__;
    puVar2 = Method_System_Runtime_Serialization_EnumDataContract_WriteEnumValue__;
    puVar1 = 
    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<StartDiscoveringColocationSessions>d__21>__
    ;
    if (lVar7 != 0) {
      FUN_0446c5d4(&local_b0,lVar7,
                   *(undefined8 *)Method_UnityEngine_UIElements_EnumField_OnNavigationSubmit__);
      uStack_68 = uStack_a8;
      local_70 = local_b0;
      uStack_58 = uStack_98;
      local_60 = lStack_a0;
      while (uVar8 = FUN_04b12440(&local_70,*(undefined8 *)puVar5), (uVar8 & 1) != 0) {
        uStack_78 = uStack_58;
        local_80 = local_60;
        if (local_60 != 0) {
          FUN_03d3e704(&local_80,*(undefined8 *)puVar1);
        }
      }
      FUN_04b1243c(&local_70,*(undefined8 *)puVar4);
      if (*(long *)(param_1 + 0x30) != 0) {
        FUN_0479a604(*(long *)(param_1 + 0x30),*(undefined8 *)puVar2);
        if ((*(long *)(param_1 + 0x38) != 0) &&
           (lVar7 = FUN_0479a25c(*(long *)(param_1 + 0x38),*(undefined8 *)puVar3), lVar7 != 0)) {
          FUN_0446c5d4(&local_b0,lVar7,*(undefined8 *)puVar6);
          uStack_68 = uStack_a8;
          local_70 = local_b0;
          uStack_58 = uStack_98;
          local_60 = lStack_a0;
          while (uVar8 = FUN_04b12440(&local_70,*(undefined8 *)puVar5), (uVar8 & 1) != 0) {
            uStack_88 = uStack_58;
            local_90 = local_60;
            if (local_60 != 0) {
              FUN_03d3e704(&local_90,*(undefined8 *)puVar1);
            }
          }
          FUN_04b1243c(&local_70,*(undefined8 *)puVar4);
          if (*(long *)(param_1 + 0x38) != 0) {
            FUN_0479a604(*(long *)(param_1 + 0x38),*(undefined8 *)puVar2);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


