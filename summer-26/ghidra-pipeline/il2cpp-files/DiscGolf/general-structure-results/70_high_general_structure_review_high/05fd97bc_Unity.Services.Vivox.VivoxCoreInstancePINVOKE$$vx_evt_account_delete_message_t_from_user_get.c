/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_account_delete_message_t_from_user_get
ENTRY_POINT: 05fd97bc
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_account_delete_message_t_from_user_get
               (long param_1)

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
  undefined1 in_CY;
  undefined4 uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  long *plVar18;
  long *plVar19;
  int *piVar20;
  char *pcVar21;
  int *piVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  int unaff_w24;
  int iVar30;
  ulong unaff_x25;
  long unaff_x26;
  undefined8 uVar31;
  int unaff_w28;
  ushort *puVar32;
  undefined1 *unaff_x29;
  long in_stack_00000020;
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
  long in_stack_000001a0;
  long in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined1 *in_stack_000001c8;
  ushort uStack00000000000001d0;
  ulong in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_00000268;
  undefined1 *puVar33;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000288;
  undefined8 uVar34;
  ulong in_stack_00000298;
  undefined8 uVar35;
  undefined1 *in_stack_00000358;
  ulong in_stack_00000360;
  ulong in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  long in_stack_00000380;
  ulong in_stack_00000388;
  
  do {
    if ((bool)in_CY) {
LAB_05fdada0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar12 = *(long *)(param_1 + unaff_x25 * 8 + 0x20);
    if (lVar12 == 0) goto LAB_05fdad7c;
    puVar13 = (undefined8 *)
              FUN_0504d8a8(lVar12,unaff_w28,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                          );
    uVar31 = *puVar13;
    uVar14 = FUN_0536c9cc(uVar31,0);
    uVar35 = *(undefined8 *)
              Method_Newtonsoft_Json_Utilities_AotHelper_EnsureType<JsonObjectConverter>__;
    if ((uVar14 & 1) == 0) {
      uVar35 = uVar31;
    }
    LeanTween__value(&stack0x00000260);
    uVar31 = CONCAT71((int7)((ulong)in_stack_00000268 >> 8),*unaff_x29);
    if (unaff_x25 == 0) {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05fd97b0 with catch @ 05fd9838
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05fd979c with catch @ 05fd983c
                        */
      FUN_05fc6c5c(&stack0x00000238,unaff_w28,0,0);
      if (*(long *)(in_stack_00000048 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_05fc1afc(*(long *)(in_stack_00000048 + 0x10),&stack0x00000238,&stack0x00000248);
    }
    while( true ) {
      puVar33 = (undefined1 *)CONCAT44(*(undefined4 *)(unaff_x29 + 0x10),(int)uVar31);
      uVar14 = CONCAT44((int)((ulong)in_stack_00000270 >> 0x20),*(undefined4 *)(unaff_x29 + 8));
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
          (*(undefined4 *)(lVar12 + 0x24) = 0, lVar12 == 0)) ||
         (*(undefined1 *)(lVar12 + 0x1c) = unaff_x29[0x2e], lVar12 == 0)) goto LAB_05fdad7c;
      *(undefined1 *)(lVar12 + 0x28) = unaff_x29[0x2c];
      puVar9 = PTR_DAT_069fc3f8;
      uVar34 = CONCAT71((int7)((ulong)in_stack_00000288 >> 8),unaff_x29[0x14]);
      uVar15 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
      puVar8 = PTR_DAT_069fc3f0;
      FUN_03fb358c(uVar15,*(undefined8 *)PTR_DAT_069fc3f0);
      LeanTween__value(unaff_x26 + 0x18,uVar15);
      uVar31 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
      FUN_03fb358c(uVar31,*(undefined8 *)puVar8);
      LeanTween__value(unaff_x26 + 0x20,uVar31);
      FUN_04a4c858(&stack0x00000350,unaff_x25 & 0xffffffff,unaff_w28,
                   *(undefined8 *)
                    Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
      if (in_stack_00000020 == 0) goto LAB_05fdad7c;
      uVar16 = FUN_04bd2bf4(in_stack_00000020,0,
                            *(undefined8 *)
                             Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__);
      if ((uVar16 & 1) != 0) {
        FUN_04a4c858(&stack0x00000350,unaff_x25 & 0xffffffff,unaff_w28,
                     *(undefined8 *)
                      Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
        uVar15 = FUN_04bd2960(in_stack_00000020,0,
                              *(undefined8 *)
                               Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__)
        ;
        LeanTween__value(unaff_x26 + 0x18,uVar15);
      }
      FUN_04a4c858(&stack0x00000350,unaff_x25 & 0xffffffff,unaff_w28,
                   *(undefined8 *)
                    Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
      if (in_stack_00000030 == 0) goto LAB_05fdad7c;
      uVar16 = FUN_04bd2bf4(in_stack_00000030,0,
                            *(undefined8 *)
                             Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__);
      if ((uVar16 & 1) != 0) {
        FUN_04a4c858(&stack0x00000350,unaff_x25 & 0xffffffff,unaff_w28,
                     *(undefined8 *)
                      Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
        uVar31 = FUN_04bd2960(in_stack_00000030,0,
                              *(undefined8 *)
                               Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__)
        ;
        LeanTween__value(unaff_x26 + 0x20,uVar31);
      }
      puVar8 = Method_UnityEngine_Animations_AnimatorControllerPlayable_SetHandle__;
      if ((*in_stack_00000028 == 0) || (lVar23 = *(long *)(*in_stack_00000028 + 0x18), lVar23 == 0))
      goto LAB_05fdad7c;
      if (*(uint *)(lVar23 + 0x18) <= unaff_x25) goto LAB_05fdada0;
      lVar23 = *(long *)(lVar23 + unaff_x25 * 8 + 0x20);
      if (lVar23 == 0) goto LAB_05fdad7c;
      lVar24 = *(long *)(lVar23 + 0x10);
      *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
      if (lVar24 == 0) goto LAB_05fdad7c;
      uVar6 = *(uint *)(lVar23 + 0x18);
      if (uVar6 < *(uint *)(lVar24 + 0x18)) {
        lVar24 = lVar24 + (long)(int)uVar6 * 0x40;
        *(uint *)(lVar23 + 0x18) = uVar6 + 1;
        *(undefined1 **)(lVar24 + 0x28) = puVar33;
        *(undefined8 *)(lVar24 + 0x20) = uVar35;
        *(ulong *)(lVar24 + 0x38) = uVar15;
        *(ulong *)(lVar24 + 0x30) = uVar14;
        *(undefined8 *)(lVar24 + 0x48) = uVar34;
        *(undefined8 *)(lVar24 + 0x40) = uVar31;
        *(ulong *)(lVar24 + 0x58) = in_stack_00000298;
        *(long *)(lVar24 + 0x50) = lVar12;
        LeanTween__value(lVar24 + 0x20,0);
        uVar35 = 0;
      }
      else {
        FUN_041c6360(lVar23,&stack0x00000350,
                     *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0) + 0x70));
        in_stack_00000358 = puVar33;
        in_stack_00000360 = uVar14;
        in_stack_00000368 = uVar15;
        in_stack_00000370 = uVar31;
        in_stack_00000378 = uVar34;
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
            iVar30 = 0;
            goto LAB_05fd9c04;
          }
          if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
              (lVar12 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar12 == 0)) ||
             (lVar12 = *(long *)(lVar12 + 0x10), lVar12 == 0)) goto LAB_05fdad7c;
          if (*(uint *)(lVar12 + 0x18) <= unaff_x25) goto LAB_05fdada0;
          lVar12 = *(long *)(lVar12 + unaff_x25 * 8 + 0x20);
          if ((*(ushort *)
                (*(long *)(*(long *)
                            Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__
                          + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          unaff_w24 = *(int *)(lVar12 + 8);
        } while (unaff_w24 < 1);
        unaff_w28 = 0;
      }
      if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
          (lVar12 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar12 == 0)) ||
         (lVar12 = *(long *)(lVar12 + 0x10), lVar12 == 0)) goto LAB_05fdad7c;
      if (*(uint *)(lVar12 + 0x18) <= unaff_x25) goto LAB_05fdada0;
      unaff_x29 = (undefined1 *)
                  FUN_042c950c(lVar12 + unaff_x25 * 8 + 0x20,unaff_w28,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputActionMap>__
                              );
      in_stack_00000268 = 0;
      in_stack_00000270 = 0;
      in_stack_00000288 = 0;
      in_stack_00000298 = 0;
      if (unaff_w28 != 0) break;
      uVar35 = *(undefined8 *)PTR_DAT_06a1c7b0;
      LeanTween__value(&stack0x00000260);
      uVar31 = 1;
    }
    if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
        (lVar12 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar12 == 0)) ||
       (param_1 = *(long *)(lVar12 + 0x30), param_1 == 0)) goto LAB_05fdad7c;
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_x25;
  } while( true );
