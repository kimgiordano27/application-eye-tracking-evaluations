/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$IsPositionInRoomDebugger
ENTRY_POINT: 01494cc0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDebugger__IsPositionInRoomDebugger(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  int in_stack_00000028;
  undefined4 uStack000000000000002c;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x5b0));
  thunk_FUN_00d48444(StringLiteral_3033);
  thunk_FUN_00d48444(PTR_DAT_033eead0);
  *(undefined1 *)(unaff_x19 + 0xc43) = 1;
  plVar2 = (long *)FUN_00da4fb8(*unaff_x21,4);
  uStack000000000000002c = *(undefined4 *)(unaff_x20 + 0x20);
  lVar3 = thunk_FUN_00d61fa0(*unaff_x22,&stack0x0000002c);
  if (plVar2 == (long *)0x0) {
LAB_01494e58:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_01494e4c:
    uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    in_stack_00000028 = *(int *)(unaff_x20 + 0x14) / 1000;
    lVar3 = thunk_FUN_00d61fa0(*unaff_x22,&stack0x00000028);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_01494e4c;
    uVar6 = *(uint *)(plVar2 + 3);
    if (1 < uVar6) {
      plVar2[5] = lVar3;
      lVar3 = *(long *)(unaff_x20 + 0x18);
      if (lVar3 != 0) {
        lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40));
        if (lVar4 == 0) goto LAB_01494e4c;
        uVar6 = *(uint *)(plVar2 + 3);
      }
      puVar1 = Method_System_Net_FtpWebRequest_GetResponse__;
      if (2 < uVar6) {
        plVar2[6] = lVar3;
        in_stack_00000008 = *(undefined8 *)puVar1;
        in_stack_00000010 = 0xffffffffffffffff;
        in_stack_00000018 = *(undefined4 *)(unaff_x20 + 0x24);
        lVar3 = FUN_017a7f78(&stack0x00000008,0);
        if (lVar3 == 0) goto LAB_01494e58;
        lVar3 = FUN_01604018(lVar3,0);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto LAB_01494e4c;
        puVar1 = PTR_DAT_033eead0;
        if (3 < *(uint *)(plVar2 + 3)) {
          plVar2[7] = lVar3;
          FUN_01600be4(*(undefined8 *)puVar1,plVar2,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


