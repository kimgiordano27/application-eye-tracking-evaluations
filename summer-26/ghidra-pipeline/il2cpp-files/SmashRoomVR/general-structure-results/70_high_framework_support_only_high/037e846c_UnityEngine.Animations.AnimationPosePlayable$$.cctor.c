/*
FUNCTION_NAME: UnityEngine.Animations.AnimationPosePlayable$$.cctor
ENTRY_POINT: 037e846c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] UnityEngine_Animations_AnimationPosePlayable___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  int iVar10;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  uVar6 = FUN_037cfc00();
  uVar4 = in_stack_00000088;
  uVar8 = in_stack_00000080;
  puVar1 = PTR_DAT_03da4d88;
  if ((uVar6 & 1) != 0) {
LAB_037e8670:
    uVar8 = FUN_037e5658();
    *unaff_x19 = uVar8;
    thunk_FUN_01b4f09c();
    return _in_stack_00000080;
  }
  if (in_stack_00000078 != 0) {
    Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
              (&stack0x00000040,in_stack_00000078,0,*(undefined8 *)PTR_DAT_03da4d88);
    auVar11 = FUN_037e8a64();
    if (*(int *)(*(long *)StringLiteral_2840 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    _in_stack_00000080 = FUN_037d0118(uVar8,uVar4,auVar11._0_8_,auVar11._8_8_,0);
    uVar6 = FUN_037cfc00(&stack0x00000080,0);
    if ((uVar6 & 1) != 0) {
      return _in_stack_00000080;
    }
    if (in_stack_00000078 != 0) {
      iVar10 = 1;
      do {
        puVar2 = PTR_DAT_03da3b30;
        if (*(int *)(in_stack_00000078 + 0x18) <= iVar10) {
          if (*(int *)(*(long *)PTR_DAT_03da3b30 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar6 = FUN_037e8eb0();
          puVar3 = PTR_DAT_03da43c8;
          puVar1 = StringLiteral_2840;
          if ((uVar6 & 1) != 0) {
            lVar7 = FUN_037d1cd0();
            lVar9 = *(long *)puVar2;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01ac7298(lVar9);
            }
            if (lVar7 == 0) break;
            lVar7 = FUN_025bc544(lVar7,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10),
                                 *(undefined8 *)puVar3);
            if (lVar7 == 0) break;
            uVar8 = FUN_037d0f0c(lVar7,0);
            uVar5 = FUN_0303e194(uVar8,0);
            if (*(long *)(unaff_x20 + 0x28) == 0) break;
            FUN_037e8f68(*(long *)(unaff_x20 + 0x28),uVar5,*unaff_x21);
          }
          _in_stack_00000040 = _in_stack_00000080;
          uVar8 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&stack0x00000040);
          thunk_FUN_01acfdbc(uVar8,0);
          goto LAB_037e8670;
        }
        Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
                  (&stack0x00000040,in_stack_00000078,iVar10,*(undefined8 *)puVar1);
        in_stack_00000068 = in_stack_00000048;
        in_stack_00000060 = in_stack_00000040;
        in_stack_00000070 = in_stack_00000050;
        uVar8 = FUN_037e8dfc(&stack0x00000060,*unaff_x21);
        *unaff_x21 = uVar8;
        thunk_FUN_01b4f09c();
        iVar10 = iVar10 + 1;
      } while (in_stack_00000078 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


