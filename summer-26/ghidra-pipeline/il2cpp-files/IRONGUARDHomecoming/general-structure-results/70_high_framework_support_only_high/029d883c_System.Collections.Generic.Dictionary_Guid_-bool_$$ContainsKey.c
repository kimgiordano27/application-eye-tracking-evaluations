/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<Guid,-bool>$$ContainsKey
ENTRY_POINT: 029d883c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x029d89ec) */
/* WARNING: Removing unreachable block (ram,0x029d8a3c) */

void System_Collections_Generic_Dictionary<Guid,_bool>__ContainsKey(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  byte in_w8;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x27;
  int unaff_w28;
  undefined1 auVar6 [16];
  
  do {
    if ((in_w8 & 1) == 0) {
      param_2 = FUN_01ecaf44(param_2);
    }
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_029d8894;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d8894:
    auVar6 = (*(code *)*puVar1)();
    if (unaff_x23 == 0) {
      lVar3 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x18);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44();
      }
      unaff_x23 = FUN_01f08890(lVar3,4);
LAB_029d8940:
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
    }
    else if (unaff_w20 == *(uint *)(unaff_x23 + 0x18)) {
      if ((int)(unaff_w20 + unaff_w28) < 0) {
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
      lVar3 = FUN_01f08890(lVar3,unaff_w20 << 1);
      FUN_0358d498(unaff_x23,0,lVar3,0,unaff_w20,0);
      unaff_x23 = lVar3;
      goto LAB_029d8940;
    }
    if (*(uint *)(unaff_x23 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    pauVar2 = (undefined1 (*) [16])(unaff_x23 + (long)(int)unaff_w20 * 0x10 + 0x20);
    *pauVar2 = auVar6;
    thunk_FUN_01f51358(pauVar2,0);
    unaff_w20 = unaff_w20 + 1;
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x27) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_029d8810;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d8810:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) break;
    lVar3 = *(long *)(unaff_x22 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    param_2 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x38);
    in_w8 = *(byte *)(param_2 + 0x135);
  } while( true );
  if (unaff_x21 != (long *)0x0) {
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_029d89d4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d89d4:
    (*(code *)*puVar1)();
  }
  *unaff_x19 = unaff_x23;
  thunk_FUN_01f51358();
  *(uint *)(unaff_x19 + 1) = unaff_w20;
  return;
}


