/*
FUNCTION_NAME: Oculus.Interaction.PokeInteractor$$ComputeHoverCandidate
ENTRY_POINT: 0188c1e4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5
*/


void Oculus_Interaction_PokeInteractor__ComputeHoverCandidate(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  *(undefined1 *)(unaff_x19 + 0x7b3) = 1;
  lVar3 = thunk_FUN_00d62348(*unaff_x20);
  puVar1 = Method_System_Threading_ThreadLocal<string>_get_Value__;
  if (lVar3 != 0) {
    FUN_012d239c(lVar3,0,*(undefined8 *)Method_System_Net_HttpWebRequest__ctor__,0);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar2 = Method_UnityEngine_ProBuilder_Poly2Tri_AdvancingFront_LocatePoint__;
    puVar1 = PTR_DAT_033ee840;
    if (lVar4 != 0) {
      FUN_013c8f44(lVar4,lVar3,
                   *(undefined8 *)
                    UnityEngine_XR_ARFoundation_ARTrackableManager<XRDepthSubsystem,_XRDepthSubsystemDescriptor,_XRDepthSubsystem_Provider,_XRPointCloud,_ARPointCloud>_TypeInfo
                  );
      *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar4;
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar2 = Method_UnityEngine_Playables_ScriptPlayable<DirectorControlPlayable>_op_Implicit__;
      if (lVar3 != 0) {
        FUN_012d239c(lVar3,0,*(undefined8 *)PTR_DAT_033ecfb8,0);
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        if (lVar4 != 0) {
          FUN_013c8f44(lVar4,lVar3,
                       *(undefined8 *)
                        Method_Meta_WitAi_Requests_WitVRequest_RequestWitPost<string>__);
          *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar4;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


