/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$IsTypeCustom
ENTRY_POINT: 04c09804
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Telemetry__IsTypeCustom(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x24;
  
  lVar1 = FUN_044a9014();
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  plVar6 = *(long **)(unaff_x20 + 0x20);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar3 = *plVar6;
  uVar8 = *(undefined8 *)(unaff_x19 + 8);
                    /* try { // try from 04c09834 to 04d0985b has its CatchHandler @ 04c09c18 */
  uVar7 = *(undefined8 *)(lVar1 + 0x10);
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_065e38c8) {
                    /* try { // try from 04c09874 to 04d098b7 has its CatchHandler @ 04c09c10 */
        puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_04c09880;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02ce0a7c(plVar6,*(long *)PTR_DAT_065e38c8,0);
LAB_04c09880:
  (*(code *)*puVar2)(plVar6,uVar8,uVar7,puVar2[1]);
  FUN_04bdea6c(lVar1,*(undefined8 *)(unaff_x19 + 8),0);
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
                    /* try { // try from 04c098b8 to 04d099b7 has its CatchHandler @ 04c09678 */
    thunk_FUN_02cd038c();
  }
  FUN_04e5a1e4(unaff_x19 + 2,0);
  return;
}


