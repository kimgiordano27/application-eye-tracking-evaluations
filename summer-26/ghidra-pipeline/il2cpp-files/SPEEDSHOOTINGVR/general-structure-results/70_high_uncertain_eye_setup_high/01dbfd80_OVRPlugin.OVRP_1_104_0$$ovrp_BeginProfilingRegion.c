/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_BeginProfilingRegion
ENTRY_POINT: 01dbfd80
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_104_0__ovrp_BeginProfilingRegion(long *param_1,long param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *unaff_x22;
  
  while( true ) {
    if ((unaff_x22[0xa90] & 1) == 0) {
                    /* try { // try from 01dbfd9c to 01ebfda3 has its CatchHandler @ 01dc0118 */
      FUN_00fdc2e4(PTR_DAT_0234bca8);
      unaff_x22[0xa90] = 1;
    }
    if (param_2 == 0) goto LAB_01dbfe88;
    plVar1 = *(long **)(param_2 + 0x28);
                    /* try { // try from 01dbfdb8 to 01ebfdbf has its CatchHandler @ 01dc0108 */
    if ((plVar1 == param_1) || (plVar1 == (long *)0x0)) break;
    param_3 = param_3 & 1;
    unaff_x22 = &DAT_0247d000;
    param_1 = plVar1;
  }
  if ((plVar1 != (long *)0x0) &&
     (((*(long *)(param_2 + 0x18) != 0 && (uVar2 = FUN_01db8fac(param_2,0), (uVar2 & 1) == 0)) &&
      (uVar2 = FUN_01db8514(param_2,0), (uVar2 & 1) == 0)))) {
                    /* try { // try from 01dbfe08 to 01ebfe2f has its CatchHandler @ 01dc003c */
    if (*(int *)(*(long *)PTR_DAT_0234bca8 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar3 = FUN_01db8244(0);
    if (lVar3 == 0) {
LAB_01dbfe88:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar2 = FUN_01dbd078(lVar3,0);
    if ((uVar2 & 1) != 0) {
      uVar2 = (**(code **)(*param_1 + 0x188))
                        (param_1,param_2,param_3 & 1,*(undefined8 *)(*param_1 + 400));
      FUN_01dbd0b8(lVar3,0);
      if ((uVar2 & 1) != 0) {
        uVar2 = FUN_01db8fac(param_2,0);
        if (((uVar2 & 1) == 0) && (uVar2 = FUN_01db8514(param_2,0), (uVar2 & 1) == 0)) {
          thunk_FUN_010303a8(PTR_DAT_0234c170);
          uVar4 = thunk_FUN_010400dc();
          uVar5 = thunk_FUN_010303a8(PTR_DAT_0235aa50);
          FUN_01d4a564(uVar4,uVar5,0);
          uVar5 = thunk_FUN_010303a8(PTR_DAT_0235aa58);
                    /* WARNING: Subroutine does not return */
          FUN_00fdc400(uVar4,uVar5);
        }
        return 1;
      }
    }
  }
  return 0;
}


