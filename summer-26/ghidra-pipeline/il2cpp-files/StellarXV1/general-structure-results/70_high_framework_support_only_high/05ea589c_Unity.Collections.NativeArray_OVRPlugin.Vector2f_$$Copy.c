/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Copy
ENTRY_POINT: 05ea589c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(void *param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long unaff_x23;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x23 + 0x28);
  lVar7 = *(long *)(param_2 + 0x20);
  uVar1 = *(ushort *)(lVar7 + 0x135);
  lVar2 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_040b1acc(lVar7);
    uVar1 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
    lVar2 = *(long *)(param_2 + 0x20);
  }
  uVar5 = (ulong)*(uint *)(**(long **)(lVar7 + 0xc0) + 0xfc);
  memcpy(&stack0x00000000 + -(uVar5 + 0xf & 0x1fffffff0),param_1,uVar5);
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_040b1acc(lVar2);
  }
  plVar3 = (long *)thunk_FUN_040b4b34(**(undefined8 **)(lVar2 + 0xc0),
                                      &stack0x00000000 + -(uVar5 + 0xf & 0x1fffffff0));
  if (plVar3 == (long *)0x0) {
    if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  }
  else {
    lVar2 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x100);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc(lVar2);
    }
    lVar7 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05ea59a8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar3,lVar2,0);
LAB_05ea59a8:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


