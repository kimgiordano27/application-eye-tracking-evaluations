/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$get_IsCreated
ENTRY_POINT: 06e26fa4
PROGRAM: Hyper-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__get_IsCreated
               (undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  long *unaff_x22;
  int unaff_w23;
  uint unaff_w24;
  long in_stack_00000090;
  undefined8 *in_stack_00000098;
  long *in_stack_000000e8;
  
  do {
    if ((bool)in_ZR) {
      Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
                ();
      unaff_w24 = *(uint *)(unaff_x20 + 0x18);
      unaff_x21 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x18) = unaff_w24 + 1;
      memcpy(&stack0x00000000,&stack0x000000a0,0x48);
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
    }
    else {
      *(int *)(unaff_x20 + 0x18) = param_2;
      memcpy(&stack0x00000000,&stack0x000000a0,0x48);
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    lVar6 = unaff_x21 + (long)(int)unaff_w24 * (long)unaff_w23;
    memcpy((void *)(lVar6 + 0x20),&stack0x00000000,0x48);
    thunk_FUN_049ee3d8(lVar6 + 0x20,0);
    plVar5 = in_stack_000000e8;
    if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar6 = *in_stack_000000e8;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar6 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_06e26ee8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(in_stack_000000e8,*unaff_x22,0);
LAB_06e26ee8:
    uVar3 = (*(code *)*puVar1)(plVar5,puVar1[1]);
    plVar5 = in_stack_000000e8;
    if ((uVar3 & 1) == 0) {
      plVar5 = (long *)*in_stack_00000098;
      if (plVar5 == (long *)0x0) goto LAB_06e270ec;
      lVar6 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 == 0) goto LAB_06e270c4;
      piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (in_stack_000000e8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_04980b34(lVar6);
    }
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == lVar6) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_06e26f6c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_04980e68(plVar5,lVar6,0);
LAB_06e26f6c:
    (*(code *)*puVar1)(&stack0x00000048,plVar5,puVar1[1]);
    memcpy(&stack0x000000a0,&stack0x00000048,0x48);
    unaff_x21 = *(long *)(unaff_x20 + 0x10);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    unaff_w24 = *(uint *)(unaff_x20 + 0x18);
    in_ZR = unaff_w24 == *(uint *)(unaff_x21 + 0x18);
    param_2 = unaff_w24 + 1;
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0ac09b90) {
      puVar1 = (undefined8 *)(lVar6 + (long)*piVar4 * 0x10 + 0x138);
      goto LAB_06e270e0;
    }
  }
LAB_06e270c4:
  puVar1 = (undefined8 *)FUN_04980e68(plVar5,*(long *)PTR_DAT_0ac09b90,0);
LAB_06e270e0:
  (*(code *)*puVar1)(plVar5,puVar1[1]);
LAB_06e270ec:
  if (in_stack_00000090 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948184();
}


