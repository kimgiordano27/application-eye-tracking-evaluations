/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$Dispose
ENTRY_POINT: 053ae940
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>__Dispose(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long in_x9;
  int in_w10;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x26;
  long *unaff_x27;
  long in_stack_00000008;
  
  uVar4 = *(undefined8 *)(in_x9 + 0x168);
  if (in_w10 == 0) {
    thunk_FUN_02fdcff0(param_1);
  }
  FUN_05afde1c(uVar4,0);
  if (unaff_x23 != 0) {
    lVar1 = FUN_059f8194();
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4(lVar5);
    }
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_03010710(lVar1,lVar5);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(lVar1,lVar5);
      }
    }
    *(long *)(unaff_x19 + 0x30) = lVar2;
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02feb2c4(lVar5);
    }
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = thunk_FUN_03010710(lVar1,lVar5);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(lVar1,lVar5);
      }
    }
    thunk_FUN_03048534((long *)(unaff_x19 + 0x30),lVar2);
    if (unaff_w22 == 0) {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x10),0);
    }
    else {
      System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_DeferredPassthroughMeshAddition>___ctor
                ();
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar4 = FUN_05afde1c(uVar4,0);
      if (in_stack_00000008 == 0) goto LAB_053aeb84;
      lVar1 = FUN_059f8194(in_stack_00000008,*(undefined8 *)PTR_DAT_06f9ca90,uVar4,0);
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02feb2c4(lVar5);
      }
      if (lVar1 == 0) {
        FUN_05b1040c(0x10,0);
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      lVar2 = thunk_FUN_03010710(lVar1,lVar5);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe9884(lVar1,lVar5);
      }
      if (0 < *(int *)(lVar2 + 0x18)) {
        uVar3 = 0;
        do {
          if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94f0();
          }
          FUN_053ae36c();
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x18));
      }
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar1 = FUN_05abbc78(0);
    if (lVar1 != 0) {
      FUN_050e29b8();
      return;
    }
  }
LAB_053aeb84:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


