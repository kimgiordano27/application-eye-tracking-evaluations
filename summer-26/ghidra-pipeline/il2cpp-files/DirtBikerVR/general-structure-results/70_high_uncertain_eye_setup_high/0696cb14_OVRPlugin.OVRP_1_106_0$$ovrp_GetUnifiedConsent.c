/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetUnifiedConsent
ENTRY_POINT: 0696cb14
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_106_0__ovrp_GetUnifiedConsent(float param_1,float param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  int iVar8;
  undefined8 *unaff_x24;
  float unaff_s10;
  float unaff_s13;
  float unaff_s14;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  
                    /* catch() { ... } // from try @ 0696c974 with catch @ 0696cb14 */
                    /* catch() { ... } // from try @ 0696c858 with catch @ 0696cb18 */
                    /* catch() { ... } // from try @ 0696c888 with catch @ 0696cb1c */
                    /* catch() { ... } // from try @ 0696c87c with catch @ 0696cb20 */
                    /* catch() { ... } // from try @ 0696c8c8 with catch @ 0696cb24 */
                    /* catch() { ... } // from try @ 0696c81c with catch @ 0696cb28 */
                    /* catch() { ... } // from try @ 0696c7b8 with catch @ 0696cb2c */
  if (SQRT((unaff_s13 - unaff_s10) * (unaff_s13 - unaff_s10) + param_2 * param_2 + param_1 * param_1
          ) < 1.0) {
                    /* try { // try from 0696cb48 to 06a6cb4b has its CatchHandler @ 0696cb58 */
    if (((*(long *)(unaff_x19 + 0x90) == 0) ||
        (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x90) + 0xe8), lVar7 == 0)) ||
       (lVar7 = *(long *)(lVar7 + 0x48), lVar7 == 0)) goto LAB_0696ca1c;
                    /* catch() { ... } // from try @ 0696cb48 with catch @ 0696cb58 */
                    /* try { // try from 0696cb5c to 06a6cb63 has its CatchHandler @ 0696cb6c */
    FUN_069464c0(unaff_s14 + *(float *)(lVar7 + 0x6c),lVar7,0);
  }
                    /* try { // try from 0696cb64 to 06a6cb6f has its CatchHandler @ 0696c5e4 */
  if (*(char *)(unaff_x19 + 0x5c) == '\0') {
    return 1;
  }
                    /* catch() { ... } // from try @ 0696cb5c with catch @ 0696cb6c */
                    /* try { // try from 0696cb70 to 06a6cd17 has its CatchHandler @ 0696cb70
                       catch() { ... } // from try @ 0696cb70 with catch @ 0696cb70
                       catch() { ... } // from try @ 0696cec8 with catch @ 0696cb70
                       catch() { ... } // from try @ 0696cff0 with catch @ 0696cb70
                       catch() { ... } // from try @ 0696d11c with catch @ 0696cb70 */
  if (*(long *)(unaff_x19 + 0x78) != 0) {
    FUN_04de90b8(&stack0x00000008,*(long *)(unaff_x19 + 0x78),*(undefined8 *)PTR_DAT_0849b370);
    puVar2 = PTR_DAT_084b70d0;
    puVar1 = PTR_DAT_0849b360;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000020;
LAB_0696cbb0:
    uVar3 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar1);
    lVar7 = in_stack_00000030;
    if ((uVar3 & 1) != 0) {
      if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar4 = FUN_07c99058(in_stack_00000030,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar4 = FUN_07c997a0(lVar4,0);
      if (lVar4 == 0) {
        if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_054c57ac(*(long *)(unaff_x20 + 0x20),lVar7,*(undefined8 *)puVar2);
      }
      else {
        lVar5 = *(long *)(unaff_x19 + 0x38);
        if (lVar5 == 0) {
LAB_0696ccc0:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        iVar8 = 0;
        while (iVar8 < *(int *)(lVar5 + 0x18)) {
          uVar6 = FUN_04de82e0(lVar5,iVar8,*unaff_x24);
          uVar3 = thunk_FUN_065cbffc(lVar4,uVar6,0);
          if ((uVar3 & 1) != 0) goto LAB_0696cbb0;
          lVar5 = *(long *)(unaff_x19 + 0x38);
          iVar8 = iVar8 + 1;
          if (lVar5 == 0) goto LAB_0696ccc0;
        }
        if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        FUN_054c57ac(*(long *)(unaff_x20 + 0x20),lVar7,*(undefined8 *)puVar2);
      }
      goto LAB_0696cbb0;
    }
    FUN_061c1960(&stack0x00000020,*(undefined8 *)PTR_DAT_0849b358);
    if (*(long *)(unaff_x19 + 0x70) != 0) {
      FUN_054c57ac();
      return 1;
    }
  }
LAB_0696ca1c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


