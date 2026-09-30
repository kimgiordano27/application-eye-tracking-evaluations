/*
FUNCTION_NAME: FUN_01f2d128
ENTRY_POINT: 01f2d128
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_01f2d128(long param_1,long param_2,long param_3,long param_4)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  short sVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  
                    /* try { // try from 01f2d134 to 0202d183 has its CatchHandler @ 01f2d1a4 */
  if ((DAT_03780266 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<byte>_get_IsCreated__);
    thunk_FUN_00d48444(StringLiteral_529);
    thunk_FUN_00d48444(StringLiteral_2215);
    thunk_FUN_00d48444(StringLiteral_10543);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_PostDispatch__
                      );
    thunk_FUN_00d48444(StringLiteral_1962);
    thunk_FUN_00d48444(System_Collections_Generic_Dictionary<string,_WitResponseNode>_TypeInfo);
    DAT_03780266 = 1;
  }
  FUN_01f2bf38(param_1,7);
  *(undefined4 *)(param_1 + 0x70) = 0;
  puVar2 = StringLiteral_529;
  if (*(char *)(param_1 + 0x6c) == '\0') {
    if (((param_4 != 0) && (*(int *)(param_4 + 0x10) != 0)) ||
       ((param_2 != 0 && (*(int *)(param_2 + 0x10) != 0)))) {
      uVar11 = thunk_FUN_00d48444(
                                 Method_System_Collections_Generic_List_Enumerator<IBinding>_Dispose__
                                 );
      uVar11 = FUN_01f75600(uVar11,0);
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      lVar14 = thunk_FUN_00d62348();
      if (lVar14 != 0) {
        FUN_016f2f28(lVar14,uVar11,0);
        uVar11 = thunk_FUN_00d48444(
                                   Method_UnityEngine_GameObject_GetComponentsInChildren<Collider>__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(lVar14,uVar11);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar8 = thunk_FUN_015fe514(param_3,*(undefined8 *)StringLiteral_2215,0);
    if ((uVar8 & 1) == 0) {
      uVar8 = thunk_FUN_015fe514(param_3,*(undefined8 *)
                                          Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_PostDispatch__
                                 ,0);
      if ((uVar8 & 1) == 0) goto LAB_01f2d424;
      uVar13 = 1;
    }
    else {
      uVar13 = 2;
    }
    *(undefined4 *)(param_1 + 0x70) = uVar13;
    goto LAB_01f2d424;
  }
  lVar14 = param_2;
  if ((param_2 != 0) && (lVar14 = 0, *(int *)(param_2 + 0x10) != 0)) {
    lVar14 = param_2;
  }
  bVar5 = thunk_FUN_015fe514(param_4,*(undefined8 *)StringLiteral_529,0);
  puVar3 = StringLiteral_10543;
  if ((lVar14 == 0 & bVar5) != 0) {
    uVar8 = FUN_015fe7e8(param_3,*(undefined8 *)StringLiteral_10543,0);
    lVar14 = *(long *)puVar3;
    if ((uVar8 & 1) == 0) {
      lVar14 = 0;
    }
  }
  uVar8 = thunk_FUN_015fe514(lVar14,*(undefined8 *)StringLiteral_1962,0);
  if ((uVar8 & 1) == 0) {
    uVar8 = thunk_FUN_015fe514(lVar14,*(undefined8 *)puVar3,0);
    if ((uVar8 & 1) != 0) {
      uVar6 = FUN_015fe7e8(*(undefined8 *)puVar2,param_4,0);
      if ((param_4 != 0) && (((uVar6 ^ 1) & 1) == 0)) {
        uVar11 = thunk_FUN_00d48444(StringLiteral_3551);
        uVar11 = FUN_01f75600(uVar11,0);
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        lVar14 = thunk_FUN_00d62348();
        if (lVar14 != 0) {
          FUN_016f2f28(lVar14,uVar11,0);
          uVar11 = thunk_FUN_00d48444(
                                     Method_UnityEngine_GameObject_GetComponentsInChildren<Collider>__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(lVar14,uVar11);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar10 = lVar14;
      if (param_3 == 0) {
        lVar15 = 0;
        lVar14 = 0;
      }
      else {
        bVar4 = *(int *)(param_3 + 0x10) != 0;
        lVar15 = 0;
        if (bVar4) {
          lVar10 = param_3;
          lVar15 = lVar14;
        }
        lVar14 = 0;
        if (bVar4) {
          lVar14 = param_3;
        }
      }
      *(long *)(param_1 + 0x78) = lVar14;
      *(undefined4 *)(param_1 + 0x70) = 3;
      lVar14 = lVar15;
      param_3 = lVar10;
      goto joined_r0x01f2d524;
    }
    if ((lVar14 == 0) &&
       (uVar8 = thunk_FUN_015fe514(param_3,*(undefined8 *)puVar3,0), (uVar8 & 1) != 0)) {
      uVar6 = FUN_015fe7e8(*(undefined8 *)puVar2,param_4,0);
      if ((param_4 != 0) && (((uVar6 ^ 1) & 1) == 0)) {
        uVar11 = thunk_FUN_00d48444(StringLiteral_3551);
        uVar11 = FUN_01f75600(uVar11,0);
        thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
        lVar14 = thunk_FUN_00d62348();
        if (lVar14 != 0) {
          FUN_016f2f28(lVar14,uVar11,0);
          uVar11 = thunk_FUN_00d48444(
                                     Method_UnityEngine_GameObject_GetComponentsInChildren<Collider>__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(lVar14,uVar11);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      *(undefined4 *)(param_1 + 0x70) = 3;
      *(undefined8 *)(param_1 + 0x78) = 0;
      goto LAB_01f2d424;
    }
    if (param_4 != 0) {
      if (*(int *)(param_4 + 0x10) == 0) {
        lVar14 = **(long **)(*(long *)
                              System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                            + 0xb8);
      }
      else {
        FUN_01f2ccc8(uVar8,lVar14,param_4);
        if (lVar14 == 0) {
          lVar10 = 0;
        }
        else {
          iVar7 = FUN_01f2d7e8(param_1,lVar14);
          lVar10 = lVar14;
          if (iVar7 != -1) {
            lVar10 = 0;
          }
        }
        lVar14 = FUN_01f2c9cc(param_1,param_4);
        if (lVar14 == 0) {
          if (lVar10 == 0) {
            lVar10 = FUN_01f2d914(param_1);
          }
        }
        else if ((lVar10 == 0) || (uVar8 = thunk_FUN_015fe514(lVar10,lVar14,0), (uVar8 & 1) != 0))
        goto LAB_01f2d3e4;
        FUN_01f2ca94(param_1,lVar10,param_4,0);
        lVar14 = lVar10;
      }
      goto joined_r0x01f2d524;
    }
    if (lVar14 == 0) goto LAB_01f2d424;
    iVar7 = FUN_01f2c8f0(param_1,lVar14);
    if (iVar7 == -1) {
      uVar11 = thunk_FUN_00d48444(StringLiteral_2698);
      uVar11 = FUN_01f75600(uVar11,0);
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      lVar14 = thunk_FUN_00d62348();
      if (lVar14 != 0) {
        FUN_016f2f28(lVar14,uVar11,0);
        uVar11 = thunk_FUN_00d48444(
                                   Method_UnityEngine_GameObject_GetComponentsInChildren<Collider>__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(lVar14,uVar11);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  else {
    uVar8 = thunk_FUN_015fe514(param_3,*(undefined8 *)
                                        Method_Unity_Collections_NativeArray<byte>_get_IsCreated__,0
                              );
    if ((uVar8 & 1) == 0) {
      uVar8 = thunk_FUN_015fe514(param_3,*(undefined8 *)
                                          System_Collections_Generic_Dictionary<string,_WitResponseNode>_TypeInfo
                                 ,0);
      if ((uVar8 & 1) == 0) goto joined_r0x01f2d524;
      uVar13 = 1;
    }
    else {
      uVar13 = 2;
    }
    *(undefined4 *)(param_1 + 0x70) = uVar13;
joined_r0x01f2d524:
    if (lVar14 == 0) goto LAB_01f2d424;
  }
LAB_01f2d3e4:
  if (*(int *)(lVar14 + 0x10) != 0) {
    plVar9 = *(long **)(param_1 + 0x18);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*plVar9 + 0x248))(plVar9,lVar14,*(undefined8 *)(*plVar9 + 0x250));
    plVar9 = *(long **)(param_1 + 0x18);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    (**(code **)(*plVar9 + 0x208))(plVar9,0x3a,*(undefined8 *)(*plVar9 + 0x210));
  }
LAB_01f2d424:
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_01f27e9c(*(long *)(param_1 + 0x20),*(int *)(param_1 + 0x70) != 0);
  plVar9 = *(long **)(param_1 + 0x18);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  (**(code **)(*plVar9 + 0x248))(plVar9,param_3,*(undefined8 *)(*plVar9 + 0x250));
  plVar9 = *(long **)(param_1 + 0x18);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  (**(code **)(*plVar9 + 0x208))(plVar9,0x3d,*(undefined8 *)(*plVar9 + 0x210));
  sVar1 = *(short *)(param_1 + 0x68);
  sVar12 = *(short *)(param_1 + 0x6a);
  if (*(short *)(param_1 + 0x6a) != sVar1) {
    *(short *)(param_1 + 0x6a) = sVar1;
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    *(short *)(*(long *)(param_1 + 0x20) + 0x1a) = sVar1;
    sVar12 = sVar1;
  }
  plVar9 = *(long **)(param_1 + 0x18);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c(0,sVar12);
  }
  (**(code **)(*plVar9 + 0x208))(plVar9,sVar12,*(undefined8 *)(*plVar9 + 0x210));
  return;
}


