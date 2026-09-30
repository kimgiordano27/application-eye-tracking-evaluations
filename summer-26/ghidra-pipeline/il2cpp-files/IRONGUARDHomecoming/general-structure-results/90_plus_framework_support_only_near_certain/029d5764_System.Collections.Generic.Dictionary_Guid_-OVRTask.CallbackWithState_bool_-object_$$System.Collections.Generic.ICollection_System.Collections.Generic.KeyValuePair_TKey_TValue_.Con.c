/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<Guid,-OVRTask.CallbackWithState<bool,-object>>$$System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains
ENTRY_POINT: 029d5764
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x029d59f4) */
/* WARNING: Removing unreachable block (ram,0x029d5a44) */

void System_Collections_Generic_Dictionary<Guid,_OVRTask_CallbackWithState<bool,_object>>__System_Collections_Generic_ICollection<System_Collections_Generic_KeyValuePair<TKey,TValue>>_Contains
               (code *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  uint uVar8;
  long unaff_x22;
  long lVar9;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  plVar2 = (long *)(*param_1)();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = 0;
  uVar8 = 0;
  do {
    lVar4 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_029d57d8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)puVar1,0);
LAB_029d57d8:
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar2 == (long *)0x0) goto LAB_029d59e8;
      lVar4 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_029d59c0;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
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
          goto LAB_029d585c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar2,lVar4,0);
LAB_029d585c:
    (*(code *)*puVar3)(&stack0x00000020,plVar2,puVar3[1]);
    in_stack_00000048 = in_stack_00000028;
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000050 = in_stack_00000030;
    if (lVar9 == 0) {
      lVar9 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x18);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44();
      }
      lVar9 = FUN_01f08890(lVar9,4);
LAB_029d5914:
      in_stack_00000028 = in_stack_00000048;
      in_stack_00000020 = in_stack_00000040;
      in_stack_00000030 = in_stack_00000050;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    else if (uVar8 == *(uint *)(lVar9 + 0x18)) {
      if ((int)(uVar8 + 0x40000000) < 0) {
        FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910();
      }
      lVar4 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x18);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      lVar4 = FUN_01f08890(lVar4,uVar8 << 1);
      FUN_0358d498(lVar9,0,lVar4,0,uVar8,0);
      lVar9 = lVar4;
      goto LAB_029d5914;
    }
    in_stack_00000020 = in_stack_00000040;
    in_stack_00000028 = in_stack_00000048;
    in_stack_00000030 = in_stack_00000050;
    if (*(uint *)(lVar9 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar4 = lVar9 + (long)(int)uVar8 * 0x18;
    uVar8 = uVar8 + 1;
    *(undefined8 *)(lVar4 + 0x30) = in_stack_00000050;
    *(undefined8 *)(lVar4 + 0x28) = in_stack_00000048;
    *(undefined8 *)(lVar4 + 0x20) = in_stack_00000040;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_029d59dc;
    }
  }
LAB_029d59c0:
  puVar3 = (undefined8 *)
           FUN_01ecb238(plVar2,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_029d59dc:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_029d59e8:
  *unaff_x19 = lVar9;
  thunk_FUN_01f51358();
  *(uint *)(unaff_x19 + 1) = uVar8;
  return;
}


