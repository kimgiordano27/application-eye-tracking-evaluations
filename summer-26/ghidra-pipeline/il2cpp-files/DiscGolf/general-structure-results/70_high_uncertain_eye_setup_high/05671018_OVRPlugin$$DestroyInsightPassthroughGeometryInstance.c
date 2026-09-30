/*
FUNCTION_NAME: OVRPlugin$$DestroyInsightPassthroughGeometryInstance
ENTRY_POINT: 05671018
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__DestroyInsightPassthroughGeometryInstance(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined1 *puStack0000000000000038;
  undefined8 uStack0000000000000040;
  long lStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  *(undefined1 *)(unaff_x20 + 0x657) = 1;
  puVar3 = System_Collections_Generic_List<ERTexture>_TypeInfo;
  puVar2 = System_Collections_Generic_List<ERTerrainData>_TypeInfo;
  puVar1 = System_Collections_Generic_List<ERTerrainChange>_TypeInfo;
  uStack0000000000000050 = 0;
  puStack0000000000000038 = (undefined1 *)0x0;
  uStack0000000000000030 = 0;
  lStack0000000000000048 = 0;
  uStack0000000000000040 = 0;
  if (*(long *)(unaff_x19 + 0x170) != 0) {
    FUN_04e93a24(&stack0x00000008,*(long *)(unaff_x19 + 0x170),
                 *(undefined8 *)System_Collections_Generic_List<ERTerrainChange>_TypeInfo);
    uStack0000000000000050 = in_stack_00000028;
    puStack0000000000000038 = in_stack_00000010;
    uStack0000000000000030 = in_stack_00000008;
    lStack0000000000000048 = in_stack_00000020;
    uStack0000000000000040 = in_stack_00000018;
    in_stack_00000008 = 0;
    in_stack_00000010 = (undefined1 *)&stack0x00000030;
    while (uVar4 = FUN_05232904(&stack0x00000030,*(undefined8 *)puVar3), (uVar4 & 1) != 0) {
      if (lStack0000000000000048 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_05640198(lStack0000000000000048,1,0);
    }
    FUN_05232a24(&stack0x00000030,*(undefined8 *)puVar2);
    uVar4 = FUN_05670cec();
    if ((uVar4 & 1) != 0) {
      lVar5 = FUN_05640754(0);
      if (lVar5 == 0) goto LAB_05671150;
      uVar4 = FUN_056422d0(lVar5,*(undefined4 *)(unaff_x19 + 0xc0),0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x170) == 0) goto LAB_05671150;
        FUN_04e93a24(&stack0x00000008,*(long *)(unaff_x19 + 0x170),*(undefined8 *)puVar1);
        uStack0000000000000050 = in_stack_00000028;
        puStack0000000000000038 = in_stack_00000010;
        uStack0000000000000030 = in_stack_00000008;
        lStack0000000000000048 = in_stack_00000020;
        uStack0000000000000040 = in_stack_00000018;
        in_stack_00000008 = 0;
        in_stack_00000010 = (undefined1 *)&stack0x00000030;
        while (uVar4 = FUN_05232904(&stack0x00000030,*(undefined8 *)puVar3), (uVar4 & 1) != 0) {
          if (lStack0000000000000048 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_056406c8(lStack0000000000000048,0);
        }
        FUN_05232a24(&stack0x00000030,*(undefined8 *)puVar2);
      }
    }
    return 1;
  }
LAB_05671150:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


