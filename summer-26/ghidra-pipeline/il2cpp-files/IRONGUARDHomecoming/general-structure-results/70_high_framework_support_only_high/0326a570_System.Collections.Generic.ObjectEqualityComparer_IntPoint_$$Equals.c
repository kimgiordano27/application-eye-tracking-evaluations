/*
FUNCTION_NAME: System.Collections.Generic.ObjectEqualityComparer<IntPoint>$$Equals
ENTRY_POINT: 0326a570
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0326a7e4) */

void System_Collections_Generic_ObjectEqualityComparer<IntPoint>__Equals
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *piVar8;
  long unaff_x20;
  long unaff_x21;
  uint uVar9;
  
  piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar8 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0326a5ac;
    }
    in_x9 = in_x9 + -1;
    piVar8 = piVar8 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_0326a5ac:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar5 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0326a620;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_0326a620:
    uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_0326a788;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0326a698;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,lVar5,0);
LAB_0326a698:
    (*(code *)*puVar3)(&stack0x00000050,plVar4,puVar3[1]);
    memcpy(&stack0x000000a0,&stack0x00000050,0x50);
    lVar5 = *(long *)(unaff_x21 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar9 = *(uint *)(unaff_x21 + 0x18);
    if (uVar9 == *(uint *)(lVar5 + 0x18)) {
      FUN_03268afc();
      lVar5 = *(long *)(unaff_x21 + 0x10);
      uVar9 = *(uint *)(unaff_x21 + 0x18);
    }
    *(uint *)(unaff_x21 + 0x18) = uVar9 + 1;
    memcpy(&stack0x00000050,&stack0x000000a0,0x50);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    memcpy(&stack0x00000000,&stack0x00000050,0x50);
    if (*(uint *)(lVar5 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar5 = lVar5 + (long)(int)uVar9 * 0x50;
    memcpy((void *)(lVar5 + 0x20),&stack0x00000000,0x50);
    thunk_FUN_01f51358(lVar5 + 0x40,0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_0326a7a4;
    }
  }
LAB_0326a788:
  puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_0326a7a4:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


