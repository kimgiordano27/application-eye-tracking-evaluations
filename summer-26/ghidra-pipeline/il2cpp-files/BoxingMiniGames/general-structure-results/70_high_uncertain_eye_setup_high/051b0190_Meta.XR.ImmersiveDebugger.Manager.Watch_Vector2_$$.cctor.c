/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$.cctor
ENTRY_POINT: 051b0190
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>___cctor(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  undefined4 *unaff_x21;
  long *unaff_x22;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  
  if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_0367c9fc(param_2);
  }
  if (*(long *)(*unaff_x22 + 0x40) != *(long *)(param_2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_03643084();
  }
  puVar5 = (undefined4 *)thunk_FUN_0367ff68();
  lVar6 = *(long *)(unaff_x20 + 0x20);
  in_stack_00000008 = *unaff_x21;
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  thunk_FUN_0367fa58(**(undefined8 **)(lVar6 + 0xc0),&stack0x00000008);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uStack0000000000000004 = uVar1;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  thunk_FUN_0367fa58(**(undefined8 **)(lVar6 + 0xc0),&stack0x00000004);
  puVar3 = PTR_DAT_07a016a8;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar6 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07a016a8) {
        puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_051b0288;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_0367cd30();
LAB_051b0288:
                    /* try { // try from 051b0298 to 052b0373 has its CatchHandler @ 051b0298
                       catch() { ... } // from try @ 051b0298 with catch @ 051b0298
                       catch() { ... } // from try @ 051b03e4 with catch @ 051b0298
                       catch() { ... } // from try @ 051b0454 with catch @ 051b0298
                       catch() { ... } // from try @ 051b04a8 with catch @ 051b0298 */
  iVar4 = (*(code *)*puVar7)();
  if (iVar4 == 0) {
    lVar6 = *(long *)(unaff_x20 + 0x20);
    in_stack_00000008 = unaff_x21[1];
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10),&stack0x00000008);
    lVar6 = *(long *)(unaff_x20 + 0x20);
    uStack0000000000000004 = uVar2;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    thunk_FUN_0367fa58(*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x10),&stack0x00000004);
    lVar6 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_051b0348;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_0367cd30();
LAB_051b0348:
    (*(code *)*puVar7)();
  }
  return;
}


