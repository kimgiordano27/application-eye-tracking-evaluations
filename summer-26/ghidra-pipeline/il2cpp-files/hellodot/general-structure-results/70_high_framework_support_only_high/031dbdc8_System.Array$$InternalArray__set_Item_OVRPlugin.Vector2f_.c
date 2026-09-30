/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Vector2f>
ENTRY_POINT: 031dbdc8
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__set_Item<OVRPlugin_Vector2f>
              (long param_1,long *param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if (param_1 == 0) {
    FUN_02ce09d4(param_4);
  }
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  iVar1 = thunk_FUN_02ce9094(param_2,0);
  if (1 < iVar1) {
    thunk_FUN_02c7737c(PTR_DAT_065dc4d8);
    uVar3 = thunk_FUN_02cea894();
    uVar5 = thunk_FUN_02c7737c(PTR_DAT_065dc4e0);
    FUN_04f4212c(uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar3,param_4);
  }
  uVar2 = Newtonsoft_Json_Schema_JsonSchemaModel__get_MaximumItems(param_2,0);
  if (0 < (int)uVar2) {
    uVar7 = 0;
    do {
      memcpy(&stack0x00000048,(void *)((long)param_2 + uVar7 * *(uint *)(*param_2 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_2 + 0x104));
      in_stack_00000040 = param_3[2];
      in_stack_00000038 = param_3[1];
      in_stack_00000030 = *param_3;
      uVar3 = thunk_FUN_02cea4e8(*(undefined8 *)(*(long *)(param_4 + 0x38) + 8),&stack0x00000030);
      lVar6 = *(long *)(*(long *)(param_4 + 0x38) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02ce0978(lVar6);
      }
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000028 = in_stack_00000058;
      in_stack_00000020 = in_stack_00000050;
      in_stack_00000018 = in_stack_00000048;
      in_stack_00000008 = lVar6;
      uVar4 = thunk_FUN_04f8adf0(&stack0x00000008,uVar3,0);
      if ((uVar4 & 1) != 0) {
        iVar1 = thunk_FUN_02ce9050(param_2,0,0);
        return iVar1 + (int)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  iVar1 = thunk_FUN_02ce9050(param_2,0,0);
  return iVar1 + -1;
}


