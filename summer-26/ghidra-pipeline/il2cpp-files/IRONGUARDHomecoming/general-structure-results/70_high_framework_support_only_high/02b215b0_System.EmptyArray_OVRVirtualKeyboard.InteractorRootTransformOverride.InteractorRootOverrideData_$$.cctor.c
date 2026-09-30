/*
FUNCTION_NAME: System.EmptyArray<OVRVirtualKeyboard.InteractorRootTransformOverride.InteractorRootOverrideData>$$.cctor
ENTRY_POINT: 02b215b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02b2174c) */

void System_EmptyArray<OVRVirtualKeyboard_InteractorRootTransformOverride_InteractorRootOverrideData>___cctor
               (void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x24;
  long *unaff_x25;
  long in_stack_00000078;
  
code_r0x02b215b0:
  puVar1 = (undefined8 *)FUN_01ecb238();
  do {
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x21 == (long *)0x0)
      goto 
      UnityEngine_UIElements_StylePropertyAnimationSystem_Values_EmptyData<BackgroundSize>___cctor;
      lVar3 = *unaff_x21;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 == 0) goto LAB_02b216d8;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar4 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02b2157c;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02b2157c:
    (*(code *)*puVar1)();
    FUN_02b22648();
    lVar3 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 == 0) goto code_r0x02b215b0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    while (*(long *)(piVar5 + -2) != *unaff_x25) {
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
      if (uVar2 == 0) goto code_r0x02b215b0;
    }
    puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_02b216f4;
    }
  }
LAB_02b216d8:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02b216f4:
  (*(code *)*puVar1)();
UnityEngine_UIElements_StylePropertyAnimationSystem_Values_EmptyData<BackgroundSize>___cctor:
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000078) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


