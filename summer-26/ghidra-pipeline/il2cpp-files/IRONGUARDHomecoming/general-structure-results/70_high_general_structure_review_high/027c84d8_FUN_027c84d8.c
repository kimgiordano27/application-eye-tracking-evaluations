/*
FUNCTION_NAME: FUN_027c84d8
ENTRY_POINT: 027c84d8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_027c84d8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  
  if ((DAT_048305d4 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_DistanceGrabInteractor_HandleOtherPointerEventRaised__
                      );
    thunk_FUN_01efb3a4(Method_OculusSampleFramework_DistanceGrabberSample_ToggleGrabThroughWalls__);
    thunk_FUN_01efb3a4(Method_OculusSampleFramework_DistanceGrabberSample_ToggleSphereCasting__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_HandGrab_DistanceHandGrabInteractable_<Start>b__43_0__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_HandGrab_DistanceHandGrabInteractor_<Start>b__67_0__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_DistanceReticles_DistantInteractionLineVisual_HandlePostProcessed__
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_DistanceReticles_DistantInteractionLineVisual_HandleStateChanged__
                      );
    thunk_FUN_01efb3a4(Method_System_Linq_Expressions_Interpreter_DivInstruction_Create__);
    thunk_FUN_01efb3a4(Method_System_Net_Dns_BeginGetHostAddresses__);
    DAT_048305d4 = 1;
  }
  puVar6 = Method_System_Net_Dns_BeginGetHostAddresses__;
  puVar5 = Method_System_Linq_Expressions_Interpreter_DivInstruction_Create__;
  puVar4 = Method_Oculus_Interaction_HandGrab_DistanceHandGrabInteractor_<Start>b__67_0__;
  puVar3 = Method_Oculus_Interaction_HandGrab_DistanceHandGrabInteractable_<Start>b__43_0__;
  puVar2 = Method_OculusSampleFramework_DistanceGrabberSample_ToggleGrabThroughWalls__;
  puVar1 = Method_Oculus_Interaction_DistanceGrabInteractor_HandleOtherPointerEventRaised__;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_02c04fdc(&local_b0,*(long *)(param_1 + 0x18),
                 *(undefined8 *)
                  Method_OculusSampleFramework_DistanceGrabberSample_ToggleSphereCasting__);
    uStack_78 = uStack_a8;
    local_80 = local_b0;
    uStack_68 = uStack_98;
    local_70 = uStack_a0;
    uStack_58 = uStack_88;
    local_60 = local_90;
    while (uVar8 = FUN_02d073ec(&local_80,*(undefined8 *)puVar4), lVar7 = local_60, (uVar8 & 1) != 0
          ) {
      if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_026073f4(local_60,*(undefined8 *)puVar6);
      lVar9 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44();
      }
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar9 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44();
      }
      if (**(long **)(lVar9 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_025d783c(**(long **)(lVar9 + 0xb8),lVar7,*(undefined8 *)puVar5);
    }
    FUN_02d07520(&local_80,*(undefined8 *)puVar3);
    if (*(long *)(param_1 + 0x18) != 0) {
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator<ConversionUtility_ConversionQuery,_object>___ctor
                (*(long *)(param_1 + 0x18),*(undefined8 *)puVar2);
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_02c01eec(*(long *)(param_1 + 0x10),*(undefined8 *)puVar1);
        *(undefined8 *)(param_1 + 0x20) = 0;
        thunk_FUN_01f51358((undefined8 *)(param_1 + 0x20),0);
        *(undefined4 *)(param_1 + 0x28) = 0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


