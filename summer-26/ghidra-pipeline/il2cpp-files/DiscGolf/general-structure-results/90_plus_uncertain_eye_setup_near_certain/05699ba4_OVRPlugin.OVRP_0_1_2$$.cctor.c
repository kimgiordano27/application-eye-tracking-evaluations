/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$.cctor
ENTRY_POINT: 05699ba4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 105
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_2___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  int iVar7;
  ulong uVar8;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
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
  long in_stack_00000070;
  int in_stack_00000078;
  int in_stack_00000080;
  ulong uStack0000000000000084;
  undefined8 in_stack_000000e8;
  
  while( true ) {
    uVar8 = *(ulong *)(unaff_x27 + (long)unaff_w23 * 8);
    uStack0000000000000084 = uVar8;
    if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),uVar8 & 0xffffffff,*unaff_x24);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar5 = FUN_0569af78();
    if ((uVar5 & 1) != 0) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_06322274(uVar8 >> 0x20);
    }
    unaff_x27 = in_stack_00000070;
    unaff_w23 = in_stack_00000080 + 1;
    in_stack_00000080 = unaff_w23;
    if (in_stack_00000078 <= unaff_w23) break;
    if ((*(ushort *)(*(long *)(*unaff_x26 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
  }
  uStack0000000000000084 = 0;
  FUN_05118df0(&stack0x00000070,*unaff_x25);
  puVar2 = System_Collections_Generic_Queue<Node>_TypeInfo;
  puVar1 = System_Collections_Generic_Queue<int>_TypeInfo;
  FUN_0421afa0(&stack0x00000008,unaff_x22 + 0x48,
               *(undefined8 *)UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputDevice>_TypeInfo)
  ;
  in_stack_00000050 = in_stack_00000008;
  in_stack_00000008 = 0;
  _iStack0000000000000058 = in_stack_00000010;
  uVar4 = _iStack0000000000000058;
  in_stack_00000068 = (undefined4)in_stack_00000020;
  uStack000000000000006c = (undefined4)((ulong)in_stack_00000020 >> 0x20);
  in_stack_00000060 = (int)in_stack_00000018;
  uStack0000000000000064 = (undefined4)(in_stack_00000018 >> 0x20);
  iStack0000000000000058 = (int)in_stack_00000010;
  iVar6 = iStack0000000000000058;
  in_stack_00000010 = &stack0x00000050;
  _iStack0000000000000058 = uVar4;
  while( true ) {
    lVar3 = in_stack_00000050;
    iVar7 = in_stack_00000060 + 1;
    in_stack_00000060 = iVar7;
    if (iVar6 <= iVar7) break;
    if ((*(ushort *)(*(long *)(*(long *)puVar2 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    uVar8 = *(ulong *)(lVar3 + (long)iVar7 * 8);
    uStack0000000000000064 = (undefined4)uVar8;
    in_stack_00000068 = (undefined4)(uVar8 >> 0x20);
    if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),uVar8 & 0xffffffff,*unaff_x24);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar8 = FUN_0569af78();
    if ((uVar8 & 1) != 0) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_0632223c();
    }
    iVar6 = iStack0000000000000058;
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
    while (uVar8 = FUN_05118c10(&stack0x00000030,*(undefined8 *)puVar2), (uVar8 & 1) != 0) {
      if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),in_stack_00000040 & 0xffffffff,*unaff_x24);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar8 = FUN_0569af78();
      if ((uVar8 & 1) != 0) {
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


