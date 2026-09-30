/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<Guid,-OVRTask.CallbackWithState<bool,-OVRAnchor>>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 029d44c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x029d4570) */
/* WARNING: Removing unreachable block (ram,0x029d45bc) */

void System_Collections_Generic_Dictionary<Guid,_OVRTask_CallbackWithState<bool,_OVRAnchor>>__System_Collections_IEnumerable_GetEnumerator
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  undefined4 unaff_w24;
  long *unaff_x26;
  int unaff_w27;
  
code_r0x029d44c8:
                    /* try { // try from 029d44c8 to 02ad45eb has its CatchHandler @ 029d44c8
                       catch() { ... } // from try @ 029d44c8 with catch @ 029d44c8
                       catch() { ... } // from try @ 029d46e0 with catch @ 029d44c8
                       catch() { ... } // from try @ 029d4860 with catch @ 029d44c8
                       catch() { ... } // from try @ 029d489c with catch @ 029d44c8
                       catch() { ... } // from try @ 029d48cc with catch @ 029d44c8 */
  lVar2 = FUN_01f08890(param_1,4);
  do {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      if (*(uint *)(lVar2 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar3 = (long)(int)unaff_w20;
      unaff_w20 = unaff_w20 + 1;
      *(undefined4 *)(lVar2 + lVar3 * 4 + 0x20) = unaff_w24;
      lVar3 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x26) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_029d43a8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d43a8:
      uVar5 = (*(code *)*puVar1)();
      if ((uVar5 & 1) == 0) {
        if (unaff_x21 == (long *)0x0) goto LAB_029d4564;
        lVar3 = *unaff_x21;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 == 0) goto LAB_029d453c;
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_029d4524;
      }
      lVar3 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44(lVar3);
      }
      lVar4 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_029d442c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d442c:
      unaff_w24 = (*(code *)*puVar1)();
      if (lVar2 == 0) {
        lVar2 = *(long *)(unaff_x22 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01ecaf44();
        }
        param_1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
        if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
          param_1 = FUN_01ecaf44();
        }
        goto code_r0x029d44c8;
      }
    } while (unaff_w20 != *(uint *)(lVar2 + 0x18));
    if ((int)(unaff_w20 + unaff_w27) < 0) {
      FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910();
    }
    lVar3 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    lVar3 = FUN_01f08890(lVar3,unaff_w20 * 2);
    FUN_0358d498(lVar2,0,lVar3,0,unaff_w20,0);
    lVar2 = lVar3;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_029d4524:
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_029d4558;
    }
  }
LAB_029d453c:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d4558:
  (*(code *)*puVar1)();
LAB_029d4564:
  *unaff_x19 = lVar2;
  thunk_FUN_01f51358();
  *(uint *)(unaff_x19 + 1) = unaff_w20;
  return;
}


