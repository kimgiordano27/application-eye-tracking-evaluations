/*
FUNCTION_NAME: Unity.Mathematics.RigidTransform$$EulerYXZ
ENTRY_POINT: 059ce154
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_19;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void Unity_Mathematics_RigidTransform__EulerYXZ(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long unaff_x19;
  undefined8 uVar18;
  uint uVar19;
  int iVar20;
  long unaff_x29;
  undefined1 auVar21 [16];
  long lStack0000000000000008;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 in_stack_00000080;
  
  FUN_0593c9c4();
  puVar4 = PTR_DAT_06648178;
  puVar2 = PTR_DAT_06646c08;
  if (unaff_x29 != 0) {
    *(undefined4 *)(unaff_x29 + 0x28) = uStack0000000000000040;
    puVar3 = PTR_DAT_06646c10;
    FUN_05a098dc();
    in_stack_00000058._4_2_ = 0;
    FUN_0393f2a4((long)&stack0x00000058 + 4,1,*(undefined8 *)puVar4);
    *(undefined2 *)(unaff_x29 + 0x38) = in_stack_00000058._4_2_;
    uVar8 = FUN_04e7faf0(*(undefined8 *)(unaff_x19 + 0x10),0);
    lStack0000000000000008 = 0;
    if ((uVar8 & 1) == 0) {
      uVar18 = *(undefined8 *)(unaff_x19 + 0x10);
      if (*(int *)(*(long *)PTR_DAT_0664aed0 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lStack0000000000000008 = FUN_05951c48(uVar18,0);
    }
    lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
    FUN_036a55a0(lVar9,*(undefined8 *)puVar3);
    lVar10 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
    FUN_036a55a0(lVar10,*(undefined8 *)puVar3);
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<SetHeadersAsync>d__37>__
    ;
    puVar4 = PTR_DAT_0664ae80;
    puVar2 = PTR_DAT_06646c18;
    lVar14 = *(long *)(unaff_x19 + 0x20);
    if (lVar14 != 0) {
      uVar19 = 0;
      iVar20 = 0;
      do {
        puVar5 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AuthenticationService_<ApplyPhotonCustomAuth>d__16>__
        ;
        lVar14 = *(long *)(lVar14 + 0x30);
        if (lVar14 == 0) break;
        if (*(int *)(lVar14 + 0x18) <= iVar20) {
          FUN_05a09bb0();
          return;
        }
        FUN_0371f984(&stack0x00000040,lVar14,iVar20,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter,_Stream_<CopyToAsyncInternal>d__28>__
                    );
        uVar6 = in_stack_00000050;
        puVar15 = in_stack_00000048;
        uVar18 = _uStack0000000000000040;
        if (lVar10 == 0) break;
        iVar1 = *(int *)(lVar10 + 0x18);
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_05025690(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
        }
        if (puVar15 != (undefined8 *)0x0) {
          FUN_037116ec(&stack0x00000040,puVar15,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<CryptoStream_<WriteAsyncCore>d__49>__
                      );
          in_stack_00000080 = in_stack_00000050;
          in_stack_00000078 = in_stack_00000048;
          in_stack_00000070 = _uStack0000000000000040;
          _uStack0000000000000040 = 0;
          in_stack_00000048 = &stack0x00000070;
          while( true ) {
            uVar8 = FUN_049e0c14(&stack0x00000070,*(undefined8 *)puVar5);
            uVar12 = in_stack_00000080;
            if ((uVar8 & 1) == 0) break;
            uVar8 = FUN_04e7faf0(in_stack_00000080,0);
            if ((uVar8 & 1) == 0) {
              lVar14 = *(long *)(lVar10 + 0x10);
              lVar16 = *(long *)puVar2;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d4dee8();
              }
              uVar7 = *(uint *)(lVar10 + 0x18);
              if (uVar7 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar7 + 1;
                puVar11 = (undefined8 *)(lVar14 + (long)(int)uVar7 * 8 + 0x20);
                *puVar11 = uVar12;
                thunk_FUN_02dc1ef0(puVar11,uVar12);
              }
              else {
                FUN_036a5e08(lVar10,uVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          FUN_049e0c10(&stack0x00000070,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<AsyncProtocolRequest_<ProcessOperation>d__24>__
                      );
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        lVar14 = FUN_059cd6b4(uVar18,1);
        if (lStack0000000000000008 != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          lVar14 = FUN_059cdc5c(lStack0000000000000008,lVar14);
        }
        if (lVar14 == 0) break;
        lVar14 = FUN_04e84804(lVar14,0);
        if (lVar14 == 0) break;
        uVar8 = FUN_04e84e00(lVar14,0x2f,0);
        if ((uVar8 & 1) != 0) {
          uVar12 = FUN_059cddf4(uVar8,lVar14);
          if (lVar9 == 0) break;
          uVar8 = FUN_036a61a4(lVar9,uVar12,*(undefined8 *)PTR_DAT_066483d8);
          if ((uVar8 & 1) == 0) {
            if (*(long *)(unaff_x19 + 0x20) == 0) break;
            uVar8 = FUN_059cde2c(uVar8,*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x30),iVar20);
            if ((uVar8 & 1) != 0) {
              auVar21 = FUN_05a0998c();
              _in_stack_00000060 = auVar21;
              auVar21 = FUN_05a09e34(&stack0x00000060,
                                     *(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<GravityAccountsLinkingHandlerTextDefualt_<PollStatus>d__12>__
                                     ,0);
              _in_stack_00000060 = auVar21;
              FUN_05a09fa0(&stack0x00000060,0,0);
              lVar17 = *(long *)puVar2;
              lVar16 = *(long *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar16 == 0) break;
              uVar7 = *(uint *)(lVar9 + 0x18);
              if (uVar7 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar7 + 1;
                puVar11 = (undefined8 *)(lVar16 + (long)(int)uVar7 * 8 + 0x20);
                *puVar11 = uVar12;
                thunk_FUN_02dc1ef0(puVar11,uVar12);
              }
              else {
                FUN_036a5e08(lVar9,uVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        in_stack_00000028 = uVar18;
        in_stack_00000030 = puVar15;
        in_stack_00000038 = uVar6;
        uVar7 = FUN_059cd600(&stack0x00000028);
        uVar8 = thunk_FUN_04e7e884(*(undefined8 *)(unaff_x19 + 0x18),
                                   *(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteAsyncInner>d__33>__
                                   ,0);
        if ((uVar8 & 1) == 0) {
          if ((3 < uVar7) && ((uVar19 & 3) != 0)) {
            uVar19 = (uVar19 & 0xfffffffc) + 4;
          }
        }
        else if (uVar7 < 5) {
          uVar7 = 4;
        }
        iVar1 = (int)uVar6;
        if (iVar1 < 5) {
          if (iVar1 < 3) {
            if (iVar1 == 1) {
              auVar21 = FUN_05a0998c();
              _in_stack_00000060 = auVar21;
              auVar21 = FUN_05a09e34(&stack0x00000060,
                                     *(undefined8 *)
                                      Method_UnityEngine_UIElements_StyleDataRef<VisualData>_Equals__
                                     ,0);
              _in_stack_00000060 = auVar21;
              auVar21 = FUN_05a09fa0(&stack0x00000060,uVar19,0);
              lVar14 = *(long *)puVar4;
              _in_stack_00000060 = auVar21;
              if (*(int *)(lVar14 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar14 = *(long *)puVar4;
              }
              uVar13 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 4);
            }
            else {
              if (iVar1 != 2) goto LAB_059ce99c;
              auVar21 = FUN_05a0998c();
              _in_stack_00000060 = auVar21;
              auVar21 = FUN_05a09e34(&stack0x00000060,
                                     *(undefined8 *)
                                      UnityEngine_Rendering_Universal_TemporalAA_JitterFunc_TypeInfo
                                     ,0);
              _in_stack_00000060 = auVar21;
              auVar21 = FUN_05a09fa0(&stack0x00000060,uVar19,0);
              lVar14 = *(long *)puVar4;
              _in_stack_00000060 = auVar21;
              if (*(int *)(lVar14 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar14 = *(long *)puVar4;
              }
              uVar13 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0xc);
            }
LAB_059ce934:
            auVar21 = FUN_05a09f24(&stack0x00000060,uVar13,0);
            goto LAB_059ce988;
          }
          if (iVar1 == 3) {
            auVar21 = FUN_05a0998c();
            _in_stack_00000060 = auVar21;
            auVar21 = FUN_05a09e34(&stack0x00000060,
                                   *(undefined8 *)
                                    Method_UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<LightCookieManager_LightCookieMapping>_Sort__
                                   ,0);
            _in_stack_00000060 = auVar21;
            auVar21 = FUN_05a0a198(0xbf800000,0x3f800000,&stack0x00000060,0);
            _in_stack_00000060 = auVar21;
            auVar21 = FUN_05a09fa0(&stack0x00000060,uVar19,0);
            lVar14 = *(long *)puVar4;
            _in_stack_00000060 = auVar21;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar14 = *(long *)puVar4;
            }
            uVar13 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x2c);
            goto LAB_059ce934;
          }
          if (iVar1 == 4) {
            auVar21 = FUN_05a0998c();
            _in_stack_00000060 = auVar21;
            auVar21 = FUN_05a09e34(&stack0x00000060,
                                   *(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendWithCapacity<Joystick>__
                                   ,0);
            _in_stack_00000060 = auVar21;
            auVar21 = FUN_05a09fa0(&stack0x00000060,uVar19,0);
            lVar16 = *(long *)puVar4;
            _in_stack_00000060 = auVar21;
            if (*(int *)(lVar16 + 0xe4) == 0) {
              thunk_FUN_02dabd98();
              lVar16 = *(long *)puVar4;
            }
            auVar21 = FUN_05a09f24(&stack0x00000060,*(undefined4 *)(*(long *)(lVar16 + 0xb8) + 0x34)
                                   ,0);
            _in_stack_00000060 = auVar21;
            FUN_05a0a40c(&stack0x00000060,lVar10,0);
            FUN_04e723e0(lVar14,*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JConstructor_<WriteToAsync>d__0>__
                         ,0);
            auVar21 = FUN_05a0998c();
            puVar5 = 
            Method_UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<LightCookieManager_LightCookieMapping>_Sort__
            ;
            _in_stack_00000060 = auVar21;
            auVar21 = FUN_05a09e34(&stack0x00000060,
                                   *(undefined8 *)
                                    Method_UnityEngine_Rendering_Universal_LightCookieManager_WorkSlice<LightCookieManager_LightCookieMapping>_Sort__
                                   ,0);
            _in_stack_00000060 = auVar21;
            FUN_05a0a198(0xbf800000,0x3f800000,&stack0x00000060,0);
            FUN_04e723e0(lVar14,*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<GravityAccountsLinkingHandlerDefualt_<PollStatus>d__12>__
                         ,0);
            auVar21 = FUN_05a0998c();
            _in_stack_00000060 = auVar21;
            auVar21 = FUN_05a09e34(&stack0x00000060,*(undefined8 *)puVar5,0);
            _in_stack_00000060 = auVar21;
            FUN_05a0a198(0xbf800000,0x3f800000,&stack0x00000060,0);
          }
        }
        else {
          if (iVar1 < 8) {
            if (iVar1 == 5) {
              auVar21 = FUN_05a0998c();
              _in_stack_00000060 = auVar21;
              auVar21 = FUN_05a09e34(&stack0x00000060,
                                     *(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_ContainsReference<InputDevice>__
                                     ,0);
              _in_stack_00000060 = auVar21;
              auVar21 = FUN_05a09fa0(&stack0x00000060,uVar19,0);
              lVar14 = *(long *)puVar4;
              _in_stack_00000060 = auVar21;
              if (*(int *)(lVar14 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar14 = *(long *)puVar4;
              }
              uVar13 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x38);
            }
            else {
              if (iVar1 != 6) goto LAB_059ce99c;
              auVar21 = FUN_05a0998c();
              _in_stack_00000060 = auVar21;
              auVar21 = FUN_05a09e34(&stack0x00000060,
                                     *(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_AppendToImmutable<InternedString>__
                                     ,0);
              _in_stack_00000060 = auVar21;
              auVar21 = FUN_05a09fa0(&stack0x00000060,uVar19,0);
              lVar14 = *(long *)puVar4;
              _in_stack_00000060 = auVar21;
              if (*(int *)(lVar14 + 0xe4) == 0) {
                thunk_FUN_02dabd98();
                lVar14 = *(long *)puVar4;
              }
              uVar13 = *(undefined4 *)(*(long *)(lVar14 + 0xb8) + 0x3c);
            }
            goto LAB_059ce934;
          }
          if (iVar1 == 8) {
            auVar21 = FUN_05a0998c();
            puVar15 = (undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JArray_<WriteToAsync>d__0>__
            ;
          }
          else {
            if (iVar1 != 9) goto LAB_059ce99c;
            auVar21 = FUN_05a0998c();
            puVar15 = (undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<HttpContent_<LoadIntoBufferAsync>d__17>__
            ;
          }
          _in_stack_00000060 = auVar21;
          auVar21 = FUN_05a09e34(&stack0x00000060,*puVar15,0);
          _in_stack_00000060 = auVar21;
          auVar21 = FUN_05a09fa0(&stack0x00000060,uVar19,0);
LAB_059ce988:
          _in_stack_00000060 = auVar21;
          FUN_05a0a40c(&stack0x00000060,lVar10,0);
        }
LAB_059ce99c:
        uVar19 = uVar19 + uVar7;
        lVar14 = *(long *)(unaff_x19 + 0x20);
        iVar20 = iVar20 + 1;
      } while (lVar14 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