LAB_05fd9c04:
  lVar12 = *(long *)(lVar12 + 0x18);
  if ((*(ushort *)(*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) &
      1) == 0) {
    FUN_02dcfd18();
  }
  if (*(int *)(lVar12 + 8) <= iVar30) {
    lVar12 = *(long *)(in_stack_00000048 + 0x30);
    if (lVar12 != 0) {
      LeanTween__value(&stack0x00000350);
      uVar35 = 0xffffffff;
      in_stack_000001b0 = lVar12;
      in_stack_000001b8 = uVar35;
      uVar14 = FUN_05fd2394(&stack0x000001b0);
      puVar9 = Method_UnityEngine_AssetBundle_LoadAsset__;
      puVar8 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputEventTrace_DeviceInfo>__
      ;
      if ((uVar14 & 1) != 0) goto LAB_05fda528;
      goto LAB_05fda840;
    }
    goto LAB_05fdad7c;
  }
  if (*(long *)(in_stack_00000048 + 0x18) == 0) goto LAB_05fdad7c;
  lVar12 = FUN_0400ff1c(*(long *)(in_stack_00000048 + 0x18),iVar30,
                        *(undefined8 *)Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__);
  if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
  in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,iVar30);
  puVar17 = (undefined4 *)
            FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar30,
                         *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
  lVar23 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar23 == 0) goto LAB_05fdad7c;
  uVar11 = *puVar17;
  if (DAT_06dc487d == '\0') {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__);
    DAT_06dc487d = '\x01';
  }
  lVar23 = *(long *)(lVar23 + 0x28);
  if (lVar23 == 0) goto LAB_05fdad7c;
  puVar13 = (undefined8 *)
            FUN_0504d8a8(lVar23,uVar11,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                        );
  uVar31 = FUN_05fd8904(*puVar13);
  LeanTween__value(&stack0x000001f0,uVar31);
  puVar8 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
  ;
  if (lVar12 == 0) goto LAB_05fdad7c;
  plVar18 = (long *)FUN_02d966a4(*(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
                                 ,3);
  LeanTween__value(&stack0x00000200,plVar18);
  plVar19 = (long *)FUN_02d966a4(*(undefined8 *)puVar8,3);
  LeanTween__value(&stack0x00000208,plVar19);
  lVar23 = *(long *)Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
  if (*(int *)(lVar23 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar23 = *(long *)Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
  }
  if (**(long **)(lVar23 + 0xb8) == 0) goto LAB_05fdad7c;
  FUN_04e95158(**(long **)(lVar23 + 0xb8),lVar12,&stack0x00000230,
               *(undefined8 *)
                Method_UnityEngine_Animator_GetBehaviour<OvrAvatarDefaultStateListener>__);
  lVar23 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_SetURN__);
  FUN_05fbe1f4();
  LeanTween__value(&stack0x00000228,lVar23);
  if ((((lVar23 == 0) || (*(undefined4 *)(lVar23 + 0x28) = puVar17[0x19], lVar23 == 0)) ||
      (*(undefined4 *)(lVar23 + 0x2c) = puVar17[0x1a], lVar23 == 0)) ||
     ((*(undefined4 *)(lVar23 + 0x30) = puVar17[0x1b], lVar23 == 0 ||
      (*(undefined4 *)(lVar23 + 0x34) = puVar17[0x1c], lVar23 == 0)))) goto LAB_05fdad7c;
  *(undefined1 *)(lVar23 + 0x38) = *(undefined1 *)((long)puVar17 + 0x7d);
  if (*(long *)(lVar12 + 200) == 0) goto LAB_05fdad7c;
  FUN_03f20aec(&stack0x00000350,*(long *)(lVar12 + 200),
               *(undefined8 *)Method_UnityEngine_AndroidJavaProxy_hashCode__);
  in_stack_000001c0 = uVar35;
  in_stack_000001c8 = in_stack_00000358;
  _uStack00000000000001d0 = in_stack_00000360;
  in_stack_000001d8 = in_stack_00000368;
  in_stack_000001e0 = in_stack_00000370;
  while (uVar14 = FUN_05130778(&stack0x000001c0,
                               *(undefined8 *)
                                Method_UnityEngine_AndroidJavaObjectUnityOwned_Dispose__),
        (uVar14 & 1) != 0) {
    if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar5 = uStack00000000000001d0;
    uVar14 = _uStack00000000000001d0 & 0xffff;
    lVar24 = *(long *)(lVar23 + 0x20);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (lVar24 == 0) {
LAB_05fda484:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar25 = *(long *)(lVar24 + 0x10);
    lVar27 = *unaff_x19;
    *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
    if (lVar25 == 0) goto LAB_05fda484;
    uVar6 = *(uint *)(lVar24 + 0x18);
    if (uVar6 < *(uint *)(lVar25 + 0x18)) {
      *(uint *)(lVar24 + 0x18) = uVar6 + 1;
      *(uint *)(lVar25 + (long)(int)uVar6 * 4 + 0x20) = (uint)uVar5;
    }
    else {
      FUN_03fb3e1c(lVar24,uVar14,*(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  FUN_05130774(&stack0x000001c0,*(undefined8 *)Method_UnityEngine_AndroidJavaObject__CallStatic__);
  uVar14 = 0;
  do {
    lVar24 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar24,*(undefined8 *)PTR_DAT_069fc3f0);
    if (plVar18 == (long *)0x0) goto LAB_05fdad7c;
    if ((lVar24 != 0) &&
       (lVar25 = thunk_FUN_02dd3048(lVar24,*(undefined8 *)(*plVar18 + 0x40)), lVar25 == 0)) {
LAB_05fdada4:
      uVar35 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar35,0);
    }
    if (*(uint *)(plVar18 + 3) <= uVar14) goto LAB_05fdada0;
    plVar18[uVar14 + 4] = lVar24;
    LeanTween__value(plVar18 + uVar14 + 4,lVar24);
    lVar24 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar24,*(undefined8 *)PTR_DAT_069fc3f0);
    if (plVar19 == (long *)0x0) goto LAB_05fdad7c;
    if ((lVar24 != 0) &&
       (lVar25 = thunk_FUN_02dd3048(lVar24,*(undefined8 *)(*plVar19 + 0x40)), lVar25 == 0))
    goto LAB_05fdada4;
    if (*(uint *)(plVar19 + 3) <= uVar14) goto LAB_05fdada0;
    plVar19[uVar14 + 4] = lVar24;
    LeanTween__value(plVar19 + uVar14 + 4,lVar24);
    lVar24 = *(long *)(lVar12 + 0xa8);
    if (lVar24 == 0) goto LAB_05fdad7c;
    if (*(uint *)(lVar24 + 0x18) <= uVar14) goto LAB_05fdada0;
    lVar24 = *(long *)(lVar24 + uVar14 * 8 + 0x20);
    if (lVar24 == 0) goto LAB_05fdad7c;
    FUN_04042130(&stack0x00000350,lVar24,
                 *(undefined8 *)
                  Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
LAB_05fda010:
    uVar15 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22);
    if ((uVar15 & 1) != 0) {
      if (*(long *)(lVar12 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar15 = FUN_040419bc(*(long *)(lVar12 + 0xd8),in_stack_00000360,
                            in_stack_00000368 & 0xffffffff,*unaff_x23);
      if ((uVar15 & 1) == 0) {
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(plVar18 + 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar24 = plVar18[uVar14 + 4];
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (lVar24 != 0) {
          lVar25 = *(long *)(lVar24 + 0x10);
          lVar27 = *unaff_x19;
          *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
          if (lVar25 != 0) {
            uVar7 = *(uint *)(lVar24 + 0x18);
            uVar6 = (uint)in_stack_00000360 & 0xffff;
            if (uVar7 < *(uint *)(lVar25 + 0x18)) {
              *(uint *)(lVar24 + 0x18) = uVar7 + 1;
              *(uint *)(lVar25 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
            }
            else {
              FUN_03fb3e1c(lVar24,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
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
    lVar24 = *(long *)(lVar12 + 0xb0);
    if (lVar24 == 0) goto LAB_05fdad7c;
    if (*(uint *)(lVar24 + 0x18) <= uVar14) goto LAB_05fdada0;
    lVar24 = *(long *)(lVar24 + uVar14 * 8 + 0x20);
    if (lVar24 == 0) goto LAB_05fdad7c;
    FUN_04042130(&stack0x00000350,lVar24,
                 *(undefined8 *)
                  Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
    uVar35 = 0;
    while (uVar15 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22), (uVar15 & 1) != 0) {
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(plVar19 + 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar24 = plVar19[uVar14 + 4];
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar24 == 0) {
LAB_05fda1e0:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar25 = *(long *)(lVar24 + 0x10);
      lVar27 = *unaff_x19;
      *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
      if (lVar25 == 0) goto LAB_05fda1e0;
      uVar7 = *(uint *)(lVar24 + 0x18);
      uVar6 = (uint)in_stack_00000360 & 0xffff;
      if (uVar7 < *(uint *)(lVar25 + 0x18)) {
        *(uint *)(lVar24 + 0x18) = uVar7 + 1;
        *(uint *)(lVar25 + (long)(int)uVar7 * 4 + 0x20) = uVar6;
      }
      else {
        FUN_03fb3e1c(lVar24,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
    FUN_0515e9cc(&stack0x000002c0,
                 *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
    uVar14 = uVar14 + 1;
  } while (uVar14 != 3);
  lVar12 = *(long *)(in_stack_00000048 + 0x30);
  if (DAT_06dc487e == '\0') {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__);
    DAT_06dc487e = '\x01';
  }
  if (lVar12 == 0) goto LAB_05fdad7c;
  iVar1 = puVar17[0x10];
  uVar6 = puVar17[0x11];
  uVar14 = (ulong)uVar6;
  lVar25 = *(long *)
            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
  lVar24 = *(long *)(lVar25 + 0x38);
  if (lVar24 == 0) {
    FUN_02dcfd74(lVar25);
    lVar24 = *(long *)(lVar25 + 0x38);
  }
  lVar12 = FUN_036ee4c4(*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar24 + 0x10));
  if ((int)uVar6 < 0) {
    FUN_05508bc8(0);
  }
  else if (uVar6 != 0) {
    puVar32 = (ushort *)(lVar12 + (long)iVar1 * 0x18);
    do {
      if (lVar23 == 0) goto LAB_05fdad7c;
      uVar5 = *puVar32;
      lVar12 = *(long *)(lVar23 + 0x18);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar12 == 0) goto LAB_05fdad7c;
      lVar24 = *(long *)(lVar12 + 0x10);
      lVar25 = *unaff_x19;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      if (lVar24 == 0) goto LAB_05fdad7c;
      uVar6 = *(uint *)(lVar12 + 0x18);
      if (uVar6 < *(uint *)(lVar24 + 0x18)) {
        *(uint *)(lVar12 + 0x18) = uVar6 + 1;
        *(uint *)(lVar24 + (long)(int)uVar6 * 4 + 0x20) = (uint)uVar5;
      }
      else {
        FUN_03fb3e1c(lVar12,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar14 = uVar14 - 1;
      puVar32 = puVar32 + 0xc;
    } while (uVar14 != 0);
  }
  if ((*in_stack_00000028 == 0) || (lVar12 = *(long *)(*in_stack_00000028 + 0x10), lVar12 == 0))
  goto LAB_05fdad7c;
  memcpy(&stack0x00000300,&stack0x000001f0,0x48);
  lVar23 = *(long *)(lVar12 + 0x10);
  lVar24 = *(long *)Method_UnityEngine_Animator_GetBoneTransform__;
  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
  if (lVar23 == 0) goto LAB_05fdad7c;
  uVar6 = *(uint *)(lVar12 + 0x18);
  if (uVar6 < *(uint *)(lVar23 + 0x18)) {
    lVar23 = lVar23 + (long)(int)uVar6 * 0x48;
    *(uint *)(lVar12 + 0x18) = uVar6 + 1;
    memcpy((void *)(lVar23 + 0x20),&stack0x00000300,0x48);
    LeanTween__value(lVar23 + 0x20,0);
  }
  else {
    uVar31 = *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70);
    memcpy(&stack0x00000350,&stack0x00000300,0x48);
    FUN_041c36bc(lVar12,&stack0x00000350,uVar31);
  }
  lVar12 = *(long *)(in_stack_00000048 + 0x30);
  iVar30 = iVar30 + 1;
  in_stack_00000358 = &stack0x000002c0;
  if (lVar12 == 0) goto LAB_05fdad7c;
  goto LAB_05fd9c04;
  while( true ) {
    if (0 < *(int *)(lVar23 + 0x2a0)) {
      lVar25 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__
                                 );
      FUN_0552aca4(lVar25,0);
      uVar31 = FUN_05fd7f88(*(undefined8 *)(in_stack_00000048 + 0x30),lVar23);
      if (lVar25 == 0) goto LAB_05fdad7c;
      *(undefined8 *)(lVar25 + 0x10) = uVar31;
      LeanTween__value();
      lVar27 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_CompileXPath__);
      FUN_0400f984(lVar27,*(undefined8 *)Method_AssetInputExample_DoChangeThing__);
      plVar18 = (long *)(lVar25 + 0x18);
      *plVar18 = lVar27;
      LeanTween__value(plVar18,lVar27);
      iVar30 = 0;
      while( true ) {
        iVar1 = *(int *)(lVar23 + 0x294);
        if (*(int *)(*(long *)puVar8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (iVar1 <= iVar30) break;
        lVar27 = *plVar18;
        uVar31 = FUN_05fd7aa8(*(undefined8 *)(in_stack_00000048 + 0x30),lVar23,iVar30);
        if (lVar27 == 0) goto LAB_05fdad7c;
        lVar26 = *(long *)(lVar27 + 0x10);
        lVar28 = *(long *)puVar9;
        *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
        if (lVar26 == 0) goto LAB_05fdad7c;
        uVar6 = *(uint *)(lVar27 + 0x18);
        if (uVar6 < *(uint *)(lVar26 + 0x18)) {
          *(uint *)(lVar27 + 0x18) = uVar6 + 1;
          *(undefined8 *)(lVar26 + (long)(int)uVar6 * 8 + 0x20) = uVar31;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar27,uVar31,
                       *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
        }
        iVar30 = iVar30 + 1;
      }
      uVar31 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_UnityEngine_Assertions_Assert_IsNull<UIRAtlasAllocator_AreaNode>__
                                 );
      FUN_04de9e6c(uVar31,*(undefined8 *)
                           Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElement>__);
      *(undefined8 *)(lVar25 + 0x20) = uVar31;
      LeanTween__value((undefined8 *)(lVar25 + 0x20),uVar31);
      *(long *)(lVar25 + 0x28) = lVar24;
      LeanTween__value((long *)(lVar25 + 0x28),lVar24);
      puVar10 = Method_AssetInputExample_DoPressedThing__;
      if (lVar24 == 0) goto LAB_05fdad7c;
      if (0 < *(int *)(lVar24 + 0x18)) {
        iVar30 = 0;
        do {
          uVar11 = FUN_03fb3b24(lVar24,iVar30,*(undefined8 *)PTR_DAT_069fe588);
          if (*in_stack_00000028 == 0) goto LAB_05fdad7c;
          lVar23 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar23 == 0) ||
             (FUN_041c332c(&stack0x00000350,lVar23,uVar11,*(undefined8 *)puVar10),
             in_stack_00000170 = lVar12, in_stack_00000178 = uVar35,
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
          uVar35 = in_stack_00000178;
          lVar12 = in_stack_00000170;
          if ((*in_stack_00000028 == 0) ||
             (lVar23 = *(long *)(*in_stack_00000028 + 0x10), lVar23 == 0)) goto LAB_05fdad7c;
          FUN_041c3390(lVar23,uVar11,&stack0x00000350,
                       *(undefined8 *)Method_AssetInputExample_DoReleasedThing__);
          iVar30 = iVar30 + 1;
          in_stack_00000030 = in_stack_00000388;
        } while (iVar30 < *(int *)(lVar24 + 0x18));
      }
    }
    uVar14 = FUN_05fd2394(&stack0x000001b0);
    if ((uVar14 & 1) == 0) break;
LAB_05fda528:
    lVar23 = FUN_05fd233c(&stack0x000001b0);
    lVar24 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar24,*(undefined8 *)PTR_DAT_069fc3f0);
    iVar30 = *(int *)(lVar23 + 0x298);
    if (iVar30 < *(int *)(lVar23 + 0x29c) + 1) {
      if (lVar24 == 0) goto LAB_05fdad7c;
      lVar25 = *unaff_x19;
      do {
        lVar27 = *(long *)(lVar24 + 0x10);
        *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
        if (lVar27 == 0) goto LAB_05fdad7c;
        uVar6 = *(uint *)(lVar24 + 0x18);
        if (uVar6 < *(uint *)(lVar27 + 0x18)) {
          *(uint *)(lVar24 + 0x18) = uVar6 + 1;
          *(int *)(lVar27 + (long)(int)uVar6 * 4 + 0x20) = iVar30;
        }
        else {
          FUN_03fb3e1c(lVar24,iVar30,
                       *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
          lVar25 = *unaff_x19;
        }
        iVar30 = iVar30 + 1;
      } while (iVar30 < *(int *)(lVar23 + 0x29c) + 1);
    }
  }
LAB_05fda840:
  lVar12 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar12 != 0) {
    iVar30 = 0;
    do {
      lVar12 = *(long *)(lVar12 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) & 1) ==
          0) {
        FUN_02dcfd18();
      }
      if (*(int *)(lVar12 + 8) <= iVar30) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar20 = (int *)FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar30,
                                    *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
      if (((*in_stack_00000028 == 0) || (lVar12 = *(long *)(*in_stack_00000028 + 0x10), lVar12 == 0)
          ) || (FUN_041c332c(&stack0x00000350,lVar12,*piVar20,
                             *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
               in_stack_00000388 == 0)) break;
      lVar12 = *(long *)(in_stack_00000388 + 0x10);
      if (lVar12 != 0) {
        lVar23 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_06dc4872 == '\0') {
          FUN_02d965b8(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                      );
          DAT_06dc4872 = '\x01';
        }
        puVar8 = Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
        if (lVar23 == 0) break;
        iVar1 = piVar20[10];
        uVar6 = piVar20[0xb];
        uVar14 = (ulong)uVar6;
        lVar25 = *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
        ;
        lVar24 = *(long *)(lVar25 + 0x38);
        if (lVar24 == 0) {
          FUN_02dcfd74(lVar25);
          lVar24 = *(long *)(lVar25 + 0x38);
        }
        lVar23 = FUN_036ee4d8(*(undefined8 *)(lVar23 + 0x30),*(undefined8 *)(lVar24 + 0x10));
        if ((int)uVar6 < 0) {
          FUN_05508bc8(0);
        }
        else if (uVar6 != 0) {
          puVar17 = (undefined4 *)(lVar23 + (long)iVar1 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar23 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar23 == 0))
            goto LAB_05fdad7c;
            pcVar21 = (char *)FUN_05fdfe80(lVar23,*(undefined8 *)(puVar17 + -2),*puVar17,0);
            if (*pcVar21 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              iVar1 = *(int *)(pcVar21 + 4);
              plVar18 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02dcfd18(*(long *)(*(long *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                      + 0x20));
              }
              memcpy(&stack0x000000f0,(void *)(*plVar18 + (long)iVar1 * 0x80),0x80);
              if (in_stack_00000110 < 0) {
                FUN_05fde34c(&stack0x00000350,3,*piVar20,0);
                uVar35 = 0;
              }
              else {
                uVar35 = FUN_05fdf5d4(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                      *piVar20,0);
              }
              uVar31 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),piVar20,
                                    &stack0x000000f0,uVar35);
              in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar8,uVar31,0);
              uVar11 = in_stack_000000f0;
              lVar23 = *(long *)(lVar12 + 0x20);
              in_stack_000000e8 = 0;
              LeanTween__value(&stack0x000000e0,in_stack_000000e0);
              in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar35 == 0xc);
              if (lVar23 == 0) goto LAB_05fdad7c;
              FUN_04dec6b0(lVar23,uVar11,in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)
                            Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
            }
            uVar14 = uVar14 - 1;
            puVar17 = puVar17 + 3;
          } while (uVar14 != 0);
        }
        if (-1 < piVar20[8]) {
          lVar23 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_06dc4873 == '\0') {
            FUN_02d965b8(
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                        );
            DAT_06dc4873 = '\x01';
          }
          if (lVar23 == 0) break;
          iVar1 = piVar20[0xc];
          uVar6 = piVar20[0xd];
          lVar25 = *(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
          ;
          lVar24 = *(long *)(lVar25 + 0x38);
          if (lVar24 == 0) {
            FUN_02dcfd74(lVar25);
            lVar24 = *(long *)(lVar25 + 0x38);
          }
          lVar23 = FUN_036ee4ec(*(undefined8 *)(lVar23 + 0x38),*(undefined8 *)(lVar24 + 0x10));
          if ((int)uVar6 < 0) {
            FUN_05508bc8(0);
          }
          else if (uVar6 != 0) {
            uVar14 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              puVar13 = (undefined8 *)(lVar23 + (long)iVar1 * 0xc + uVar14 * 0xc);
              in_stack_00000030 =
                   in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar13 + 1);
              lVar24 = FUN_05fdc35c(*(long *)(in_stack_00000048 + 0x30),*puVar13,in_stack_00000030,0
                                   );
              if (*(int *)(lVar24 + 8) != *piVar20) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar24 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar24 == 0))
                goto LAB_05fdad7c;
                lVar24 = FUN_05fdfe80(lVar24,*puVar13,*(undefined4 *)(puVar13 + 1),0);
                iVar4 = *(int *)(lVar24 + 8);
                if (0 < iVar4) {
                  iVar29 = 0;
                  do {
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar24 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar24 == 0)
                       ) goto LAB_05fdad7c;
                    uVar35 = *puVar13;
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
                    iVar2 = *(int *)(lVar24 + 0x28);
                    iVar3 = *(int *)(lVar24 + 0x2c);
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
                    if (*(uint *)(lVar25 + 0x18) <= *(uint *)(puVar13 + 1)) goto LAB_05fdada0;
                    piVar22 = (int *)FUN_042c8e28(lVar25 + (long)(int)*(uint *)(puVar13 + 1) * 8 +
                                                  0x20,iVar29 + ((int)((ulong)uVar35 >> 0x20) +
                                                                iVar2 * ((uint)uVar35 & 0xffff)) *
                                                                iVar3,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                                 );
                    lVar24 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar24 == 0) goto LAB_05fdad7c;
                    iVar2 = *piVar22;
                    plVar18 = *(long **)(lVar24 + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                    + 0x20) + 0x135) & 1) == 0) {
                      FUN_02dcfd18(*(long *)(*(long *)
                                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                            + 0x20));
                      lVar24 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar18 + (long)iVar2 * 0x80),0x80);
                    uVar11 = in_stack_00000060;
                    uVar35 = FUN_05fdf5d4(lVar24,piVar20[8],in_stack_00000060,0);
                    uVar31 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar20,uVar35);
                    in_stack_000000e0 =
                         FUN_05362cb4(*(undefined8 *)
                                       Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__
                                      ,uVar31,0);
                    lVar24 = *(long *)(lVar12 + 0x20);
                    in_stack_000000e8 = 0;
                    LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar35 == 0xc);
                    if (lVar24 == 0) goto LAB_05fdad7c;
                    FUN_04dec6b0(lVar24,uVar11,in_stack_000000e0,in_stack_000000e8,
                                 *(undefined8 *)
                                  Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
                    iVar29 = iVar29 + 1;
                  } while (iVar4 != iVar29);
                }
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 != uVar6);
          }
        }
      }
      lVar12 = *(long *)(in_stack_00000048 + 0x30);
      iVar30 = iVar30 + 1;
    } while (lVar12 != 0);
  }
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


