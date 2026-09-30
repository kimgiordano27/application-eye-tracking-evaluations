/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 01d80860
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__GetActionStatePose
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined4 uStack000000000000001c;
  char in_stack_00000020;
  char cStack0000000000000024;
  undefined8 uStack0000000000000028;
  
  puVar1 = PTR_DAT_0234bce0;
                    /* try { // try from 01d8087c to 01e808a7 has its CatchHandler @ 01d80acc */
  uStack0000000000000028 = param_3;
  if ((DAT_0247d7da & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_02359098);
    FUN_00fdc2e4(PTR_DAT_023590a0);
    FUN_00fdc2e4(PTR_DAT_0234bce0);
    DAT_0247d7da = 1;
  }
  cStack0000000000000024 = '\0';
  in_stack_00000020 = '\0';
  uStack000000000000001c = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  FUN_01d7f060(param_4,&stack0x00000028,param_5 & 1,&stack0x00000024,&stack0x00000020,
               &stack0x0000001c);
                    /* try { // try from 01d80910 to 01e80943 has its CatchHandler @ 01d80a18 */
  lVar7 = FUN_01d80a24(param_2,uStack0000000000000028);
  if (lVar7 != 0) {
    FUN_0174876c();
    cVar3 = cStack0000000000000024;
    cVar2 = in_stack_00000020;
    uVar5 = *(uint *)(lVar7 + 0x18);
                    /* try { // try from 01d80944 to 01e809d7 has its CatchHandler @ 01d80528 */
    if (0 < (int)uVar5) {
      lVar10 = 0;
      do {
        if (uVar5 <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        lVar9 = *(long *)(lVar7 + 0x20 + lVar10 * 8);
        if (lVar9 == 0) goto LAB_01d80a20;
        uVar5 = thunk_FUN_01cd2b08(lVar9,0);
        uVar6 = thunk_FUN_01cd2b08(lVar9,0);
        uVar4 = uStack0000000000000028;
        if ((uVar5 & (param_4 ^ 2)) == uVar6) {
          if (cVar3 != '\0') {
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            uVar8 = FUN_01d7f224(lVar9,uVar4,cVar2 != '\0');
            if ((uVar8 & 1) == 0) goto OVRPlugin__TriggerVibrationAction;
          }
                    /* try { // try from 01d809d8 to 01e809db has its CatchHandler @ 01d80ad4 */
          FUN_0174899c();
        }
OVRPlugin__TriggerVibrationAction:
        uVar5 = *(uint *)(lVar7 + 0x18);
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < (int)uVar5);
    }
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
LAB_01d80a20:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


