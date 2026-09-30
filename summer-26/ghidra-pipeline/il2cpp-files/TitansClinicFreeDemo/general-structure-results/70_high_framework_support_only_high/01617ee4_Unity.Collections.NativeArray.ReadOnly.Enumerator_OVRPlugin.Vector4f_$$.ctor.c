/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 01617ee4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector4f>___ctor(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x26;
  long *unaff_x27;
  long in_stack_00000018;
  
  FUN_016176f8();
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x120);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar3 = FUN_01f7d8a0(uVar3,0);
  if (in_stack_00000018 != 0) {
    lVar1 = FUN_01ebc848(in_stack_00000018,*(undefined8 *)PTR_DAT_027b4e20,uVar3,0);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xd8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0122e748(lVar4);
    }
    if (lVar1 == 0) {
      FUN_01f880b8(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    lVar2 = thunk_FUN_0124baac(lVar1,lVar4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230f60(lVar1,lVar4);
    }
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar5 = 0;
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        FUN_016177d8();
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)*(int *)(lVar2 + 0x18));
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar1 = FUN_01f4aa70(0);
    if (lVar1 != 0) {
      FUN_015dac94();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


