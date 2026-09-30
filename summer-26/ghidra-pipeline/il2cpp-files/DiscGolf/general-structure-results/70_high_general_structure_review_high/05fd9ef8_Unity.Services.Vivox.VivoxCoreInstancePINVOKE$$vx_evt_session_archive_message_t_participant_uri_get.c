/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_message_t_participant_uri_get
ENTRY_POINT: 05fd9ef8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_message_t_participant_uri_get
               (undefined **param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  int *piVar18;
  char *pcVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  int iVar27;
  undefined8 *unaff_x23;
  undefined4 *puVar28;
  undefined8 unaff_x24;
  undefined4 *unaff_x25;
  long *plVar29;
  long unaff_x26;
  ushort *puVar30;
  ulong uVar31;
  long *in_stack_00000028;
  int iStack0000000000000030;
  undefined4 uStack0000000000000034;
  long in_stack_00000048;
  undefined4 in_stack_00000060;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  int in_stack_00000110;
  long in_stack_00000170;
  undefined8 in_stack_00000178;
  ulong in_stack_00000180;
  ulong in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  long in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  ushort uStack00000000000001d0;
  ulong in_stack_000001d8;
  undefined8 in_stack_000001e0;
  long *in_stack_00000200;
  long *in_stack_00000208;
  long in_stack_00000228;
  ulong in_stack_00000360;
  ulong in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  ulong in_stack_00000388;
  
  do {
    FUN_05130774(&stack0x000001c0,*(undefined8 *)param_1[0x8c]);
    uVar31 = 0;
    do {
      lVar14 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
      FUN_03fb358c(lVar14,*(undefined8 *)PTR_DAT_069fc3f0);
      if (in_stack_00000200 == (long *)0x0) goto LAB_05fdad7c;
      if ((lVar14 != 0) &&
         (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*in_stack_00000200 + 0x40)),
         lVar15 == 0)) {
LAB_05fdada4:
        uVar13 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar13,0);
      }
      if (*(uint *)(in_stack_00000200 + 3) <= uVar31) {
LAB_05fdada0:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      in_stack_00000200[uVar31 + 4] = lVar14;
      LeanTween__value(in_stack_00000200 + uVar31 + 4,lVar14);
      lVar14 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
      FUN_03fb358c(lVar14,*(undefined8 *)PTR_DAT_069fc3f0);
      if (in_stack_00000208 == (long *)0x0) goto LAB_05fdad7c;
      if ((lVar14 != 0) &&
         (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*in_stack_00000208 + 0x40)),
         lVar15 == 0)) goto LAB_05fdada4;
      if (*(uint *)(in_stack_00000208 + 3) <= uVar31) goto LAB_05fdada0;
      in_stack_00000208[uVar31 + 4] = lVar14;
      LeanTween__value(in_stack_00000208 + uVar31 + 4,lVar14);
      lVar14 = *(long *)(unaff_x26 + 0xa8);
      if (lVar14 == 0) goto LAB_05fdad7c;
      if (*(uint *)(lVar14 + 0x18) <= uVar31) goto LAB_05fdada0;
      lVar14 = *(long *)(lVar14 + uVar31 * 8 + 0x20);
      if (lVar14 == 0) goto LAB_05fdad7c;
      FUN_04042130(&stack0x00000350,lVar14,
                   *(undefined8 *)
                    Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
LAB_05fda010:
      uVar16 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22);
      if ((uVar16 & 1) != 0) {
        if (*(long *)(unaff_x26 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar16 = FUN_040419bc(*(long *)(unaff_x26 + 0xd8),in_stack_00000360,
                              in_stack_00000368 & 0xffffffff,*unaff_x23);
        if ((uVar16 & 1) == 0) {
          if (in_stack_00000200 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(in_stack_00000200 + 3) <= uVar31) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar14 = in_stack_00000200[uVar31 + 4];
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (lVar14 != 0) {
            lVar15 = *(long *)(lVar14 + 0x10);
            lVar23 = *unaff_x19;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar15 != 0) {
              uVar7 = *(uint *)(lVar14 + 0x18);
              uVar1 = (uint)in_stack_00000360 & 0xffff;
              if (uVar7 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar7 + 1;
                *(uint *)(lVar15 + (long)(int)uVar7 * 4 + 0x20) = uVar1;
              }
              else {
                FUN_03fb3e1c(lVar14,uVar1,
                             *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_05fda010;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        goto LAB_05fda010;
      }
      FUN_0515e9cc(&stack0x000002c0,
                   *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
      lVar14 = *(long *)(unaff_x26 + 0xb0);
      if (lVar14 == 0) goto LAB_05fdad7c;
      if (*(uint *)(lVar14 + 0x18) <= uVar31) goto LAB_05fdada0;
      lVar14 = *(long *)(lVar14 + uVar31 * 8 + 0x20);
      if (lVar14 == 0) goto LAB_05fdad7c;
      FUN_04042130(&stack0x00000350,lVar14,
                   *(undefined8 *)
                    Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
      while (uVar16 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22), (uVar16 & 1) != 0) {
        if (in_stack_00000208 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(in_stack_00000208 + 3) <= uVar31) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar14 = in_stack_00000208[uVar31 + 4];
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (lVar14 == 0) {
LAB_05fda1e0:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar15 = *(long *)(lVar14 + 0x10);
        lVar23 = *unaff_x19;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_05fda1e0;
        uVar7 = *(uint *)(lVar14 + 0x18);
        uVar1 = (uint)in_stack_00000360 & 0xffff;
        if (uVar7 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar7 + 1;
          *(uint *)(lVar15 + (long)(int)uVar7 * 4 + 0x20) = uVar1;
        }
        else {
          FUN_03fb3e1c(lVar14,uVar1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_0515e9cc(&stack0x000002c0,
                   *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
      uVar31 = uVar31 + 1;
    } while (uVar31 != 3);
    lVar14 = *(long *)(in_stack_00000048 + 0x30);
    if (DAT_06dc487e == '\0') {
      FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__
                  );
      DAT_06dc487e = '\x01';
    }
    if (lVar14 == 0) goto LAB_05fdad7c;
    iVar27 = unaff_x25[0x10];
    uVar1 = unaff_x25[0x11];
    uVar31 = (ulong)uVar1;
    lVar23 = *(long *)
              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
    lVar15 = *(long *)(lVar23 + 0x38);
    if (lVar15 == 0) {
      FUN_02dcfd74(lVar23);
      lVar15 = *(long *)(lVar23 + 0x38);
    }
    lVar14 = FUN_036ee4c4(*(undefined8 *)(lVar14 + 0x40),*(undefined8 *)(lVar15 + 0x10));
    if ((int)uVar1 < 0) {
      FUN_05508bc8(0);
    }
    else if (uVar1 != 0) {
      puVar30 = (ushort *)(lVar14 + (long)iVar27 * 0x18);
      do {
        if (in_stack_00000228 == 0) goto LAB_05fdad7c;
        uVar6 = *puVar30;
        lVar14 = *(long *)(in_stack_00000228 + 0x18);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (lVar14 == 0) goto LAB_05fdad7c;
        lVar15 = *(long *)(lVar14 + 0x10);
        lVar23 = *unaff_x19;
        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
        if (lVar15 == 0) goto LAB_05fdad7c;
        uVar1 = *(uint *)(lVar14 + 0x18);
        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
          *(uint *)(lVar14 + 0x18) = uVar1 + 1;
          *(uint *)(lVar15 + (long)(int)uVar1 * 4 + 0x20) = (uint)uVar6;
        }
        else {
          FUN_03fb3e1c(lVar14,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
        }
        uVar31 = uVar31 - 1;
        puVar30 = puVar30 + 0xc;
      } while (uVar31 != 0);
    }
    if ((*in_stack_00000028 == 0) || (lVar14 = *(long *)(*in_stack_00000028 + 0x10), lVar14 == 0))
    goto LAB_05fdad7c;
    memcpy(&stack0x00000300,&stack0x000001f0,0x48);
    lVar15 = *(long *)(lVar14 + 0x10);
    lVar23 = *(long *)Method_UnityEngine_Animator_GetBoneTransform__;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_05fdad7c;
    uVar1 = *(uint *)(lVar14 + 0x18);
    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
      lVar15 = lVar15 + (long)(int)uVar1 * 0x48;
      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
      memcpy((void *)(lVar15 + 0x20),&stack0x00000300,0x48);
      LeanTween__value(lVar15 + 0x20,0);
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70);
      memcpy(&stack0x00000350,&stack0x00000300,0x48);
      FUN_041c36bc(lVar14,&stack0x00000350,uVar13);
    }
    iVar27 = iStack0000000000000030 + 1;
    if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
    lVar14 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
    if ((*(ushort *)(*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135)
        & 1) == 0) {
      FUN_02dcfd18();
    }
    if (*(int *)(lVar14 + 8) <= iVar27) {
      lVar14 = *(long *)(in_stack_00000048 + 0x30);
      if (lVar14 != 0) {
        LeanTween__value(&stack0x00000350);
        uVar13 = 0xffffffff;
        in_stack_000001b0 = lVar14;
        in_stack_000001b8 = uVar13;
        uVar31 = FUN_05fd2394(&stack0x000001b0);
        puVar9 = Method_UnityEngine_AssetBundle_LoadAsset__;
        puVar8 = 
        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputEventTrace_DeviceInfo>__
        ;
        if ((uVar31 & 1) != 0) break;
        goto LAB_05fda840;
      }
      goto LAB_05fdad7c;
    }
    if (*(long *)(in_stack_00000048 + 0x18) == 0) goto LAB_05fdad7c;
    unaff_x26 = FUN_0400ff1c(*(long *)(in_stack_00000048 + 0x18),iVar27,
                             *(undefined8 *)
                              Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__);
    if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
    _iStack0000000000000030 = CONCAT44(uStack0000000000000034,iVar27);
    unaff_x25 = (undefined4 *)
                FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar27,
                             *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
    lVar14 = *(long *)(in_stack_00000048 + 0x30);
    if (lVar14 == 0) goto LAB_05fdad7c;
    uVar11 = *unaff_x25;
    if (DAT_06dc487d == '\0') {
      FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__);
      DAT_06dc487d = '\x01';
    }
    lVar14 = *(long *)(lVar14 + 0x28);
    if (lVar14 == 0) goto LAB_05fdad7c;
    puVar12 = (undefined8 *)
              FUN_0504d8a8(lVar14,uVar11,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                          );
    uVar13 = FUN_05fd8904(*puVar12);
    LeanTween__value(&stack0x000001f0,uVar13);
    puVar8 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
    ;
    if (unaff_x26 == 0) goto LAB_05fdad7c;
    in_stack_00000200 =
         (long *)FUN_02d966a4(*(undefined8 *)
                               Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
                              ,3);
    LeanTween__value(&stack0x00000200,in_stack_00000200);
    in_stack_00000208 = (long *)FUN_02d966a4(*(undefined8 *)puVar8,3);
    LeanTween__value(&stack0x00000208,in_stack_00000208);
    lVar14 = *(long *)Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar14 = *(long *)
                Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
    }
    if (**(long **)(lVar14 + 0xb8) == 0) goto LAB_05fdad7c;
    FUN_04e95158(**(long **)(lVar14 + 0xb8),unaff_x26,&stack0x00000230,
                 *(undefined8 *)
                  Method_UnityEngine_Animator_GetBehaviour<OvrAvatarDefaultStateListener>__);
    in_stack_00000228 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_SetURN__)
    ;
    FUN_05fbe1f4();
    LeanTween__value(&stack0x00000228,in_stack_00000228);
    if ((((in_stack_00000228 == 0) ||
         (*(undefined4 *)(in_stack_00000228 + 0x28) = unaff_x25[0x19], in_stack_00000228 == 0)) ||
        (*(undefined4 *)(in_stack_00000228 + 0x2c) = unaff_x25[0x1a], in_stack_00000228 == 0)) ||
       ((*(undefined4 *)(in_stack_00000228 + 0x30) = unaff_x25[0x1b], in_stack_00000228 == 0 ||
        (*(undefined4 *)(in_stack_00000228 + 0x34) = unaff_x25[0x1c], in_stack_00000228 == 0))))
    goto LAB_05fdad7c;
    *(undefined1 *)(in_stack_00000228 + 0x38) = *(undefined1 *)((long)unaff_x25 + 0x7d);
    if (*(long *)(unaff_x26 + 200) == 0) goto LAB_05fdad7c;
    FUN_03f20aec(&stack0x00000350,*(long *)(unaff_x26 + 200),
                 *(undefined8 *)Method_UnityEngine_AndroidJavaProxy_hashCode__);
    in_stack_000001c0 = 0;
    in_stack_000001c8 = unaff_x24;
    _uStack00000000000001d0 = in_stack_00000360;
    in_stack_000001d8 = in_stack_00000368;
    in_stack_000001e0 = in_stack_00000370;
    while (uVar31 = FUN_05130778(&stack0x000001c0,
                                 *(undefined8 *)
                                  Method_UnityEngine_AndroidJavaObjectUnityOwned_Dispose__),
          (uVar31 & 1) != 0) {
      if (in_stack_00000228 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar6 = uStack00000000000001d0;
      uVar31 = _uStack00000000000001d0 & 0xffff;
      lVar14 = *(long *)(in_stack_00000228 + 0x20);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar14 == 0) {
LAB_05fda484:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar15 = *(long *)(lVar14 + 0x10);
      lVar23 = *unaff_x19;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (lVar15 == 0) goto LAB_05fda484;
      uVar1 = *(uint *)(lVar14 + 0x18);
      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
        *(uint *)(lVar15 + (long)(int)uVar1 * 4 + 0x20) = (uint)uVar6;
      }
      else {
        FUN_03fb3e1c(lVar14,uVar31,
                     *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
      }
    }
    param_1 = &
              Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnGestureStarted<TapGesture>__
    ;
  } while( true );
  while( true ) {
    if (0 < *(int *)(lVar15 + 0x2a0)) {
      lVar21 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__
                                 );
      FUN_0552aca4(lVar21,0);
      uVar17 = FUN_05fd7f88(*(undefined8 *)(in_stack_00000048 + 0x30),lVar15);
      if (lVar21 == 0) goto LAB_05fdad7c;
      *(undefined8 *)(lVar21 + 0x10) = uVar17;
      LeanTween__value();
      lVar24 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_CompileXPath__);
      FUN_0400f984(lVar24,*(undefined8 *)Method_AssetInputExample_DoChangeThing__);
      plVar29 = (long *)(lVar21 + 0x18);
      *plVar29 = lVar24;
      LeanTween__value(plVar29,lVar24);
      iVar27 = 0;
      while( true ) {
        iVar4 = *(int *)(lVar15 + 0x294);
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (iVar4 <= iVar27) break;
        lVar24 = *plVar29;
        uVar17 = FUN_05fd7aa8(*(undefined8 *)(in_stack_00000048 + 0x30),lVar15,iVar27);
        if (lVar24 == 0) goto LAB_05fdad7c;
        lVar22 = *(long *)(lVar24 + 0x10);
        lVar25 = *(long *)puVar9;
        *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
        if (lVar22 == 0) goto LAB_05fdad7c;
        uVar1 = *(uint *)(lVar24 + 0x18);
        if (uVar1 < *(uint *)(lVar22 + 0x18)) {
          *(uint *)(lVar24 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar22 + (long)(int)uVar1 * 8 + 0x20) = uVar17;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar24,uVar17,
                       *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
        }
        iVar27 = iVar27 + 1;
      }
      uVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_UnityEngine_Assertions_Assert_IsNull<UIRAtlasAllocator_AreaNode>__
                                 );
      FUN_04de9e6c(uVar17,*(undefined8 *)
                           Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElement>__);
      *(undefined8 *)(lVar21 + 0x20) = uVar17;
      LeanTween__value((undefined8 *)(lVar21 + 0x20),uVar17);
      *(long *)(lVar21 + 0x28) = lVar23;
      LeanTween__value((long *)(lVar21 + 0x28),lVar23);
      puVar10 = Method_AssetInputExample_DoPressedThing__;
      if (lVar23 == 0) goto LAB_05fdad7c;
      if (0 < *(int *)(lVar23 + 0x18)) {
        iVar27 = 0;
        do {
          uVar11 = FUN_03fb3b24(lVar23,iVar27,*(undefined8 *)PTR_DAT_069fe588);
          if (*in_stack_00000028 == 0) goto LAB_05fdad7c;
          lVar15 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar15 == 0) ||
             (FUN_041c332c(&stack0x00000350,lVar15,uVar11,*(undefined8 *)puVar10),
             in_stack_00000170 = lVar14, in_stack_00000178 = uVar13,
             in_stack_00000180 = in_stack_00000360, in_stack_00000188 = in_stack_00000368,
             in_stack_00000190 = in_stack_00000370, in_stack_00000198 = in_stack_00000378,
             in_stack_000001a0 = in_stack_00000380, in_stack_00000388 == 0)) goto LAB_05fdad7c;
          *(long *)(in_stack_00000388 + 0x10) = lVar21;
          LeanTween__value((long *)(in_stack_00000388 + 0x10),lVar21);
          in_stack_00000380 = in_stack_000001a0;
          in_stack_00000378 = in_stack_00000198;
          in_stack_00000370 = in_stack_00000190;
          in_stack_00000368 = in_stack_00000188;
          in_stack_00000360 = in_stack_00000180;
          uVar13 = in_stack_00000178;
          lVar14 = in_stack_00000170;
          if ((*in_stack_00000028 == 0) ||
             (lVar15 = *(long *)(*in_stack_00000028 + 0x10), lVar15 == 0)) goto LAB_05fdad7c;
          FUN_041c3390(lVar15,uVar11,&stack0x00000350,
                       *(undefined8 *)Method_AssetInputExample_DoReleasedThing__);
          iVar27 = iVar27 + 1;
          _iStack0000000000000030 = in_stack_00000388;
        } while (iVar27 < *(int *)(lVar23 + 0x18));
      }
    }
    uVar31 = FUN_05fd2394(&stack0x000001b0);
    if ((uVar31 & 1) == 0) break;
    lVar15 = FUN_05fd233c(&stack0x000001b0);
    lVar23 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar23,*(undefined8 *)PTR_DAT_069fc3f0);
    iVar27 = *(int *)(lVar15 + 0x298);
    if (iVar27 < *(int *)(lVar15 + 0x29c) + 1) {
      if (lVar23 == 0) goto LAB_05fdad7c;
      lVar21 = *unaff_x19;
      do {
        lVar24 = *(long *)(lVar23 + 0x10);
        *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
        if (lVar24 == 0) goto LAB_05fdad7c;
        uVar1 = *(uint *)(lVar23 + 0x18);
        if (uVar1 < *(uint *)(lVar24 + 0x18)) {
          *(uint *)(lVar23 + 0x18) = uVar1 + 1;
          *(int *)(lVar24 + (long)(int)uVar1 * 4 + 0x20) = iVar27;
        }
        else {
          FUN_03fb3e1c(lVar23,iVar27,
                       *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
          lVar21 = *unaff_x19;
        }
        iVar27 = iVar27 + 1;
      } while (iVar27 < *(int *)(lVar15 + 0x29c) + 1);
    }
  }
