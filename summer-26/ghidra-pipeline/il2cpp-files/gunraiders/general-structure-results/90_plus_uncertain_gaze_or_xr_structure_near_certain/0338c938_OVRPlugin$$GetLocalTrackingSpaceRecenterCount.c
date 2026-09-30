/*
FUNCTION_NAME: OVRPlugin$$GetLocalTrackingSpaceRecenterCount
ENTRY_POINT: 0338c938
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetLocalTrackingSpaceRecenterCount(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long unaff_x19;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  long lVar9;
  
  lVar1 = (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x40));
  if (lVar1 == 0) {
    if (*(long *)(unaff_x22 + 0x10) == 0) {
      thunk_FUN_01c273e8(PTR_DAT_042305b0);
      FUN_019b5f60();
      uVar3 = FUN_03295500(0);
      lVar1 = *(long *)(unaff_x22 + 0x28);
      FUN_019b2708(lVar1);
      plVar8 = *(long **)(lVar1 + 0x18);
      FUN_019b2708(plVar8);
      uVar4 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      uVar5 = thunk_FUN_01c273e8(
                                Method_UnityEngine_UIElements_EventBase<PointerOutEvent>_SetCreateFunction__
                                );
      uVar3 = FUN_0336f2b8(uVar5,uVar3,uVar4,0);
      thunk_FUN_01c273e8(System_Threading_ParameterizedThreadStart_TypeInfo);
      uVar4 = thunk_FUN_01c496e0();
      thunk_FUN_033584bc(uVar4,uVar3,0);
      uVar3 = thunk_FUN_01c273e8(
                                Method_System_Collections_Generic_Dictionary_Enumerator<OVRSpace_StorageLocation,_List<OVRSpatialAnchor>>_get_Current__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar4,uVar3);
    }
    lVar1 = *(long *)(unaff_x22 + 0x18);
    if (lVar1 == 0) goto LAB_0338ca2c;
    lVar1 = (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28))
    ;
    lVar7 = *(long *)(unaff_x22 + 0x10);
    if (lVar7 == 0) goto LAB_0338ca2c;
    (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40));
  }
  lVar9 = *(long *)(unaff_x22 + 0x20);
  lVar7 = FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,2);
  if (lVar7 == 0) {
LAB_0338ca2c:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if ((unaff_x20 != 0) && (lVar2 = thunk_FUN_01c495e4(), lVar2 == 0)) {
LAB_0338ca34:
    uVar3 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar3,0);
  }
  uVar6 = *(uint *)(lVar7 + 0x18);
  if (uVar6 != 0) {
    *(long *)(lVar7 + 0x20) = unaff_x20;
    if (unaff_x19 != 0) {
      lVar2 = thunk_FUN_01c495e4();
      if (lVar2 == 0) goto LAB_0338ca34;
      uVar6 = *(uint *)(lVar7 + 0x18);
    }
    if (1 < uVar6) {
      *(long *)(lVar7 + 0x28) = unaff_x19;
      if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0338ca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar9 + 0x18))
                  (*(undefined8 *)(lVar9 + 0x40),lVar1,lVar7,*(undefined8 *)(lVar9 + 0x28));
        return;
      }
      goto LAB_0338ca2c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


