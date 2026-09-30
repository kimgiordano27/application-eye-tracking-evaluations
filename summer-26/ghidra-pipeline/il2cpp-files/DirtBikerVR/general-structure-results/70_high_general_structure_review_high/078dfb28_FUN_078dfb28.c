/*
FUNCTION_NAME: FUN_078dfb28
ENTRY_POINT: 078dfb28
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


long FUN_078dfb28(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_084a12f0;
  puVar1 = PTR_DAT_084a12e8;
                    /* try { // try from 078dfb30 to 079dfb33 has its CatchHandler @ 078dfd24 */
  if ((DAT_08987aa3 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084a12f8);
    FUN_03a8a718(PTR_DAT_084a12e8);
                    /* try { // try from 078dfb74 to 079dfbb3 has its CatchHandler @ 078dfd20 */
    FUN_03a8a718(PTR_DAT_084a12f0);
    FUN_03a8a718(
                UnityEngine_Rendering_SerializedDictionary<int,_ProbeVolumeStreamableAsset_StreamableCellDesc>_TypeInfo
                );
    FUN_03a8a718(
                System_Collections_Generic_Stack<HashSet<RealtimeRefManager_IRealtimeRefListener>>_TypeInfo
                );
    FUN_03a8a718(PTR_DAT_08492f58);
    FUN_03a8a718(PTR_DAT_084bafa0);
    FUN_03a8a718(Oculus_Platform_Request<SdkAccountList>_TypeInfo);
    FUN_03a8a718(PTR_DAT_084d2310);
    DAT_08987aa3 = 1;
  }
  puVar3 = PTR_DAT_084a12f8;
  lVar4 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
  FUN_05f9f7c4(lVar4,*(undefined8 *)puVar1);
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    if (lVar4 == 0) goto LAB_078dfd30;
    FUN_05fa0540(lVar4,*(undefined8 *)
                        System_Collections_Generic_Stack<HashSet<RealtimeRefManager_IRealtimeRefListener>>_TypeInfo
                 ,uVar6,*(undefined8 *)puVar3);
  }
  plVar5 = *(long **)(param_1 + 0x18);
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    if (lVar4 == 0) goto LAB_078dfd30;
    FUN_05fa0540(lVar4,*(undefined8 *)PTR_DAT_084d2310,uVar6,*(undefined8 *)puVar3);
  }
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    if (lVar4 == 0) goto LAB_078dfd30;
    FUN_05fa0540(lVar4,*(undefined8 *)PTR_DAT_084bafa0,uVar6,*(undefined8 *)puVar3);
  }
  plVar5 = *(long **)(param_1 + 0x28);
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    if (lVar4 == 0) goto LAB_078dfd30;
    FUN_05fa0540(lVar4,*(undefined8 *)
                        UnityEngine_Rendering_SerializedDictionary<int,_ProbeVolumeStreamableAsset_StreamableCellDesc>_TypeInfo
                 ,uVar6,*(undefined8 *)puVar3);
  }
  plVar5 = *(long **)(param_1 + 0x30);
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    if (lVar4 == 0) goto LAB_078dfd30;
    FUN_05fa0540(lVar4,*(undefined8 *)PTR_DAT_08492f58,uVar6,*(undefined8 *)puVar3);
  }
  plVar5 = *(long **)(param_1 + 0x38);
  if (plVar5 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    if (lVar4 == 0) {
LAB_078dfd30:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_05fa0540(lVar4,*(undefined8 *)Oculus_Platform_Request<SdkAccountList>_TypeInfo,uVar6,
                 *(undefined8 *)puVar3);
  }
  return lVar4;
}