LAB_05fda840:
  lVar14 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar14 != 0) {
    iVar27 = 0;
    do {
      lVar14 = *(long *)(lVar14 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) & 1) ==
          0) {
        FUN_02dcfd18();
      }
      if (*(int *)(lVar14 + 8) <= iVar27) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar18 = (int *)FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar27,
                                    *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
      if (((*in_stack_00000028 == 0) || (lVar14 = *(long *)(*in_stack_00000028 + 0x10), lVar14 == 0)
          ) || (FUN_041c332c(&stack0x00000350,lVar14,*piVar18,
                             *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
               in_stack_00000388 == 0)) break;
      lVar14 = *(long *)(in_stack_00000388 + 0x10);
      if (lVar14 != 0) {
        lVar15 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_06dc4872 == '\0') {
          FUN_02d965b8(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                      );
          DAT_06dc4872 = '\x01';
        }
        puVar8 = Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
        if (lVar15 == 0) break;
        iVar4 = piVar18[10];
        uVar1 = piVar18[0xb];
        uVar31 = (ulong)uVar1;
        lVar21 = *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
        ;
        lVar23 = *(long *)(lVar21 + 0x38);
        if (lVar23 == 0) {
          FUN_02dcfd74(lVar21);
          lVar23 = *(long *)(lVar21 + 0x38);
        }
        lVar15 = FUN_036ee4d8(*(undefined8 *)(lVar15 + 0x30),*(undefined8 *)(lVar23 + 0x10));
        if ((int)uVar1 < 0) {
          FUN_05508bc8(0);
        }
        else if (uVar1 != 0) {
          puVar28 = (undefined4 *)(lVar15 + (long)iVar4 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar15 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar15 == 0))
            goto LAB_05fdad7c;
            pcVar19 = (char *)FUN_05fdfe80(lVar15,*(undefined8 *)(puVar28 + -2),*puVar28,0);
            if (*pcVar19 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              iVar4 = *(int *)(pcVar19 + 4);
              plVar29 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02dcfd18(*(long *)(*(long *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                      + 0x20));
              }
              memcpy(&stack0x000000f0,(void *)(*plVar29 + (long)iVar4 * 0x80),0x80);
              if (in_stack_00000110 < 0) {
                FUN_05fde34c(&stack0x00000350,3,*piVar18,0);
                uVar13 = 0;
              }
              else {
                uVar13 = FUN_05fdf5d4(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                      *piVar18,0);
              }
              uVar17 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),piVar18,
                                    &stack0x000000f0,uVar13);
              in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar8,uVar17,0);
              uVar11 = in_stack_000000f0;
              lVar15 = *(long *)(lVar14 + 0x20);
              in_stack_000000e8 = 0;
              LeanTween__value(&stack0x000000e0,in_stack_000000e0);
              in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar13 == 0xc);
              if (lVar15 == 0) goto LAB_05fdad7c;
              FUN_04dec6b0(lVar15,uVar11,in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)
                            Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
            }
            uVar31 = uVar31 - 1;
            puVar28 = puVar28 + 3;
          } while (uVar31 != 0);
        }
        if (-1 < piVar18[8]) {
          lVar15 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_06dc4873 == '\0') {
            FUN_02d965b8(
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                        );
            DAT_06dc4873 = '\x01';
          }
          if (lVar15 == 0) break;
          iVar4 = piVar18[0xc];
          uVar1 = piVar18[0xd];
          lVar21 = *(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
          ;
          lVar23 = *(long *)(lVar21 + 0x38);
          if (lVar23 == 0) {
            FUN_02dcfd74(lVar21);
            lVar23 = *(long *)(lVar21 + 0x38);
          }
          lVar15 = FUN_036ee4ec(*(undefined8 *)(lVar15 + 0x38),*(undefined8 *)(lVar23 + 0x10));
          if ((int)uVar1 < 0) {
            FUN_05508bc8(0);
          }
          else if (uVar1 != 0) {
            uVar31 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              puVar12 = (undefined8 *)(lVar15 + (long)iVar4 * 0xc + uVar31 * 0xc);
              _iStack0000000000000030 =
                   _iStack0000000000000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar12 + 1);
              lVar23 = FUN_05fdc35c(*(long *)(in_stack_00000048 + 0x30),*puVar12,
                                    _iStack0000000000000030,0);
              if (*(int *)(lVar23 + 8) != *piVar18) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar23 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar23 == 0))
                goto LAB_05fdad7c;
                lVar23 = FUN_05fdfe80(lVar23,*puVar12,*(undefined4 *)(puVar12 + 1),0);
                iVar5 = *(int *)(lVar23 + 8);
                if (0 < iVar5) {
                  iVar26 = 0;
                  do {
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar23 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar23 == 0)
                       ) goto LAB_05fdad7c;
                    uVar13 = *puVar12;
                    if (DAT_06dc486d == '\0') {
                      FUN_02d965b8();
                      DAT_06dc486d = '\x01';
                    }
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar21 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar21 == 0)
                       ) goto LAB_05fdad7c;
                    lVar21 = *(long *)(lVar21 + 0x20);
                    iVar2 = *(int *)(lVar23 + 0x28);
                    iVar3 = *(int *)(lVar23 + 0x2c);
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    if (DAT_06dc4288 == '\0') {
                      FUN_02d965b8();
                      DAT_06dc4288 = '\x01';
                    }
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    if (lVar21 == 0) goto LAB_05fdad7c;
                    if (*(uint *)(lVar21 + 0x18) <= *(uint *)(puVar12 + 1)) goto LAB_05fdada0;
                    piVar20 = (int *)FUN_042c8e28(lVar21 + (long)(int)*(uint *)(puVar12 + 1) * 8 +
                                                  0x20,iVar26 + ((int)((ulong)uVar13 >> 0x20) +
                                                                iVar2 * ((uint)uVar13 & 0xffff)) *
                                                                iVar3,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                                 );
                    lVar23 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar23 == 0) goto LAB_05fdad7c;
                    iVar2 = *piVar20;
                    plVar29 = *(long **)(lVar23 + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                    + 0x20) + 0x135) & 1) == 0) {
                      FUN_02dcfd18(*(long *)(*(long *)
                                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                            + 0x20));
                      lVar23 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar29 + (long)iVar2 * 0x80),0x80);
                    uVar11 = in_stack_00000060;
                    uVar13 = FUN_05fdf5d4(lVar23,piVar18[8],in_stack_00000060,0);
                    uVar17 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar18,uVar13);
                    in_stack_000000e0 =
                         FUN_05362cb4(*(undefined8 *)
                                       Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__
                                      ,uVar17,0);
                    lVar23 = *(long *)(lVar14 + 0x20);
                    in_stack_000000e8 = 0;
                    LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar13 == 0xc);
                    if (lVar23 == 0) goto LAB_05fdad7c;
                    FUN_04dec6b0(lVar23,uVar11,in_stack_000000e0,in_stack_000000e8,
                                 *(undefined8 *)
                                  Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
                    iVar26 = iVar26 + 1;
                  } while (iVar5 != iVar26);
                }
              }
              uVar31 = uVar31 + 1;
            } while (uVar31 != uVar1);
          }
        }
      }
      lVar14 = *(long *)(in_stack_00000048 + 0x30);
      iVar27 = iVar27 + 1;
    } while (lVar14 != 0);
  }
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


