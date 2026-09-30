/*
FUNCTION_NAME: UnityEngine.Animations.AnimationPosePlayable$$Equals
ENTRY_POINT: 037e83b8
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


undefined8 UnityEngine_Animations_AnimationPosePlayable__Equals(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  int iVar9;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  uVar5 = FUN_02ee6670(in_stack_00000048);
  puVar1 = StringLiteral_2840;
  if ((uVar5 & 1) == 0) {
    in_stack_00000080 = FUN_037e8a64();
  }
  else {
    lVar6 = *(long *)StringLiteral_2840;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar6 = *(long *)puVar1;
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
    in_stack_00000080 = uVar7;
    in_stack_00000088 = uVar10;
    FUN_024120b4(&stack0x00000028,&stack0x00000090,*unaff_x28);
    in_stack_00000048 = in_stack_00000030;
    in_stack_00000040 = in_stack_00000028;
    in_stack_00000050 = in_stack_00000038;
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    auVar11 = FUN_037e8748();
    _in_stack_00000080 = FUN_037d0118(uVar7,uVar10,auVar11._0_8_,auVar11._8_8_,0);
    uVar5 = FUN_037cfc00(&stack0x00000080,0);
    puVar1 = PTR_DAT_03da4d88;
    uVar10 = in_stack_00000088;
    uVar7 = in_stack_00000080;
    if ((uVar5 & 1) == 0) {
      if (in_stack_00000078 != 0) {
        Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
                  (&stack0x00000040,in_stack_00000078,0,*(undefined8 *)PTR_DAT_03da4d88);
        auVar11 = FUN_037e8a64();
        if (*(int *)(*(long *)StringLiteral_2840 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        auVar11 = FUN_037d0118(uVar7,uVar10,auVar11._0_8_,auVar11._8_8_,0);
        _in_stack_00000080 = auVar11;
        uVar5 = FUN_037cfc00(&stack0x00000080,0);
        if ((uVar5 & 1) != 0) {
          return in_stack_00000080;
        }
        if (in_stack_00000078 != 0) {
          iVar9 = 1;
          do {
            puVar2 = PTR_DAT_03da3b30;
            if (*(int *)(in_stack_00000078 + 0x18) <= iVar9) {
              if (*(int *)(*(long *)PTR_DAT_03da3b30 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar5 = FUN_037e8eb0();
              puVar3 = PTR_DAT_03da43c8;
              puVar1 = StringLiteral_2840;
              if ((uVar5 & 1) != 0) {
                lVar6 = FUN_037d1cd0();
                lVar8 = *(long *)puVar2;
                if (*(int *)(lVar8 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(lVar8);
                }
                if (lVar6 == 0) break;
                lVar6 = FUN_025bc544(lVar6,*(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10)
                                     ,*(undefined8 *)puVar3);
                if (lVar6 == 0) break;
                uVar7 = FUN_037d0f0c(lVar6,0);
                uVar4 = FUN_0303e194(uVar7,0);
                if (*(long *)(unaff_x20 + 0x28) == 0) break;
                FUN_037e8f68(*(long *)(unaff_x20 + 0x28),uVar4,*unaff_x21);
              }
              _in_stack_00000040 = _in_stack_00000080;
              uVar7 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&stack0x00000040);
              thunk_FUN_01acfdbc(uVar7,0);
              goto LAB_037e8670;
            }
            Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
                      (&stack0x00000040,in_stack_00000078,iVar9,*(undefined8 *)puVar1);
            in_stack_00000068 = in_stack_00000048;
            in_stack_00000060 = in_stack_00000040;
            in_stack_00000070 = in_stack_00000050;
            uVar7 = FUN_037e8dfc(&stack0x00000060,*unaff_x21);
            *unaff_x21 = uVar7;
            thunk_FUN_01b4f09c();
            iVar9 = iVar9 + 1;
          } while (in_stack_00000078 != 0);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
LAB_037e8670:
    uVar7 = FUN_037e5658();
    *unaff_x19 = uVar7;
    thunk_FUN_01b4f09c();
  }
  return in_stack_00000080;
}


