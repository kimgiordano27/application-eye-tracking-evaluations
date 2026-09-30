/*
FUNCTION_NAME: Unity.Services.Vivox.vx_req_sessiongroup_control_audio_injection_t$$Dispose
ENTRY_POINT: 0795b164
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long Unity_Services_Vivox_vx_req_sessiongroup_control_audio_injection_t__Dispose(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  
                    /* try { // try from 0795b170 to 07a5b17f has its CatchHandler @ 0795b180 */
                    /* catch() { ... } // from try @ 0795b100 with catch @ 0795b180
                       catch() { ... } // from try @ 0795b170 with catch @ 0795b180 */
                    /* try { // try from 0795b184 to 07a5b187 has its CatchHandler @ 0795b190 */
                    /* try { // try from 0795b188 to 07a5b193 has its CatchHandler @ 0795b0bc */
  uVar1 = FUN_065ce354(**(undefined8 **)(param_1 + 0x390));
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0795b184 with catch @ 0795b190
                        */
                    /* catch() { ... } // from try @ 0795b1b4 with catch @ 0795b194
                       catch() { ... } // from try @ 0795b1f0 with catch @ 0795b194
                       catch() { ... } // from try @ 0795b260 with catch @ 0795b194 */
  lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
  FUN_07c9d2fc(lVar2,uVar1,0);
                    /* try { // try from 0795b1b0 to 07a5b1b3 has its CatchHandler @ 0795b1c0 */
                    /* try { // try from 0795b1b4 to 07a5b1d7 has its CatchHandler @ 0795b194 */
  *unaff_x20 = lVar2;
  thunk_FUN_03afed3c();
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 0795b1b0 with catch @ 0795b1c0
                        */
  if (*unaff_x20 != 0) {
    FUN_07c9c8e4(*unaff_x20,0,0);
    if ((*unaff_x20 != 0) &&
       (lVar2 = FUN_045614d0(*unaff_x20,
                             *(undefined8 *)
                              Unity_Services_Authentication_AuthenticationExceptionHandler_TypeInfo)
       , lVar2 != 0)) {
      FUN_07aff388(lVar2,0,0);
      uVar1 = FUN_0795b464();
      FUN_07aff3ec(lVar2,uVar1,0);
      uVar1 = FUN_07959fe0();
      FUN_07b00750(lVar2,uVar1,0);
      FUN_07b00910(lVar2,unaff_w21 & 1,0);
      uVar1 = FUN_0447aad0(lVar2,*(undefined8 *)PTR_DAT_0848c020);
      *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x28),uVar1);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_07c9c8e4(*(long *)(unaff_x19 + 0x20),1,0);
        return *unaff_x20;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


