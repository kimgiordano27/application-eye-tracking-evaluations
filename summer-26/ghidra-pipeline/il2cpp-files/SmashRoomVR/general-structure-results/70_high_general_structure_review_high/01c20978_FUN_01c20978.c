/*
FUNCTION_NAME: FUN_01c20978
ENTRY_POINT: 01c20978
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_01c20978(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  
  if ((DAT_03fed481 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_Unity_VisualScripting_FullSerializer_Internal_fsTypeExtensions_<>c__DisplayClass2_0_<CSharpName>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJson_<>c_<FromLayout>b__15_1__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJson_<>c_<ToLayout>b__14_0__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent_<>c_<get_usages>b__7_0__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_InputSystem_InputControlScheme_MatchResult_Enumerator_get_Current__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController_<>c_<PlayAllEventsAccordingToTimestamps>b__38_0__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController_<>c__DisplayClass43_0_<ApplyDeviceMapping>b__0__
                      );
    DAT_03fed481 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_78 = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_025bc74c(*(long *)(param_1 + 0x60),
                 *(undefined8 *)
                  Method_Unity_VisualScripting_FullSerializer_Internal_fsTypeExtensions_<>c__DisplayClass2_0_<CSharpName>b__0__
                );
    puVar6 = Method_UnityEngine_InputSystem_InputControlScheme_MatchResult_Enumerator_get_Current__;
    puVar5 = 
    Method_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent_<>c_<get_usages>b__7_0__;
    puVar4 = 
    Method_UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJson_<>c_<ToLayout>b__14_0__;
    puVar3 = 
    Method_UnityEngine_InputSystem_Layouts_InputControlLayout_LayoutJson_<>c_<FromLayout>b__15_1__;
    puVar2 = 
    Method_UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor_<UpdateCollidersAfterOnTriggerStay>d__67_System_Collections_IEnumerator_Reset__
    ;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_02b5a400(&local_90,*(long *)(param_1 + 0x40),
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_LowLevel_InputEventTrace_ReplayController_<>c__DisplayClass43_0_<ApplyDeviceMapping>b__0__
                  );
      uStack_68 = uStack_88;
      local_70 = local_90;
      local_60 = local_80;
      do {
        uVar8 = FUN_02739b98(&local_70,*(undefined8 *)puVar6);
        lVar7 = local_60;
        if ((uVar8 & 1) == 0) {
          FUN_02739b94(&local_70,*(undefined8 *)puVar5);
          return;
        }
        if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        plVar13 = *(long **)(local_60 + 0x10);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar11 = *plVar13;
        uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar8 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_01c20af0;
            }
            uVar8 = uVar8 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 != 0);
        }
        puVar9 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)puVar2,1);
LAB_01c20af0:
        uVar10 = (*(code *)*puVar9)(plVar13,puVar9[1]);
        iVar1 = *(int *)(lVar7 + 0x18);
        local_78 = 0;
        if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar8 = FUN_025bddd0(*(long *)(param_1 + 0x60),uVar10,&local_78,*(undefined8 *)puVar3);
        if ((uVar8 & 1) == 0) {
          if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          FUN_025bc5b0(*(long *)(param_1 + 0x60),uVar10,lVar7,*(undefined8 *)puVar4);
        }
        else {
          if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          if (*(int *)(local_78 + 0x18) < iVar1) {
            *(undefined8 *)(local_78 + 0x10) = *(undefined8 *)(lVar7 + 0x10);
            thunk_FUN_01b4f09c((undefined8 *)(local_78 + 0x10));
            if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            *(int *)(local_78 + 0x18) = iVar1;
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


