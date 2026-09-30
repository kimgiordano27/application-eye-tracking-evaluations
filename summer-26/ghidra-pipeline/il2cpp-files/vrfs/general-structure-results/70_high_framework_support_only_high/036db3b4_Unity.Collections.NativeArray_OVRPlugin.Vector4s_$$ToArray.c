/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$ToArray
ENTRY_POINT: 036db3b4
PROGRAM: vrfs-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__ToArray
               (long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long in_x9;
  ulong in_x10;
  uint in_w11;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long in_stack_00000048;
  
  do {
    if ((in_w11 < (uint)in_x10) || (*(long *)(*(long *)(in_x9 + 200) + in_x10 * 8 + -8) != param_3))
    {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170(param_1);
    }
    do {
      uVar3 = FUN_036d8ec8();
      if ((uVar3 & 1) == 0) {
        uVar5 = FUN_0474aec4(*unaff_x25,0);
        *(undefined8 *)(unaff_x19 + 0x40) = uVar5;
        thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x40),uVar5);
        FUN_03fbb8e8();
        uVar5 = 0;
LAB_036db5f4:
        if (*(long *)(unaff_x24 + 0x28) == in_stack_00000048) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar5);
      }
      unaff_w23 = unaff_w23 + 1;
      lVar4 = (**(code **)(*unaff_x21 + 0x238))();
      if (lVar4 == 0) {
LAB_036db400:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      iVar1 = FUN_03f054bc(lVar4,0);
      if (iVar1 <= unaff_w23) {
        FUN_03fbb8e8();
        uVar5 = 1;
        goto LAB_036db5f4;
      }
      plVar2 = (long *)(**(code **)(*unaff_x21 + 0x238))();
      if (plVar2 == (long *)0x0) goto LAB_036db400;
      param_1 = (long *)(**(code **)(*plVar2 + 0x308))
                                  (plVar2,unaff_w23,*(undefined8 *)(*plVar2 + 0x310));
    } while (param_1 == (long *)0x0);
    in_x9 = *param_1;
    param_3 = *unaff_x26;
    in_w11 = (uint)*(byte *)(in_x9 + 300);
    in_x10 = (ulong)*(byte *)(param_3 + 300);
  } while( true );
}


