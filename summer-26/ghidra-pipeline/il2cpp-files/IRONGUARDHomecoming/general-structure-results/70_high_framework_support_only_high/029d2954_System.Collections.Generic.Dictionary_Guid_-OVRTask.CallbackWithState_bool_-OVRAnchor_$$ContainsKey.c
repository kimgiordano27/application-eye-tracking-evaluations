/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<Guid,-OVRTask.CallbackWithState<bool,-OVRAnchor>>$$ContainsKey
ENTRY_POINT: 029d2954
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


/* WARNING: Removing unreachable block (ram,0x029d2a54) */
/* WARNING: Removing unreachable block (ram,0x029d2aa0) */

void System_Collections_Generic_Dictionary<Guid,_OVRTask_CallbackWithState<bool,_OVRAnchor>>__ContainsKey
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  byte in_w8;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined2 unaff_w24;
  long *unaff_x26;
  int unaff_w27;
  
code_r0x029d2954:
  if ((in_w8 & 1) == 0) {
    param_1 = FUN_01ecaf44();
  }
  lVar2 = FUN_01f08890(param_1,unaff_w20 << 1);
  FUN_0358d498(unaff_x23,0,lVar2,0,unaff_w20,0);
  unaff_x23 = lVar2;
LAB_029d29b8:
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar2 = (long)(int)unaff_w20;
    unaff_w20 = unaff_w20 + 1;
    *(undefined2 *)(unaff_x23 + lVar2 * 2 + 0x20) = unaff_w24;
    lVar2 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_029d288c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d288c:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_029d2a48;
      lVar2 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_029d2a20;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      goto LAB_029d2a08;
    }
    lVar2 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_029d2910;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d2910:
    unaff_w24 = (*(code *)*puVar1)();
    if (unaff_x23 == 0) break;
    if (unaff_w20 == *(uint *)(unaff_x23 + 0x18)) {
      if ((int)(unaff_w20 + unaff_w27) < 0) {
        FUN_01f08a4c();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910();
      }
      lVar2 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      param_1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
      in_w8 = *(byte *)(param_1 + 0x135);
      goto code_r0x029d2954;
    }
  } while( true );
  lVar2 = *(long *)(unaff_x22 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
  }
  unaff_x23 = FUN_01f08890(lVar2,4);
  goto LAB_029d29b8;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_029d2a08:
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_029d2a3c;
    }
  }
LAB_029d2a20:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d2a3c:
  (*(code *)*puVar1)();
LAB_029d2a48:
  *unaff_x19 = unaff_x23;
  thunk_FUN_01f51358();
  *(uint *)(unaff_x19 + 1) = unaff_w20;
  return;
}


