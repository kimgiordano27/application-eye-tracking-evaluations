/*
FUNCTION_NAME: FUN_055d8110
ENTRY_POINT: 055d8110
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_1;ray_or_cast_sink_hits_6;telemetry_or_network_hits_3
*/


long * FUN_055d8110(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  
  if ((DAT_06bbfbad & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9fd0);
    FUN_02f08768(PTR_DAT_067c9fd8);
    FUN_02f08768(
                System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
                );
    FUN_02f08768(System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo);
    FUN_02f08768(
                Method_Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<FingerFeatureConfigBuilder_OppositionStateBuilder>__ctor__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                );
    FUN_02f08768(PTR_DAT_067cd6c0);
    FUN_02f08768(System_Collections_Generic_IEnumerator<Substring>_TypeInfo);
    DAT_06bbfbad = 1;
  }
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 == (long *)0x0) goto LAB_055d83a0;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x308))(plVar5,param_2,*(undefined8 *)(*plVar5 + 0x310));
  if (plVar5 == (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x48);
    if (plVar5 == (long *)0x0) goto LAB_055d83a0;
    auVar10 = (**(code **)(*plVar5 + 0x5f8))
                        (plVar5,*(undefined8 *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<float2>_Awake__
                         ,*(undefined8 *)System_Collections_Generic_IEnumerator<Substring>_TypeInfo,
                         *(undefined8 *)PTR_DAT_067cd6c0,*(undefined8 *)(*plVar5 + 0x600));
    plVar5 = auVar10._0_8_;
    FUN_055cf8e4(param_1,auVar10._8_8_,plVar5,param_2);
    uVar6 = FUN_04f6ebb4(param_2,0);
    if ((uVar6 & 1) == 0) {
      iVar2 = *(int *)(*(long *)PTR_DAT_067c9fd8 + 0xe4);
      iVar1 = *(int *)(param_1 + 0x58) + 1;
      *(int *)(param_1 + 0x58) = iVar1;
      if (iVar2 == 0) {
        thunk_FUN_02f6670c();
      }
      uVar7 = FUN_050656a0(0);
      if (*(int *)(*(long *)PTR_DAT_067c9fd0 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*(long *)PTR_DAT_067c9fd0);
      }
      uVar7 = FUN_050624c4(iVar1,uVar7,0);
      uVar7 = FUN_04f65260(*(undefined8 *)
                            Method_Oculus_Interaction_PoseDetection_FeatureConfigBuilder_BuildCondition<FingerFeatureConfigBuilder_OppositionStateBuilder>__ctor__
                           ,uVar7,0);
      puVar4 = System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo;
      plVar9 = *(long **)(param_1 + 0x50);
      uVar8 = FUN_04f65260(*(undefined8 *)System_Nullable<OpenXRAnalytics_InitializeEvent>_TypeInfo,
                           uVar7,0);
      if (plVar9 == (long *)0x0) goto LAB_055d83a0;
      (**(code **)(*plVar9 + 0x518))(plVar9,uVar8,param_2,*(undefined8 *)(*plVar9 + 0x520));
      uVar8 = FUN_04f65260(*(undefined8 *)puVar4,uVar7,0);
      if (plVar5 == (long *)0x0) goto LAB_055d83a0;
      (**(code **)(*plVar5 + 0x518))(plVar5,uVar8,param_2,*(undefined8 *)(*plVar5 + 0x520));
      plVar9 = *(long **)(param_1 + 0x28);
      if (plVar9 == (long *)0x0) goto LAB_055d83a0;
      (**(code **)(*plVar9 + 0x318))(plVar9,param_2,uVar7,*(undefined8 *)(*plVar9 + 800));
    }
    plVar9 = *(long **)(param_1 + 0x18);
    if (plVar9 == (long *)0x0) {
LAB_055d83a0:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    (**(code **)(*plVar9 + 0x318))(plVar9,param_2,plVar5,*(undefined8 *)(*plVar9 + 800));
  }
  else {
    bVar3 = *(byte *)(*(long *)
                       System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo
                     + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)
         System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08d48(plVar5);
    }
  }
  return plVar5;
}


