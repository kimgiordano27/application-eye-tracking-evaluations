/*
FUNCTION_NAME: FUN_06ac51e0
ENTRY_POINT: 06ac51e0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_8;telemetry_or_network_hits_8
*/


void FUN_06ac51e0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  puVar1 = 
  Method_UnityEngine_XR_ARSubsystems_TrackingSubsystem<XRRaycast,_XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider>__ctor__
  ;
  if ((DAT_076e319b & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARSubsystems_TrackingSubsystem<XRRaycast,_XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioActivation__
                      );
    DAT_076e319b = 1;
  }
  plVar2 = (long *)thunk_FUN_032a55a4(param_2,*(undefined8 *)puVar1);
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 06ac5238 to 06bc52a3 has its CatchHandler @ 06ac5514 */
    lVar6 = *plVar2;
    lVar5 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06ac5288;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_032937ac(plVar2,lVar5,0);
LAB_06ac5288:
    plVar2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    puVar1 = 
    Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioActivation__;
    if (plVar2 != (long *)0x0) {
      lVar5 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)
               Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioActivation__
             ) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 7) * 0x10 + 0x138);
            goto LAB_06ac52f4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_032937ac(plVar2,*(long *)
                                    Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioActivation__
                            ,7);
LAB_06ac52f4:
      lVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if (lVar5 != 0) {
        lVar5 = *plVar2;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 7) * 0x10 + 0x138);
              goto LAB_06ac5364;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_032937ac(plVar2,*(long *)puVar1,7);
LAB_06ac5364:
        uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
                    /* WARNING: Could not recover jumptable at 0x06ac5394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x3b8))(param_1,plVar2,uVar4,*(undefined8 *)(*param_1 + 0x3c0));
        return;
      }
    }
  }
  return;
}


