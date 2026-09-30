/*
FUNCTION_NAME: Unity.Services.DistributedAuthority.DistributedAuthority.DistributedAuthorityApiBaseRequest$$AddParamsToQueryParams
ENTRY_POINT: 05fb9e74
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_Services_DistributedAuthority_DistributedAuthority_DistributedAuthorityApiBaseRequest__AddParamsToQueryParams
               (undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x24;
  undefined8 unaff_x25;
  long *unaff_x26;
  ulong unaff_x27;
  long *unaff_x28;
  long lStack0000000000000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000040;
  undefined4 uStack0000000000000048;
  ushort uStack0000000000000050;
  undefined4 in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  uint uStack0000000000000070;
  undefined4 uStack0000000000000078;
  
                    /* try { // try from 05fb9e74 to 060ba04b has its CatchHandler @ 05fb9e74
                       catch() { ... } // from try @ 05fb9e74 with catch @ 05fb9e74
                       catch() { ... } // from try @ 05fba0b8 with catch @ 05fb9e74
                       catch() { ... } // from try @ 05fba0d8 with catch @ 05fb9e74
                       catch() { ... } // from try @ 05fba100 with catch @ 05fb9e74
                       catch() { ... } // from try @ 05fba200 with catch @ 05fb9e74 */
  if (param_2 != 1) {
    FUN_02d59a88();
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c(param_1);
  }
  plVar5 = (long *)__cxa_begin_catch();
  lStack0000000000000000 = *plVar5;
  __cxa_end_catch();
  FUN_0515e9cc(in_stack_00000008,
               *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
  if (lStack0000000000000000 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(lStack0000000000000000);
  }
  while (lVar6 = *(long *)(unaff_x21 + 0xa8), lVar6 != 0) {
    if (*(uint *)(lVar6 + 0x18) <= unaff_x27) {
LAB_05fba094:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar6 = *(long *)(lVar6 + unaff_x27 * 8 + 0x20);
    if (lVar6 == 0) break;
    FUN_04042130(lVar6,*(undefined8 *)
                        Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
    in_stack_00000068 = in_stack_00000008;
    in_stack_00000060 = lStack0000000000000000;
    _uStack0000000000000078 = in_stack_00000018;
    _uStack0000000000000070 = in_stack_00000010;
    do {
      uVar4 = FUN_0515e9d0(&stack0x00000060,*unaff_x24);
    } while ((uVar4 & 1) != 0);
    FUN_0515e9cc(&stack0x00000060,
                 *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
    unaff_x27 = unaff_x27 + 1;
    if (unaff_x27 == 3) {
      if (*(long *)(unaff_x21 + 0xc0) != 0) {
        FUN_0403f8dc(*(long *)(unaff_x21 + 0xc0),
                     *(undefined8 *)Method_UnityEngine_AndroidJavaObject_Call<string>__);
        puVar3 = Method_UnityEngine_AndroidJavaObject_Call<sbyte>__;
        in_stack_00000030 = 0;
        _uStack0000000000000048 = in_stack_00000018;
        in_stack_00000040 = in_stack_00000010;
        in_stack_00000038 = unaff_x25;
        goto LAB_05fb9f84;
      }
      break;
    }
    lVar6 = *(long *)(unaff_x21 + 0xb8);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x27) goto LAB_05fba094;
    lVar6 = *(long *)(lVar6 + unaff_x27 * 8 + 0x20);
    if (lVar6 == 0) break;
    FUN_04042130(lVar6,*(undefined8 *)
                        Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
    in_stack_00000060 = 0;
    _uStack0000000000000078 = in_stack_00000018;
    _uStack0000000000000070 = in_stack_00000010;
    in_stack_00000068 = unaff_x25;
    while (uVar4 = FUN_0515e9d0(&stack0x00000060,*unaff_x24), (uVar4 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar6 + 0x18) <= unaff_x27) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      uVar2 = uStack0000000000000070;
      lVar6 = *(long *)(lVar6 + unaff_x27 * 8 + 0x20);
      if (*(int *)(*unaff_x28 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar6 == 0) {
LAB_05fb9dc4:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = *unaff_x26;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_05fb9dc4;
      uVar1 = *(uint *)(lVar6 + 0x18);
      uVar2 = uVar2 & 0xffff;
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(uint *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
      }
      else {
        FUN_03fb3e1c(lVar6,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      lVar6 = *(long *)(unaff_x20 + 0x18);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar6 + 0x18) <= unaff_x27) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar6 = *(long *)(lVar6 + unaff_x27 * 8 + 0x20);
      if (lVar6 == 0) {
LAB_05fb9dcc:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar7 = *(long *)(lVar6 + 0x10);
      lVar8 = *unaff_x26;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_05fb9dcc;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(uint *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
      }
      else {
        FUN_03fb3e1c(lVar6,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_0515e9cc(&stack0x00000060,
                 *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
    lVar6 = *(long *)(unaff_x21 + 0xb0);
    if (lVar6 == 0) break;
    if (*(uint *)(lVar6 + 0x18) <= unaff_x27) goto LAB_05fba094;
    lVar6 = *(long *)(lVar6 + unaff_x27 * 8 + 0x20);
    if (lVar6 == 0) break;
    FUN_04042130(lVar6,*(undefined8 *)
                        Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
    lStack0000000000000000 = 0;
    in_stack_00000060 = 0;
    _uStack0000000000000078 = in_stack_00000018;
    _uStack0000000000000070 = in_stack_00000010;
    in_stack_00000068 = unaff_x25;
LAB_05fb9be0:
    uVar4 = FUN_0515e9d0(&stack0x00000060,*unaff_x24);
    if ((uVar4 & 1) != 0) {
      lVar6 = *(long *)(unaff_x21 + 0xb8);
      _uStack0000000000000050 = _uStack0000000000000070;
      in_stack_00000058 = uStack0000000000000078;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar6 + 0x18) <= unaff_x27) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      if (*(long *)(lVar6 + unaff_x27 * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar4 = FUN_040419bc();
      if ((uVar4 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar4 = FUN_05fc9494(*(long *)(unaff_x19 + 0x20),&stack0x00000050,0);
        if ((uVar4 & 1) == 0) {
          lVar6 = *(long *)(unaff_x20 + 0x10);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar6 + 0x18) <= unaff_x27) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar6 = *(long *)(lVar6 + unaff_x27 * 8 + 0x20);
          if (*(int *)(*unaff_x28 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (lVar6 != 0) {
            lVar7 = *(long *)(lVar6 + 0x10);
            lVar8 = *unaff_x26;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar2 = *(uint *)(lVar6 + 0x18);
              if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                *(uint *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = (uint)uStack0000000000000050;
              }
              else {
                FUN_03fb3e1c(lVar6,_uStack0000000000000050 & 0xffff,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
              lVar6 = *(long *)(unaff_x19 + 0x78);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(uint *)(lVar6 + 0x18) <= unaff_x27) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              lVar6 = *(long *)(lVar6 + unaff_x27 * 8 + 0x20);
              if (lVar6 != 0) {
                lVar7 = *(long *)(lVar6 + 0x10);
                lVar8 = *unaff_x26;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar7 != 0) {
                  uVar2 = *(uint *)(lVar6 + 0x18);
                  if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                    *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                    *(uint *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = (uint)uStack0000000000000050;
                  }
                  else {
                    FUN_03fb3e1c(lVar6,_uStack0000000000000050 & 0xffff,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
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
    in_stack_00000008 = unaff_x25;
  }
  goto LAB_05fba090;
LAB_05fb9f84:
  uVar4 = FUN_0515e7b4(&stack0x00000030,*(undefined8 *)puVar3);
  if ((uVar4 & 1) != 0) {
    in_stack_00000020 = in_stack_00000040;
    in_stack_00000028 = uStack0000000000000048;
    if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar4 = FUN_05fc9584(*(long *)(unaff_x19 + 0x20),&stack0x00000020,0);
    if ((uVar4 & 1) == 0) {
      lVar6 = *(long *)(unaff_x19 + 0x40);
      if (lVar6 != 0) {
        lVar7 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar2 = *(uint *)(lVar6 + 0x18);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            lVar7 = lVar7 + (long)(int)uVar2 * 0xc;
            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
            *(ulong *)(lVar7 + 0x20) = in_stack_00000020;
            *(undefined4 *)(lVar7 + 0x28) = in_stack_00000028;
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
  FUN_0515e7b0(&stack0x00000030,*(undefined8 *)Method_UnityEngine_AndroidJavaObject_Call<long>__);
  if ((*(long *)(unaff_x19 + 0x68) != 0) && (*(long *)(unaff_x19 + 0x20) != 0)) {
    FUN_05fcbcf0(*(long *)(unaff_x19 + 0x20),*(undefined8 *)(unaff_x19 + 0x40),
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x68) + 0x10),0,0);
    lVar6 = *(long *)(unaff_x19 + 0x40);
    if (lVar6 != 0) {
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      return;
    }
  }
LAB_05fba090:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


