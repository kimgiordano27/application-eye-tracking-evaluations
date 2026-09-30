/*
FUNCTION_NAME: OculusSampleFramework.TrainCarBase$$UpdateCarPosition
ENTRY_POINT: 01fe4900
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OculusSampleFramework_TrainCarBase__UpdateCarPosition(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  uint extraout_w1;
  undefined4 in_w8;
  long lVar11;
  long lVar12;
  long unaff_x19;
  int iVar13;
  long unaff_x20;
  undefined8 uVar14;
  long unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar15 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  int iStack0000000000000044;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_00000080;
  int iStack0000000000000084;
  undefined8 in_stack_00000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined4 uStack00000000000000c0;
  int iStack00000000000000c4;
  undefined8 uStack00000000000000c8;
  undefined8 in_stack_000000d0;
  ulong in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
  undefined8 uStack0000000000000140;
  undefined8 uStack0000000000000148;
  undefined4 uStack0000000000000150;
  long in_stack_00000158;
  
  uStack0000000000000128 = *(undefined8 *)(unaff_x19 + 0x60);
  uStack0000000000000120 = *(undefined8 *)(unaff_x19 + 0x58);
  uStack0000000000000138 = *(undefined8 *)(unaff_x19 + 0x70);
  uStack0000000000000130 = *(undefined8 *)(unaff_x19 + 0x68);
  uStack0000000000000150 = *(undefined4 *)(unaff_x19 + 0x88);
  *(undefined4 *)(unaff_x19 + 0x80) = in_w8;
  uStack0000000000000148 = *(undefined8 *)(unaff_x19 + 0x80);
  uStack0000000000000140 = *(undefined8 *)(unaff_x19 + 0x78);
  lVar9 = unaff_x20 + 0x18;
  uStack00000000000000c0 = *(undefined4 *)(unaff_x19 + 0x88);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x90);
  uStack0000000000000098 = *(undefined8 *)(unaff_x19 + 0x60);
  uStack0000000000000090 = *(undefined8 *)(unaff_x19 + 0x58);
  uStack00000000000000b8 = *(undefined8 *)(unaff_x19 + 0x80);
  uStack00000000000000b0 = *(undefined8 *)(unaff_x19 + 0x78);
  uStack00000000000000a8 = *(undefined8 *)(unaff_x19 + 0x70);
  uStack00000000000000a0 = *(undefined8 *)(unaff_x19 + 0x68);
  iStack00000000000000c4 = *(int *)(unaff_x19 + 0x8c) * 3;
  uStack00000000000000c8 = uVar14;
  uVar5 = OculusSampleFramework_TrainCarBase__get_Scale(lVar9,1,&stack0x00000090);
  iStack0000000000000084 = *(int *)(unaff_x19 + 0x8c) * 3 + 1;
  in_stack_00000068 = uStack0000000000000138;
  in_stack_00000060 = uStack0000000000000130;
  in_stack_00000078 = uStack0000000000000148;
  in_stack_00000070 = uStack0000000000000140;
  in_stack_00000058 = uStack0000000000000128;
  in_stack_00000050 = uStack0000000000000120;
  in_stack_00000080 = uStack0000000000000150;
  in_stack_00000088 = uVar14;
  uVar6 = OculusSampleFramework_TrainCarBase__get_Scale(lVar9,2,&stack0x00000050);
  iStack0000000000000044 = *(int *)(unaff_x19 + 0x8c) + 1000000;
  in_stack_00000028 = uStack0000000000000138;
  in_stack_00000020 = uStack0000000000000130;
  in_stack_00000038 = uStack0000000000000148;
  in_stack_00000030 = uStack0000000000000140;
  in_stack_00000018 = uStack0000000000000128;
  in_stack_00000010 = uStack0000000000000120;
  in_stack_00000040 = uStack0000000000000150;
  in_stack_00000048 = uVar14;
  uVar7 = OculusSampleFramework_TrainCarBase__get_Scale(lVar9,3,&stack0x00000010);
  in_stack_000000e8 = *(undefined8 *)(unaff_x19 + 0x18);
  in_stack_000000e0 = *(undefined8 *)(unaff_x19 + 0x10);
  FUN_01fe5138(lVar9,uVar5);
  uVar14 = FUN_01fe31f8();
  FUN_01fe5138(lVar9,uVar6);
  uVar8 = FUN_01fe31f8();
  FUN_01fe5138(lVar9,uVar7);
  in_stack_00000110 = FUN_01fe31f8();
  in_stack_000000f8 = in_stack_000000e8;
  in_stack_000000f0 = in_stack_000000e0;
  in_stack_00000100 = uVar14;
  in_stack_00000108 = uVar8;
  auVar15 = FUN_02349e70(&stack0x000000f0,0,0,*unaff_x29);
  *(undefined1 (*) [16])(unaff_x19 + 0x28) = auVar15;
  FUN_01fe5138(lVar9,uVar5);
  FUN_01fe3594();
  FUN_01fe5138(lVar9,uVar6);
  FUN_01fe3594();
  FUN_01fe5138(lVar9,uVar7);
  FUN_01fe3594();
  if (*(long *)(unaff_x19 + 8) != 0) {
    if (*(int *)(*(long *)(unaff_x19 + 8) + 0x18) < 1) {
LAB_01fe4bb4:
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      *(undefined4 *)(unaff_x19 + 0x20) = 3;
      if (*(long *)(unaff_x27 + 0x28) == in_stack_00000158) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar9 = FUN_01fe5138(lVar9,uVar6);
    puVar4 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__;
    puVar3 = Method_Oculus_Platform_Message<ProductList>_get_Data__;
    lVar11 = *(long *)(unaff_x19 + 8);
    if (lVar11 != 0) {
      lVar9 = *(long *)(lVar9 + 0x80);
      iVar13 = 0;
      do {
        iVar1 = *(int *)(lVar11 + 0x18);
        if (iVar1 <= iVar13) {
          *(undefined4 *)(lVar11 + 0x18) = 0;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (0 < iVar1) {
            FUN_0358d1e4(*(undefined8 *)(lVar11 + 0x10),0,iVar1,0);
          }
          goto LAB_01fe4bb4;
        }
        in_stack_000000d0 = 0;
        in_stack_000000d8 = 0;
        in_stack_000000d0 = FUN_031bfff0(lVar11,iVar13,*(undefined8 *)puVar4);
        thunk_FUN_01f51358(&stack0x000000d0,in_stack_000000d0);
        if (*(long *)(unaff_x19 + 8) == 0) break;
        FUN_031bfff0(*(long *)(unaff_x19 + 8),iVar13,*(undefined8 *)puVar4);
        in_stack_000000d8 = CONCAT44(in_stack_000000d8._4_4_,(extraout_w1 & 1) << 4) | 10;
        if (lVar9 == 0) break;
        lVar11 = *(long *)(lVar9 + 0x10);
        lVar12 = *(long *)puVar3;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar11 == 0) break;
        uVar2 = *(uint *)(lVar9 + 0x18);
        if (uVar2 < *(uint *)(lVar11 + 0x18)) {
          lVar11 = lVar11 + (long)(int)uVar2 * 0x10;
          *(uint *)(lVar9 + 0x18) = uVar2 + 1;
          puVar10 = (undefined8 *)(lVar11 + 0x20);
          *puVar10 = in_stack_000000d0;
          *(ulong *)(lVar11 + 0x28) = in_stack_000000d8;
          thunk_FUN_01f51358(puVar10,0);
        }
        else {
          FUN_031baaa4(lVar9,in_stack_000000d0,in_stack_000000d8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        lVar11 = *(long *)(unaff_x19 + 8);
        iVar13 = iVar13 + 1;
      } while (lVar11 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


