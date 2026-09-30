/*
FUNCTION_NAME: UnityEngine.InputSystem.FastKeyboard$$Initialize_ctrlKeyboardleftShift
ENTRY_POINT: 03a75360
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03a75508) */
/* WARNING: Removing unreachable block (ram,0x03a7573c) */
/* WARNING: Removing unreachable block (ram,0x03a7572c) */

void UnityEngine_InputSystem_FastKeyboard__Initialize_ctrlKeyboardleftShift
               (undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  undefined4 unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long lVar14;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  do {
    plVar8 = (long *)(**(code **)(*unaff_x23 + 0x308))
                               (unaff_x23,param_2,*(undefined8 *)(*unaff_x23 + 0x310));
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    bVar2 = *(byte *)(*unaff_x29 + 0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x29)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar8);
    }
    lVar14 = plVar8[2];
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = FUN_0354ff9c(lVar14,unaff_x21,0);
    if ((uVar9 & 1) != 0) {
      lVar14 = plVar8[2];
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar14 = FUN_0354fe64(lVar14);
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (6000000000 < lVar14) {
        unaff_x21 = plVar8[2];
        if (in_stack_00000008 == (long *)0x0) {
          in_stack_00000008 =
               (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                           Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__);
          FUN_0353e574(in_stack_00000008,0);
        }
        uStack0000000000000018 = unaff_w19;
        uVar10 = thunk_FUN_01f113fc(*unaff_x28,&stack0x00000018);
        if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar10,uVar10);
        }
        (**(code **)(*in_stack_00000008 + 0x308))
                  (in_stack_00000008,uVar10,*(undefined8 *)(*in_stack_00000008 + 0x310));
      }
    }
    lVar14 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar9 != 0) {
      piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x27) {
          puVar6 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03a75298;
        }
        uVar9 = uVar9 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03a75298:
    uVar9 = (*(code *)*puVar6)();
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if ((uVar9 & 1) == 0) {
      plVar8 = (long *)thunk_FUN_01f116d0();
      if (plVar8 == (long *)0x0) goto LAB_03a754fc;
      lVar14 = *plVar8;
      uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar9 == 0) goto LAB_03a754d4;
      piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    lVar14 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar9 != 0) {
      piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x27) {
          puVar6 = (undefined8 *)(lVar14 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_03a752f8;
        }
        uVar9 = uVar9 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_03a752f8:
    plVar8 = (long *)(*(code *)*puVar6)();
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar8 + 0x40) != *(long *)(*unaff_x28 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    puVar7 = (undefined4 *)thunk_FUN_01f11920();
    lVar14 = *unaff_x25;
    unaff_w19 = *puVar7;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar14 = *unaff_x25;
    }
    unaff_x23 = (long *)**(undefined8 **)(lVar14 + 0xb8);
    uStack000000000000001c = unaff_w19;
    param_2 = thunk_FUN_01f113fc(*unaff_x28,(long)&stack0x00000018 + 4);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar13 = piVar13 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
      puVar6 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03a754f0;
    }
  }
LAB_03a754d4:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_03a754f0:
  (*(code *)*puVar6)(plVar8,puVar6[1]);
LAB_03a754fc:
  if (in_stack_00000008 == (long *)0x0) {
    return;
  }
  plVar8 = (long *)(**(code **)(*in_stack_00000008 + 0x388))
                             (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x390));
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar3 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar12 = *plVar8;
    lVar14 = *(long *)puVar5;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar14) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03a7558c;
        }
        uVar9 = uVar9 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar8,lVar14,0);
LAB_03a7558c:
    uVar9 = (*(code *)*puVar6)(plVar8,puVar6[1]);
    if ((uVar9 & 1) == 0) {
      plVar8 = (long *)thunk_FUN_01f116d0(plVar8,*(undefined8 *)puVar4);
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar14 = *plVar8;
      uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar9 == 0) goto LAB_03a756b4;
      piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    lVar12 = *plVar8;
    lVar14 = *(long *)puVar5;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar14) {
          puVar6 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_03a755ec;
        }
        uVar9 = uVar9 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar8,lVar14,1);
LAB_03a755ec:
    plVar11 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    puVar7 = (undefined4 *)thunk_FUN_01f11920();
    lVar14 = *unaff_x25;
    uVar1 = *puVar7;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar14 = *unaff_x25;
    }
    plVar11 = (long *)**(undefined8 **)(lVar14 + 0xb8);
    in_stack_00000010._4_4_ = uVar1;
    uVar10 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,(long)&stack0x00000010 + 4);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar10,uVar10);
    }
    (**(code **)(*plVar11 + 0x3a8))(plVar11,uVar10,*(undefined8 *)(*plVar11 + 0x3b0));
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar13 = piVar13 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
      puVar6 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03a756d0;
    }
  }
LAB_03a756b4:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_03a756d0:
  (*(code *)*puVar6)(plVar8,puVar6[1]);
  return;
}


