/*
FUNCTION_NAME: UnityEngine.InputSystem.FastKeyboard$$Initialize_ctrlKeyboard0
ENTRY_POINT: 03a7517c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 133
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior;ordered_structure
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_12;frame_or_lifecycle_behavior;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03a7573c) */
/* WARNING: Removing unreachable block (ram,0x03a7572c) */
/* WARNING: Removing unreachable block (ram,0x03a75508) */

void UnityEngine_InputSystem_FastKeyboard__Initialize_ctrlKeyboard0(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long unaff_x21;
  long *unaff_x26;
  long *plStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  uVar8 = FUN_0354e804();
  puVar6 = StringLiteral_7847;
  lVar14 = *(long *)StringLiteral_7847;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar14);
    lVar14 = *(long *)puVar6;
  }
  plVar9 = (long *)**(long **)(lVar14 + 0xb8);
  if ((plVar9 == (long *)0x0) ||
     (plVar9 = (long *)(**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390)),
     plVar9 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar14 = *plVar9;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) ==
          *(long *)
           Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
         ) {
        puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_03a7521c;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar10 = (undefined8 *)
            FUN_01ecb238(plVar9,*(long *)
                                 Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault<string,_LocalDataStoreSlot>__
                         ,0);
LAB_03a7521c:
  plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
  puVar7 = StringLiteral_7869;
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar3 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plStack0000000000000008 = (long *)0x0;
  do {
    lVar15 = *plVar9;
    lVar14 = *(long *)puVar5;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar14) {
          puVar10 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03a75298;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar14,0);
LAB_03a75298:
    uVar16 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if ((uVar16 & 1) == 0) {
      plVar9 = (long *)thunk_FUN_01f116d0(plVar9,*(undefined8 *)
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                         );
      if (plVar9 == (long *)0x0) goto LAB_03a754fc;
      lVar14 = *plVar9;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 == 0) goto LAB_03a754d4;
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    lVar15 = *plVar9;
    lVar14 = *(long *)puVar5;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar14) {
          puVar10 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_03a752f8;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar14,1);
LAB_03a752f8:
    plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    puVar12 = (undefined4 *)thunk_FUN_01f11920();
    lVar14 = *(long *)puVar6;
    uVar1 = *puVar12;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar14 = *(long *)puVar6;
    }
    plVar11 = (long *)**(undefined8 **)(lVar14 + 0xb8);
    uStack000000000000001c = uVar1;
    uVar13 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,(long)&stack0x00000018 + 4);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar13,uVar13);
    }
    plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                (plVar11,uVar13,*(undefined8 *)(*plVar11 + 0x310));
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    bVar2 = *(byte *)(*(long *)puVar7 + 0x130);
    if ((*(byte *)(*plVar11 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar11);
    }
    lVar14 = plVar11[2];
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar16 = FUN_0354ff9c(lVar14,unaff_x21,0);
    if ((uVar16 & 1) != 0) {
      lVar14 = plVar11[2];
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar14 = FUN_0354fe64(lVar14,uVar8,0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (6000000000 < lVar14) {
        unaff_x21 = plVar11[2];
        if (plStack0000000000000008 == (long *)0x0) {
          plStack0000000000000008 =
               (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                           Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__);
          FUN_0353e574(plStack0000000000000008,0);
        }
        uStack0000000000000018 = uVar1;
        uVar13 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&stack0x00000018);
        if (plStack0000000000000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar13,uVar13);
        }
        (**(code **)(*plStack0000000000000008 + 0x308))
                  (plStack0000000000000008,uVar13,*(undefined8 *)(*plStack0000000000000008 + 0x310))
        ;
      }
    }
  } while( true );
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
    if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
      puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03a754f0;
    }
  }
LAB_03a754d4:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_03a754f0:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_03a754fc:
  if (plStack0000000000000008 == (long *)0x0) {
    return;
  }
  plVar9 = (long *)(**(code **)(*plStack0000000000000008 + 0x388))
                             (plStack0000000000000008,
                              *(undefined8 *)(*plStack0000000000000008 + 0x390));
  puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar3 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar15 = *plVar9;
    lVar14 = *(long *)puVar5;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar14) {
          puVar10 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03a7558c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar14,0);
LAB_03a7558c:
    uVar16 = (*(code *)*puVar10)(plVar9,puVar10[1]);
    if ((uVar16 & 1) == 0) {
      plVar9 = (long *)thunk_FUN_01f116d0(plVar9,*(undefined8 *)puVar4);
      if (plVar9 == (long *)0x0) {
        return;
      }
      lVar14 = *plVar9;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar16 == 0) goto LAB_03a756b4;
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    lVar15 = *plVar9;
    lVar14 = *(long *)puVar5;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar14) {
          puVar10 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_03a755ec;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar14,1);
LAB_03a755ec:
    plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    puVar12 = (undefined4 *)thunk_FUN_01f11920();
    lVar14 = *(long *)puVar6;
    uVar1 = *puVar12;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar14 = *(long *)puVar6;
    }
    plVar11 = (long *)**(undefined8 **)(lVar14 + 0xb8);
    in_stack_00000010._4_4_ = uVar1;
    uVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,(long)&stack0x00000010 + 4);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c(uVar8,uVar8);
    }
    (**(code **)(*plVar11 + 0x3a8))(plVar11,uVar8,*(undefined8 *)(*plVar11 + 0x3b0));
  } while( true );
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
    if (*(long *)(piVar17 + -2) == *(long *)puVar4) {
      puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03a756d0;
    }
  }
LAB_03a756b4:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_03a756d0:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return;
}


