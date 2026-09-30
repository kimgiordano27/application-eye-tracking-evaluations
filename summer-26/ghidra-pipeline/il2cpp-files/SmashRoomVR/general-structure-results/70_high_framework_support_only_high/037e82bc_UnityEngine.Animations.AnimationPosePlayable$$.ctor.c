/*
FUNCTION_NAME: UnityEngine.Animations.AnimationPosePlayable$$.ctor
ENTRY_POINT: 037e82bc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 UnityEngine_Animations_AnimationPosePlayable___ctor(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  int iVar10;
  long unaff_x25;
  long *unaff_x26;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  char cStack0000000000000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  thunk_FUN_01ad9084(PTR_DAT_03da3b30);
  thunk_FUN_01ad9084(PTR_DAT_03da4ce8);
  *(undefined1 *)(unaff_x25 + 0x215) = 1;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000098 = 0;
  _cStack0000000000000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_037e8690();
  if ((uVar6 & 1) == 0) goto LAB_037e8480;
  if (unaff_x22 != 0) {
    lVar7 = FUN_037d1cd0();
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*unaff_x26);
    }
    if (lVar7 != 0) {
      lVar7 = FUN_025bc544(lVar7,*(undefined8 *)(*(long *)(*unaff_x26 + 0xb8) + 0x20),
                           *(undefined8 *)PTR_DAT_03da43c8);
      if (lVar7 != 0) {
        uVar8 = FUN_037d0f0c(lVar7,0);
        puVar3 = PTR_DAT_03da4ce8;
        if (*(int *)(*(long *)PTR_DAT_03da4ce8 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)PTR_DAT_03da4ce8);
        }
        FUN_037e71a4(&stack0x00000040);
        puVar4 = PTR_DAT_03da4ce0;
        in_stack_00000098 = in_stack_00000048;
        _cStack0000000000000090 = in_stack_00000040;
        uVar11 = _cStack0000000000000090;
        in_stack_000000a8 = in_stack_00000058;
        in_stack_000000a0 = in_stack_00000050;
        cStack0000000000000090 = (char)in_stack_00000040;
        bVar1 = cStack0000000000000090 != '\0';
        _cStack0000000000000090 = uVar11;
        if (bVar1) {
          FUN_024120b4(&stack0x00000040,&stack0x00000090,*(undefined8 *)PTR_DAT_03da4ce0);
          uVar6 = FUN_02ee6670(in_stack_00000048,uVar8,0);
          puVar2 = StringLiteral_2840;
          if ((uVar6 & 1) != 0) {
            lVar7 = *(long *)StringLiteral_2840;
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar7 = *(long *)puVar2;
            }
            uVar12 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
            uVar11 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
            in_stack_00000080 = uVar11;
            in_stack_00000088 = uVar12;
            FUN_024120b4(&stack0x00000028,&stack0x00000090,*(undefined8 *)puVar4);
            in_stack_00000048 = in_stack_00000030;
            in_stack_00000040 = in_stack_00000028;
            in_stack_00000050 = in_stack_00000038;
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            in_stack_00000018 = in_stack_00000048;
            in_stack_00000010 = in_stack_00000040;
            in_stack_00000020 = in_stack_00000050;
            auVar13 = FUN_037e8748(uVar8,&stack0x00000010,&stack0x00000078);
            _in_stack_00000080 = FUN_037d0118(uVar11,uVar12,auVar13._0_8_,auVar13._8_8_,0);
            uVar6 = FUN_037cfc00(&stack0x00000080,0);
            puVar3 = PTR_DAT_03da4d88;
            uVar11 = in_stack_00000088;
            uVar8 = in_stack_00000080;
            if ((uVar6 & 1) != 0) {
LAB_037e8670:
              uVar8 = FUN_037e5658();
              *unaff_x19 = uVar8;
              thunk_FUN_01b4f09c();
              return in_stack_00000080;
            }
            if (in_stack_00000078 != 0) {
              Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
                        (&stack0x00000040,in_stack_00000078,0,*(undefined8 *)PTR_DAT_03da4d88);
              auVar13 = FUN_037e8a64();
              if (*(int *)(*(long *)StringLiteral_2840 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              auVar13 = FUN_037d0118(uVar8,uVar11,auVar13._0_8_,auVar13._8_8_,0);
              _in_stack_00000080 = auVar13;
              uVar6 = FUN_037cfc00(&stack0x00000080,0);
              if ((uVar6 & 1) != 0) {
                return in_stack_00000080;
              }
              if (in_stack_00000078 != 0) {
                iVar10 = 1;
                do {
                  puVar4 = PTR_DAT_03da3b30;
                  if (*(int *)(in_stack_00000078 + 0x18) <= iVar10) {
                    if (*(int *)(*(long *)PTR_DAT_03da3b30 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar6 = FUN_037e8eb0();
                    puVar2 = PTR_DAT_03da43c8;
                    puVar3 = StringLiteral_2840;
                    if ((uVar6 & 1) != 0) {
                      lVar7 = FUN_037d1cd0();
                      lVar9 = *(long *)puVar4;
                      if (*(int *)(lVar9 + 0xe0) == 0) {
                        thunk_FUN_01ac7298(lVar9);
                      }
                      if (lVar7 == 0) break;
                      lVar7 = FUN_025bc544(lVar7,*(undefined8 *)
                                                  (*(long *)(*(long *)puVar4 + 0xb8) + 0x10),
                                           *(undefined8 *)puVar2);
                      if (lVar7 == 0) break;
                      uVar8 = FUN_037d0f0c(lVar7,0);
                      uVar5 = FUN_0303e194(uVar8,0);
                      if (*(long *)(unaff_x20 + 0x28) == 0) break;
                      FUN_037e8f68(*(long *)(unaff_x20 + 0x28),uVar5,*unaff_x21);
                    }
                    _in_stack_00000040 = _in_stack_00000080;
                    uVar8 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&stack0x00000040);
                    thunk_FUN_01acfdbc(uVar8,0);
                    goto LAB_037e8670;
                  }
                  Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy
                            (&stack0x00000040,in_stack_00000078,iVar10,*(undefined8 *)puVar3);
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
            goto LAB_037e868c;
          }
        }
LAB_037e8480:
        uVar8 = FUN_037e8a64();
        return uVar8;
      }
    }
  }
LAB_037e868c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


