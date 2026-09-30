/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<Guid,-bool>$$ContainsValue
ENTRY_POINT: 029d8860
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

void System_Collections_Generic_Dictionary<Guid,_bool>__ContainsValue
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  ulong uVar4;
  ulong in_x9;
  int *in_x10;
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
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_029d8894;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d8894:
      auVar6 = (*(code *)*puVar1)();
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
        lVar2 = *(long *)(unaff_x22 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01ecaf44();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x18);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01ecaf44();
        }
        lVar2 = FUN_01f08890(lVar2,unaff_w20 << 1);
        FUN_0358d498(unaff_x23,0,lVar2,0,unaff_w20,0);
        unaff_x23 = lVar2;
        goto LAB_029d8940;
      }
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      pauVar3 = (undefined1 (*) [16])(unaff_x23 + (long)(int)unaff_w20 * 0x10 + 0x20);
      *pauVar3 = auVar6;
      thunk_FUN_01f51358(pauVar3,0);
      unaff_w20 = unaff_w20 + 1;
      lVar2 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x27) {
            puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_029d8810;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d8810:
      uVar4 = (*(code *)*puVar1)();
      if ((uVar4 & 1) == 0) {
        if (unaff_x21 == (long *)0x0) goto LAB_029d89e0;
        lVar2 = *unaff_x21;
        uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar4 == 0) goto LAB_029d89b8;
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_029d89a0;
      }
      lVar2 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      param_3 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x38);
      if ((*(byte *)(param_3 + 0x135) & 1) == 0) {
        param_3 = FUN_01ecaf44(param_3);
      }
      param_1 = *unaff_x21;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_029d89a0:
    if (*(long *)(piVar5 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_029d89d4;
    }
  }
LAB_029d89b8:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d89d4:
  (*(code *)*puVar1)();
LAB_029d89e0:
  *unaff_x19 = unaff_x23;
  thunk_FUN_01f51358();
  *(uint *)(unaff_x19 + 1) = unaff_w20;
  return;
}


