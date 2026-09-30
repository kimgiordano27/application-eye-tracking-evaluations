/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_message_t_session_handle_get
ENTRY_POINT: 05fd9d3c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_message_t_session_handle_get
               (undefined8 param_1,long *param_2)

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
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  int *piVar19;
  char *pcVar20;
  int *piVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  int iVar28;
  undefined8 *unaff_x23;
  undefined4 *puVar29;
  undefined8 unaff_x24;
  undefined4 *unaff_x25;
  long unaff_x26;
  undefined1 *unaff_x28;
  long lVar30;
  ushort *puVar31;
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
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  ulong in_stack_00000360;
  ulong in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  ulong in_stack_00000388;
  
  do {
    LeanTween__value(unaff_x28 + 0x10,param_2);
    plVar14 = (long *)FUN_02d966a4(*unaff_x20,3);
    LeanTween__value(unaff_x28 + 0x18,plVar14);
    lVar15 = *(long *)Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar15 = *(long *)
                Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
    }
    if (**(long **)(lVar15 + 0xb8) == 0) goto LAB_05fdad7c;
    FUN_04e95158(**(long **)(lVar15 + 0xb8),unaff_x26,unaff_x28 + 0x40,
                 *(undefined8 *)
                  Method_UnityEngine_Animator_GetBehaviour<OvrAvatarDefaultStateListener>__);
    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_SetURN__);
    FUN_05fbe1f4();
    LeanTween__value(unaff_x28 + 0x38,lVar15);
    if ((((lVar15 == 0) || (*(undefined4 *)(lVar15 + 0x28) = unaff_x25[0x19], lVar15 == 0)) ||
        (*(undefined4 *)(lVar15 + 0x2c) = unaff_x25[0x1a], lVar15 == 0)) ||
       ((*(undefined4 *)(lVar15 + 0x30) = unaff_x25[0x1b], lVar15 == 0 ||
        (*(undefined4 *)(lVar15 + 0x34) = unaff_x25[0x1c], lVar15 == 0)))) goto LAB_05fdad7c;
    *(undefined1 *)(lVar15 + 0x38) = *(undefined1 *)((long)unaff_x25 + 0x7d);
    if (*(long *)(unaff_x26 + 200) == 0) goto LAB_05fdad7c;
    FUN_03f20aec(&stack0x00000350,*(long *)(unaff_x26 + 200),
                 *(undefined8 *)Method_UnityEngine_AndroidJavaProxy_hashCode__);
    in_stack_000001c0 = in_stack_00000350;
    in_stack_000001c8 = in_stack_00000358;
    _uStack00000000000001d0 = in_stack_00000360;
    in_stack_000001d8 = in_stack_00000368;
    in_stack_000001e0 = in_stack_00000370;
    while (uVar16 = FUN_05130778(&stack0x000001c0,
                                 *(undefined8 *)
                                  Method_UnityEngine_AndroidJavaObjectUnityOwned_Dispose__),
          (uVar16 & 1) != 0) {
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar5 = uStack00000000000001d0;
      uVar16 = _uStack00000000000001d0 & 0xffff;
      lVar30 = *(long *)(lVar15 + 0x20);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar30 == 0) {
LAB_05fda484:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar22 = *(long *)(lVar30 + 0x10);
      lVar24 = *unaff_x19;
      *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
      if (lVar22 == 0) goto LAB_05fda484;
      uVar6 = *(uint *)(lVar30 + 0x18);
      if (uVar6 < *(uint *)(lVar22 + 0x18)) {
        *(uint *)(lVar30 + 0x18) = uVar6 + 1;
        *(uint *)(lVar22 + (long)(int)uVar6 * 4 + 0x20) = (uint)uVar5;
      }
      else {
        FUN_03fb3e1c(lVar30,uVar16,
                     *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_05130774(&stack0x000001c0,*(undefined8 *)Method_UnityEngine_AndroidJavaObject__CallStatic__)
    ;
    uVar16 = 0;
    do {
      lVar30 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
      FUN_03fb358c(lVar30,*(undefined8 *)PTR_DAT_069fc3f0);
      if (in_stack_00000200 == (long *)0x0) goto LAB_05fdad7c;
      if ((lVar30 != 0) &&
         (lVar22 = thunk_FUN_02dd3048(lVar30,*(undefined8 *)(*in_stack_00000200 + 0x40)),
         lVar22 == 0)) {
LAB_05fdada4:
        uVar13 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar13,0);
      }
      if (*(uint *)(in_stack_00000200 + 3) <= uVar16) {
LAB_05fdada0:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      in_stack_00000200[uVar16 + 4] = lVar30;
      LeanTween__value(in_stack_00000200 + uVar16 + 4,lVar30);
      lVar30 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
      FUN_03fb358c(lVar30,*(undefined8 *)PTR_DAT_069fc3f0);
      if (plVar14 == (long *)0x0) goto LAB_05fdad7c;
      if ((lVar30 != 0) &&
         (lVar22 = thunk_FUN_02dd3048(lVar30,*(undefined8 *)(*plVar14 + 0x40)), lVar22 == 0))
      goto LAB_05fdada4;
      if (*(uint *)(plVar14 + 3) <= uVar16) goto LAB_05fdada0;
      plVar14[uVar16 + 4] = lVar30;
      LeanTween__value(plVar14 + uVar16 + 4,lVar30);
      lVar30 = *(long *)(unaff_x26 + 0xa8);
      if (lVar30 == 0) goto LAB_05fdad7c;
      if (*(uint *)(lVar30 + 0x18) <= uVar16) goto LAB_05fdada0;
      lVar30 = *(long *)(lVar30 + uVar16 * 8 + 0x20);
      if (lVar30 == 0) goto LAB_05fdad7c;
      FUN_04042130(&stack0x00000350,lVar30,
                   *(undefined8 *)
                    Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
LAB_05fda010:
      uVar17 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22);
      if ((uVar17 & 1) != 0) {
        if (*(long *)(unaff_x26 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar17 = FUN_040419bc(*(long *)(unaff_x26 + 0xd8),in_stack_00000360,
                              in_stack_00000368 & 0xffffffff,*unaff_x23);
        if ((uVar17 & 1) == 0) {
          if (in_stack_00000200 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(in_stack_00000200 + 3) <= uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar30 = in_stack_00000200[uVar16 + 4];
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (lVar30 != 0) {
            lVar22 = *(long *)(lVar30 + 0x10);
            lVar24 = *unaff_x19;
            *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
            if (lVar22 != 0) {
              uVar7 = *(uint *)(lVar30 + 0x18);
              uVar6 = (uint)in_stack_00000360 & 0xffff;
              if (uVar7 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar30 + 0x18) = uVar7 + 1;
                *(uint *)(lVar22 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
              }
              else {
                FUN_03fb3e1c(lVar30,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
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
      lVar30 = *(long *)(unaff_x26 + 0xb0);
      if (lVar30 == 0) goto LAB_05fdad7c;
      if (*(uint *)(lVar30 + 0x18) <= uVar16) goto LAB_05fdada0;
      lVar30 = *(long *)(lVar30 + uVar16 * 8 + 0x20);
      if (lVar30 == 0) goto LAB_05fdad7c;
      FUN_04042130(&stack0x00000350,lVar30,
                   *(undefined8 *)
                    Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
      in_stack_00000350 = 0;
      while (uVar17 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22), (uVar17 & 1) != 0) {
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(plVar14 + 3) <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar30 = plVar14[uVar16 + 4];
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (lVar30 == 0) {
LAB_05fda1e0:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar22 = *(long *)(lVar30 + 0x10);
        lVar24 = *unaff_x19;
        *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
        if (lVar22 == 0) goto LAB_05fda1e0;
        uVar7 = *(uint *)(lVar30 + 0x18);
        uVar6 = (uint)in_stack_00000360 & 0xffff;
        if (uVar7 < *(uint *)(lVar22 + 0x18)) {
          *(uint *)(lVar30 + 0x18) = uVar7 + 1;
          *(uint *)(lVar22 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
        }
        else {
          FUN_03fb3e1c(lVar30,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_0515e9cc(&stack0x000002c0,
                   *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
      uVar16 = uVar16 + 1;
    } while (uVar16 != 3);
    lVar30 = *(long *)(in_stack_00000048 + 0x30);
    if (DAT_06dc487e == '\0') {
      FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__
                  );
      DAT_06dc487e = '\x01';
    }
    if (lVar30 == 0) goto LAB_05fdad7c;
    iVar28 = unaff_x25[0x10];
    uVar6 = unaff_x25[0x11];
    uVar16 = (ulong)uVar6;
    lVar24 = *(long *)
              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
    lVar22 = *(long *)(lVar24 + 0x38);
    if (lVar22 == 0) {
      FUN_02dcfd74(lVar24);
      lVar22 = *(long *)(lVar24 + 0x38);
    }
    lVar30 = FUN_036ee4c4(*(undefined8 *)(lVar30 + 0x40),*(undefined8 *)(lVar22 + 0x10));
    if ((int)uVar6 < 0) {
      FUN_05508bc8(0);
    }
    else if (uVar6 != 0) {
      puVar31 = (ushort *)(lVar30 + (long)iVar28 * 0x18);
      do {
        if (lVar15 == 0) goto LAB_05fdad7c;
        uVar5 = *puVar31;
        lVar30 = *(long *)(lVar15 + 0x18);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (lVar30 == 0) goto LAB_05fdad7c;
        lVar22 = *(long *)(lVar30 + 0x10);
        lVar24 = *unaff_x19;
        *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
        if (lVar22 == 0) goto LAB_05fdad7c;
        uVar6 = *(uint *)(lVar30 + 0x18);
        if (uVar6 < *(uint *)(lVar22 + 0x18)) {
          *(uint *)(lVar30 + 0x18) = uVar6 + 1;
          *(uint *)(lVar22 + (long)(int)uVar6 * 4 + 0x20) = (uint)uVar5;
        }
        else {
          FUN_03fb3e1c(lVar30,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
        uVar16 = uVar16 - 1;
        puVar31 = puVar31 + 0xc;
      } while (uVar16 != 0);
    }
    if ((*in_stack_00000028 == 0) || (lVar15 = *(long *)(*in_stack_00000028 + 0x10), lVar15 == 0))
    goto LAB_05fdad7c;
    memcpy(&stack0x00000300,&stack0x000001f0,0x48);
    lVar30 = *(long *)(lVar15 + 0x10);
    lVar22 = *(long *)Method_UnityEngine_Animator_GetBoneTransform__;
    *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
    if (lVar30 == 0) goto LAB_05fdad7c;
    uVar6 = *(uint *)(lVar15 + 0x18);
    if (uVar6 < *(uint *)(lVar30 + 0x18)) {
      lVar30 = lVar30 + (long)(int)uVar6 * 0x48;
      *(uint *)(lVar15 + 0x18) = uVar6 + 1;
      memcpy((void *)(lVar30 + 0x20),&stack0x00000300,0x48);
      LeanTween__value(lVar30 + 0x20,0);
    }
    else {
      uVar13 = *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70);
      memcpy(&stack0x00000350,&stack0x00000300,0x48);
      FUN_041c36bc(lVar15,&stack0x00000350,uVar13);
    }
    iVar28 = iStack0000000000000030 + 1;
    if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
    lVar15 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
    if ((*(ushort *)(*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135)
        & 1) == 0) {
      FUN_02dcfd18();
    }
    if (*(int *)(lVar15 + 8) <= iVar28) {
      lVar15 = *(long *)(in_stack_00000048 + 0x30);
      if (lVar15 != 0) {
        LeanTween__value(&stack0x00000350);
        uVar13 = 0xffffffff;
        in_stack_000001b0 = lVar15;
        in_stack_000001b8 = uVar13;
        uVar16 = FUN_05fd2394(&stack0x000001b0);
        puVar9 = Method_UnityEngine_AssetBundle_LoadAsset__;
        puVar8 = 
        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputEventTrace_DeviceInfo>__
        ;
        if ((uVar16 & 1) != 0) break;
        goto LAB_05fda840;
      }
      goto LAB_05fdad7c;
    }
    if (*(long *)(in_stack_00000048 + 0x18) == 0) goto LAB_05fdad7c;
    unaff_x26 = FUN_0400ff1c(*(long *)(in_stack_00000048 + 0x18),iVar28,
                             *(undefined8 *)
                              Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__);
    if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
    _iStack0000000000000030 = CONCAT44(uStack0000000000000034,iVar28);
    unaff_x25 = (undefined4 *)
                FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar28,
                             *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
    lVar15 = *(long *)(in_stack_00000048 + 0x30);
    if (lVar15 == 0) goto LAB_05fdad7c;
    uVar11 = *unaff_x25;
    unaff_x28 = &stack0x000001f0;
    if (DAT_06dc487d == '\0') {
      FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__);
      DAT_06dc487d = '\x01';
    }
    lVar15 = *(long *)(lVar15 + 0x28);
    if (lVar15 == 0) goto LAB_05fdad7c;
    puVar12 = (undefined8 *)
              FUN_0504d8a8(lVar15,uVar11,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                          );
    uVar13 = FUN_05fd8904(*puVar12);
    LeanTween__value(&stack0x000001f0,uVar13);
    unaff_x20 = (undefined8 *)
                Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
    ;
    if (unaff_x26 == 0) goto LAB_05fdad7c;
    param_2 = (long *)FUN_02d966a4(*(undefined8 *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
                                   ,3);
    in_stack_00000200 = param_2;
    in_stack_00000358 = unaff_x24;
  } while( true );
  while( true ) {
    if (0 < *(int *)(lVar30 + 0x2a0)) {
      lVar24 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__
                                 );
      FUN_0552aca4(lVar24,0);
      uVar18 = FUN_05fd7f88(*(undefined8 *)(in_stack_00000048 + 0x30),lVar30);
      if (lVar24 == 0) goto LAB_05fdad7c;
      *(undefined8 *)(lVar24 + 0x10) = uVar18;
      LeanTween__value();
      lVar25 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_CompileXPath__);
      FUN_0400f984(lVar25,*(undefined8 *)Method_AssetInputExample_DoChangeThing__);
      plVar14 = (long *)(lVar24 + 0x18);
      *plVar14 = lVar25;
      LeanTween__value(plVar14,lVar25);
      iVar28 = 0;
      while( true ) {
        iVar3 = *(int *)(lVar30 + 0x294);
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (iVar3 <= iVar28) break;
        lVar25 = *plVar14;
        uVar18 = FUN_05fd7aa8(*(undefined8 *)(in_stack_00000048 + 0x30),lVar30,iVar28);
        if (lVar25 == 0) goto LAB_05fdad7c;
        lVar23 = *(long *)(lVar25 + 0x10);
        lVar26 = *(long *)puVar9;
        *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
        if (lVar23 == 0) goto LAB_05fdad7c;
        uVar6 = *(uint *)(lVar25 + 0x18);
        if (uVar6 < *(uint *)(lVar23 + 0x18)) {
          *(uint *)(lVar25 + 0x18) = uVar6 + 1;
          *(undefined8 *)(lVar23 + (long)(int)uVar6 * 8 + 0x20) = uVar18;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar25,uVar18,
                       *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
        }
        iVar28 = iVar28 + 1;
      }
      uVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_UnityEngine_Assertions_Assert_IsNull<UIRAtlasAllocator_AreaNode>__
                                 );
      FUN_04de9e6c(uVar18,*(undefined8 *)
                           Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElement>__);
      *(undefined8 *)(lVar24 + 0x20) = uVar18;
      LeanTween__value((undefined8 *)(lVar24 + 0x20),uVar18);
      *(long *)(lVar24 + 0x28) = lVar22;
      LeanTween__value((long *)(lVar24 + 0x28),lVar22);
      puVar10 = Method_AssetInputExample_DoPressedThing__;
      if (lVar22 == 0) goto LAB_05fdad7c;
      if (0 < *(int *)(lVar22 + 0x18)) {
        iVar28 = 0;
        do {
          uVar11 = FUN_03fb3b24(lVar22,iVar28,*(undefined8 *)PTR_DAT_069fe588);
          if (*in_stack_00000028 == 0) goto LAB_05fdad7c;
          lVar30 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar30 == 0) ||
             (FUN_041c332c(&stack0x00000350,lVar30,uVar11,*(undefined8 *)puVar10),
             in_stack_00000170 = lVar15, in_stack_00000178 = uVar13,
             in_stack_00000180 = in_stack_00000360, in_stack_00000188 = in_stack_00000368,
             in_stack_00000190 = in_stack_00000370, in_stack_00000198 = in_stack_00000378,
             in_stack_000001a0 = in_stack_00000380, in_stack_00000388 == 0)) goto LAB_05fdad7c;
          *(long *)(in_stack_00000388 + 0x10) = lVar24;
          LeanTween__value((long *)(in_stack_00000388 + 0x10),lVar24);
          in_stack_00000380 = in_stack_000001a0;
          in_stack_00000378 = in_stack_00000198;
          in_stack_00000370 = in_stack_00000190;
          in_stack_00000368 = in_stack_00000188;
          in_stack_00000360 = in_stack_00000180;
          uVar13 = in_stack_00000178;
          lVar15 = in_stack_00000170;
          if ((*in_stack_00000028 == 0) ||
             (lVar30 = *(long *)(*in_stack_00000028 + 0x10), lVar30 == 0)) goto LAB_05fdad7c;
          FUN_041c3390(lVar30,uVar11,&stack0x00000350,
                       *(undefined8 *)Method_AssetInputExample_DoReleasedThing__);
          iVar28 = iVar28 + 1;
          _iStack0000000000000030 = in_stack_00000388;
        } while (iVar28 < *(int *)(lVar22 + 0x18));
      }
    }
    uVar16 = FUN_05fd2394(&stack0x000001b0);
    if ((uVar16 & 1) == 0) break;
    lVar30 = FUN_05fd233c(&stack0x000001b0);
    lVar22 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar22,*(undefined8 *)PTR_DAT_069fc3f0);
    iVar28 = *(int *)(lVar30 + 0x298);
    if (iVar28 < *(int *)(lVar30 + 0x29c) + 1) {
      if (lVar22 == 0) goto LAB_05fdad7c;
      lVar24 = *unaff_x19;
      do {
        lVar25 = *(long *)(lVar22 + 0x10);
        *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
        if (lVar25 == 0) goto LAB_05fdad7c;
        uVar6 = *(uint *)(lVar22 + 0x18);
        if (uVar6 < *(uint *)(lVar25 + 0x18)) {
          *(uint *)(lVar22 + 0x18) = uVar6 + 1;
          *(int *)(lVar25 + (long)(int)uVar6 * 4 + 0x20) = iVar28;
        }
        else {
          FUN_03fb3e1c(lVar22,iVar28,
                       *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
          lVar24 = *unaff_x19;
        }
        iVar28 = iVar28 + 1;
      } while (iVar28 < *(int *)(lVar30 + 0x29c) + 1);
    }
  }
LAB_05fda840:
  lVar15 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar15 != 0) {
    iVar28 = 0;
    do {
      lVar15 = *(long *)(lVar15 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) & 1) ==
          0) {
        FUN_02dcfd18();
      }
      if (*(int *)(lVar15 + 8) <= iVar28) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar19 = (int *)FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar28,
                                    *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
      if (((*in_stack_00000028 == 0) || (lVar15 = *(long *)(*in_stack_00000028 + 0x10), lVar15 == 0)
          ) || (FUN_041c332c(&stack0x00000350,lVar15,*piVar19,
                             *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
               in_stack_00000388 == 0)) break;
      lVar15 = *(long *)(in_stack_00000388 + 0x10);
      if (lVar15 != 0) {
        lVar30 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_06dc4872 == '\0') {
          FUN_02d965b8(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                      );
          DAT_06dc4872 = '\x01';
        }
        puVar8 = Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
        if (lVar30 == 0) break;
        iVar3 = piVar19[10];
        uVar6 = piVar19[0xb];
        uVar16 = (ulong)uVar6;
        lVar24 = *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
        ;
        lVar22 = *(long *)(lVar24 + 0x38);
        if (lVar22 == 0) {
          FUN_02dcfd74(lVar24);
          lVar22 = *(long *)(lVar24 + 0x38);
        }
        lVar30 = FUN_036ee4d8(*(undefined8 *)(lVar30 + 0x30),*(undefined8 *)(lVar22 + 0x10));
        if ((int)uVar6 < 0) {
          FUN_05508bc8(0);
        }
        else if (uVar6 != 0) {
          puVar29 = (undefined4 *)(lVar30 + (long)iVar3 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar30 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar30 == 0))
            goto LAB_05fdad7c;
            pcVar20 = (char *)FUN_05fdfe80(lVar30,*(undefined8 *)(puVar29 + -2),*puVar29,0);
            if (*pcVar20 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              iVar3 = *(int *)(pcVar20 + 4);
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
                FUN_05fde34c(&stack0x00000350,3,*piVar19,0);
                uVar13 = 0;
              }
              else {
                uVar13 = FUN_05fdf5d4(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                      *piVar19,0);
              }
              uVar18 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),piVar19,
                                    &stack0x000000f0,uVar13);
              in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar8,uVar18,0);
              uVar11 = in_stack_000000f0;
              lVar30 = *(long *)(lVar15 + 0x20);
              in_stack_000000e8 = 0;
              LeanTween__value(&stack0x000000e0,in_stack_000000e0);
              in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar13 == 0xc);
              if (lVar30 == 0) goto LAB_05fdad7c;
              FUN_04dec6b0(lVar30,uVar11,in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)
                            Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
            }
            uVar16 = uVar16 - 1;
            puVar29 = puVar29 + 3;
          } while (uVar16 != 0);
        }
        if (-1 < piVar19[8]) {
          lVar30 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_06dc4873 == '\0') {
            FUN_02d965b8(
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                        );
            DAT_06dc4873 = '\x01';
          }
          if (lVar30 == 0) break;
          iVar3 = piVar19[0xc];
          uVar6 = piVar19[0xd];
          lVar24 = *(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
          ;
          lVar22 = *(long *)(lVar24 + 0x38);
          if (lVar22 == 0) {
            FUN_02dcfd74(lVar24);
            lVar22 = *(long *)(lVar24 + 0x38);
          }
          lVar30 = FUN_036ee4ec(*(undefined8 *)(lVar30 + 0x38),*(undefined8 *)(lVar22 + 0x10));
          if ((int)uVar6 < 0) {
            FUN_05508bc8(0);
          }
          else if (uVar6 != 0) {
            uVar16 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              puVar12 = (undefined8 *)(lVar30 + (long)iVar3 * 0xc + uVar16 * 0xc);
              _iStack0000000000000030 =
                   _iStack0000000000000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar12 + 1);
              lVar22 = FUN_05fdc35c(*(long *)(in_stack_00000048 + 0x30),*puVar12,
                                    _iStack0000000000000030,0);
              if (*(int *)(lVar22 + 8) != *piVar19) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar22 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar22 == 0))
                goto LAB_05fdad7c;
                lVar22 = FUN_05fdfe80(lVar22,*puVar12,*(undefined4 *)(puVar12 + 1),0);
                iVar4 = *(int *)(lVar22 + 8);
                if (0 < iVar4) {
                  iVar27 = 0;
                  do {
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar22 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar22 == 0)
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
                       (lVar24 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar24 == 0)
                       ) goto LAB_05fdad7c;
                    lVar24 = *(long *)(lVar24 + 0x20);
                    iVar1 = *(int *)(lVar22 + 0x28);
                    iVar2 = *(int *)(lVar22 + 0x2c);
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
                    if (lVar24 == 0) goto LAB_05fdad7c;
                    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(puVar12 + 1)) goto LAB_05fdada0;
                    piVar21 = (int *)FUN_042c8e28(lVar24 + (long)(int)*(uint *)(puVar12 + 1) * 8 +
                                                  0x20,iVar27 + ((int)((ulong)uVar13 >> 0x20) +
                                                                iVar1 * ((uint)uVar13 & 0xffff)) *
                                                                iVar2,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                                 );
                    lVar22 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar22 == 0) goto LAB_05fdad7c;
                    iVar1 = *piVar21;
                    plVar14 = *(long **)(lVar22 + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                    + 0x20) + 0x135) & 1) == 0) {
                      FUN_02dcfd18(*(long *)(*(long *)
                                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                            + 0x20));
                      lVar22 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar14 + (long)iVar1 * 0x80),0x80);
                    uVar11 = in_stack_00000060;
                    uVar13 = FUN_05fdf5d4(lVar22,piVar19[8],in_stack_00000060,0);
                    uVar18 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar19,uVar13);
                    in_stack_000000e0 =
                         FUN_05362cb4(*(undefined8 *)
                                       Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__
                                      ,uVar18,0);
                    lVar22 = *(long *)(lVar15 + 0x20);
                    in_stack_000000e8 = 0;
                    LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar13 == 0xc);
                    if (lVar22 == 0) goto LAB_05fdad7c;
                    FUN_04dec6b0(lVar22,uVar11,in_stack_000000e0,in_stack_000000e8,
                                 *(undefined8 *)
                                  Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
                    iVar27 = iVar27 + 1;
                  } while (iVar4 != iVar27);
                }
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 != uVar6);
          }
        }
      }
      lVar15 = *(long *)(in_stack_00000048 + 0x30);
      iVar28 = iVar28 + 1;
    } while (lVar15 != 0);
  }
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


