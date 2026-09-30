/*
FUNCTION_NAME: Unity.Services.DistributedAuthority.Http.HttpClient.<>c__DisplayClass4_0.<<CreateHttpClientResponse>b__0>d$$SetStateMachine
ENTRY_POINT: 05fb6c0c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_4
*/


void Unity_Services_DistributedAuthority_Http_HttpClient_<>c__DisplayClass4_0_<<CreateHttpClientResponse>b__0>d__SetStateMachine
               (long param_1)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong in_x9;
  long lVar8;
  long unaff_x19;
  ulong unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  ulong in_stack_00000030;
  undefined4 in_stack_00000038;
  ulong in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000058;
  uint uStack0000000000000060;
  undefined4 uStack0000000000000068;
  
  while (unaff_x20 < in_x9) {
    lVar3 = *(long *)(param_1 + unaff_x20 * 8 + 0x20);
    if (lVar3 == 0) goto LAB_05fb6f4c;
    FUN_04042130(&stack0x00000010,lVar3,
                 *(undefined8 *)
                  Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
    in_stack_00000050 = in_stack_00000010;
    in_stack_00000010 = 0;
    in_stack_00000058 = in_stack_00000018;
    _uStack0000000000000068 = in_stack_00000028;
    _uStack0000000000000060 = in_stack_00000020;
    in_stack_00000018 = &stack0x00000050;
    while( true ) {
      uVar4 = FUN_0515e9d0(&stack0x00000050,*unaff_x28);
      if ((uVar4 & 1) == 0) break;
      if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(unaff_x27 + 0x18) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      uVar1 = uStack0000000000000060;
      lVar3 = *(long *)(unaff_x22 + 0x20);
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      plVar5 = (long *)FUN_05052fb4(lVar3,uVar1 & 0xffff,
                                    *(undefined8 *)
                                     Method_UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_FromJson__
                                   );
      lVar3 = plVar5[1];
      *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
      if (lVar3 == 0) {
LAB_05fb6d9c:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar6 = *(long *)(lVar3 + 0x10);
      lVar8 = *unaff_x26;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_05fb6d9c;
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(int *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = unaff_w21;
      }
      else {
        FUN_03fb3e1c(lVar3,unaff_w21,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      lVar3 = *plVar5;
      if (lVar3 == 0) {
LAB_05fb6da8:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar6 = *(long *)(lVar3 + 0x10);
      lVar8 = *unaff_x26;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_05fb6da8;
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(int *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = unaff_w21;
      }
      else {
        FUN_03fb3e1c(lVar3,unaff_w21,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_0515e9cc(&stack0x00000050,
                 *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
    unaff_x20 = unaff_x20 + 1;
    if (unaff_x20 == 3) {
      unaff_w21 = unaff_w21 + 1;
      if (*(int *)(in_stack_00000000 + 0x18) <= unaff_w21) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_05fb6f4c;
      in_stack_00000008 =
           FUN_0400ff1c(*(long *)(unaff_x19 + 0x38),unaff_w21,
                        *(undefined8 *)Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__);
      unaff_x23 = FUN_050522c4(in_stack_00000000,unaff_w21,
                               *(undefined8 *)
                                Method_System_Security_Cryptography_AesManaged_CreateDecryptor__);
      if (in_stack_00000008 == 0) goto LAB_05fb6f4c;
      unaff_x20 = 0;
    }
    lVar3 = *(long *)(in_stack_00000008 + 0xa8);
    if (lVar3 == 0) {
LAB_05fb6f4c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(uint *)(lVar3 + 0x18) <= unaff_x20) break;
    lVar3 = *(long *)(lVar3 + unaff_x20 * 8 + 0x20);
    if (lVar3 == 0) goto LAB_05fb6f4c;
    FUN_04042130(&stack0x00000010,lVar3,
                 *(undefined8 *)
                  Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
    in_stack_00000050 = in_stack_00000010;
    unaff_x22 = unaff_x27 + unaff_x20 * 8;
    in_stack_00000010 = 0;
    in_stack_00000058 = in_stack_00000018;
    _uStack0000000000000068 = in_stack_00000028;
    _uStack0000000000000060 = in_stack_00000020;
    in_stack_00000018 = &stack0x00000050;
    while( true ) {
      uVar4 = FUN_0515e9d0(&stack0x00000050,*unaff_x28);
      if ((uVar4 & 1) == 0) break;
      in_stack_00000040 = _uStack0000000000000060;
      in_stack_00000048 = uStack0000000000000068;
      if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(unaff_x27 + 0x18) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar3 = *(long *)(unaff_x22 + 0x20);
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar3 = FUN_05052fb4(lVar3,in_stack_00000040 & 0xffff,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_FromJson__
                          );
      if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      bVar2 = FUN_05fbeb0c(*(long *)(unaff_x19 + 0x20),&stack0x00000040,0);
      lVar6 = *(long *)(lVar3 + 8);
      *(byte *)(lVar3 + 0x14) = bVar2 & 1;
      if (lVar6 == 0) {
LAB_05fb6d8c:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar8 = *(long *)(lVar6 + 0x10);
      lVar7 = *unaff_x26;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_05fb6d8c;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(int *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = unaff_w21;
      }
      else {
        FUN_03fb3e1c(lVar6,unaff_w21,
                     *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
    }
    FUN_0515e9cc(&stack0x00000050,
                 *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
    lVar3 = *(long *)(in_stack_00000008 + 0xb0);
    if (lVar3 == 0) goto LAB_05fb6f4c;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x20) break;
    lVar3 = *(long *)(lVar3 + unaff_x20 * 8 + 0x20);
    if (lVar3 == 0) goto LAB_05fb6f4c;
    FUN_04042130(&stack0x00000010,lVar3,
                 *(undefined8 *)
                  Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
    in_stack_00000050 = in_stack_00000010;
    in_stack_00000010 = 0;
    in_stack_00000058 = in_stack_00000018;
    _uStack0000000000000068 = in_stack_00000028;
    _uStack0000000000000060 = in_stack_00000020;
    in_stack_00000018 = &stack0x00000050;
    while (uVar4 = FUN_0515e9d0(&stack0x00000050,*unaff_x28), (uVar4 & 1) != 0) {
      in_stack_00000030 = _uStack0000000000000060;
      in_stack_00000038 = uStack0000000000000068;
      if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(unaff_x27 + 0x18) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar3 = *(long *)(unaff_x22 + 0x20);
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      plVar5 = (long *)FUN_05052fb4(lVar3,in_stack_00000030 & 0xffff,
                                    *(undefined8 *)
                                     Method_UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_FromJson__
                                   );
      if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      bVar2 = FUN_05fbeb0c(*(long *)(unaff_x19 + 0x20),&stack0x00000030,0);
      lVar3 = *plVar5;
      bVar2 = bVar2 & 1;
      *(byte *)((long)plVar5 + 0x14) = bVar2;
      if (lVar3 == 0) {
LAB_05fb6d94:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar6 = *(long *)(lVar3 + 0x10);
      lVar8 = *unaff_x26;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_05fb6d94;
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(int *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = unaff_w21;
      }
      else {
        FUN_03fb3e1c(lVar3,unaff_w21,
                     *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        bVar2 = *(byte *)((long)plVar5 + 0x14);
      }
      *(byte *)(unaff_x23 + 0x41) = bVar2;
      *(int *)(unaff_x23 + 0x30) = *(int *)(unaff_x23 + 0x30) + 1;
    }
    FUN_0515e9cc(&stack0x00000050,
                 *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
    param_1 = *(long *)(in_stack_00000008 + 0xb8);
    if (param_1 == 0) goto LAB_05fb6f4c;
    in_x9 = (ulong)*(uint *)(param_1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


