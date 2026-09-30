/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddBlockInfo
ENTRY_POINT: 0642d83c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_BuildingBlocks_Telemetry__AddBlockInfo(void)

{
  bool in_ZR;
  long lVar1;
  long unaff_x19;
  undefined8 uVar2;
  long *unaff_x24;
  long unaff_x25;
  
  if (in_ZR) {
    uVar2 = *(undefined8 *)PTR_DAT_084974b8;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 0642d74c with catch @ 0642d864
                       try { // try from 0642d864 to 0652d887 has its CatchHandler @ 0642d718 */
    uVar2 = FUN_0675ff58(uVar2,0);
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 0642d76c with catch @ 0642d870
                        */
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*unaff_x24);
    }
                    /* try { // try from 0642d888 to 0652d89f has its CatchHandler @ 0642d974 */
    uVar2 = FUN_06792398(uVar2);
    lVar1 = *(long *)(unaff_x19 + 0x20);
                    /* try { // try from 0642d8a0 to 0652d8c3 has its CatchHandler @ 0642d718 */
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03ac4090(lVar1);
    }
    lVar1 = **(long **)(lVar1 + 0xc0);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 0642d8c4 to 0652d8db has its CatchHandler @ 0642d974 */
      lVar1 = FUN_03ac4090(lVar1);
    }
                    /* try { // try from 0642d8dc to 0652d8ef has its CatchHandler @ 0642d718 */
    uVar2 = FUN_035255bc(uVar2,lVar1);
    return uVar2;
  }
  lVar1 = *(long *)(unaff_x19 + 0x20);
                    /* try { // try from 0642d8f0 to 0652d907 has its CatchHandler @ 0642d974 */
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
                    /* try { // try from 0642d908 to 0652d963 has its CatchHandler @ 0642d718 */
  if ((*(ushort *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_03ac4090();
  }
  uVar2 = thunk_FUN_03ac74bc();
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090(lVar1);
  }
  FUN_053a20d8(uVar2,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x38));
  return uVar2;
}


