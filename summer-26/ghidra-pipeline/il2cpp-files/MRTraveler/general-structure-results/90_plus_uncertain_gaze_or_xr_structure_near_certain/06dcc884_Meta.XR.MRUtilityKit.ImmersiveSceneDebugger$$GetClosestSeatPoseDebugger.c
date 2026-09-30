/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetClosestSeatPoseDebugger
ENTRY_POINT: 06dcc884
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetClosestSeatPoseDebugger(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x19;
  long *unaff_x20;
  long lVar7;
  long *plVar8;
  undefined *puVar6;
  
  uVar2 = thunk_FUN_03ce0d60(param_1,*(undefined8 *)*unaff_x20);
  if ((uVar2 & 1) == 0) {
    uVar4 = thunk_FUN_03ce5214(PTR_DAT_08e695a0);
    uVar2 = thunk_FUN_03ce0d60(uVar4,*(undefined8 *)*unaff_x20);
    if ((uVar2 & 1) == 0) {
      plVar8 = (long *)__cxa_allocate_exception(8);
      *plVar8 = *unaff_x20;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(plVar8,&PTR_PTR_088de0a8,0);
    }
    lVar7 = *unaff_x20;
    __cxa_end_catch();
    thunk_FUN_03ce5214(PTR_DAT_08e90fc8);
    lVar3 = thunk_FUN_03cf5234();
    FUN_07145224(lVar3,0);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x18) = unaff_x19;
      thunk_FUN_03d233cc();
      *(long *)(lVar3 + 0x10) = lVar7;
      thunk_FUN_03d233cc((long *)(lVar3 + 0x10),lVar7);
      iVar1 = FUN_06dcca30();
      if (iVar1 != 0) {
        return;
      }
      thunk_FUN_03ce5214(PTR_DAT_08e69e98);
      uVar4 = thunk_FUN_03cf5234();
      puVar6 = PTR_DAT_08e90fd0;
FUN_060fcf0c:
      uVar5 = thunk_FUN_03ce5214(puVar6);
      FUN_07064478(uVar4,lVar3,uVar5,0);
      uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e90fa8);
      puVar6 = PTR_DAT_08e82448;
      if ((DAT_09415df7 & 1) == 0) {
        FUN_03c8f898(PTR_DAT_08e82448,uVar4,uVar5);
        DAT_09415df7 = 1;
      }
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_06dff658(uVar4,0);
      return;
    }
  }
  else {
    lVar7 = *unaff_x20;
    __cxa_end_catch();
    thunk_FUN_03ce5214(PTR_DAT_08e90fb8);
    lVar3 = thunk_FUN_03cf5234();
    FUN_07145224(lVar3,0);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x18) = unaff_x19;
      thunk_FUN_03d233cc();
      plVar8 = (long *)(lVar3 + 0x10);
      *plVar8 = lVar7;
      thunk_FUN_03d233cc(plVar8,lVar7);
      if (*plVar8 != 0) {
        if ((*(uint *)(*plVar8 + 0x8c) | 8) == 0xe) {
          return;
        }
        iVar1 = FUN_06dcca30();
        if (iVar1 != 0) {
          return;
        }
        thunk_FUN_03ce5214(PTR_DAT_08e69e98);
        uVar4 = thunk_FUN_03cf5234();
        puVar6 = PTR_DAT_08e90fc0;
        goto FUN_060fcf0c;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


