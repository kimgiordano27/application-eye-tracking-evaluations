/*
FUNCTION_NAME: RootMotion.FinalIK.IKMappingSpine$$Initiate
ENTRY_POINT: 02996af0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02996d38) */

void RootMotion_FinalIK_IKMappingSpine__Initiate(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int in_w9;
  undefined8 unaff_x19;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  char cStack000000000000000c;
  long in_stack_00000018;
  
  if ((in_w9 == 0) && (0 < *(int *)(param_1 + 0x28))) {
    plVar7 = *(long **)(unaff_x20 + 0xf8);
    if (plVar7 == (long *)0x0) goto LAB_02996ce8;
    iVar5 = (**(code **)(*plVar7 + 0x1a8))(plVar7,0x65,*(undefined8 *)(*plVar7 + 0x1b0));
    param_1 = *(long *)(unaff_x20 + 0x110);
    if (param_1 == 0) goto LAB_02996ce8;
    if (iVar5 < *(int *)(param_1 + 0x28)) {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      return;
    }
  }
  if (*(int *)(param_1 + 0x24) < 1) {
    iVar5 = 0;
  }
  else {
    plVar7 = *(long **)(unaff_x20 + 0xf8);
    if (plVar7 == (long *)0x0) goto LAB_02996ce8;
    iVar5 = (**(code **)(*plVar7 + 0x1a8))
                      (plVar7,*(int *)(param_1 + 0x24) << 1,*(undefined8 *)(*plVar7 + 0x1b0));
    param_1 = *(long *)(unaff_x20 + 0x110);
    if (param_1 == 0) goto LAB_02996ce8;
    iVar5 = iVar5 - *(int *)(param_1 + 0x24);
  }
  puVar2 = PTR_DAT_03d07ba8;
  if (*(long *)(unaff_x20 + 0xc0) != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    iVar6 = FUN_02f0ce18(*(long *)(unaff_x20 + 0xc0),0);
    lVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
    FUN_029988b4();
    if (lVar8 != 0) {
      iVar1 = iVar1 + iVar5;
      *(undefined8 *)(lVar8 + 0x20) = unaff_x19;
      iVar6 = iVar1 + iVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar8 + 0x20));
      *(int *)(lVar8 + 0x18) = iVar6;
      *(int *)(lVar8 + 0x28) = iVar1;
      uVar10 = *(undefined8 *)(unaff_x20 + 0x108);
      cStack000000000000000c = '\0';
      FUN_027e0bd8(uVar10,&stack0x0000000c,0);
      puVar4 = PTR_DAT_03d07b90;
      puVar3 = PTR_DAT_03d07b80;
      puVar2 = PTR_DAT_03d07b78;
      lVar9 = *(long *)(unaff_x20 + 0x108);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if ((*(int *)(lVar9 + 0x18) == 0) || (*(char *)(unaff_x20 + 0x20) == '\x01')) {
        FUN_02210dd4(lVar9,lVar8,*(undefined8 *)PTR_DAT_03d07b90);
      }
      else {
        lVar11 = *(long *)(lVar9 + 0x10);
        if (lVar11 != 0) {
          do {
            FUN_01ea4674(lVar11,&stack0x00000018,*(undefined8 *)puVar3);
            if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01ab6c3c();
            }
            if (iVar6 <= *(int *)(in_stack_00000018 + 0x18)) {
              if (*(long *)(unaff_x20 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              FUN_0221099c(*(long *)(unaff_x20 + 0x108),lVar11,lVar8,*(undefined8 *)PTR_DAT_03d07b88
                          );
              goto LAB_02996cb0;
            }
            lVar11 = FUN_0220fecc(lVar11,*(undefined8 *)puVar2);
          } while (lVar11 != 0);
          lVar9 = *(long *)(unaff_x20 + 0x108);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
        }
        FUN_02210dd4(lVar9,lVar8,*(undefined8 *)puVar4);
      }
LAB_02996cb0:
      if (cStack000000000000000c != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar10,0);
      }
      return;
    }
  }
LAB_02996ce8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


