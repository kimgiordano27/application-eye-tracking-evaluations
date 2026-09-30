/*
FUNCTION_NAME: VRM.VrmDeserializer$$Deserialize_vrm_humanoid_humanBones_LIST
ENTRY_POINT: 03881fb0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03882124) */

undefined4 VRM_VrmDeserializer__Deserialize_vrm_humanoid_humanBones_LIST(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 unaff_w19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000028;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  
  while (param_1 < 0) {
    unaff_w21 = unaff_w21 + 1;
    if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(in_stack_00000028 + 0x18) <= unaff_w21) {
      thunk_FUN_01a6ca08(PTR_DAT_03cbde98);
      uVar4 = thunk_FUN_01a89e68();
      uVar5 = thunk_FUN_01a6ca08(
                                Method_System_Collections_Generic_List_Enumerator<Selectable>_Dispose__
                                );
      FUN_026b3fc8(uVar4,uVar5,0);
      uVar5 = thunk_FUN_01a6ca08(
                                Method_System_Collections_Generic_List_Enumerator<Selectable>_MoveNext__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar4,uVar5);
    }
    FUN_02215a88(in_stack_00000028,unaff_w21,(long)&stack0x00000048 + 4,*unaff_x23);
    if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    param_1 = FUN_02217a2c(in_stack_00000010,(long)&stack0x00000048 + 4,*unaff_x24);
    unaff_w22 = param_1;
  }
  if (unaff_w21 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = uStack0000000000000048;
    if (0 < unaff_w21) {
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02215a88(in_stack_00000028,unaff_w21 + -1,(long)&stack0x00000048 + 4,*unaff_x23);
      uVar2 = uStack000000000000004c;
    }
    if (0 < unaff_w22) {
      if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02215a88(in_stack_00000010,unaff_w22 + -1,(long)&stack0x00000048 + 4,*unaff_x23);
      unaff_w19 = uStack000000000000004c;
    }
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar3 = FUN_037e03f8(*(long *)(unaff_x20 + 0x30),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    in_stack_00000008._4_4_ = FUN_037d6c54(lVar3,uVar2,0);
    if (*(long *)(unaff_x20 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar3 = FUN_037e03f8(*(long *)(unaff_x20 + 0x30),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar2 = FUN_037d6c54(lVar3,unaff_w19,0);
    uVar2 = FUN_02767890((long)&stack0x00000008 + 4,uVar2,0);
  }
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_List<ISegmentedHealthBar>>>_Remove__
  ;
  FUN_0225809c(&stack0x00000018,
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<string,_Dictionary<string,_List<ISegmentedHealthBar>>>_Remove__
              );
  FUN_0225809c(&stack0x00000030,*(undefined8 *)puVar1);
  return uVar2;
}


