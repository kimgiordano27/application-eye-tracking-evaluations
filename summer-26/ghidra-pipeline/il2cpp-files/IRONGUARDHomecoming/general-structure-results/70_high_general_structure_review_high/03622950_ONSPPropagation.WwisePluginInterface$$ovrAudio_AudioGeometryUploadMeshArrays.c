/*
FUNCTION_NAME: ONSPPropagation.WwisePluginInterface$$ovrAudio_AudioGeometryUploadMeshArrays
ENTRY_POINT: 03622950
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void ONSPPropagation_WwisePluginInterface__ovrAudio_AudioGeometryUploadMeshArrays(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long *plVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  ulong in_stack_00000030;
  uint uStack0000000000000038;
  uint uStack000000000000003c;
  undefined4 uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  undefined4 uStack000000000000004c;
  long in_stack_00000050;
  char cStack0000000000000058;
  char cStack0000000000000059;
  long in_stack_00000060;
  undefined4 in_stack_00000068;
  uint uStack000000000000007c;
  ulong in_stack_00000080;
  uint uStack0000000000000088;
  uint uStack000000000000008c;
  undefined4 uStack0000000000000090;
  uint uStack0000000000000094;
  uint in_stack_00000098;
  ulong in_stack_000000a0;
  undefined8 in_stack_000000a8;
  uint uStack00000000000000b0;
  undefined4 in_stack_000000c0;
  uint uStack00000000000000c4;
  uint uStack00000000000000c8;
  uint uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  uint uStack00000000000000d4;
  uint in_stack_000000d8;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xcc0));
  thunk_FUN_01efb3a4(Method_Oculus_Interaction_Input_HandPhysicsCapsules_<>c_<_ctor>b__39_0__);
  thunk_FUN_01efb3a4(Method_Gameplay_Hands_HandPositionController_<>c_<Update>b__32_0__);
  thunk_FUN_01efb3a4(Method_Gameplay_Hands_HandPositionController_<>c_<Update>b__32_1__);
  thunk_FUN_01efb3a4(
                    Method_Oculus_Interaction_PoseDetection_Debug_HandShapeDebugVisual_<>c_<Start>b__15_0__
                    );
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_73__);
  *(undefined1 *)(unaff_x20 + 0xa45) = 1;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  _uStack00000000000000b0 = 0;
  uStack000000000000007c = 0;
  plVar12 = *(long **)(unaff_x19 + 0x50);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_73__) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_03622a08;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar12,*(long *)
                                   Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_73__
                          ,1);
LAB_03622a08:
    (*(code *)*puVar8)(&stack0x00000030,plVar12,puVar8[1]);
    uVar6 = in_stack_00000068;
    lVar5 = in_stack_00000060;
    lVar9 = in_stack_00000050;
    uVar18 = uStack0000000000000048;
    uStack00000000000000c4 = uStack0000000000000044;
    uVar16 = uStack0000000000000040;
    uVar7 = uStack000000000000003c;
    uVar4 = uStack0000000000000038;
    if (cStack0000000000000058 == '\0') {
      return;
    }
    if (*(long *)(unaff_x19 + 0x70) != 0) {
      uVar19 = in_stack_00000030 & 0xffffffff;
      uVar10 = in_stack_00000030 >> 0x20;
      *(undefined8 *)(*(long *)(unaff_x19 + 0x70) + 0x10) = *(undefined8 *)(unaff_x19 + 0x78);
      thunk_FUN_01f51358();
      lVar13 = *(long *)(unaff_x19 + 0x70);
      if (lVar13 != 0) {
        *(undefined4 *)(lVar13 + 0x48) = uVar6;
        *(undefined1 *)(lVar13 + 0x38) = 1;
        *(bool *)(lVar13 + 0x39) = cStack0000000000000059 != '\0';
        *(undefined4 *)(lVar13 + 0x34) = uStack000000000000004c;
        in_stack_000000c0 = FUN_0373bcbc(uVar16,0);
        uStack00000000000000c8 = uVar18;
        uVar16 = (int)uVar10;
        uStack00000000000000d4 = uVar4;
        uStack00000000000000cc = FUN_0373bf6c(uVar19,0);
        in_stack_000000d8 = uVar7;
        uStack00000000000000d0 = uVar16;
        *(ulong *)(lVar13 + 0x2c) = CONCAT44(in_stack_000000d8,uStack00000000000000d4);
        *(ulong *)(lVar13 + 0x24) = CONCAT44(uStack00000000000000d0,uStack00000000000000cc);
        *(ulong *)(lVar13 + 0x20) = CONCAT44(uStack00000000000000cc,uStack00000000000000c8);
        *(ulong *)(lVar13 + 0x18) = CONCAT44(uStack00000000000000c4,in_stack_000000c0);
        if ((*(long *)(unaff_x19 + 0x78) != 0) &&
           (plVar12 = *(long **)(*(long *)(unaff_x19 + 0x78) + 0x18), plVar12 != (long *)0x0)) {
          lVar13 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) ==
                  *(long *)
                   Method_Oculus_Interaction_PoseDetection_Debug_HandShapeDebugVisual_<>c_<Start>b__15_0__
                 ) {
                puVar8 = (undefined8 *)(lVar13 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_03622b30;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar8 = (undefined8 *)
                   FUN_01ecb238(plVar12,*(long *)
                                         Method_Oculus_Interaction_PoseDetection_Debug_HandShapeDebugVisual_<>c_<Start>b__15_0__
                                ,1);
LAB_03622b30:
          puVar3 = Method_Gameplay_Hands_HandPositionController_<>c_<Update>b__32_0__;
          puVar2 = Method_Oculus_Interaction_HandGrab_HandGrabUseInteractor_<>c_<_ctor>b__58_0__;
          (*(code *)*puVar8)(&stack0x00000030,plVar12,puVar8[1]);
          in_stack_000000a8 = CONCAT44(uStack000000000000003c,uStack0000000000000038);
          _uStack00000000000000b0 = CONCAT44(uStack0000000000000044,uStack0000000000000040);
          in_stack_000000a0 = in_stack_00000030;
          while( true ) {
            uVar10 = FUN_02c74e90(&stack0x000000a0,*(undefined8 *)puVar3);
            if ((uVar10 & 1) == 0) {
              FUN_02c74e8c(&stack0x000000a0,
                           *(undefined8 *)
                            Method_Oculus_Interaction_Input_HandPhysicsCapsules_<>c_<_ctor>b__39_0__
                          );
              return;
            }
            uStack0000000000000088 = 0;
            uStack000000000000008c = 0;
            uStack0000000000000090 = 0;
            uStack0000000000000094 = 0;
            in_stack_00000080 = 0;
            in_stack_00000098 = 0;
            uVar4 = uStack00000000000000b0;
            lVar13 = (long)(int)uStack00000000000000b0;
            if (*(long *)(unaff_x19 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar10 = FUN_029ce2c4(*(long *)(unaff_x19 + 0x78),_uStack00000000000000b0 & 0xffffffff,
                                  &stack0x0000007c,*(undefined8 *)puVar2);
            uVar7 = uStack000000000000007c;
            if ((uVar10 & 1) != 0) {
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar14 = (long)(int)uStack000000000000007c;
              if (*(uint *)(lVar9 + 0x18) <= uStack000000000000007c) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              lVar1 = lVar9 + lVar14 * 0x10;
              uVar18 = 0;
              uVar17 = 0;
              uVar16 = 0;
              uVar15 = 0;
              if ((*(uint *)(lVar1 + 0x2c) & 0x7fffffff) < 0x7f800001) {
                uVar16 = *(undefined4 *)(lVar1 + 0x24);
                uVar17 = *(uint *)(lVar1 + 0x28);
                uVar18 = *(uint *)(lVar1 + 0x2c);
                uVar15 = FUN_0373bf6c(*(undefined4 *)(lVar1 + 0x20),0);
              }
              uStack00000000000000cc = uVar15;
              uStack00000000000000d0 = uVar16;
              uStack00000000000000d4 = uVar17;
              in_stack_000000d8 = uVar18;
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if (*(uint *)(lVar5 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              lVar14 = lVar5 + lVar14 * 0xc;
              uVar7 = *(uint *)(lVar14 + 0x24);
              uVar18 = *(uint *)(lVar14 + 0x28);
              in_stack_000000c0 = FUN_0373bcbc(*(undefined4 *)(lVar14 + 0x20),0);
              uStack0000000000000088 = uVar18;
              uStack00000000000000c4 = uVar7;
              in_stack_00000080 = CONCAT44(uStack00000000000000c4,in_stack_000000c0);
              uStack0000000000000094 = uStack00000000000000d4;
              in_stack_00000098 = in_stack_000000d8;
              uStack0000000000000090 = uStack00000000000000d0;
              uStack000000000000008c = uStack00000000000000cc;
              uStack00000000000000c8 = uStack0000000000000088;
            }
            if (*(long *)(unaff_x19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar14 = *(long *)(*(long *)(unaff_x19 + 0x70) + 0x40);
            in_stack_00000030 = in_stack_00000080;
            uStack0000000000000038 = uStack0000000000000088;
            uStack0000000000000044 = uStack0000000000000094;
            uStack0000000000000048 = in_stack_00000098;
            uStack000000000000003c = uStack000000000000008c;
            uStack0000000000000040 = uStack0000000000000090;
            if (lVar14 == 0) break;
            if (*(uint *)(lVar14 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            lVar14 = lVar14 + lVar13 * 0x1c;
            *(ulong *)(lVar14 + 0x34) = CONCAT44(in_stack_00000098,uStack0000000000000094);
            *(ulong *)(lVar14 + 0x2c) = CONCAT44(uStack0000000000000090,uStack000000000000008c);
            *(ulong *)(lVar14 + 0x28) = CONCAT44(uStack000000000000008c,uStack0000000000000088);
            *(ulong *)(lVar14 + 0x20) = in_stack_00000080;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


