/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__655_55
ENTRY_POINT: 01fa3034
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


void OVRPlugin_<>c__<_cctor>b__655_55(void)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  long *unaff_x22;
  long *plVar7;
  long lVar8;
  long *unaff_x24;
  long *unaff_x25;
  
                    /* try { // try from 01fa3038 to 020a303f has its CatchHandler @ 01fa31f8 */
  uVar1 = (**(code **)(*unaff_x22 + 0x5d8))();
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 01fa3054 to 020a3077 has its CatchHandler @ 01fa3218 */
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f82278();
    return;
  }
                    /* try { // try from 01fa3084 to 020a30ab has its CatchHandler @ 01fa3214 */
  plVar2 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b46c8,*(undefined4 *)(unaff_x20 + 0x18));
  if (0 < (int)*(ulong *)(unaff_x20 + 0x18)) {
    uVar1 = 0;
    uVar6 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffff;
    plVar7 = plVar2 + 4;
    do {
      if (uVar6 <= uVar1) {
LAB_01fa3168:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      if (plVar2 == (long *)0x0) goto LAB_01fa316c;
      lVar8 = *(long *)(unaff_x20 + 0x20 + uVar1 * 8);
      if ((lVar8 != 0) &&
         (lVar3 = thunk_FUN_0124baac(lVar8,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
        uVar4 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar4,0);
      }
      if (*(uint *)(plVar2 + 3) <= uVar1) goto LAB_01fa3168;
      *plVar7 = lVar8;
      thunk_FUN_01286abc(plVar7,lVar8);
      uVar6 = (ulong)*(uint *)(unaff_x20 + 0x18);
      uVar1 = uVar1 + 1;
      plVar7 = plVar7 + 1;
    } while ((long)uVar1 < (long)(int)*(uint *)(unaff_x20 + 0x18));
  }
  uVar1 = FUN_01ed9ae4(0);
  if ((uVar1 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b5050);
    uVar5 = thunk_FUN_0124bba8();
    FUN_01f78278(uVar5,0);
    uVar4 = thunk_FUN_01279b34(PTR_DAT_027c2078);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar5,uVar4);
  }
  lVar8 = *unaff_x24;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01220628();
    lVar8 = *unaff_x24;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x30);
  if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01fa3164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40));
    return;
  }
LAB_01fa316c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


