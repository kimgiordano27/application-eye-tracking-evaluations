/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_SendEvent2
ENTRY_POINT: 0339b0b0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_SendEvent2(code *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x20;
  long *plVar5;
  undefined8 *unaff_x21;
  long lVar6;
  long *unaff_x24;
  undefined8 uVar7;
  long *unaff_x27;
  
  (*param_1)();
  lVar6 = *unaff_x20;
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar1 = FUN_032ea0d4(lVar6,0,0);
  if ((uVar1 & 1) != 0) {
    lVar6 = *unaff_x20;
    uVar7 = *(undefined8 *)Method_UnityEngine_UIElements_EventBase<KeyUpEvent>_SetCreateFunction__;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar7 = FUN_032e04b8(uVar7,0);
    uVar1 = FUN_032ea0d4(lVar6,uVar7,0);
    if ((uVar1 & 1) != 0) {
      if ((long *)*unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar1 = (**(code **)(*(long *)*unaff_x20 + 0x298))();
      if ((uVar1 & 1) == 0) {
        thunk_FUN_01c273e8(PTR_DAT_042305b0);
        FUN_019b5f60();
        uVar7 = FUN_03295500(0);
        FUN_019b2708();
        uVar2 = (**(code **)(*unaff_x24 + 0x2c8))();
        plVar5 = (long *)*unaff_x20;
        FUN_019b2708(plVar5);
        uVar3 = (**(code **)(*plVar5 + 0x2c8))(plVar5,*(undefined8 *)(*plVar5 + 0x2d0));
        uVar4 = thunk_FUN_01c273e8(
                                  Method_System_Collections_Generic_HashSet<IResourceLocation>_IntersectWith__
                                  );
        FUN_033704d4(uVar4,uVar7,uVar2,uVar3,0);
        uVar7 = FUN_0335cdc4();
        uVar2 = thunk_FUN_01c273e8(
                                  Method_System_Collections_Generic_HashSet<IResourceLocation>_Add__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar7,uVar2);
      }
    }
  }
  *unaff_x20 = (long)unaff_x24;
  uVar7 = FUN_03395e54();
  *unaff_x21 = uVar7;
  return;
}


