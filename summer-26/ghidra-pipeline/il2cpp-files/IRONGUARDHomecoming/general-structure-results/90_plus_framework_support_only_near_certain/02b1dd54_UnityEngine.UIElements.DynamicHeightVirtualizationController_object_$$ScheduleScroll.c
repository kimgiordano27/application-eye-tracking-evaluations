/*
FUNCTION_NAME: UnityEngine.UIElements.DynamicHeightVirtualizationController<object>$$ScheduleScroll
ENTRY_POINT: 02b1dd54
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02b1e1d8) */

void UnityEngine_UIElements_DynamicHeightVirtualizationController<object>__ScheduleScroll(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  void *__src;
  undefined8 *unaff_x23;
  undefined8 uVar11;
  long unaff_x24;
  long unaff_x26;
  undefined4 in_stack_00000008;
  long in_stack_00000188;
  
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  *(undefined1 *)(unaff_x24 + 0x1b1) = 1;
  *(undefined8 *)((long)unaff_x23 + 0x74) = 0;
  *(undefined8 *)((long)unaff_x23 + 0x6c) = 0;
  unaff_x23[0xb] = 0;
  unaff_x23[10] = 0;
  unaff_x23[0xd] = 0;
  unaff_x23[0xc] = 0;
  unaff_x23[7] = 0;
  unaff_x23[6] = 0;
  unaff_x23[9] = 0;
  unaff_x23[8] = 0;
  unaff_x23[3] = 0;
  unaff_x23[2] = 0;
  unaff_x23[5] = 0;
  unaff_x23[4] = 0;
  unaff_x23[1] = 0;
  *unaff_x23 = 0;
  if (unaff_x21 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *unaff_x21;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02b1de00;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02b1de00:
    uVar3 = (*(code *)*puVar4)();
  }
  FUN_02b1dc48(unaff_x20,uVar3);
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(1,0);
  }
  uVar5 = thunk_FUN_01ecaf38();
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  uVar11 = FUN_03579868(uVar11,0);
  uVar9 = FUN_03582560(uVar5,uVar11,0);
  lVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar9 & 1) == 0) {
    lVar7 = *(long *)(lVar7 + 0x88);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    lVar8 = *unaff_x21;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02b1dfc4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02b1dfc4:
    plVar6 = (long *)(*(code *)*puVar4)();
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar7 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02b1e03c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar2,0);
LAB_02b1e03c:
      uVar9 = (*(code *)*puVar4)(plVar6,puVar4[1]);
      if ((uVar9 & 1) == 0) goto LAB_02b1e11c;
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      lVar8 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto UnityEngine_UIElements_DynamicHeightVirtualizationController<object>__ResetScroll;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar6,lVar7,0);
UnityEngine_UIElements_DynamicHeightVirtualizationController<object>__ResetScroll:
      (*(code *)*puVar4)(&stack0x00000008,plVar6,puVar4[1]);
      memcpy(&stack0x00000100,(void *)((ulong)&stack0x00000008 | 4),0x7c);
      memcpy(&stack0x00000008,(void *)((ulong)&stack0x00000100 | 4),0x78);
      FUN_02b1f3a0();
    } while( true );
  }
  lVar7 = *(long *)(lVar7 + 0x30);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  if ((*(byte *)(*unaff_x21 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
     (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
  uVar1 = *(uint *)(unaff_x21 + 4);
  if (0 < (int)uVar1) {
    lVar7 = unaff_x21[3];
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar9 = 0;
    __src = (void *)(lVar7 + 0x30);
    do {
      if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (-1 < *(int *)((long)__src + -0x10)) {
        memcpy(&stack0x00000088,__src,0x78);
        memcpy(&stack0x00000008,&stack0x00000088,0x78);
        FUN_02b1f3a0();
      }
      uVar9 = uVar9 + 1;
      __src = (void *)((long)__src + 0x88);
    } while (uVar1 != uVar9);
  }
  goto LAB_02b1e188;
LAB_02b1e11c:
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02b1e178;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar6,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02b1e178:
    (*(code *)*puVar4)(plVar6,puVar4[1]);
  }
LAB_02b1e188:
  if (*(long *)(unaff_x26 + 0x28) == in_stack_00000188) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


