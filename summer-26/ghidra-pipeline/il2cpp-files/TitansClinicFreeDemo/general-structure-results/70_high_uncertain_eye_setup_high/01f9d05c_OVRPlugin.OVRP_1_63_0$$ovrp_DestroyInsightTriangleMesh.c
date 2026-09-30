/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_DestroyInsightTriangleMesh
ENTRY_POINT: 01f9d05c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_63_0__ovrp_DestroyInsightTriangleMesh(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x21;
  long unaff_x22;
  
  thunk_FUN_01286abc();
  uVar1 = FUN_01f9d140();
  if (3 < *(uint *)(unaff_x21 + -0x18)) {
    *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
    thunk_FUN_01286abc((undefined8 *)(unaff_x22 + 0x38),uVar1);
    if (4 < *(uint *)(unaff_x22 + 0x18)) {
                    /* try { // try from 01f9d0a0 to 0209d0ab has its CatchHandler @ 01f9d154 */
      *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)PTR_DAT_027c1e58;
      thunk_FUN_01286abc((undefined8 *)(unaff_x22 + 0x40));
                    /* try { // try from 01f9d0b0 to 0209d0bb has its CatchHandler @ 01f9d150 */
      if (5 < *(uint *)(unaff_x22 + 0x18)) {
                    /* try { // try from 01f9d0bc to 0209d0fb has its CatchHandler @ 01f9cecc */
        *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)PTR_DAT_027c1e60;
        thunk_FUN_01286abc();
        uVar1 = FUN_01e68d7c();
        lVar2 = FUN_01f9ccf4();
        if (lVar2 != 0) {
          uVar3 = FUN_01f9d140();
          uVar1 = FUN_01e68bb0(uVar1,uVar3,lVar2,0);
          return uVar1;
        }
        return uVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


