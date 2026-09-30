/*
FUNCTION_NAME: Unity.Mathematics.math$$csum
ENTRY_POINT: 031bbbd8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_Mathematics_math__csum(void)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long *plVar9;
  ulong uVar10;
  uint uVar11;
  long in_stack_00000008;
  uint in_stack_00000028;
  uint uStack0000000000000094;
  long in_stack_00000098;
  undefined8 in_stack_000000a0;
  uint in_stack_000000a8;
  undefined8 in_stack_00000110;
  uint in_stack_00000118;
  long in_stack_000001e8;
  
  *(undefined1 *)(unaff_x23 + 0x2b7) = 1;
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar5 = thunk_FUN_01a89e68(*(undefined8 *)
                              System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo
                            );
  FUN_031bc044(uVar5,*(undefined4 *)(unaff_x22 + 0x18));
  if (0 < (int)*(ulong *)(unaff_x22 + 0x18)) {
    uVar10 = 0;
    uVar8 = *(ulong *)(unaff_x22 + 0x18) & 0xffffffff;
    do {
      if (uVar8 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar9 = *(long **)(unaff_x22 + 0x20 + uVar10 * 8);
      iVar4 = FUN_031b8fac(plVar9);
      if (iVar4 != 0) {
        uVar5 = thunk_FUN_01a6ca08(
                                  System_Collections_Generic_List<OVRVirtualKeyboard_IInputSource>_TypeInfo
                                  );
        uVar5 = FUN_025b4d3c(uVar5,plVar9,0);
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
        uVar6 = thunk_FUN_01a89e68();
        FUN_0276a4a8(uVar6,uVar5,0);
        uVar5 = thunk_FUN_01a6ca08(System_Collections_Generic_List<Operator_OpType>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar6,uVar5);
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_00000118 = unaff_w21;
      uVar8 = FUN_0219c130();
      if ((uVar8 & 1) == 0) {
        FUN_031bc2a0(&stack0x000000a8,plVar9,0,uVar5);
        uVar11 = in_stack_000000a8;
        puVar1 = &stack0x000000a8;
      }
      else {
        in_stack_000000a0._4_4_ = unaff_w21;
        FUN_0219b634();
        lVar2 = in_stack_00000098;
        if (in_stack_00000098 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar6 = FUN_01ab6a94(*(undefined8 *)
                              System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_TypeInfo
                             ,*(undefined4 *)(in_stack_00000098 + 0x20));
        FUN_021e7aa8(lVar2,uVar6,
                     *(undefined8 *)
                      System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
        FUN_031bc2a0(&stack0x00000118,plVar9,uVar6,uVar5);
        uVar11 = in_stack_00000118;
        puVar1 = &stack0x00000118;
      }
      memcpy(&stack0x00000184,(void *)((ulong)puVar1 | 4),100);
      uStack0000000000000094 = uVar11 & 0x1fff;
      if (unaff_w21 != uStack0000000000000094) {
        in_stack_00000118 = unaff_w21;
        uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
        uVar5 = thunk_FUN_01a89a98(uVar5,&stack0x00000118);
        uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
        uVar6 = thunk_FUN_01a89a98(uVar6,&stack0x00000094);
        uVar7 = thunk_FUN_01a6ca08(
                                  System_Collections_Generic_List<OverloadResolver_AmbiguousCandidate>_TypeInfo
                                  );
        uVar5 = FUN_025be8b0(uVar7,plVar9,uVar5,uVar6,0);
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
        uVar6 = thunk_FUN_01a89e68();
        FUN_0276a4a8(uVar6,uVar5,0);
        uVar5 = thunk_FUN_01a6ca08(System_Collections_Generic_List<Operator_OpType>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar6,uVar5);
      }
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_0219b634();
      uVar3 = in_stack_00000110._4_4_;
      memcpy(&stack0x00000118,&stack0x00000184,100);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar6 = (**(code **)(*plVar9 + 0x3c8))(plVar9,*(undefined8 *)(*plVar9 + 0x3d0));
      in_stack_00000028 = uVar11;
      memcpy((void *)((ulong)&stack0x00000028 | 4),&stack0x00000118,100);
      FUN_031b4ee8(plVar9,&stack0x00000028,uVar6,uVar3);
      unaff_w21 = unaff_w21 + 1;
      uVar8 = (ulong)*(uint *)(unaff_x22 + 0x18);
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)(int)*(uint *)(unaff_x22 + 0x18));
  }
  if (*(long *)(in_stack_00000008 + 0x28) != in_stack_000001e8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


