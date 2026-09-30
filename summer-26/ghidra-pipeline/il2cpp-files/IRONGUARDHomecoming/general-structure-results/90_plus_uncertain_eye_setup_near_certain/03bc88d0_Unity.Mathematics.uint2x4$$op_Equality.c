/*
FUNCTION_NAME: Unity.Mathematics.uint2x4$$op_Equality
ENTRY_POINT: 03bc88d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03bc8d14) */
/* WARNING: Removing unreachable block (ram,0x03bc8d0c) */
/* WARNING: Removing unreachable block (ram,0x03bc8c5c) */

void Unity_Mathematics_uint2x4__op_Equality(long param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  int iVar18;
  long unaff_x22;
  undefined1 auVar19 [16];
  undefined4 in_stack_00000048;
  int iStack0000000000000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  int iStack00000000000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  
  puVar2 = StringLiteral_13393;
  if ((*(byte *)(unaff_x22 + 0x8fa) & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_12325);
    thunk_FUN_01efb3a4(StringLiteral_12330);
    thunk_FUN_01efb3a4(StringLiteral_13488);
    thunk_FUN_01efb3a4(StringLiteral_13489);
    thunk_FUN_01efb3a4(StringLiteral_12326);
    thunk_FUN_01efb3a4(StringLiteral_13397);
    thunk_FUN_01efb3a4(StringLiteral_13490);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(StringLiteral_13393);
    thunk_FUN_01efb3a4(StringLiteral_11600);
    thunk_FUN_01efb3a4(StringLiteral_13487);
    thunk_FUN_01efb3a4(StringLiteral_12036);
    *(undefined1 *)(unaff_x22 + 0x8fa) = 1;
  }
  in_stack_000000e0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000f8 = 0;
  _iStack00000000000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  in_stack_00000058 = 0;
  _iStack0000000000000050 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar9 = Unity_Mathematics_uint2__op_Division();
  if (((uVar9 & 1) != 0) && (*(char *)(param_1 + 0x58) == '\0')) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    _in_stack_00000110 = FUN_03bc45b8();
    lVar10 = FUN_02617b44(&stack0x00000110,0,*(undefined8 *)StringLiteral_13487);
    puVar2 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
    if (lVar10 == 0) {
LAB_03bc8d08:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar15 = *(undefined8 *)(lVar10 + 0x20);
    if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) ==
        0) {
      thunk_FUN_01ee6d7c();
    }
    uVar9 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                      (uVar15,0,0);
    if ((uVar9 & 1) == 0) {
      if (param_2 == 0) goto LAB_03bc8d08;
      uVar16 = *(undefined8 *)(param_2 + 0x78);
      plVar11 = (long *)FUN_03b2468c(0);
      FUN_03bc6720(&stack0x00000120);
      in_stack_000000f8 = in_stack_00000128;
      _iStack00000000000000f0 = in_stack_00000120;
      uVar15 = _iStack00000000000000f0;
      in_stack_00000108 = in_stack_00000138;
      in_stack_00000100 = in_stack_00000130;
      iStack00000000000000f0 = (int)in_stack_00000120;
      bVar1 = 1 < iStack00000000000000f0;
      _iStack00000000000000f0 = uVar15;
      if (bVar1) {
        uVar8 = FUN_02f1f6ac(&stack0x000000f0,uVar16,*(undefined8 *)StringLiteral_13488);
        FUN_02f1f950(&stack0x000000f0,0,uVar8,*(undefined8 *)StringLiteral_13489);
      }
      _in_stack_000000e0 = FUN_03bc4418(lVar10);
      puVar4 = StringLiteral_12325;
      puVar3 = StringLiteral_12036;
      if (0 < in_stack_000000e0._12_4_) {
        iVar18 = 0;
        do {
          uVar15 = FUN_02617b44(&stack0x000000e0,iVar18,*(undefined8 *)puVar3);
          FUN_02f1ef3c(&stack0x000000f0,uVar15,*(undefined8 *)puVar4);
          iVar18 = iVar18 + 1;
        } while (iVar18 < in_stack_000000e8._4_4_);
      }
      uVar7 = in_stack_00000108;
      uVar6 = in_stack_00000100;
      uVar5 = in_stack_000000f8;
      uVar15 = _iStack00000000000000f0;
      if (*(long *)(lVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      auVar19 = FUN_03b1eb20(*(long *)(lVar10 + 0x20),0);
      in_stack_00000128 = uVar5;
      in_stack_00000120 = uVar15;
      in_stack_00000138 = uVar7;
      in_stack_00000130 = uVar6;
      uVar9 = FUN_02357418(&stack0x00000120,auVar19._0_8_,auVar19._8_8_,&stack0x000000c8,
                           &stack0x00000070,uVar16,0,*(undefined8 *)StringLiteral_13490);
      if ((uVar9 & 1) != 0) {
        puVar17 = (undefined4 *)(lVar10 + 0xa0);
        in_stack_00000048 = *puVar17;
        uVar9 = FUN_03bc368c(&stack0x00000048);
        if ((uVar9 & 1) != 0) {
          in_stack_00000048 = *puVar17;
          FUN_03bc6118(&stack0x00000048);
        }
        FUN_03b562c4(&stack0x00000120,&stack0x00000070,0);
        puVar3 = StringLiteral_13397;
        in_stack_00000058 = in_stack_00000128;
        _iStack0000000000000050 = in_stack_00000120;
        uVar15 = _iStack0000000000000050;
        in_stack_00000068 = in_stack_00000138;
        in_stack_00000060 = in_stack_00000130;
        iStack0000000000000050 = (int)in_stack_00000120;
        bVar1 = 0 < iStack0000000000000050;
        _iStack0000000000000050 = uVar15;
        if (bVar1) {
          iVar18 = 0;
          do {
            uVar15 = FUN_02f1e6dc(&stack0x00000050,iVar18,*(undefined8 *)puVar3);
            uVar8 = FUN_03bc6388(uVar15,*puVar17,0);
            *puVar17 = uVar8;
            if ((uVar9 & 1) == 0) {
              uVar15 = FUN_03bc2564(lVar10);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar12 = FUN_04073094(uVar15,0,0);
              if ((uVar12 & 1) != 0) {
                uVar15 = FUN_03bc2564(lVar10);
                FUN_03bc6898(puVar17,uVar15);
              }
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < iStack0000000000000050);
        }
        in_stack_00000048 = *puVar17;
        Unity_Mathematics_uint2x3__op_Equality(&stack0x00000048);
        FUN_03b5656c(&stack0x00000070,0);
      }
      FUN_02f1fbf0(&stack0x000000f0,*(undefined8 *)StringLiteral_12330);
      if (plVar11 != (long *)0x0) {
        lVar10 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar13 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_03bc8cdc;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar13 = (undefined8 *)
                  FUN_01ecb238(plVar11,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                               ,0);
LAB_03bc8cdc:
        (*(code *)*puVar13)(plVar11,puVar13[1]);
      }
    }
  }
  return;
}


