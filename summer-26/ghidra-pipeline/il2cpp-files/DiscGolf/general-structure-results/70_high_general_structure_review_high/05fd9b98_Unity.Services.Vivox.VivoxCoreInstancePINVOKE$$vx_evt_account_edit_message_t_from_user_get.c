/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_account_edit_message_t_from_user_get
ENTRY_POINT: 05fd9b98
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_account_edit_message_t_from_user_get
               (void)

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
  bool in_ZR;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined4 *puVar18;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  int *piVar22;
  char *pcVar23;
  int *piVar24;
  undefined8 *puVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  int iVar32;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  int unaff_w24;
  int iVar33;
  ulong unaff_x25;
  long unaff_x26;
  int unaff_w28;
  ushort *puVar34;
  byte *unaff_x29;
  long in_stack_00000020;
  long *in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000048;
  int in_stack_00000058;
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
  long in_stack_000001a0;
  long in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined1 *in_stack_000001c8;
  ushort uStack00000000000001d0;
  ulong in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined4 in_stack_00000258;
  undefined8 in_stack_00000260;
  uint in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000288;
  ulong in_stack_00000298;
  undefined1 *in_stack_00000358;
  ulong in_stack_00000360;
  ulong in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  long in_stack_00000380;
  ulong in_stack_00000388;
  
  if (!in_ZR) {
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c();
  }
  puVar15 = (undefined8 *)__cxa_begin_catch();
  uVar16 = thunk_FUN_02dfd288(PTR_DAT_069fcb10);
  uVar17 = thunk_FUN_02df8d3c(uVar16,*(undefined8 *)*puVar15);
  iVar33 = in_stack_00000058;
  if ((uVar17 & 1) == 0) {
    puVar25 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar25 = *puVar15;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar25,&PTR_PTR_066567d8,0);
  }
  *(undefined8 *)(&stack0x00000050 + (long)in_stack_00000058 * 8) = *puVar15;
  in_stack_00000058 = in_stack_00000058 + 1;
  __cxa_end_catch();
  in_stack_00000058 = iVar33;
  while( true ) {
    uVar11 = *(undefined4 *)(unaff_x29 + 0x10);
    uVar17 = CONCAT44((int)((ulong)in_stack_00000270 >> 0x20),*(undefined4 *)(unaff_x29 + 8));
    lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_Newtonsoft_Json_Utilities_AotHelper_EnsureType<JsonObjectConverter>__
                               );
    FUN_0552aca4(lVar12,0);
    LeanTween__value(unaff_x26 + 0x30,lVar12);
    if ((((((lVar12 == 0) ||
           (*(undefined4 *)(lVar12 + 0x10) = *(undefined4 *)(unaff_x29 + 0x18), lVar12 == 0)) ||
          (*(undefined4 *)(lVar12 + 0x14) = *(undefined4 *)(unaff_x29 + 0x1c), lVar12 == 0)) ||
         ((*(undefined4 *)(lVar12 + 0x18) = *(undefined4 *)(unaff_x29 + 0x20), lVar12 == 0 ||
          (*(undefined4 *)(lVar12 + 0x20) = *(undefined4 *)(unaff_x29 + 0x24), lVar12 == 0)))) ||
        (*(undefined4 *)(lVar12 + 0x24) = in_stack_00000258, lVar12 == 0)) ||
       (*(byte *)(lVar12 + 0x1c) = unaff_x29[0x2e], lVar12 == 0)) break;
    *(byte *)(lVar12 + 0x28) = unaff_x29[0x2c];
    puVar9 = PTR_DAT_069fc3f8;
    uVar21 = CONCAT71((int7)((ulong)in_stack_00000288 >> 8),unaff_x29[0x14]);
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    puVar8 = PTR_DAT_069fc3f0;
    FUN_03fb358c(uVar13,*(undefined8 *)PTR_DAT_069fc3f0);
    LeanTween__value(unaff_x26 + 0x18,uVar13);
    uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
    FUN_03fb358c(uVar16,*(undefined8 *)puVar8);
    LeanTween__value(unaff_x26 + 0x20,uVar16);
    FUN_04a4c858(&stack0x00000350,unaff_x25 & 0xffffffff,unaff_w28,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
    if (in_stack_00000020 == 0) break;
    uVar14 = FUN_04bd2bf4(in_stack_00000020,0,
                          *(undefined8 *)Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__
                         );
    if ((uVar14 & 1) != 0) {
      FUN_04a4c858(&stack0x00000350,unaff_x25 & 0xffffffff,unaff_w28,
                   *(undefined8 *)
                    Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
      uVar13 = FUN_04bd2960(in_stack_00000020,0,
                            *(undefined8 *)
                             Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__);
      LeanTween__value(unaff_x26 + 0x18,uVar13);
    }
    FUN_04a4c858(&stack0x00000350,unaff_x25 & 0xffffffff,unaff_w28,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
    if (in_stack_00000030 == 0) break;
    uVar14 = FUN_04bd2bf4(in_stack_00000030,0,
                          *(undefined8 *)Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__
                         );
    if ((uVar14 & 1) != 0) {
      FUN_04a4c858(&stack0x00000350,unaff_x25 & 0xffffffff,unaff_w28,
                   *(undefined8 *)
                    Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
      uVar16 = FUN_04bd2960(in_stack_00000030,0,
                            *(undefined8 *)
                             Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__);
      LeanTween__value(unaff_x26 + 0x20,uVar16);
    }
    puVar8 = Method_UnityEngine_Animations_AnimatorControllerPlayable_SetHandle__;
    if ((*in_stack_00000028 == 0) || (lVar26 = *(long *)(*in_stack_00000028 + 0x18), lVar26 == 0))
    break;
    if (*(uint *)(lVar26 + 0x18) <= unaff_x25) {
LAB_05fdada0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar26 = *(long *)(lVar26 + unaff_x25 * 8 + 0x20);
    if (lVar26 == 0) break;
    lVar27 = *(long *)(lVar26 + 0x10);
    *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
    if (lVar27 == 0) break;
    uVar6 = *(uint *)(lVar26 + 0x18);
    if (uVar6 < *(uint *)(lVar27 + 0x18)) {
      lVar27 = lVar27 + (long)(int)uVar6 * 0x40;
      *(uint *)(lVar26 + 0x18) = uVar6 + 1;
      *(undefined1 **)(lVar27 + 0x28) = (undefined1 *)CONCAT44(uVar11,in_stack_00000268);
      *(undefined8 *)(lVar27 + 0x20) = in_stack_00000260;
      *(ulong *)(lVar27 + 0x38) = uVar13;
      *(ulong *)(lVar27 + 0x30) = uVar17;
      *(undefined8 *)(lVar27 + 0x48) = uVar21;
      *(undefined8 *)(lVar27 + 0x40) = uVar16;
      *(ulong *)(lVar27 + 0x58) = in_stack_00000298;
      *(long *)(lVar27 + 0x50) = lVar12;
      LeanTween__value(lVar27 + 0x20,0);
      in_stack_00000260 = 0;
    }
    else {
      FUN_041c6360(lVar26,&stack0x00000350,
                   *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0) + 0x70));
      in_stack_00000358 = (undefined1 *)CONCAT44(uVar11,in_stack_00000268);
      in_stack_00000360 = uVar17;
      in_stack_00000368 = uVar13;
      in_stack_00000370 = uVar16;
      in_stack_00000378 = uVar21;
      in_stack_00000380 = lVar12;
      in_stack_00000388 = in_stack_00000298;
    }
    unaff_w28 = unaff_w28 + 1;
    if (unaff_w24 == unaff_w28) {
      do {
        unaff_x25 = unaff_x25 + 1;
        if (unaff_x25 == 3) {
          lVar12 = *(long *)(in_stack_00000048 + 0x30);
          if (lVar12 == 0) goto LAB_05fdad7c;
          iVar33 = 0;
          goto LAB_05fd9c04;
        }
        if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
            (lVar12 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar12 == 0)) ||
           (lVar12 = *(long *)(lVar12 + 0x10), lVar12 == 0)) goto LAB_05fdad7c;
        if (*(uint *)(lVar12 + 0x18) <= unaff_x25) goto LAB_05fdada0;
        lVar12 = *(long *)(lVar12 + unaff_x25 * 8 + 0x20);
        if ((*(ushort *)
              (*(long *)(*(long *)
                          Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__ +
                        0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        unaff_w24 = *(int *)(lVar12 + 8);
      } while (unaff_w24 < 1);
      unaff_w28 = 0;
    }
    if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
        (lVar12 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar12 == 0)) ||
       (lVar12 = *(long *)(lVar12 + 0x10), lVar12 == 0)) break;
    if (*(uint *)(lVar12 + 0x18) <= unaff_x25) goto LAB_05fdada0;
    unaff_x29 = (byte *)FUN_042c950c(lVar12 + unaff_x25 * 8 + 0x20,unaff_w28,
                                     *(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputActionMap>__
                                    );
    in_stack_00000270 = 0;
    in_stack_00000288 = 0;
    in_stack_00000298 = 0;
    if (unaff_w28 == 0) {
      in_stack_00000260 = *(undefined8 *)PTR_DAT_06a1c7b0;
      LeanTween__value(&stack0x00000260);
      in_stack_00000258 = 0;
      in_stack_00000268 = 1;
    }
    else {
      if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
          (lVar12 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar12 == 0)) ||
         (lVar12 = *(long *)(lVar12 + 0x30), lVar12 == 0)) break;
      if (*(uint *)(lVar12 + 0x18) <= unaff_x25) goto LAB_05fdada0;
      lVar12 = *(long *)(lVar12 + unaff_x25 * 8 + 0x20);
      if (lVar12 == 0) break;
      puVar15 = (undefined8 *)
                FUN_0504d8a8(lVar12,unaff_w28,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                            );
      uVar16 = *puVar15;
      uVar17 = FUN_0536c9cc(uVar16,0);
      in_stack_00000260 =
           *(undefined8 *)
            Method_Newtonsoft_Json_Utilities_AotHelper_EnsureType<JsonObjectConverter>__;
      if ((uVar17 & 1) == 0) {
        in_stack_00000260 = uVar16;
      }
      LeanTween__value(&stack0x00000260);
      in_stack_00000258 = 0;
      in_stack_00000268 = (uint)*unaff_x29;
      if (unaff_x25 == 0) {
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_05fc6c5c(&stack0x00000238,unaff_w28,0,0);
        if (*(long *)(in_stack_00000048 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_05fc1afc(*(long *)(in_stack_00000048 + 0x10),&stack0x00000238,&stack0x00000248);
      }
    }
  }
  goto LAB_05fdad7c;
LAB_05fd9c04:
  lVar12 = *(long *)(lVar12 + 0x18);
  if ((*(ushort *)(*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) &
      1) == 0) {
    FUN_02dcfd18();
  }
  if (*(int *)(lVar12 + 8) <= iVar33) {
    lVar12 = *(long *)(in_stack_00000048 + 0x30);
    if (lVar12 != 0) {
      LeanTween__value(&stack0x00000350);
      uVar16 = 0xffffffff;
      in_stack_000001b0 = lVar12;
      in_stack_000001b8 = uVar16;
      uVar17 = FUN_05fd2394(&stack0x000001b0);
      puVar9 = Method_UnityEngine_AssetBundle_LoadAsset__;
      puVar8 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputEventTrace_DeviceInfo>__
      ;
      if ((uVar17 & 1) != 0) goto LAB_05fda528;
      goto LAB_05fda840;
    }
    goto LAB_05fdad7c;
  }
  if (*(long *)(in_stack_00000048 + 0x18) == 0) goto LAB_05fdad7c;
  lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000048 + 0x18),iVar33,
                        *(undefined8 *)Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__);
  if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
  in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,iVar33);
  puVar18 = (undefined4 *)
            FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar33,
                         *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
  lVar26 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar26 == 0) goto LAB_05fdad7c;
  uVar11 = *puVar18;
  if (DAT_06dc487d == '\0') {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__);
    DAT_06dc487d = '\x01';
  }
  lVar26 = *(long *)(lVar26 + 0x28);
  if (lVar26 == 0) goto LAB_05fdad7c;
  puVar15 = (undefined8 *)
            FUN_0504d8a8(lVar26,uVar11,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                        );
  uVar16 = FUN_05fd8904(*puVar15);
  LeanTween__value(&stack0x000001f0,uVar16);
  puVar8 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
  ;
  if (lVar12 == 0) goto LAB_05fdad7c;
  plVar19 = (long *)FUN_02d966a4(*(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
                                 ,3);
  LeanTween__value(&stack0x00000200,plVar19);
  plVar20 = (long *)FUN_02d966a4(*(undefined8 *)puVar8,3);
  LeanTween__value(&stack0x00000208,plVar20);
  lVar26 = *(long *)Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
  if (*(int *)(lVar26 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar26 = *(long *)Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
  }
  if (**(long **)(lVar26 + 0xb8) == 0) goto LAB_05fdad7c;
  FUN_04e95158(**(long **)(lVar26 + 0xb8),lVar12,&stack0x00000230,
               *(undefined8 *)
                Method_UnityEngine_Animator_GetBehaviour<OvrAvatarDefaultStateListener>__);
  lVar26 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_SetURN__);
  FUN_05fbe1f4();
  LeanTween__value(&stack0x00000228,lVar26);
  if ((((lVar26 == 0) || (*(undefined4 *)(lVar26 + 0x28) = puVar18[0x19], lVar26 == 0)) ||
      (*(undefined4 *)(lVar26 + 0x2c) = puVar18[0x1a], lVar26 == 0)) ||
     ((*(undefined4 *)(lVar26 + 0x30) = puVar18[0x1b], lVar26 == 0 ||
      (*(undefined4 *)(lVar26 + 0x34) = puVar18[0x1c], lVar26 == 0)))) goto LAB_05fdad7c;
  *(undefined1 *)(lVar26 + 0x38) = *(undefined1 *)((long)puVar18 + 0x7d);
  if (*(long *)(lVar12 + 200) == 0) goto LAB_05fdad7c;
  FUN_03f20aec(&stack0x00000350,*(long *)(lVar12 + 200),
               *(undefined8 *)Method_UnityEngine_AndroidJavaProxy_hashCode__);
  in_stack_000001c0 = in_stack_00000260;
  in_stack_000001c8 = in_stack_00000358;
  _uStack00000000000001d0 = in_stack_00000360;
  in_stack_000001d8 = in_stack_00000368;
  in_stack_000001e0 = in_stack_00000370;
  while (uVar17 = FUN_05130778(&stack0x000001c0,
                               *(undefined8 *)
                                Method_UnityEngine_AndroidJavaObjectUnityOwned_Dispose__),
        (uVar17 & 1) != 0) {
    if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar5 = uStack00000000000001d0;
    uVar17 = _uStack00000000000001d0 & 0xffff;
    lVar27 = *(long *)(lVar26 + 0x20);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (lVar27 == 0) {
LAB_05fda484:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar28 = *(long *)(lVar27 + 0x10);
    lVar30 = *unaff_x19;
    *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
    if (lVar28 == 0) goto LAB_05fda484;
    uVar6 = *(uint *)(lVar27 + 0x18);
    if (uVar6 < *(uint *)(lVar28 + 0x18)) {
      *(uint *)(lVar27 + 0x18) = uVar6 + 1;
      *(uint *)(lVar28 + (long)(int)uVar6 * 4 + 0x20) = (uint)uVar5;
    }
    else {
      FUN_03fb3e1c(lVar27,uVar17,*(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  FUN_05130774(&stack0x000001c0,*(undefined8 *)Method_UnityEngine_AndroidJavaObject__CallStatic__);
  uVar17 = 0;
  do {
    lVar27 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar27,*(undefined8 *)PTR_DAT_069fc3f0);
    if (plVar19 == (long *)0x0) goto LAB_05fdad7c;
    if ((lVar27 != 0) &&
       (lVar28 = thunk_FUN_02dd3048(lVar27,*(undefined8 *)(*plVar19 + 0x40)), lVar28 == 0)) {
LAB_05fdada4:
      uVar16 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar16,0);
    }
    if (*(uint *)(plVar19 + 3) <= uVar17) goto LAB_05fdada0;
    plVar19[uVar17 + 4] = lVar27;
    LeanTween__value(plVar19 + uVar17 + 4,lVar27);
    lVar27 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar27,*(undefined8 *)PTR_DAT_069fc3f0);
    if (plVar20 == (long *)0x0) goto LAB_05fdad7c;
    if ((lVar27 != 0) &&
       (lVar28 = thunk_FUN_02dd3048(lVar27,*(undefined8 *)(*plVar20 + 0x40)), lVar28 == 0))
    goto LAB_05fdada4;
    if (*(uint *)(plVar20 + 3) <= uVar17) goto LAB_05fdada0;
    plVar20[uVar17 + 4] = lVar27;
    LeanTween__value(plVar20 + uVar17 + 4,lVar27);
    lVar27 = *(long *)(lVar12 + 0xa8);
    if (lVar27 == 0) goto LAB_05fdad7c;
    if (*(uint *)(lVar27 + 0x18) <= uVar17) goto LAB_05fdada0;
    lVar27 = *(long *)(lVar27 + uVar17 * 8 + 0x20);
    if (lVar27 == 0) goto LAB_05fdad7c;
    FUN_04042130(&stack0x00000350,lVar27,
                 *(undefined8 *)
                  Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
LAB_05fda010:
    uVar13 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22);
    if ((uVar13 & 1) != 0) {
      if (*(long *)(lVar12 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar13 = FUN_040419bc(*(long *)(lVar12 + 0xd8),in_stack_00000360,
                            in_stack_00000368 & 0xffffffff,*unaff_x23);
      if ((uVar13 & 1) == 0) {
        if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(plVar19 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar27 = plVar19[uVar17 + 4];
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (lVar27 != 0) {
          lVar28 = *(long *)(lVar27 + 0x10);
          lVar30 = *unaff_x19;
          *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
          if (lVar28 != 0) {
            uVar7 = *(uint *)(lVar27 + 0x18);
            uVar6 = (uint)in_stack_00000360 & 0xffff;
            if (uVar7 < *(uint *)(lVar28 + 0x18)) {
              *(uint *)(lVar27 + 0x18) = uVar7 + 1;
              *(uint *)(lVar28 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
            }
            else {
              FUN_03fb3e1c(lVar27,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
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
    lVar27 = *(long *)(lVar12 + 0xb0);
    if (lVar27 == 0) goto LAB_05fdad7c;
    if (*(uint *)(lVar27 + 0x18) <= uVar17) goto LAB_05fdada0;
    lVar27 = *(long *)(lVar27 + uVar17 * 8 + 0x20);
    if (lVar27 == 0) goto LAB_05fdad7c;
    FUN_04042130(&stack0x00000350,lVar27,
                 *(undefined8 *)
                  Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
    in_stack_00000260 = 0;
    while (uVar13 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22), (uVar13 & 1) != 0) {
      if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(plVar20 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar27 = plVar20[uVar17 + 4];
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar27 == 0) {
LAB_05fda1e0:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar28 = *(long *)(lVar27 + 0x10);
      lVar30 = *unaff_x19;
      *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
      if (lVar28 == 0) goto LAB_05fda1e0;
      uVar7 = *(uint *)(lVar27 + 0x18);
      uVar6 = (uint)in_stack_00000360 & 0xffff;
      if (uVar7 < *(uint *)(lVar28 + 0x18)) {
        *(uint *)(lVar27 + 0x18) = uVar7 + 1;
        *(uint *)(lVar28 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
      }
      else {
        FUN_03fb3e1c(lVar27,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
    FUN_0515e9cc(&stack0x000002c0,
                 *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
    uVar17 = uVar17 + 1;
  } while (uVar17 != 3);
  lVar12 = *(long *)(in_stack_00000048 + 0x30);
  if (DAT_06dc487e == '\0') {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__);
    DAT_06dc487e = '\x01';
  }
  if (lVar12 == 0) goto LAB_05fdad7c;
  iVar1 = puVar18[0x10];
  uVar6 = puVar18[0x11];
  uVar17 = (ulong)uVar6;
  lVar28 = *(long *)
            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
  lVar27 = *(long *)(lVar28 + 0x38);
  if (lVar27 == 0) {
    FUN_02dcfd74(lVar28);
    lVar27 = *(long *)(lVar28 + 0x38);
  }
  lVar12 = FUN_036ee4c4(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar27 + 0x10));
  if ((int)uVar6 < 0) {
    FUN_05508bc8(0);
  }
  else if (uVar6 != 0) {
    puVar34 = (ushort *)(lVar12 + (long)iVar1 * 0x18);
    do {
      if (lVar26 == 0) goto LAB_05fdad7c;
      uVar5 = *puVar34;
      lVar12 = *(long *)(lVar26 + 0x18);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar12 == 0) goto LAB_05fdad7c;
      lVar27 = *(long *)(lVar12 + 0x10);
      lVar28 = *unaff_x19;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar27 == 0) goto LAB_05fdad7c;
      uVar6 = *(uint *)(lVar12 + 0x18);
      if (uVar6 < *(uint *)(lVar27 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar6 + 1;
        *(uint *)(lVar27 + (long)(int)uVar6 * 4 + 0x20) = (uint)uVar5;
      }
      else {
        FUN_03fb3e1c(lVar12,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar17 = uVar17 - 1;
      puVar34 = puVar34 + 0xc;
    } while (uVar17 != 0);
  }
  if ((*in_stack_00000028 == 0) || (lVar12 = *(long *)(*in_stack_00000028 + 0x10), lVar12 == 0))
  goto LAB_05fdad7c;
  memcpy(&stack0x00000300,&stack0x000001f0,0x48);
  lVar26 = *(long *)(lVar12 + 0x10);
  lVar27 = *(long *)Method_UnityEngine_Animator_GetBoneTransform__;
  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
  if (lVar26 == 0) goto LAB_05fdad7c;
  uVar6 = *(uint *)(lVar12 + 0x18);
  if (uVar6 < *(uint *)(lVar26 + 0x18)) {
    lVar26 = lVar26 + (long)(int)uVar6 * 0x48;
    *(uint *)(lVar12 + 0x18) = uVar6 + 1;
    memcpy((void *)(lVar26 + 0x20),&stack0x00000300,0x48);
    LeanTween__value(lVar26 + 0x20,0);
  }
  else {
    uVar16 = *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70);
    memcpy(&stack0x00000350,&stack0x00000300,0x48);
    FUN_041c36bc(lVar12,&stack0x00000350,uVar16);
  }
  lVar12 = *(long *)(in_stack_00000048 + 0x30);
  iVar33 = iVar33 + 1;
  in_stack_00000358 = &stack0x000002c0;
  if (lVar12 == 0) goto LAB_05fdad7c;
  goto LAB_05fd9c04;
  while( true ) {
    if (0 < *(int *)(lVar26 + 0x2a0)) {
      lVar28 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__
                                 );
      FUN_0552aca4(lVar28,0);
      uVar21 = FUN_05fd7f88(*(undefined8 *)(in_stack_00000048 + 0x30),lVar26);
      if (lVar28 == 0) goto LAB_05fdad7c;
      *(undefined8 *)(lVar28 + 0x10) = uVar21;
      LeanTween__value();
      lVar30 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_CompileXPath__);
      FUN_0400f984(lVar30,*(undefined8 *)Method_AssetInputExample_DoChangeThing__);
      plVar19 = (long *)(lVar28 + 0x18);
      *plVar19 = lVar30;
      LeanTween__value(plVar19,lVar30);
      iVar33 = 0;
      while( true ) {
        iVar1 = *(int *)(lVar26 + 0x294);
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (iVar1 <= iVar33) break;
        lVar30 = *plVar19;
        uVar21 = FUN_05fd7aa8(*(undefined8 *)(in_stack_00000048 + 0x30),lVar26,iVar33);
        if (lVar30 == 0) goto LAB_05fdad7c;
        lVar29 = *(long *)(lVar30 + 0x10);
        lVar31 = *(long *)puVar9;
        *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
        if (lVar29 == 0) goto LAB_05fdad7c;
        uVar6 = *(uint *)(lVar30 + 0x18);
        if (uVar6 < *(uint *)(lVar29 + 0x18)) {
          *(uint *)(lVar30 + 0x18) = uVar6 + 1;
          *(undefined8 *)(lVar29 + (long)(int)uVar6 * 8 + 0x20) = uVar21;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar30,uVar21,
                       *(undefined8 *)(*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70));
        }
        iVar33 = iVar33 + 1;
      }
      uVar21 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_UnityEngine_Assertions_Assert_IsNull<UIRAtlasAllocator_AreaNode>__
                                 );
      FUN_04de9e6c(uVar21,*(undefined8 *)
                           Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElement>__);
      *(undefined8 *)(lVar28 + 0x20) = uVar21;
      LeanTween__value((undefined8 *)(lVar28 + 0x20),uVar21);
      *(long *)(lVar28 + 0x28) = lVar27;
      LeanTween__value((long *)(lVar28 + 0x28),lVar27);
      puVar10 = Method_AssetInputExample_DoPressedThing__;
      if (lVar27 == 0) goto LAB_05fdad7c;
      if (0 < *(int *)(lVar27 + 0x18)) {
        iVar33 = 0;
        do {
          uVar11 = FUN_03fb3b24(lVar27,iVar33,*(undefined8 *)PTR_DAT_069fe588);
          if (*in_stack_00000028 == 0) goto LAB_05fdad7c;
          lVar26 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar26 == 0) ||
             (FUN_041c332c(&stack0x00000350,lVar26,uVar11,*(undefined8 *)puVar10),
             in_stack_00000170 = lVar12, in_stack_00000178 = uVar16,
             in_stack_00000180 = in_stack_00000360, in_stack_00000188 = in_stack_00000368,
             in_stack_00000190 = in_stack_00000370, in_stack_00000198 = in_stack_00000378,
             in_stack_000001a0 = in_stack_00000380, in_stack_00000388 == 0)) goto LAB_05fdad7c;
          *(long *)(in_stack_00000388 + 0x10) = lVar28;
          LeanTween__value((long *)(in_stack_00000388 + 0x10),lVar28);
          in_stack_00000380 = in_stack_000001a0;
          in_stack_00000378 = in_stack_00000198;
          in_stack_00000370 = in_stack_00000190;
          in_stack_00000368 = in_stack_00000188;
          in_stack_00000360 = in_stack_00000180;
          uVar16 = in_stack_00000178;
          lVar12 = in_stack_00000170;
          if ((*in_stack_00000028 == 0) ||
             (lVar26 = *(long *)(*in_stack_00000028 + 0x10), lVar26 == 0)) goto LAB_05fdad7c;
          FUN_041c3390(lVar26,uVar11,&stack0x00000350,
                       *(undefined8 *)Method_AssetInputExample_DoReleasedThing__);
          iVar33 = iVar33 + 1;
          in_stack_00000030 = in_stack_00000388;
        } while (iVar33 < *(int *)(lVar27 + 0x18));
      }
    }
    uVar17 = FUN_05fd2394(&stack0x000001b0);
    if ((uVar17 & 1) == 0) break;
LAB_05fda528:
    lVar26 = FUN_05fd233c(&stack0x000001b0);
    lVar27 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar27,*(undefined8 *)PTR_DAT_069fc3f0);
    iVar33 = *(int *)(lVar26 + 0x298);
    if (iVar33 < *(int *)(lVar26 + 0x29c) + 1) {
      if (lVar27 == 0) goto LAB_05fdad7c;
      lVar28 = *unaff_x19;
      do {
        lVar30 = *(long *)(lVar27 + 0x10);
        *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
        if (lVar30 == 0) goto LAB_05fdad7c;
        uVar6 = *(uint *)(lVar27 + 0x18);
        if (uVar6 < *(uint *)(lVar30 + 0x18)) {
          *(uint *)(lVar27 + 0x18) = uVar6 + 1;
          *(int *)(lVar30 + (long)(int)uVar6 * 4 + 0x20) = iVar33;
        }
        else {
          FUN_03fb3e1c(lVar27,iVar33,
                       *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
          lVar28 = *unaff_x19;
        }
        iVar33 = iVar33 + 1;
      } while (iVar33 < *(int *)(lVar26 + 0x29c) + 1);
    }
  }
LAB_05fda840:
  lVar12 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar12 != 0) {
    iVar33 = 0;
    do {
      lVar12 = *(long *)(lVar12 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) & 1) ==
          0) {
        FUN_02dcfd18();
      }
      if (*(int *)(lVar12 + 8) <= iVar33) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar22 = (int *)FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar33,
                                    *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
      if (((*in_stack_00000028 == 0) || (lVar12 = *(long *)(*in_stack_00000028 + 0x10), lVar12 == 0)
          ) || (FUN_041c332c(&stack0x00000350,lVar12,*piVar22,
                             *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
               in_stack_00000388 == 0)) break;
      lVar12 = *(long *)(in_stack_00000388 + 0x10);
      if (lVar12 != 0) {
        lVar26 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_06dc4872 == '\0') {
          FUN_02d965b8(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                      );
          DAT_06dc4872 = '\x01';
        }
        puVar8 = Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
        if (lVar26 == 0) break;
        iVar1 = piVar22[10];
        uVar6 = piVar22[0xb];
        uVar17 = (ulong)uVar6;
        lVar28 = *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
        ;
        lVar27 = *(long *)(lVar28 + 0x38);
        if (lVar27 == 0) {
          FUN_02dcfd74(lVar28);
          lVar27 = *(long *)(lVar28 + 0x38);
        }
        lVar26 = FUN_036ee4d8(*(undefined8 *)(lVar26 + 0x30),*(undefined8 *)(lVar27 + 0x10));
        if ((int)uVar6 < 0) {
          FUN_05508bc8(0);
        }
        else if (uVar6 != 0) {
          puVar18 = (undefined4 *)(lVar26 + (long)iVar1 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar26 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar26 == 0))
            goto LAB_05fdad7c;
            pcVar23 = (char *)FUN_05fdfe80(lVar26,*(undefined8 *)(puVar18 + -2),*puVar18,0);
            if (*pcVar23 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              iVar1 = *(int *)(pcVar23 + 4);
              plVar19 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02dcfd18(*(long *)(*(long *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                      + 0x20));
              }
              memcpy(&stack0x000000f0,(void *)(*plVar19 + (long)iVar1 * 0x80),0x80);
              if (in_stack_00000110 < 0) {
                FUN_05fde34c(&stack0x00000350,3,*piVar22,0);
                uVar16 = 0;
              }
              else {
                uVar16 = FUN_05fdf5d4(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                      *piVar22,0);
              }
              uVar21 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),piVar22,
                                    &stack0x000000f0,uVar16);
              in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar8,uVar21,0);
              uVar11 = in_stack_000000f0;
              lVar26 = *(long *)(lVar12 + 0x20);
              in_stack_000000e8 = 0;
              LeanTween__value(&stack0x000000e0,in_stack_000000e0);
              in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar16 == 0xc);
              if (lVar26 == 0) goto LAB_05fdad7c;
              FUN_04dec6b0(lVar26,uVar11,in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)
                            Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
            }
            uVar17 = uVar17 - 1;
            puVar18 = puVar18 + 3;
          } while (uVar17 != 0);
        }
        if (-1 < piVar22[8]) {
          lVar26 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_06dc4873 == '\0') {
            FUN_02d965b8(
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                        );
            DAT_06dc4873 = '\x01';
          }
          if (lVar26 == 0) break;
          iVar1 = piVar22[0xc];
          uVar6 = piVar22[0xd];
          lVar28 = *(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
          ;
          lVar27 = *(long *)(lVar28 + 0x38);
          if (lVar27 == 0) {
            FUN_02dcfd74(lVar28);
            lVar27 = *(long *)(lVar28 + 0x38);
          }
          lVar26 = FUN_036ee4ec(*(undefined8 *)(lVar26 + 0x38),*(undefined8 *)(lVar27 + 0x10));
          if ((int)uVar6 < 0) {
            FUN_05508bc8(0);
          }
          else if (uVar6 != 0) {
            uVar17 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              puVar15 = (undefined8 *)(lVar26 + (long)iVar1 * 0xc + uVar17 * 0xc);
              in_stack_00000030 =
                   in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar15 + 1);
              lVar27 = FUN_05fdc35c(*(long *)(in_stack_00000048 + 0x30),*puVar15,in_stack_00000030,0
                                   );
              if (*(int *)(lVar27 + 8) != *piVar22) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar27 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar27 == 0))
                goto LAB_05fdad7c;
                lVar27 = FUN_05fdfe80(lVar27,*puVar15,*(undefined4 *)(puVar15 + 1),0);
                iVar4 = *(int *)(lVar27 + 8);
                if (0 < iVar4) {
                  iVar32 = 0;
                  do {
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar27 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar27 == 0)
                       ) goto LAB_05fdad7c;
                    uVar16 = *puVar15;
                    if (DAT_06dc486d == '\0') {
                      FUN_02d965b8();
                      DAT_06dc486d = '\x01';
                    }
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar28 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar28 == 0)
                       ) goto LAB_05fdad7c;
                    lVar28 = *(long *)(lVar28 + 0x20);
                    iVar2 = *(int *)(lVar27 + 0x28);
                    iVar3 = *(int *)(lVar27 + 0x2c);
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
                    if (lVar28 == 0) goto LAB_05fdad7c;
                    if (*(uint *)(lVar28 + 0x18) <= *(uint *)(puVar15 + 1)) goto LAB_05fdada0;
                    piVar24 = (int *)FUN_042c8e28(lVar28 + (long)(int)*(uint *)(puVar15 + 1) * 8 +
                                                  0x20,iVar32 + ((int)((ulong)uVar16 >> 0x20) +
                                                                iVar2 * ((uint)uVar16 & 0xffff)) *
                                                                iVar3,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                                 );
                    lVar27 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar27 == 0) goto LAB_05fdad7c;
                    iVar2 = *piVar24;
                    plVar19 = *(long **)(lVar27 + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                    + 0x20) + 0x135) & 1) == 0) {
                      FUN_02dcfd18(*(long *)(*(long *)
                                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                            + 0x20));
                      lVar27 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar19 + (long)iVar2 * 0x80),0x80);
                    uVar11 = in_stack_00000060;
                    uVar16 = FUN_05fdf5d4(lVar27,piVar22[8],in_stack_00000060,0);
                    uVar21 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar22,uVar16);
                    in_stack_000000e0 =
                         FUN_05362cb4(*(undefined8 *)
                                       Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__
                                      ,uVar21,0);
                    lVar27 = *(long *)(lVar12 + 0x20);
                    in_stack_000000e8 = 0;
                    LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar16 == 0xc);
                    if (lVar27 == 0) goto LAB_05fdad7c;
                    FUN_04dec6b0(lVar27,uVar11,in_stack_000000e0,in_stack_000000e8,
                                 *(undefined8 *)
                                  Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
                    iVar32 = iVar32 + 1;
                  } while (iVar4 != iVar32);
                }
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 != uVar6);
          }
        }
      }
      lVar12 = *(long *)(in_stack_00000048 + 0x30);
      iVar33 = iVar33 + 1;
    } while (lVar12 != 0);
  }
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


