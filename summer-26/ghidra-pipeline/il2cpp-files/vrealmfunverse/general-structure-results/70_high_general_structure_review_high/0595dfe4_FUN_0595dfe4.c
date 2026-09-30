/*
FUNCTION_NAME: FUN_0595dfe4
ENTRY_POINT: 0595dfe4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_8;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0595e540) */

void FUN_0595dfe4(long param_1,long param_2,long param_3,undefined8 *param_4,undefined8 *param_5)

{
  undefined *puVar1;
  long *plVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  long local_50;
  long *local_48;
  
  if ((DAT_066d3772 & 1) == 0) {
    FUN_02b3c81c(Method_System_Net_WebCompletionSource<WebRequestStream>_TrySetCanceled__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<long>_get_isDelayed__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<Plane>_GetSubArray__);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(Method_System_Net_WebCompletionSource<WebRequestStream>_TrySetCompleted__);
    FUN_02b3c81c(Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__);
    FUN_02b3c81c(Method_System_Net_WebCompletionSource<WebRequestStream>_TrySetException__);
    FUN_02b3c81c(Method_System_Net_WebCompletionSource<WebRequestStream>_WaitForCompletion__);
    FUN_02b3c81c(Method_System_Net_WebCompletionSource<WebResponseStream>__ctor__);
    FUN_02b3c81c(Method_System_Net_WebCompletionSource<WebResponseStream>_TrySetCanceled__);
    DAT_066d3772 = 1;
  }
  puVar1 = Method_UnityEngine_UIElements_TextInputBaseField<long>_get_isDelayed__;
  local_50 = 0;
  local_48 = (long *)0x0;
  if (param_3 != 0) {
    lVar6 = FUN_0590661c(param_3,*(undefined8 *)
                                  Method_UnityEngine_UIElements_TextInputBaseField<int>_get_textInputBase__
                        );
    lVar7 = FUN_0590661c(param_3,*(undefined8 *)puVar1);
    uVar14 = *(undefined8 *)(param_1 + 0x40);
    uVar8 = FUN_0590759c(param_1,0);
    if (param_2 != 0) {
      local_48 = (long *)FUN_032fa71c(param_2,uVar14,&local_50,uVar8,
                                      *(undefined8 *)
                                       Method_System_Net_WebCompletionSource<WebResponseStream>_TrySetCanceled__
                                      ,0x3d,*(undefined8 *)
                                             Method_System_Net_WebCompletionSource<WebRequestStream>_TrySetException__
                                     );
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(undefined8 *)(local_50 + 0x10) = *(undefined8 *)(lVar6 + 0x1a0);
      thunk_FUN_02bb0e9c();
      plVar2 = local_48;
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar8 = *param_4;
      *(undefined8 *)(local_50 + 0x20) = param_4[1];
      *(undefined8 *)(local_50 + 0x18) = uVar8;
      puVar1 = Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__;
      if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar11 = *local_48;
      uVar8 = *param_4;
      uVar14 = param_4[1];
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0595e1b4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_02b7654c(local_48,*(long *)
                                      Method_Unity_Collections_NativeParallelHashMap<int,_int>_get_IsCreated__
                            ,0);
LAB_0595e1b4:
      (*(code *)*puVar9)(plVar2,uVar8,uVar14,0,2,puVar9[1]);
      plVar2 = local_48;
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar8 = *param_5;
      *(undefined8 *)(local_50 + 0x30) = param_5[1];
      *(undefined8 *)(local_50 + 0x28) = uVar8;
      if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar11 = *local_48;
      uVar8 = *param_5;
      uVar14 = param_5[1];
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 4) * 0x10 + 0x138);
            goto LAB_0595e23c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_02b7654c(local_48,*(long *)puVar1,4);
LAB_0595e23c:
      (*(code *)*puVar9)(plVar2,uVar8,uVar14,2,puVar9[1]);
      lVar11 = local_50;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      bVar3 = FUN_05928fec(lVar7,0);
      plVar2 = local_48;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      *(byte *)(lVar11 + 0x38) = bVar3 & 1;
      puVar1 = Method_Unity_Collections_NativeArray<Plane>_GetSubArray__;
      if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar11 = *local_48;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<Plane>_GetSubArray__) {
            puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xc) * 0x10 + 0x138);
            goto LAB_0595e2d4;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_02b7654c(local_48,*(long *)
                                      Method_Unity_Collections_NativeArray<Plane>_GetSubArray__,0xc)
      ;
LAB_0595e2d4:
      (*(code *)*puVar9)(plVar2,1,puVar9[1]);
      if (*(long *)(lVar6 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar12 = FUN_057ec748(*(long *)(lVar6 + 0x1a0),0);
      if ((uVar12 & 1) != 0) {
        lVar11 = FUN_059254f4(lVar6,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(char *)(lVar11 + 0x747) == '\0') {
          uVar4 = FUN_05928fec(lVar7,0);
        }
        else {
          uVar4 = 1;
        }
        plVar2 = local_48;
        if (*(long *)(lVar6 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar5 = FUN_057f0790(*(long *)(lVar6 + 0x1a0),0);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar6 = *plVar2;
        uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
              puVar9 = (undefined8 *)(lVar6 + (long)(*piVar13 + 0xd) * 0x10 + 0x138);
              goto LAB_0595e394;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_02b7654c(plVar2,*(long *)puVar1,0xd);
LAB_0595e394:
        (*(code *)*puVar9)(plVar2,uVar4 & uVar5 & 1,puVar9[1]);
      }
      plVar2 = local_48;
      puVar1 = Method_System_Net_WebCompletionSource<WebResponseStream>__ctor__;
      lVar6 = *(long *)Method_System_Net_WebCompletionSource<WebResponseStream>__ctor__;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar6 = *(long *)puVar1;
      }
      puVar9 = *(undefined8 **)(lVar6 + 0xb8);
      lVar7 = puVar9[1];
      if (lVar7 == 0) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          puVar9 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
        }
        uVar8 = *puVar9;
        lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                    Method_System_Net_WebCompletionSource<WebRequestStream>_TrySetCanceled__
                                  );
        FUN_03e02810(lVar7,uVar8,
                     *(undefined8 *)
                      Method_System_Net_WebCompletionSource<WebRequestStream>_WaitForCompletion__,0)
        ;
        plVar10 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
        *plVar10 = lVar7;
        thunk_FUN_02bb0e9c(plVar10,lVar7);
      }
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar6 = *plVar2;
      lVar11 = *(long *)Method_System_Net_WebCompletionSource<WebRequestStream>_TrySetCompleted__;
      uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)(lVar11 + 0x20)) {
            lVar6 = lVar6 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
            goto LAB_0595e48c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      lVar6 = FUN_02b7654c(plVar2);
LAB_0595e48c:
      lVar6 = thunk_FUN_02b5b75c(*(undefined8 *)(lVar6 + 8),lVar11);
      (**(code **)(lVar6 + 8))(plVar2,lVar7,lVar6);
      plVar2 = local_48;
      if (local_48 != (long *)0x0) {
        lVar6 = *local_48;
        uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06312f78) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0595e510;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_02b7654c(local_48,*(long *)PTR_DAT_06312f78,0);
LAB_0595e510:
        (*(code *)*puVar9)(plVar2,puVar9[1]);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


