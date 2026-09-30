/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_account_delete_message_t_delete_time_get
ENTRY_POINT: 05fd9740
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_account_delete_message_t_delete_time_get
               (void)

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
  undefined8 *puVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  char *pcVar21;
  int *piVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  int iVar30;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  int unaff_w24;
  ulong unaff_x25;
  long unaff_x26;
  undefined8 uVar31;
  int iVar32;
  ushort *puVar33;
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
  uint uVar34;
  undefined8 uVar35;
  undefined1 *in_stack_00000358;
  undefined1 *puVar36;
  ulong in_stack_00000360;
  ulong in_stack_00000368;
  undefined8 in_stack_00000370;
  ulong in_stack_00000378;
  ulong uVar37;
  long in_stack_00000380;
  ulong in_stack_00000388;
  
  do {
    iVar32 = 0;
    puVar36 = in_stack_00000358;
    uVar18 = in_stack_00000360;
    uVar19 = in_stack_00000368;
    uVar15 = in_stack_00000370;
    uVar37 = in_stack_00000378;
    lVar25 = in_stack_00000380;
    do {
      if (((*(long *)(unaff_x29 + 0x30) == 0) ||
          (lVar23 = *(long *)(*(long *)(unaff_x29 + 0x30) + 0x10), lVar23 == 0)) ||
         (lVar23 = *(long *)(lVar23 + 0x10), lVar23 == 0)) goto LAB_05fdad7c;
      if (*(uint *)(lVar23 + 0x18) <= unaff_x25) goto LAB_05fdada0;
      pbVar11 = (byte *)FUN_042c950c(lVar23 + unaff_x25 * 8 + 0x20,iVar32,
                                     *(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputActionMap>__
                                    );
      if (iVar32 == 0) {
        uVar35 = *(undefined8 *)PTR_DAT_06a1c7b0;
        LeanTween__value(&stack0x00000260);
        uVar34 = 1;
      }
      else {
                    /* try { // try from 05fd979c to 060d97a3 has its CatchHandler @ 05fd983c */
                    /* try { // try from 05fd97b0 to 060d97b7 has its CatchHandler @ 05fd9838 */
        if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
            (lVar23 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar23 == 0)) ||
           (lVar23 = *(long *)(lVar23 + 0x30), lVar23 == 0)) goto LAB_05fdad7c;
                    /* try { // try from 05fd97b8 to 060d9857 has its CatchHandler @ 05fd9688 */
        if (*(uint *)(lVar23 + 0x18) <= unaff_x25) goto LAB_05fdada0;
        lVar23 = *(long *)(lVar23 + unaff_x25 * 8 + 0x20);
        if (lVar23 == 0) goto LAB_05fdad7c;
        puVar12 = (undefined8 *)
                  FUN_0504d8a8(lVar23,iVar32,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                              );
        uVar31 = *puVar12;
        uVar13 = FUN_0536c9cc(uVar31,0);
        uVar35 = *(undefined8 *)
                  Method_Newtonsoft_Json_Utilities_AotHelper_EnsureType<JsonObjectConverter>__;
        if ((uVar13 & 1) == 0) {
          uVar35 = uVar31;
        }
        LeanTween__value(&stack0x00000260);
        uVar34 = (uint)*pbVar11;
        if (unaff_x25 == 0) {
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          FUN_05fc6c5c(&stack0x00000238,iVar32,0,0);
          if (*(long *)(in_stack_00000048 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_05fc1afc(*(long *)(in_stack_00000048 + 0x10),&stack0x00000238,&stack0x00000248);
        }
      }
      in_stack_00000358 = (undefined1 *)CONCAT44(*(undefined4 *)(pbVar11 + 0x10),uVar34);
      in_stack_00000360 = (ulong)*(uint *)(pbVar11 + 8);
      in_stack_00000380 =
           thunk_FUN_02dd3144(*(undefined8 *)
                               Method_Newtonsoft_Json_Utilities_AotHelper_EnsureType<JsonObjectConverter>__
                             );
      FUN_0552aca4(in_stack_00000380,0);
      LeanTween__value(unaff_x26 + 0x30,in_stack_00000380);
      if (((in_stack_00000380 == 0) ||
          (*(undefined4 *)(in_stack_00000380 + 0x10) = *(undefined4 *)(pbVar11 + 0x18),
          in_stack_00000380 == 0)) ||
         (((*(undefined4 *)(in_stack_00000380 + 0x14) = *(undefined4 *)(pbVar11 + 0x1c),
           in_stack_00000380 == 0 ||
           (((*(undefined4 *)(in_stack_00000380 + 0x18) = *(undefined4 *)(pbVar11 + 0x20),
             in_stack_00000380 == 0 ||
             (*(undefined4 *)(in_stack_00000380 + 0x20) = *(undefined4 *)(pbVar11 + 0x24),
             in_stack_00000380 == 0)) ||
            (*(undefined4 *)(in_stack_00000380 + 0x24) = 0, in_stack_00000380 == 0)))) ||
          (*(byte *)(in_stack_00000380 + 0x1c) = pbVar11[0x2e], in_stack_00000380 == 0))))
      goto LAB_05fdad7c;
      *(byte *)(in_stack_00000380 + 0x28) = pbVar11[0x2c];
      puVar8 = PTR_DAT_069fc3f8;
      in_stack_00000378 = (ulong)pbVar11[0x14];
      in_stack_00000368 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
      puVar7 = PTR_DAT_069fc3f0;
      FUN_03fb358c(in_stack_00000368,*(undefined8 *)PTR_DAT_069fc3f0);
      LeanTween__value(unaff_x26 + 0x18,in_stack_00000368);
      in_stack_00000370 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
      FUN_03fb358c(in_stack_00000370,*(undefined8 *)puVar7);
      LeanTween__value(unaff_x26 + 0x20,in_stack_00000370);
      FUN_04a4c858(&stack0x00000350,unaff_x25 & 0xffffffff,iVar32,
                   *(undefined8 *)
                    Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
      if (in_stack_00000020 == 0) goto LAB_05fdad7c;
      uVar13 = FUN_04bd2bf4(in_stack_00000020,0,
                            *(undefined8 *)
                             Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__);
      if ((uVar13 & 1) != 0) {
        FUN_04a4c858(&stack0x00000350,unaff_x25 & 0xffffffff,iVar32,
                     *(undefined8 *)
                      Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
        in_stack_00000368 =
             FUN_04bd2960(in_stack_00000020,0,
                          *(undefined8 *)
                           Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__);
        LeanTween__value(unaff_x26 + 0x18,in_stack_00000368);
      }
      FUN_04a4c858(&stack0x00000350,unaff_x25 & 0xffffffff,iVar32,
                   *(undefined8 *)
                    Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
      if (in_stack_00000030 == 0) goto LAB_05fdad7c;
      uVar13 = FUN_04bd2bf4(in_stack_00000030,0,
                            *(undefined8 *)
                             Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__);
      if ((uVar13 & 1) != 0) {
        FUN_04a4c858(&stack0x00000350,unaff_x25 & 0xffffffff,iVar32,
                     *(undefined8 *)
                      Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
        in_stack_00000370 =
             FUN_04bd2960(in_stack_00000030,0,
                          *(undefined8 *)
                           Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__);
        LeanTween__value(unaff_x26 + 0x20,in_stack_00000370);
      }
      puVar7 = Method_UnityEngine_Animations_AnimatorControllerPlayable_SetHandle__;
      if ((*in_stack_00000028 == 0) || (lVar23 = *(long *)(*in_stack_00000028 + 0x18), lVar23 == 0))
      goto LAB_05fdad7c;
      if (*(uint *)(lVar23 + 0x18) <= unaff_x25) goto LAB_05fdada0;
      lVar23 = *(long *)(lVar23 + unaff_x25 * 8 + 0x20);
      if (lVar23 == 0) goto LAB_05fdad7c;
      lVar24 = *(long *)(lVar23 + 0x10);
      *(int *)(lVar23 + 0x1c) = *(int *)(lVar23 + 0x1c) + 1;
      if (lVar24 == 0) goto LAB_05fdad7c;
      uVar34 = *(uint *)(lVar23 + 0x18);
      if (uVar34 < *(uint *)(lVar24 + 0x18)) {
        lVar24 = lVar24 + (long)(int)uVar34 * 0x40;
        *(uint *)(lVar23 + 0x18) = uVar34 + 1;
        *(undefined1 **)(lVar24 + 0x28) = in_stack_00000358;
        *(undefined8 *)(lVar24 + 0x20) = uVar35;
        *(ulong *)(lVar24 + 0x38) = in_stack_00000368;
        *(ulong *)(lVar24 + 0x30) = in_stack_00000360;
        *(ulong *)(lVar24 + 0x48) = in_stack_00000378;
        *(undefined8 *)(lVar24 + 0x40) = in_stack_00000370;
        *(undefined8 *)(lVar24 + 0x58) = 0;
        *(long *)(lVar24 + 0x50) = in_stack_00000380;
        LeanTween__value(lVar24 + 0x20,0);
        uVar35 = 0;
        in_stack_00000358 = puVar36;
        in_stack_00000360 = uVar18;
        in_stack_00000368 = uVar19;
        in_stack_00000370 = uVar15;
        in_stack_00000378 = uVar37;
        in_stack_00000380 = lVar25;
      }
      else {
        in_stack_00000388 = 0;
        FUN_041c6360(lVar23,&stack0x00000350,
                     *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar7 + 0x20) + 0xc0) + 0x70));
      }
      iVar32 = iVar32 + 1;
      unaff_x29 = in_stack_00000048;
      puVar36 = in_stack_00000358;
      uVar18 = in_stack_00000360;
      uVar19 = in_stack_00000368;
      uVar15 = in_stack_00000370;
      uVar37 = in_stack_00000378;
      lVar25 = in_stack_00000380;
    } while (unaff_w24 != iVar32);
    do {
      unaff_x25 = unaff_x25 + 1;
      if (unaff_x25 == 3) {
        lVar25 = *(long *)(in_stack_00000048 + 0x30);
        if (lVar25 == 0) goto LAB_05fdad7c;
        iVar32 = 0;
        goto LAB_05fd9c04;
      }
      if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
          (lVar25 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar25 == 0)) ||
         (lVar25 = *(long *)(lVar25 + 0x10), lVar25 == 0)) goto LAB_05fdad7c;
      if (*(uint *)(lVar25 + 0x18) <= unaff_x25) goto LAB_05fdada0;
      lVar25 = *(long *)(lVar25 + unaff_x25 * 8 + 0x20);
      if ((*(ushort *)
            (*(long *)(*(long *)
                        Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__ +
                      0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      unaff_w24 = *(int *)(lVar25 + 8);
    } while (unaff_w24 < 1);
  } while( true );
LAB_05fd9c04:
  lVar25 = *(long *)(lVar25 + 0x18);
  if ((*(ushort *)(*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) &
      1) == 0) {
    FUN_02dcfd18();
  }
  if (*(int *)(lVar25 + 8) <= iVar32) {
    lVar25 = *(long *)(in_stack_00000048 + 0x30);
    if (lVar25 != 0) {
      LeanTween__value(&stack0x00000350);
      uVar15 = 0xffffffff;
      in_stack_000001b0 = lVar25;
      in_stack_000001b8 = uVar15;
      uVar18 = FUN_05fd2394(&stack0x000001b0);
      puVar8 = Method_UnityEngine_AssetBundle_LoadAsset__;
      puVar7 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputEventTrace_DeviceInfo>__
      ;
      if ((uVar18 & 1) != 0) goto LAB_05fda528;
      goto LAB_05fda840;
    }
    goto LAB_05fdad7c;
  }
  if (*(long *)(in_stack_00000048 + 0x18) == 0) goto LAB_05fdad7c;
  lVar25 = FUN_0400ff1c(*(long *)(in_stack_00000048 + 0x18),iVar32,
                        *(undefined8 *)Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__);
  if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
  in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,iVar32);
  puVar14 = (undefined4 *)
            FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar32,
                         *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
  lVar23 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar23 == 0) goto LAB_05fdad7c;
  uVar10 = *puVar14;
  if (DAT_06dc487d == '\0') {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__);
    DAT_06dc487d = '\x01';
  }
  lVar23 = *(long *)(lVar23 + 0x28);
  if (lVar23 == 0) goto LAB_05fdad7c;
  puVar12 = (undefined8 *)
            FUN_0504d8a8(lVar23,uVar10,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                        );
  uVar15 = FUN_05fd8904(*puVar12);
  LeanTween__value(&stack0x000001f0,uVar15);
  puVar7 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
  ;
  if (lVar25 == 0) goto LAB_05fdad7c;
  plVar16 = (long *)FUN_02d966a4(*(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
                                 ,3);
  LeanTween__value(&stack0x00000200,plVar16);
  plVar17 = (long *)FUN_02d966a4(*(undefined8 *)puVar7,3);
  LeanTween__value(&stack0x00000208,plVar17);
  lVar23 = *(long *)Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
  if (*(int *)(lVar23 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar23 = *(long *)Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
  }
  if (**(long **)(lVar23 + 0xb8) == 0) goto LAB_05fdad7c;
  FUN_04e95158(**(long **)(lVar23 + 0xb8),lVar25,&stack0x00000230,
               *(undefined8 *)
                Method_UnityEngine_Animator_GetBehaviour<OvrAvatarDefaultStateListener>__);
  lVar23 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_SetURN__);
  FUN_05fbe1f4();
  LeanTween__value(&stack0x00000228,lVar23);
  if ((((lVar23 == 0) || (*(undefined4 *)(lVar23 + 0x28) = puVar14[0x19], lVar23 == 0)) ||
      (*(undefined4 *)(lVar23 + 0x2c) = puVar14[0x1a], lVar23 == 0)) ||
     ((*(undefined4 *)(lVar23 + 0x30) = puVar14[0x1b], lVar23 == 0 ||
      (*(undefined4 *)(lVar23 + 0x34) = puVar14[0x1c], lVar23 == 0)))) goto LAB_05fdad7c;
  *(undefined1 *)(lVar23 + 0x38) = *(undefined1 *)((long)puVar14 + 0x7d);
  if (*(long *)(lVar25 + 200) == 0) goto LAB_05fdad7c;
  FUN_03f20aec(&stack0x00000350,*(long *)(lVar25 + 200),
               *(undefined8 *)Method_UnityEngine_AndroidJavaProxy_hashCode__);
  in_stack_000001c0 = uVar35;
  in_stack_000001c8 = in_stack_00000358;
  _uStack00000000000001d0 = in_stack_00000360;
  in_stack_000001d8 = in_stack_00000368;
  in_stack_000001e0 = in_stack_00000370;
  while (uVar18 = FUN_05130778(&stack0x000001c0,
                               *(undefined8 *)
                                Method_UnityEngine_AndroidJavaObjectUnityOwned_Dispose__),
        (uVar18 & 1) != 0) {
    if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar5 = uStack00000000000001d0;
    uVar18 = _uStack00000000000001d0 & 0xffff;
    lVar24 = *(long *)(lVar23 + 0x20);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (lVar24 == 0) {
LAB_05fda484:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar26 = *(long *)(lVar24 + 0x10);
    lVar28 = *unaff_x19;
    *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
    if (lVar26 == 0) goto LAB_05fda484;
    uVar34 = *(uint *)(lVar24 + 0x18);
    if (uVar34 < *(uint *)(lVar26 + 0x18)) {
      *(uint *)(lVar24 + 0x18) = uVar34 + 1;
      *(uint *)(lVar26 + (long)(int)uVar34 * 4 + 0x20) = (uint)uVar5;
    }
    else {
      FUN_03fb3e1c(lVar24,uVar18,*(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70))
      ;
    }
  }
  FUN_05130774(&stack0x000001c0,*(undefined8 *)Method_UnityEngine_AndroidJavaObject__CallStatic__);
  uVar18 = 0;
  do {
    lVar24 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar24,*(undefined8 *)PTR_DAT_069fc3f0);
    if (plVar16 == (long *)0x0) goto LAB_05fdad7c;
    if ((lVar24 != 0) &&
       (lVar26 = thunk_FUN_02dd3048(lVar24,*(undefined8 *)(*plVar16 + 0x40)), lVar26 == 0)) {
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
    plVar16[uVar18 + 4] = lVar24;
    LeanTween__value(plVar16 + uVar18 + 4,lVar24);
    lVar24 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar24,*(undefined8 *)PTR_DAT_069fc3f0);
    if (plVar17 == (long *)0x0) goto LAB_05fdad7c;
    if ((lVar24 != 0) &&
       (lVar26 = thunk_FUN_02dd3048(lVar24,*(undefined8 *)(*plVar17 + 0x40)), lVar26 == 0))
    goto LAB_05fdada4;
    if (*(uint *)(plVar17 + 3) <= uVar18) goto LAB_05fdada0;
    plVar17[uVar18 + 4] = lVar24;
    LeanTween__value(plVar17 + uVar18 + 4,lVar24);
    lVar24 = *(long *)(lVar25 + 0xa8);
    if (lVar24 == 0) goto LAB_05fdad7c;
    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_05fdada0;
    lVar24 = *(long *)(lVar24 + uVar18 * 8 + 0x20);
    if (lVar24 == 0) goto LAB_05fdad7c;
    FUN_04042130(&stack0x00000350,lVar24,
                 *(undefined8 *)
                  Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
LAB_05fda010:
    uVar19 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22);
    if ((uVar19 & 1) != 0) {
      if (*(long *)(lVar25 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar19 = FUN_040419bc(*(long *)(lVar25 + 0xd8),in_stack_00000360,
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
        lVar24 = plVar16[uVar18 + 4];
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (lVar24 != 0) {
          lVar26 = *(long *)(lVar24 + 0x10);
          lVar28 = *unaff_x19;
          *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
          if (lVar26 != 0) {
            uVar6 = *(uint *)(lVar24 + 0x18);
            uVar34 = (uint)in_stack_00000360 & 0xffff;
            if (uVar6 < *(uint *)(lVar26 + 0x18)) {
              *(uint *)(lVar24 + 0x18) = uVar6 + 1;
              *(uint *)(lVar26 + (long)(int)uVar6 * 4 + 0x20) = uVar34;
            }
            else {
              FUN_03fb3e1c(lVar24,uVar34,
                           *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
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
    lVar24 = *(long *)(lVar25 + 0xb0);
    if (lVar24 == 0) goto LAB_05fdad7c;
    if (*(uint *)(lVar24 + 0x18) <= uVar18) goto LAB_05fdada0;
    lVar24 = *(long *)(lVar24 + uVar18 * 8 + 0x20);
    if (lVar24 == 0) goto LAB_05fdad7c;
    FUN_04042130(&stack0x00000350,lVar24,
                 *(undefined8 *)
                  Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
    uVar35 = 0;
    while (uVar19 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22), (uVar19 & 1) != 0) {
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(plVar17 + 3) <= uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar24 = plVar17[uVar18 + 4];
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar24 == 0) {
LAB_05fda1e0:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar26 = *(long *)(lVar24 + 0x10);
      lVar28 = *unaff_x19;
      *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
      if (lVar26 == 0) goto LAB_05fda1e0;
      uVar6 = *(uint *)(lVar24 + 0x18);
      uVar34 = (uint)in_stack_00000360 & 0xffff;
      if (uVar6 < *(uint *)(lVar26 + 0x18)) {
        *(uint *)(lVar24 + 0x18) = uVar6 + 1;
        *(uint *)(lVar26 + (long)(int)uVar6 * 4 + 0x20) = uVar34;
      }
      else {
        FUN_03fb3e1c(lVar24,uVar34,
                     *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_0515e9cc(&stack0x000002c0,
                 *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
    uVar18 = uVar18 + 1;
  } while (uVar18 != 3);
  lVar25 = *(long *)(in_stack_00000048 + 0x30);
  if (DAT_06dc487e == '\0') {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__);
    DAT_06dc487e = '\x01';
  }
  if (lVar25 == 0) goto LAB_05fdad7c;
  iVar1 = puVar14[0x10];
  uVar34 = puVar14[0x11];
  uVar18 = (ulong)uVar34;
  lVar26 = *(long *)
            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
  lVar24 = *(long *)(lVar26 + 0x38);
  if (lVar24 == 0) {
    FUN_02dcfd74(lVar26);
    lVar24 = *(long *)(lVar26 + 0x38);
  }
  lVar25 = FUN_036ee4c4(*(undefined8 *)(lVar25 + 0x40),*(undefined8 *)(lVar24 + 0x10));
  if ((int)uVar34 < 0) {
    FUN_05508bc8(0);
  }
  else if (uVar34 != 0) {
    puVar33 = (ushort *)(lVar25 + (long)iVar1 * 0x18);
    do {
      if (lVar23 == 0) goto LAB_05fdad7c;
      uVar5 = *puVar33;
      lVar25 = *(long *)(lVar23 + 0x18);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (lVar25 == 0) goto LAB_05fdad7c;
      lVar24 = *(long *)(lVar25 + 0x10);
      lVar26 = *unaff_x19;
      *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
      if (lVar24 == 0) goto LAB_05fdad7c;
      uVar34 = *(uint *)(lVar25 + 0x18);
      if (uVar34 < *(uint *)(lVar24 + 0x18)) {
        *(uint *)(lVar25 + 0x18) = uVar34 + 1;
        *(uint *)(lVar24 + (long)(int)uVar34 * 4 + 0x20) = (uint)uVar5;
      }
      else {
        FUN_03fb3e1c(lVar25,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar18 = uVar18 - 1;
      puVar33 = puVar33 + 0xc;
    } while (uVar18 != 0);
  }
  if ((*in_stack_00000028 == 0) || (lVar25 = *(long *)(*in_stack_00000028 + 0x10), lVar25 == 0))
  goto LAB_05fdad7c;
  memcpy(&stack0x00000300,&stack0x000001f0,0x48);
  lVar23 = *(long *)(lVar25 + 0x10);
  lVar24 = *(long *)Method_UnityEngine_Animator_GetBoneTransform__;
  *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
  if (lVar23 == 0) goto LAB_05fdad7c;
  uVar34 = *(uint *)(lVar25 + 0x18);
  if (uVar34 < *(uint *)(lVar23 + 0x18)) {
    lVar23 = lVar23 + (long)(int)uVar34 * 0x48;
    *(uint *)(lVar25 + 0x18) = uVar34 + 1;
    memcpy((void *)(lVar23 + 0x20),&stack0x00000300,0x48);
    LeanTween__value(lVar23 + 0x20,0);
  }
  else {
    uVar15 = *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70);
    memcpy(&stack0x00000350,&stack0x00000300,0x48);
    FUN_041c36bc(lVar25,&stack0x00000350,uVar15);
  }
  lVar25 = *(long *)(in_stack_00000048 + 0x30);
  iVar32 = iVar32 + 1;
  in_stack_00000358 = &stack0x000002c0;
  if (lVar25 == 0) goto LAB_05fdad7c;
  goto LAB_05fd9c04;
  while( true ) {
    if (0 < *(int *)(lVar23 + 0x2a0)) {
      lVar26 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__
                                 );
      FUN_0552aca4(lVar26,0);
      uVar35 = FUN_05fd7f88(*(undefined8 *)(in_stack_00000048 + 0x30),lVar23);
      if (lVar26 == 0) goto LAB_05fdad7c;
      *(undefined8 *)(lVar26 + 0x10) = uVar35;
      LeanTween__value();
      lVar28 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_CompileXPath__);
      FUN_0400f984(lVar28,*(undefined8 *)Method_AssetInputExample_DoChangeThing__);
      plVar16 = (long *)(lVar26 + 0x18);
      *plVar16 = lVar28;
      LeanTween__value(plVar16,lVar28);
      iVar32 = 0;
      while( true ) {
        iVar1 = *(int *)(lVar23 + 0x294);
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (iVar1 <= iVar32) break;
        lVar28 = *plVar16;
        uVar35 = FUN_05fd7aa8(*(undefined8 *)(in_stack_00000048 + 0x30),lVar23,iVar32);
        if (lVar28 == 0) goto LAB_05fdad7c;
        lVar27 = *(long *)(lVar28 + 0x10);
        lVar29 = *(long *)puVar8;
        *(int *)(lVar28 + 0x1c) = *(int *)(lVar28 + 0x1c) + 1;
        if (lVar27 == 0) goto LAB_05fdad7c;
        uVar34 = *(uint *)(lVar28 + 0x18);
        if (uVar34 < *(uint *)(lVar27 + 0x18)) {
          *(uint *)(lVar28 + 0x18) = uVar34 + 1;
          *(undefined8 *)(lVar27 + (long)(int)uVar34 * 8 + 0x20) = uVar35;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar28,uVar35,
                       *(undefined8 *)(*(long *)(*(long *)(lVar29 + 0x20) + 0xc0) + 0x70));
        }
        iVar32 = iVar32 + 1;
      }
      uVar35 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_UnityEngine_Assertions_Assert_IsNull<UIRAtlasAllocator_AreaNode>__
                                 );
      FUN_04de9e6c(uVar35,*(undefined8 *)
                           Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElement>__);
      *(undefined8 *)(lVar26 + 0x20) = uVar35;
      LeanTween__value((undefined8 *)(lVar26 + 0x20),uVar35);
      *(long *)(lVar26 + 0x28) = lVar24;
      LeanTween__value((long *)(lVar26 + 0x28),lVar24);
      puVar9 = Method_AssetInputExample_DoPressedThing__;
      if (lVar24 == 0) goto LAB_05fdad7c;
      if (0 < *(int *)(lVar24 + 0x18)) {
        iVar32 = 0;
        do {
          uVar10 = FUN_03fb3b24(lVar24,iVar32,*(undefined8 *)PTR_DAT_069fe588);
          if (*in_stack_00000028 == 0) goto LAB_05fdad7c;
          lVar23 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar23 == 0) ||
             (FUN_041c332c(&stack0x00000350,lVar23,uVar10,*(undefined8 *)puVar9),
             in_stack_00000170 = lVar25, in_stack_00000178 = uVar15,
             in_stack_00000180 = in_stack_00000360, in_stack_00000188 = in_stack_00000368,
             in_stack_00000190 = in_stack_00000370, in_stack_00000198 = in_stack_00000378,
             in_stack_000001a0 = in_stack_00000380, in_stack_00000388 == 0)) goto LAB_05fdad7c;
          *(long *)(in_stack_00000388 + 0x10) = lVar26;
          LeanTween__value((long *)(in_stack_00000388 + 0x10),lVar26);
          in_stack_00000380 = in_stack_000001a0;
          in_stack_00000378 = in_stack_00000198;
          in_stack_00000370 = in_stack_00000190;
          in_stack_00000368 = in_stack_00000188;
          in_stack_00000360 = in_stack_00000180;
          uVar15 = in_stack_00000178;
          lVar25 = in_stack_00000170;
          if ((*in_stack_00000028 == 0) ||
             (lVar23 = *(long *)(*in_stack_00000028 + 0x10), lVar23 == 0)) goto LAB_05fdad7c;
          FUN_041c3390(lVar23,uVar10,&stack0x00000350,
                       *(undefined8 *)Method_AssetInputExample_DoReleasedThing__);
          iVar32 = iVar32 + 1;
          in_stack_00000030 = in_stack_00000388;
        } while (iVar32 < *(int *)(lVar24 + 0x18));
      }
    }
    uVar18 = FUN_05fd2394(&stack0x000001b0);
    if ((uVar18 & 1) == 0) break;
LAB_05fda528:
    lVar23 = FUN_05fd233c(&stack0x000001b0);
    lVar24 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar24,*(undefined8 *)PTR_DAT_069fc3f0);
    iVar32 = *(int *)(lVar23 + 0x298);
    if (iVar32 < *(int *)(lVar23 + 0x29c) + 1) {
      if (lVar24 == 0) goto LAB_05fdad7c;
      lVar26 = *unaff_x19;
      do {
        lVar28 = *(long *)(lVar24 + 0x10);
        *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
        if (lVar28 == 0) goto LAB_05fdad7c;
        uVar34 = *(uint *)(lVar24 + 0x18);
        if (uVar34 < *(uint *)(lVar28 + 0x18)) {
          *(uint *)(lVar24 + 0x18) = uVar34 + 1;
          *(int *)(lVar28 + (long)(int)uVar34 * 4 + 0x20) = iVar32;
        }
        else {
          FUN_03fb3e1c(lVar24,iVar32,
                       *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
          lVar26 = *unaff_x19;
        }
        iVar32 = iVar32 + 1;
      } while (iVar32 < *(int *)(lVar23 + 0x29c) + 1);
    }
  }
LAB_05fda840:
  lVar25 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar25 != 0) {
    iVar32 = 0;
    do {
      lVar25 = *(long *)(lVar25 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) & 1) ==
          0) {
        FUN_02dcfd18();
      }
      if (*(int *)(lVar25 + 8) <= iVar32) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar20 = (int *)FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar32,
                                    *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
      if (((*in_stack_00000028 == 0) || (lVar25 = *(long *)(*in_stack_00000028 + 0x10), lVar25 == 0)
          ) || (FUN_041c332c(&stack0x00000350,lVar25,*piVar20,
                             *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
               in_stack_00000388 == 0)) break;
      lVar25 = *(long *)(in_stack_00000388 + 0x10);
      if (lVar25 != 0) {
        lVar23 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_06dc4872 == '\0') {
          FUN_02d965b8(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                      );
          DAT_06dc4872 = '\x01';
        }
        puVar7 = Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
        if (lVar23 == 0) break;
        iVar1 = piVar20[10];
        uVar34 = piVar20[0xb];
        uVar18 = (ulong)uVar34;
        lVar26 = *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
        ;
        lVar24 = *(long *)(lVar26 + 0x38);
        if (lVar24 == 0) {
          FUN_02dcfd74(lVar26);
          lVar24 = *(long *)(lVar26 + 0x38);
        }
        lVar23 = FUN_036ee4d8(*(undefined8 *)(lVar23 + 0x30),*(undefined8 *)(lVar24 + 0x10));
        if ((int)uVar34 < 0) {
          FUN_05508bc8(0);
        }
        else if (uVar34 != 0) {
          puVar14 = (undefined4 *)(lVar23 + (long)iVar1 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar23 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar23 == 0))
            goto LAB_05fdad7c;
            pcVar21 = (char *)FUN_05fdfe80(lVar23,*(undefined8 *)(puVar14 + -2),*puVar14,0);
            if (*pcVar21 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              iVar1 = *(int *)(pcVar21 + 4);
              plVar16 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02dcfd18(*(long *)(*(long *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                      + 0x20));
              }
              memcpy(&stack0x000000f0,(void *)(*plVar16 + (long)iVar1 * 0x80),0x80);
              if (in_stack_00000110 < 0) {
                FUN_05fde34c(&stack0x00000350,3,*piVar20,0);
                uVar15 = 0;
              }
              else {
                uVar15 = FUN_05fdf5d4(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                      *piVar20,0);
              }
              uVar35 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),piVar20,
                                    &stack0x000000f0,uVar15);
              in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar7,uVar35,0);
              uVar10 = in_stack_000000f0;
              lVar23 = *(long *)(lVar25 + 0x20);
              in_stack_000000e8 = 0;
              LeanTween__value(&stack0x000000e0,in_stack_000000e0);
              in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar15 == 0xc);
              if (lVar23 == 0) goto LAB_05fdad7c;
              FUN_04dec6b0(lVar23,uVar10,in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)
                            Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
            }
            uVar18 = uVar18 - 1;
            puVar14 = puVar14 + 3;
          } while (uVar18 != 0);
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
          uVar34 = piVar20[0xd];
          lVar26 = *(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
          ;
          lVar24 = *(long *)(lVar26 + 0x38);
          if (lVar24 == 0) {
            FUN_02dcfd74(lVar26);
            lVar24 = *(long *)(lVar26 + 0x38);
          }
          lVar23 = FUN_036ee4ec(*(undefined8 *)(lVar23 + 0x38),*(undefined8 *)(lVar24 + 0x10));
          if ((int)uVar34 < 0) {
            FUN_05508bc8(0);
          }
          else if (uVar34 != 0) {
            uVar18 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              puVar12 = (undefined8 *)(lVar23 + (long)iVar1 * 0xc + uVar18 * 0xc);
              in_stack_00000030 =
                   in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar12 + 1);
              lVar24 = FUN_05fdc35c(*(long *)(in_stack_00000048 + 0x30),*puVar12,in_stack_00000030,0
                                   );
              if (*(int *)(lVar24 + 8) != *piVar20) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar24 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar24 == 0))
                goto LAB_05fdad7c;
                lVar24 = FUN_05fdfe80(lVar24,*puVar12,*(undefined4 *)(puVar12 + 1),0);
                iVar4 = *(int *)(lVar24 + 8);
                if (0 < iVar4) {
                  iVar30 = 0;
                  do {
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar24 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar24 == 0)
                       ) goto LAB_05fdad7c;
                    uVar15 = *puVar12;
                    if (DAT_06dc486d == '\0') {
                      FUN_02d965b8();
                      DAT_06dc486d = '\x01';
                    }
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02df485c();
                    }
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar26 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar26 == 0)
                       ) goto LAB_05fdad7c;
                    lVar26 = *(long *)(lVar26 + 0x20);
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
                    if (lVar26 == 0) goto LAB_05fdad7c;
                    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(puVar12 + 1)) goto LAB_05fdada0;
                    piVar22 = (int *)FUN_042c8e28(lVar26 + (long)(int)*(uint *)(puVar12 + 1) * 8 +
                                                  0x20,iVar30 + ((int)((ulong)uVar15 >> 0x20) +
                                                                iVar2 * ((uint)uVar15 & 0xffff)) *
                                                                iVar3,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                                 );
                    lVar24 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar24 == 0) goto LAB_05fdad7c;
                    iVar2 = *piVar22;
                    plVar16 = *(long **)(lVar24 + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                    + 0x20) + 0x135) & 1) == 0) {
                      FUN_02dcfd18(*(long *)(*(long *)
                                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                            + 0x20));
                      lVar24 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar16 + (long)iVar2 * 0x80),0x80);
                    uVar10 = in_stack_00000060;
                    uVar15 = FUN_05fdf5d4(lVar24,piVar20[8],in_stack_00000060,0);
                    uVar35 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar20,uVar15);
                    in_stack_000000e0 =
                         FUN_05362cb4(*(undefined8 *)
                                       Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__
                                      ,uVar35,0);
                    lVar24 = *(long *)(lVar25 + 0x20);
                    in_stack_000000e8 = 0;
                    LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar15 == 0xc);
                    if (lVar24 == 0) goto LAB_05fdad7c;
                    FUN_04dec6b0(lVar24,uVar10,in_stack_000000e0,in_stack_000000e8,
                                 *(undefined8 *)
                                  Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
                    iVar30 = iVar30 + 1;
                  } while (iVar4 != iVar30);
                }
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 != uVar34);
          }
        }
      }
      lVar25 = *(long *)(in_stack_00000048 + 0x30);
      iVar32 = iVar32 + 1;
    } while (lVar25 != 0);
  }
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


