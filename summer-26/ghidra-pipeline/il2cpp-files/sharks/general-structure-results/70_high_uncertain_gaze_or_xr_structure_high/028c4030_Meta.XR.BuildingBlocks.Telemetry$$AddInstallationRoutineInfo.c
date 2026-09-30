/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddInstallationRoutineInfo
ENTRY_POINT: 028c4030
PROGRAM: sharks-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddInstallationRoutineInfo(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  puVar2 = (undefined4 *)
           FUN_01beb038(&stack0x0000000c,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x60));
  uVar1 = *puVar2;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar3 = FUN_02d1878c(uVar1,0);
  if ((uVar3 & 1) != 0) {
    *unaff_x22 = 0;
    unaff_x22[1] = 0;
    *(undefined4 *)(unaff_x22 + 3) = 0;
    unaff_x22[2] = 0;
                    /* try { // try from 028c407c to 029c407f has its CatchHandler @ 028c4088 */
                    /* try { // try from 028c4080 to 029c40ab has its CatchHandler @ 028c3bdc */
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028c407c with catch @ 028c4088
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028c3fa8 with catch @ 028c408c
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028c3ee0 with catch @ 028c4090
                        */
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 028c3f20 with catch @ 028c4094
                        */
    FUN_028c3eec();
                    /* try { // try from 028c40ac to 029c40af has its CatchHandler @ 028c40c4 */
    return;
  }
  thunk_FUN_01851c08(PTR_DAT_037f87a8);
                    /* catch() { ... } // from try @ 028c40ac with catch @ 028c40c4 */
  uVar4 = thunk_FUN_01861bbc();
  uVar5 = thunk_FUN_01851c08(PTR_DAT_037fb588);
  uVar6 = thunk_FUN_01851c08(PTR_DAT_037fb550);
  FUN_02b3cc64(uVar4,uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 028c4104 to 029c412b has its CatchHandler @ 028c4140 */
  FUN_017fc474(uVar4);
}


