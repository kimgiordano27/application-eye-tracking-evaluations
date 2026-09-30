/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$TryDeserialize
ENTRY_POINT: 02311058
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


undefined8
Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__TryDeserialize
          (long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  if (*(int *)((long)param_1 + 0x14) != 2) {
    if (*(int *)((long)param_1 + 0x14) != 1) {
      return 0;
    }
    if (param_1[5] == 0) goto LAB_02311144;
    FUN_02abc330(param_1[5],*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x38));
    param_1[10] = in_stack_00000018;
    param_1[9] = in_stack_00000010;
    param_1[8] = in_stack_00000008;
    param_1[7] = in_stack_00000000;
    thunk_FUN_01b4f09c(param_1 + 7,0);
    *(undefined4 *)((long)param_1 + 0x14) = 2;
  }
  while( true ) {
    uVar3 = FUN_02702284(param_1 + 7,
                         *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x68));
    if ((uVar3 & 1) == 0) {
      (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
      return 0;
    }
    lVar4 = param_1[6];
    if (lVar4 == 0) break;
    lVar1 = param_1[9];
    lVar2 = param_1[10];
    uVar3 = (**(code **)(lVar4 + 0x18))
                      (*(undefined8 *)(lVar4 + 0x40),lVar1,lVar2,*(undefined8 *)(lVar4 + 0x28));
    if ((uVar3 & 1) != 0) {
      param_1[3] = lVar1;
      param_1[4] = lVar2;
      thunk_FUN_01b4f09c(param_1 + 3,0);
      return 1;
    }
  }
LAB_02311144:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


