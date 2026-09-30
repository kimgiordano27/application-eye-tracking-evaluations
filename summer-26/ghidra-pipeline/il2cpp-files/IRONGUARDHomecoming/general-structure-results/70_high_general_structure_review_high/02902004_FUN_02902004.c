/*
FUNCTION_NAME: FUN_02902004
ENTRY_POINT: 02902004
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x02902280) */

void FUN_02902004(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  if ((DAT_04830b44 & 1) == 0) {
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
                      Method_System_DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__
                      );
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_All<ControlOutput>__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_DistanceReticles_DistantInteractionLineVisual_HandleStateChanged__
                      );
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_EnumBuilder_get_UnderlyingSystemType__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_EnumField_ProcessPointerDown<PointerDownEvent>__
                      );
    DAT_04830b44 = 1;
  }
  local_48 = 0;
  uStack_68 = 0;
  local_70 = (long *)0x0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 400))(param_1);
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x18) + 0x20);
  if (plVar10 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)
             Method_System_DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__
           ) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0290213c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar10,*(long *)
                                   Method_System_DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__
                          ,1);
LAB_0290213c:
    uVar5 = (*(code *)*puVar4)(plVar10,puVar4[1]);
  }
  FUN_041d3014(&local_48,uVar5,0);
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_02c04fdc(&local_b0,lVar7,
               *(undefined8 *)
                Method_OculusSampleFramework_DistanceGrabberSample_ToggleSphereCasting__);
  puVar3 = Method_System_Reflection_Emit_EnumBuilder_get_UnderlyingSystemType__;
  puVar2 = Method_Oculus_Interaction_HandGrab_DistanceHandGrabInteractor_<Start>b__67_0__;
  puVar1 = Method_Oculus_Interaction_HandGrab_DistanceHandGrabInteractable_<Start>b__43_0__;
  uStack_78 = uStack_a8;
  local_80 = local_b0;
  uStack_68 = uStack_98;
  local_70 = plStack_a0;
  uStack_58 = uStack_88;
  local_60 = local_90;
  do {
    uVar8 = FUN_02d073ec(&local_80,*(undefined8 *)puVar2);
    lVar7 = local_60;
    plVar10 = local_70;
    if ((uVar8 & 1) == 0) {
      FUN_02d07520(&local_80,*(undefined8 *)puVar1);
      if (*(long *)(param_1 + 0x18) != 0) {
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x198))();
        FUN_041d30a0(&local_48,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    while( true ) {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(lVar7 + 0x20) < 1) break;
      plVar6 = (long *)FUN_026078c4(lVar7,*(undefined8 *)puVar3);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar10 + 0x198))(plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x1a0));
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar6 + 0x218))(plVar6,*(undefined8 *)(*plVar6 + 0x220));
    }
  } while( true );
}


