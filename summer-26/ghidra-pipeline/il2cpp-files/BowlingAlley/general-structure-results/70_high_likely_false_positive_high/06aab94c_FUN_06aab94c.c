/*
FUNCTION_NAME: FUN_06aab94c
ENTRY_POINT: 06aab94c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_16;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_06aab94c(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  
  puVar1 = PTR_DAT_07279fc0;
  if ((DAT_076e30ae & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_XR_ARSubsystems_TrackingSubsystem<XRRaycast,_XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioActivation__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07279fc0);
    thunk_FUN_032e1da0(Method_NovaSamples_UIControls_UIControl<ButtonVisuals>__ctor__);
    thunk_FUN_032e1da0(Method_NovaSamples_UIControls_UIControl<ButtonVisuals>_get_View__);
    thunk_FUN_032e1da0(Method_NovaSamples_UIControls_UIControl<DropdownVisuals>__ctor__);
    DAT_076e30ae = 1;
  }
  puVar2 = 
  Method_Meta_Voice_TranscriptionRequestEvents<VoiceServiceRequestEvent>_get_OnAudioActivation__;
  lVar3 = thunk_FUN_032a55a4(param_2,*(undefined8 *)puVar1);
  if ((lVar3 == 0) &&
     (lVar3 = thunk_FUN_032a55a4(param_2,*(undefined8 *)puVar2),
     puVar4 = (undefined8 *)Method_NovaSamples_UIControls_UIControl<ButtonVisuals>_get_View__,
     lVar3 == 0)) {
LAB_06aabb58:
    uVar6 = FUN_057a25c4(*puVar4,param_2,0);
    if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
    }
    FUN_06bb2b08(uVar6,param_1,0);
    uVar6 = 0;
  }
  else {
    puVar1 = 
    Method_UnityEngine_XR_ARSubsystems_TrackingSubsystem<XRRaycast,_XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider>__ctor__
    ;
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar3 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             Method_UnityEngine_XR_ARSubsystems_TrackingSubsystem<XRRaycast,_XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider>__ctor__
           ) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06aaba50;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_032937ac(param_2,*(long *)
                                   Method_UnityEngine_XR_ARSubsystems_TrackingSubsystem<XRRaycast,_XRRaycastSubsystem,_XRRaycastSubsystemDescriptor,_XRRaycastSubsystem_Provider>__ctor__
                          ,0);
LAB_06aaba50:
    lVar3 = (*(code *)*puVar4)(param_2,puVar4[1]);
    if (lVar3 != 0) {
      lVar3 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06aabaac;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_032937ac(param_2,*(long *)puVar1,0);
LAB_06aabaac:
      lVar3 = (*(code *)*puVar4)(param_2,puVar4[1]);
      puVar4 = (undefined8 *)Method_NovaSamples_UIControls_UIControl<ButtonVisuals>__ctor__;
      if (lVar3 != param_1) goto LAB_06aabb58;
    }
    plVar5 = (long *)thunk_FUN_032a55a4(param_2,*(undefined8 *)puVar2);
    if (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 0x11) * 0x10 + 0x138);
            goto LAB_06aabb3c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_032937ac(plVar5,*(long *)puVar2,0x11);
LAB_06aabb3c:
      uVar7 = (*(code *)*puVar4)(plVar5,param_1,puVar4[1]);
      puVar4 = (undefined8 *)Method_NovaSamples_UIControls_UIControl<DropdownVisuals>__ctor__;
      if ((uVar7 & 1) != 0) goto LAB_06aabb58;
    }
    uVar6 = 1;
  }
  return uVar6;
}


