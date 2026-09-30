/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManager$$get_TelemetryAnnotation
ENTRY_POINT: 052e7d0c
PROGRAM: Untangled-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakManager__get_TelemetryAnnotation(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  long lVar11;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000030 = param_1;
  uStack0000000000000040 = param_1;
  uVar6 = FUN_0692d6b4();
  if ((uVar6 & 1) != 0) {
    uVar7 = FUN_0692d76c(&stack0x00000050,0);
    *(undefined8 *)(unaff_x19 + 0xf0) = uVar7;
    thunk_FUN_02f411dc();
    uVar7 = FUN_0692d804(&stack0x00000050,0);
    *(undefined8 *)(unaff_x19 + 0xe8) = uVar7;
    thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0xe8),uVar7);
    lVar9 = *(long *)(unaff_x19 + 0x130);
    if (lVar9 == 0) {
LAB_052e7eb8:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    iVar1 = *(int *)(lVar9 + 0x18);
    *(undefined4 *)(lVar9 + 0x18) = 0;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_05624da8(*(undefined8 *)(lVar9 + 0x10),0,iVar1,0);
    }
    lVar9 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3db88);
    FUN_03f7b3e8(lVar9,*(undefined8 *)PTR_DAT_06d3db80);
    uVar6 = FUN_0692db6c(&stack0x00000050,lVar9,0);
    if ((uVar6 & 1) != 0) {
      if (lVar9 == 0) goto LAB_052e7eb8;
      FUN_03f7c720(lVar9,*(undefined8 *)PTR_DAT_06d3db78);
      puVar5 = PTR_DAT_06d3db68;
      puVar4 = PTR_DAT_06d02330;
      puVar3 = PTR_DAT_06d02130;
      uStack0000000000000038 = in_stack_00000008;
      uStack0000000000000030 = in_stack_00000000;
      uStack0000000000000048 = in_stack_00000018;
      uStack0000000000000040 = in_stack_00000010;
      while (uVar6 = FUN_04de5d9c(&stack0x00000030,*(undefined8 *)puVar5), (uVar6 & 1) != 0) {
        uStack0000000000000028 = uStack0000000000000048;
        uStack0000000000000020 = uStack0000000000000040;
        lVar11 = *(long *)(unaff_x19 + 0x130);
        lVar8 = FUN_0692c3cc(&stack0x00000020,0);
        lVar9 = *(long *)puVar3;
        if (lVar8 != 0) {
          lVar9 = lVar8;
        }
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar8 = *(long *)(lVar11 + 0x10);
        lVar10 = *(long *)puVar4;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        uVar2 = *(uint *)(lVar11 + 0x18);
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar2 + 1;
          *(long *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = lVar9;
          thunk_FUN_02f411dc();
        }
        else {
          FUN_03fd0c9c(lVar11,lVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_04de5d98(&stack0x00000030,*(undefined8 *)PTR_DAT_06d3db60);
    }
  }
  return;
}


