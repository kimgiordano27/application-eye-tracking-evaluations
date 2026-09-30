/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<Guid,-OVRTask.CallbackWithState<bool,-OVRAnchor>>$$System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add
ENTRY_POINT: 029d26dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x029d2a54) */
/* WARNING: Removing unreachable block (ram,0x029d2aa0) */

void System_Collections_Generic_Dictionary<Guid,_OVRTask_CallbackWithState<bool,_OVRAnchor>>__System_Collections_Generic_ICollection<System_Collections_Generic_KeyValuePair<TKey,TValue>>_Add
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  uint uVar10;
  long *unaff_x20;
  long unaff_x22;
  
  lVar5 = *unaff_x20;
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == param_2) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_029d2818;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_029d2818:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = 0;
  uVar10 = 0;
  do {
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_029d288c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_029d288c:
    uVar8 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_029d2a48;
      lVar6 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_029d2a20;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x38);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_029d2910;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,lVar6,0);
LAB_029d2910:
    uVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if (lVar5 == 0) {
      lVar5 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x18);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44();
      }
      lVar5 = FUN_01f08890(lVar5,4);
LAB_029d29b8:
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    else if (uVar10 == *(uint *)(lVar5 + 0x18)) {
      if ((int)(uVar10 + 0x40000000) < 0) {
        FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910();
      }
      lVar6 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x18);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44();
      }
      lVar6 = FUN_01f08890(lVar6,uVar10 << 1);
      FUN_0358d498(lVar5,0,lVar6,0,uVar10,0);
      lVar5 = lVar6;
      goto LAB_029d29b8;
    }
    if (*(uint *)(lVar5 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar6 = (long)(int)uVar10;
    uVar10 = uVar10 + 1;
    *(undefined2 *)(lVar5 + lVar6 * 2 + 0x20) = uVar2;
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_029d2a3c;
    }
  }
LAB_029d2a20:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_029d2a3c:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_029d2a48:
  *unaff_x19 = lVar5;
  thunk_FUN_01f51358();
  *(uint *)(unaff_x19 + 1) = uVar10;
  return;
}


