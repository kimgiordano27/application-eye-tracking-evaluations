/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 03c6ea68
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03c6eb74) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int in_w8;
  long *in_x9;
  long lVar5;
  int in_w10;
  int in_w11;
  long unaff_x19;
  undefined4 unaff_w20;
  int unaff_w21;
  long lVar6;
  int unaff_w22;
  long *plVar7;
  int iVar8;
  undefined8 in_stack_00000008;
  
  if (0x4000 < unaff_w21) {
    in_w11 = in_w11 + 1;
  }
  lVar6 = *in_x9;
  if (unaff_w22 == 2) {
    in_w10 = in_w11;
  }
  iVar8 = in_w10 + 1;
  do {
    iVar8 = iVar8 + -1;
    if (iVar8 < 1) {
      if (*(uint *)(unaff_x19 + 0x1c) < 0xffffc567) {
        *(uint *)(unaff_x19 + 0x1c) = *(uint *)(unaff_x19 + 0x1c) + 15000;
      }
      break;
    }
    lVar5 = *(long *)(unaff_x19 + 0x10);
    uVar1 = in_w8 - 1;
    *(uint *)(unaff_x19 + 0x18) = uVar1;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    puVar3 = (undefined8 *)(lVar5 + (ulong)uVar1 * 8 + 0x20);
    plVar7 = (long *)*puVar3;
    *puVar3 = 0;
    thunk_FUN_02dd37b4(puVar3,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar4 = FUN_04fa51f0(lVar6,0);
    if ((uVar4 & 1) != 0) {
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar2 = (**(code **)(*plVar7 + 0x158))(plVar7,*(undefined8 *)(*plVar7 + 0x160));
      FUN_04fb6e20(lVar6,uVar2,(int)plVar7[3],unaff_w20,0);
    }
    in_w8 = *(int *)(unaff_x19 + 0x18);
  } while (0 < in_w8);
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_02d6ec70();
  }
  return;
}


