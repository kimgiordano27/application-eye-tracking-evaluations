/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_GetSpaceUserId
ENTRY_POINT: 01fa0278
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


void OVRPlugin_OVRP_1_79_0__ovrp_GetSpaceUserId(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *unaff_x19;
  uint unaff_w20;
  uint unaff_w22;
  undefined8 uVar7;
  long *unaff_x25;
  ulong uVar8;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined4 uStack0000000000000024;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined1 uStack0000000000000038;
  char cStack000000000000003c;
  
  cStack000000000000003c = '\0';
  uStack0000000000000038 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000024 = 0;
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  FUN_01f9df84();
                    /* try { // try from 01fa02b4 to 020a03f3 has its CatchHandler @ 01fa02b4
                       catch() { ... } // from try @ 01fa02b4 with catch @ 01fa02b4
                       catch() { ... } // from try @ 01fa0848 with catch @ 01fa02b4
                       catch() { ... } // from try @ 01fa0970 with catch @ 01fa02b4
                       catch() { ... } // from try @ 01fa09d0 with catch @ 01fa02b4
                       catch() { ... } // from try @ 01fa0a4c with catch @ 01fa02b4
                       catch() { ... } // from try @ 01fa0af8 with catch @ 01fa02b4 */
  FUN_01f9e0f8(unaff_w20 & 0xfffffff7,&stack0x00000030,unaff_w22 & 1,&stack0x0000003c,
               &stack0x00000038,&stack0x00000024);
  lVar5 = FUN_01fa03bc();
  if (lVar5 != 0) {
    FUN_018de658(&stack0x00000008,*(undefined4 *)(lVar5 + 0x18),*(undefined8 *)PTR_DAT_027c1f68);
    cVar4 = cStack000000000000003c;
    puVar1 = PTR_DAT_027c1f60;
    if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
      uVar8 = 0;
      uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        uVar3 = uStack0000000000000030;
        uVar2 = uStack0000000000000028;
        if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        uVar7 = *(undefined8 *)(lVar5 + 0x20 + uVar8 * 8);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar6 = FUN_01f9e508(uVar7,unaff_w20 & 0xfffffff7,uVar3,cVar4 != '\0',uVar2);
        if ((uVar6 & 1) != 0) {
          FUN_018de888(&stack0x00000008,uVar7,*(undefined8 *)puVar1);
        }
        uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((long)uVar8 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    unaff_x19[2] = uStack0000000000000018;
    unaff_x19[1] = uStack0000000000000010;
    *unaff_x19 = uStack0000000000000008;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


