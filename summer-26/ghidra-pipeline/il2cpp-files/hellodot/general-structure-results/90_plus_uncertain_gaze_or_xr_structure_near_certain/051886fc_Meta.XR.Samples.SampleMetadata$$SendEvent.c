/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$SendEvent
ENTRY_POINT: 051886fc
PROGRAM: hellodot-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_Samples_SampleMetadata__SendEvent(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  undefined8 uVar10;
  
  puVar3 = PTR_DAT_066080d8;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_066080a0) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0518875c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_02ce0a7c();
LAB_0518875c:
                    /* try { // try from 0518875c to 05288763 has its CatchHandler @ 05189094 */
  uVar4 = (*(code *)*puVar5)();
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_02cd038c(lVar7);
    lVar7 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_066080b8;
  puVar1 = PTR_DAT_066080b0;
                    /* try { // try from 051887a0 to 052887cb has its CatchHandler @ 05189098 */
  if (*(long *)(*(long *)(lVar7 + 0xb8) + 0x10) == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02cd038c(lVar7);
      lVar7 = *(long *)puVar3;
    }
    uVar10 = **(undefined8 **)(lVar7 + 0xb8);
                    /* try { // try from 051887d0 to 052887d7 has its CatchHandler @ 05189090 */
    uVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06608098);
    FUN_04a4f054(uVar6,uVar10,*(undefined8 *)PTR_DAT_06608100,0);
    *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10) = uVar6;
  }
  uVar6 = FUN_033efc10();
                    /* try { // try from 0518880c to 05288837 has its CatchHandler @ 05189088 */
  uVar10 = thunk_FUN_02cea894(*(undefined8 *)puVar2);
  UnityEngine_UIElements_BaseField<object>__AlignLabel(uVar10,uVar4,uVar6,*(undefined8 *)puVar1);
                    /* try { // try from 0518883c to 05288843 has its CatchHandler @ 05189074 */
  return uVar10;
}


