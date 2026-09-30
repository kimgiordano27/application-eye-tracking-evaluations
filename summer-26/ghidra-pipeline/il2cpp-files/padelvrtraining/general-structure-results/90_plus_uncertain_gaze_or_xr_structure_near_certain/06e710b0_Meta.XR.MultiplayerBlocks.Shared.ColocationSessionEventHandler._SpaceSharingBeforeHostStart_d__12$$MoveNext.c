/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<SpaceSharingBeforeHostStart>d__12$$MoveNext
ENTRY_POINT: 06e710b0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<SpaceSharingBeforeHostStart>d__12__MoveNext
               (long param_1)

{
  uint uVar1;
  uint uVar2;
  int in_w9;
  undefined8 uVar3;
  int in_w10;
  long lVar4;
  uint uVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if (in_w9 != in_w10) {
    FUN_07199bdc(0);
    param_1 = *unaff_x19;
    if (param_1 == 0) {
LAB_06e711b4:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = *(uint *)((long)unaff_x19 + 0xc);
  do {
    uVar5 = uVar2;
    if (uVar1 <= uVar5) {
      *(uint *)((long)unaff_x19 + 0xc) = uVar1 + 1;
      unaff_x19[3] = 0;
      unaff_x19[2] = 0;
      unaff_x19[5] = 0;
      unaff_x19[4] = 0;
      goto LAB_06e71198;
    }
    lVar4 = *(long *)(param_1 + 0x18);
    *(uint *)((long)unaff_x19 + 0xc) = uVar5 + 1;
    if (lVar4 == 0) goto LAB_06e711b4;
    if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    uVar2 = uVar5 + 1;
  } while (*(int *)(lVar4 + (long)(int)uVar5 * 0x28 + 0x20) < 0);
  lVar4 = lVar4 + (long)(int)uVar5 * 0x28;
  uVar3 = *(undefined8 *)(lVar4 + 0x40);
  uVar8 = *(undefined8 *)(lVar4 + 0x38);
  uVar7 = *(undefined8 *)(lVar4 + 0x30);
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03d8f26c();
  }
  in_stack_00000040 = uVar7;
  in_stack_00000048 = uVar8;
  in_stack_00000050 = uVar3;
  FUN_05815674(&stack0x00000020,uVar6,&stack0x00000040,
               *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
  unaff_x19[3] = in_stack_00000028;
  unaff_x19[2] = in_stack_00000020;
  unaff_x19[5] = in_stack_00000038;
  unaff_x19[4] = in_stack_00000030;
  thunk_FUN_03d1023c(unaff_x19 + 2,0);
LAB_06e71198:
  return uVar5 < uVar1;
}


