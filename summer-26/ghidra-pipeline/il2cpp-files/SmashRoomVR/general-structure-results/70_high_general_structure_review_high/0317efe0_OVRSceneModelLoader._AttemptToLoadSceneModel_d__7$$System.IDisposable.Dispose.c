/*
FUNCTION_NAME: OVRSceneModelLoader.<AttemptToLoadSceneModel>d__7$$System.IDisposable.Dispose
ENTRY_POINT: 0317efe0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void OVRSceneModelLoader_<AttemptToLoadSceneModel>d__7__System_IDisposable_Dispose(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  int *unaff_x20;
  long *unaff_x21;
  undefined8 uVar14;
  long unaff_x23;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined4 uStack0000000000000108;
  undefined4 uStack000000000000010c;
  undefined4 uStack0000000000000110;
  undefined8 uStack0000000000000114;
  undefined8 in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined4 uStack000000000000012c;
  undefined4 in_stack_00000130;
  undefined4 uStack0000000000000134;
  undefined4 in_stack_00000138;
  undefined4 uStack000000000000013c;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  
  thunk_FUN_01ad9084(*(undefined8 *)(param_1 + 0xde0));
  thunk_FUN_01ad9084(PTR_DAT_03d80de8);
  thunk_FUN_01ad9084(PTR_DAT_03d80d88);
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  thunk_FUN_01ad9084(PTR_DAT_03d80df0);
  thunk_FUN_01ad9084(PTR_DAT_03d80dd8);
  *(undefined1 *)(unaff_x23 + 0x1cd) = 1;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000b8 = *(undefined8 *)(unaff_x20 + 6);
  in_stack_000000b0 = *(undefined8 *)(unaff_x20 + 4);
  in_stack_000000c8 = *(undefined8 *)(unaff_x20 + 10);
  in_stack_000000c0 = *(undefined8 *)(unaff_x20 + 8);
  in_stack_000000a8 = *(undefined8 *)(unaff_x20 + 2);
  in_stack_000000a0 = *(undefined8 *)unaff_x20;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_00000128 = (undefined4)in_stack_000000a8;
  uStack000000000000012c = (undefined4)((ulong)in_stack_000000a8 >> 0x20);
  in_stack_00000138 = (undefined4)in_stack_000000b8;
  uStack000000000000013c = (undefined4)((ulong)in_stack_000000b8 >> 0x20);
  in_stack_00000130 = (undefined4)in_stack_000000b0;
  uStack0000000000000134 = (undefined4)((ulong)in_stack_000000b0 >> 0x20);
  in_stack_00000120 = in_stack_000000a0;
  in_stack_00000140 = in_stack_000000c0;
  in_stack_00000148 = in_stack_000000c8;
  FUN_02d78418();
  uVar14 = *(undefined8 *)(unaff_x19 + 0xd0);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar9 = FUN_03922f24(uVar14,0,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0xd0) != 0) {
    if (*(char *)(*(long *)(unaff_x19 + 0xd0) + 0xd8) == '\0') {
      return;
    }
    iVar1 = *unaff_x20;
    iVar7 = FUN_029bc358();
    if (iVar1 == iVar7) {
      return;
    }
    if ((unaff_x20[1] & 0xfffffffeU) != 2) {
      return;
    }
    FUN_0317ebfc(&stack0x00000080);
    *(undefined8 *)(unaff_x19 + 0x1b8) = uStack0000000000000094;
    *(ulong *)(unaff_x19 + 0x1b0) = CONCAT44(uStack0000000000000090,uStack000000000000008c);
    *(ulong *)(unaff_x19 + 0x1ac) = CONCAT44(uStack000000000000008c,uStack0000000000000088);
    *(undefined8 *)(unaff_x19 + 0x1a4) = in_stack_00000080;
    FUN_0317f23c();
    FUN_0317f308();
    uVar14 = FUN_0317ed0c();
    *(undefined8 *)(unaff_x19 + 0x178) = uVar14;
    thunk_FUN_01b4f09c(unaff_x19 + 0x178);
    FUN_03186adc(&stack0x00000120);
    uStack0000000000000114 = CONCAT44(in_stack_00000138,uStack0000000000000134);
    uStack0000000000000108 = in_stack_00000128;
    in_stack_00000100 = in_stack_00000120;
    uStack000000000000010c = uStack000000000000012c;
    uStack0000000000000110 = in_stack_00000130;
    uVar8 = FUN_029bc358();
    uStack0000000000000068 = uStack0000000000000108;
    in_stack_00000060 = in_stack_00000100;
    uStack0000000000000074 = uStack0000000000000114;
    uStack000000000000006c = uStack000000000000010c;
    uStack0000000000000070 = uStack0000000000000110;
    FUN_0311db10(&stack0x000000d0,uVar8,4,&stack0x00000060,*(undefined8 *)(unaff_x19 + 0x108),0);
    uVar6 = in_stack_000000f8;
    uVar5 = in_stack_000000f0;
    uVar4 = in_stack_000000e8;
    uVar3 = in_stack_000000e0;
    uVar2 = in_stack_000000d8;
    uVar14 = in_stack_000000d0;
    if ((*(long *)(unaff_x19 + 0xd0) != 0) &&
       (plVar13 = *(long **)(*(long *)(unaff_x19 + 0xd0) + 0xb8), plVar13 != (long *)0x0)) {
      lVar11 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_3876) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0317f1fc;
          }
          uVar9 = uVar9 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar9 != 0);
      }
      puVar10 = (undefined8 *)FUN_01ae9f78(plVar13,*(long *)StringLiteral_3876,0);
LAB_0317f1fc:
      in_stack_00000128 = (undefined4)uVar2;
      uStack000000000000012c = (undefined4)((ulong)uVar2 >> 0x20);
      in_stack_00000120 = uVar14;
      in_stack_00000138 = (undefined4)uVar4;
      uStack000000000000013c = (undefined4)((ulong)uVar4 >> 0x20);
      in_stack_00000130 = (undefined4)uVar3;
      uStack0000000000000134 = (undefined4)((ulong)uVar3 >> 0x20);
      in_stack_00000148 = uVar6;
      in_stack_00000140 = uVar5;
      (*(code *)*puVar10)(plVar13,&stack0x00000120,puVar10[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


