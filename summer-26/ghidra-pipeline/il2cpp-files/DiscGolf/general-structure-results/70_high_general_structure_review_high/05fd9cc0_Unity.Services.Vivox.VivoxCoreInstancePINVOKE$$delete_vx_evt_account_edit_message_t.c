/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_evt_account_edit_message_t
ENTRY_POINT: 05fd9cc0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_evt_account_edit_message_t
               (undefined **param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  int *piVar20;
  char *pcVar21;
  int *piVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  int iVar29;
  undefined8 *unaff_x23;
  undefined4 *puVar30;
  undefined8 unaff_x24;
  uint *unaff_x25;
  long unaff_x26;
  undefined1 *unaff_x28;
  long lVar31;
  ushort *puVar32;
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
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  ulong in_stack_00000360;
  ulong in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  ulong in_stack_00000388;
  
  while( true ) {
    puVar12 = (undefined8 *)FUN_0504d8a8(param_2,param_3,*(undefined8 *)param_1[0x1bd]);
    uVar13 = FUN_05fd8904(*puVar12);
    LeanTween__value(&stack0x000001f0,uVar13);
    puVar8 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
    ;
    if (unaff_x26 == 0) break;
    plVar14 = (long *)FUN_02d966a4(*(undefined8 *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
                                   ,3);
    LeanTween__value(unaff_x28 + 0x10,plVar14);
    plVar15 = (long *)FUN_02d966a4(*(undefined8 *)puVar8,3);
    LeanTween__value(unaff_x28 + 0x18,plVar15);
    lVar16 = *(long *)Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
    if (*(int *)(lVar16 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar16 = *(long *)
                Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
    }
    if (**(long **)(lVar16 + 0xb8) == 0) break;
    FUN_04e95158(**(long **)(lVar16 + 0xb8),unaff_x26,unaff_x28 + 0x40,
                 *(undefined8 *)
                  Method_UnityEngine_Animator_GetBehaviour<OvrAvatarDefaultStateListener>__);
    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_SetURN__);
    FUN_05fbe1f4();
    LeanTween__value(unaff_x28 + 0x38,lVar16);
    if ((((lVar16 == 0) || (*(uint *)(lVar16 + 0x28) = unaff_x25[0x19], lVar16 == 0)) ||
        (*(uint *)(lVar16 + 0x2c) = unaff_x25[0x1a], lVar16 == 0)) ||
       ((*(uint *)(lVar16 + 0x30) = unaff_x25[0x1b], lVar16 == 0 ||
        (*(uint *)(lVar16 + 0x34) = unaff_x25[0x1c], lVar16 == 0)))) break;
    *(undefined1 *)(lVar16 + 0x38) = *(undefined1 *)((long)unaff_x25 + 0x7d);
    if (*(long *)(unaff_x26 + 200) == 0) break;
    FUN_03f20aec(&stack0x00000350,*(long *)(unaff_x26 + 200),
                 *(undefined8 *)Method_UnityEngine_AndroidJavaProxy_hashCode__);
    in_stack_000001c0 = in_stack_00000350;
    in_stack_000001c8 = in_stack_00000358;
    _uStack00000000000001d0 = in_stack_00000360;
    in_stack_000001d8 = in_stack_00000368;
    in_stack_000001e0 = in_stack_00000370;
    while (uVar17 = FUN_05130778(&stack0x000001c0,
                                 *(undefined8 *)
                                  Method_UnityEngine_AndroidJavaObjectUnityOwned_Dispose__),
          (uVar17 & 1) != 0) {
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar5 = uStack00000000000001d0;
      uVar17 = _uStack00000000000001d0 & 0xffff;
      lVar31 = *(long *)(lVar16 + 0x20);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar31 == 0) {
LAB_05fda484:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar23 = *(long *)(lVar31 + 0x10);
      lVar25 = *unaff_x19;
      *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
      if (lVar23 == 0) goto LAB_05fda484;
      uVar6 = *(uint *)(lVar31 + 0x18);
      if (uVar6 < *(uint *)(lVar23 + 0x18)) {
        *(uint *)(lVar31 + 0x18) = uVar6 + 1;
        *(uint *)(lVar23 + (long)(int)uVar6 * 4 + 0x20) = (uint)uVar5;
      }
      else {
        FUN_03fb3e1c(lVar31,uVar17,
                     *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_05130774(&stack0x000001c0,*(undefined8 *)Method_UnityEngine_AndroidJavaObject__CallStatic__)
    ;
    uVar17 = 0;
    do {
      lVar31 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
      FUN_03fb358c(lVar31,*(undefined8 *)PTR_DAT_069fc3f0);
      if (plVar14 == (long *)0x0) goto LAB_05fdad7c;
      if ((lVar31 != 0) &&
         (lVar23 = thunk_FUN_02dd3048(lVar31,*(undefined8 *)(*plVar14 + 0x40)), lVar23 == 0)) {
LAB_05fdada4:
        uVar13 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar13,0);
      }
      if (*(uint *)(plVar14 + 3) <= uVar17) {
LAB_05fdada0:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      plVar14[uVar17 + 4] = lVar31;
      LeanTween__value(plVar14 + uVar17 + 4,lVar31);
      lVar31 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
      FUN_03fb358c(lVar31,*(undefined8 *)PTR_DAT_069fc3f0);
      if (plVar15 == (long *)0x0) goto LAB_05fdad7c;
      if ((lVar31 != 0) &&
         (lVar23 = thunk_FUN_02dd3048(lVar31,*(undefined8 *)(*plVar15 + 0x40)), lVar23 == 0))
      goto LAB_05fdada4;
      if (*(uint *)(plVar15 + 3) <= uVar17) goto LAB_05fdada0;
      plVar15[uVar17 + 4] = lVar31;
      LeanTween__value(plVar15 + uVar17 + 4,lVar31);
      lVar31 = *(long *)(unaff_x26 + 0xa8);
      if (lVar31 == 0) goto LAB_05fdad7c;
      if (*(uint *)(lVar31 + 0x18) <= uVar17) goto LAB_05fdada0;
      lVar31 = *(long *)(lVar31 + uVar17 * 8 + 0x20);
      if (lVar31 == 0) goto LAB_05fdad7c;
      FUN_04042130(&stack0x00000350,lVar31,
                   *(undefined8 *)
                    Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
LAB_05fda010:
      uVar18 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22);
      if ((uVar18 & 1) != 0) {
        if (*(long *)(unaff_x26 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar18 = FUN_040419bc(*(long *)(unaff_x26 + 0xd8),in_stack_00000360,
                              in_stack_00000368 & 0xffffffff,*unaff_x23);
        if ((uVar18 & 1) == 0) {
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(plVar14 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar31 = plVar14[uVar17 + 4];
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (lVar31 != 0) {
            lVar23 = *(long *)(lVar31 + 0x10);
            lVar25 = *unaff_x19;
            *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
            if (lVar23 != 0) {
              uVar7 = *(uint *)(lVar31 + 0x18);
              uVar6 = (uint)in_stack_00000360 & 0xffff;
              if (uVar7 < *(uint *)(lVar23 + 0x18)) {
                *(uint *)(lVar31 + 0x18) = uVar7 + 1;
                *(uint *)(lVar23 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
              }
              else {
                FUN_03fb3e1c(lVar31,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
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
      lVar31 = *(long *)(unaff_x26 + 0xb0);
      if (lVar31 == 0) goto LAB_05fdad7c;
      if (*(uint *)(lVar31 + 0x18) <= uVar17) goto LAB_05fdada0;
      lVar31 = *(long *)(lVar31 + uVar17 * 8 + 0x20);
      if (lVar31 == 0) goto LAB_05fdad7c;
      FUN_04042130(&stack0x00000350,lVar31,
                   *(undefined8 *)
                    Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
      in_stack_00000350 = 0;
      while (uVar18 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22), (uVar18 & 1) != 0) {
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(plVar15 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar31 = plVar15[uVar17 + 4];
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (lVar31 == 0) {
LAB_05fda1e0:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar23 = *(long *)(lVar31 + 0x10);
        lVar25 = *unaff_x19;
        *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
        if (lVar23 == 0) goto LAB_05fda1e0;
        uVar7 = *(uint *)(lVar31 + 0x18);
        uVar6 = (uint)in_stack_00000360 & 0xffff;
        if (uVar7 < *(uint *)(lVar23 + 0x18)) {
          *(uint *)(lVar31 + 0x18) = uVar7 + 1;
          *(uint *)(lVar23 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
        }
        else {
          FUN_03fb3e1c(lVar31,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_0515e9cc(&stack0x000002c0,
                   *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
      uVar17 = uVar17 + 1;
    } while (uVar17 != 3);
    lVar31 = *(long *)(in_stack_00000048 + 0x30);
    if (DAT_06dc487e == '\0') {
      FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__
                  );
      DAT_06dc487e = '\x01';
    }
    if (lVar31 == 0) break;
    uVar6 = unaff_x25[0x10];
    uVar7 = unaff_x25[0x11];
    uVar17 = (ulong)uVar7;
    lVar25 = *(long *)
              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
    lVar23 = *(long *)(lVar25 + 0x38);
    if (lVar23 == 0) {
      FUN_02dcfd74(lVar25);
      lVar23 = *(long *)(lVar25 + 0x38);
    }
    lVar31 = FUN_036ee4c4(*(undefined8 *)(lVar31 + 0x40),*(undefined8 *)(lVar23 + 0x10));
    if ((int)uVar7 < 0) {
      FUN_05508bc8(0);
    }
    else if (uVar7 != 0) {
      puVar32 = (ushort *)(lVar31 + (long)(int)uVar6 * 0x18);
      do {
        if (lVar16 == 0) goto LAB_05fdad7c;
        uVar5 = *puVar32;
        lVar31 = *(long *)(lVar16 + 0x18);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (lVar31 == 0) goto LAB_05fdad7c;
        lVar23 = *(long *)(lVar31 + 0x10);
        lVar25 = *unaff_x19;
        *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
        if (lVar23 == 0) goto LAB_05fdad7c;
        uVar6 = *(uint *)(lVar31 + 0x18);
        if (uVar6 < *(uint *)(lVar23 + 0x18)) {
          *(uint *)(lVar31 + 0x18) = uVar6 + 1;
          *(uint *)(lVar23 + (long)(int)uVar6 * 4 + 0x20) = (uint)uVar5;
        }
        else {
          FUN_03fb3e1c(lVar31,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
        }
        uVar17 = uVar17 - 1;
        puVar32 = puVar32 + 0xc;
      } while (uVar17 != 0);
    }
    if ((*in_stack_00000028 == 0) || (lVar16 = *(long *)(*in_stack_00000028 + 0x10), lVar16 == 0))
    break;
    memcpy(&stack0x00000300,&stack0x000001f0,0x48);
    lVar31 = *(long *)(lVar16 + 0x10);
    lVar23 = *(long *)Method_UnityEngine_Animator_GetBoneTransform__;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    if (lVar31 == 0) break;
    uVar6 = *(uint *)(lVar16 + 0x18);
    if (uVar6 < *(uint *)(lVar31 + 0x18)) {
      lVar31 = lVar31 + (long)(int)uVar6 * 0x48;
      *(uint *)(lVar16 + 0x18) = uVar6 + 1;
      memcpy((void *)(lVar31 + 0x20),&stack0x00000300,0x48);
      LeanTween__value(lVar31 + 0x20,0);
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70);
      memcpy(&stack0x00000350,&stack0x00000300,0x48);
      FUN_041c36bc(lVar16,&stack0x00000350,uVar13);
    }
    iVar29 = iStack0000000000000030 + 1;
    if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
    lVar16 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
    if ((*(ushort *)(*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135)
        & 1) == 0) {
      FUN_02dcfd18();
    }
    if (*(int *)(lVar16 + 8) <= iVar29) {
      lVar16 = *(long *)(in_stack_00000048 + 0x30);
      if (lVar16 != 0) {
        LeanTween__value(&stack0x00000350);
        uVar13 = 0xffffffff;
        in_stack_000001b0 = lVar16;
        in_stack_000001b8 = uVar13;
        uVar17 = FUN_05fd2394(&stack0x000001b0);
        puVar9 = Method_UnityEngine_AssetBundle_LoadAsset__;
        puVar8 = 
        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputEventTrace_DeviceInfo>__
        ;
        if ((uVar17 & 1) != 0) goto LAB_05fda528;
        goto LAB_05fda840;
      }
      break;
    }
    if (*(long *)(in_stack_00000048 + 0x18) == 0) break;
    unaff_x26 = FUN_0400ff1c(*(long *)(in_stack_00000048 + 0x18),iVar29,
                             *(undefined8 *)
                              Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__);
    if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
    _iStack0000000000000030 = CONCAT44(uStack0000000000000034,iVar29);
    unaff_x25 = (uint *)FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar29,
                                     *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
    lVar16 = *(long *)(in_stack_00000048 + 0x30);
    if (lVar16 == 0) break;
    uVar6 = *unaff_x25;
    unaff_x28 = &stack0x000001f0;
    if (DAT_06dc487d == '\0') {
      FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__);
      DAT_06dc487d = '\x01';
    }
    param_2 = *(long *)(lVar16 + 0x28);
    if (param_2 == 0) break;
    param_1 = &
              Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnGestureStarted<TapGesture>__
    ;
    param_3 = (ulong)uVar6;
    in_stack_00000358 = unaff_x24;
  }
  goto LAB_05fdad7c;
  while( true ) {
    if (0 < *(int *)(lVar31 + 0x2a0)) {
      lVar25 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__
                                 );
      FUN_0552aca4(lVar25,0);
      uVar19 = FUN_05fd7f88(*(undefined8 *)(in_stack_00000048 + 0x30),lVar31);
      if (lVar25 == 0) goto LAB_05fdad7c;
      *(undefined8 *)(lVar25 + 0x10) = uVar19;
      LeanTween__value();
      lVar26 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_CompileXPath__);
      FUN_0400f984(lVar26,*(undefined8 *)Method_AssetInputExample_DoChangeThing__);
      plVar14 = (long *)(lVar25 + 0x18);
      *plVar14 = lVar26;
      LeanTween__value(plVar14,lVar26);
      iVar29 = 0;
      while( true ) {
        iVar3 = *(int *)(lVar31 + 0x294);
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (iVar3 <= iVar29) break;
        lVar26 = *plVar14;
        uVar19 = FUN_05fd7aa8(*(undefined8 *)(in_stack_00000048 + 0x30),lVar31,iVar29);
        if (lVar26 == 0) goto LAB_05fdad7c;
        lVar24 = *(long *)(lVar26 + 0x10);
        lVar27 = *(long *)puVar9;
        *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
        if (lVar24 == 0) goto LAB_05fdad7c;
        uVar6 = *(uint *)(lVar26 + 0x18);
        if (uVar6 < *(uint *)(lVar24 + 0x18)) {
          *(uint *)(lVar26 + 0x18) = uVar6 + 1;
          *(undefined8 *)(lVar24 + (long)(int)uVar6 * 8 + 0x20) = uVar19;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar26,uVar19,
                       *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
        }
        iVar29 = iVar29 + 1;
      }
      uVar19 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_UnityEngine_Assertions_Assert_IsNull<UIRAtlasAllocator_AreaNode>__
                                 );
      FUN_04de9e6c(uVar19,*(undefined8 *)
                           Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElement>__);
      *(undefined8 *)(lVar25 + 0x20) = uVar19;
      LeanTween__value((undefined8 *)(lVar25 + 0x20),uVar19);
      *(long *)(lVar25 + 0x28) = lVar23;
      LeanTween__value((long *)(lVar25 + 0x28),lVar23);
      puVar10 = Method_AssetInputExample_DoPressedThing__;
      if (lVar23 == 0) goto LAB_05fdad7c;
      if (0 < *(int *)(lVar23 + 0x18)) {
        iVar29 = 0;
        do {
          uVar11 = FUN_03fb3b24(lVar23,iVar29,*(undefined8 *)PTR_DAT_069fe588);
          if (*in_stack_00000028 == 0) goto LAB_05fdad7c;
          lVar31 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar31 == 0) ||
             (FUN_041c332c(&stack0x00000350,lVar31,uVar11,*(undefined8 *)puVar10),
             in_stack_00000170 = lVar16, in_stack_00000178 = uVar13,
             in_stack_00000180 = in_stack_00000360, in_stack_00000188 = in_stack_00000368,
             in_stack_00000190 = in_stack_00000370, in_stack_00000198 = in_stack_00000378,
             in_stack_000001a0 = in_stack_00000380, in_stack_00000388 == 0)) goto LAB_05fdad7c;
          *(long *)(in_stack_00000388 + 0x10) = lVar25;
          LeanTween__value((long *)(in_stack_00000388 + 0x10),lVar25);
          in_stack_00000380 = in_stack_000001a0;
          in_stack_00000378 = in_stack_00000198;
          in_stack_00000370 = in_stack_00000190;
          in_stack_00000368 = in_stack_00000188;
          in_stack_00000360 = in_stack_00000180;
          uVar13 = in_stack_00000178;
          lVar16 = in_stack_00000170;
          if ((*in_stack_00000028 == 0) ||
             (lVar31 = *(long *)(*in_stack_00000028 + 0x10), lVar31 == 0)) goto LAB_05fdad7c;
          FUN_041c3390(lVar31,uVar11,&stack0x00000350,
                       *(undefined8 *)Method_AssetInputExample_DoReleasedThing__);
          iVar29 = iVar29 + 1;
          _iStack0000000000000030 = in_stack_00000388;
        } while (iVar29 < *(int *)(lVar23 + 0x18));
      }
    }
    uVar17 = FUN_05fd2394(&stack0x000001b0);
    if ((uVar17 & 1) == 0) break;
LAB_05fda528:
    lVar31 = FUN_05fd233c(&stack0x000001b0);
    lVar23 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar23,*(undefined8 *)PTR_DAT_069fc3f0);
    iVar29 = *(int *)(lVar31 + 0x298);
    if (iVar29 < *(int *)(lVar31 + 0x29c) + 1) {
      if (lVar23 == 0) goto LAB_05fdad7c;
      lVar25 = *unaff_x19;
      do {
        lVar26 = *(long *)(lVar23 + 0x10);
        *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
        if (lVar26 == 0) goto LAB_05fdad7c;
        uVar6 = *(uint *)(lVar23 + 0x18);
        if (uVar6 < *(uint *)(lVar26 + 0x18)) {
          *(uint *)(lVar23 + 0x18) = uVar6 + 1;
          *(int *)(lVar26 + (long)(int)uVar6 * 4 + 0x20) = iVar29;
        }
        else {
          FUN_03fb3e1c(lVar23,iVar29,
                       *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
          lVar25 = *unaff_x19;
        }
        iVar29 = iVar29 + 1;
      } while (iVar29 < *(int *)(lVar31 + 0x29c) + 1);
    }
  }
LAB_05fda840:
  lVar16 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar16 != 0) {
    iVar29 = 0;
    do {
      lVar16 = *(long *)(lVar16 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) & 1) ==
          0) {
        FUN_02dcfd18();
      }
      if (*(int *)(lVar16 + 8) <= iVar29) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar20 = (int *)FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar29,
                                    *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
      if (((*in_stack_00000028 == 0) || (lVar16 = *(long *)(*in_stack_00000028 + 0x10), lVar16 == 0)
          ) || (FUN_041c332c(&stack0x00000350,lVar16,*piVar20,
                             *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
               in_stack_00000388 == 0)) break;
      lVar16 = *(long *)(in_stack_00000388 + 0x10);
      if (lVar16 != 0) {
        lVar31 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_06dc4872 == '\0') {
          FUN_02d965b8(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                      );
          DAT_06dc4872 = '\x01';
        }
        puVar8 = Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
        if (lVar31 == 0) break;
        iVar3 = piVar20[10];
        uVar6 = piVar20[0xb];
        uVar17 = (ulong)uVar6;
        lVar25 = *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
        ;
        lVar23 = *(long *)(lVar25 + 0x38);
        if (lVar23 == 0) {
          FUN_02dcfd74(lVar25);
          lVar23 = *(long *)(lVar25 + 0x38);
        }
        lVar31 = FUN_036ee4d8(*(undefined8 *)(lVar31 + 0x30),*(undefined8 *)(lVar23 + 0x10));
        if ((int)uVar6 < 0) {
          FUN_05508bc8(0);
        }
        else if (uVar6 != 0) {
          puVar30 = (undefined4 *)(lVar31 + (long)iVar3 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar31 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar31 == 0))
            goto LAB_05fdad7c;
            pcVar21 = (char *)FUN_05fdfe80(lVar31,*(undefined8 *)(puVar30 + -2),*puVar30,0);
            if (*pcVar21 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              iVar3 = *(int *)(pcVar21 + 4);
              plVar14 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02dcfd18(*(long *)(*(long *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                      + 0x20));
              }
              memcpy(&stack0x000000f0,(void *)(*plVar14 + (long)iVar3 * 0x80),0x80);
              if (in_stack_00000110 < 0) {
                FUN_05fde34c(&stack0x00000350,3,*piVar20,0);
                uVar13 = 0;
              }
              else {
                uVar13 = FUN_05fdf5d4(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                      *piVar20,0);
              }
              uVar19 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),piVar20,
                                    &stack0x000000f0,uVar13);
              in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar8,uVar19,0);
              uVar11 = in_stack_000000f0;
              lVar31 = *(long *)(lVar16 + 0x20);
              in_stack_000000e8 = 0;
              LeanTween__value(&stack0x000000e0,in_stack_000000e0);
              in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar13 == 0xc);
              if (lVar31 == 0) goto LAB_05fdad7c;
              FUN_04dec6b0(lVar31,uVar11,in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)
                            Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
            }
            uVar17 = uVar17 - 1;
            puVar30 = puVar30 + 3;
          } while (uVar17 != 0);
        }
        if (-1 < piVar20[8]) {
          lVar31 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_06dc4873 == '\0') {
            FUN_02d965b8(
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                        );
            DAT_06dc4873 = '\x01';
          }
          if (lVar31 == 0) break;
          iVar3 = piVar20[0xc];
          uVar6 = piVar20[0xd];
          lVar25 = *(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
          ;
          lVar23 = *(long *)(lVar25 + 0x38);
          if (lVar23 == 0) {
            FUN_02dcfd74(lVar25);
            lVar23 = *(long *)(lVar25 + 0x38);
          }
          lVar31 = FUN_036ee4ec(*(undefined8 *)(lVar31 + 0x38),*(undefined8 *)(lVar23 + 0x10));
          if ((int)uVar6 < 0) {
            FUN_05508bc8(0);
          }
          else if (uVar6 != 0) {
            uVar17 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              puVar12 = (undefined8 *)(lVar31 + (long)iVar3 * 0xc + uVar17 * 0xc);
              _iStack0000000000000030 =
                   _iStack0000000000000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar12 + 1);
              lVar23 = FUN_05fdc35c(*(long *)(in_stack_00000048 + 0x30),*puVar12,
                                    _iStack0000000000000030,0);
              if (*(int *)(lVar23 + 8) != *piVar20) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar23 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar23 == 0))
                goto LAB_05fdad7c;
                lVar23 = FUN_05fdfe80(lVar23,*puVar12,*(undefined4 *)(puVar12 + 1),0);
                iVar4 = *(int *)(lVar23 + 8);
                if (0 < iVar4) {
                  iVar28 = 0;
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
                       (lVar25 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar25 == 0)
                       ) goto LAB_05fdad7c;
                    lVar25 = *(long *)(lVar25 + 0x20);
                    iVar1 = *(int *)(lVar23 + 0x28);
                    iVar2 = *(int *)(lVar23 + 0x2c);
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
                    if (lVar25 == 0) goto LAB_05fdad7c;
                    if (*(uint *)(lVar25 + 0x18) <= *(uint *)(puVar12 + 1)) goto LAB_05fdada0;
                    piVar22 = (int *)FUN_042c8e28(lVar25 + (long)(int)*(uint *)(puVar12 + 1) * 8 +
                                                  0x20,iVar28 + ((int)((ulong)uVar13 >> 0x20) +
                                                                iVar1 * ((uint)uVar13 & 0xffff)) *
                                                                iVar2,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                                 );
                    lVar23 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar23 == 0) goto LAB_05fdad7c;
                    iVar1 = *piVar22;
                    plVar14 = *(long **)(lVar23 + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                    + 0x20) + 0x135) & 1) == 0) {
                      FUN_02dcfd18(*(long *)(*(long *)
                                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                            + 0x20));
                      lVar23 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar14 + (long)iVar1 * 0x80),0x80);
                    uVar11 = in_stack_00000060;
                    uVar13 = FUN_05fdf5d4(lVar23,piVar20[8],in_stack_00000060,0);
                    uVar19 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar20,uVar13);
                    in_stack_000000e0 =
                         FUN_05362cb4(*(undefined8 *)
                                       Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__
                                      ,uVar19,0);
                    lVar23 = *(long *)(lVar16 + 0x20);
                    in_stack_000000e8 = 0;
                    LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar13 == 0xc);
                    if (lVar23 == 0) goto LAB_05fdad7c;
                    FUN_04dec6b0(lVar23,uVar11,in_stack_000000e0,in_stack_000000e8,
                                 *(undefined8 *)
                                  Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
                    iVar28 = iVar28 + 1;
                  } while (iVar4 != iVar28);
                }
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 != uVar6);
          }
        }
      }
      lVar16 = *(long *)(in_stack_00000048 + 0x30);
      iVar29 = iVar29 + 1;
    } while (lVar16 != 0);
  }
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


