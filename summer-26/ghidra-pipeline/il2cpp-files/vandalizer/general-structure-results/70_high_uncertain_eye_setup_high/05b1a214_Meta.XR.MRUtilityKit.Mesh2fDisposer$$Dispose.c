/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.Mesh2fDisposer$$Dispose
ENTRY_POINT: 05b1a214
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_Mesh2fDisposer__Dispose(long *param_1,long param_2)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x21;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined4 uStack0000000000000094;
  undefined4 in_stack_00000098;
  
  if ((*(byte *)(unaff_x21 + 0xf6d) & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075a9098);
    *(undefined1 *)(unaff_x21 + 0xf6d) = 1;
  }
  if (*(int *)((long)param_1 + 0xc) != 0) {
    if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(int *)((long)param_1 + 0xc) != *(int *)(*param_1 + 0x20) + 1) goto LAB_05b1a260;
  }
  FUN_05e22a2c(0);
LAB_05b1a260:
  iVar1 = *(int *)((long)param_1 + 0x34);
  if ((*(byte *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  uVar7 = (undefined4)param_1[2];
  uVar6 = *(undefined4 *)((long)param_1 + 0x14);
  uVar5 = (undefined4)param_1[3];
  if (iVar1 == 1) {
    lVar3 = *(long *)(param_2 + 0x20);
    uStack0000000000000090 = uVar7;
    uStack0000000000000094 = uVar6;
    in_stack_00000098 = uVar5;
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28),&stack0x00000090);
    lVar3 = *(long *)(param_2 + 0x20);
    uVar2 = *(ushort *)(lVar3 + 0x135);
    if ((uVar2 & 1) == 0) {
      FUN_0322bef4(lVar3);
      lVar3 = *(long *)(param_2 + 0x20);
      uVar2 = *(ushort *)(lVar3 + 0x135);
    }
    in_stack_00000060 = *(undefined8 *)((long)param_1 + 0x2c);
    in_stack_00000058 = *(undefined8 *)((long)param_1 + 0x24);
    in_stack_00000050 = *(undefined8 *)((long)param_1 + 0x1c);
    if ((uVar2 & 1) == 0) {
      lVar3 = FUN_0322bef4(lVar3);
    }
    thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x30),&stack0x00000050);
    FUN_05da3e28();
    in_stack_00000088 = 0;
    in_stack_00000080 = 0;
    uVar4 = *(undefined8 *)PTR_DAT_075a9098;
  }
  else {
    uVar2 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
    if ((uVar2 & 1) == 0) {
      FUN_0322bef4();
      uVar2 = *(ushort *)(*(long *)(param_2 + 0x20) + 0x135);
    }
    in_stack_00000070 = 0;
    in_stack_00000058 = 0;
    in_stack_00000050 = 0;
    in_stack_00000068 = 0;
    in_stack_00000060 = 0;
    if ((uVar2 & 1) == 0) {
      FUN_0322bef4();
    }
    FUN_045e51a8(uVar7,uVar6,uVar5,&stack0x00000050);
    lVar3 = *(long *)(param_2 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x10);
  }
  thunk_FUN_0322ed78(uVar4);
  return;
}


