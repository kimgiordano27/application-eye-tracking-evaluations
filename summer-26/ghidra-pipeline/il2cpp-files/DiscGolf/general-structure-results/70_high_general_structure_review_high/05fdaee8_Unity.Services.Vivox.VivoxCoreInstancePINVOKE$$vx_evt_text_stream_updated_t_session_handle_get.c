/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_text_stream_updated_t_session_handle_get
ENTRY_POINT: 05fdaee8
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_text_stream_updated_t_session_handle_get
               (undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  ulong uVar16;
  int *piVar17;
  char *pcVar18;
  int *piVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  long *unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  int iVar28;
  ulong uVar29;
  long lVar30;
  undefined8 uVar31;
  int iVar32;
  ushort *puVar33;
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
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000350;
  undefined1 *puVar35;
  undefined1 *in_stack_00000358;
  ulong in_stack_00000360;
  ulong uVar36;
  ulong in_stack_00000368;
  undefined8 in_stack_00000370;
  ulong uVar37;
  ulong in_stack_00000378;
  long in_stack_00000380;
  ulong in_stack_00000388;
  
  if (param_2 != 1) {
    FUN_02d59b40(&stack0x00000300);
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c(param_1);
  }
  plVar20 = (long *)__cxa_begin_catch(param_1);
  lVar30 = *plVar20;
  __cxa_end_catch();
  FUN_05156800(in_stack_00000308,
               *(undefined8 *)
                Method_Unity_Collections_AllocatorManager_AllocateBlock<AllocatorManager_AllocatorHandle>__
              );
  if (lVar30 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(lVar30);
  }
  uVar29 = 0;
  do {
    if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
        (lVar30 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar30 == 0)) ||
       (lVar30 = *(long *)(lVar30 + 0x10), lVar30 == 0)) goto LAB_05fdad7c;
    if (*(uint *)(lVar30 + 0x18) <= uVar29) {
LAB_05fdada0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar30 = *(long *)(lVar30 + uVar29 * 8 + 0x20);
    if ((*(ushort *)
          (*(long *)(*(long *)
                      Method_System_Security_Cryptography_AsymmetricAlgorithm_FromXmlString__ + 0x20
                    ) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    iVar28 = *(int *)(lVar30 + 8);
    if (0 < iVar28) {
      iVar32 = 0;
      puVar35 = in_stack_00000358;
      uVar16 = in_stack_00000360;
      uVar36 = in_stack_00000368;
      uVar14 = in_stack_00000370;
      uVar37 = in_stack_00000378;
      lVar30 = in_stack_00000380;
      do {
        if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
            (lVar21 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar21 == 0)) ||
           (lVar21 = *(long *)(lVar21 + 0x10), lVar21 == 0)) goto LAB_05fdad7c;
        if (*(uint *)(lVar21 + 0x18) <= uVar29) goto LAB_05fdada0;
        pbVar10 = (byte *)FUN_042c950c(lVar21 + uVar29 * 8 + 0x20,iVar32,
                                       *(undefined8 *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputActionMap>__
                                      );
        if (iVar32 == 0) {
          in_stack_00000350 = *(undefined8 *)PTR_DAT_06a1c7b0;
          LeanTween__value(&stack0x00000260);
          uVar34 = 1;
        }
        else {
          if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
              (lVar21 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar21 == 0)) ||
             (lVar21 = *(long *)(lVar21 + 0x30), lVar21 == 0)) goto LAB_05fdad7c;
          if (*(uint *)(lVar21 + 0x18) <= uVar29) goto LAB_05fdada0;
          lVar21 = *(long *)(lVar21 + uVar29 * 8 + 0x20);
          if (lVar21 == 0) goto LAB_05fdad7c;
          puVar11 = (undefined8 *)
                    FUN_0504d8a8(lVar21,iVar32,
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                                );
          uVar31 = *puVar11;
          uVar12 = FUN_0536c9cc(uVar31,0);
          in_stack_00000350 =
               *(undefined8 *)
                Method_Newtonsoft_Json_Utilities_AotHelper_EnsureType<JsonObjectConverter>__;
          if ((uVar12 & 1) == 0) {
            in_stack_00000350 = uVar31;
          }
          LeanTween__value(&stack0x00000260);
          uVar34 = (uint)*pbVar10;
          if (uVar29 == 0) {
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
        in_stack_00000358 = (undefined1 *)CONCAT44(*(undefined4 *)(pbVar10 + 0x10),uVar34);
        in_stack_00000360 = (ulong)*(uint *)(pbVar10 + 8);
        in_stack_00000380 =
             thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_Newtonsoft_Json_Utilities_AotHelper_EnsureType<JsonObjectConverter>__
                               );
        FUN_0552aca4(in_stack_00000380,0);
        LeanTween__value(&stack0x00000290,in_stack_00000380);
        if ((((((in_stack_00000380 == 0) ||
               (*(undefined4 *)(in_stack_00000380 + 0x10) = *(undefined4 *)(pbVar10 + 0x18),
               in_stack_00000380 == 0)) ||
              (*(undefined4 *)(in_stack_00000380 + 0x14) = *(undefined4 *)(pbVar10 + 0x1c),
              in_stack_00000380 == 0)) ||
             ((*(undefined4 *)(in_stack_00000380 + 0x18) = *(undefined4 *)(pbVar10 + 0x20),
              in_stack_00000380 == 0 ||
              (*(undefined4 *)(in_stack_00000380 + 0x20) = *(undefined4 *)(pbVar10 + 0x24),
              in_stack_00000380 == 0)))) ||
            (*(undefined4 *)(in_stack_00000380 + 0x24) = 0, in_stack_00000380 == 0)) ||
           (*(byte *)(in_stack_00000380 + 0x1c) = pbVar10[0x2e], in_stack_00000380 == 0))
        goto LAB_05fdad7c;
        *(byte *)(in_stack_00000380 + 0x28) = pbVar10[0x2c];
        puVar7 = PTR_DAT_069fc3f8;
        in_stack_00000378 = (ulong)pbVar10[0x14];
        in_stack_00000368 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
        puVar6 = PTR_DAT_069fc3f0;
        FUN_03fb358c(in_stack_00000368,*(undefined8 *)PTR_DAT_069fc3f0);
        LeanTween__value(&stack0x00000278,in_stack_00000368);
        in_stack_00000370 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
        FUN_03fb358c(in_stack_00000370,*(undefined8 *)puVar6);
        LeanTween__value(&stack0x00000280,in_stack_00000370);
        FUN_04a4c858(&stack0x00000350,uVar29 & 0xffffffff,iVar32,
                     *(undefined8 *)
                      Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
        if (in_stack_00000020 == 0) goto LAB_05fdad7c;
        uVar12 = FUN_04bd2bf4(in_stack_00000020,0,
                              *(undefined8 *)
                               Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__);
        if ((uVar12 & 1) != 0) {
          FUN_04a4c858(&stack0x00000350,uVar29 & 0xffffffff,iVar32,
                       *(undefined8 *)
                        Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
          in_stack_00000368 =
               FUN_04bd2960(in_stack_00000020,0,
                            *(undefined8 *)
                             Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__);
          LeanTween__value(&stack0x00000278,in_stack_00000368);
        }
        FUN_04a4c858(&stack0x00000350,uVar29 & 0xffffffff,iVar32,
                     *(undefined8 *)
                      Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
        if (in_stack_00000030 == 0) goto LAB_05fdad7c;
        uVar12 = FUN_04bd2bf4(in_stack_00000030,0,
                              *(undefined8 *)
                               Method_UnityEngine_Assertions_Assert_AreEqual<LengthUnit>__);
        if ((uVar12 & 1) != 0) {
          FUN_04a4c858(&stack0x00000350,uVar29 & 0xffffffff,iVar32,
                       *(undefined8 *)
                        Method_System_Security_Cryptography_AsymmetricAlgorithm_set_KeySize__);
          in_stack_00000370 =
               FUN_04bd2960(in_stack_00000030,0,
                            *(undefined8 *)
                             Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElementAsset>__);
          LeanTween__value(&stack0x00000280,in_stack_00000370);
        }
        puVar6 = Method_UnityEngine_Animations_AnimatorControllerPlayable_SetHandle__;
        if ((*in_stack_00000028 == 0) ||
           (lVar21 = *(long *)(*in_stack_00000028 + 0x18), lVar21 == 0)) goto LAB_05fdad7c;
        if (*(uint *)(lVar21 + 0x18) <= uVar29) goto LAB_05fdada0;
        lVar21 = *(long *)(lVar21 + uVar29 * 8 + 0x20);
        if (lVar21 == 0) goto LAB_05fdad7c;
        lVar22 = *(long *)(lVar21 + 0x10);
        *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
        if (lVar22 == 0) goto LAB_05fdad7c;
        uVar34 = *(uint *)(lVar21 + 0x18);
        if (uVar34 < *(uint *)(lVar22 + 0x18)) {
          lVar22 = lVar22 + (long)(int)uVar34 * 0x40;
          *(uint *)(lVar21 + 0x18) = uVar34 + 1;
          *(undefined1 **)(lVar22 + 0x28) = in_stack_00000358;
          *(undefined8 *)(lVar22 + 0x20) = in_stack_00000350;
          *(ulong *)(lVar22 + 0x38) = in_stack_00000368;
          *(ulong *)(lVar22 + 0x30) = in_stack_00000360;
          *(ulong *)(lVar22 + 0x48) = in_stack_00000378;
          *(undefined8 *)(lVar22 + 0x40) = in_stack_00000370;
          *(undefined8 *)(lVar22 + 0x58) = 0;
          *(long *)(lVar22 + 0x50) = in_stack_00000380;
          LeanTween__value(lVar22 + 0x20,0);
          in_stack_00000350 = 0;
          in_stack_00000358 = puVar35;
          in_stack_00000360 = uVar16;
          in_stack_00000368 = uVar36;
          in_stack_00000370 = uVar14;
          in_stack_00000378 = uVar37;
          in_stack_00000380 = lVar30;
        }
        else {
          in_stack_00000388 = 0;
          FUN_041c6360(lVar21,&stack0x00000350,
                       *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar6 + 0x20) + 0xc0) + 0x70));
        }
        iVar32 = iVar32 + 1;
        puVar35 = in_stack_00000358;
        uVar16 = in_stack_00000360;
        uVar36 = in_stack_00000368;
        uVar14 = in_stack_00000370;
        uVar37 = in_stack_00000378;
        lVar30 = in_stack_00000380;
      } while (iVar28 != iVar32);
    }
    uVar29 = uVar29 + 1;
  } while (uVar29 != 3);
  lVar30 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar30 != 0) {
    iVar28 = 0;
    while( true ) {
      lVar30 = *(long *)(lVar30 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) & 1) ==
          0) {
        FUN_02dcfd18();
      }
      if (*(int *)(lVar30 + 8) <= iVar28) break;
      if (*(long *)(in_stack_00000048 + 0x18) == 0) goto LAB_05fdad7c;
      lVar30 = FUN_0400ff1c(*(long *)(in_stack_00000048 + 0x18),iVar28,
                            *(undefined8 *)Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__
                           );
      if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
      in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,iVar28);
      puVar13 = (undefined4 *)
                FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar28,
                             *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
      lVar21 = *(long *)(in_stack_00000048 + 0x30);
      if (lVar21 == 0) goto LAB_05fdad7c;
      uVar9 = *puVar13;
      if (DAT_06dc487d == '\0') {
        FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__);
        DAT_06dc487d = '\x01';
      }
      lVar21 = *(long *)(lVar21 + 0x28);
      if (lVar21 == 0) goto LAB_05fdad7c;
      puVar11 = (undefined8 *)
                FUN_0504d8a8(lVar21,uVar9,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                            );
      uVar14 = FUN_05fd8904(*puVar11);
      LeanTween__value(&stack0x000001f0,uVar14);
      puVar6 = 
      Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
      ;
      if (lVar30 == 0) goto LAB_05fdad7c;
      plVar20 = (long *)FUN_02d966a4(*(undefined8 *)
                                      Method_UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_OnRaySelectExited__
                                     ,3);
      LeanTween__value(&stack0x00000200,plVar20);
      plVar15 = (long *)FUN_02d966a4(*(undefined8 *)puVar6,3);
      LeanTween__value(&stack0x00000208,plVar15);
      lVar21 = *(long *)
                Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
      if (*(int *)(lVar21 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar21 = *(long *)
                  Method_UnityEngine_InputSystem_Android_LowLevel_AndroidSensorState_WithData__;
      }
      if (**(long **)(lVar21 + 0xb8) == 0) goto LAB_05fdad7c;
      FUN_04e95158(**(long **)(lVar21 + 0xb8),lVar30,&stack0x00000230,
                   *(undefined8 *)
                    Method_UnityEngine_Animator_GetBehaviour<OvrAvatarDefaultStateListener>__);
      lVar21 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_SetURN__);
      FUN_05fbe1f4();
      LeanTween__value(&stack0x00000228,lVar21);
      if ((((lVar21 == 0) || (*(undefined4 *)(lVar21 + 0x28) = puVar13[0x19], lVar21 == 0)) ||
          (*(undefined4 *)(lVar21 + 0x2c) = puVar13[0x1a], lVar21 == 0)) ||
         ((*(undefined4 *)(lVar21 + 0x30) = puVar13[0x1b], lVar21 == 0 ||
          (*(undefined4 *)(lVar21 + 0x34) = puVar13[0x1c], lVar21 == 0)))) goto LAB_05fdad7c;
      *(undefined1 *)(lVar21 + 0x38) = *(undefined1 *)((long)puVar13 + 0x7d);
      if (*(long *)(lVar30 + 200) == 0) goto LAB_05fdad7c;
      FUN_03f20aec(&stack0x00000350,*(long *)(lVar30 + 200),
                   *(undefined8 *)Method_UnityEngine_AndroidJavaProxy_hashCode__);
      in_stack_000001c0 = in_stack_00000350;
      in_stack_000001c8 = in_stack_00000358;
      _uStack00000000000001d0 = in_stack_00000360;
      in_stack_000001d8 = in_stack_00000368;
      in_stack_000001e0 = in_stack_00000370;
      while (uVar29 = FUN_05130778(&stack0x000001c0,
                                   *(undefined8 *)
                                    Method_UnityEngine_AndroidJavaObjectUnityOwned_Dispose__),
            (uVar29 & 1) != 0) {
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar4 = uStack00000000000001d0;
        uVar29 = _uStack00000000000001d0 & 0xffff;
        lVar22 = *(long *)(lVar21 + 0x20);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (lVar22 == 0) {
LAB_05fda484:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar23 = *(long *)(lVar22 + 0x10);
        lVar25 = *unaff_x19;
        *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
        if (lVar23 == 0) goto LAB_05fda484;
        uVar34 = *(uint *)(lVar22 + 0x18);
        if (uVar34 < *(uint *)(lVar23 + 0x18)) {
          *(uint *)(lVar22 + 0x18) = uVar34 + 1;
          *(uint *)(lVar23 + (long)(int)uVar34 * 4 + 0x20) = (uint)uVar4;
        }
        else {
          FUN_03fb3e1c(lVar22,uVar29,
                       *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_05130774(&stack0x000001c0,
                   *(undefined8 *)Method_UnityEngine_AndroidJavaObject__CallStatic__);
      uVar29 = 0;
      do {
        lVar22 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
        FUN_03fb358c(lVar22,*(undefined8 *)PTR_DAT_069fc3f0);
        if (plVar20 == (long *)0x0) goto LAB_05fdad7c;
        if ((lVar22 != 0) &&
           (lVar23 = thunk_FUN_02dd3048(lVar22,*(undefined8 *)(*plVar20 + 0x40)), lVar23 == 0)) {
LAB_05fdada4:
          uVar14 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar14,0);
        }
        if (*(uint *)(plVar20 + 3) <= uVar29) goto LAB_05fdada0;
        plVar20[uVar29 + 4] = lVar22;
        LeanTween__value(plVar20 + uVar29 + 4,lVar22);
        lVar22 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
        FUN_03fb358c(lVar22,*(undefined8 *)PTR_DAT_069fc3f0);
        if (plVar15 == (long *)0x0) goto LAB_05fdad7c;
        if ((lVar22 != 0) &&
           (lVar23 = thunk_FUN_02dd3048(lVar22,*(undefined8 *)(*plVar15 + 0x40)), lVar23 == 0))
        goto LAB_05fdada4;
        if (*(uint *)(plVar15 + 3) <= uVar29) goto LAB_05fdada0;
        plVar15[uVar29 + 4] = lVar22;
        LeanTween__value(plVar15 + uVar29 + 4,lVar22);
        lVar22 = *(long *)(lVar30 + 0xa8);
        if (lVar22 == 0) goto LAB_05fdad7c;
        if (*(uint *)(lVar22 + 0x18) <= uVar29) goto LAB_05fdada0;
        lVar22 = *(long *)(lVar22 + uVar29 * 8 + 0x20);
        if (lVar22 == 0) goto LAB_05fdad7c;
        FUN_04042130(&stack0x00000350,lVar22,
                     *(undefined8 *)
                      Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
LAB_05fda010:
        uVar16 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22);
        if ((uVar16 & 1) != 0) {
          if (*(long *)(lVar30 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar16 = FUN_040419bc(*(long *)(lVar30 + 0xd8),in_stack_00000360,
                                in_stack_00000368 & 0xffffffff,*unaff_x23);
          if ((uVar16 & 1) == 0) {
            if (plVar20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(uint *)(plVar20 + 3) <= uVar29) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            lVar22 = plVar20[uVar29 + 4];
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            if (lVar22 != 0) {
              lVar23 = *(long *)(lVar22 + 0x10);
              lVar25 = *unaff_x19;
              *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
              if (lVar23 != 0) {
                uVar5 = *(uint *)(lVar22 + 0x18);
                uVar34 = (uint)in_stack_00000360 & 0xffff;
                if (uVar5 < *(uint *)(lVar23 + 0x18)) {
                  *(uint *)(lVar22 + 0x18) = uVar5 + 1;
                  *(uint *)(lVar23 + (long)(int)uVar5 * 4 + 0x20) = uVar34;
                }
                else {
                  FUN_03fb3e1c(lVar22,uVar34,
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
        lVar22 = *(long *)(lVar30 + 0xb0);
        if (lVar22 == 0) goto LAB_05fdad7c;
        if (*(uint *)(lVar22 + 0x18) <= uVar29) goto LAB_05fdada0;
        lVar22 = *(long *)(lVar22 + uVar29 * 8 + 0x20);
        if (lVar22 == 0) goto LAB_05fdad7c;
        FUN_04042130(&stack0x00000350,lVar22,
                     *(undefined8 *)
                      Method_UnityEngine_AndroidJNI_NewDirectByteBufferFromNativeArray<sbyte>__);
        in_stack_00000350 = 0;
        while (uVar16 = FUN_0515e9d0(&stack0x000002c0,*unaff_x22), (uVar16 & 1) != 0) {
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(plVar15 + 3) <= uVar29) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar22 = plVar15[uVar29 + 4];
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (lVar22 == 0) {
LAB_05fda1e0:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar23 = *(long *)(lVar22 + 0x10);
          lVar25 = *unaff_x19;
          *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
          if (lVar23 == 0) goto LAB_05fda1e0;
          uVar5 = *(uint *)(lVar22 + 0x18);
          uVar34 = (uint)in_stack_00000360 & 0xffff;
          if (uVar5 < *(uint *)(lVar23 + 0x18)) {
            *(uint *)(lVar22 + 0x18) = uVar5 + 1;
            *(uint *)(lVar23 + (long)(int)uVar5 * 4 + 0x20) = uVar34;
          }
          else {
            FUN_03fb3e1c(lVar22,uVar34,
                         *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_0515e9cc(&stack0x000002c0,
                     *(undefined8 *)Method_UnityEngine_AndroidJNI_GetDirectBuffer<byte>__);
        uVar29 = uVar29 + 1;
      } while (uVar29 != 3);
      lVar30 = *(long *)(in_stack_00000048 + 0x30);
      if (DAT_06dc487e == '\0') {
        FUN_02d965b8(
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__
                    );
        DAT_06dc487e = '\x01';
      }
      if (lVar30 == 0) goto LAB_05fdad7c;
      iVar32 = puVar13[0x10];
      uVar34 = puVar13[0x11];
      uVar29 = (ulong)uVar34;
      lVar23 = *(long *)
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
      lVar22 = *(long *)(lVar23 + 0x38);
      if (lVar22 == 0) {
        FUN_02dcfd74(lVar23);
        lVar22 = *(long *)(lVar23 + 0x38);
      }
      lVar30 = FUN_036ee4c4(*(undefined8 *)(lVar30 + 0x40),*(undefined8 *)(lVar22 + 0x10));
      if ((int)uVar34 < 0) {
        FUN_05508bc8(0);
      }
      else if (uVar34 != 0) {
        puVar33 = (ushort *)(lVar30 + (long)iVar32 * 0x18);
        do {
          if (lVar21 == 0) goto LAB_05fdad7c;
          uVar4 = *puVar33;
          lVar30 = *(long *)(lVar21 + 0x18);
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (lVar30 == 0) goto LAB_05fdad7c;
          lVar22 = *(long *)(lVar30 + 0x10);
          lVar23 = *unaff_x19;
          *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
          if (lVar22 == 0) goto LAB_05fdad7c;
          uVar34 = *(uint *)(lVar30 + 0x18);
          if (uVar34 < *(uint *)(lVar22 + 0x18)) {
            *(uint *)(lVar30 + 0x18) = uVar34 + 1;
            *(uint *)(lVar22 + (long)(int)uVar34 * 4 + 0x20) = (uint)uVar4;
          }
          else {
            FUN_03fb3e1c(lVar30,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
          }
          uVar29 = uVar29 - 1;
          puVar33 = puVar33 + 0xc;
        } while (uVar29 != 0);
      }
      if ((*in_stack_00000028 == 0) || (lVar30 = *(long *)(*in_stack_00000028 + 0x10), lVar30 == 0))
      goto LAB_05fdad7c;
      memcpy(&stack0x00000300,&stack0x000001f0,0x48);
      lVar21 = *(long *)(lVar30 + 0x10);
      lVar22 = *(long *)Method_UnityEngine_Animator_GetBoneTransform__;
      *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
      if (lVar21 == 0) goto LAB_05fdad7c;
      uVar34 = *(uint *)(lVar30 + 0x18);
      if (uVar34 < *(uint *)(lVar21 + 0x18)) {
        lVar21 = lVar21 + (long)(int)uVar34 * 0x48;
        *(uint *)(lVar30 + 0x18) = uVar34 + 1;
        memcpy((void *)(lVar21 + 0x20),&stack0x00000300,0x48);
        LeanTween__value(lVar21 + 0x20,0);
      }
      else {
        uVar14 = *(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70);
        memcpy(&stack0x00000350,&stack0x00000300,0x48);
        FUN_041c36bc(lVar30,&stack0x00000350,uVar14);
      }
      lVar30 = *(long *)(in_stack_00000048 + 0x30);
      iVar28 = iVar28 + 1;
      in_stack_00000358 = &stack0x000002c0;
      if (lVar30 == 0) goto LAB_05fdad7c;
    }
    lVar30 = *(long *)(in_stack_00000048 + 0x30);
    if (lVar30 != 0) {
      LeanTween__value(&stack0x00000350);
      uVar14 = 0xffffffff;
      in_stack_000001b0 = lVar30;
      in_stack_000001b8 = uVar14;
      uVar29 = FUN_05fd2394(&stack0x000001b0);
      puVar7 = Method_UnityEngine_AssetBundle_LoadAsset__;
      puVar6 = 
      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputEventTrace_DeviceInfo>__
      ;
      if ((uVar29 & 1) != 0) goto LAB_05fda528;
      goto LAB_05fda840;
    }
  }
  goto LAB_05fdad7c;
  while( true ) {
    if (0 < *(int *)(lVar21 + 0x2a0)) {
      lVar23 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Security_Cryptography_AsymmetricAlgorithm_ToXmlString__
                                 );
      FUN_0552aca4(lVar23,0);
      uVar31 = FUN_05fd7f88(*(undefined8 *)(in_stack_00000048 + 0x30),lVar21);
      if (lVar23 == 0) goto LAB_05fdad7c;
      *(undefined8 *)(lVar23 + 0x10) = uVar31;
      LeanTween__value();
      lVar25 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_Schema_Asttree_CompileXPath__);
      FUN_0400f984(lVar25,*(undefined8 *)Method_AssetInputExample_DoChangeThing__);
      plVar20 = (long *)(lVar23 + 0x18);
      *plVar20 = lVar25;
      LeanTween__value(plVar20,lVar25);
      iVar28 = 0;
      while( true ) {
        iVar32 = *(int *)(lVar21 + 0x294);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (iVar32 <= iVar28) break;
        lVar25 = *plVar20;
        uVar31 = FUN_05fd7aa8(*(undefined8 *)(in_stack_00000048 + 0x30),lVar21,iVar28);
        if (lVar25 == 0) goto LAB_05fdad7c;
        lVar24 = *(long *)(lVar25 + 0x10);
        lVar26 = *(long *)puVar7;
        *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
        if (lVar24 == 0) goto LAB_05fdad7c;
        uVar34 = *(uint *)(lVar25 + 0x18);
        if (uVar34 < *(uint *)(lVar24 + 0x18)) {
          *(uint *)(lVar25 + 0x18) = uVar34 + 1;
          *(undefined8 *)(lVar24 + (long)(int)uVar34 * 8 + 0x20) = uVar31;
          LeanTween__value();
        }
        else {
          FUN_040101ec(lVar25,uVar31,
                       *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
        }
        iVar28 = iVar28 + 1;
      }
      uVar31 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_UnityEngine_Assertions_Assert_IsNull<UIRAtlasAllocator_AreaNode>__
                                 );
      FUN_04de9e6c(uVar31,*(undefined8 *)
                           Method_UnityEngine_Assertions_Assert_IsNotNull<VisualElement>__);
      *(undefined8 *)(lVar23 + 0x20) = uVar31;
      LeanTween__value((undefined8 *)(lVar23 + 0x20),uVar31);
      *(long *)(lVar23 + 0x28) = lVar22;
      LeanTween__value((long *)(lVar23 + 0x28),lVar22);
      puVar8 = Method_AssetInputExample_DoPressedThing__;
      if (lVar22 == 0) goto LAB_05fdad7c;
      if (0 < *(int *)(lVar22 + 0x18)) {
        iVar28 = 0;
        do {
          uVar9 = FUN_03fb3b24(lVar22,iVar28,*(undefined8 *)PTR_DAT_069fe588);
          if (*in_stack_00000028 == 0) goto LAB_05fdad7c;
          lVar21 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar21 == 0) ||
             (FUN_041c332c(&stack0x00000350,lVar21,uVar9,*(undefined8 *)puVar8),
             in_stack_00000170 = lVar30, in_stack_00000178 = uVar14,
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
          lVar30 = in_stack_00000170;
          if ((*in_stack_00000028 == 0) ||
             (lVar21 = *(long *)(*in_stack_00000028 + 0x10), lVar21 == 0)) goto LAB_05fdad7c;
          FUN_041c3390(lVar21,uVar9,&stack0x00000350,
                       *(undefined8 *)Method_AssetInputExample_DoReleasedThing__);
          iVar28 = iVar28 + 1;
          in_stack_00000030 = in_stack_00000388;
        } while (iVar28 < *(int *)(lVar22 + 0x18));
      }
    }
    uVar29 = FUN_05fd2394(&stack0x000001b0);
    if ((uVar29 & 1) == 0) break;
LAB_05fda528:
    lVar21 = FUN_05fd233c(&stack0x000001b0);
    lVar22 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc3f8);
    FUN_03fb358c(lVar22,*(undefined8 *)PTR_DAT_069fc3f0);
    iVar28 = *(int *)(lVar21 + 0x298);
    if (iVar28 < *(int *)(lVar21 + 0x29c) + 1) {
      if (lVar22 == 0) goto LAB_05fdad7c;
      lVar23 = *unaff_x19;
      do {
        lVar25 = *(long *)(lVar22 + 0x10);
        *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
        if (lVar25 == 0) goto LAB_05fdad7c;
        uVar34 = *(uint *)(lVar22 + 0x18);
        if (uVar34 < *(uint *)(lVar25 + 0x18)) {
          *(uint *)(lVar22 + 0x18) = uVar34 + 1;
          *(int *)(lVar25 + (long)(int)uVar34 * 4 + 0x20) = iVar28;
        }
        else {
          FUN_03fb3e1c(lVar22,iVar28,
                       *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
          lVar23 = *unaff_x19;
        }
        iVar28 = iVar28 + 1;
      } while (iVar28 < *(int *)(lVar21 + 0x29c) + 1);
    }
  }
LAB_05fda840:
  lVar30 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar30 != 0) {
    iVar28 = 0;
    do {
      lVar30 = *(long *)(lVar30 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) + 0x135) & 1) ==
          0) {
        FUN_02dcfd18();
      }
      if (*(int *)(lVar30 + 8) <= iVar28) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar17 = (int *)FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar28,
                                    *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
      if (((*in_stack_00000028 == 0) || (lVar30 = *(long *)(*in_stack_00000028 + 0x10), lVar30 == 0)
          ) || (FUN_041c332c(&stack0x00000350,lVar30,*piVar17,
                             *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
               in_stack_00000388 == 0)) break;
      lVar30 = *(long *)(in_stack_00000388 + 0x10);
      if (lVar30 != 0) {
        lVar21 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_06dc4872 == '\0') {
          FUN_02d965b8(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                      );
          DAT_06dc4872 = '\x01';
        }
        puVar6 = Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
        if (lVar21 == 0) break;
        iVar32 = piVar17[10];
        uVar34 = piVar17[0xb];
        uVar29 = (ulong)uVar34;
        lVar23 = *(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
        ;
        lVar22 = *(long *)(lVar23 + 0x38);
        if (lVar22 == 0) {
          FUN_02dcfd74(lVar23);
          lVar22 = *(long *)(lVar23 + 0x38);
        }
        lVar21 = FUN_036ee4d8(*(undefined8 *)(lVar21 + 0x30),*(undefined8 *)(lVar22 + 0x10));
        if ((int)uVar34 < 0) {
          FUN_05508bc8(0);
        }
        else if (uVar34 != 0) {
          puVar13 = (undefined4 *)(lVar21 + (long)iVar32 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar21 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar21 == 0))
            goto LAB_05fdad7c;
            pcVar18 = (char *)FUN_05fdfe80(lVar21,*(undefined8 *)(puVar13 + -2),*puVar13,0);
            if (*pcVar18 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              iVar32 = *(int *)(pcVar18 + 4);
              plVar20 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02dcfd18(*(long *)(*(long *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                      + 0x20));
              }
              memcpy(&stack0x000000f0,(void *)(*plVar20 + (long)iVar32 * 0x80),0x80);
              if (in_stack_00000110 < 0) {
                FUN_05fde34c(&stack0x00000350,3,*piVar17,0);
                uVar14 = 0;
              }
              else {
                uVar14 = FUN_05fdf5d4(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                      *piVar17,0);
              }
              uVar31 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),piVar17,
                                    &stack0x000000f0,uVar14);
              in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar6,uVar31,0);
              uVar9 = in_stack_000000f0;
              lVar21 = *(long *)(lVar30 + 0x20);
              in_stack_000000e8 = 0;
              LeanTween__value(&stack0x000000e0,in_stack_000000e0);
              in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar14 == 0xc);
              if (lVar21 == 0) goto LAB_05fdad7c;
              FUN_04dec6b0(lVar21,uVar9,in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)
                            Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
            }
            uVar29 = uVar29 - 1;
            puVar13 = puVar13 + 3;
          } while (uVar29 != 0);
        }
        if (-1 < piVar17[8]) {
          lVar21 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_06dc4873 == '\0') {
            FUN_02d965b8(
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                        );
            DAT_06dc4873 = '\x01';
          }
          if (lVar21 == 0) break;
          iVar32 = piVar17[0xc];
          uVar34 = piVar17[0xd];
          lVar23 = *(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
          ;
          lVar22 = *(long *)(lVar23 + 0x38);
          if (lVar22 == 0) {
            FUN_02dcfd74(lVar23);
            lVar22 = *(long *)(lVar23 + 0x38);
          }
          lVar21 = FUN_036ee4ec(*(undefined8 *)(lVar21 + 0x38),*(undefined8 *)(lVar22 + 0x10));
          if ((int)uVar34 < 0) {
            FUN_05508bc8(0);
          }
          else if (uVar34 != 0) {
            uVar29 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
              puVar11 = (undefined8 *)(lVar21 + (long)iVar32 * 0xc + uVar29 * 0xc);
              in_stack_00000030 =
                   in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar11 + 1);
              lVar22 = FUN_05fdc35c(*(long *)(in_stack_00000048 + 0x30),*puVar11,in_stack_00000030,0
                                   );
              if (*(int *)(lVar22 + 8) != *piVar17) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar22 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar22 == 0))
                goto LAB_05fdad7c;
                lVar22 = FUN_05fdfe80(lVar22,*puVar11,*(undefined4 *)(puVar11 + 1),0);
                iVar3 = *(int *)(lVar22 + 8);
                if (0 < iVar3) {
                  iVar27 = 0;
                  do {
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar22 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar22 == 0)
                       ) goto LAB_05fdad7c;
                    uVar14 = *puVar11;
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
                    if (lVar23 == 0) goto LAB_05fdad7c;
                    if (*(uint *)(lVar23 + 0x18) <= *(uint *)(puVar11 + 1)) goto LAB_05fdada0;
                    piVar19 = (int *)FUN_042c8e28(lVar23 + (long)(int)*(uint *)(puVar11 + 1) * 8 +
                                                  0x20,iVar27 + ((int)((ulong)uVar14 >> 0x20) +
                                                                iVar1 * ((uint)uVar14 & 0xffff)) *
                                                                iVar2,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                                 );
                    lVar22 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar22 == 0) goto LAB_05fdad7c;
                    iVar1 = *piVar19;
                    plVar20 = *(long **)(lVar22 + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                    + 0x20) + 0x135) & 1) == 0) {
                      FUN_02dcfd18(*(long *)(*(long *)
                                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                            + 0x20));
                      lVar22 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar20 + (long)iVar1 * 0x80),0x80);
                    uVar9 = in_stack_00000060;
                    uVar14 = FUN_05fdf5d4(lVar22,piVar17[8],in_stack_00000060,0);
                    uVar31 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar17,uVar14);
                    in_stack_000000e0 =
                         FUN_05362cb4(*(undefined8 *)
                                       Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__
                                      ,uVar31,0);
                    lVar22 = *(long *)(lVar30 + 0x20);
                    in_stack_000000e8 = 0;
                    LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar14 == 0xc);
                    if (lVar22 == 0) goto LAB_05fdad7c;
                    FUN_04dec6b0(lVar22,uVar9,in_stack_000000e0,in_stack_000000e8,
                                 *(undefined8 *)
                                  Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
                    iVar27 = iVar27 + 1;
                  } while (iVar3 != iVar27);
                }
              }
              uVar29 = uVar29 + 1;
            } while (uVar29 != uVar34);
          }
        }
      }
      lVar30 = *(long *)(in_stack_00000048 + 0x30);
      iVar28 = iVar28 + 1;
    } while (lVar30 != 0);
  }
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


