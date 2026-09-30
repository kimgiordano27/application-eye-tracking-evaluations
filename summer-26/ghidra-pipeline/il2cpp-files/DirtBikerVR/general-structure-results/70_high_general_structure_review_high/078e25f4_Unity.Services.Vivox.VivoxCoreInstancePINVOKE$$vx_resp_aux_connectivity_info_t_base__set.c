/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_aux_connectivity_info_t_base__set
ENTRY_POINT: 078e25f4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


long Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_aux_connectivity_info_t_base__set
               (long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  
                    /* try { // try from 078e25f8 to 079e260f has its CatchHandler @ 078e28ec */
  FUN_05f9f7c4(param_1,*unaff_x20);
  plVar1 = *(long **)(unaff_x19 + 0x18);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    if (param_1 == 0) goto LAB_078e2780;
    FUN_05fa0540(param_1,*(undefined8 *)System_Collections_Generic_Stack<HDCamera>_TypeInfo,uVar2,
                 *unaff_x21);
  }
  plVar1 = *(long **)(unaff_x19 + 0x20);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    if (param_1 == 0) goto LAB_078e2780;
    FUN_05fa0540(param_1,*(undefined8 *)
                          System_Collections_Generic_Stack<HashSet<RealtimeRefManager_IRealtimeRefListener>>_TypeInfo
                 ,uVar2,*unaff_x21);
  }
  plVar1 = *(long **)(unaff_x19 + 0x28);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    if (param_1 == 0) goto LAB_078e2780;
    FUN_05fa0540(param_1,*(undefined8 *)System_Collections_Generic_Stack<Expression>_TypeInfo,uVar2,
                 *unaff_x21);
  }
  plVar1 = *(long **)(unaff_x19 + 0x30);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    if (param_1 == 0) goto LAB_078e2780;
    FUN_05fa0540(param_1,*(undefined8 *)
                          System_Collections_Generic_Stack<ExpressionCombinator>_TypeInfo,uVar2,
                 *unaff_x21);
  }
  plVar1 = *(long **)(unaff_x19 + 0x38);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    if (param_1 == 0) goto LAB_078e2780;
    FUN_05fa0540(param_1,*(undefined8 *)System_Collections_Generic_Stack<EventCallbackList>_TypeInfo
                 ,uVar2,*unaff_x21);
  }
  plVar1 = *(long **)(unaff_x19 + 0x40);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    if (param_1 == 0) goto LAB_078e2780;
    FUN_05fa0540(param_1,*(undefined8 *)Oculus_Platform_Request<SdkAccountList>_TypeInfo,uVar2,
                 *unaff_x21);
  }
  plVar1 = *(long **)(unaff_x19 + 0x48);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
    if (param_1 == 0) {
LAB_078e2780:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05fa0540(param_1,*(undefined8 *)
                          UnityEngine_Rendering_SerializedDictionary<int,_ProbeVolumeStreamableAsset_StreamableCellDesc>_TypeInfo
                 ,uVar2,*unaff_x21);
  }
  return param_1;
}


