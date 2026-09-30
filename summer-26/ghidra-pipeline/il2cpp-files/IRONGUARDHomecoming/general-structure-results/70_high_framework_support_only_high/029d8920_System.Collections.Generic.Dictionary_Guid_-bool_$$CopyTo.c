/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<Guid,-bool>$$CopyTo
ENTRY_POINT: 029d8920
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


/* WARNING: Removing unreachable block (ram,0x029d89ec) */
/* WARNING: Removing unreachable block (ram,0x029d8a3c) */

void System_Collections_Generic_Dictionary<Guid,_bool>__CopyTo(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x27;
  int unaff_w28;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = unaff_x25;
  auVar8._0_8_ = unaff_x24;
code_r0x029d8920:
  lVar2 = *(long *)(*(long *)(param_1 + 0xc0) + 0x18);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01ecaf44();
  }
  lVar2 = FUN_01f08890(lVar2,4);
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
      pauVar3 = (undefined1 (*) [16])(lVar2 + (long)(int)unaff_w20 * 0x10 + 0x20);
      *pauVar3 = auVar8;
      thunk_FUN_01f51358(pauVar3,0);
      unaff_w20 = unaff_w20 + 1;
      lVar4 = *unaff_x21;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x27) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_029d8810;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d8810:
      uVar6 = (*(code *)*puVar1)();
      if ((uVar6 & 1) == 0) {
        if (unaff_x21 == (long *)0x0) goto LAB_029d89e0;
        lVar4 = *unaff_x21;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 == 0) goto LAB_029d89b8;
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_029d89a0;
      }
      lVar4 = *(long *)(unaff_x22 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x38);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ecaf44(lVar4);
      }
      lVar5 = *unaff_x21;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_029d8894;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d8894:
      auVar8 = (*(code *)*puVar1)();
      if (lVar2 == 0) {
        param_1 = *(long *)(unaff_x22 + 0x20);
        if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
          param_1 = FUN_01ecaf44();
        }
        goto code_r0x029d8920;
      }
    } while (unaff_w20 != *(uint *)(lVar2 + 0x18));
    if ((int)(unaff_w20 + unaff_w28) < 0) {
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
    lVar4 = FUN_01f08890(lVar4,unaff_w20 * 2);
    FUN_0358d498(lVar2,0,lVar4,0,unaff_w20,0);
    lVar2 = lVar4;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_029d89a0:
    if (*(long *)(piVar7 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_029d89d4;
    }
  }
LAB_029d89b8:
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_029d89d4:
  (*(code *)*puVar1)();
LAB_029d89e0:
  *unaff_x19 = lVar2;
  thunk_FUN_01f51358();
  *(uint *)(unaff_x19 + 1) = unaff_w20;
  return;
}


