/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$StartSpaceMap
ENTRY_POINT: 0774a2a0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__StartSpaceMap(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long in_x9;
  ulong uVar4;
  int iVar5;
  long unaff_x19;
  undefined4 unaff_w20;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 in_stack_00000020;
  
  if ((*(byte *)(in_x9 + 0x130) < *(byte *)(param_2 + 0x130)) ||
     (*(long *)(*(long *)(in_x9 + 200) + (ulong)*(byte *)(param_2 + 0x130) * 8 + -8) != param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_044481e4();
  }
  lVar2 = FUN_094ede70();
  *(undefined2 *)(unaff_x19 + 1) = 1;
  if (lVar2 != 0) {
    auVar7 = FUN_094f3a68(lVar2,0);
    *(undefined1 (*) [16])(unaff_x19 + 8) = auVar7;
    auVar7 = FUN_094f390c(lVar2,0);
    *(undefined1 (*) [16])(unaff_x19 + 0x18) = auVar7;
    uVar3 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f29870,unaff_w20);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar3;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x28));
    if (0 < *(int *)(unaff_x19 + 0x20)) {
      lVar2 = 0;
      do {
        lVar6 = *(long *)(unaff_x19 + 0x28);
        in_stack_00000020 = *(undefined8 *)(*(long *)(unaff_x19 + 0x18) + lVar2 * 8);
        uVar1 = FUN_094fdbc8(&stack0x00000020,0);
        if (lVar6 == 0) goto LAB_0774a57c;
        if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_0774a578;
        *(undefined1 *)(lVar6 + (int)uVar1 + 0x20) = 1;
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(int *)(unaff_x19 + 0x20));
    }
    lVar2 = *(long *)(unaff_x19 + 0x28);
    *(undefined4 *)(unaff_x19 + 0x30) = 0;
    if (lVar2 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (0 < (long)((ulong)uVar1 << 0x20)) {
        uVar4 = 0;
        iVar5 = 0;
        do {
          if (uVar1 <= uVar4) {
LAB_0774a578:
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          if (*(char *)(lVar2 + 0x20 + uVar4) != '\0') {
            iVar5 = iVar5 + 1;
            *(int *)(unaff_x19 + 0x30) = iVar5;
          }
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)(int)uVar1);
      }
      return;
    }
  }
LAB_0774a57c:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


