/*
FUNCTION_NAME: NAudio.Wave.SampleProviders.OffsetSampleProvider$$SamplesToTimeSpan
ENTRY_POINT: 05ddb8cc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05ddba58) */
/* WARNING: Removing unreachable block (ram,0x05ddbacc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16] NAudio_Wave_SampleProviders_OffsetSampleProvider__SamplesToTimeSpan(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  char cStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  ulong in_stack_00000050;
  undefined2 in_stack_00000058;
  undefined1 uStack000000000000005a;
  undefined5 uStack000000000000005b;
  undefined8 in_stack_00000068;
  
  FUN_03642964(*(undefined8 *)(param_1 + 0x110));
  FUN_03642964(PTR_DAT_07a13ad0);
  FUN_03642964(PTR_DAT_07a13a18);
  FUN_03642964(PTR_DAT_079f5558);
  *(undefined1 *)(unaff_x21 + 0xa2b) = 1;
  cStack0000000000000034 = '\0';
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar6 = FUN_05e7b144(&stack0x00000068,0);
  uVar4 = in_stack_00000068;
  puVar3 = PTR_DAT_07a13a18;
  if ((uVar6 & 1) == 0) {
    FUN_05dd9270();
    FUN_05dd93ac();
    lVar7 = FUN_05dd8f8c();
    if ((lVar7 == 0) || (lVar8 = FUN_05e7fecc(lVar7,0), lVar8 == 0)) {
LAB_05ddbac8:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar6 = FUN_05e90178(lVar8,0);
    if ((uVar6 & 1) != 0) {
      cStack0000000000000034 = 1;
      if (*(int *)(unaff_x19 + 0x44) == 0) {
        FUN_05dd9b80();
      }
      iVar5 = FUN_04d88460(&stack0x00000040,*(undefined8 *)PTR_DAT_07a14110);
      iVar1 = *(int *)(unaff_x19 + 0x38) - *(int *)(unaff_x19 + 0x44);
      cStack0000000000000034 = iVar5 < iVar1;
      if (iVar5 < iVar1) {
        System_Span<RaycastHit>__Slice(&stack0x00000040,*(undefined8 *)PTR_DAT_07a13ad0);
        FUN_05ddaf68();
        if (cStack0000000000000034 != '\0') {
          if (lVar7 == 0) goto LAB_05ddbac8;
          FUN_05e8020c(lVar7,0);
        }
        in_stack_00000050 = 0;
        uStack000000000000005a = 0;
        uStack000000000000005b = 0;
        goto LAB_05ddbaa4;
      }
    }
    uVar6 = FUN_05ddbb24();
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_079f5558 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar6 = System_Array__IndexOfImpl<SerializedCommand>(uVar4,*(undefined8 *)puVar3);
  }
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005a = 0;
  uStack000000000000005b = 0;
  if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(0x26,0);
  }
  in_stack_00000050 = uVar6;
  thunk_FUN_036b7ad0(&stack0x00000050,uVar6);
  uStack000000000000005a = 1;
LAB_05ddbaa4:
  auVar2._8_2_ = 0;
  auVar2._0_8_ = in_stack_00000050;
  auVar2[10] = uStack000000000000005a;
  auVar2._11_5_ = uStack000000000000005b;
  return auVar2;
}


