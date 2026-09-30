/*
FUNCTION_NAME: UnityEngine.InputSystem.InputControlExtensions.DeviceBuilder$$WithName
ENTRY_POINT: 03a613e4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 211
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_20;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03a61b0c) */
/* WARNING: Removing unreachable block (ram,0x03a619f8) */
/* WARNING: Removing unreachable block (ram,0x03a61a88) */
/* WARNING: Removing unreachable block (ram,0x03a61b28) */

long * UnityEngine_InputSystem_InputControlExtensions_DeviceBuilder__WithName(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined4 *puVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  long unaff_x19;
  long *plVar22;
  int unaff_w21;
  int iVar23;
  long *plVar24;
  long *plVar25;
  int in_stack_00000008;
  char cStack000000000000000c;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x9c0));
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BezierKnot>_GetEnumerator__);
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>__ctor__);
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_GetPooled__
                    );
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BoneWeight>__ctor__);
  thunk_FUN_01efb3a4(StringLiteral_7678);
  thunk_FUN_01efb3a4(StringLiteral_7547);
  thunk_FUN_01efb3a4(Method_System_Reflection_RuntimePropertyInfo_GetObjectData__);
  *(undefined1 *)(unaff_x19 + 0xd51) = 1;
  puVar10 = StringLiteral_7547;
  puVar6 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  cStack000000000000000c = 0;
  if (unaff_w21 == -1) {
    plVar22 = (long *)thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_7676);
    FUN_035ac8e8(plVar22,0);
    *(undefined4 *)(plVar22 + 2) = 0xffffffff;
    return plVar22;
  }
  if (unaff_w21 < 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar12 = thunk_FUN_01f117cc();
    uVar13 = thunk_FUN_01efb3a4(StringLiteral_7679);
    FUN_034f7db4(uVar12,uVar13,0);
    uVar13 = thunk_FUN_01efb3a4(StringLiteral_7732);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar12,uVar13);
  }
  lVar11 = *(long *)StringLiteral_7547;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *(long *)puVar10;
  }
  plVar22 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x38);
  uVar12 = thunk_FUN_01f113fc(*(undefined8 *)puVar6,&stack0x00000008);
  puVar4 = Method_System_Reflection_RuntimePropertyInfo_GetObjectData__;
  if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar22 = (long *)(**(code **)(*plVar22 + 0x308))
                              (plVar22,uVar12,*(undefined8 *)(*plVar22 + 0x310));
  if (plVar22 != (long *)0x0) {
    lVar11 = *plVar22;
    bVar3 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(lVar11 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    plVar22 = (long *)(**(code **)(lVar11 + 0x198))(plVar22,*(undefined8 *)(lVar11 + 0x1a0));
    if (plVar22 != (long *)0x0) {
      bVar3 = *(byte *)(*(long *)StringLiteral_7678 + 0x130);
      if ((bVar3 <= *(byte *)(*plVar22 + 0x130)) &&
         (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar3 * 8 + -8) ==
          *(long *)StringLiteral_7678)) {
        return plVar22;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(plVar22);
    }
  }
  lVar11 = *(long *)puVar10;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *(long *)puVar10;
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8);
  cStack000000000000000c = '\0';
  FUN_035ce230(uVar12,&stack0x0000000c,0);
  lVar11 = *(long *)puVar10;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *(long *)puVar10;
  }
  plVar22 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x38);
  in_stack_00000008 = unaff_w21;
  uVar13 = thunk_FUN_01f113fc(*(undefined8 *)puVar6,&stack0x00000008);
  if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar13,uVar13);
  }
  plVar22 = (long *)(**(code **)(*plVar22 + 0x308))
                              (plVar22,uVar13,*(undefined8 *)(*plVar22 + 0x310));
  if (plVar22 == (long *)0x0) {
    lVar11 = *(long *)StringLiteral_7678;
  }
  else {
    lVar11 = *plVar22;
    bVar3 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(lVar11 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(lVar11 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
    plVar22 = (long *)(**(code **)(lVar11 + 0x198))(plVar22,*(undefined8 *)(lVar11 + 0x1a0));
    lVar11 = *(long *)StringLiteral_7678;
    if (plVar22 != (long *)0x0) {
      if ((*(byte *)(*plVar22 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
         (*(long *)(*(long *)(*plVar22 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) != lVar11
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar22);
      }
      goto LAB_03a61714;
    }
  }
  plVar22 = (long *)thunk_FUN_01f117cc(lVar11);
  FUN_03a612ac(plVar22,unaff_w21);
  uVar13 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
  FUN_035c455c(uVar13,plVar22,0);
  lVar11 = *(long *)puVar10;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar11 = *(long *)puVar10;
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 8);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_0302d104(lVar11,uVar13,*(undefined8 *)StringLiteral_7677);
  plVar24 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) + 0x38);
  in_stack_00000008 = unaff_w21;
  uVar14 = thunk_FUN_01f113fc(*(undefined8 *)puVar6,&stack0x00000008);
  if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c(uVar14,uVar14);
  }
  (**(code **)(*plVar24 + 0x318))(plVar24,uVar14,uVar13,*(undefined8 *)(*plVar24 + 800));
  uVar1 = *(int *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x30) + 1;
  *(uint *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x30) = uVar1;
  if ((uVar1 & 0x1f) == 0) {
    lVar11 = thunk_FUN_01f117cc(*(undefined8 *)
                                 Method_Unity_Collections_NativeArray<BoneWeight>__ctor__);
    FUN_030ba0b0(lVar11,*(undefined8 *)
                         Method_Unity_Collections_NativeArray<BezierKnot>_GetEnumerator__);
    lVar15 = *(long *)puVar10;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar15 = *(long *)puVar10;
    }
    plVar24 = *(long **)(*(long *)(lVar15 + 0xb8) + 0x38);
    if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar24 = (long *)(**(code **)(*plVar24 + 0x328))(plVar24,*(undefined8 *)(*plVar24 + 0x330));
    puVar9 = Method_System_Linq_Enumerable_ToList<BezierKnot>__;
    puVar8 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    puVar5 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
    if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar19 = *plVar24;
      lVar15 = *(long *)puVar8;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar15) {
            puVar16 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
            goto 
            UnityEngine_InputSystem_InputControlExtensions_<GetAllButtonPresses>d__43__System_IDisposable_Dispose
            ;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)FUN_01ecb238(plVar24,lVar15,0);

      UnityEngine_InputSystem_InputControlExtensions_<GetAllButtonPresses>d__43__System_IDisposable_Dispose
      :
      uVar20 = (*(code *)*puVar16)(plVar24,puVar16[1]);
      puVar7 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      if ((uVar20 & 1) == 0) {
        plVar24 = (long *)thunk_FUN_01f116d0(plVar24,*(undefined8 *)
                                                                                                            
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                            );
        if (plVar24 == (long *)0x0) goto LAB_03a619ec;
        lVar15 = *plVar24;
        uVar20 = (ulong)*(ushort *)(lVar15 + 0x12e);
        if (uVar20 == 0) goto LAB_03a619c4;
        piVar21 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        goto LAB_03a619ac;
      }
      lVar19 = *plVar24;
      lVar15 = *(long *)puVar8;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar15) {
            puVar16 = (undefined8 *)(lVar19 + (long)(*piVar21 + 1) * 0x10 + 0x138);
            goto LAB_03a6187c;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar16 = (undefined8 *)FUN_01ecb238(plVar24,lVar15,1);
LAB_03a6187c:
      plVar17 = (long *)(*(code *)*puVar16)(plVar24,puVar16[1]);
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(long *)(*plVar17 + 0x40) != *(long *)(*(long *)puVar9 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      puVar16 = (undefined8 *)thunk_FUN_01f11920();
      plVar17 = (long *)puVar16[1];
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar15 = *plVar17;
      bVar3 = *(byte *)(*(long *)puVar4 + 0x130);
      if ((*(byte *)(lVar15 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      plVar25 = (long *)*puVar16;
      lVar15 = (**(code **)(lVar15 + 0x198))(plVar17,*(undefined8 *)(lVar15 + 0x1a0));
      if (lVar15 == 0) {
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (plVar25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(*plVar25 + 0x40) != *(long *)(*(long *)puVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar25);
        }
        puVar18 = (undefined4 *)thunk_FUN_01f11920(plVar25);
        uVar2 = *puVar18;
        lVar15 = *(long *)(lVar11 + 0x10);
        lVar19 = *(long *)puVar5;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar15 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
        }
        else {
          FUN_030ba904(lVar11,uVar2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_03a61714;
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_03a619ac:
    if (*(long *)(piVar21 + -2) == *(long *)puVar7) {
      puVar16 = (undefined8 *)(lVar15 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_03a619e0;
    }
  }
LAB_03a619c4:
  puVar16 = (undefined8 *)FUN_01ecb238(plVar24,*(long *)puVar7,0);
LAB_03a619e0:
  (*(code *)*puVar16)(plVar24,puVar16[1]);
LAB_03a619ec:
  puVar4 = Method_UnityEngine_UIElements_MouseEventBase<MouseLeaveWindowEvent>_GetPooled__;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (0 < *(int *)(lVar11 + 0x18)) {
    iVar23 = 0;
    do {
      lVar15 = *(long *)puVar10;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar15 = *(long *)puVar10;
      }
      plVar24 = *(long **)(*(long *)(lVar15 + 0xb8) + 0x38);
      in_stack_00000008 = FUN_030ba614(lVar11,iVar23,*(undefined8 *)puVar4);
      uVar13 = thunk_FUN_01f113fc(*(undefined8 *)puVar6,&stack0x00000008);
      if (plVar24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar13,uVar13);
      }
      (**(code **)(*plVar24 + 0x3a8))(plVar24,uVar13,*(undefined8 *)(*plVar24 + 0x3b0));
      iVar23 = iVar23 + 1;
    } while (iVar23 < *(int *)(lVar11 + 0x18));
  }
LAB_03a61714:
  if (cStack000000000000000c != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar12,0);
  }
  return plVar22;
}


