/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_message_t_is_current_user_get
ENTRY_POINT: 05fda148
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_message_t_is_current_user_get
               (long *param_1,long param_2)

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
  ulong uVar14;
  undefined8 uVar15;
  int *piVar16;
  char *pcVar17;
  int *piVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  int iVar26;
  undefined8 *unaff_x23;
  undefined4 *puVar27;
  undefined8 unaff_x24;
  undefined4 *unaff_x25;
  long *plVar28;
  long unaff_x26;
  long lVar29;
  ushort *puVar30;
  ulong unaff_x29;
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
  ulong in_stack_000002d0;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  ulong in_stack_00000360;
  ulong in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  ulong in_stack_00000388;
  
  while( true ) {
    lVar29 = param_1[unaff_x29 + 4];
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (lVar29 == 0) break;
    lVar19 = *(long *)(lVar29 + 0x10);
    lVar22 = *unaff_x19;
    *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
    if (lVar19 == 0) break;
    uVar7 = *(uint *)(lVar29 + 0x18);
    uVar1 = (uint)in_stack_000002d0 & 0xffff;
    param_1 = in_stack_00000208;
    if (uVar7 < *(uint *)(lVar19 + 0x18)) {
      *(uint *)(lVar29 + 0x18) = uVar7 + 1;
      *(uint *)(lVar19 + (long)(int)uVar7 * 4 + 0x20) = uVar1;
    }
    else {
      FUN_03fb3e1c(lVar29,uVar1,*(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
    }
    while (uVar14 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22), (uVar14 & 1) == 0) {
      FUN_0515e9cc(&stack0x000002c0,
                   *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
      unaff_x29 = unaff_x29 + 1;
      if (unaff_x29 == 3) {
        lVar29 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_06dc487e == '\0') {
          FUN_02d965b8(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__
                      );
          DAT_06dc487e = '\x01';
        }
        if (lVar29 == 0) goto LAB_05fdad7c;
        iVar26 = unaff_x25[0x10];
        uVar1 = unaff_x25[0x11];
        uVar14 = (ulong)uVar1;
        lVar22 = *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
        lVar19 = *(long *)(lVar22 + 0x38);
        if (lVar19 == 0) {
          FUN_02dcfd74(lVar22);
          lVar19 = *(long *)(lVar22 + 0x38);
        }
        lVar29 = FUN_036ee4c4(*(undefined8 *)(lVar29 + 0x40),*(undefined8 *)(lVar19 + 0x10));
        if ((int)uVar1 < 0) {
          FUN_05508bc8(0);
        }
        else if (uVar1 != 0) {
          puVar30 = (ushort *)(lVar29 + (long)iVar26 * 0x18);
          do {
            if (in_stack_00000228 == 0) goto LAB_05fdad7c;
            uVar6 = *puVar30;
            lVar29 = *(long *)(in_stack_00000228 + 0x18);
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            if (lVar29 == 0) goto LAB_05fdad7c;
            lVar19 = *(long *)(lVar29 + 0x10);
            lVar22 = *unaff_x19;
            *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
            if (lVar19 == 0) goto LAB_05fdad7c;
            uVar1 = *(uint *)(lVar29 + 0x18);
            if (uVar1 < *(uint *)(lVar19 + 0x18)) {
              *(uint *)(lVar29 + 0x18) = uVar1 + 1;
              *(uint *)(lVar19 + (long)(int)uVar1 * 4 + 0x20) = (uint)uVar6;
            }
            else {
              FUN_03fb3e1c(lVar29,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
            }
            uVar14 = uVar14 - 1;
            puVar30 = puVar30 + 0xc;
          } while (uVar14 != 0);
        }
        if ((*in_stack_00000028 == 0) ||
           (lVar29 = *(long *)(*in_stack_00000028 + 0x10), lVar29 == 0)) goto LAB_05fdad7c;
        memcpy(&stack0x00000300,&stack0x000001f0,0x48);
        lVar19 = *(long *)(lVar29 + 0x10);
        lVar22 = *(long *)Method_UnityEngine_Animator_GetBoneTransform__;
        *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
        if (lVar19 == 0) goto LAB_05fdad7c;
        uVar1 = *(uint *)(lVar29 + 0x18);
        if (uVar1 < *(uint *)(lVar19 + 0x18)) {
          lVar19 = lVar19 + (long)(int)uVar1 * 0x48;
          *(uint *)(lVar29 + 0x18) = uVar1 + 1;
          memcpy((void *)(lVar19 + 0x20),&stack0x00000300,0x48);
          LeanTween__value(lVar19 + 0x20,0);
        }
        else {
          uVar13 = *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70);
          memcpy(&stack0x00000350,&stack0x00000300,0x48);
          FUN_041c36bc(lVar29,&stack0x00000350,uVar13);
        }
        iVar26 = iStack0000000000000030 + 1;
        if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
        lVar29 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
        if ((*(ushort *)
              (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) & 1)
            == 0) {
          FUN_02dcfd18();
        }
        if (*(int *)(lVar29 + 8) <= iVar26) {
          lVar29 = *(long *)(in_stack_00000048 + 0x30);
          if (lVar29 == 0) goto LAB_05fdad7c;
          LeanTween__value(&stack0x00000350);
          uVar13 = 0xffffffff;
          in_stack_000001b0 = lVar29;
          in_stack_000001b8 = uVar13;
          uVar14 = FUN_05fd2394(&stack0x000001b0);
          puVar9 = Method_UnityEngine_AssetBundle_LoadAsset__;
          puVar8 = 
          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputEventTrace_DeviceInfo>__
          ;
          if ((uVar14 & 1) != 0) goto LAB_05fda528;
          goto LAB_05fda840;
        }
        if (*(long *)(in_stack_00000048 + 0x18) == 0) goto LAB_05fdad7c;
        unaff_x26 = FUN_0400ff1c(*(long *)(in_stack_00000048 + 0x18),iVar26,
                                 *(undefined8 *)
                                  Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__);
        if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
        _iStack0000000000000030 = CONCAT44(uStack0000000000000034,iVar26);
        unaff_x25 = (undefined4 *)
                    FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar26,
                                 *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
        lVar29 = *(long *)(in_stack_00000048 + 0x30);
        if (lVar29 == 0) goto LAB_05fdad7c;
        uVar11 = *unaff_x25;
        if (DAT_06dc487d == '\0') {
          FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                      );
          DAT_06dc487d = '\x01';
        }
        lVar29 = *(long *)(lVar29 + 0x28);
        if (lVar29 == 0) goto LAB_05fdad7c;
        puVar12 = (undefined8 *)
                  FUN_0504d8a8(lVar29,uVar11,
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
        param_1 = (long *)FUN_02d966a4(*(undefined8 *)puVar8,3);
        LeanTween__value(&stack0x00000208,param_1);
        lVar29 = *(long *)
                  Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
        if (*(int *)(lVar29 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar29 = *(long *)
                    Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
        }
        if (**(long **)(lVar29 + 0xb8) == 0) goto LAB_05fdad7c;
        FUN_04e95158(**(long **)(lVar29 + 0xb8),unaff_x26,&stack0x00000230,
                     *(undefined8 *)
                      Method_UnityEngine_Animator_GetBehaviour<OvrAvatarDefaultStateListener>__);
        in_stack_00000228 =
             thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_SetURN__);
        FUN_05fbe1f4();
        LeanTween__value(&stack0x00000228,in_stack_00000228);
        if ((((in_stack_00000228 == 0) ||
             (*(undefined4 *)(in_stack_00000228 + 0x28) = unaff_x25[0x19], in_stack_00000228 == 0))
            || (*(undefined4 *)(in_stack_00000228 + 0x2c) = unaff_x25[0x1a], in_stack_00000228 == 0)
            ) || ((*(undefined4 *)(in_stack_00000228 + 0x30) = unaff_x25[0x1b],
                  in_stack_00000228 == 0 ||
                  (*(undefined4 *)(in_stack_00000228 + 0x34) = unaff_x25[0x1c],
                  in_stack_00000228 == 0)))) goto LAB_05fdad7c;
        *(undefined1 *)(in_stack_00000228 + 0x38) = *(undefined1 *)((long)unaff_x25 + 0x7d);
        if (*(long *)(unaff_x26 + 200) == 0) goto LAB_05fdad7c;
        FUN_03f20aec(&stack0x00000350,*(long *)(unaff_x26 + 200),
                     *(undefined8 *)Method_UnityEngine_AndroidJavaProxy_hashCode__);
        in_stack_000001c0 = in_stack_00000350;
        in_stack_000001c8 = in_stack_00000358;
        _uStack00000000000001d0 = in_stack_00000360;
        in_stack_000001d8 = in_stack_00000368;
        in_stack_000001e0 = in_stack_00000370;
        while (uVar14 = FUN_05130778(&stack0x000001c0,
                                     *(undefined8 *)
                                      Method_UnityEngine_AndroidJavaObjectUnityOwned_Dispose__),
              (uVar14 & 1) != 0) {
          if (in_stack_00000228 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar6 = uStack00000000000001d0;
          uVar14 = _uStack00000000000001d0 & 0xffff;
          lVar29 = *(long *)(in_stack_00000228 + 0x20);
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (lVar29 == 0) {
LAB_05fda484:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar19 = *(long *)(lVar29 + 0x10);
          lVar22 = *unaff_x19;
          *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
          if (lVar19 == 0) goto LAB_05fda484;
          uVar1 = *(uint *)(lVar29 + 0x18);
          if (uVar1 < *(uint *)(lVar19 + 0x18)) {
            *(uint *)(lVar29 + 0x18) = uVar1 + 1;
            *(uint *)(lVar19 + (long)(int)uVar1 * 4 + 0x20) = (uint)uVar6;
          }
          else {
            FUN_03fb3e1c(lVar29,uVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_05130774(&stack0x000001c0,
                     *(undefined8 *)Method_UnityEngine_AndroidJavaObject__CallStatic__);
        unaff_x29 = 0;
      }
      lVar29 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
      FUN_03fb358c(lVar29,*(undefined8 *)PTR_DAT_069fc3f0);
      if (in_stack_00000200 == (long *)0x0) goto LAB_05fdad7c;
      if ((lVar29 != 0) &&
         (lVar19 = thunk_FUN_02dd3048(lVar29,*(undefined8 *)(*in_stack_00000200 + 0x40)),
         lVar19 == 0)) {
LAB_05fdada4:
        uVar13 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar13,0);
      }
      if (*(uint *)(in_stack_00000200 + 3) <= unaff_x29) {
LAB_05fdada0:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      in_stack_00000200[unaff_x29 + 4] = lVar29;
      LeanTween__value(in_stack_00000200 + unaff_x29 + 4,lVar29);
      lVar29 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
      FUN_03fb358c(lVar29,*(undefined8 *)PTR_DAT_069fc3f0);
      if (param_1 == (long *)0x0) goto LAB_05fdad7c;
      if ((lVar29 != 0) &&
         (lVar19 = thunk_FUN_02dd3048(lVar29,*(undefined8 *)(*param_1 + 0x40)), lVar19 == 0))
      goto LAB_05fdada4;
      if (*(uint *)(param_1 + 3) <= unaff_x29) goto LAB_05fdada0;
      param_1[unaff_x29 + 4] = lVar29;
      LeanTween__value(param_1 + unaff_x29 + 4,lVar29);
      lVar29 = *(long *)(unaff_x26 + 0xa8);
      if (lVar29 == 0) goto LAB_05fdad7c;
      if (*(uint *)(lVar29 + 0x18) <= unaff_x29) goto LAB_05fdada0;
      lVar29 = *(long *)(lVar29 + unaff_x29 * 8 + 0x20);
      if (lVar29 == 0) goto LAB_05fdad7c;
      FUN_04042130(&stack0x00000350,lVar29,
                   *(undefined8 *)
                    Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
LAB_05fda010:
      uVar14 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22);
      if ((uVar14 & 1) != 0) {
        if (*(long *)(unaff_x26 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar14 = FUN_040419bc(*(long *)(unaff_x26 + 0xd8),in_stack_00000360,
                              in_stack_00000368 & 0xffffffff,*unaff_x23);
        if ((uVar14 & 1) == 0) {
          if (in_stack_00000200 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(in_stack_00000200 + 3) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar29 = in_stack_00000200[unaff_x29 + 4];
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (lVar29 != 0) {
            lVar19 = *(long *)(lVar29 + 0x10);
            lVar22 = *unaff_x19;
            *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
            if (lVar19 != 0) {
              uVar7 = *(uint *)(lVar29 + 0x18);
              uVar1 = (uint)in_stack_00000360 & 0xffff;
              if (uVar7 < *(uint *)(lVar19 + 0x18)) {
                *(uint *)(lVar29 + 0x18) = uVar7 + 1;
                *(uint *)(lVar19 + (long)(int)uVar7 * 4 + 0x20) = uVar1;
              }
              else {
                FUN_03fb3e1c(lVar29,uVar1,
                             *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
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
      lVar29 = *(long *)(unaff_x26 + 0xb0);
      if (lVar29 == 0) goto LAB_05fdad7c;
      if (*(uint *)(lVar29 + 0x18) <= unaff_x29) goto LAB_05fdada0;
      lVar29 = *(long *)(lVar29 + unaff_x29 * 8 + 0x20);
      if (lVar29 == 0) goto LAB_05fdad7c;
      FUN_04042130(&stack0x00000350,lVar29,
                   *(undefined8 *)
                    Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
      in_stack_00000350 = 0;
      in_stack_000002d0 = in_stack_00000360;
      in_stack_00000358 = unaff_x24;
    }
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(uint *)(param_1 + 3) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    param_2 = *unaff_x21;
    in_stack_00000208 = param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    if (0 < *(int *)(lVar19 + 0x2a0)) {
      lVar20 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__
                                 );
      FUN_0552aca4(lVar20,0);
      uVar15 = FUN_05fd7f88(*(undefined8 *)(in_stack_00000048 + 0x30),lVar19);
      if (lVar20 == 0) goto LAB_05fdad7c;
      *(undefined8 *)(lVar20 + 0x10) = uVar15;
      LeanTween__value();
      lVar23 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_CompileXPath__);
      FUN_0400f984(lVar23,*(undefined8 *)Method_AssetInputExample_DoChangeThing__);
      plVar28 = (long *)(lVar20 + 0x18);
      *plVar28 = lVar23;
      LeanTween__value(plVar28,lVar23);
      iVar26 = 0;
      while( true ) {
        iVar4 = *(int *)(lVar19 + 0x294);
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (iVar4 <= iVar26) break;
        lVar23 = *plVar28;
        uVar15 = FUN_05fd7aa8(*(undefined8 *)(in_stack_00000048 + 0x30),lVar19,iVar26);
        if (lVar23 == 0) goto LAB_05fdad7c;
        lVar21 = *(long *)(lVar23 + 0x10);
        lVar24 = *(long *)puVar9;
        *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
        if (lVar21 == 0) goto LAB_05fdad7c;
        uVar1 = *(uint *)(lVar23 + 0x18);
        if (uVar1 < *(uint *)(lVar21 + 0x18)) {
          *(uint *)(lVar23 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar21 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar23,uVar15,
                       *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
        iVar26 = iVar26 + 1;
      }
      uVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_UnityEngine_Assertions_Assert_IsNull<UIRAtlasAllocator_AreaNode>__
                                 );
      FUN_04de9e6c(uVar15,*(undefined8 *)
                           Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElement>__);
      *(undefined8 *)(lVar20 + 0x20) = uVar15;
      LeanTween__value((undefined8 *)(lVar20 + 0x20),uVar15);
      *(long *)(lVar20 + 0x28) = lVar22;
      LeanTween__value((long *)(lVar20 + 0x28),lVar22);
      puVar10 = Method_AssetInputExample_DoPressedThing__;
      if (lVar22 == 0) goto LAB_05fdad7c;
      if (0 < *(int *)(lVar22 + 0x18)) {
        iVar26 = 0;
        do {
          uVar11 = FUN_03fb3b24(lVar22,iVar26,*(undefined8 *)PTR_DAT_069fe588);
          if (*in_stack_00000028 == 0) goto LAB_05fdad7c;
          lVar19 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar19 == 0) ||
             (FUN_041c332c(&stack0x00000350,lVar19,uVar11,*(undefined8 *)puVar10),
             in_stack_00000170 = lVar29, in_stack_00000178 = uVar13,
             in_stack_00000180 = in_stack_00000360, in_stack_00000188 = in_stack_00000368,
             in_stack_00000190 = in_stack_00000370, in_stack_00000198 = in_stack_00000378,
             in_stack_000001a0 = in_stack_00000380, in_stack_00000388 == 0)) goto LAB_05fdad7c;
          *(long *)(in_stack_00000388 + 0x10) = lVar20;
          LeanTween__value((long *)(in_stack_00000388 + 0x10),lVar20);
          in_stack_00000380 = in_stack_000001a0;
          in_stack_00000378 = in_stack_00000198;
          in_stack_00000370 = in_stack_00000190;
          in_stack_00000368 = in_stack_00000188;
          in_stack_00000360 = in_stack_00000180;
          uVar13 = in_stack_00000178;
          lVar29 = in_stack_00000170;
          if ((*in_stack_00000028 == 0) ||
             (lVar19 = *(long *)(*in_stack_00000028 + 0x10), lVar19 == 0)) goto LAB_05fdad7c;
          FUN_041c3390(lVar19,uVar11,&stack0x00000350,
                       *(undefined8 *)Method_AssetInputExample_DoReleasedThing__);
          iVar26 = iVar26 + 1;
          _iStack0000000000000030 = in_stack_00000388;
        } while (iVar26 < *(int *)(lVar22 + 0x18));
      }
    }
    uVar14 = FUN_05fd2394(&stack0x000001b0);
    if ((uVar14 & 1) == 0) break;
LAB_05fda528:
    lVar19 = FUN_05fd233c(&stack0x000001b0);
    lVar22 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar22,*(undefined8 *)PTR_DAT_069fc3f0);
    iVar26 = *(int *)(lVar19 + 0x298);
    if (iVar26 < *(int *)(lVar19 + 0x29c) + 1) {
      if (lVar22 == 0) goto LAB_05fdad7c;
      lVar20 = *unaff_x19;
      do {
        lVar23 = *(long *)(lVar22 + 0x10);
        *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
        if (lVar23 == 0) goto LAB_05fdad7c;
        uVar1 = *(uint *)(lVar22 + 0x18);
        if (uVar1 < *(uint *)(lVar23 + 0x18)) {
          *(uint *)(lVar22 + 0x18) = uVar1 + 1;
          *(int *)(lVar23 + (long)(int)uVar1 * 4 + 0x20) = iVar26;
        }
        else {
          FUN_03fb3e1c(lVar22,iVar26,
                       *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          lVar20 = *unaff_x19;
        }
        iVar26 = iVar26 + 1;
      } while (iVar26 < *(int *)(lVar19 + 0x29c) + 1);
    }
  }
LAB_05fda840:
  lVar29 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar29 != 0) {
    iVar26 = 0;
    do {
      lVar29 = *(long *)(lVar29 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) & 1) ==
          0) {
        FUN_02dcfd18();
      }
      if (*(int *)(lVar29 + 8) <= iVar26) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar16 = (int *)FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar26,
                                    *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
      if (((*in_stack_00000028 == 0) || (lVar29 = *(long *)(*in_stack_00000028 + 0x10), lVar29 == 0)
          ) || (FUN_041c332c(&stack0x00000350,lVar29,*piVar16,
                             *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
               in_stack_00000388 == 0)) break;
      lVar29 = *(long *)(in_stack_00000388 + 0x10);
      if (lVar29 != 0) {
        lVar19 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_06dc4872 == '\0') {
          FUN_02d965b8(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                      );
          DAT_06dc4872 = '\x01';
        }
        puVar8 = Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
        if (lVar19 == 0) break;
        iVar4 = piVar16[10];
        uVar1 = piVar16[0xb];
        uVar14 = (ulong)uVar1;
        lVar20 = *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
        ;
        lVar22 = *(long *)(lVar20 + 0x38);
        if (lVar22 == 0) {
          FUN_02dcfd74(lVar20);
          lVar22 = *(long *)(lVar20 + 0x38);
        }
        lVar19 = FUN_036ee4d8(*(undefined8 *)(lVar19 + 0x30),*(undefined8 *)(lVar22 + 0x10));
        if ((int)uVar1 < 0) {
          FUN_05508bc8(0);
        }
        else if (uVar1 != 0) {
          puVar27 = (undefined4 *)(lVar19 + (long)iVar4 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar19 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar19 == 0))
            goto LAB_05fdad7c;
            pcVar17 = (char *)FUN_05fdfe80(lVar19,*(undefined8 *)(puVar27 + -2),*puVar27,0);
            if (*pcVar17 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              iVar4 = *(int *)(pcVar17 + 4);
              plVar28 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02dcfd18(*(long *)(*(long *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                      + 0x20));
              }
              memcpy(&stack0x000000f0,(void *)(*plVar28 + (long)iVar4 * 0x80),0x80);
              if (in_stack_00000110 < 0) {
                FUN_05fde34c(&stack0x00000350,3,*piVar16,0);
                uVar13 = 0;
              }
              else {
                uVar13 = FUN_05fdf5d4(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                      *piVar16,0);
              }
              uVar15 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),piVar16,
                                    &stack0x000000f0,uVar13);
              in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar8,uVar15,0);
              uVar11 = in_stack_000000f0;
              lVar19 = *(long *)(lVar29 + 0x20);
              in_stack_000000e8 = 0;
              LeanTween__value(&stack0x000000e0,in_stack_000000e0);
              in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar13 == 0xc);
              if (lVar19 == 0) goto LAB_05fdad7c;
              FUN_04dec6b0(lVar19,uVar11,in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)
                            Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
            }
            uVar14 = uVar14 - 1;
            puVar27 = puVar27 + 3;
          } while (uVar14 != 0);
        }
        if (-1 < piVar16[8]) {
          lVar19 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_06dc4873 == '\0') {
            FUN_02d965b8(
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                        );
            DAT_06dc4873 = '\x01';
          }
          if (lVar19 == 0) break;
          iVar4 = piVar16[0xc];
          uVar1 = piVar16[0xd];
          lVar20 = *(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
          ;
          lVar22 = *(long *)(lVar20 + 0x38);
          if (lVar22 == 0) {
            FUN_02dcfd74(lVar20);
            lVar22 = *(long *)(lVar20 + 0x38);
          }
          lVar19 = FUN_036ee4ec(*(undefined8 *)(lVar19 + 0x38),*(undefined8 *)(lVar22 + 0x10));
          if ((int)uVar1 < 0) {
            FUN_05508bc8(0);
          }
          else if (uVar1 != 0) {
            uVar14 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              puVar12 = (undefined8 *)(lVar19 + (long)iVar4 * 0xc + uVar14 * 0xc);
              _iStack0000000000000030 =
                   _iStack0000000000000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar12 + 1);
              lVar22 = FUN_05fdc35c(*(long *)(in_stack_00000048 + 0x30),*puVar12,
                                    _iStack0000000000000030,0);
              if (*(int *)(lVar22 + 8) != *piVar16) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar22 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar22 == 0))
                goto LAB_05fdad7c;
                lVar22 = FUN_05fdfe80(lVar22,*puVar12,*(undefined4 *)(puVar12 + 1),0);
                iVar5 = *(int *)(lVar22 + 8);
                if (0 < iVar5) {
                  iVar25 = 0;
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
                       (lVar20 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar20 == 0)
                       ) goto LAB_05fdad7c;
                    lVar20 = *(long *)(lVar20 + 0x20);
                    iVar2 = *(int *)(lVar22 + 0x28);
                    iVar3 = *(int *)(lVar22 + 0x2c);
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
                    if (lVar20 == 0) goto LAB_05fdad7c;
                    if (*(uint *)(lVar20 + 0x18) <= *(uint *)(puVar12 + 1)) goto LAB_05fdada0;
                    piVar18 = (int *)FUN_042c8e28(lVar20 + (long)(int)*(uint *)(puVar12 + 1) * 8 +
                                                  0x20,iVar25 + ((int)((ulong)uVar13 >> 0x20) +
                                                                iVar2 * ((uint)uVar13 & 0xffff)) *
                                                                iVar3,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                                 );
                    lVar22 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar22 == 0) goto LAB_05fdad7c;
                    iVar2 = *piVar18;
                    plVar28 = *(long **)(lVar22 + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                    + 0x20) + 0x135) & 1) == 0) {
                      FUN_02dcfd18(*(long *)(*(long *)
                                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                            + 0x20));
                      lVar22 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar28 + (long)iVar2 * 0x80),0x80);
                    uVar11 = in_stack_00000060;
                    uVar13 = FUN_05fdf5d4(lVar22,piVar16[8],in_stack_00000060,0);
                    uVar15 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar16,uVar13);
                    in_stack_000000e0 =
                         FUN_05362cb4(*(undefined8 *)
                                       Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__
                                      ,uVar15,0);
                    lVar22 = *(long *)(lVar29 + 0x20);
                    in_stack_000000e8 = 0;
                    LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar13 == 0xc);
                    if (lVar22 == 0) goto LAB_05fdad7c;
                    FUN_04dec6b0(lVar22,uVar11,in_stack_000000e0,in_stack_000000e8,
                                 *(undefined8 *)
                                  Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
                    iVar25 = iVar25 + 1;
                  } while (iVar5 != iVar25);
                }
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 != uVar1);
          }
        }
      }
      lVar29 = *(long *)(in_stack_00000048 + 0x30);
      iVar26 = iVar26 + 1;
    } while (lVar29 != 0);
  }
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


