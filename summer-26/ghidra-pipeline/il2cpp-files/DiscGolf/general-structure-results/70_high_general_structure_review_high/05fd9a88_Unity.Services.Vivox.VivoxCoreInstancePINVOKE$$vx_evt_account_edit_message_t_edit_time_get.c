/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_account_edit_message_t_edit_time_get
ENTRY_POINT: 05fd9a88
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_account_edit_message_t_edit_time_get
               (undefined8 *param_1,undefined1 *param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
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
  long lVar28;
  int iVar29;
  long *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  uint unaff_w24;
  int iVar30;
  ulong unaff_x25;
  long unaff_x26;
  uint unaff_w28;
  long lVar31;
  ushort *puVar32;
  long unaff_x29;
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
  ulong in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined1 *in_stack_000001c8;
  ushort uStack00000000000001d0;
  ulong in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_00000260;
  uint uVar33;
  undefined1 *in_stack_00000268;
  ulong in_stack_00000270;
  ulong in_stack_00000278;
  ulong in_stack_00000288;
  long in_stack_00000290;
  ulong in_stack_00000298;
  undefined1 *in_stack_00000358;
  ulong in_stack_00000360;
  ulong in_stack_00000368;
  undefined8 in_stack_00000370;
  ulong in_stack_00000378;
  long in_stack_00000380;
  ulong in_stack_00000388;
  
  do {
    FUN_04a4c858(param_2,param_3,param_4,*param_1);
    uVar12 = FUN_04bd2960(unaff_x20,0,
                          *(undefined8 *)
                           Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__);
    LeanTween__value(unaff_x26 + 0x20,uVar12);
    do {
      puVar7 = Method_UnityEngine_Animations_AnimatorControllerPlayable_SetHandle__;
      if ((*in_stack_00000028 == 0) || (lVar23 = *(long *)(*in_stack_00000028 + 0x18), lVar23 == 0))
      goto LAB_05fdad7c;
      if (*(uint *)(lVar23 + 0x18) <= unaff_x25) goto LAB_05fdada0;
      lVar23 = *(long *)(lVar23 + unaff_x25 * 8 + 0x20);
      if (lVar23 == 0) goto LAB_05fdad7c;
      lVar24 = *(long *)(lVar23 + 0x10);
      *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
      if (lVar24 == 0) goto LAB_05fdad7c;
      uVar33 = *(uint *)(lVar23 + 0x18);
      if (uVar33 < *(uint *)(lVar24 + 0x18)) {
        lVar24 = lVar24 + (long)(int)uVar33 * 0x40;
        *(uint *)(lVar23 + 0x18) = uVar33 + 1;
        *(undefined1 **)(lVar24 + 0x28) = in_stack_00000268;
        *(undefined8 *)(lVar24 + 0x20) = in_stack_00000260;
        *(ulong *)(lVar24 + 0x38) = in_stack_00000278;
        *(ulong *)(lVar24 + 0x30) = in_stack_00000270;
        *(ulong *)(lVar24 + 0x48) = in_stack_00000288;
        *(undefined8 *)(lVar24 + 0x40) = uVar12;
        *(ulong *)(lVar24 + 0x58) = in_stack_00000298;
        *(long *)(lVar24 + 0x50) = in_stack_00000290;
        LeanTween__value(lVar24 + 0x20,0);
        in_stack_00000260 = 0;
      }
      else {
        FUN_041c6360(lVar23,&stack0x00000350,
                     *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar7 + 0x20) + 0xc0) + 0x70));
        in_stack_00000358 = in_stack_00000268;
        in_stack_00000360 = in_stack_00000270;
        in_stack_00000368 = in_stack_00000278;
        in_stack_00000370 = uVar12;
        in_stack_00000378 = in_stack_00000288;
        in_stack_00000380 = in_stack_00000290;
        in_stack_00000388 = in_stack_00000298;
      }
      unaff_w28 = unaff_w28 + 1;
      if (unaff_w24 == unaff_w28) {
        do {
          unaff_x25 = unaff_x25 + 1;
          if (unaff_x25 == 3) {
            lVar23 = *(long *)(unaff_x29 + 0x30);
            if (lVar23 == 0) goto LAB_05fdad7c;
            iVar30 = 0;
            goto LAB_05fd9c04;
          }
          if (((*(long *)(unaff_x29 + 0x30) == 0) ||
              (lVar23 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x10), lVar23 == 0)) ||
             (lVar23 = *(long *)(lVar23 + 0x10), lVar23 == 0)) goto LAB_05fdad7c;
          if (*(uint *)(lVar23 + 0x18) <= unaff_x25) goto LAB_05fdada0;
          lVar23 = *(long *)(lVar23 + unaff_x25 * 8 + 0x20);
          if ((*(ushort *)
                (*(long *)(*(long *)
                            Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__
                          + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          unaff_w24 = *(uint *)(lVar23 + 8);
        } while ((int)unaff_w24 < 1);
        unaff_w28 = 0;
      }
      if (((*(long *)(unaff_x29 + 0x30) == 0) ||
          (lVar23 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x10), lVar23 == 0)) ||
         (lVar23 = *(long *)(lVar23 + 0x10), lVar23 == 0)) goto LAB_05fdad7c;
      if (*(uint *)(lVar23 + 0x18) <= unaff_x25) goto LAB_05fdada0;
      pbVar11 = (byte *)FUN_042c950c(lVar23 + unaff_x25 * 8 + 0x20,unaff_w28,
                                     *(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputActionMap>__
                                    );
      in_stack_00000298 = 0;
      if (unaff_w28 == 0) {
        in_stack_00000260 = *(undefined8 *)PTR_DAT_06a1c7b0;
        LeanTween__value(&stack0x00000260);
        uVar33 = 1;
      }
      else {
        if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
            (lVar23 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar23 == 0)) ||
           (lVar23 = *(long *)(lVar23 + 0x30), lVar23 == 0)) goto LAB_05fdad7c;
        if (*(uint *)(lVar23 + 0x18) <= unaff_x25) goto LAB_05fdada0;
        lVar23 = *(long *)(lVar23 + unaff_x25 * 8 + 0x20);
        if (lVar23 == 0) goto LAB_05fdad7c;
        puVar14 = (undefined8 *)
                  FUN_0504d8a8(lVar23,unaff_w28,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                              );
        uVar12 = *puVar14;
        uVar17 = FUN_0536c9cc(uVar12,0);
        in_stack_00000260 =
             *(undefined8 *)
              Method_Newtonsoft_Json_Utilities_AotHelper_EnsureType<JsonObjectConverter>__;
        if ((uVar17 & 1) == 0) {
          in_stack_00000260 = uVar12;
        }
        LeanTween__value(&stack0x00000260);
        uVar33 = (uint)*pbVar11;
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
      in_stack_00000268 = (undefined1 *)CONCAT44(*(undefined4 *)(pbVar11 + 0x10),uVar33);
      in_stack_00000270 = (ulong)*(uint *)(pbVar11 + 8);
      in_stack_00000290 =
           thunk_FUN_02dd3144(*(undefined8 *)
                               Method_Newtonsoft_Json_Utilities_AotHelper_EnsureType<JsonObjectConverter>__
                             );
      FUN_0552aca4(in_stack_00000290,0);
      LeanTween__value(unaff_x26 + 0x30,in_stack_00000290);
      if (((((in_stack_00000290 == 0) ||
            (*(undefined4 *)(in_stack_00000290 + 0x10) = *(undefined4 *)(pbVar11 + 0x18),
            in_stack_00000290 == 0)) ||
           (*(undefined4 *)(in_stack_00000290 + 0x14) = *(undefined4 *)(pbVar11 + 0x1c),
           in_stack_00000290 == 0)) ||
          ((*(undefined4 *)(in_stack_00000290 + 0x18) = *(undefined4 *)(pbVar11 + 0x20),
           in_stack_00000290 == 0 ||
           (*(undefined4 *)(in_stack_00000290 + 0x20) = *(undefined4 *)(pbVar11 + 0x24),
           in_stack_00000290 == 0)))) ||
         ((*(undefined4 *)(in_stack_00000290 + 0x24) = 0, in_stack_00000290 == 0 ||
          (*(byte *)(in_stack_00000290 + 0x1c) = pbVar11[0x2e], in_stack_00000290 == 0))))
      goto LAB_05fdad7c;
      *(byte *)(in_stack_00000290 + 0x28) = pbVar11[0x2c];
      puVar8 = PTR_DAT_069fc3f8;
      in_stack_00000288 = (ulong)pbVar11[0x14];
      in_stack_00000278 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
      puVar7 = PTR_DAT_069fc3f0;
      FUN_03fb358c(in_stack_00000278,*(undefined8 *)PTR_DAT_069fc3f0);
      LeanTween__value(unaff_x26 + 0x18,in_stack_00000278);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
      FUN_03fb358c(uVar12,*(undefined8 *)puVar7);
      LeanTween__value(unaff_x26 + 0x20,uVar12);
      FUN_04a4c858(&stack0x00000350,unaff_x25 & 0xffffffff,unaff_w28,
                   *(undefined8 *)
                    Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
      if (in_stack_00000020 == 0) goto LAB_05fdad7c;
      uVar17 = FUN_04bd2bf4(in_stack_00000020,0,
                            *(undefined8 *)
                             Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__);
      if ((uVar17 & 1) != 0) {
        FUN_04a4c858(&stack0x00000350,unaff_x25 & 0xffffffff,unaff_w28,
                     *(undefined8 *)
                      Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
        in_stack_00000278 =
             FUN_04bd2960(in_stack_00000020,0,
                          *(undefined8 *)
                           Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__);
        LeanTween__value(unaff_x26 + 0x18,in_stack_00000278);
      }
      FUN_04a4c858(&stack0x00000350,unaff_x25 & 0xffffffff,unaff_w28,
                   *(undefined8 *)
                    Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
      if (in_stack_00000030 == 0) goto LAB_05fdad7c;
      uVar17 = FUN_04bd2bf4(in_stack_00000030,0,
                            *(undefined8 *)
                             Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__);
      unaff_x29 = in_stack_00000048;
    } while ((uVar17 & 1) == 0);
    param_2 = &stack0x00000350;
    param_3 = unaff_x25 & 0xffffffff;
    param_4 = (ulong)unaff_w28;
    param_1 = (undefined8 *)Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__;
    unaff_x20 = in_stack_00000030;
  } while( true );
LAB_05fd9c04:
  lVar23 = *(long *)(lVar23 + 0x18);
  if ((*(ushort *)(*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) &
      1) == 0) {
    FUN_02dcfd18();
  }
  if (*(int *)(lVar23 + 8) <= iVar30) {
    lVar23 = *(long *)(unaff_x29 + 0x30);
    if (lVar23 != 0) {
      LeanTween__value(&stack0x00000350);
      uVar12 = 0xffffffff;
      in_stack_000001b0 = lVar23;
      in_stack_000001b8 = uVar12;
      uVar17 = FUN_05fd2394(&stack0x000001b0);
      puVar8 = Method_UnityEngine_AssetBundle_LoadAsset__;
      puVar7 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputEventTrace_DeviceInfo>__
      ;
      if ((uVar17 & 1) != 0) goto LAB_05fda528;
      goto LAB_05fda840;
    }
    goto LAB_05fdad7c;
  }
  if (*(long *)(unaff_x29 + 0x18) == 0) goto LAB_05fdad7c;
  lVar23 = FUN_0400ff1c(*(long *)(unaff_x29 + 0x18),iVar30,
                        *(undefined8 *)Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__);
  if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_05fdad7c;
  in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,iVar30);
  puVar13 = (undefined4 *)
            FUN_042c6444(*(long *)(unaff_x29 + 0x30) + 0x18,iVar30,
                         *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
  lVar24 = *(long *)(unaff_x29 + 0x30);
  if (lVar24 == 0) goto LAB_05fdad7c;
  uVar10 = *puVar13;
  if (DAT_06dc487d == '\0') {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__);
    DAT_06dc487d = '\x01';
  }
  lVar24 = *(long *)(lVar24 + 0x28);
  if (lVar24 == 0) goto LAB_05fdad7c;
  puVar14 = (undefined8 *)
            FUN_0504d8a8(lVar24,uVar10,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                        );
  uVar12 = FUN_05fd8904(*puVar14);
  LeanTween__value(&stack0x000001f0,uVar12);
  puVar7 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
  ;
  if (lVar23 == 0) goto LAB_05fdad7c;
  plVar15 = (long *)FUN_02d966a4(*(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
                                 ,3);
  LeanTween__value(&stack0x00000200,plVar15);
  plVar16 = (long *)FUN_02d966a4(*(undefined8 *)puVar7,3);
  LeanTween__value(&stack0x00000208,plVar16);
  lVar24 = *(long *)Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
  if (*(int *)(lVar24 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar24 = *(long *)Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
  }
  if (**(long **)(lVar24 + 0xb8) == 0) goto LAB_05fdad7c;
  FUN_04e95158(**(long **)(lVar24 + 0xb8),lVar23,&stack0x00000230,
               *(undefined8 *)
                Method_UnityEngine_Animator_GetBehaviour<OvrAvatarDefaultStateListener>__);
  lVar24 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_SetURN__);
  FUN_05fbe1f4();
  LeanTween__value(&stack0x00000228,lVar24);
  if ((((lVar24 == 0) || (*(undefined4 *)(lVar24 + 0x28) = puVar13[0x19], lVar24 == 0)) ||
      (*(undefined4 *)(lVar24 + 0x2c) = puVar13[0x1a], lVar24 == 0)) ||
     ((*(undefined4 *)(lVar24 + 0x30) = puVar13[0x1b], lVar24 == 0 ||
      (*(undefined4 *)(lVar24 + 0x34) = puVar13[0x1c], lVar24 == 0)))) goto LAB_05fdad7c;
  *(undefined1 *)(lVar24 + 0x38) = *(undefined1 *)((long)puVar13 + 0x7d);
  if (*(long *)(lVar23 + 200) == 0) goto LAB_05fdad7c;
  FUN_03f20aec(&stack0x00000350,*(long *)(lVar23 + 200),
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
    if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar5 = uStack00000000000001d0;
    uVar17 = _uStack00000000000001d0 & 0xffff;
    lVar31 = *(long *)(lVar24 + 0x20);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (lVar31 == 0) {
LAB_05fda484:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar25 = *(long *)(lVar31 + 0x10);
    lVar27 = *unaff_x19;
    *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
    if (lVar25 == 0) goto LAB_05fda484;
    uVar33 = *(uint *)(lVar31 + 0x18);
    if (uVar33 < *(uint *)(lVar25 + 0x18)) {
      *(uint *)(lVar31 + 0x18) = uVar33 + 1;
      *(uint *)(lVar25 + (long)(int)uVar33 * 4 + 0x20) = (uint)uVar5;
    }
    else {
      FUN_03fb3e1c(lVar31,uVar17,*(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  FUN_05130774(&stack0x000001c0,*(undefined8 *)Method_UnityEngine_AndroidJavaObject__CallStatic__);
  uVar17 = 0;
  do {
    lVar31 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar31,*(undefined8 *)PTR_DAT_069fc3f0);
    if (plVar15 == (long *)0x0) goto LAB_05fdad7c;
    if ((lVar31 != 0) &&
       (lVar25 = thunk_FUN_02dd3048(lVar31,*(undefined8 *)(*plVar15 + 0x40)), lVar25 == 0)) {
LAB_05fdada4:
      uVar12 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar12,0);
    }
    if (*(uint *)(plVar15 + 3) <= uVar17) {
LAB_05fdada0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    plVar15[uVar17 + 4] = lVar31;
    LeanTween__value(plVar15 + uVar17 + 4,lVar31);
    lVar31 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar31,*(undefined8 *)PTR_DAT_069fc3f0);
    if (plVar16 == (long *)0x0) goto LAB_05fdad7c;
    if ((lVar31 != 0) &&
       (lVar25 = thunk_FUN_02dd3048(lVar31,*(undefined8 *)(*plVar16 + 0x40)), lVar25 == 0))
    goto LAB_05fdada4;
    if (*(uint *)(plVar16 + 3) <= uVar17) goto LAB_05fdada0;
    plVar16[uVar17 + 4] = lVar31;
    LeanTween__value(plVar16 + uVar17 + 4,lVar31);
    lVar31 = *(long *)(lVar23 + 0xa8);
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
      if (*(long *)(lVar23 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar18 = FUN_040419bc(*(long *)(lVar23 + 0xd8),in_stack_00000360,
                            in_stack_00000368 & 0xffffffff,*unaff_x23);
      if ((uVar18 & 1) == 0) {
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
        if (lVar31 != 0) {
          lVar25 = *(long *)(lVar31 + 0x10);
          lVar27 = *unaff_x19;
          *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
          if (lVar25 != 0) {
            uVar6 = *(uint *)(lVar31 + 0x18);
            uVar33 = (uint)in_stack_00000360 & 0xffff;
            if (uVar6 < *(uint *)(lVar25 + 0x18)) {
              *(uint *)(lVar31 + 0x18) = uVar6 + 1;
              *(uint *)(lVar25 + (long)(int)uVar6 * 4 + 0x20) = uVar33;
            }
            else {
              FUN_03fb3e1c(lVar31,uVar33,
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
    lVar31 = *(long *)(lVar23 + 0xb0);
    if (lVar31 == 0) goto LAB_05fdad7c;
    if (*(uint *)(lVar31 + 0x18) <= uVar17) goto LAB_05fdada0;
    lVar31 = *(long *)(lVar31 + uVar17 * 8 + 0x20);
    if (lVar31 == 0) goto LAB_05fdad7c;
    FUN_04042130(&stack0x00000350,lVar31,
                 *(undefined8 *)
                  Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
    in_stack_00000260 = 0;
    while (uVar18 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22), (uVar18 & 1) != 0) {
      if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(plVar16 + 3) <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar31 = plVar16[uVar17 + 4];
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar31 == 0) {
LAB_05fda1e0:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar25 = *(long *)(lVar31 + 0x10);
      lVar27 = *unaff_x19;
      *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
      if (lVar25 == 0) goto LAB_05fda1e0;
      uVar6 = *(uint *)(lVar31 + 0x18);
      uVar33 = (uint)in_stack_00000360 & 0xffff;
      if (uVar6 < *(uint *)(lVar25 + 0x18)) {
        *(uint *)(lVar31 + 0x18) = uVar6 + 1;
        *(uint *)(lVar25 + (long)(int)uVar6 * 4 + 0x20) = uVar33;
      }
      else {
        FUN_03fb3e1c(lVar31,uVar33,
                     *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_0515e9cc(&stack0x000002c0,
                 *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
    uVar17 = uVar17 + 1;
  } while (uVar17 != 3);
  lVar23 = *(long *)(in_stack_00000048 + 0x30);
  if (DAT_06dc487e == '\0') {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__);
    DAT_06dc487e = '\x01';
  }
  if (lVar23 == 0) goto LAB_05fdad7c;
  iVar1 = puVar13[0x10];
  uVar33 = puVar13[0x11];
  uVar17 = (ulong)uVar33;
  lVar25 = *(long *)
            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
  lVar31 = *(long *)(lVar25 + 0x38);
  if (lVar31 == 0) {
    FUN_02dcfd74(lVar25);
    lVar31 = *(long *)(lVar25 + 0x38);
  }
  lVar23 = FUN_036ee4c4(*(undefined8 *)(lVar23 + 0x40),*(undefined8 *)(lVar31 + 0x10));
  if ((int)uVar33 < 0) {
    FUN_05508bc8(0);
  }
  else if (uVar33 != 0) {
    puVar32 = (ushort *)(lVar23 + (long)iVar1 * 0x18);
    do {
      if (lVar24 == 0) goto LAB_05fdad7c;
      uVar5 = *puVar32;
      lVar23 = *(long *)(lVar24 + 0x18);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar23 == 0) goto LAB_05fdad7c;
      lVar31 = *(long *)(lVar23 + 0x10);
      lVar25 = *unaff_x19;
      *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
      if (lVar31 == 0) goto LAB_05fdad7c;
      uVar33 = *(uint *)(lVar23 + 0x18);
      if (uVar33 < *(uint *)(lVar31 + 0x18)) {
        *(uint *)(lVar23 + 0x18) = uVar33 + 1;
        *(uint *)(lVar31 + (long)(int)uVar33 * 4 + 0x20) = (uint)uVar5;
      }
      else {
        FUN_03fb3e1c(lVar23,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar17 = uVar17 - 1;
      puVar32 = puVar32 + 0xc;
    } while (uVar17 != 0);
  }
  if ((*in_stack_00000028 == 0) || (lVar23 = *(long *)(*in_stack_00000028 + 0x10), lVar23 == 0))
  goto LAB_05fdad7c;
  memcpy(&stack0x00000300,&stack0x000001f0,0x48);
  lVar24 = *(long *)(lVar23 + 0x10);
  lVar31 = *(long *)Method_UnityEngine_Animator_GetBoneTransform__;
  *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
  if (lVar24 == 0) goto LAB_05fdad7c;
  uVar33 = *(uint *)(lVar23 + 0x18);
  if (uVar33 < *(uint *)(lVar24 + 0x18)) {
    lVar24 = lVar24 + (long)(int)uVar33 * 0x48;
    *(uint *)(lVar23 + 0x18) = uVar33 + 1;
    memcpy((void *)(lVar24 + 0x20),&stack0x00000300,0x48);
    LeanTween__value(lVar24 + 0x20,0);
  }
  else {
    uVar12 = *(undefined8 *)(*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70);
    memcpy(&stack0x00000350,&stack0x00000300,0x48);
    FUN_041c36bc(lVar23,&stack0x00000350,uVar12);
  }
  lVar23 = *(long *)(in_stack_00000048 + 0x30);
  iVar30 = iVar30 + 1;
  unaff_x29 = in_stack_00000048;
  in_stack_00000358 = &stack0x000002c0;
  if (lVar23 == 0) goto LAB_05fdad7c;
  goto LAB_05fd9c04;
  while( true ) {
    if (0 < *(int *)(lVar24 + 0x2a0)) {
      lVar25 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__
                                 );
      FUN_0552aca4(lVar25,0);
      uVar19 = FUN_05fd7f88(*(undefined8 *)(in_stack_00000048 + 0x30),lVar24);
      if (lVar25 == 0) goto LAB_05fdad7c;
      *(undefined8 *)(lVar25 + 0x10) = uVar19;
      LeanTween__value();
      lVar27 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_CompileXPath__);
      FUN_0400f984(lVar27,*(undefined8 *)Method_AssetInputExample_DoChangeThing__);
      plVar15 = (long *)(lVar25 + 0x18);
      *plVar15 = lVar27;
      LeanTween__value(plVar15,lVar27);
      iVar30 = 0;
      while( true ) {
        iVar1 = *(int *)(lVar24 + 0x294);
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (iVar1 <= iVar30) break;
        lVar27 = *plVar15;
        uVar19 = FUN_05fd7aa8(*(undefined8 *)(in_stack_00000048 + 0x30),lVar24,iVar30);
        if (lVar27 == 0) goto LAB_05fdad7c;
        lVar26 = *(long *)(lVar27 + 0x10);
        lVar28 = *(long *)puVar8;
        *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
        if (lVar26 == 0) goto LAB_05fdad7c;
        uVar33 = *(uint *)(lVar27 + 0x18);
        if (uVar33 < *(uint *)(lVar26 + 0x18)) {
          *(uint *)(lVar27 + 0x18) = uVar33 + 1;
          *(undefined8 *)(lVar26 + (long)(int)uVar33 * 8 + 0x20) = uVar19;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar27,uVar19,
                       *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
        }
        iVar30 = iVar30 + 1;
      }
      uVar19 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_UnityEngine_Assertions_Assert_IsNull<UIRAtlasAllocator_AreaNode>__
                                 );
      FUN_04de9e6c(uVar19,*(undefined8 *)
                           Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElement>__);
      *(undefined8 *)(lVar25 + 0x20) = uVar19;
      LeanTween__value((undefined8 *)(lVar25 + 0x20),uVar19);
      *(long *)(lVar25 + 0x28) = lVar31;
      LeanTween__value((long *)(lVar25 + 0x28),lVar31);
      puVar9 = Method_AssetInputExample_DoPressedThing__;
      if (lVar31 == 0) goto LAB_05fdad7c;
      if (0 < *(int *)(lVar31 + 0x18)) {
        iVar30 = 0;
        do {
          uVar10 = FUN_03fb3b24(lVar31,iVar30,*(undefined8 *)PTR_DAT_069fe588);
          if (*in_stack_00000028 == 0) goto LAB_05fdad7c;
          lVar24 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar24 == 0) ||
             (FUN_041c332c(&stack0x00000350,lVar24,uVar10,*(undefined8 *)puVar9),
             in_stack_00000170 = lVar23, in_stack_00000178 = uVar12,
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
          uVar12 = in_stack_00000178;
          lVar23 = in_stack_00000170;
          if ((*in_stack_00000028 == 0) ||
             (lVar24 = *(long *)(*in_stack_00000028 + 0x10), lVar24 == 0)) goto LAB_05fdad7c;
          FUN_041c3390(lVar24,uVar10,&stack0x00000350,
                       *(undefined8 *)Method_AssetInputExample_DoReleasedThing__);
          iVar30 = iVar30 + 1;
          in_stack_00000030 = in_stack_00000388;
        } while (iVar30 < *(int *)(lVar31 + 0x18));
      }
    }
    uVar17 = FUN_05fd2394(&stack0x000001b0);
    if ((uVar17 & 1) == 0) break;
LAB_05fda528:
    lVar24 = FUN_05fd233c(&stack0x000001b0);
    lVar31 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar31,*(undefined8 *)PTR_DAT_069fc3f0);
    iVar30 = *(int *)(lVar24 + 0x298);
    if (iVar30 < *(int *)(lVar24 + 0x29c) + 1) {
      if (lVar31 == 0) goto LAB_05fdad7c;
      lVar25 = *unaff_x19;
      do {
        lVar27 = *(long *)(lVar31 + 0x10);
        *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
        if (lVar27 == 0) goto LAB_05fdad7c;
        uVar33 = *(uint *)(lVar31 + 0x18);
        if (uVar33 < *(uint *)(lVar27 + 0x18)) {
          *(uint *)(lVar31 + 0x18) = uVar33 + 1;
          *(int *)(lVar27 + (long)(int)uVar33 * 4 + 0x20) = iVar30;
        }
        else {
          FUN_03fb3e1c(lVar31,iVar30,
                       *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
          lVar25 = *unaff_x19;
        }
        iVar30 = iVar30 + 1;
      } while (iVar30 < *(int *)(lVar24 + 0x29c) + 1);
    }
  }
LAB_05fda840:
  lVar23 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar23 != 0) {
    iVar30 = 0;
    do {
      lVar23 = *(long *)(lVar23 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) & 1) ==
          0) {
        FUN_02dcfd18();
      }
      if (*(int *)(lVar23 + 8) <= iVar30) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar20 = (int *)FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar30,
                                    *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
      if (((*in_stack_00000028 == 0) || (lVar23 = *(long *)(*in_stack_00000028 + 0x10), lVar23 == 0)
          ) || (FUN_041c332c(&stack0x00000350,lVar23,*piVar20,
                             *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
               in_stack_00000388 == 0)) break;
      lVar23 = *(long *)(in_stack_00000388 + 0x10);
      if (lVar23 != 0) {
        lVar24 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_06dc4872 == '\0') {
          FUN_02d965b8(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                      );
          DAT_06dc4872 = '\x01';
        }
        puVar7 = Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
        if (lVar24 == 0) break;
        iVar1 = piVar20[10];
        uVar33 = piVar20[0xb];
        uVar17 = (ulong)uVar33;
        lVar25 = *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
        ;
        lVar31 = *(long *)(lVar25 + 0x38);
        if (lVar31 == 0) {
          FUN_02dcfd74(lVar25);
          lVar31 = *(long *)(lVar25 + 0x38);
        }
        lVar24 = FUN_036ee4d8(*(undefined8 *)(lVar24 + 0x30),*(undefined8 *)(lVar31 + 0x10));
        if ((int)uVar33 < 0) {
          FUN_05508bc8(0);
        }
        else if (uVar33 != 0) {
          puVar13 = (undefined4 *)(lVar24 + (long)iVar1 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar24 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar24 == 0))
            goto LAB_05fdad7c;
            pcVar21 = (char *)FUN_05fdfe80(lVar24,*(undefined8 *)(puVar13 + -2),*puVar13,0);
            if (*pcVar21 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              iVar1 = *(int *)(pcVar21 + 4);
              plVar15 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02dcfd18(*(long *)(*(long *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                      + 0x20));
              }
              memcpy(&stack0x000000f0,(void *)(*plVar15 + (long)iVar1 * 0x80),0x80);
              if (in_stack_00000110 < 0) {
                FUN_05fde34c(&stack0x00000350,3,*piVar20,0);
                uVar12 = 0;
              }
              else {
                uVar12 = FUN_05fdf5d4(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                      *piVar20,0);
              }
              uVar19 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),piVar20,
                                    &stack0x000000f0,uVar12);
              in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar7,uVar19,0);
              uVar10 = in_stack_000000f0;
              lVar24 = *(long *)(lVar23 + 0x20);
              in_stack_000000e8 = 0;
              LeanTween__value(&stack0x000000e0,in_stack_000000e0);
              in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar12 == 0xc);
              if (lVar24 == 0) goto LAB_05fdad7c;
              FUN_04dec6b0(lVar24,uVar10,in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)
                            Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
            }
            uVar17 = uVar17 - 1;
            puVar13 = puVar13 + 3;
          } while (uVar17 != 0);
        }
        if (-1 < piVar20[8]) {
          lVar24 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_06dc4873 == '\0') {
            FUN_02d965b8(
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                        );
            DAT_06dc4873 = '\x01';
          }
          if (lVar24 == 0) break;
          iVar1 = piVar20[0xc];
          uVar33 = piVar20[0xd];
          lVar25 = *(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
          ;
          lVar31 = *(long *)(lVar25 + 0x38);
          if (lVar31 == 0) {
            FUN_02dcfd74(lVar25);
            lVar31 = *(long *)(lVar25 + 0x38);
          }
          lVar24 = FUN_036ee4ec(*(undefined8 *)(lVar24 + 0x38),*(undefined8 *)(lVar31 + 0x10));
          if ((int)uVar33 < 0) {
            FUN_05508bc8(0);
          }
          else if (uVar33 != 0) {
            uVar17 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              puVar14 = (undefined8 *)(lVar24 + (long)iVar1 * 0xc + uVar17 * 0xc);
              in_stack_00000030 =
                   in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar14 + 1);
              lVar31 = FUN_05fdc35c(*(long *)(in_stack_00000048 + 0x30),*puVar14,in_stack_00000030,0
                                   );
              if (*(int *)(lVar31 + 8) != *piVar20) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar31 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar31 == 0))
                goto LAB_05fdad7c;
                lVar31 = FUN_05fdfe80(lVar31,*puVar14,*(undefined4 *)(puVar14 + 1),0);
                iVar4 = *(int *)(lVar31 + 8);
                if (0 < iVar4) {
                  iVar29 = 0;
                  do {
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar31 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar31 == 0)
                       ) goto LAB_05fdad7c;
                    uVar12 = *puVar14;
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
                    iVar2 = *(int *)(lVar31 + 0x28);
                    iVar3 = *(int *)(lVar31 + 0x2c);
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
                    if (*(uint *)(lVar25 + 0x18) <= *(uint *)(puVar14 + 1)) goto LAB_05fdada0;
                    piVar22 = (int *)FUN_042c8e28(lVar25 + (long)(int)*(uint *)(puVar14 + 1) * 8 +
                                                  0x20,iVar29 + ((int)((ulong)uVar12 >> 0x20) +
                                                                iVar2 * ((uint)uVar12 & 0xffff)) *
                                                                iVar3,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                                 );
                    lVar31 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar31 == 0) goto LAB_05fdad7c;
                    iVar2 = *piVar22;
                    plVar15 = *(long **)(lVar31 + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                    + 0x20) + 0x135) & 1) == 0) {
                      FUN_02dcfd18(*(long *)(*(long *)
                                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                            + 0x20));
                      lVar31 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar15 + (long)iVar2 * 0x80),0x80);
                    uVar10 = in_stack_00000060;
                    uVar12 = FUN_05fdf5d4(lVar31,piVar20[8],in_stack_00000060,0);
                    uVar19 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar20,uVar12);
                    in_stack_000000e0 =
                         FUN_05362cb4(*(undefined8 *)
                                       Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__
                                      ,uVar19,0);
                    lVar31 = *(long *)(lVar23 + 0x20);
                    in_stack_000000e8 = 0;
                    LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar12 == 0xc);
                    if (lVar31 == 0) goto LAB_05fdad7c;
                    FUN_04dec6b0(lVar31,uVar10,in_stack_000000e0,in_stack_000000e8,
                                 *(undefined8 *)
                                  Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
                    iVar29 = iVar29 + 1;
                  } while (iVar4 != iVar29);
                }
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 != uVar33);
          }
        }
      }
      lVar23 = *(long *)(in_stack_00000048 + 0x30);
      iVar30 = iVar30 + 1;
    } while (lVar23 != 0);
  }
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


