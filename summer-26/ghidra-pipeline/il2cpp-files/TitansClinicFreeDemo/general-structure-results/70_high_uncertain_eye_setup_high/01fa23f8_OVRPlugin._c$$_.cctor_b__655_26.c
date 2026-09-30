/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__655_26
ENTRY_POINT: 01fa23f8
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


long OVRPlugin_<>c__<_cctor>b__655_26(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x19;
  long unaff_x20;
  
  thunk_FUN_01279b34(PTR_DAT_027b3ea8);
  *(undefined1 *)(unaff_x20 + 0xf75) = 1;
  uVar2 = (**(code **)(*unaff_x19 + 0x568))();
  puVar1 = PTR_DAT_027b3ea8;
  if ((uVar2 & 1) == 0) {
    uVar5 = thunk_FUN_01279b34(PTR_DAT_027c1210);
    thunk_FUN_01279b34(PTR_DAT_027b3eb0);
    uVar6 = thunk_FUN_0124bba8();
    uVar7 = thunk_FUN_01279b34(PTR_DAT_027c1218);
    FUN_01e7598c(uVar6,uVar5,uVar7,0);
    uVar5 = thunk_FUN_01279b34(PTR_DAT_027c2058);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar6,uVar5);
  }
  if (*(int *)(*(long *)PTR_DAT_027b3ea8 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  lVar3 = FUN_01f99be0();
  if (lVar3 != 0) {
                    /* try { // try from 01fa244c to 020a2467 has its CatchHandler @ 01fa1fac */
    lVar4 = FUN_01f8cdf0();
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar2 = 0;
      uVar8 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar8 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar5 = FUN_01f99958();
        if (lVar4 == 0) goto LAB_01fa24e0;
        FUN_01f89750(lVar4,uVar5,uVar2 & 0xffffffff,0);
        uVar8 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    return lVar4;
  }
LAB_01fa24e0:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


