/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$TrySerialize
ENTRY_POINT: 06918058
PROGRAM: m3ar-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


undefined8
Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__TrySerialize(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  FUN_05769bcc(&stack0x00000008,param_1,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40));
  *(undefined4 *)((long)unaff_x19 + 0x14) = 2;
  unaff_x19[10] = in_stack_00000010;
  unaff_x19[9] = in_stack_00000008;
  unaff_x19[0xb] = CONCAT44(uStack000000000000001c,uStack0000000000000018);
  do {
    uVar2 = FUN_071f94a0(unaff_x19 + 9,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80));
    if ((uVar2 & 1) == 0) {
      (**(code **)(*unaff_x19 + 0x1f8))();
      return 0;
    }
    lVar3 = unaff_x19[7];
    lVar1 = unaff_x19[0xb];
  } while ((lVar3 != 0) &&
          (uVar2 = (**(code **)(lVar3 + 0x18))
                             (*(undefined8 *)(lVar3 + 0x40),(int)lVar1,*(undefined8 *)(lVar3 + 0x28)
                             ), (uVar2 & 1) == 0));
  lVar3 = unaff_x19[8];
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))
              (&stack0x00000008,*(undefined8 *)(lVar3 + 0x40),(int)lVar1,
               *(undefined8 *)(lVar3 + 0x28));
    unaff_x19[4] = in_stack_00000010;
    unaff_x19[3] = in_stack_00000008;
    *(undefined4 *)(unaff_x19 + 5) = uStack0000000000000018;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


