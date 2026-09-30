/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$EndInvoke
ENTRY_POINT: 05fb5910
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVRSystem__GetControllerStateWithPose__EndInvoke(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06e684bc(0);
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  uVar2 = FUN_05fb576c();
  puVar1 = PTR_DAT_075f2fc8;
  if ((uVar2 & 1) != 0) {
    plVar6 = *(long **)(unaff_x20 + 0x28);
    if (plVar6 == (long *)0x0) {
LAB_05fb5a78:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_075f2fc8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 9) * 0x10 + 0x138);
          goto LAB_05fb59b4;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)PTR_DAT_075f2fc8,9);
LAB_05fb59b4:
    uVar2 = (*(code *)*puVar3)(plVar6,1);
    if ((uVar2 & 1) != 0) {
      plVar6 = *(long **)(unaff_x20 + 0x28);
      if (plVar6 == (long *)0x0) goto LAB_05fb5a78;
      lVar4 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 0xe) * 0x10 + 0x138);
            goto LAB_05fb5a24;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar1,0xe);
LAB_05fb5a24:
      uVar2 = (*(code *)*puVar3)(plVar6,&stack0x00000040,puVar3[1]);
      if ((uVar2 & 1) != 0) {
        FUN_05f9d080(&stack0x00000040);
        *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000054;
        *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
        unaff_x19[1] = CONCAT44(uStack000000000000004c,uStack0000000000000048);
        *unaff_x19 = in_stack_00000040;
        return 1;
      }
    }
  }
  return 0;
}


