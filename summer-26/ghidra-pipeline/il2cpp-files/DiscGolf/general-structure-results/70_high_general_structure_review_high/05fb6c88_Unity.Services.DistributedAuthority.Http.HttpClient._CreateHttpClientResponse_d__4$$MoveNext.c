/*
FUNCTION_NAME: Unity.Services.DistributedAuthority.Http.HttpClient.<CreateHttpClientResponse>d__4$$MoveNext
ENTRY_POINT: 05fb6c88
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_DistributedAuthority_Http_HttpClient_<CreateHttpClientResponse>d__4__MoveNext
               (undefined **param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  ulong unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  uint unaff_w29;
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
  
  while( true ) {
    plVar4 = (long *)FUN_05052fb4(unaff_x24,unaff_w29 & 0xffff,*(undefined8 *)param_1[0x6d]);
    lVar5 = plVar4[1];
                    /* try { // try from 05fb6ca8 to 060b6caf has its CatchHandler @ 05fb72f4 */
    *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
    if (lVar5 == 0) break;
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar8 = *unaff_x26;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    /* try { // try from 05fb6cc8 to 060b6ccf has its CatchHandler @ 05fb72d8 */
    if (lVar6 == 0) break;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(int *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = unaff_w21;
    }
    else {
                    /* try { // try from 05fb6cf4 to 060b6cfb has its CatchHandler @ 05fb6dd8 */
      FUN_03fb3e1c(lVar5,unaff_w21,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                  );
    }
    lVar5 = *plVar4;
    if (lVar5 == 0) {
LAB_05fb6da8:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
                    /* try { // try from 05fb6d18 to 060b6d1b has its CatchHandler @ 05fb6dc8 */
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar8 = *unaff_x26;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_05fb6da8;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      *(int *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = unaff_w21;
    }
    else {
      FUN_03fb3e1c(lVar5,unaff_w21,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                  );
                    /* try { // try from 05fb6d64 to 060b6d87 has its CatchHandler @ 05fb6dc4 */
    }
    while (uVar3 = FUN_0515e9d0(&stack0x00000050,*unaff_x28), (uVar3 & 1) == 0) {
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
      lVar5 = *(long *)(in_stack_00000008 + 0xa8);
      if (lVar5 == 0) goto LAB_05fb6f4c;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x20) {
LAB_05fb6f50:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar5 = *(long *)(lVar5 + unaff_x20 * 8 + 0x20);
      if (lVar5 == 0) {
LAB_05fb6f4c:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_04042130(&stack0x00000010,lVar5,
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
        uVar3 = FUN_0515e9d0(&stack0x00000050,*unaff_x28);
        if ((uVar3 & 1) == 0) break;
        in_stack_00000040 = _uStack0000000000000060;
        in_stack_00000048 = uStack0000000000000068;
        if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05fb6dc0 to 060b6df3 has its CatchHandler @ 05fb69a0 */
          FUN_02d96860();
        }
        if (*(uint *)(unaff_x27 + 0x18) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar5 = *(long *)(unaff_x22 + 0x20);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 05fb6d18 with catch @ 05fb6dc8 */
          FUN_02d96860();
        }
        lVar5 = FUN_05052fb4(lVar5,in_stack_00000040 & 0xffff,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_FromJson__
                            );
        if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        bVar2 = FUN_05fbeb0c(*(long *)(unaff_x19 + 0x20),&stack0x00000040,0);
        lVar6 = *(long *)(lVar5 + 8);
        *(byte *)(lVar5 + 0x14) = bVar2 & 1;
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
        *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
      }
      FUN_0515e9cc(&stack0x00000050,
                   *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
      lVar5 = *(long *)(in_stack_00000008 + 0xb0);
      if (lVar5 == 0) goto LAB_05fb6f4c;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x20) goto LAB_05fb6f50;
      lVar5 = *(long *)(lVar5 + unaff_x20 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_05fb6f4c;
      FUN_04042130(&stack0x00000010,lVar5,
                   *(undefined8 *)
                    Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
      in_stack_00000050 = in_stack_00000010;
      in_stack_00000010 = 0;
      in_stack_00000058 = in_stack_00000018;
      _uStack0000000000000068 = in_stack_00000028;
      _uStack0000000000000060 = in_stack_00000020;
      in_stack_00000018 = &stack0x00000050;
      while (uVar3 = FUN_0515e9d0(&stack0x00000050,*unaff_x28), (uVar3 & 1) != 0) {
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
        lVar5 = *(long *)(unaff_x22 + 0x20);
        if (*(int *)(*unaff_x25 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        plVar4 = (long *)FUN_05052fb4(lVar5,in_stack_00000030 & 0xffff,
                                      *(undefined8 *)
                                       Method_UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilities_FromJson__
                                     );
        if (*(long *)(unaff_x19 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        bVar2 = FUN_05fbeb0c(*(long *)(unaff_x19 + 0x20),&stack0x00000030,0);
        lVar5 = *plVar4;
        bVar2 = bVar2 & 1;
        *(byte *)((long)plVar4 + 0x14) = bVar2;
        if (lVar5 == 0) {
LAB_05fb6d94:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar6 = *(long *)(lVar5 + 0x10);
        lVar8 = *unaff_x26;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_05fb6d94;
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(int *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = unaff_w21;
        }
        else {
          FUN_03fb3e1c(lVar5,unaff_w21,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          bVar2 = *(byte *)((long)plVar4 + 0x14);
        }
        *(byte *)(unaff_x23 + 0x41) = bVar2;
        *(int *)(unaff_x23 + 0x30) = *(int *)(unaff_x23 + 0x30) + 1;
      }
      FUN_0515e9cc(&stack0x00000050,
                   *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
      lVar5 = *(long *)(in_stack_00000008 + 0xb8);
      if (lVar5 == 0) goto LAB_05fb6f4c;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x20) goto LAB_05fb6f50;
      lVar5 = *(long *)(lVar5 + unaff_x20 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_05fb6f4c;
      FUN_04042130(&stack0x00000010,lVar5,
                   *(undefined8 *)
                    Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
      in_stack_00000050 = in_stack_00000010;
      in_stack_00000010 = 0;
      in_stack_00000058 = in_stack_00000018;
      _uStack0000000000000068 = in_stack_00000028;
      _uStack0000000000000060 = in_stack_00000020;
      in_stack_00000018 = &stack0x00000050;
    }
    if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(uint *)(unaff_x27 + 0x18) <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    unaff_w29 = uStack0000000000000060;
    unaff_x24 = *(long *)(unaff_x22 + 0x20);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (unaff_x24 == 0) {
                    /* try { // try from 05fb6df8 to 060b6e7b has its CatchHandler @ 05fb69a0 */
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    param_1 = &
              Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnGestureStarted<TapGesture>__
    ;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05fb6da0 to 060b6da3 has its CatchHandler @ 05fb72e4 */
  FUN_02d96860();
}


