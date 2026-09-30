/*
FUNCTION_NAME: Newtonsoft.Json.Utilities.CollectionWrapper<ErrorObject>$$Clear
ENTRY_POINT: 0186699c
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_data_collection_or_telemetry_hits_1
*/


uint Newtonsoft_Json_Utilities_CollectionWrapper<ErrorObject>__Clear
               (undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x19;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar10;
  long lVar11;
  
  puVar10 = *(undefined8 **)(unaff_x22 + 0x4f0);
  puVar8 = *(undefined8 **)(unaff_x19 + 0xc30);
                    /* try { // try from 018669ac to 019669cb has its CatchHandler @ 01866a74 */
  if ((*(byte *)(unaff_x21 + 0xb20) & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e434f0);
    thunk_FUN_0159f088(PTR_DAT_06e18670);
    thunk_FUN_0159f088(PTR_DAT_06ddaad8);
                    /* try { // try from 018669dc to 019669e7 has its CatchHandler @ 01866a70 */
    thunk_FUN_0159f088(PTR_DAT_06d9ec30);
    *(undefined1 *)(unaff_x21 + 0xb20) = 1;
  }
                    /* try { // try from 018669e8 to 01966a6b has its CatchHandler @ 0186694c */
  uVar5 = FUN_0160edfc(*puVar10,4);
  FUN_02df8d44(uVar5,*puVar8,0);
  if ((param_2 == 0) || (lVar6 = FUN_02529604(param_2,uVar5,0), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  iVar1 = *(int *)(lVar6 + 0x18);
  if (iVar1 < 8) {
    uVar5 = thunk_FUN_0159f088(PTR_DAT_06dda078);
    uVar5 = FUN_02d8df60(uVar5,param_2,0);
    thunk_FUN_0159f088(PTR_DAT_06dbba10);
    uVar9 = thunk_FUN_015d056c();
    FUN_011a9bc8();
    FUN_028c5828(uVar9,uVar5,0);
    uVar5 = thunk_FUN_0159f088(PTR_DAT_06dbc348);
                    /* WARNING: Subroutine does not return */
    FUN_0160ee7c(uVar9,uVar5);
  }
  uVar5 = *(undefined8 *)(lVar6 + ((long)iVar1 + -1) * 8 + 0x20);
  if (*(int *)(*(long *)PTR_DAT_06e18670 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar7 = FUN_02900608(uVar5,0,0);
  puVar2 = PTR_DAT_06ddaad8;
                    /* try { // try from 01866a6c to 01966a6f has its CatchHandler @ 01866a70 */
  uVar3 = (uint)((long)iVar1 + -1);
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 018669dc with catch @ 01866a70
                       catch(type#1 @ 06a5a440) { ... } // from try @ 01866a6c with catch @ 01866a70
                       try { // try from 01866a70 to 01966a8b has its CatchHandler @ 0186694c */
  if ((uVar7 & 1) == 0) {
    uVar3 = iVar1 - 2;
  }
                    /* catch(type#1 @ 06a5a440) { ... } // from try @ 018669ac with catch @ 01866a74
                        */
  if (uVar3 < *(uint *)(lVar6 + 0x18)) {
    uVar9 = *(undefined8 *)(lVar6 + (long)(int)uVar3 * 8 + 0x20);
                    /* try { // try from 01866a8c to 01966a8f has its CatchHandler @ 01866a9c */
    lVar11 = (long)(int)uVar3 + -1;
    uVar5 = FUN_040f742c(0);
                    /* catch() { ... } // from try @ 01866a8c with catch @ 01866a9c */
                    /* try { // try from 01866aa8 to 01966ab3 has its CatchHandler @ 01866ac8 */
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_016466fc(*(long *)puVar2);
    }
    uVar3 = OVRPlugin_OVRP_1_1_0__ovrp_GetSystemBatteryStatus(uVar9,uVar5,0);
    if ((uint)lVar11 < *(uint *)(lVar6 + 0x18)) {
      uVar9 = *(undefined8 *)(lVar6 + lVar11 * 8 + 0x20);
      uVar5 = FUN_040f742c(0);
      uVar4 = OVRPlugin_OVRP_1_1_0__ovrp_GetSystemBatteryStatus(uVar9,uVar5,0);
      return uVar3 & 0xff | (uVar4 & 0xff) << 8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


