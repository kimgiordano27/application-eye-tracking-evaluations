/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcInputVideoBufferType
ENTRY_POINT: 01f90d6c
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


void OVRPlugin_Media__SetMrcInputVideoBufferType(void)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  int in_w8;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  long *unaff_x23;
  
  if (in_w8 == 0) {
    thunk_FUN_01220628();
  }
  puVar2 = PTR_DAT_027c1b40;
  if (unaff_x19 == (long *)0x0) {
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar7 = thunk_FUN_0124bba8();
    uVar6 = thunk_FUN_01279b34(PTR_DAT_027bcb18);
    FUN_01e75914(uVar7,uVar6,0);
    uVar6 = thunk_FUN_01279b34(PTR_DAT_027c1b68);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar7,uVar6);
  }
  uVar7 = *(undefined8 *)PTR_DAT_027c1b40;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  FUN_01f7d8a0(uVar7);
  uVar4 = (**(code **)(*unaff_x19 + 0x278))();
  if ((uVar4 & 1) == 0) {
    uVar7 = *(undefined8 *)puVar2;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    plVar5 = (long *)FUN_01f7d8a0(uVar7);
    if (plVar5 != unaff_x19) {
      uVar7 = thunk_FUN_01279b34(PTR_DAT_027c1b58);
      uVar7 = FUN_01f942e0(uVar7,0);
      thunk_FUN_01279b34(PTR_DAT_027b3eb0);
      uVar6 = thunk_FUN_0124bba8();
      FUN_01e7d290(uVar6,uVar7,0);
      uVar7 = thunk_FUN_01279b34(PTR_DAT_027c1b68);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar6,uVar7);
    }
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  iVar3 = (**(code **)(*unaff_x20 + 0x198))();
  if (iVar3 == 2) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_027bca20 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_027bca20)
       ) {
      FUN_01f90760();
      return;
    }
  }
  else {
    if (iVar3 != 0x10) {
                    /* WARNING: Could not recover jumptable at 0x01f90ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x20 + 0x1e8))();
      return;
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_027b46b8 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_027b46b8)
       ) {
      FUN_01f906f0();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230f60();
}


