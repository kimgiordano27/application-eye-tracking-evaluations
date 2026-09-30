/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_account_edit_message_t_displayname_get
ENTRY_POINT: 05fd9b04
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_account_edit_message_t_displayname_get
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined1 param_4 [16]
               ,long param_5)

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
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  int *piVar19;
  char *pcVar20;
  int *piVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined **in_x9;
  long *plVar25;
  long lVar26;
  long lVar27;
  int in_w10;
  int iVar28;
  long *unaff_x19;
  long lVar29;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  int unaff_w24;
  int iVar30;
  ulong unaff_x25;
  long unaff_x26;
  int unaff_w28;
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
  uint uVar33;
  undefined8 in_stack_00000300;
  undefined1 *in_stack_00000308;
  ulong in_stack_00000310;
  ulong in_stack_00000318;
  undefined8 in_stack_00000350;
  undefined1 *in_stack_00000358;
  ulong in_stack_00000360;
  ulong in_stack_00000368;
  undefined8 in_stack_00000370;
  ulong in_stack_00000378;
  long in_stack_00000380;
  ulong in_stack_00000388;
  
  uVar17 = param_4._8_8_;
  lVar22 = param_4._0_8_;
  uVar16 = param_2._8_8_;
  uVar14 = param_2._0_8_;
  while( true ) {
    plVar25 = (long *)in_x9[0x9e];
    *(int *)(param_5 + 0x1c) = in_w10;
    if (param_1 == 0) break;
    uVar33 = *(uint *)(param_5 + 0x18);
    if (uVar33 < *(uint *)(param_1 + 0x18)) {
      param_1 = param_1 + (long)(int)uVar33 * 0x40;
      *(uint *)(param_5 + 0x18) = uVar33 + 1;
      *(undefined1 **)(param_1 + 0x28) = in_stack_00000308;
      *(undefined8 *)(param_1 + 0x20) = in_stack_00000300;
      *(ulong *)(param_1 + 0x38) = in_stack_00000318;
      *(ulong *)(param_1 + 0x30) = in_stack_00000310;
      *(ulong *)(param_1 + 0x48) = uVar16;
      *(undefined8 *)(param_1 + 0x40) = uVar14;
      *(ulong *)(param_1 + 0x58) = uVar17;
      *(long *)(param_1 + 0x50) = lVar22;
      LeanTween__value(param_1 + 0x20,0);
      in_stack_00000300 = in_stack_00000350;
    }
    else {
      FUN_041c6360(param_5,&stack0x00000350,
                   *(undefined8 *)(*(long *)(*(long *)(*plVar25 + 0x20) + 0xc0) + 0x70));
      in_stack_00000358 = in_stack_00000308;
      in_stack_00000360 = in_stack_00000310;
      in_stack_00000368 = in_stack_00000318;
      in_stack_00000370 = uVar14;
      in_stack_00000378 = uVar16;
      in_stack_00000380 = lVar22;
      in_stack_00000388 = uVar17;
    }
    unaff_w28 = unaff_w28 + 1;
    if (unaff_w24 == unaff_w28) {
      do {
        unaff_x25 = unaff_x25 + 1;
        if (unaff_x25 == 3) {
          lVar22 = *(long *)(unaff_x29 + 0x30);
          if (lVar22 == 0) goto LAB_05fdad7c;
          iVar30 = 0;
          goto LAB_05fd9c04;
        }
        if (((*(long *)(unaff_x29 + 0x30) == 0) ||
            (lVar22 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x10), lVar22 == 0)) ||
           (lVar22 = *(long *)(lVar22 + 0x10), lVar22 == 0)) goto LAB_05fdad7c;
        if (*(uint *)(lVar22 + 0x18) <= unaff_x25) goto LAB_05fdada0;
        lVar22 = *(long *)(lVar22 + unaff_x25 * 8 + 0x20);
        if ((*(ushort *)
              (*(long *)(*(long *)
                          Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__ +
                        0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        unaff_w24 = *(int *)(lVar22 + 8);
      } while (unaff_w24 < 1);
      unaff_w28 = 0;
    }
    if (((*(long *)(unaff_x29 + 0x30) == 0) ||
        (lVar22 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x10), lVar22 == 0)) ||
       (lVar22 = *(long *)(lVar22 + 0x10), lVar22 == 0)) break;
    if (*(uint *)(lVar22 + 0x18) <= unaff_x25) goto LAB_05fdada0;
    pbVar11 = (byte *)FUN_042c950c(lVar22 + unaff_x25 * 8 + 0x20,unaff_w28,
                                   *(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputActionMap>__
                                  );
    if (unaff_w28 == 0) {
      in_stack_00000300 = *(undefined8 *)PTR_DAT_06a1c7b0;
      LeanTween__value(&stack0x00000260);
      uVar33 = 1;
    }
    else {
      if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
          (lVar22 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar22 == 0)) ||
         (lVar22 = *(long *)(lVar22 + 0x30), lVar22 == 0)) break;
      if (*(uint *)(lVar22 + 0x18) <= unaff_x25) {
LAB_05fdada0:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar22 = *(long *)(lVar22 + unaff_x25 * 8 + 0x20);
      if (lVar22 == 0) break;
      puVar13 = (undefined8 *)
                FUN_0504d8a8(lVar22,unaff_w28,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                            );
      uVar14 = *puVar13;
      uVar16 = FUN_0536c9cc(uVar14,0);
      in_stack_00000300 =
           *(undefined8 *)
            Method_Newtonsoft_Json_Utilities_AotHelper_EnsureType<JsonObjectConverter>__;
      if ((uVar16 & 1) == 0) {
        in_stack_00000300 = uVar14;
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
    in_stack_00000308 = (undefined1 *)CONCAT44(*(undefined4 *)(pbVar11 + 0x10),uVar33);
    in_stack_00000310 = (ulong)*(uint *)(pbVar11 + 8);
    lVar22 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_Newtonsoft_Json_Utilities_AotHelper_EnsureType<JsonObjectConverter>__
                               );
    FUN_0552aca4(lVar22,0);
    LeanTween__value(unaff_x26 + 0x30,lVar22);
    if (((((lVar22 == 0) ||
          (*(undefined4 *)(lVar22 + 0x10) = *(undefined4 *)(pbVar11 + 0x18), lVar22 == 0)) ||
         (*(undefined4 *)(lVar22 + 0x14) = *(undefined4 *)(pbVar11 + 0x1c), lVar22 == 0)) ||
        ((*(undefined4 *)(lVar22 + 0x18) = *(undefined4 *)(pbVar11 + 0x20), lVar22 == 0 ||
         (*(undefined4 *)(lVar22 + 0x20) = *(undefined4 *)(pbVar11 + 0x24), lVar22 == 0)))) ||
       ((*(undefined4 *)(lVar22 + 0x24) = 0, lVar22 == 0 ||
        (*(byte *)(lVar22 + 0x1c) = pbVar11[0x2e], lVar22 == 0)))) break;
    *(byte *)(lVar22 + 0x28) = pbVar11[0x2c];
    puVar8 = PTR_DAT_069fc3f8;
    uVar16 = (ulong)pbVar11[0x14];
    in_stack_00000318 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    puVar7 = PTR_DAT_069fc3f0;
    FUN_03fb358c(in_stack_00000318,*(undefined8 *)PTR_DAT_069fc3f0);
    LeanTween__value(unaff_x26 + 0x18,in_stack_00000318);
    uVar14 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
    FUN_03fb358c(uVar14,*(undefined8 *)puVar7);
    LeanTween__value(unaff_x26 + 0x20,uVar14);
    FUN_04a4c858(&stack0x00000350,unaff_x25 & 0xffffffff,unaff_w28,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
    if (in_stack_00000020 == 0) break;
    uVar17 = FUN_04bd2bf4(in_stack_00000020,0,
                          *(undefined8 *)Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__
                         );
    if ((uVar17 & 1) != 0) {
      FUN_04a4c858(&stack0x00000350,unaff_x25 & 0xffffffff,unaff_w28,
                   *(undefined8 *)
                    Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
      in_stack_00000318 =
           FUN_04bd2960(in_stack_00000020,0,
                        *(undefined8 *)
                         Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__);
      LeanTween__value(unaff_x26 + 0x18,in_stack_00000318);
    }
    FUN_04a4c858(&stack0x00000350,unaff_x25 & 0xffffffff,unaff_w28,
                 *(undefined8 *)
                  Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
    if (in_stack_00000030 == 0) break;
    uVar17 = FUN_04bd2bf4(in_stack_00000030,0,
                          *(undefined8 *)Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__
                         );
    if ((uVar17 & 1) != 0) {
      FUN_04a4c858(&stack0x00000350,unaff_x25 & 0xffffffff,unaff_w28,
                   *(undefined8 *)
                    Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
      uVar14 = FUN_04bd2960(in_stack_00000030,0,
                            *(undefined8 *)
                             Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__);
      LeanTween__value(unaff_x26 + 0x20,uVar14);
    }
    in_stack_00000350 = 0;
    if ((*in_stack_00000028 == 0) || (lVar29 = *(long *)(*in_stack_00000028 + 0x18), lVar29 == 0))
    break;
    if (*(uint *)(lVar29 + 0x18) <= unaff_x25) goto LAB_05fdada0;
    param_5 = *(long *)(lVar29 + unaff_x25 * 8 + 0x20);
    if (param_5 == 0) break;
    param_1 = *(long *)(param_5 + 0x10);
    in_w10 = *(int *)(param_5 + 0x1c) + 1;
    in_x9 = &
            Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnGestureStarted<TapGesture>__
    ;
    uVar17 = 0;
    unaff_x29 = in_stack_00000048;
  }
  goto LAB_05fdad7c;
LAB_05fd9c04:
  lVar22 = *(long *)(lVar22 + 0x18);
  if ((*(ushort *)(*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) &
      1) == 0) {
    FUN_02dcfd18();
  }
  if (*(int *)(lVar22 + 8) <= iVar30) {
    lVar22 = *(long *)(unaff_x29 + 0x30);
    if (lVar22 != 0) {
      LeanTween__value(&stack0x00000350);
      uVar14 = 0xffffffff;
      in_stack_000001b0 = lVar22;
      in_stack_000001b8 = uVar14;
      uVar16 = FUN_05fd2394(&stack0x000001b0);
      puVar8 = Method_UnityEngine_AssetBundle_LoadAsset__;
      puVar7 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputEventTrace_DeviceInfo>__
      ;
      if ((uVar16 & 1) != 0) goto LAB_05fda528;
      goto LAB_05fda840;
    }
    goto LAB_05fdad7c;
  }
  if (*(long *)(unaff_x29 + 0x18) == 0) goto LAB_05fdad7c;
  lVar22 = FUN_0400ff1c(*(long *)(unaff_x29 + 0x18),iVar30,
                        *(undefined8 *)Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__);
  if (*(long *)(unaff_x29 + 0x30) == 0) goto LAB_05fdad7c;
  in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,iVar30);
  puVar12 = (undefined4 *)
            FUN_042c6444(*(long *)(unaff_x29 + 0x30) + 0x18,iVar30,
                         *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
  lVar29 = *(long *)(unaff_x29 + 0x30);
  if (lVar29 == 0) goto LAB_05fdad7c;
  uVar10 = *puVar12;
  if (DAT_06dc487d == '\0') {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__);
    DAT_06dc487d = '\x01';
  }
  lVar29 = *(long *)(lVar29 + 0x28);
  if (lVar29 == 0) goto LAB_05fdad7c;
  puVar13 = (undefined8 *)
            FUN_0504d8a8(lVar29,uVar10,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                        );
  uVar14 = FUN_05fd8904(*puVar13);
  LeanTween__value(&stack0x000001f0,uVar14);
  puVar7 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
  ;
  if (lVar22 == 0) goto LAB_05fdad7c;
  plVar25 = (long *)FUN_02d966a4(*(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
                                 ,3);
  LeanTween__value(&stack0x00000200,plVar25);
  plVar15 = (long *)FUN_02d966a4(*(undefined8 *)puVar7,3);
  LeanTween__value(&stack0x00000208,plVar15);
  lVar29 = *(long *)Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
  if (*(int *)(lVar29 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar29 = *(long *)Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
  }
  if (**(long **)(lVar29 + 0xb8) == 0) goto LAB_05fdad7c;
  FUN_04e95158(**(long **)(lVar29 + 0xb8),lVar22,&stack0x00000230,
               *(undefined8 *)
                Method_UnityEngine_Animator_GetBehaviour<OvrAvatarDefaultStateListener>__);
  lVar29 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_SetURN__);
  FUN_05fbe1f4();
  LeanTween__value(&stack0x00000228,lVar29);
  if ((((lVar29 == 0) || (*(undefined4 *)(lVar29 + 0x28) = puVar12[0x19], lVar29 == 0)) ||
      (*(undefined4 *)(lVar29 + 0x2c) = puVar12[0x1a], lVar29 == 0)) ||
     ((*(undefined4 *)(lVar29 + 0x30) = puVar12[0x1b], lVar29 == 0 ||
      (*(undefined4 *)(lVar29 + 0x34) = puVar12[0x1c], lVar29 == 0)))) goto LAB_05fdad7c;
  *(undefined1 *)(lVar29 + 0x38) = *(undefined1 *)((long)puVar12 + 0x7d);
  if (*(long *)(lVar22 + 200) == 0) goto LAB_05fdad7c;
  FUN_03f20aec(&stack0x00000350,*(long *)(lVar22 + 200),
               *(undefined8 *)Method_UnityEngine_AndroidJavaProxy_hashCode__);
  in_stack_000001c0 = in_stack_00000300;
  in_stack_000001c8 = in_stack_00000358;
  _uStack00000000000001d0 = in_stack_00000360;
  in_stack_000001d8 = in_stack_00000368;
  in_stack_000001e0 = in_stack_00000370;
  while (uVar16 = FUN_05130778(&stack0x000001c0,
                               *(undefined8 *)
                                Method_UnityEngine_AndroidJavaObjectUnityOwned_Dispose__),
        (uVar16 & 1) != 0) {
    if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar5 = uStack00000000000001d0;
    uVar16 = _uStack00000000000001d0 & 0xffff;
    lVar31 = *(long *)(lVar29 + 0x20);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (lVar31 == 0) {
LAB_05fda484:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar23 = *(long *)(lVar31 + 0x10);
    lVar26 = *unaff_x19;
    *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
    if (lVar23 == 0) goto LAB_05fda484;
    uVar33 = *(uint *)(lVar31 + 0x18);
    if (uVar33 < *(uint *)(lVar23 + 0x18)) {
      *(uint *)(lVar31 + 0x18) = uVar33 + 1;
      *(uint *)(lVar23 + (long)(int)uVar33 * 4 + 0x20) = (uint)uVar5;
    }
    else {
      FUN_03fb3e1c(lVar31,uVar16,*(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  FUN_05130774(&stack0x000001c0,*(undefined8 *)Method_UnityEngine_AndroidJavaObject__CallStatic__);
  uVar16 = 0;
  do {
    lVar31 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar31,*(undefined8 *)PTR_DAT_069fc3f0);
    if (plVar25 == (long *)0x0) goto LAB_05fdad7c;
    if ((lVar31 != 0) &&
       (lVar23 = thunk_FUN_02dd3048(lVar31,*(undefined8 *)(*plVar25 + 0x40)), lVar23 == 0)) {
LAB_05fdada4:
      uVar14 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar14,0);
    }
    if (*(uint *)(plVar25 + 3) <= uVar16) goto LAB_05fdada0;
    plVar25[uVar16 + 4] = lVar31;
    LeanTween__value(plVar25 + uVar16 + 4,lVar31);
    lVar31 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar31,*(undefined8 *)PTR_DAT_069fc3f0);
    if (plVar15 == (long *)0x0) goto LAB_05fdad7c;
    if ((lVar31 != 0) &&
       (lVar23 = thunk_FUN_02dd3048(lVar31,*(undefined8 *)(*plVar15 + 0x40)), lVar23 == 0))
    goto LAB_05fdada4;
    if (*(uint *)(plVar15 + 3) <= uVar16) goto LAB_05fdada0;
    plVar15[uVar16 + 4] = lVar31;
    LeanTween__value(plVar15 + uVar16 + 4,lVar31);
    lVar31 = *(long *)(lVar22 + 0xa8);
    if (lVar31 == 0) goto LAB_05fdad7c;
    if (*(uint *)(lVar31 + 0x18) <= uVar16) goto LAB_05fdada0;
    lVar31 = *(long *)(lVar31 + uVar16 * 8 + 0x20);
    if (lVar31 == 0) goto LAB_05fdad7c;
    FUN_04042130(&stack0x00000350,lVar31,
                 *(undefined8 *)
                  Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
LAB_05fda010:
    uVar17 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22);
    if ((uVar17 & 1) != 0) {
      if (*(long *)(lVar22 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar17 = FUN_040419bc(*(long *)(lVar22 + 0xd8),in_stack_00000360,
                            in_stack_00000368 & 0xffffffff,*unaff_x23);
      if ((uVar17 & 1) == 0) {
        if (plVar25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(plVar25 + 3) <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar31 = plVar25[uVar16 + 4];
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (lVar31 != 0) {
          lVar23 = *(long *)(lVar31 + 0x10);
          lVar26 = *unaff_x19;
          *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
          if (lVar23 != 0) {
            uVar6 = *(uint *)(lVar31 + 0x18);
            uVar33 = (uint)in_stack_00000360 & 0xffff;
            if (uVar6 < *(uint *)(lVar23 + 0x18)) {
              *(uint *)(lVar31 + 0x18) = uVar6 + 1;
              *(uint *)(lVar23 + (long)(int)uVar6 * 4 + 0x20) = uVar33;
            }
            else {
              FUN_03fb3e1c(lVar31,uVar33,
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
    lVar31 = *(long *)(lVar22 + 0xb0);
    if (lVar31 == 0) goto LAB_05fdad7c;
    if (*(uint *)(lVar31 + 0x18) <= uVar16) goto LAB_05fdada0;
    lVar31 = *(long *)(lVar31 + uVar16 * 8 + 0x20);
    if (lVar31 == 0) goto LAB_05fdad7c;
    FUN_04042130(&stack0x00000350,lVar31,
                 *(undefined8 *)
                  Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
    in_stack_00000300 = 0;
    while (uVar17 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22), (uVar17 & 1) != 0) {
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(plVar15 + 3) <= uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar31 = plVar15[uVar16 + 4];
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar31 == 0) {
LAB_05fda1e0:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar23 = *(long *)(lVar31 + 0x10);
      lVar26 = *unaff_x19;
      *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
      if (lVar23 == 0) goto LAB_05fda1e0;
      uVar6 = *(uint *)(lVar31 + 0x18);
      uVar33 = (uint)in_stack_00000360 & 0xffff;
      if (uVar6 < *(uint *)(lVar23 + 0x18)) {
        *(uint *)(lVar31 + 0x18) = uVar6 + 1;
        *(uint *)(lVar23 + (long)(int)uVar6 * 4 + 0x20) = uVar33;
      }
      else {
        FUN_03fb3e1c(lVar31,uVar33,
                     *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_0515e9cc(&stack0x000002c0,
                 *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
    uVar16 = uVar16 + 1;
  } while (uVar16 != 3);
  lVar22 = *(long *)(in_stack_00000048 + 0x30);
  if (DAT_06dc487e == '\0') {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__);
    DAT_06dc487e = '\x01';
  }
  if (lVar22 == 0) goto LAB_05fdad7c;
  iVar1 = puVar12[0x10];
  uVar33 = puVar12[0x11];
  uVar16 = (ulong)uVar33;
  lVar23 = *(long *)
            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
  lVar31 = *(long *)(lVar23 + 0x38);
  if (lVar31 == 0) {
    FUN_02dcfd74(lVar23);
    lVar31 = *(long *)(lVar23 + 0x38);
  }
  lVar22 = FUN_036ee4c4(*(undefined8 *)(lVar22 + 0x40),*(undefined8 *)(lVar31 + 0x10));
  if ((int)uVar33 < 0) {
    FUN_05508bc8(0);
  }
  else if (uVar33 != 0) {
    puVar32 = (ushort *)(lVar22 + (long)iVar1 * 0x18);
    do {
      if (lVar29 == 0) goto LAB_05fdad7c;
      uVar5 = *puVar32;
      lVar22 = *(long *)(lVar29 + 0x18);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar22 == 0) goto LAB_05fdad7c;
      lVar31 = *(long *)(lVar22 + 0x10);
      lVar23 = *unaff_x19;
      *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
      if (lVar31 == 0) goto LAB_05fdad7c;
      uVar33 = *(uint *)(lVar22 + 0x18);
      if (uVar33 < *(uint *)(lVar31 + 0x18)) {
        *(uint *)(lVar22 + 0x18) = uVar33 + 1;
        *(uint *)(lVar31 + (long)(int)uVar33 * 4 + 0x20) = (uint)uVar5;
      }
      else {
        FUN_03fb3e1c(lVar22,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar16 = uVar16 - 1;
      puVar32 = puVar32 + 0xc;
    } while (uVar16 != 0);
  }
  if ((*in_stack_00000028 == 0) || (lVar22 = *(long *)(*in_stack_00000028 + 0x10), lVar22 == 0))
  goto LAB_05fdad7c;
  memcpy(&stack0x00000300,&stack0x000001f0,0x48);
  lVar29 = *(long *)(lVar22 + 0x10);
  lVar31 = *(long *)Method_UnityEngine_Animator_GetBoneTransform__;
  *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
  if (lVar29 == 0) goto LAB_05fdad7c;
  uVar33 = *(uint *)(lVar22 + 0x18);
  if (uVar33 < *(uint *)(lVar29 + 0x18)) {
    lVar29 = lVar29 + (long)(int)uVar33 * 0x48;
    *(uint *)(lVar22 + 0x18) = uVar33 + 1;
    memcpy((void *)(lVar29 + 0x20),&stack0x00000300,0x48);
    LeanTween__value(lVar29 + 0x20,0);
  }
  else {
    uVar14 = *(undefined8 *)(*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70);
    memcpy(&stack0x00000350,&stack0x00000300,0x48);
    FUN_041c36bc(lVar22,&stack0x00000350,uVar14);
  }
  lVar22 = *(long *)(in_stack_00000048 + 0x30);
  iVar30 = iVar30 + 1;
  unaff_x29 = in_stack_00000048;
  in_stack_00000358 = &stack0x000002c0;
  if (lVar22 == 0) goto LAB_05fdad7c;
  goto LAB_05fd9c04;
  while( true ) {
    if (0 < *(int *)(lVar29 + 0x2a0)) {
      lVar23 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__
                                 );
      FUN_0552aca4(lVar23,0);
      uVar18 = FUN_05fd7f88(*(undefined8 *)(in_stack_00000048 + 0x30),lVar29);
      if (lVar23 == 0) goto LAB_05fdad7c;
      *(undefined8 *)(lVar23 + 0x10) = uVar18;
      LeanTween__value();
      lVar26 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_CompileXPath__);
      FUN_0400f984(lVar26,*(undefined8 *)Method_AssetInputExample_DoChangeThing__);
      plVar25 = (long *)(lVar23 + 0x18);
      *plVar25 = lVar26;
      LeanTween__value(plVar25,lVar26);
      iVar30 = 0;
      while( true ) {
        iVar1 = *(int *)(lVar29 + 0x294);
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (iVar1 <= iVar30) break;
        lVar26 = *plVar25;
        uVar18 = FUN_05fd7aa8(*(undefined8 *)(in_stack_00000048 + 0x30),lVar29,iVar30);
        if (lVar26 == 0) goto LAB_05fdad7c;
        lVar24 = *(long *)(lVar26 + 0x10);
        lVar27 = *(long *)puVar8;
        *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
        if (lVar24 == 0) goto LAB_05fdad7c;
        uVar33 = *(uint *)(lVar26 + 0x18);
        if (uVar33 < *(uint *)(lVar24 + 0x18)) {
          *(uint *)(lVar26 + 0x18) = uVar33 + 1;
          *(undefined8 *)(lVar24 + (long)(int)uVar33 * 8 + 0x20) = uVar18;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar26,uVar18,
                       *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
        }
        iVar30 = iVar30 + 1;
      }
      uVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_UnityEngine_Assertions_Assert_IsNull<UIRAtlasAllocator_AreaNode>__
                                 );
      FUN_04de9e6c(uVar18,*(undefined8 *)
                           Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElement>__);
      *(undefined8 *)(lVar23 + 0x20) = uVar18;
      LeanTween__value((undefined8 *)(lVar23 + 0x20),uVar18);
      *(long *)(lVar23 + 0x28) = lVar31;
      LeanTween__value((long *)(lVar23 + 0x28),lVar31);
      puVar9 = Method_AssetInputExample_DoPressedThing__;
      if (lVar31 == 0) goto LAB_05fdad7c;
      if (0 < *(int *)(lVar31 + 0x18)) {
        iVar30 = 0;
        do {
          uVar10 = FUN_03fb3b24(lVar31,iVar30,*(undefined8 *)PTR_DAT_069fe588);
          if (*in_stack_00000028 == 0) goto LAB_05fdad7c;
          lVar29 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar29 == 0) ||
             (FUN_041c332c(&stack0x00000350,lVar29,uVar10,*(undefined8 *)puVar9),
             in_stack_00000170 = lVar22, in_stack_00000178 = uVar14,
             in_stack_00000180 = in_stack_00000360, in_stack_00000188 = in_stack_00000368,
             in_stack_00000190 = in_stack_00000370, in_stack_00000198 = in_stack_00000378,
             in_stack_000001a0 = in_stack_00000380, in_stack_00000388 == 0)) goto LAB_05fdad7c;
          *(long *)(in_stack_00000388 + 0x10) = lVar23;
          LeanTween__value((long *)(in_stack_00000388 + 0x10),lVar23);
          in_stack_00000380 = in_stack_000001a0;
          in_stack_00000378 = in_stack_00000198;
          in_stack_00000370 = in_stack_00000190;
          in_stack_00000368 = in_stack_00000188;
          in_stack_00000360 = in_stack_00000180;
          uVar14 = in_stack_00000178;
          lVar22 = in_stack_00000170;
          if ((*in_stack_00000028 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000028 + 0x10), lVar29 == 0)) goto LAB_05fdad7c;
          FUN_041c3390(lVar29,uVar10,&stack0x00000350,
                       *(undefined8 *)Method_AssetInputExample_DoReleasedThing__);
          iVar30 = iVar30 + 1;
          in_stack_00000030 = in_stack_00000388;
        } while (iVar30 < *(int *)(lVar31 + 0x18));
      }
    }
    uVar16 = FUN_05fd2394(&stack0x000001b0);
    if ((uVar16 & 1) == 0) break;
LAB_05fda528:
    lVar29 = FUN_05fd233c(&stack0x000001b0);
    lVar31 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar31,*(undefined8 *)PTR_DAT_069fc3f0);
    iVar30 = *(int *)(lVar29 + 0x298);
    if (iVar30 < *(int *)(lVar29 + 0x29c) + 1) {
      if (lVar31 == 0) goto LAB_05fdad7c;
      lVar23 = *unaff_x19;
      do {
        lVar26 = *(long *)(lVar31 + 0x10);
        *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
        if (lVar26 == 0) goto LAB_05fdad7c;
        uVar33 = *(uint *)(lVar31 + 0x18);
        if (uVar33 < *(uint *)(lVar26 + 0x18)) {
          *(uint *)(lVar31 + 0x18) = uVar33 + 1;
          *(int *)(lVar26 + (long)(int)uVar33 * 4 + 0x20) = iVar30;
        }
        else {
          FUN_03fb3e1c(lVar31,iVar30,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
          lVar23 = *unaff_x19;
        }
        iVar30 = iVar30 + 1;
      } while (iVar30 < *(int *)(lVar29 + 0x29c) + 1);
    }
  }
LAB_05fda840:
  lVar22 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar22 != 0) {
    iVar30 = 0;
    do {
      lVar22 = *(long *)(lVar22 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) & 1) ==
          0) {
        FUN_02dcfd18();
      }
      if (*(int *)(lVar22 + 8) <= iVar30) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar19 = (int *)FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar30,
                                    *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
      if (((*in_stack_00000028 == 0) || (lVar22 = *(long *)(*in_stack_00000028 + 0x10), lVar22 == 0)
          ) || (FUN_041c332c(&stack0x00000350,lVar22,*piVar19,
                             *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
               in_stack_00000388 == 0)) break;
      lVar22 = *(long *)(in_stack_00000388 + 0x10);
      if (lVar22 != 0) {
        lVar29 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_06dc4872 == '\0') {
          FUN_02d965b8(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                      );
          DAT_06dc4872 = '\x01';
        }
        puVar7 = Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
        if (lVar29 == 0) break;
        iVar1 = piVar19[10];
        uVar33 = piVar19[0xb];
        uVar16 = (ulong)uVar33;
        lVar23 = *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
        ;
        lVar31 = *(long *)(lVar23 + 0x38);
        if (lVar31 == 0) {
          FUN_02dcfd74(lVar23);
          lVar31 = *(long *)(lVar23 + 0x38);
        }
        lVar29 = FUN_036ee4d8(*(undefined8 *)(lVar29 + 0x30),*(undefined8 *)(lVar31 + 0x10));
        if ((int)uVar33 < 0) {
          FUN_05508bc8(0);
        }
        else if (uVar33 != 0) {
          puVar12 = (undefined4 *)(lVar29 + (long)iVar1 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar29 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar29 == 0))
            goto LAB_05fdad7c;
            pcVar20 = (char *)FUN_05fdfe80(lVar29,*(undefined8 *)(puVar12 + -2),*puVar12,0);
            if (*pcVar20 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              iVar1 = *(int *)(pcVar20 + 4);
              plVar25 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02dcfd18(*(long *)(*(long *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                      + 0x20));
              }
              memcpy(&stack0x000000f0,(void *)(*plVar25 + (long)iVar1 * 0x80),0x80);
              if (in_stack_00000110 < 0) {
                FUN_05fde34c(&stack0x00000350,3,*piVar19,0);
                uVar14 = 0;
              }
              else {
                uVar14 = FUN_05fdf5d4(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                      *piVar19,0);
              }
              uVar18 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),piVar19,
                                    &stack0x000000f0,uVar14);
              in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar7,uVar18,0);
              uVar10 = in_stack_000000f0;
              lVar29 = *(long *)(lVar22 + 0x20);
              in_stack_000000e8 = 0;
              LeanTween__value(&stack0x000000e0,in_stack_000000e0);
              in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar14 == 0xc);
              if (lVar29 == 0) goto LAB_05fdad7c;
              FUN_04dec6b0(lVar29,uVar10,in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)
                            Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
            }
            uVar16 = uVar16 - 1;
            puVar12 = puVar12 + 3;
          } while (uVar16 != 0);
        }
        if (-1 < piVar19[8]) {
          lVar29 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_06dc4873 == '\0') {
            FUN_02d965b8(
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                        );
            DAT_06dc4873 = '\x01';
          }
          if (lVar29 == 0) break;
          iVar1 = piVar19[0xc];
          uVar33 = piVar19[0xd];
          lVar23 = *(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
          ;
          lVar31 = *(long *)(lVar23 + 0x38);
          if (lVar31 == 0) {
            FUN_02dcfd74(lVar23);
            lVar31 = *(long *)(lVar23 + 0x38);
          }
          lVar29 = FUN_036ee4ec(*(undefined8 *)(lVar29 + 0x38),*(undefined8 *)(lVar31 + 0x10));
          if ((int)uVar33 < 0) {
            FUN_05508bc8(0);
          }
          else if (uVar33 != 0) {
            uVar16 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              puVar13 = (undefined8 *)(lVar29 + (long)iVar1 * 0xc + uVar16 * 0xc);
              in_stack_00000030 =
                   in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar13 + 1);
              lVar31 = FUN_05fdc35c(*(long *)(in_stack_00000048 + 0x30),*puVar13,in_stack_00000030,0
                                   );
              if (*(int *)(lVar31 + 8) != *piVar19) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar31 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar31 == 0))
                goto LAB_05fdad7c;
                lVar31 = FUN_05fdfe80(lVar31,*puVar13,*(undefined4 *)(puVar13 + 1),0);
                iVar4 = *(int *)(lVar31 + 8);
                if (0 < iVar4) {
                  iVar28 = 0;
                  do {
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar31 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar31 == 0)
                       ) goto LAB_05fdad7c;
                    uVar14 = *puVar13;
                    if (DAT_06dc486d == '\0') {
                      FUN_02d965b8();
                      DAT_06dc486d = '\x01';
                    }
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar23 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar23 == 0)
                       ) goto LAB_05fdad7c;
                    lVar23 = *(long *)(lVar23 + 0x20);
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
                    if (lVar23 == 0) goto LAB_05fdad7c;
                    if (*(uint *)(lVar23 + 0x18) <= *(uint *)(puVar13 + 1)) goto LAB_05fdada0;
                    piVar21 = (int *)FUN_042c8e28(lVar23 + (long)(int)*(uint *)(puVar13 + 1) * 8 +
                                                  0x20,iVar28 + ((int)((ulong)uVar14 >> 0x20) +
                                                                iVar2 * ((uint)uVar14 & 0xffff)) *
                                                                iVar3,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                                 );
                    lVar31 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar31 == 0) goto LAB_05fdad7c;
                    iVar2 = *piVar21;
                    plVar25 = *(long **)(lVar31 + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                    + 0x20) + 0x135) & 1) == 0) {
                      FUN_02dcfd18(*(long *)(*(long *)
                                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                            + 0x20));
                      lVar31 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar25 + (long)iVar2 * 0x80),0x80);
                    uVar10 = in_stack_00000060;
                    uVar14 = FUN_05fdf5d4(lVar31,piVar19[8],in_stack_00000060,0);
                    uVar18 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar19,uVar14);
                    in_stack_000000e0 =
                         FUN_05362cb4(*(undefined8 *)
                                       Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__
                                      ,uVar18,0);
                    lVar31 = *(long *)(lVar22 + 0x20);
                    in_stack_000000e8 = 0;
                    LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar14 == 0xc);
                    if (lVar31 == 0) goto LAB_05fdad7c;
                    FUN_04dec6b0(lVar31,uVar10,in_stack_000000e0,in_stack_000000e8,
                                 *(undefined8 *)
                                  Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
                    iVar28 = iVar28 + 1;
                  } while (iVar4 != iVar28);
                }
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 != uVar33);
          }
        }
      }
      lVar22 = *(long *)(in_stack_00000048 + 0x30);
      iVar30 = iVar30 + 1;
    } while (lVar22 != 0);
  }
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


