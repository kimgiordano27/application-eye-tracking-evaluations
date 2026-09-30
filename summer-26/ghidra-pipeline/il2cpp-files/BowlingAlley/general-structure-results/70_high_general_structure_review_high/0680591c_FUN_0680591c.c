/*
FUNCTION_NAME: FUN_0680591c
ENTRY_POINT: 0680591c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_0680591c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  
  puVar10 = 
  Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_Interactable__;
  puVar9 = 
  Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_add_WhenStateChanged__;
  puVar8 = 
  Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_add_WhenPostprocessed__;
  puVar7 = Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Start__;
  puVar6 = Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_HandleDisabled__;
  puVar5 = Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_DoPreprocess__;
  puVar1 = 
  Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_ComputeCandidateTiebreaker__
  ;
  puVar4 = Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>_Awake__;
  puVar3 = 
  Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<IMECompositionString>>_get_Item__;
  puVar2 = PTR_DAT_072828e0;
  if ((DAT_076e0c57 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072828d8);
    thunk_FUN_032e1da0(PTR_DAT_072828e0);
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_Interactable__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>_Awake__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<IMECompositionString>>_get_Item__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_State__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_HandleDisabled__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_Start__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_DoPreprocess__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_ComputeCandidateTiebreaker__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_add_WhenPostprocessed__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_add_WhenStateChanged__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_remove_WhenPostprocessed__
                      );
    DAT_076e0c57 = 1;
  }
  uVar11 = FUN_06ba9518(*(undefined8 *)puVar1,1,0,0,0);
  **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar11;
  uVar11 = FUN_06ba9518(*(undefined8 *)puVar5,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_06ba9518(*(undefined8 *)puVar6,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = uVar11;
  uVar11 = FUN_06ba9518(*(undefined8 *)puVar7,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) = uVar11;
  uVar11 = FUN_06ba9518(*(undefined8 *)puVar8,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20) = uVar11;
  uVar11 = FUN_06ba9518(*(undefined8 *)puVar9,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x28) = uVar11;
  uVar11 = FUN_06ba9518(*(undefined8 *)
                         Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_remove_WhenPostprocessed__
                        ,1,0,0,0);
  lVar12 = *(long *)(*(long *)puVar3 + 0xb8);
  *(undefined8 *)(lVar12 + 0x30) = uVar11;
  puVar13 = (undefined8 *)(lVar12 + 0x38);
  *puVar13 = *(undefined8 *)
              Method_Oculus_Interaction_Interactor<PokeInteractor,_PokeInteractable>_get_State__;
  thunk_FUN_0333a630(puVar13);
  uVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear(uVar11,*(undefined8 *)puVar10);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x48);
  *puVar13 = uVar11;
  thunk_FUN_0333a630(puVar13,uVar11);
  uVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_072828d8;
  FUN_03cd76d8(uVar11,*(undefined8 *)PTR_DAT_072828d8);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x50);
  *puVar13 = uVar11;
  thunk_FUN_0333a630(puVar13,uVar11);
  uVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar4);
  System_Collections_Generic_List<HIDParser_HIDReportData>__Clear(uVar11,*(undefined8 *)puVar10);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x58);
  *puVar13 = uVar11;
  thunk_FUN_0333a630(puVar13,uVar11);
  uVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
  FUN_03cd76d8(uVar11,*(undefined8 *)puVar1);
  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x60);
  *puVar13 = uVar11;
  thunk_FUN_0333a630(puVar13,uVar11);
  return;
}


