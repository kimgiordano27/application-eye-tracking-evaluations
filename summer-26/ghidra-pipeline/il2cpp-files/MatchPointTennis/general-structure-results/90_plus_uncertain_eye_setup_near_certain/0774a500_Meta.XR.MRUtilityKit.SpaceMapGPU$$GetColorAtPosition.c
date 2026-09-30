/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$GetColorAtPosition
ENTRY_POINT: 0774a500
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__GetColorAtPosition(undefined1 param_1 [16])

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined1 unaff_w22;
  long lVar5;
  long lVar6;
  undefined8 in_stack_00000020;
  undefined8 uStack0000000000000028;
  
  *(long *)(unaff_x19 + 0x10) = param_1._8_8_;
  *(long *)(unaff_x19 + 8) = param_1._0_8_;
  uStack0000000000000028 = 0;
  FUN_094fdbd0(&stack0x00000028,0,0);
  FUN_094fdbc0(0x3f800000,&stack0x00000028,0);
  iVar2 = FUN_094f3ae4();
  if (0 < iVar2) {
    lVar6 = 0;
    do {
      *(undefined1 *)(*(long *)(unaff_x19 + 8) + lVar6) = unaff_w22;
      *(undefined8 *)(*(long *)(unaff_x19 + 0x18) + lVar6 * 8) = uStack0000000000000028;
      lVar6 = lVar6 + 1;
      iVar2 = FUN_094f3ae4();
    } while (lVar6 < iVar2);
  }
  uVar3 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f29870,unaff_w20);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x28));
  if (0 < *(int *)(unaff_x19 + 0x20)) {
    lVar6 = 0;
    do {
      lVar5 = *(long *)(unaff_x19 + 0x28);
      in_stack_00000020 = *(undefined8 *)(*(long *)(unaff_x19 + 0x18) + lVar6 * 8);
      uVar1 = FUN_094fdbc8(&stack0x00000020,0);
      if (lVar5 == 0) goto LAB_0774a57c;
      if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_0774a578;
      *(undefined1 *)(lVar5 + (int)uVar1 + 0x20) = 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(unaff_x19 + 0x20));
  }
  lVar6 = *(long *)(unaff_x19 + 0x28);
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (long)((ulong)uVar1 << 0x20)) {
      uVar4 = 0;
      iVar2 = 0;
      do {
        if (uVar1 <= uVar4) {
LAB_0774a578:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        if (*(char *)(lVar6 + 0x20 + uVar4) != '\0') {
          iVar2 = iVar2 + 1;
          *(int *)(unaff_x19 + 0x30) = iVar2;
        }
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)uVar1);
    }
    return;
  }
LAB_0774a57c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


