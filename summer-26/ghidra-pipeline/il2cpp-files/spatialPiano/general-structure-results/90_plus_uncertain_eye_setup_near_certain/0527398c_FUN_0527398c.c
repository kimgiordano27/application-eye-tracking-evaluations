/*
FUNCTION_NAME: FUN_0527398c
ENTRY_POINT: 0527398c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0527398c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  puVar3 = System_ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>___TypeInfo;
  puVar2 = PTR_DAT_067cbae0;
                    /* try { // try from 052739b0 to 053739b3 has its CatchHandler @ 052739fc */
                    /* try { // try from 052739b4 to 053739b7 has its CatchHandler @ 05273a08 */
                    /* try { // try from 052739b8 to 053739e3 has its CatchHandler @ 052739f0 */
  if ((DAT_06bbab4a & 1) == 0) {
    FUN_02f08768(System_Collections_Generic_List<int>___TypeInfo);
    FUN_02f08768(PTR_DAT_067cc5f0);
    FUN_02f08768(PTR_DAT_067cbae0);
    FUN_02f08768(Unity_Collections_NativeList<ResourceUnversionedData>___TypeInfo);
    FUN_02f08768(PTR_DAT_067d38c8);
    FUN_02f08768(PTR_DAT_067d38d0);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(System_ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>___TypeInfo);
    FUN_02f08768(
                System_ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>___TypeInfo
                );
    FUN_02f08768(OVRPlugin_RaycastFilterHeader____TypeInfo);
    DAT_06bbab4a = 1;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  uVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_0475f808(uVar4,param_1,*(undefined8 *)puVar3,0);
  if (lVar6 != 0) {
    FUN_037d876c(lVar6,uVar4,*(undefined8 *)PTR_DAT_067d38c8);
    lVar6 = *(long *)(param_1 + 0x28);
    uVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
    FUN_0475f808(uVar4,param_1,*(undefined8 *)puVar3,0);
    puVar1 = PTR_DAT_067c8f20;
    if (lVar6 != 0) {
      FUN_037d876c(lVar6,uVar4,*(undefined8 *)PTR_DAT_067d38d0);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar5 = FUN_060f078c(uVar4,0,0);
      if ((uVar5 & 1) != 0) {
        lVar6 = *(long *)(param_1 + 0x30);
        uVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
        FUN_0475f808(uVar4,param_1,*(undefined8 *)puVar3,0);
        if (lVar6 == 0) goto LAB_05273bb4;
        FUN_037d876c(lVar6,uVar4,
                     *(undefined8 *)Unity_Collections_NativeList<ResourceUnversionedData>___TypeInfo
                    );
      }
      puVar2 = OVRPlugin_RaycastFilterHeader____TypeInfo;
      lVar6 = *(long *)(param_1 + 0x38);
      uVar4 = thunk_FUN_02f45270(*(undefined8 *)System_Collections_Generic_List<int>___TypeInfo);
      FUN_0475f628(uVar4,param_1,*(undefined8 *)puVar2,0);
      puVar3 = 
      System_ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>___TypeInfo;
      puVar2 = PTR_DAT_067cc5f0;
      if (lVar6 != 0) {
        FUN_05272634(lVar6,uVar4);
        lVar6 = *(long *)(param_1 + 0x48);
        uVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
        FUN_04761700(uVar4,param_1,*(undefined8 *)puVar3,0);
        if (lVar6 != 0) {
          FUN_0529ac44(lVar6,uVar4,0);
          return;
        }
      }
    }
  }
LAB_05273bb4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


