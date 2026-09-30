/*
FUNCTION_NAME: FUN_06a9a108
ENTRY_POINT: 06a9a108
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_8;telemetry_or_network_hits_6
*/


bool FUN_06a9a108(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  
  puVar1 = 
  Method_UnityEngine_XR_ARSubsystems_TrackingSubsystem<XRRaycast,_XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider>__ctor__
  ;
  if ((DAT_076e3003 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARSubsystems_TrackingSubsystem<XRRaycast,_XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioActivation__
                      );
    DAT_076e3003 = 1;
  }
  lVar3 = thunk_FUN_032a55a4(param_1,*(undefined8 *)puVar1);
  if ((lVar3 == 0) || (plVar4 = (long *)FUN_06a99e9c(), plVar4 == (long *)0x0)) {
    bVar2 = false;
  }
  else {
    lVar3 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)
             Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioActivation__
           ) {
          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_06a9a1c4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_032937ac(plVar4,*(long *)
                                  Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioActivation__
                          ,5);
LAB_06a9a1c4:
    lVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    bVar2 = lVar3 != 0 && lVar3 != param_1;
  }
  return bVar2;
}


