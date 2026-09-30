/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$get_Length
ENTRY_POINT: 06e26ef4
PROGRAM: Hyper-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__get_Length(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long unaff_x20;
  long *unaff_x22;
  int unaff_w23;
  uint uVar7;
  long in_stack_00000090;
  undefined8 *in_stack_00000098;
  long *in_stack_000000e8;
  
  while (plVar6 = in_stack_000000e8, (param_1 & 1) != 0) {
                    /* try { // try from 06e26ef8 to 06f26f07 has its CatchHandler @ 06e26f08 */
    if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34(lVar2);
    }
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06e26f6c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(plVar6,lVar2,0);
LAB_06e26f6c:
    (*(code *)*puVar1)(&stack0x00000048,plVar6,puVar1[1]);
    memcpy(&stack0x000000a0,&stack0x00000048,0x48);
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar7 = *(uint *)(unaff_x20 + 0x18);
    if (uVar7 == *(uint *)(lVar2 + 0x18)) {
      Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
                ();
      uVar7 = *(uint *)(unaff_x20 + 0x18);
      lVar2 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = uVar7 + 1;
      memcpy(&stack0x00000000,&stack0x000000a0,0x48);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
    }
    else {
      *(uint *)(unaff_x20 + 0x18) = uVar7 + 1;
      memcpy(&stack0x00000000,&stack0x000000a0,0x48);
    }
    if (*(uint *)(lVar2 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar2 = lVar2 + (long)(int)uVar7 * (long)unaff_w23;
    memcpy((void *)(lVar2 + 0x20),&stack0x00000000,0x48);
    thunk_FUN_049ee3d8(lVar2 + 0x20,0);
    plVar6 = in_stack_000000e8;
    if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar2 = *in_stack_000000e8;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06e26ee8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(in_stack_000000e8,*unaff_x22,0);
LAB_06e26ee8:
    param_1 = (*(code *)*puVar1)(plVar6,puVar1[1]);
  }
  plVar6 = (long *)*in_stack_00000098;
  if (plVar6 != (long *)0x0) {
    lVar2 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0ac09b90) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06e270e0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(plVar6,*(long *)PTR_DAT_0ac09b90,0);
LAB_06e270e0:
    (*(code *)*puVar1)(plVar6,puVar1[1]);
  }
  if (in_stack_00000090 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948184();
}


