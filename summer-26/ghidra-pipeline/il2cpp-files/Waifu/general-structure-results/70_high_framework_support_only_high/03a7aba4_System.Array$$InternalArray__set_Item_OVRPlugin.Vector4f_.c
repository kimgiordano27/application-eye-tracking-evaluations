/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.Vector4f>
ENTRY_POINT: 03a7aba4
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Array__InternalArray__set_Item<OVRPlugin_Vector4f>(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 *unaff_x21;
  ulong uVar7;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  if (param_1 == 0) {
    FUN_0338f674();
  }
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  if (1 < *(byte *)(*param_2 + 0x132)) {
    FUN_033d1ba8(&DAT_083d0470);
    uVar4 = thunk_FUN_03398a84();
    uVar5 = FUN_033d1ba8(&DAT_08442c08);
    FUN_06841a44(uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar4);
  }
  uVar1 = FUN_068485f0(param_2,0);
  if (0 < (int)uVar1) {
    uVar7 = 0;
    do {
      memcpy(&stack0x00000050,(void *)((long)param_2 + uVar7 * *(uint *)(*param_2 + 0x104) + 0x20),
             (ulong)*(uint *)(*param_2 + 0x104));
      in_stack_00000038 = unaff_x21[1];
      in_stack_00000030 = *unaff_x21;
      in_stack_00000048 = unaff_x21[3];
      in_stack_00000040 = unaff_x21[2];
      FUN_03398650(*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000030);
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        FUN_0338f618(lVar6);
      }
      uVar3 = FUN_06891484();
      if ((uVar3 & 1) != 0) goto LAB_03a7ac70;
      uVar7 = uVar7 + 1;
    } while (uVar1 != uVar7);
  }
  uVar7 = 0xffffffff;
LAB_03a7ac70:
  iVar2 = FUN_0334d06c(param_2,0);
  return iVar2 + (int)uVar7;
}


