/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_account_edit_message_t_language_get
ENTRY_POINT: 05fd9c2c
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_account_edit_message_t_language_get(void)

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
  long lVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  int *piVar21;
  char *pcVar22;
  int *piVar23;
  int in_w8;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  long *unaff_x19;
  long lVar29;
  long *unaff_x21;
  undefined8 *unaff_x22;
  int iVar30;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  int unaff_w25;
  long lVar31;
  ushort *puVar32;
  long unaff_x29;
  long *in_stack_00000028;
  ulong in_stack_00000030;
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
  
  while (unaff_w25 < in_w8) {
    if (*(long *)(unaff_x29 + 0x18) == 0) goto LAB_05fdad7c;
    lVar12 = FUN_0400ff1c(*(long *)(unaff_x29 + 0x18),unaff_w25,
                          *(undefined8 *)Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__);
    if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_05fdad7c;
    in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,unaff_w25);
    puVar13 = (undefined4 *)
              FUN_042c6444(*(long *)(unaff_x29 + 0x30) + 0x18,unaff_w25,
                           *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
    lVar29 = *(long *)(unaff_x29 + 0x30);
    if (lVar29 == 0) goto LAB_05fdad7c;
    uVar11 = *puVar13;
    if (DAT_06dc487d == '\0') {
      FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__);
      DAT_06dc487d = '\x01';
    }
    lVar29 = *(long *)(lVar29 + 0x28);
    if (lVar29 == 0) goto LAB_05fdad7c;
    puVar14 = (undefined8 *)
              FUN_0504d8a8(lVar29,uVar11,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                          );
    uVar15 = FUN_05fd8904(*puVar14);
    LeanTween__value(&stack0x000001f0,uVar15);
    puVar8 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
    ;
    if (lVar12 == 0) goto LAB_05fdad7c;
    plVar16 = (long *)FUN_02d966a4(*(undefined8 *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
                                   ,3);
    LeanTween__value(&stack0x00000200,plVar16);
    plVar17 = (long *)FUN_02d966a4(*(undefined8 *)puVar8,3);
    LeanTween__value(&stack0x00000208,plVar17);
    lVar29 = *(long *)Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
    if (*(int *)(lVar29 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar29 = *(long *)
                Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
    }
    if (**(long **)(lVar29 + 0xb8) == 0) goto LAB_05fdad7c;
    FUN_04e95158(**(long **)(lVar29 + 0xb8),lVar12,&stack0x00000230,
                 *(undefined8 *)
                  Method_UnityEngine_Animator_GetBehaviour<OvrAvatarDefaultStateListener>__);
    lVar29 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_SetURN__);
    FUN_05fbe1f4();
    LeanTween__value(&stack0x00000228,lVar29);
    if ((((lVar29 == 0) || (*(undefined4 *)(lVar29 + 0x28) = puVar13[0x19], lVar29 == 0)) ||
        (*(undefined4 *)(lVar29 + 0x2c) = puVar13[0x1a], lVar29 == 0)) ||
       ((*(undefined4 *)(lVar29 + 0x30) = puVar13[0x1b], lVar29 == 0 ||
        (*(undefined4 *)(lVar29 + 0x34) = puVar13[0x1c], lVar29 == 0)))) goto LAB_05fdad7c;
    *(undefined1 *)(lVar29 + 0x38) = *(undefined1 *)((long)puVar13 + 0x7d);
    if (*(long *)(lVar12 + 200) == 0) goto LAB_05fdad7c;
    FUN_03f20aec(&stack0x00000350,*(long *)(lVar12 + 200),
                 *(undefined8 *)Method_UnityEngine_AndroidJavaProxy_hashCode__);
    in_stack_000001c0 = in_stack_00000350;
    in_stack_000001c8 = in_stack_00000358;
    _uStack00000000000001d0 = in_stack_00000360;
    in_stack_000001d8 = in_stack_00000368;
    in_stack_000001e0 = in_stack_00000370;
    while (uVar18 = FUN_05130778(&stack0x000001c0,
                                 *(undefined8 *)
                                  Method_UnityEngine_AndroidJavaObjectUnityOwned_Dispose__),
          (uVar18 & 1) != 0) {
      if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar5 = uStack00000000000001d0;
      uVar18 = _uStack00000000000001d0 & 0xffff;
      lVar31 = *(long *)(lVar29 + 0x20);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar31 == 0) {
LAB_05fda484:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar24 = *(long *)(lVar31 + 0x10);
      lVar26 = *unaff_x19;
      *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
      if (lVar24 == 0) goto LAB_05fda484;
      uVar6 = *(uint *)(lVar31 + 0x18);
      if (uVar6 < *(uint *)(lVar24 + 0x18)) {
        *(uint *)(lVar31 + 0x18) = uVar6 + 1;
        *(uint *)(lVar24 + (long)(int)uVar6 * 4 + 0x20) = (uint)uVar5;
      }
      else {
        FUN_03fb3e1c(lVar31,uVar18,
                     *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_05130774(&stack0x000001c0,*(undefined8 *)Method_UnityEngine_AndroidJavaObject__CallStatic__)
    ;
    uVar18 = 0;
    do {
      lVar31 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
      FUN_03fb358c(lVar31,*(undefined8 *)PTR_DAT_069fc3f0);
      if (plVar16 == (long *)0x0) goto LAB_05fdad7c;
      if ((lVar31 != 0) &&
         (lVar24 = thunk_FUN_02dd3048(lVar31,*(undefined8 *)(*plVar16 + 0x40)), lVar24 == 0)) {
LAB_05fdada4:
        uVar15 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar15,0);
      }
      if (*(uint *)(plVar16 + 3) <= uVar18) {
LAB_05fdada0:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      plVar16[uVar18 + 4] = lVar31;
      LeanTween__value(plVar16 + uVar18 + 4,lVar31);
      lVar31 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
      FUN_03fb358c(lVar31,*(undefined8 *)PTR_DAT_069fc3f0);
      if (plVar17 == (long *)0x0) goto LAB_05fdad7c;
      if ((lVar31 != 0) &&
         (lVar24 = thunk_FUN_02dd3048(lVar31,*(undefined8 *)(*plVar17 + 0x40)), lVar24 == 0))
      goto LAB_05fdada4;
      if (*(uint *)(plVar17 + 3) <= uVar18) goto LAB_05fdada0;
      plVar17[uVar18 + 4] = lVar31;
      LeanTween__value(plVar17 + uVar18 + 4,lVar31);
      lVar31 = *(long *)(lVar12 + 0xa8);
      if (lVar31 == 0) goto LAB_05fdad7c;
      if (*(uint *)(lVar31 + 0x18) <= uVar18) goto LAB_05fdada0;
      lVar31 = *(long *)(lVar31 + uVar18 * 8 + 0x20);
      if (lVar31 == 0) goto LAB_05fdad7c;
      FUN_04042130(&stack0x00000350,lVar31,
                   *(undefined8 *)
                    Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
LAB_05fda010:
      uVar19 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22);
      if ((uVar19 & 1) != 0) {
        if (*(long *)(lVar12 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar19 = FUN_040419bc(*(long *)(lVar12 + 0xd8),in_stack_00000360,
                              in_stack_00000368 & 0xffffffff,*unaff_x23);
        if ((uVar19 & 1) == 0) {
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(plVar16 + 3) <= uVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar31 = plVar16[uVar18 + 4];
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (lVar31 != 0) {
            lVar24 = *(long *)(lVar31 + 0x10);
            lVar26 = *unaff_x19;
            *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
            if (lVar24 != 0) {
              uVar7 = *(uint *)(lVar31 + 0x18);
              uVar6 = (uint)in_stack_00000360 & 0xffff;
              if (uVar7 < *(uint *)(lVar24 + 0x18)) {
                *(uint *)(lVar31 + 0x18) = uVar7 + 1;
                *(uint *)(lVar24 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
              }
              else {
                FUN_03fb3e1c(lVar31,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
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
      lVar31 = *(long *)(lVar12 + 0xb0);
      if (lVar31 == 0) goto LAB_05fdad7c;
      if (*(uint *)(lVar31 + 0x18) <= uVar18) goto LAB_05fdada0;
      lVar31 = *(long *)(lVar31 + uVar18 * 8 + 0x20);
      if (lVar31 == 0) goto LAB_05fdad7c;
      FUN_04042130(&stack0x00000350,lVar31,
                   *(undefined8 *)
                    Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
      in_stack_00000350 = 0;
      while (uVar19 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22), (uVar19 & 1) != 0) {
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(plVar17 + 3) <= uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar31 = plVar17[uVar18 + 4];
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (lVar31 == 0) {
LAB_05fda1e0:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar24 = *(long *)(lVar31 + 0x10);
        lVar26 = *unaff_x19;
        *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
        if (lVar24 == 0) goto LAB_05fda1e0;
        uVar7 = *(uint *)(lVar31 + 0x18);
        uVar6 = (uint)in_stack_00000360 & 0xffff;
        if (uVar7 < *(uint *)(lVar24 + 0x18)) {
          *(uint *)(lVar31 + 0x18) = uVar7 + 1;
          *(uint *)(lVar24 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
        }
        else {
          FUN_03fb3e1c(lVar31,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_0515e9cc(&stack0x000002c0,
                   *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
      uVar18 = uVar18 + 1;
    } while (uVar18 != 3);
    lVar12 = *(long *)(in_stack_00000048 + 0x30);
    if (DAT_06dc487e == '\0') {
      FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__
                  );
      DAT_06dc487e = '\x01';
    }
    if (lVar12 == 0) goto LAB_05fdad7c;
    iVar30 = puVar13[0x10];
    uVar6 = puVar13[0x11];
    uVar18 = (ulong)uVar6;
    lVar24 = *(long *)
              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
    lVar31 = *(long *)(lVar24 + 0x38);
    if (lVar31 == 0) {
      FUN_02dcfd74(lVar24);
      lVar31 = *(long *)(lVar24 + 0x38);
    }
    lVar12 = FUN_036ee4c4(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar31 + 0x10));
    if ((int)uVar6 < 0) {
      FUN_05508bc8(0);
    }
    else if (uVar6 != 0) {
      puVar32 = (ushort *)(lVar12 + (long)iVar30 * 0x18);
      do {
        if (lVar29 == 0) goto LAB_05fdad7c;
        uVar5 = *puVar32;
        lVar12 = *(long *)(lVar29 + 0x18);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (lVar12 == 0) goto LAB_05fdad7c;
        lVar31 = *(long *)(lVar12 + 0x10);
        lVar24 = *unaff_x19;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar31 == 0) goto LAB_05fdad7c;
        uVar6 = *(uint *)(lVar12 + 0x18);
        if (uVar6 < *(uint *)(lVar31 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar6 + 1;
          *(uint *)(lVar31 + (long)(int)uVar6 * 4 + 0x20) = (uint)uVar5;
        }
        else {
          FUN_03fb3e1c(lVar12,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
        uVar18 = uVar18 - 1;
        puVar32 = puVar32 + 0xc;
      } while (uVar18 != 0);
    }
    if ((*in_stack_00000028 == 0) || (lVar12 = *(long *)(*in_stack_00000028 + 0x10), lVar12 == 0))
    goto LAB_05fdad7c;
    memcpy(&stack0x00000300,&stack0x000001f0,0x48);
    lVar29 = *(long *)(lVar12 + 0x10);
    lVar31 = *(long *)Method_UnityEngine_Animator_GetBoneTransform__;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar29 == 0) goto LAB_05fdad7c;
    uVar6 = *(uint *)(lVar12 + 0x18);
    if (uVar6 < *(uint *)(lVar29 + 0x18)) {
      lVar29 = lVar29 + (long)(int)uVar6 * 0x48;
      *(uint *)(lVar12 + 0x18) = uVar6 + 1;
      memcpy((void *)(lVar29 + 0x20),&stack0x00000300,0x48);
      LeanTween__value(lVar29 + 0x20,0);
    }
    else {
      uVar15 = *(undefined8 *)(*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70);
      memcpy(&stack0x00000350,&stack0x00000300,0x48);
      FUN_041c36bc(lVar12,&stack0x00000350,uVar15);
    }
    unaff_w25 = unaff_w25 + 1;
    if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
    lVar12 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
    if ((*(ushort *)(*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135)
        & 1) == 0) {
      FUN_02dcfd18();
    }
    unaff_x29 = in_stack_00000048;
    in_stack_00000358 = unaff_x24;
    in_w8 = *(int *)(lVar12 + 8);
  }
  lVar12 = *(long *)(unaff_x29 + 0x30);
  if (lVar12 != 0) {
    LeanTween__value(&stack0x00000350);
    uVar15 = 0xffffffff;
    in_stack_000001b0 = lVar12;
    in_stack_000001b8 = uVar15;
    uVar18 = FUN_05fd2394(&stack0x000001b0);
    puVar9 = Method_UnityEngine_AssetBundle_LoadAsset__;
    puVar8 = 
    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputEventTrace_DeviceInfo>__;
    while ((uVar18 & 1) != 0) {
      lVar29 = FUN_05fd233c(&stack0x000001b0);
      lVar31 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
      FUN_03fb358c(lVar31,*(undefined8 *)PTR_DAT_069fc3f0);
      iVar30 = *(int *)(lVar29 + 0x298);
      if (iVar30 < *(int *)(lVar29 + 0x29c) + 1) {
        if (lVar31 == 0) goto LAB_05fdad7c;
        lVar24 = *unaff_x19;
        do {
          lVar26 = *(long *)(lVar31 + 0x10);
          *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
          if (lVar26 == 0) goto LAB_05fdad7c;
          uVar6 = *(uint *)(lVar31 + 0x18);
          if (uVar6 < *(uint *)(lVar26 + 0x18)) {
            *(uint *)(lVar31 + 0x18) = uVar6 + 1;
            *(int *)(lVar26 + (long)(int)uVar6 * 4 + 0x20) = iVar30;
          }
          else {
            FUN_03fb3e1c(lVar31,iVar30,
                         *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
            lVar24 = *unaff_x19;
          }
          iVar30 = iVar30 + 1;
        } while (iVar30 < *(int *)(lVar29 + 0x29c) + 1);
      }
      if (0 < *(int *)(lVar29 + 0x2a0)) {
        lVar24 = thunk_FUN_02dd3144(*(undefined8 *)
                                     Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__
                                   );
        FUN_0552aca4(lVar24,0);
        uVar20 = FUN_05fd7f88(*(undefined8 *)(in_stack_00000048 + 0x30),lVar29);
        if (lVar24 == 0) goto LAB_05fdad7c;
        *(undefined8 *)(lVar24 + 0x10) = uVar20;
        LeanTween__value();
        lVar26 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_CompileXPath__);
        FUN_0400f984(lVar26,*(undefined8 *)Method_AssetInputExample_DoChangeThing__);
        plVar16 = (long *)(lVar24 + 0x18);
        *plVar16 = lVar26;
        LeanTween__value(plVar16,lVar26);
        iVar30 = 0;
        while( true ) {
          iVar3 = *(int *)(lVar29 + 0x294);
          if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (iVar3 <= iVar30) break;
          lVar26 = *plVar16;
          uVar20 = FUN_05fd7aa8(*(undefined8 *)(in_stack_00000048 + 0x30),lVar29,iVar30);
          if (lVar26 == 0) goto LAB_05fdad7c;
          lVar25 = *(long *)(lVar26 + 0x10);
          lVar27 = *(long *)puVar9;
          *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
          if (lVar25 == 0) goto LAB_05fdad7c;
          uVar6 = *(uint *)(lVar26 + 0x18);
          if (uVar6 < *(uint *)(lVar25 + 0x18)) {
            *(uint *)(lVar26 + 0x18) = uVar6 + 1;
            *(undefined8 *)(lVar25 + (long)(int)uVar6 * 8 + 0x20) = uVar20;
            LeanTween__value();
          }
          else {
            FUN_040101ec(lVar26,uVar20,
                         *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
          }
          iVar30 = iVar30 + 1;
        }
        uVar20 = thunk_FUN_02dd3144(*(undefined8 *)
                                     Method_UnityEngine_Assertions_Assert_IsNull<UIRAtlasAllocator_AreaNode>__
                                   );
        FUN_04de9e6c(uVar20,*(undefined8 *)
                             Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElement>__);
        *(undefined8 *)(lVar24 + 0x20) = uVar20;
        LeanTween__value((undefined8 *)(lVar24 + 0x20),uVar20);
        *(long *)(lVar24 + 0x28) = lVar31;
        LeanTween__value((long *)(lVar24 + 0x28),lVar31);
        puVar10 = Method_AssetInputExample_DoPressedThing__;
        if (lVar31 == 0) goto LAB_05fdad7c;
        if (0 < *(int *)(lVar31 + 0x18)) {
          iVar30 = 0;
          do {
            uVar11 = FUN_03fb3b24(lVar31,iVar30,*(undefined8 *)PTR_DAT_069fe588);
            if (((*in_stack_00000028 == 0) ||
                (lVar29 = *(long *)(*in_stack_00000028 + 0x10), lVar29 == 0)) ||
               (FUN_041c332c(&stack0x00000350,lVar29,uVar11,*(undefined8 *)puVar10),
               in_stack_00000170 = lVar12, in_stack_00000178 = uVar15,
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
            uVar15 = in_stack_00000178;
            lVar12 = in_stack_00000170;
            if ((*in_stack_00000028 == 0) ||
               (lVar29 = *(long *)(*in_stack_00000028 + 0x10), lVar29 == 0)) goto LAB_05fdad7c;
            FUN_041c3390(lVar29,uVar11,&stack0x00000350,
                         *(undefined8 *)Method_AssetInputExample_DoReleasedThing__);
            iVar30 = iVar30 + 1;
            in_stack_00000030 = in_stack_00000388;
          } while (iVar30 < *(int *)(lVar31 + 0x18));
        }
      }
      uVar18 = FUN_05fd2394(&stack0x000001b0);
    }
    lVar12 = *(long *)(in_stack_00000048 + 0x30);
    if (lVar12 != 0) {
      iVar30 = 0;
      do {
        lVar12 = *(long *)(lVar12 + 0x18);
        if ((*(ushort *)
              (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) & 1)
            == 0) {
          FUN_02dcfd18();
        }
        if (*(int *)(lVar12 + 8) <= iVar30) {
          return;
        }
        if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
        piVar21 = (int *)FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar30,
                                      *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
        if (((*in_stack_00000028 == 0) ||
            (lVar12 = *(long *)(*in_stack_00000028 + 0x10), lVar12 == 0)) ||
           (FUN_041c332c(&stack0x00000350,lVar12,*piVar21,
                         *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
           in_stack_00000388 == 0)) break;
        lVar12 = *(long *)(in_stack_00000388 + 0x10);
        if (lVar12 != 0) {
          lVar29 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_06dc4872 == '\0') {
            FUN_02d965b8(
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                        );
            DAT_06dc4872 = '\x01';
          }
          puVar8 = Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
          if (lVar29 == 0) break;
          iVar3 = piVar21[10];
          uVar6 = piVar21[0xb];
          uVar18 = (ulong)uVar6;
          lVar24 = *(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
          ;
          lVar31 = *(long *)(lVar24 + 0x38);
          if (lVar31 == 0) {
            FUN_02dcfd74(lVar24);
            lVar31 = *(long *)(lVar24 + 0x38);
          }
          lVar29 = FUN_036ee4d8(*(undefined8 *)(lVar29 + 0x30),*(undefined8 *)(lVar31 + 0x10));
          if ((int)uVar6 < 0) {
            FUN_05508bc8(0);
          }
          else if (uVar6 != 0) {
            puVar13 = (undefined4 *)(lVar29 + (long)iVar3 * 0xc + 8);
            do {
              if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                 (lVar29 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar29 == 0))
              goto LAB_05fdad7c;
              pcVar22 = (char *)FUN_05fdfe80(lVar29,*(undefined8 *)(puVar13 + -2),*puVar13,0);
              if (*pcVar22 != '\0') {
                if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
                iVar3 = *(int *)(pcVar22 + 4);
                plVar16 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
                if ((*(ushort *)
                      (*(long *)(*(long *)
                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                + 0x20) + 0x135) & 1) == 0) {
                  FUN_02dcfd18(*(long *)(*(long *)
                                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                        + 0x20));
                }
                memcpy(&stack0x000000f0,(void *)(*plVar16 + (long)iVar3 * 0x80),0x80);
                if (in_stack_00000110 < 0) {
                  FUN_05fde34c(&stack0x00000350,3,*piVar21,0);
                  uVar15 = 0;
                }
                else {
                  uVar15 = FUN_05fdf5d4(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                        *piVar21,0);
                }
                uVar20 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),piVar21,
                                      &stack0x000000f0,uVar15);
                in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar8,uVar20,0);
                uVar11 = in_stack_000000f0;
                lVar29 = *(long *)(lVar12 + 0x20);
                in_stack_000000e8 = 0;
                LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar15 == 0xc);
                if (lVar29 == 0) goto LAB_05fdad7c;
                FUN_04dec6b0(lVar29,uVar11,in_stack_000000e0,in_stack_000000e8,
                             *(undefined8 *)
                              Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
              }
              uVar18 = uVar18 - 1;
              puVar13 = puVar13 + 3;
            } while (uVar18 != 0);
          }
          if (-1 < piVar21[8]) {
            lVar29 = *(long *)(in_stack_00000048 + 0x30);
            if (DAT_06dc4873 == '\0') {
              FUN_02d965b8(
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                          );
              DAT_06dc4873 = '\x01';
            }
            if (lVar29 == 0) break;
            iVar3 = piVar21[0xc];
            uVar6 = piVar21[0xd];
            lVar24 = *(long *)
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
            ;
            lVar31 = *(long *)(lVar24 + 0x38);
            if (lVar31 == 0) {
              FUN_02dcfd74(lVar24);
              lVar31 = *(long *)(lVar24 + 0x38);
            }
            lVar29 = FUN_036ee4ec(*(undefined8 *)(lVar29 + 0x38),*(undefined8 *)(lVar31 + 0x10));
            if ((int)uVar6 < 0) {
              FUN_05508bc8(0);
            }
            else if (uVar6 != 0) {
              uVar18 = 0;
              do {
                if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
                puVar14 = (undefined8 *)(lVar29 + (long)iVar3 * 0xc + uVar18 * 0xc);
                in_stack_00000030 =
                     in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar14 + 1);
                lVar31 = FUN_05fdc35c(*(long *)(in_stack_00000048 + 0x30),*puVar14,in_stack_00000030
                                      ,0);
                if (*(int *)(lVar31 + 8) != *piVar21) {
                  if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                     (lVar31 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar31 == 0))
                  goto LAB_05fdad7c;
                  lVar31 = FUN_05fdfe80(lVar31,*puVar14,*(undefined4 *)(puVar14 + 1),0);
                  iVar4 = *(int *)(lVar31 + 8);
                  if (0 < iVar4) {
                    iVar28 = 0;
                    do {
                      if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                         (lVar31 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10),
                         lVar31 == 0)) goto LAB_05fdad7c;
                      uVar15 = *puVar14;
                      if (DAT_06dc486d == '\0') {
                        FUN_02d965b8();
                        DAT_06dc486d = '\x01';
                      }
                      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                        thunk_FUN_02df485c();
                      }
                      if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                         (lVar24 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10),
                         lVar24 == 0)) goto LAB_05fdad7c;
                      lVar24 = *(long *)(lVar24 + 0x20);
                      iVar1 = *(int *)(lVar31 + 0x28);
                      iVar2 = *(int *)(lVar31 + 0x2c);
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
                      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(puVar14 + 1)) goto LAB_05fdada0;
                      piVar23 = (int *)FUN_042c8e28(lVar24 + (long)(int)*(uint *)(puVar14 + 1) * 8 +
                                                    0x20,iVar28 + ((int)((ulong)uVar15 >> 0x20) +
                                                                  iVar1 * ((uint)uVar15 & 0xffff)) *
                                                                  iVar2,
                                                    *(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                                  );
                      lVar31 = *(long *)(in_stack_00000048 + 0x30);
                      if (lVar31 == 0) goto LAB_05fdad7c;
                      iVar1 = *piVar23;
                      plVar16 = *(long **)(lVar31 + 0x18);
                      if ((*(ushort *)
                            (*(long *)(*(long *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                      + 0x20) + 0x135) & 1) == 0) {
                        FUN_02dcfd18(*(long *)(*(long *)
                                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                              + 0x20));
                        lVar31 = *(long *)(in_stack_00000048 + 0x30);
                      }
                      memcpy(&stack0x00000060,(void *)(*plVar16 + (long)iVar1 * 0x80),0x80);
                      uVar11 = in_stack_00000060;
                      uVar15 = FUN_05fdf5d4(lVar31,piVar21[8],in_stack_00000060,0);
                      uVar20 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),
                                            &stack0x00000060,piVar21,uVar15);
                      in_stack_000000e0 =
                           FUN_05362cb4(*(undefined8 *)
                                         Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__
                                        ,uVar20,0);
                      lVar31 = *(long *)(lVar12 + 0x20);
                      in_stack_000000e8 = 0;
                      LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                      in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar15 == 0xc);
                      if (lVar31 == 0) goto LAB_05fdad7c;
                      FUN_04dec6b0(lVar31,uVar11,in_stack_000000e0,in_stack_000000e8,
                                   *(undefined8 *)
                                    Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
                      iVar28 = iVar28 + 1;
                    } while (iVar4 != iVar28);
                  }
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 != uVar6);
            }
          }
        }
        lVar12 = *(long *)(in_stack_00000048 + 0x30);
        iVar30 = iVar30 + 1;
      } while (lVar12 != 0);
    }
  }
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


