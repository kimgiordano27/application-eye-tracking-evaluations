/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 01f9d200
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_63_0__ovrp_UpdateInsightPassthroughGeometryTransform(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar8;
  undefined4 uStack000000000000001c;
  
  thunk_FUN_01279b34(*(undefined8 *)(param_1 + 0x1e0));
  thunk_FUN_01279b34(PTR_DAT_027b3f20);
  thunk_FUN_01279b34(PTR_DAT_027b1ab0);
  thunk_FUN_01279b34(PTR_DAT_027bbb00);
  thunk_FUN_01279b34(PTR_DAT_027b37e0);
  thunk_FUN_01279b34(PTR_DAT_027b32e0);
  thunk_FUN_01279b34(PTR_DAT_027c1df8);
                    /* catch() { ... } // from try @ 01f9d2a8 with catch @ 01f9d254
                       catch() { ... } // from try @ 01f9d354 with catch @ 01f9d254
                       catch() { ... } // from try @ 01f9d3a8 with catch @ 01f9d254 */
  thunk_FUN_01279b34(PTR_DAT_027c1e00);
  thunk_FUN_01279b34(PTR_DAT_027c1e08);
                    /* try { // try from 01f9d26c to 0209d277 has its CatchHandler @ 01f9d360 */
  thunk_FUN_01279b34(PTR_DAT_027c1e10);
                    /* try { // try from 01f9d278 to 0209d287 has its CatchHandler @ 01f9d35c */
  thunk_FUN_01279b34(PTR_DAT_027c1e18);
  thunk_FUN_01279b34(PTR_DAT_027bce78);
  thunk_FUN_01279b34(PTR_DAT_027c1e20);
  thunk_FUN_01279b34(PTR_DAT_027c1e28);
  thunk_FUN_01279b34(PTR_DAT_027c1e30);
  thunk_FUN_01279b34(PTR_DAT_027b5370);
  thunk_FUN_01279b34(PTR_DAT_027c1e38);
  thunk_FUN_01279b34(PTR_DAT_027c1e70);
  *(undefined1 *)(unaff_x19 + 0xf4c) = 1;
  if (unaff_x21 == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar8 = thunk_FUN_0124bba8();
    uVar7 = thunk_FUN_01279b34(PTR_DAT_027b5258);
    FUN_01e75914(uVar8,uVar7,0);
    uVar7 = thunk_FUN_01279b34(PTR_DAT_027c1e78);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar8,uVar7);
  }
  if ((unaff_x22[8] == 0) && (unaff_x22[7] != 0)) {
    FUN_01f9cd44();
  }
  puVar2 = PTR_DAT_027b37e0;
  puVar1 = PTR_DAT_027b32e0;
  if (unaff_x22[0xd] == 0) {
    lVar5 = (**(code **)(*unaff_x22 + 0x1d8))();
    unaff_x22[0xd] = lVar5;
    thunk_FUN_01286abc(unaff_x22 + 0xd,lVar5);
  }
  puVar4 = PTR_DAT_027c1df0;
  puVar3 = PTR_DAT_027bb1e0;
  FUN_01f9cb74();
  uVar8 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01220628(*(long *)puVar1);
  }
  FUN_01f7d8a0(uVar8,0);
  FUN_01ebcbe8();
  FUN_01f7d8a0(*(undefined8 *)puVar2,0);
  FUN_01ebcbe8();
  FUN_01f7d8a0(*(undefined8 *)puVar3,0);
  FUN_01ebcbe8();
  FUN_01f7d8a0(*(undefined8 *)puVar4,0);
  FUN_01ebcbe8();
  FUN_01f7d8a0(*(undefined8 *)puVar2,0);
  FUN_01ebcbe8();
  FUN_01f7d8a0(*(undefined8 *)puVar2,0);
  FUN_01ebcbe8();
  FUN_01f7d8a0(*(undefined8 *)puVar2,0);
  FUN_01ebcbe8();
  uStack000000000000001c = (undefined4)unaff_x22[10];
  thunk_FUN_0124b7d8(*(undefined8 *)PTR_DAT_027b1ab0,&stack0x0000001c);
  FUN_01f7d8a0(*(undefined8 *)PTR_DAT_027b3f20,0);
  FUN_01ebcbe8();
  FUN_01eb0bd8();
  FUN_01eb1cf0();
  FUN_01f7d8a0(*(undefined8 *)puVar2,0);
  FUN_01ebcbe8();
  if ((unaff_x22[0xe] != 0) && (uVar6 = FUN_01ebca50(unaff_x22[0xe],0), (uVar6 & 1) != 0)) {
    uVar8 = *(undefined8 *)PTR_DAT_027bbb00;
    if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f7d8a0(uVar8,0);
    FUN_01ebcbe8();
    if (unaff_x22[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    FUN_01ebca60();
  }
  return;
}


