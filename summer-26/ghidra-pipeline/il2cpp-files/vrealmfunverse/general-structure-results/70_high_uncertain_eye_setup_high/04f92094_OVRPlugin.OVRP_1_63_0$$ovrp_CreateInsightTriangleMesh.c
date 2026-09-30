/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_CreateInsightTriangleMesh
ENTRY_POINT: 04f92094
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_63_0__ovrp_CreateInsightTriangleMesh
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  ulong uVar3;
  int *in_x10;
  int *piVar4;
  long in_x11;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined4 uVar5;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_02b7654c();
      goto LAB_04f920c8;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar1 = (undefined8 *)(param_1 + (long)(*in_x10 + 0x12) * 0x10 + 0x138);
LAB_04f920c8:
  (*(code *)*puVar1)();
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000008;
  *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000000;
  *(undefined8 *)(unaff_x19 + 0x34) = uStack0000000000000014;
  *(ulong *)(unaff_x19 + 0x2c) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  FUN_04f91c08();
  lVar2 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x21) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 4) * 0x10 + 0x138);
        goto OVRPlugin_OVRP_1_63_0__ovrp_DestroyInsightTriangleMesh;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02b7654c();
OVRPlugin_OVRP_1_63_0__ovrp_DestroyInsightTriangleMesh:
  uVar5 = (*(code *)*puVar1)();
  *(undefined4 *)(unaff_x19 + 0x3c) = uVar5;
  FUN_04f91c08();
  return;
}


