/*
FUNCTION_NAME: OVRPlugin$$GetCurrentTrackingTransformPose
ENTRY_POINT: 063821dc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetCurrentTrackingTransformPose(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar3 = FUN_0637f06c();
  puVar2 = PTR_DAT_07d95b18;
  puVar1 = PTR_DAT_07d89e28;
  if ((uVar3 & 1) != 0) {
    plVar8 = *(long **)(unaff_x20 + 0x38);
    if (plVar8 != (long *)0x0) {
      if (*plVar8 == *(long *)PTR_DAT_07d95b18) {
        puVar5 = (undefined8 *)thunk_FUN_03778a20(plVar8);
        uVar4 = *puVar5;
        uVar6 = puVar5[1];
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_06816760(uVar4,uVar6,0);
        return;
      }
    }
                    /* try { // try from 06382238 to 0648223f has its CatchHandler @ 06382504 */
    if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
                    /* try { // try from 06382240 to 0648224f has its CatchHandler @ 06382500 */
      thunk_FUN_03798b70();
    }
    uVar4 = FUN_061d52c8(0);
                    /* try { // try from 06382250 to 0648225b has its CatchHandler @ 06382504 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 0638225c to 0648225f has its CatchHandler @ 06382500 */
                    /* try { // try from 06382260 to 06482353 has its CatchHandler @ 0638144c */
      thunk_FUN_03798b70(*(long *)puVar1);
    }
    FUN_061b5458(plVar8,uVar4,0);
    return;
  }
  thunk_FUN_037a15ac(PTR_DAT_07d88078);
  FUN_031ae340();
  uVar4 = FUN_061d52c8(0);
  thunk_FUN_037a15ac(PTR_DAT_07d96690);
  FUN_031ae340();
  uVar6 = FUN_0637ef78();
  uVar7 = thunk_FUN_037a15ac(PTR_DAT_07db6058);
  uVar4 = FUN_063349e4(uVar7,uVar4,uVar6,0);
  thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
  uVar6 = thunk_FUN_037788cc();
  FUN_061a843c(uVar6,uVar4,0);
  uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6128);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar6,uVar4);
}


