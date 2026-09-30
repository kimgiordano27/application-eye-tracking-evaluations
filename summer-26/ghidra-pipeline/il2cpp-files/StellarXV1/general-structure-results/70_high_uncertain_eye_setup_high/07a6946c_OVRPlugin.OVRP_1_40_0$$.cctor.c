/*
FUNCTION_NAME: OVRPlugin.OVRP_1_40_0$$.cctor
ENTRY_POINT: 07a6946c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_40_0___cctor
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  int unaff_w22;
  
  do {
    iVar3 = (int)param_1 - (int)param_5;
    iVar2 = unaff_w22;
    if (iVar3 <= unaff_w22) {
      iVar2 = iVar3;
    }
    FUN_0769cb24(param_3,0,param_4,param_5,iVar2,0);
    param_4 = *(long *)(unaff_x19 + 0x18);
    uVar1 = iVar2 + *(int *)(unaff_x19 + 0x20);
    param_5 = (ulong)uVar1;
    *(uint *)(unaff_x19 + 0x20) = uVar1;
    if (param_4 == 0) goto LAB_07a69518;
    param_1 = *(undefined8 *)(param_4 + 0x18);
    unaff_w22 = unaff_w22 - iVar2;
    if ((int)(uint)param_1 < (int)uVar1) {
      thunk_FUN_040dedf8(PTR_DAT_09285a20);
      uVar5 = thunk_FUN_040b4efc();
      FUN_076b1684(uVar5,0);
                    /* try { // try from 07a6953c to 07b6953f has its CatchHandler @ 07a696d8 */
      uVar6 = thunk_FUN_040dedf8(PTR_DAT_092f0e88);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar5,uVar6);
    }
    if (uVar1 == (uint)param_1) {
                    /* try { // try from 07a694b8 to 07b694bb has its CatchHandler @ 07a696ec */
      param_5 = 0;
                    /* try { // try from 07a694bc to 07b694c3 has its CatchHandler @ 07a696fc */
      *(undefined4 *)(unaff_x19 + 0x20) = 0;
    }
  } while (0 < unaff_w22);
                    /* try { // try from 07a694e0 to 07b694e3 has its CatchHandler @ 07a696d0 */
                    /* try { // try from 07a694e4 to 07b694f7 has its CatchHandler @ 07a696f8 */
  *(float *)(unaff_x19 + 0x28) =
       *(float *)(unaff_x19 + 0x28) + (float)*(int *)(param_3 + 0x18) / DAT_01aec9bc;
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (lVar4 = FUN_08968b64(*(long *)(unaff_x19 + 0x10),0), lVar4 != 0)) {
    FUN_089678f0(lVar4,*(undefined8 *)(unaff_x19 + 0x18),0,0);
    return;
  }
LAB_07a69518:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


