/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_ToDisplayStringsDelegate
ENTRY_POINT: 04192118
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_ToDisplayStringsDelegate(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02ce0978();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  if (*unaff_x22 != lVar3) {
    in_stack_00000030 = unaff_x21[2];
    in_stack_00000028 = unaff_x21[1];
    in_stack_00000020 = *unaff_x21;
    lVar3 = FUN_028c2330(*(undefined8 *)(unaff_x20 + 0x20));
    uVar5 = thunk_FUN_02cea4e8(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 8),&stack0x00000020);
    plVar6 = (long *)AkMusicSyncCallbackInfo__get_segmentInfo_iRemainingLookAheadTime(uVar5,0);
    FUN_028be474();
    uVar5 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    uVar7 = thunk_FUN_02c7737c(PTR_DAT_065e0628);
    uVar5 = FUN_04d9ba1c(uVar7,uVar5,0);
    thunk_FUN_02c7737c(PTR_DAT_065c96d8);
    uVar7 = thunk_FUN_02cea894();
    uVar8 = thunk_FUN_02c7737c(PTR_DAT_065dd318);
    FUN_04e97fd8(uVar7,uVar5,uVar8,0);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar7);
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02ce0978(lVar3);
  }
  if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018();
  }
  lVar3 = thunk_FUN_02cea9e8();
  puVar1 = PTR_DAT_065e0620;
  in_stack_00000028 = *(undefined8 *)(lVar3 + 0x10);
  in_stack_00000020 = *(undefined8 *)(lVar3 + 8);
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar3 = *unaff_x19;
  uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e0620) {
        puVar4 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_041921fc;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_02ce0a7c();
LAB_041921fc:
  iVar2 = (*(code *)*puVar4)();
  if (iVar2 == 0) {
    in_stack_00000018 = unaff_x21[2];
    in_stack_00000010 = unaff_x21[1];
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02ce0978();
    }
    thunk_FUN_02cea4e8(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10),&stack0x00000010);
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02ce0978(lVar3);
    }
    thunk_FUN_02cea4e8(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10));
    lVar3 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_041922c0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_02ce0a7c();
LAB_041922c0:
    (*(code *)*puVar4)();
  }
  return;
}


