/*
FUNCTION_NAME: Meta.WitAi.WitService$$HandleComplete
ENTRY_POINT: 032988ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03298b0c) */

void Meta_WitAi_WitService__HandleComplete(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  lVar3 = FUN_01ecaf44(param_2);
  lVar6 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_03298900;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_03298900:
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar3 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03298970;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_03298970:
    uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar3 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar8 == 0) goto LAB_03298ab8;
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44(lVar3);
    }
    lVar6 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_032989e8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,lVar3,0);
LAB_032989e8:
    (*(code *)*puVar4)(&stack0x00000020,plVar5,puVar4[1]);
    in_stack_00000048 = in_stack_00000028;
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000058 = in_stack_00000038;
    in_stack_00000050 = in_stack_00000030;
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = *(uint *)(unaff_x21 + 0x18);
    if (uVar7 == *(uint *)(lVar3 + 0x18)) {
      FUN_03297044();
      lVar3 = *(long *)(unaff_x21 + 0x10);
      uVar7 = *(uint *)(unaff_x21 + 0x18);
    }
    *(uint *)(unaff_x21 + 0x18) = uVar7 + 1;
    in_stack_00000028 = in_stack_00000048;
    in_stack_00000020 = in_stack_00000040;
    in_stack_00000038 = in_stack_00000058;
    in_stack_00000030 = in_stack_00000050;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar3 = lVar3 + (long)(int)uVar7 * 0x20;
    *(undefined8 *)(lVar3 + 0x28) = in_stack_00000048;
    *(undefined8 *)(lVar3 + 0x20) = in_stack_00000040;
    *(undefined8 *)(lVar3 + 0x38) = in_stack_00000058;
    *(undefined8 *)(lVar3 + 0x30) = in_stack_00000050;
    thunk_FUN_01f51358(lVar3 + 0x28,0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
                    /* try { // try from 03298ac8 to 03398be7 has its CatchHandler @ 03298ac8
                       catch() { ... } // from try @ 03298ac8 with catch @ 03298ac8
                       catch() { ... } // from try @ 03298cc4 with catch @ 03298ac8
                       catch() { ... } // from try @ 03298d8c with catch @ 03298ac8
                       catch() { ... } // from try @ 03298d94 with catch @ 03298ac8
                       catch() { ... } // from try @ 03298e38 with catch @ 03298ac8 */
      puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03298ad4;
    }
  }
LAB_03298ab8:
  puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_03298ad4:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return;
}


