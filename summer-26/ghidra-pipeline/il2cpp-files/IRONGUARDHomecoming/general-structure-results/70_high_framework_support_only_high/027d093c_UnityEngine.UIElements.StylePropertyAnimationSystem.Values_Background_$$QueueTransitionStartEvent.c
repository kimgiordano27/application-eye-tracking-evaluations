/*
FUNCTION_NAME: UnityEngine.UIElements.StylePropertyAnimationSystem.Values<Background>$$QueueTransitionStartEvent
ENTRY_POINT: 027d093c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x027d0a10) */

int UnityEngine_UIElements_StylePropertyAnimationSystem_Values<Background>__QueueTransitionStartEvent
              (void)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar8;
  size_t unaff_x22;
  void *unaff_x23;
  void *unaff_x24;
  int unaff_w25;
  long unaff_x26;
  code *pcVar9;
  long *unaff_x28;
  long unaff_x29;
  
  do {
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_027d0830;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_027d0830:
    uVar6 = (*(code *)*puVar3)();
    if ((uVar6 & 1) == 0) {
      unaff_w25 = 0;
      iVar8 = 6;
      iVar2 = 6;
      if (unaff_x19 == (long *)0x0) goto LAB_027d09c0;
      goto LAB_027d0960;
    }
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x68);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          lVar4 = lVar5 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_027d08b4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    lVar4 = FUN_01ecb238();
LAB_027d08b4:
    *(void **)(unaff_x29 + -0x10) = unaff_x23;
    (**(code **)(*(long *)(lVar4 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar4 + 8) + 8));
    memcpy(unaff_x24,unaff_x23,unaff_x22);
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_01ecaf44();
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    }
    pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x48);
    if ((uVar1 & 1) == 0) {
      FUN_01ecaf44();
    }
    iVar2 = (*pcVar9)();
    if (iVar2 == unaff_w21) break;
    unaff_w25 = unaff_w25 + 1;
  } while( true );
  iVar8 = 5;
  iVar2 = 5;
  if (unaff_x19 != (long *)0x0) {
LAB_027d0960:
    iVar8 = iVar2;
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_027d09b4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238();
LAB_027d09b4:
    (*(code *)*puVar3)();
  }
LAB_027d09c0:
  if ((iVar8 == 6) || (iVar8 == 0)) {
    unaff_w25 = -1;
  }
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return unaff_w25;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


