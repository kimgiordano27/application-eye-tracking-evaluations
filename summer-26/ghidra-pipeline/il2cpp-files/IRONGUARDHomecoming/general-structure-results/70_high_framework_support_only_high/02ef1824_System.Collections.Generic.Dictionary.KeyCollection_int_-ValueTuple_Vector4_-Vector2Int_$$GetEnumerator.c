/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<int,-ValueTuple<Vector4,-Vector2Int>>$$GetEnumerator
ENTRY_POINT: 02ef1824
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ef19d8) */

undefined8
System_Collections_Generic_Dictionary_KeyCollection<int,_ValueTuple<Vector4,_Vector2Int>>__GetEnumerator
          (long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  ulong unaff_x21;
  long unaff_x23;
  int iVar8;
  long unaff_x26;
  long *unaff_x27;
  int iVar9;
  long unaff_x29;
  
  plVar2 = (long *)(**(code **)(param_1 + 0x138))();
  iVar9 = 0;
  iVar8 = 0;
LAB_02ef1840:
  do {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02ef1890;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar2,*unaff_x27,0);
LAB_02ef1890:
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar6 & 1) == 0) break;
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02ef1908;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar2,lVar4,0);
LAB_02ef1908:
    (*(code *)*puVar3)(plVar2,puVar3[1]);
    iVar1 = FUN_02ef09f0();
    if (-1 < iVar1) {
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar6 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32();
      if ((uVar6 & 1) == 0) {
        FUN_039dcb94();
        iVar9 = iVar9 + 1;
      }
      goto LAB_02ef1840;
    }
    iVar8 = iVar8 + 1;
  } while ((unaff_x21 & 1) == 0);
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto 
          System_Collections_Generic_Dictionary_KeyCollection<int,_ValueTuple<Vector4,_Vector2Int>>__System_Collections_Generic_IEnumerable<TKey>_GetEnumerator
          ;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar2,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);

    System_Collections_Generic_Dictionary_KeyCollection<int,_ValueTuple<Vector4,_Vector2Int>>__System_Collections_Generic_IEnumerable<TKey>_GetEnumerator
    :
    (*(code *)*puVar3)(plVar2,puVar3[1]);
  }
  if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT44(iVar8,iVar9);
}


