/*
FUNCTION_NAME: Unity.Services.DistributedAuthority.Http.UnityWebRequestHelpers.<>c__DisplayClass0_0$$<GetAwaiter>b__0
ENTRY_POINT: 05fb991c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Unity_Services_DistributedAuthority_Http_UnityWebRequestHelpers_<>c__DisplayClass0_0__<GetAwaiter>b__0
               (void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  long lVar12;
  long unaff_x21;
  ulong uVar13;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  ulong in_stack_00000040;
  undefined4 uStack0000000000000048;
  ushort uStack0000000000000050;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 *in_stack_00000068;
  uint uStack0000000000000070;
  undefined4 uStack0000000000000078;
  
  FUN_02d965b8();
  FUN_02d965b8(PTR_DAT_069fc3e0);
  FUN_02d965b8(Method_UnityEngine_AndroidJavaObject_CallStatic<int>__);
  FUN_02d965b8(Method_Unity_Services_Relay_Models_AllocationUtils_ValidateRelayConnectionType__);
  FUN_02d965b8(Method_System_Span<GlyphPairAdjustmentRecord>_op_Implicit__);
  FUN_02d965b8(Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
  FUN_02d965b8(Method_UnityEngine_AndroidJavaObject_Call<string>__);
  FUN_02d965b8(PTR_DAT_06a0f5d8);
  *(undefined1 *)(unaff_x20 + 0x724) = 1;
  puVar4 = Method_System_Security_Cryptography_AesManaged_CreateDecryptor__;
  in_stack_00000058 = 0;
  _uStack0000000000000050 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = (undefined8 *)0x0;
  in_stack_00000030 = 0;
  _uStack0000000000000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000068 = (undefined8 *)0x0;
  in_stack_00000060 = 0;
  _uStack0000000000000078 = 0;
  _uStack0000000000000070 = 0;
  if ((*(long *)(unaff_x19 + 0xb8) != 0) &&
     (lVar12 = *(long *)(*(long *)(unaff_x19 + 0xb8) + 0x18), lVar12 != 0)) {
    iVar2 = *(int *)(unaff_x19 + 0xa8);
    if (*(int *)(lVar12 + 0x18) <= iVar2) {
      FUN_05052180(lVar12,*(int *)(lVar12 + 0x18) << 1,0,
                   *(undefined8 *)Method_System_Activator_CreateInstance__);
      iVar2 = *(int *)(unaff_x19 + 0xa8);
    }
    uVar8 = *(undefined8 *)puVar4;
    *(int *)(unaff_x19 + 0xa8) = iVar2 + 1;
    lVar12 = FUN_050522c4(lVar12,iVar2,uVar8);
    FUN_05fbd590();
    *(undefined1 *)(lVar12 + 0x3c) = 0;
    puVar6 = Method_UnityEngine_AndroidJNI_GetDirectBuffer<sbyte>__;
    puVar5 = PTR_DAT_06a0f5d8;
    puVar4 = PTR_DAT_069fc3e0;
    if (unaff_x21 != 0) {
      uVar13 = 0;
      do {
        lVar9 = *(long *)(unaff_x21 + 0xb8);
        if (lVar9 == 0) goto LAB_05fba090;
        if (*(uint *)(lVar9 + 0x18) <= uVar13) {
LAB_05fba094:
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar9 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_05fba090;
        FUN_04042130(lVar9,*(undefined8 *)
                            Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__
                    );
        in_stack_00000068 = in_stack_00000008;
        in_stack_00000060 = in_stack_00000000;
        _uStack0000000000000078 = in_stack_00000018;
        _uStack0000000000000070 = in_stack_00000010;
        while (uVar7 = FUN_0515e9d0(&stack0x00000060,*(undefined8 *)puVar6), (uVar7 & 1) != 0) {
          lVar9 = *(long *)(lVar12 + 0x10);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          uVar1 = uStack0000000000000070;
          lVar9 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (lVar9 == 0) {
LAB_05fb9dc4:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar10 = *(long *)(lVar9 + 0x10);
          lVar11 = *(long *)puVar4;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_05fb9dc4;
          uVar3 = *(uint *)(lVar9 + 0x18);
          uVar1 = uVar1 & 0xffff;
          if (uVar3 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar3 + 1;
            *(uint *)(lVar10 + (long)(int)uVar3 * 4 + 0x20) = uVar1;
          }
          else {
            FUN_03fb3e1c(lVar9,uVar1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          lVar9 = *(long *)(lVar12 + 0x18);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar9 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
          if (lVar9 == 0) {
LAB_05fb9dcc:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar10 = *(long *)(lVar9 + 0x10);
          lVar11 = *(long *)puVar4;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_05fb9dcc;
          uVar3 = *(uint *)(lVar9 + 0x18);
          if (uVar3 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar3 + 1;
            *(uint *)(lVar10 + (long)(int)uVar3 * 4 + 0x20) = uVar1;
          }
          else {
            FUN_03fb3e1c(lVar9,uVar1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_0515e9cc(&stack0x00000060,
                     *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
        lVar9 = *(long *)(unaff_x21 + 0xb0);
        if (lVar9 == 0) goto LAB_05fba090;
        if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_05fba094;
        lVar9 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_05fba090;
        FUN_04042130(lVar9,*(undefined8 *)
                            Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__
                    );
        in_stack_00000060 = 0;
        _uStack0000000000000078 = in_stack_00000018;
        _uStack0000000000000070 = in_stack_00000010;
        in_stack_00000068 = &stack0x00000060;
LAB_05fb9be0:
        uVar7 = FUN_0515e9d0(&stack0x00000060,*(undefined8 *)puVar6);
        if ((uVar7 & 1) != 0) {
          lVar9 = *(long *)(unaff_x21 + 0xb8);
          _uStack0000000000000050 = _uStack0000000000000070;
          in_stack_00000058 = uStack0000000000000078;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          if (*(long *)(lVar9 + uVar13 * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar7 = FUN_040419bc();
          if ((uVar7 & 1) == 0) {
            if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar7 = FUN_05fc9494(*(long *)(unaff_x19 + 0x20),&stack0x00000050,0);
            if ((uVar7 & 1) == 0) {
              lVar9 = *(long *)(lVar12 + 0x10);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(uint *)(lVar9 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              lVar9 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              if (lVar9 != 0) {
                lVar10 = *(long *)(lVar9 + 0x10);
                lVar11 = *(long *)puVar4;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar10 != 0) {
                  uVar1 = *(uint *)(lVar9 + 0x18);
                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                    *(uint *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = (uint)uStack0000000000000050;
                  }
                  else {
                    FUN_03fb3e1c(lVar9,_uStack0000000000000050 & 0xffff,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  lVar9 = *(long *)(unaff_x19 + 0x78);
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  if (*(uint *)(lVar9 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96868();
                  }
                  lVar9 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
                  if (lVar9 != 0) {
                    lVar10 = *(long *)(lVar9 + 0x10);
                    lVar11 = *(long *)puVar4;
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    if (lVar10 != 0) {
                      uVar1 = *(uint *)(lVar9 + 0x18);
                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                        *(uint *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) =
                             (uint)uStack0000000000000050;
                      }
                      else {
                        FUN_03fb3e1c(lVar9,_uStack0000000000000050 & 0xffff,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                      }
                      goto LAB_05fb9be0;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
          }
          goto LAB_05fb9be0;
        }
        FUN_0515e9cc(&stack0x00000060,
                     *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
        lVar9 = *(long *)(unaff_x21 + 0xa8);
        if (lVar9 == 0) goto LAB_05fba090;
        if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_05fba094;
        lVar9 = *(long *)(lVar9 + uVar13 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_05fba090;
        FUN_04042130(lVar9,*(undefined8 *)
                            Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__
                    );
        in_stack_00000000 = 0;
        in_stack_00000060 = 0;
        _uStack0000000000000078 = in_stack_00000018;
        _uStack0000000000000070 = in_stack_00000010;
        in_stack_00000068 = &stack0x00000060;
        do {
          uVar7 = FUN_0515e9d0(&stack0x00000060,*(undefined8 *)puVar6);
        } while ((uVar7 & 1) != 0);
        FUN_0515e9cc(&stack0x00000060,
                     *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
        uVar13 = uVar13 + 1;
        in_stack_00000008 = &stack0x00000060;
      } while (uVar13 != 3);
      if (*(long *)(unaff_x21 + 0xc0) != 0) {
        FUN_0403f8dc(*(long *)(unaff_x21 + 0xc0),
                     *(undefined8 *)Method_UnityEngine_AndroidJavaObject_Call<string>__);
        puVar4 = Method_UnityEngine_AndroidJavaObject_Call<sbyte>__;
        in_stack_00000030 = 0;
        _uStack0000000000000048 = in_stack_00000018;
        in_stack_00000040 = in_stack_00000010;
        in_stack_00000038 = &stack0x00000060;
LAB_05fb9f84:
        uVar13 = FUN_0515e7b4(&stack0x00000030,*(undefined8 *)puVar4);
        if ((uVar13 & 1) != 0) {
          in_stack_00000020 = in_stack_00000040;
          in_stack_00000028 = uStack0000000000000048;
          if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar13 = FUN_05fc9584(*(long *)(unaff_x19 + 0x20),&stack0x00000020,0);
          if ((uVar13 & 1) == 0) {
            lVar9 = *(long *)(unaff_x19 + 0x40);
            if (lVar9 != 0) {
              lVar10 = *(long *)(lVar9 + 0x10);
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar10 != 0) {
                uVar1 = *(uint *)(lVar9 + 0x18);
                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)uVar1 * 0xc;
                  *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                  *(ulong *)(lVar10 + 0x20) = in_stack_00000020;
                  *(undefined4 *)(lVar10 + 0x28) = in_stack_00000028;
                }
                else {
                  FUN_0403edb4();
                }
                goto LAB_05fb9f84;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          goto LAB_05fb9f84;
        }
        FUN_0515e7b0(&stack0x00000030,
                     *(undefined8 *)Method_UnityEngine_AndroidJavaObject_Call<long>__);
        if ((*(long *)(unaff_x19 + 0x68) != 0) && (*(long *)(unaff_x19 + 0x20) != 0)) {
          FUN_05fcbcf0(*(long *)(unaff_x19 + 0x20),*(undefined8 *)(unaff_x19 + 0x40),
                       *(undefined8 *)(*(long *)(unaff_x19 + 0x68) + 0x10),0,0);
          lVar9 = *(long *)(unaff_x19 + 0x40);
          if (lVar9 != 0) {
            *(undefined4 *)(lVar9 + 0x18) = 0;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            return lVar12;
          }
        }
      }
    }
  }
LAB_05fba090:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


