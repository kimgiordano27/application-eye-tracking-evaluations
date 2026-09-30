/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionCreate
ENTRY_POINT: 07a09690
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionCreate(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  
  FUN_04077588(PTR_DAT_092efab0);
                    /* try { // try from 07a0969c to 07b0969f has its CatchHandler @ 07a09e44 */
                    /* try { // try from 07a096a0 to 07b096a7 has its CatchHandler @ 07a09dc0 */
  FUN_04077588(PTR_DAT_092efab8);
  *(undefined1 *)(unaff_x20 + 0xc3) = 1;
  puVar1 = PTR_DAT_092efab8;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    return;
  }
                    /* try { // try from 07a096d0 to 07b096db has its CatchHandler @ 07a09df8 */
  lVar5 = *(long *)(unaff_x19 + 0x28);
  lVar2 = *(long *)PTR_DAT_092efab8;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar2 = *(long *)puVar1;
  }
  puVar4 = *(undefined8 **)(lVar2 + 0xb8);
  lVar6 = puVar4[1];
  if (lVar6 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar4 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar7 = *puVar4;
                    /* try { // try from 07a09718 to 07b0971b has its CatchHandler @ 07a09d90 */
    lVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092efaa0);
    FUN_06cb998c(lVar6,uVar7,*(undefined8 *)PTR_DAT_092efab0,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar3 = lVar6;
    thunk_FUN_040ec700(plVar3,lVar6);
  }
  if (lVar5 != 0) {
    FUN_051d7d74(lVar5,lVar6,*(undefined8 *)PTR_DAT_092efaa8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


