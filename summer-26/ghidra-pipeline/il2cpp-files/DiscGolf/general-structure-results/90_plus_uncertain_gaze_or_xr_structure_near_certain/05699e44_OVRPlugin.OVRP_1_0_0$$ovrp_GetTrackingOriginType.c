/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingOriginType
ENTRY_POINT: 05699e44
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 97
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingOriginType(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long lVar5;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_000000e8;
  
  if (param_2 != 1) {
    FUN_02d03cf4(&stack0x00000008);
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c(param_1);
  }
  plVar4 = (long *)__cxa_begin_catch(param_1);
  lVar5 = *plVar4;
  in_stack_00000008 = lVar5;
  __cxa_end_catch();
  FUN_051189e8(in_stack_00000010,*unaff_x25);
  puVar2 = System_Collections_Generic_Queue<MessageEventArgs>_TypeInfo;
  puVar1 = System_Collections_Generic_Queue<IAsyncResult>_TypeInfo;
  if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(lVar5);
  }
  if (*(long *)(unaff_x22 + 0x58) != 0) {
    FUN_03eae774(&stack0x00000008,*(long *)(unaff_x22 + 0x58),
                 *(undefined8 *)
                  UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputActionMap>_TypeInfo);
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000008 = 0;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000010 = &stack0x00000030;
    while (uVar3 = FUN_05118c10(&stack0x00000030,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
      if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),in_stack_00000040 & 0xffffffff,*unaff_x24);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar3 = FUN_0569af78();
      if ((uVar3 & 1) != 0) {
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_0632237c();
      }
    }
    FUN_05118c0c(&stack0x00000030,*(undefined8 *)puVar1);
  }
  return;
}


