/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_3$$ovrp_GetNodeAcceleration
ENTRY_POINT: 05699cb0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_3__ovrp_GetNodeAcceleration(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  int in_stack_00000058;
  int iStack0000000000000060;
  ulong uStack0000000000000064;
  undefined8 in_stack_000000e8;
  
  while( true ) {
                    /* try { // try from 05699cb0 to 05799cd7 has its CatchHandler @ 0569a200 */
    uVar5 = FUN_0569af78();
    if ((uVar5 & 1) != 0) {
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_0632223c();
    }
    lVar4 = in_stack_00000050;
    iVar1 = iStack0000000000000060 + 1;
    iStack0000000000000060 = iVar1;
    if (in_stack_00000058 <= iVar1) break;
    if ((*(ushort *)(*(long *)(*unaff_x26 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    uStack0000000000000064 = *(ulong *)(lVar4 + (long)iVar1 * 8);
    if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),uStack0000000000000064 & 0xffffffff,*unaff_x24);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
                    /* try { // try from 05699ce8 to 05799ceb has its CatchHandler @ 0569a1e8 */
  uStack0000000000000064 = 0;
  FUN_051189e8(&stack0x00000050,*unaff_x25);
  puVar3 = System_Collections_Generic_Queue<MessageEventArgs>_TypeInfo;
  puVar2 = System_Collections_Generic_Queue<IAsyncResult>_TypeInfo;
  if (*(long *)(unaff_x22 + 0x58) != 0) {
                    /* try { // try from 05699d00 to 05799d4f has its CatchHandler @ 0569a1f8 */
    FUN_03eae774(&stack0x00000008,*(long *)(unaff_x22 + 0x58),
                 *(undefined8 *)
                  UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputActionMap>_TypeInfo);
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000008 = 0;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000010 = &stack0x00000030;
    while (uVar5 = FUN_05118c10(&stack0x00000030,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
      if (*(long *)(unaff_x22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_0400ff1c(*(long *)(unaff_x22 + 0x10),in_stack_00000040 & 0xffffffff,*unaff_x24);
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
        FUN_0632237c();
      }
    }
    FUN_05118c0c(&stack0x00000030,*(undefined8 *)puVar2);
  }
  return;
}


