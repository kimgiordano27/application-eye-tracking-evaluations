/*
FUNCTION_NAME: FUN_0252ef00
ENTRY_POINT: 0252ef00
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0252ef00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = StringLiteral_11990;
  if ((DAT_03782ab3 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_5731);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_SortingHelpers_Sort<TrackedDeviceGraphicRaycaster_RaycastHitData>__
                      );
    thunk_FUN_00d48444(Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_5__);
    thunk_FUN_00d48444(StringLiteral_8903);
    thunk_FUN_00d48444(Method_System_Security_Claims_ClaimsIdentity_Deserialize__);
    thunk_FUN_00d48444(PTR_DAT_033ef2f0);
    thunk_FUN_00d48444(StringLiteral_11990);
    thunk_FUN_00d48444(Method_SideFillButton_OnStartTouch__);
    thunk_FUN_00d48444(StringLiteral_6397);
    thunk_FUN_00d48444(System_Action<InteractableStateChangeArgs>_TypeInfo);
    DAT_03782ab3 = 1;
  }
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_033ef2f0;
  if (lVar3 != 0) {
    FUN_01320e50(lVar3,*(undefined8 *)PTR_DAT_033ef2f0);
    *(long *)(param_1 + 0x38) = lVar3;
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar3 != 0) {
      FUN_01320e50(lVar3,*(undefined8 *)puVar1);
      *(long *)(param_1 + 0x40) = lVar3;
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar2 = Method_SideFillButton_OnStartTouch__;
      if (lVar3 != 0) {
        FUN_01320e50(lVar3,*(undefined8 *)puVar1);
        *(long *)(param_1 + 0x48) = lVar3;
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        puVar2 = Method_System_Security_Claims_ClaimsIdentity_Deserialize__;
        if (lVar3 != 0) {
          FUN_025436c8(lVar3,0);
          *(long *)(param_1 + 0x50) = lVar3;
          lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          puVar1 = 
          Method_UnityEngine_XR_Interaction_Toolkit_SortingHelpers_Sort<TrackedDeviceGraphicRaycaster_RaycastHitData>__
          ;
          puVar2 = System_Action<InteractableStateChangeArgs>_TypeInfo;
          if (lVar3 != 0) {
            FUN_01298da0(lVar3,*(undefined8 *)StringLiteral_8903);
            *(long *)(param_1 + 0x58) = lVar3;
            lVar3 = *(long *)puVar1;
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar3 = *(long *)puVar1;
            }
            uVar4 = **(undefined8 **)(lVar3 + 0xb8);
            lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            puVar2 = Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_5__;
            if (lVar3 != 0) {
              FUN_013a8330(lVar3,uVar4,*(undefined8 *)StringLiteral_6397);
              *(long *)(param_1 + 0x60) = lVar3;
              lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
              if (lVar3 != 0) {
                FUN_011c181c(lVar3,param_1,*(undefined8 *)StringLiteral_5731,0);
                *(long *)(param_1 + 0x70) = lVar3;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


