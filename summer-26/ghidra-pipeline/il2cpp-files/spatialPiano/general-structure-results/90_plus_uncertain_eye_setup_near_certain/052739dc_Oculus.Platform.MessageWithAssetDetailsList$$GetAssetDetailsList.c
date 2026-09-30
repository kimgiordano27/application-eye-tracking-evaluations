/*
FUNCTION_NAME: Oculus.Platform.MessageWithAssetDetailsList$$GetAssetDetailsList
ENTRY_POINT: 052739dc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Oculus_Platform_MessageWithAssetDetailsList__GetAssetDetailsList(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined8 *unaff_x23;
  
  FUN_02f08768();
                    /* catch() { ... } // from try @ 052738e4 with catch @ 052739e4
                       try { // try from 052739e4 to 05373aab has its CatchHandler @ 05272d54 */
                    /* catch() { ... } // from try @ 05273400 with catch @ 052739e8 */
  FUN_02f08768(Unity_Collections_NativeList<ResourceUnversionedData>___TypeInfo);
                    /* catch() { ... } // from try @ 052736ac with catch @ 052739ec */
                    /* catch() { ... } // from try @ 052739b8 with catch @ 052739f0 */
                    /* catch() { ... } // from try @ 05273680 with catch @ 052739f4 */
  FUN_02f08768(PTR_DAT_067d38c8);
                    /* catch() { ... } // from try @ 05273670 with catch @ 052739f8 */
                    /* catch() { ... } // from try @ 052739b0 with catch @ 052739fc */
                    /* catch() { ... } // from try @ 05273988 with catch @ 05273a00 */
  FUN_02f08768(PTR_DAT_067d38d0);
                    /* catch() { ... } // from try @ 05273864 with catch @ 05273a04 */
                    /* catch() { ... } // from try @ 05273658 with catch @ 05273a08
                       catch() { ... } // from try @ 052739b4 with catch @ 05273a08 */
                    /* catch() { ... } // from try @ 05273968 with catch @ 05273a0c */
  FUN_02f08768(PTR_DAT_067c8f20);
                    /* catch() { ... } // from try @ 05273838 with catch @ 05273a10 */
                    /* catch() { ... } // from try @ 05273828 with catch @ 05273a14 */
  FUN_02f08768(System_ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>___TypeInfo);
  FUN_02f08768(
              System_ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>___TypeInfo
              );
  FUN_02f08768(OVRPlugin_RaycastFilterHeader____TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xb4a) = 1;
  lVar4 = *(long *)(unaff_x19 + 0x20);
  uVar2 = thunk_FUN_02f45270(*unaff_x23);
  FUN_0475f808();
  if (lVar4 != 0) {
    FUN_037d876c(lVar4,uVar2,*(undefined8 *)PTR_DAT_067d38c8);
    lVar4 = *(long *)(unaff_x19 + 0x28);
    uVar2 = thunk_FUN_02f45270(*unaff_x23);
    FUN_0475f808();
    puVar1 = PTR_DAT_067c8f20;
    if (lVar4 != 0) {
      FUN_037d876c(lVar4,uVar2,*(undefined8 *)PTR_DAT_067d38d0);
      uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar3 = FUN_060f078c(uVar2,0,0);
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)(unaff_x19 + 0x30);
        uVar2 = thunk_FUN_02f45270(*unaff_x23);
        FUN_0475f808();
        if (lVar4 == 0) goto LAB_05273bb4;
        FUN_037d876c(lVar4,uVar2,
                     *(undefined8 *)Unity_Collections_NativeList<ResourceUnversionedData>___TypeInfo
                    );
      }
      lVar4 = *(long *)(unaff_x19 + 0x38);
      uVar2 = thunk_FUN_02f45270(*(undefined8 *)System_Collections_Generic_List<int>___TypeInfo);
      FUN_0475f628();
      puVar1 = PTR_DAT_067cc5f0;
      if (lVar4 != 0) {
        FUN_05272634(lVar4,uVar2);
        lVar4 = *(long *)(unaff_x19 + 0x48);
        uVar2 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
        FUN_04761700();
        if (lVar4 != 0) {
          FUN_0529ac44(lVar4,uVar2,0);
          return;
        }
      }
    }
  }
LAB_05273bb4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


