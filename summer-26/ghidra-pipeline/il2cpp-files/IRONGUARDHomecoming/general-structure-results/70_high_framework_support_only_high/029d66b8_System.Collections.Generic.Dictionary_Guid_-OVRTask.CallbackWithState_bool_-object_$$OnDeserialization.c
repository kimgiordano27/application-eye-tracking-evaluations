/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<Guid,-OVRTask.CallbackWithState<bool,-object>>$$OnDeserialization
ENTRY_POINT: 029d66b8
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


/* WARNING: Removing unreachable block (ram,0x029d6788) */
/* WARNING: Removing unreachable block (ram,0x029d67d4) */

void System_Collections_Generic_Dictionary<Guid,_OVRTask_CallbackWithState<bool,_object>>__OnDeserialization
               (long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 unaff_x24;
  long *unaff_x26;
  int unaff_w27;
  
code_r0x029d66b8:
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_01ecaf44();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x18);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44();
  }
  lVar1 = FUN_01f08890(lVar1,4);
  do {
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      if (*(uint *)(lVar1 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      puVar2 = (undefined8 *)(lVar1 + (long)(int)unaff_w20 * 8 + 0x20);
      *puVar2 = unaff_x24;
      thunk_FUN_01f51358(puVar2,unaff_x24);
      unaff_w20 = unaff_w20 + 1;
      lVar3 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_029d65b8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_029d65b8:
      uVar5 = (*(code *)*puVar2)();
      if ((uVar5 & 1) == 0) {
        if (unaff_x21 == (long *)0x0) goto LAB_029d677c;
        lVar3 = *unaff_x21;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 == 0) goto LAB_029d6754;
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_029d673c;
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
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_029d663c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ecb238();
LAB_029d663c:
      unaff_x24 = (*(code *)*puVar2)();
      if (lVar1 == 0) {
        param_1 = *(long *)(unaff_x22 + 0x20);
        goto code_r0x029d66b8;
      }
    } while (unaff_w20 != *(uint *)(lVar1 + 0x18));
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
    FUN_0358d498(lVar1,0,lVar3,0,unaff_w20,0);
    lVar1 = lVar3;
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_029d673c:
    if (*(long *)(piVar6 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_029d6770;
    }
  }
LAB_029d6754:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_029d6770:
  (*(code *)*puVar2)();
LAB_029d677c:
  *unaff_x19 = lVar1;
  thunk_FUN_01f51358();
  *(uint *)(unaff_x19 + 1) = unaff_w20;
  return;
}


