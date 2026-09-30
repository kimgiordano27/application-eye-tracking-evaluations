/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 01617dd4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector4f>___ctor(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *in_x9;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x26;
  long unaff_x27;
  long *plVar7;
  long in_stack_00000018;
  
  plVar7 = *(long **)(unaff_x27 + 0x2e0);
  iVar1 = FUN_01ebe91c(param_1,*in_x9,0);
  lVar3 = *plVar7;
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x108);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01220628(lVar3);
  }
  uVar5 = FUN_01f7d8a0(uVar5,0);
  if (in_stack_00000018 != 0) {
    lVar3 = FUN_01ebc848(in_stack_00000018,*(undefined8 *)PTR_DAT_027b4e18,uVar5,0);
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748(lVar6);
    }
    if (lVar3 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_0124baac(lVar3,lVar6);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(lVar3,lVar6);
      }
    }
    *(long *)(unaff_x19 + 0x30) = lVar2;
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0122e748(lVar6);
    }
    if (lVar3 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_0124baac(lVar3,lVar6);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(lVar3,lVar6);
      }
    }
    thunk_FUN_01286abc((long *)(unaff_x19 + 0x30),lVar2);
    if (iVar1 == 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      thunk_FUN_01286abc((undefined8 *)(unaff_x19 + 0x10),0);
    }
    else {
      FUN_016176f8();
      uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x120);
      if (*(int *)(*plVar7 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar5 = FUN_01f7d8a0(uVar5,0);
      if (in_stack_00000018 == 0) goto LAB_01618060;
      lVar3 = FUN_01ebc848(in_stack_00000018,*(undefined8 *)PTR_DAT_027b4e20,uVar5,0);
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xd8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0122e748(lVar6);
      }
      if (lVar3 == 0) {
        FUN_01f880b8(0x10,0);
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      lVar2 = thunk_FUN_0124baac(lVar3,lVar6);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(lVar3,lVar6);
      }
      if (0 < *(int *)(lVar2 + 0x18)) {
        uVar4 = 0;
        do {
          if (*(uint *)(lVar2 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_01230ca8();
          }
          FUN_016177d8();
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)*(int *)(lVar2 + 0x18));
      }
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar3 = FUN_01f4aa70(0);
    if (lVar3 != 0) {
      FUN_015dac94();
      return;
    }
  }
LAB_01618060:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


