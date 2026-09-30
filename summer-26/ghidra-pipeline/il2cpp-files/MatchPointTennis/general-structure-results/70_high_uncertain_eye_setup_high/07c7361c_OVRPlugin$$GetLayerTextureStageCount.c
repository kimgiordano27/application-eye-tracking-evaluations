/*
FUNCTION_NAME: OVRPlugin$$GetLayerTextureStageCount
ENTRY_POINT: 07c7361c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetLayerTextureStageCount(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *in_x9;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  
  (*in_x9)();
                    /* try { // try from 07c73630 to 07d73633 has its CatchHandler @ 07c736c4 */
  *(undefined8 *)(unaff_x26 + 0x14) = uStack0000000000000094;
  *(ulong *)(unaff_x26 + 0xc) = CONCAT44(uStack0000000000000090,in_stack_00000088._4_4_);
  FUN_07c738a8();
  lVar1 = FUN_07c723dc();
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_07c723dc();
    if ((unaff_x19 == 0) || (uVar3 = FUN_095259a0(), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar1 = *plVar2;
                    /* try { // try from 07c73690 to 07d736c3 has its CatchHandler @ 07c73810 */
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
                    /* catch() { ... } // from try @ 07c732fc with catch @ 07c736d4 */
          puVar4 = (undefined8 *)(lVar1 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_07c736d8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar2,*unaff_x25,4);
                    /* catch() { ... } // from try @ 07c73630 with catch @ 07c736c4
                       try { // try from 07c736c4 to 07d736f3 has its CatchHandler @ 07c731f8 */
LAB_07c736d8:
    (*(code *)*puVar4)(plVar2,uVar3,puVar4[1]);
    FUN_07c72b70();
  }
                    /* try { // try from 07c736f4 to 07d736f7 has its CatchHandler @ 07c7377c */
  return;
}


