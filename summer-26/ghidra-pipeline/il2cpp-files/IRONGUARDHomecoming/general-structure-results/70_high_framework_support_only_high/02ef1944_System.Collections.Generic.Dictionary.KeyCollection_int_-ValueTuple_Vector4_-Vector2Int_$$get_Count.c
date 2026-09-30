/*
FUNCTION_NAME: System.Collections.Generic.Dictionary.KeyCollection<int,-ValueTuple<Vector4,-Vector2Int>>$$get_Count
ENTRY_POINT: 02ef1944
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02ef19d8) */

undefined8
System_Collections_Generic_Dictionary_KeyCollection<int,_ValueTuple<Vector4,_Vector2Int>>__get_Count
          (void)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x23;
  int unaff_w25;
  long unaff_x26;
  long *unaff_x27;
  int unaff_w28;
  long unaff_x29;
  
  do {
    uVar3 = Unity_Burst_Intrinsics_Arm_Neon__vzip1_f32();
    if ((uVar3 & 1) == 0) {
      FUN_039dcb94();
      unaff_w28 = unaff_w28 + 1;
    }
LAB_02ef1840:
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02ef1890;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02ef1890:
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) == 0) goto LAB_02ef196c;
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    lVar5 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02ef1908;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02ef1908:
    (*(code *)*puVar2)();
    iVar1 = FUN_02ef09f0();
    if (iVar1 < 0) break;
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
  } while( true );
  unaff_w25 = unaff_w25 + 1;
  if ((unaff_x21 & 1) != 0) {
LAB_02ef196c:
    if (unaff_x20 == (long *)0x0) goto LAB_02ef19d4;
    lVar4 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 == 0)
    goto 
    System_Collections_Generic_Dictionary_KeyCollection<int,_ValueTuple<Vector4,_Vector2Int>>__System_Collections_Generic_ICollection<TKey>_Remove
    ;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    goto LAB_02ef1994;
  }
  goto LAB_02ef1840;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar6 = piVar6 + 4;
    if (uVar3 == 0) break;
LAB_02ef1994:
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto 
      System_Collections_Generic_Dictionary_KeyCollection<int,_ValueTuple<Vector4,_Vector2Int>>__System_Collections_Generic_IEnumerable<TKey>_GetEnumerator
      ;
    }
  }

  System_Collections_Generic_Dictionary_KeyCollection<int,_ValueTuple<Vector4,_Vector2Int>>__System_Collections_Generic_ICollection<TKey>_Remove
  :
  puVar2 = (undefined8 *)FUN_01ecb238();

  System_Collections_Generic_Dictionary_KeyCollection<int,_ValueTuple<Vector4,_Vector2Int>>__System_Collections_Generic_IEnumerable<TKey>_GetEnumerator
  :
  (*(code *)*puVar2)();
LAB_02ef19d4:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return CONCAT44(unaff_w25,unaff_w28);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


