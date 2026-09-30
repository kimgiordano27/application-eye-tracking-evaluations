/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__655_56
ENTRY_POINT: 01fa30a0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__655_56(ulong param_1)

{
  char in_NG;
  char in_OV;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x21;
  long *plVar4;
  long lVar5;
  long *unaff_x24;
  ulong uVar6;
  
  if (in_NG == in_OV) {
    uVar6 = 0;
    param_1 = param_1 & 0xffffffff;
                    /* try { // try from 01fa30ac to 020a30c3 has its CatchHandler @ 01fa31f4 */
    plVar4 = unaff_x21 + 4;
    do {
      if (param_1 <= uVar6) {
LAB_01fa3168:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      if (unaff_x21 == (long *)0x0) goto LAB_01fa316c;
      lVar5 = *(long *)(unaff_x20 + 0x20 + uVar6 * 8);
      if ((lVar5 != 0) &&
         (lVar1 = thunk_FUN_0124baac(lVar5,*(undefined8 *)(*unaff_x21 + 0x40)), lVar1 == 0)) {
        uVar2 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar2,0);
      }
      if (*(uint *)(unaff_x21 + 3) <= uVar6) goto LAB_01fa3168;
                    /* try { // try from 01fa30e8 to 020a30eb has its CatchHandler @ 01fa3210 */
      *plVar4 = lVar5;
                    /* try { // try from 01fa30f8 to 020a3103 has its CatchHandler @ 01fa3204 */
      thunk_FUN_01286abc(plVar4,lVar5);
      param_1 = (ulong)*(uint *)(unaff_x20 + 0x18);
      uVar6 = uVar6 + 1;
      plVar4 = plVar4 + 1;
    } while ((long)uVar6 < (long)(int)*(uint *)(unaff_x20 + 0x18));
  }
  uVar6 = FUN_01ed9ae4(0);
  if ((uVar6 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b5050);
    uVar3 = thunk_FUN_0124bba8();
    FUN_01f78278(uVar3,0);
    uVar2 = thunk_FUN_01279b34(PTR_DAT_027c2078);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar3,uVar2);
  }
  lVar5 = *unaff_x24;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01220628();
    lVar5 = *unaff_x24;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x30);
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01fa3164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40));
    return;
  }
LAB_01fa316c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


