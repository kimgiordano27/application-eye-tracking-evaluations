/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_SetTrackingOriginType
ENTRY_POINT: 05699ea8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 105
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_SetTrackingOriginType(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  ulong in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  int iStack0000000000000058;
  int in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined8 in_stack_000000e8;
  
  if (param_2 != 1) {
    FUN_02d03cc4(&stack0x00000008);
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c(param_1);
  }
  plVar4 = (long *)__cxa_begin_catch(param_1);
  lVar8 = *plVar4;
  in_stack_00000008 = lVar8;
  __cxa_end_catch();
  FUN_05118df0(in_stack_00000010,*unaff_x25);
  puVar2 = System_Collections_Generic_Queue<Node>_TypeInfo;
  puVar1 = System_Collections_Generic_Queue<int>_TypeInfo;
  if (lVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(lVar8);
  }
  FUN_0421afa0(&stack0x00000008,unaff_x22 + 0x48,
               *(undefined8 *)UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_TypeInfo)
  ;
  in_stack_00000050 = in_stack_00000008;
  in_stack_00000008 = 0;
  _iStack0000000000000058 = in_stack_00000010;
  uVar3 = _iStack0000000000000058;
  in_stack_00000068 = (undefined4)in_stack_00000020;
  uStack000000000000006c = (undefined4)((ulong)in_stack_00000020 >> 0x20);
  in_stack_00000060 = (int)in_stack_00000018;
  uStack0000000000000064 = (undefined4)(in_stack_00000018 >> 0x20);
  iStack0000000000000058 = (int)in_stack_00000010;
  iVar5 = iStack0000000000000058;
  in_stack_00000010 = &stack0x00000050;
  _iStack0000000000000058 = uVar3;
  while( true ) {
    lVar8 = in_stack_00000050;
    iVar6 = in_stack_00000060 + 1;
    in_stack_00000060 = iVar6;
    if (iVar5 <= iVar6) break;
    if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    uVar7 = *(ulong *)(lVar8 + (long)iVar6 * 8);
    uStack0000000000000064 = (undefined4)uVar7;
    in_stack_00000068 = (undefined4)(uVar7 >> 0x20);
    if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),uVar7 & 0xffffffff,*unaff_x24);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar7 = FUN_0569af78();
    if ((uVar7 & 1) != 0) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_0632223c();
    }
    iVar5 = iStack0000000000000058;
  }
  uStack0000000000000064 = 0;
  in_stack_00000068 = 0;
  FUN_051189e8(&stack0x00000050,*(undefined8 *)puVar1);
  puVar2 = System_Collections_Generic_Queue<MessageEventArgs>_TypeInfo;
  puVar1 = System_Collections_Generic_Queue<IAsyncResult>_TypeInfo;
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
    while (uVar7 = FUN_05118c10(&stack0x00000030,*(undefined8 *)puVar2), (uVar7 & 1) != 0) {
      if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),in_stack_00000040 & 0xffffffff,*unaff_x24);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar7 = FUN_0569af78();
      if ((uVar7 & 1) != 0) {
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


