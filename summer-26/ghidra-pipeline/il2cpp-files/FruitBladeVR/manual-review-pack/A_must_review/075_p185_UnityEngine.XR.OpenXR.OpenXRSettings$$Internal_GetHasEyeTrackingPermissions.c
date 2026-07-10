/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRSettings$$Internal_GetHasEyeTrackingPermissions
ENTRY_POINT: 036d6258
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 113
LABEL: eye_tracked_foveation_setup_review_near_certain
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_11;validity_or_gating_hits_3;strong_foveation_hits_1
*/


bool UnityEngine_XR_OpenXR_OpenXRSettings__Internal_GetHasEyeTrackingPermissions(void)

{
  char cVar1;
  char *local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
                    /* catch() { ... } // from try @ 036d6244 with catch @ 036d6268 */
  if (DAT_03ef7198 == (code *)0x0) {
                    /* try { // try from 036d626c to 037d6273 has its CatchHandler @ 036d627c */
                    /* try { // try from 036d6274 to 037d627f has its CatchHandler @ 036d5f88 */
    local_40 = "UnityOpenXR";
    uStack_38 = 0xb;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036d626c with catch @ 036d627c
                        */
    local_30 = "OculusFoveation_GetHasEyeTrackingPermissions";
    uStack_28 = 0x2c;
    local_20 = DAT_00b46930;
    local_18 = 0;
    local_14 = 0;
    DAT_03ef7198 = (code *)thunk_FUN_01c8fee8(&local_40);
  }
  cVar1 = (*DAT_03ef7198)();
  return cVar1 != '\0';
}


