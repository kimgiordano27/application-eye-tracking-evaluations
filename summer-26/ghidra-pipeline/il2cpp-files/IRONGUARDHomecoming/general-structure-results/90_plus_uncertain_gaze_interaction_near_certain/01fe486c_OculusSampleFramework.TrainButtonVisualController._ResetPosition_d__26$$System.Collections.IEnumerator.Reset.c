/*
FUNCTION_NAME: OculusSampleFramework.TrainButtonVisualController.<ResetPosition>d__26$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 01fe486c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 168
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void OculusSampleFramework_TrainButtonVisualController_<ResetPosition>d__26__System_Collections_IEnumerator_Reset
               (void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint extraout_w1;
  undefined1 in_w8;
  long lVar13;
  long lVar14;
  long unaff_x19;
  int iVar15;
  long unaff_x20;
  long unaff_x21;
  long unaff_x27;
  long *unaff_x28;
  undefined1 auVar16 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  int iStack0000000000000044;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000080;
  int iStack0000000000000084;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined4 uStack00000000000000c0;
  int iStack00000000000000c4;
  undefined8 in_stack_000000c8;
  undefined8 uStack00000000000000d0;
  ulong uStack00000000000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined4 in_stack_00000150;
  long in_stack_00000158;
  
  *(undefined1 *)(unaff_x21 + 0xe47) = in_w8;
  uStack00000000000000d0 = 0;
  uStack00000000000000d8 = 0;
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (*(int *)(unaff_x19 + 0x20) != 2) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
    uVar9 = thunk_FUN_01f117cc();
    FUN_0356ad6c(uVar9,0);
    uVar11 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<AttachmentDescriptor>__ctor__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar9,uVar11);
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    if (*(int *)(*(long *)(unaff_x19 + 8) + 0x18) == 0) {
      lVar8 = *unaff_x28;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar8 = *unaff_x28;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      uVar9 = FUN_0239ae2c(*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0x18),
                           *(undefined8 *)
                            Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
      if (lVar8 == 0) goto LAB_01fe4b8c;
      uVar10 = (**(code **)(lVar8 + 0x18))
                         (*(undefined8 *)(lVar8 + 0x40),uVar9,*(undefined4 *)(unaff_x19 + 0x18),
                          *(undefined8 *)(lVar8 + 0x28));
      if ((uVar10 & 1) == 0) {
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_01fe4c50();
        goto LAB_01fe4bcc;
      }
    }
    puVar3 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>_Dispose__;
    if (unaff_x20 != 0) {
      in_stack_00000128 = *(undefined8 *)(unaff_x19 + 0x60);
      in_stack_00000120 = *(undefined8 *)(unaff_x19 + 0x58);
      in_stack_00000138 = *(undefined8 *)(unaff_x19 + 0x70);
      in_stack_00000130 = *(undefined8 *)(unaff_x19 + 0x68);
      in_stack_00000150 = *(undefined4 *)(unaff_x19 + 0x88);
      *(undefined4 *)(unaff_x19 + 0x80) = *(undefined4 *)(unaff_x20 + 0xa0);
      in_stack_00000148 = *(undefined8 *)(unaff_x19 + 0x80);
      in_stack_00000140 = *(undefined8 *)(unaff_x19 + 0x78);
      lVar8 = unaff_x20 + 0x18;
      uStack00000000000000c0 = *(undefined4 *)(unaff_x19 + 0x88);
      uVar9 = *(undefined8 *)(unaff_x19 + 0x90);
      in_stack_00000098 = *(undefined8 *)(unaff_x19 + 0x60);
      in_stack_00000090 = *(undefined8 *)(unaff_x19 + 0x58);
      in_stack_000000b8 = *(undefined8 *)(unaff_x19 + 0x80);
      in_stack_000000b0 = *(undefined8 *)(unaff_x19 + 0x78);
      in_stack_000000a8 = *(undefined8 *)(unaff_x19 + 0x70);
      in_stack_000000a0 = *(undefined8 *)(unaff_x19 + 0x68);
      iStack00000000000000c4 = *(int *)(unaff_x19 + 0x8c) * 3;
      in_stack_000000c8 = uVar9;
      uVar5 = OculusSampleFramework_TrainCarBase__get_Scale(lVar8,1,&stack0x00000090);
      iStack0000000000000084 = *(int *)(unaff_x19 + 0x8c) * 3 + 1;
      in_stack_00000068 = in_stack_00000138;
      in_stack_00000060 = in_stack_00000130;
      in_stack_00000078 = in_stack_00000148;
      in_stack_00000070 = in_stack_00000140;
      in_stack_00000058 = in_stack_00000128;
      in_stack_00000050 = in_stack_00000120;
      uStack0000000000000080 = in_stack_00000150;
      in_stack_00000088 = uVar9;
      uVar6 = OculusSampleFramework_TrainCarBase__get_Scale(lVar8,2,&stack0x00000050);
      iStack0000000000000044 = *(int *)(unaff_x19 + 0x8c) + 1000000;
      in_stack_00000028 = in_stack_00000138;
      in_stack_00000020 = in_stack_00000130;
      in_stack_00000038 = in_stack_00000148;
      in_stack_00000030 = in_stack_00000140;
      in_stack_00000018 = in_stack_00000128;
      in_stack_00000010 = in_stack_00000120;
      uStack0000000000000040 = in_stack_00000150;
      in_stack_00000048 = uVar9;
      uVar7 = OculusSampleFramework_TrainCarBase__get_Scale(lVar8,3,&stack0x00000010);
      in_stack_000000e8 = *(undefined8 *)(unaff_x19 + 0x18);
      in_stack_000000e0 = *(undefined8 *)(unaff_x19 + 0x10);
      FUN_01fe5138(lVar8,uVar5);
      uVar9 = FUN_01fe31f8();
      FUN_01fe5138(lVar8,uVar6);
      uVar11 = FUN_01fe31f8();
      FUN_01fe5138(lVar8,uVar7);
      in_stack_00000110 = FUN_01fe31f8();
      in_stack_000000f8 = in_stack_000000e8;
      in_stack_000000f0 = in_stack_000000e0;
      in_stack_00000100 = uVar9;
      in_stack_00000108 = uVar11;
      auVar16 = FUN_02349e70(&stack0x000000f0,0,0,*(undefined8 *)puVar3);
      *(undefined1 (*) [16])(unaff_x19 + 0x28) = auVar16;
      FUN_01fe5138(lVar8,uVar5);
      FUN_01fe3594();
      FUN_01fe5138(lVar8,uVar6);
      FUN_01fe3594();
      FUN_01fe5138(lVar8,uVar7);
      FUN_01fe3594();
      if (*(long *)(unaff_x19 + 8) != 0) {
        if (*(int *)(*(long *)(unaff_x19 + 8) + 0x18) < 1) {
LAB_01fe4bb4:
          if (*(int *)(*unaff_x28 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          *(undefined4 *)(unaff_x19 + 0x20) = 3;
LAB_01fe4bcc:
          if (*(long *)(unaff_x27 + 0x28) == in_stack_00000158) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        lVar8 = FUN_01fe5138(lVar8,uVar6);
        puVar4 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__;
        puVar3 = Method_Oculus_Platform_Message<ProductList>_get_Data__;
        lVar13 = *(long *)(unaff_x19 + 8);
        if (lVar13 != 0) {
          lVar8 = *(long *)(lVar8 + 0x80);
          iVar15 = 0;
          do {
            iVar1 = *(int *)(lVar13 + 0x18);
            if (iVar1 <= iVar15) {
              *(undefined4 *)(lVar13 + 0x18) = 0;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (0 < iVar1) {
                FUN_0358d1e4(*(undefined8 *)(lVar13 + 0x10),0,iVar1,0);
              }
              goto LAB_01fe4bb4;
            }
            uStack00000000000000d0 = 0;
            uStack00000000000000d8 = 0;
            uStack00000000000000d0 = FUN_031bfff0(lVar13,iVar15,*(undefined8 *)puVar4);
            thunk_FUN_01f51358(&stack0x000000d0,uStack00000000000000d0);
            if (*(long *)(unaff_x19 + 8) == 0) break;
            FUN_031bfff0(*(long *)(unaff_x19 + 8),iVar15,*(undefined8 *)puVar4);
            uStack00000000000000d8 =
                 CONCAT44(uStack00000000000000d8._4_4_,(extraout_w1 & 1) << 4) | 10;
            if (lVar8 == 0) break;
            lVar13 = *(long *)(lVar8 + 0x10);
            lVar14 = *(long *)puVar3;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar13 == 0) break;
            uVar2 = *(uint *)(lVar8 + 0x18);
            if (uVar2 < *(uint *)(lVar13 + 0x18)) {
              lVar13 = lVar13 + (long)(int)uVar2 * 0x10;
              *(uint *)(lVar8 + 0x18) = uVar2 + 1;
              puVar12 = (undefined8 *)(lVar13 + 0x20);
              *puVar12 = uStack00000000000000d0;
              *(ulong *)(lVar13 + 0x28) = uStack00000000000000d8;
              thunk_FUN_01f51358(puVar12,0);
            }
            else {
              FUN_031baaa4(lVar8,uStack00000000000000d0,uStack00000000000000d8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            lVar13 = *(long *)(unaff_x19 + 8);
            iVar15 = iVar15 + 1;
          } while (lVar13 != 0);
        }
      }
    }
  }
LAB_01fe4b8c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


