/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<Guid,-OVRTask.CallbackWithState<bool,-OVRSpatialAnchor.InvertedCapture<bool,-OVRSpatialAnchor.UnboundAnchor>>>$$System.Collections.IDictionary.GetEnumerator
ENTRY_POINT: 029d1c90
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


/* WARNING: Removing unreachable block (ram,0x029d1d18) */
/* WARNING: Removing unreachable block (ram,0x029d1d6c) */

void System_Collections_Generic_Dictionary<Guid,_OVRTask_CallbackWithState<bool,_OVRSpatialAnchor_InvertedCapture<bool,_OVRSpatialAnchor_UnboundAnchor>>>__System_Collections_IDictionary_GetEnumerator
               (void *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  
  do {
    thunk_FUN_01f51358(param_1,0);
    unaff_w20 = unaff_w20 + 1;
    lVar2 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_029d1aec;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d1aec:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_029d1d0c;
      lVar2 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_029d1ce4;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
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
          goto LAB_029d1b70;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d1b70:
    (*(code *)*puVar1)(&stack0x00000058);
    memcpy(&stack0x000000b0,&stack0x00000058,0x58);
    if (unaff_x23 == 0) {
      lVar2 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      unaff_x23 = FUN_01f08890(lVar2,4);
LAB_029d1c28:
      memcpy(&stack0x00000058,&stack0x000000b0,0x58);
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    else {
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
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01ecaf44();
        }
        lVar2 = FUN_01f08890(lVar2,unaff_w20 * 2);
        FUN_0358d498(unaff_x23,0,lVar2,0,unaff_w20,0);
        unaff_x23 = lVar2;
        goto LAB_029d1c28;
      }
      memcpy(&stack0x00000058,&stack0x000000b0,0x58);
    }
    memcpy(&stack0x00000000,&stack0x00000058,0x58);
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    param_1 = (void *)(unaff_x23 + (int)unaff_w20 * unaff_x26 + 0x20);
    memcpy(param_1,&stack0x00000000,0x58);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_029d1d00;
    }
  }
LAB_029d1ce4:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d1d00:
  (*(code *)*puVar1)();
LAB_029d1d0c:
  *unaff_x19 = unaff_x23;
  thunk_FUN_01f51358();
  *(uint *)(unaff_x19 + 1) = unaff_w20;
  return;
}


