/*
FUNCTION_NAME: Oculus.Platform.MessageWithAssetDetailsList$$GetDataFromMessage
ENTRY_POINT: 05273a18
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Oculus_Platform_MessageWithAssetDetailsList__GetDataFromMessage(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined8 *unaff_x23;
  
                    /* catch() { ... } // from try @ 052736f0 with catch @ 05273a18 */
  FUN_02f08768();
                    /* catch() { ... } // from try @ 052734fc with catch @ 05273a1c */
                    /* catch() { ... } // from try @ 052738a4 with catch @ 05273a20 */
                    /* catch() { ... } // from try @ 05273620 with catch @ 05273a24 */
  FUN_02f08768(
              System_ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>___TypeInfo
              );
                    /* catch() { ... } // from try @ 05273950 with catch @ 05273a28 */
                    /* catch() { ... } // from try @ 0527375c with catch @ 05273a2c */
                    /* catch() { ... } // from try @ 0527374c with catch @ 05273a30 */
  FUN_02f08768(OVRPlugin_RaycastFilterHeader____TypeInfo);
                    /* catch() { ... } // from try @ 05273818 with catch @ 05273a34
                       catch() { ... } // from try @ 0527396c with catch @ 05273a34 */
                    /* catch() { ... } // from try @ 052735f4 with catch @ 05273a38 */
  *(undefined1 *)(unaff_x20 + 0xb4a) = 1;
                    /* catch() { ... } // from try @ 052735e4 with catch @ 05273a3c */
                    /* catch() { ... } // from try @ 052737bc with catch @ 05273a40 */
  lVar4 = *(long *)(unaff_x19 + 0x20);
                    /* catch() { ... } // from try @ 05273770 with catch @ 05273a44 */
  uVar2 = thunk_FUN_02f45270(*unaff_x23);
                    /* catch() { ... } // from try @ 05273738 with catch @ 05273a48
                       catch() { ... } // from try @ 0527395c with catch @ 05273a48 */
                    /* catch() { ... } // from try @ 052735d0 with catch @ 05273a4c
                       catch() { ... } // from try @ 05273958 with catch @ 05273a4c */
                    /* catch() { ... } // from try @ 052733d4 with catch @ 05273a50 */
                    /* catch() { ... } // from try @ 052733c4 with catch @ 05273a54 */
                    /* catch() { ... } // from try @ 05273560 with catch @ 05273a58 */
  FUN_0475f808();
                    /* catch() { ... } // from try @ 05273550 with catch @ 05273a5c */
  if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 052735a4 with catch @ 05273a60 */
                    /* catch() { ... } // from try @ 05273594 with catch @ 05273a64 */
                    /* catch() { ... } // from try @ 0527353c with catch @ 05273a68
                       catch() { ... } // from try @ 05273948 with catch @ 05273a68 */
                    /* catch() { ... } // from try @ 052733b0 with catch @ 05273a6c
                       catch() { ... } // from try @ 05273944 with catch @ 05273a6c */
                    /* catch() { ... } // from try @ 05273788 with catch @ 05273a70
                       catch() { ... } // from try @ 05273954 with catch @ 05273a70 */
                    /* catch() { ... } // from try @ 052734d0 with catch @ 05273a74 */
    FUN_037d876c(lVar4,uVar2,*(undefined8 *)PTR_DAT_067d38c8);
                    /* catch() { ... } // from try @ 052734c0 with catch @ 05273a78 */
                    /* catch() { ... } // from try @ 0527348c with catch @ 05273a7c */
    lVar4 = *(long *)(unaff_x19 + 0x28);
                    /* catch() { ... } // from try @ 052734ac with catch @ 05273a80
                       catch() { ... } // from try @ 05273940 with catch @ 05273a80 */
    uVar2 = thunk_FUN_02f45270(*unaff_x23);
                    /* catch() { ... } // from try @ 05273490 with catch @ 05273a84 */
                    /* catch() { ... } // from try @ 05273914 with catch @ 05273a88 */
                    /* catch() { ... } // from try @ 05273910 with catch @ 05273a8c */
                    /* catch() { ... } // from try @ 0527390c with catch @ 05273a90 */
                    /* catch() { ... } // from try @ 05273908 with catch @ 05273a94 */
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


