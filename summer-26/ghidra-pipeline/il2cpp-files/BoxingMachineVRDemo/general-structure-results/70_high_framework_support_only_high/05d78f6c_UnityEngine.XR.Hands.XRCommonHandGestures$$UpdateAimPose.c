/*
FUNCTION_NAME: UnityEngine.XR.Hands.XRCommonHandGestures$$UpdateAimPose
ENTRY_POINT: 05d78f6c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined1  [16] UnityEngine_XR_Hands_XRCommonHandGestures__UpdateAimPose(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char in_NG;
  char in_OV;
  short sVar4;
  long lVar5;
  int in_w8;
  int iVar6;
  long lVar7;
  long lVar8;
  long *unaff_x19;
  long unaff_x20;
  undefined1 auVar9 [16];
  undefined8 in_stack_00000008;
  
  if (in_NG == in_OV) {
    *unaff_x19 = 0;
    thunk_FUN_02dd37b4();
LAB_05d791dc:
    auVar9 = FUN_05d77744();
    return auVar9;
  }
  *(int *)(unaff_x20 + 0x18) = in_w8 + 1;
  FUN_05d77a0c();
  lVar5 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Nullable<Guid>_GetValueOrDefault__);
  FUN_03aabc60(lVar5,*(undefined8 *)Method_System_Nullable<OVRPlugin_Result>__ctor__);
  puVar3 = Method_System_Nullable<Guid>__ctor__;
  puVar2 = PTR_DAT_067693b8;
  while( true ) {
    do {
      iVar6 = *(int *)(unaff_x20 + 0x18);
      do {
        if (iVar6 < 0) goto LAB_05d791c4;
        if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_05d79224;
        if (*(int *)(*(long *)(unaff_x20 + 0x20) + 0x10) <= iVar6) goto LAB_05d7911c;
        sVar4 = FUN_05d779e4();
        if (sVar4 == 0x5d) {
          iVar6 = *(int *)(unaff_x20 + 0x18);
          goto LAB_05d79118;
        }
        auVar9 = FUN_05d79228();
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if ((auVar9._0_8_ & 0xff) == 0) {
          *unaff_x19 = 0;
          thunk_FUN_02dd37b4();
          return auVar9;
        }
        if (lVar5 == 0) goto LAB_05d79224;
        lVar7 = *(long *)(lVar5 + 0x10);
        lVar8 = *(long *)puVar3;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_05d79224;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000008;
          thunk_FUN_02dd37b4();
        }
        else {
          FUN_03aac494(lVar5,in_stack_00000008,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        FUN_05d77a0c();
        iVar6 = *(int *)(unaff_x20 + 0x18);
      } while (iVar6 < 0);
      if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_05d79224;
    } while ((*(int *)(*(long *)(unaff_x20 + 0x20) + 0x10) <= iVar6) ||
            (sVar4 = FUN_05d779e4(), sVar4 != 0x2c));
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_05d79224;
    iVar6 = *(int *)(unaff_x20 + 0x18);
    if (*(int *)(*(long *)(unaff_x20 + 0x20) + 0x10) <= iVar6) break;
    *(int *)(unaff_x20 + 0x18) = iVar6 + 1;
    FUN_05d77a0c();
  }
LAB_05d79118:
  if (-1 < iVar6) {
LAB_05d7911c:
    if (*(long *)(unaff_x20 + 0x20) == 0) {
LAB_05d79224:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if ((iVar6 < *(int *)(*(long *)(unaff_x20 + 0x20) + 0x10)) &&
       (sVar4 = FUN_05d779e4(), sVar4 == 0x5d)) {
      if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_05d79224;
      if (*(int *)(unaff_x20 + 0x18) < *(int *)(*(long *)(unaff_x20 + 0x20) + 0x10)) {
        *(int *)(unaff_x20 + 0x18) = *(int *)(unaff_x20 + 0x18) + 1;
        lVar7 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676ba80);
        FUN_0504920c(lVar7,0);
        *(long *)(lVar7 + 0x10) = lVar5;
        thunk_FUN_02dd37b4((long *)(lVar7 + 0x10),lVar5);
        *unaff_x19 = lVar7;
        thunk_FUN_02dd37b4();
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar5 = *(long *)puVar2;
        }
        return *(undefined1 (*) [16])(*(long *)(lVar5 + 0xb8) + 8);
      }
    }
  }
LAB_05d791c4:
  *unaff_x19 = 0;
  thunk_FUN_02dd37b4();
  goto LAB_05d791dc;
}


