/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.LayerMask_DirectConverter$$DoDeserialize
ENTRY_POINT: 036dc110
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__DoDeserialize(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  undefined8 in_stack_00000008;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
  ;
  if (*(char *)(unaff_x19 + 0x230) == '\0') {
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_02fcd73c((long)&stack0x00000008 + 4,0);
    FUN_036d9cd8();
    lVar4 = *(long *)(unaff_x19 + 0x220);
    if (*(int *)(unaff_x19 + 0x1ac) < 1) {
      if (lVar4 == 0) goto LAB_036dc1f8;
    }
    else {
      if (lVar4 == 0) {
LAB_036dc1f8:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(int *)(unaff_x19 + 0x1ac) <= *(int *)(lVar4 + 0x10)) {
        return;
      }
    }
    uVar3 = FUN_02ee7408(lVar4,*(undefined4 *)(unaff_x19 + 0x234),uVar3,0);
    *(undefined8 *)(unaff_x19 + 0x220) = uVar3;
    thunk_FUN_01b4f09c(unaff_x19 + 0x220,uVar3);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar5 = FUN_02fdf194(in_stack_00000008._4_2_,0);
    if ((uVar5 & 1) == 0) {
      iVar1 = *(int *)(unaff_x19 + 0x23c) + 1;
      *(int *)(unaff_x19 + 0x23c) = iVar1;
      *(int *)(unaff_x19 + 0x240) = iVar1;
    }
    iVar1 = *(int *)(unaff_x19 + 0x234) + 1;
    *(int *)(unaff_x19 + 0x234) = iVar1;
    *(int *)(unaff_x19 + 0x238) = iVar1;
    FUN_036d9eb4();
    FUN_036d3efc();
  }
  return;
}


