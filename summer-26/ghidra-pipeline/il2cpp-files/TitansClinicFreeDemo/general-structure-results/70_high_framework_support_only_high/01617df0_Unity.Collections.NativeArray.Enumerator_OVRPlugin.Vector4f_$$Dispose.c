/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector4f>$$Dispose
ENTRY_POINT: 01617df0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4f>__Dispose(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x26;
  long *unaff_x27;
  long in_stack_00000018;
  
  uVar4 = *(undefined8 *)(*(long *)(in_x9 + 0xc0) + 0x108);
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01220628(param_1);
  }
  uVar4 = FUN_01f7d8a0(uVar4,0);
  if (in_stack_00000018 != 0) {
    lVar1 = FUN_01ebc848(in_stack_00000018,*(undefined8 *)PTR_DAT_027b4e18,uVar4,0);
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0122e748(lVar5);
    }
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_0124baac(lVar1,lVar5);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(lVar1,lVar5);
      }
    }
    *(long *)(unaff_x19 + 0x30) = lVar2;
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0122e748(lVar5);
    }
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_0124baac(lVar1,lVar5);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(lVar1,lVar5);
      }
    }
    thunk_FUN_01286abc((long *)(unaff_x19 + 0x30),lVar2);
    if (param_2 == 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      thunk_FUN_01286abc((undefined8 *)(unaff_x19 + 0x10),0);
    }
    else {
      FUN_016176f8();
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x120);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar4 = FUN_01f7d8a0(uVar4,0);
      if (in_stack_00000018 == 0) goto LAB_01618060;
      lVar1 = FUN_01ebc848(in_stack_00000018,*(undefined8 *)PTR_DAT_027b4e20,uVar4,0);
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xd8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0122e748(lVar5);
      }
      if (lVar1 == 0) {
        FUN_01f880b8(0x10,0);
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      lVar2 = thunk_FUN_0124baac(lVar1,lVar5);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(lVar1,lVar5);
      }
      if (0 < *(int *)(lVar2 + 0x18)) {
        uVar3 = 0;
        do {
          if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_01230ca8();
          }
          FUN_016177d8();
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x18));
      }
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
LAB_01618060:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


