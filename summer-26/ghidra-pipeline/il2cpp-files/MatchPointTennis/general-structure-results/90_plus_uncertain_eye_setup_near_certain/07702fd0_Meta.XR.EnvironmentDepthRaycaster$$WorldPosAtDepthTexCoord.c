/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$WorldPosAtDepthTexCoord
ENTRY_POINT: 07702fd0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__WorldPosAtDepthTexCoord(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  long lStack0000000000000030;
  
  *(undefined1 *)(unaff_x20 + 0xff5) = in_w8;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  lStack0000000000000030 = 0;
  uVar3 = FUN_0952be24(*(undefined8 *)(unaff_x19 + 0x28),0);
  puVar2 = PTR_DAT_09f1f210;
  puVar1 = PTR_DAT_09f1f1f8;
  if (uVar3 == 0xffffffff) {
    FUN_078b4f58(*(undefined8 *)PTR_DAT_09f30000,*(undefined8 *)(unaff_x19 + 0x28),
                 *(undefined8 *)PTR_DAT_09f2fff8,0);
    FUN_076f1130();
    return;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_05bae95c(&stack0x00000008,*(long *)(unaff_x19 + 0x30),*(undefined8 *)PTR_DAT_09f1f230);
    uStack0000000000000028 = in_stack_00000010;
    uStack0000000000000020 = in_stack_00000008;
    lStack0000000000000030 = in_stack_00000018;
    while (uVar5 = FUN_0768d020(&stack0x00000020,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
      if (lStack0000000000000030 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_0952a218(lStack0000000000000030,uVar3,0);
    }
    FUN_0768d01c(&stack0x00000020,*(undefined8 *)puVar1);
    if ((*(long *)(unaff_x19 + 0xa8) != 0) &&
       (lVar6 = *(long *)(*(long *)(unaff_x19 + 0xa8) + 0x20), lVar6 != 0)) {
      uVar4 = FUN_094c134c(lVar6,0);
      uVar3 = 1 << (ulong)(uVar3 & 0x1f);
      FUN_094c1400(lVar6,uVar4 & (uVar3 ^ 0xffffffff),0);
      if ((*(long *)(unaff_x19 + 0xb8) != 0) &&
         (lVar6 = *(long *)(*(long *)(unaff_x19 + 0xb8) + 0x20), lVar6 != 0)) {
        uVar4 = FUN_094c134c(lVar6,0);
        FUN_094c1400(lVar6,uVar4 | uVar3,0);
        if ((*(long *)(unaff_x19 + 200) != 0) &&
           (lVar6 = *(long *)(*(long *)(unaff_x19 + 200) + 0x20), lVar6 != 0)) {
          uVar4 = FUN_094c134c(lVar6,0);
          FUN_094c1400(lVar6,uVar4 | uVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


