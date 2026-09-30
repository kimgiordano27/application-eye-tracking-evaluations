/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$ProcessType
ENTRY_POINT: 0145b72c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 116
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Type propagation algorithm not settling */

undefined8
Meta_XR_ImmersiveDebugger_Manager_WatchManager__ProcessType(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  char cVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  ulong *puVar25;
  int *piVar26;
  undefined8 uVar27;
  long *plVar28;
  long unaff_x20;
  long unaff_x21;
  long lVar29;
  long unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined8 *unaff_x27;
  int unaff_w28;
  long *unaff_x29;
  undefined8 uVar30;
  undefined8 uVar31;
  float fVar32;
  ulong uVar33;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000040;
  long in_stack_00000058;
  long *in_stack_00000060;
  undefined8 in_stack_00000068;
  long *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c8;
  long in_stack_000000d0;
  undefined1 uStack00000000000000d8;
  undefined7 uStack00000000000000d9;
  
  do {
    (**(code **)(unaff_x21 + 0x18))
              ((unaff_s15 / (float)*(int *)(param_1 + 0x18)) * unaff_s14,
               *(undefined8 *)(unaff_x21 + 0x40),param_2,*(undefined8 *)(unaff_x21 + 0x28));
    do {
      if (3 < *(int *)(unaff_x24 + 0x30)) {
        uVar27 = *(undefined8 *)PTR_DAT_033f4f00;
        if (in_stack_00000060 == (long *)0x0) {
          uVar12 = 0;
        }
        else {
          if (in_stack_00000060 == (long *)0x0) goto LAB_0145d050;
          uVar12 = (**(code **)(*in_stack_00000060 + 0x168))
                             (in_stack_00000060,*(undefined8 *)(*in_stack_00000060 + 0x170));
        }
        uVar27 = FUN_015f5b28(uVar27,uVar12,0);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_00d32864(*unaff_x25);
        }
        FUN_02660dac(uVar27,0);
      }
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_0268b4e0(in_stack_00000060,0,0);
      if ((uVar13 & 1) != 0) {
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar27 = *(undefined8 *)StringLiteral_14312;
        goto LAB_0145c940;
      }
      lVar14 = FUN_0142fbb8(in_stack_00000060,0);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
      }
      uVar13 = FUN_0268b4e0(lVar14,0,0);
      if ((uVar13 & 1) != 0) {
        if (in_stack_00000060 == (long *)0x0) goto LAB_0145d050;
        uVar27 = FUN_0268b6ac(in_stack_00000060,0);
        uVar12 = *(undefined8 *)StringLiteral_3316;
        puVar20 = (undefined8 *)
                  Method_System_Runtime_CompilerServices_ReadOnlyCollectionBuilder<Expression>__ctor__
        ;
LAB_0145c910:
        uVar27 = FUN_01600424(uVar12,uVar27,*puVar20,0);
        lVar14 = *unaff_x25;
LAB_0145c928:
        iVar9 = *(int *)(lVar14 + 0xe0);
        goto joined_r0x0145c930;
      }
      lVar15 = FUN_01433b54(in_stack_00000060,0);
      if (lVar15 == 0) goto LAB_0145d050;
      if (*(long *)(lVar15 + 0x18) == 0) {
        if (in_stack_00000060 != (long *)0x0) {
          uVar27 = FUN_0268b6ac(in_stack_00000060,0);
          uVar12 = *(undefined8 *)StringLiteral_3316;
          puVar20 = (undefined8 *)
                    Method_System_Security_Cryptography_X509Certificates_X509Certificate_System_Runtime_Serialization_ISerializable_GetObjectData__
          ;
          goto LAB_0145c910;
        }
        goto LAB_0145d050;
      }
      if (lVar14 == 0) goto LAB_0145d050;
      uVar8 = FUN_02681c0c(lVar14,0);
      in_stack_00000070 = (long *)CONCAT44(in_stack_00000070._4_4_,uVar8);
      uVar13 = FUN_0129eff4(unaff_x26,&stack0x00000070,&stack0x000000d0,
                            *(undefined8 *)System_Collections_Generic_ICollection<Vertex>_TypeInfo);
      if ((uVar13 & 1) == 0) {
        uVar8 = FUN_02666048(lVar14,0);
        in_stack_000000d0 =
             FUN_00da4fb8(*(undefined8 *)
                           Method_System_Collections_Generic_List<VolumeComponent>_Add__,uVar8);
        iVar9 = FUN_02666048(lVar14,0);
        if (0 < iVar9) {
          lVar29 = 0;
          uVar13 = 0;
          do {
            if (in_stack_000000d0 == 0) goto LAB_0145d050;
            if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar13) goto LAB_0145d054;
            FUN_014344d8(lVar14,in_stack_000000d0 + lVar29 + 0x20,uVar13 & 0xffffffff,0,0);
            lVar24 = in_stack_000000d0;
            lVar23 = *(long *)(unaff_x20 + 0x10);
            if (lVar23 == 0) goto LAB_0145d050;
            if (*(char *)(lVar23 + 0x48) != '\0') {
              if (in_stack_000000d0 == 0) goto LAB_0145d050;
              if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0)
                  == 0) {
                thunk_FUN_00d32864();
              }
              uVar8 = Meta_XR_ImmersiveDebugger_Manager_WatchUtils__RegisterTexture
                                (lVar14,uVar13 & 0xffffffff);
              if (*(uint *)(lVar24 + 0x18) <= uVar13) goto LAB_0145d054;
              *(undefined4 *)(lVar24 + lVar29 + 0x34) = uVar8;
              lVar23 = *(long *)(unaff_x20 + 0x10);
              if (lVar23 == 0) goto LAB_0145d050;
            }
            lVar24 = in_stack_000000d0;
            if (*(char *)(lVar23 + 0x27) != '\0') {
              if (in_stack_000000d0 == 0) goto LAB_0145d050;
              if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar13) goto LAB_0145d054;
              if (*(char *)(in_stack_000000d0 + lVar29 + 0x32) == '\0') {
                in_stack_00000070 = (long *)0x0;
                in_stack_00000078 = 0;
                FUN_0268834c(0,0,&stack0x00000070,0);
                if (*(uint *)(lVar24 + 0x18) <= uVar13) goto LAB_0145d054;
                lVar24 = lVar24 + lVar29;
                *(undefined8 *)(lVar24 + 0x28) = in_stack_00000078;
                *(long **)(lVar24 + 0x20) = in_stack_00000070;
                uVar27 = *(undefined8 *)System_Linq_Expressions_IArgumentProvider_TypeInfo;
                if (in_stack_00000060 == (long *)0x0) {
                  uVar12 = 0;
                }
                else {
                  if (in_stack_00000060 == (long *)0x0) goto LAB_0145d050;
                  uVar12 = (**(code **)(*in_stack_00000060 + 0x168))
                                     (in_stack_00000060,*(undefined8 *)(*in_stack_00000060 + 0x170))
                  ;
                }
                uVar27 = FUN_01600424(uVar27,uVar12,
                                      *(undefined8 *)
                                       Method_System_Collections_Generic_List<SerializationFieldInfo>_Add__
                                      ,0);
                if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*unaff_x25);
                }
                FUN_02661754(uVar27,0);
              }
            }
            uVar13 = uVar13 + 1;
            iVar9 = FUN_02666048(lVar14,0);
            lVar29 = lVar29 + 0x18;
          } while ((long)uVar13 < (long)iVar9);
        }
        uVar8 = FUN_02681c0c(lVar14,0);
        in_stack_00000070 = (long *)CONCAT44(in_stack_00000070._4_4_,uVar8);
        FUN_0129a054(unaff_x26,&stack0x00000070,in_stack_000000d0,*(undefined8 *)StringLiteral_5001)
        ;
      }
      if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0145d050;
      if ((*(char *)(*(long *)(unaff_x20 + 0x10) + 0x27) != '\0') &&
         (4 < *(int *)(unaff_x24 + 0x30))) {
        plVar16 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,8);
        if (plVar16 == (long *)0x0) goto LAB_0145d050;
        if ((*(long *)PTR_DAT_033f6398 != 0) &&
           (lVar14 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f6398,*(undefined8 *)(*plVar16 + 0x40)),
           lVar14 == 0)) goto LAB_0145d058;
        if ((int)plVar16[3] == 0) goto LAB_0145d054;
        if (in_stack_00000060 != (long *)0x0) {
          in_stack_00000020 = in_stack_00000060;
        }
        plVar16[4] = *(long *)PTR_DAT_033f6398;
        lVar14 = 0;
        if (in_stack_00000060 != (long *)0x0) {
          if (in_stack_00000020 == (long *)0x0) goto LAB_0145d050;
          lVar14 = (**(code **)(*in_stack_00000020 + 0x168))
                             (in_stack_00000020,*(undefined8 *)(*in_stack_00000020 + 0x170));
          if ((lVar14 != 0) &&
             (lVar29 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar29 == 0))
          goto LAB_0145d058;
        }
        uVar10 = *(uint *)(plVar16 + 3);
        if (uVar10 < 2) goto LAB_0145d054;
        plVar16[5] = lVar14;
        if (*(long *)
             Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector__
            != 0) {
          lVar14 = thunk_FUN_00d6225c(*(long *)
                                       Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector__
                                      ,*(undefined8 *)(*plVar16 + 0x40));
          if (lVar14 == 0) goto LAB_0145d058;
          uVar10 = *(uint *)(plVar16 + 3);
        }
        if (uVar10 < 3) goto LAB_0145d054;
        plVar16[6] = *(long *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector__
        ;
        if (in_stack_000000d0 == 0) goto LAB_0145d050;
        in_stack_000000c8._4_4_ = (undefined4)*(undefined8 *)(in_stack_000000d0 + 0x18);
        lVar14 = FUN_0176eb1c((long)&stack0x000000c8 + 4,0);
        if ((lVar14 != 0) &&
           (lVar29 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar29 == 0))
        goto LAB_0145d058;
        uVar10 = *(uint *)(plVar16 + 3);
        if (uVar10 < 4) goto LAB_0145d054;
        plVar16[7] = lVar14;
        if (*(long *)Method_UnityEngine_InputSystem_InputActionMap_IsUsableWithDevice__ != 0) {
          lVar14 = thunk_FUN_00d6225c(*(long *)
                                       Method_UnityEngine_InputSystem_InputActionMap_IsUsableWithDevice__
                                      ,*(undefined8 *)(*plVar16 + 0x40));
          if (lVar14 == 0) goto LAB_0145d058;
          uVar10 = *(uint *)(plVar16 + 3);
        }
        if (uVar10 < 5) goto LAB_0145d054;
        plVar16[8] = *(long *)Method_UnityEngine_InputSystem_InputActionMap_IsUsableWithDevice__;
        if (in_stack_000000d0 == 0) goto LAB_0145d050;
        if (*(int *)(in_stack_000000d0 + 0x18) == 0) goto LAB_0145d054;
        lVar14 = in_stack_000000d0 + 0x30;
        if (*(int *)(*(long *)StringLiteral_9958 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar14 = FUN_016f5f58(lVar14,0);
        if ((lVar14 != 0) &&
           (lVar29 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar29 == 0))
        goto LAB_0145d058;
        uVar10 = *(uint *)(plVar16 + 3);
        if (uVar10 < 6) goto LAB_0145d054;
        plVar16[9] = lVar14;
        if (*(long *)Method_System_Threading_WaitHandle_ThrowAbandonedMutexException__ != 0) {
          lVar14 = thunk_FUN_00d6225c(*(long *)
                                       Method_System_Threading_WaitHandle_ThrowAbandonedMutexException__
                                      ,*(undefined8 *)(*plVar16 + 0x40));
          if (lVar14 == 0) goto LAB_0145d058;
          uVar10 = *(uint *)(plVar16 + 3);
        }
        if (uVar10 < 7) goto LAB_0145d054;
        plVar16[10] = *(long *)Method_System_Threading_WaitHandle_ThrowAbandonedMutexException__;
        if (in_stack_000000d0 == 0) goto LAB_0145d050;
        if (*(int *)(in_stack_000000d0 + 0x18) == 0) goto LAB_0145d054;
        in_stack_000000b8 = *(undefined8 *)(in_stack_000000d0 + 0x28);
        in_stack_000000b0 = *(undefined8 *)(in_stack_000000d0 + 0x20);
        lVar14 = FUN_02688894(&stack0x000000b0,0);
        if ((lVar14 != 0) &&
           (lVar29 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar29 == 0))
        goto LAB_0145d058;
        if (*(uint *)(plVar16 + 3) < 8) goto LAB_0145d054;
        plVar16[0xb] = lVar14;
        uVar27 = FUN_01600844(plVar16,0);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_00d32864(*unaff_x25);
        }
        FUN_02660dac(uVar27,0);
      }
      if (0 < *(int *)(lVar15 + 0x18)) {
        uVar13 = 0;
        do {
          lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                       Method_Obi_ObiConstraints<ObiAerodynamicConstraintsBatch>_GetBatchCount__
                                     );
          if (lVar14 == 0) goto LAB_0145d050;
          FUN_017b46ec(lVar14,0);
          *(long *)(lVar14 + 0x18) = unaff_x20;
          lVar29 = *(long *)(unaff_x24 + 0x28);
          if (lVar29 != 0) {
            in_stack_00000070 = (long *)CONCAT44(in_stack_00000070._4_4_,(int)uVar13);
            uVar27 = thunk_FUN_00d61fa0(*(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                        ,&stack0x00000070);
            uVar27 = FUN_01600b5c(*(undefined8 *)System_Collections_Generic_IList<string>_TypeInfo,
                                  in_stack_00000060,uVar27,0);
            if (((*(long *)(lVar14 + 0x18) == 0) ||
                (lVar24 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar24 == 0)) ||
               (lVar24 = *(long *)(lVar24 + 0x60), lVar24 == 0)) goto LAB_0145d050;
            (**(code **)(lVar29 + 0x18))
                      ((unaff_s15 / (float)*(int *)(lVar24 + 0x18)) * unaff_s14,
                       *(undefined8 *)(lVar29 + 0x40),uVar27,*(undefined8 *)(lVar29 + 0x28));
          }
          if (*(uint *)(lVar15 + 0x18) <= uVar13) goto LAB_0145d054;
          if ((*(long *)(lVar14 + 0x18) == 0) ||
             (lVar29 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar29 == 0)) goto LAB_0145d050;
          lVar29 = *(long *)(lVar29 + 0x68);
          lVar24 = *(long *)(lVar15 + uVar13 * 8 + 0x20);
          if ((lVar29 == 0) ||
             (uVar17 = FUN_01322618(lVar29,lVar24,
                                    *(undefined8 *)
                                     System_Collections_Generic_IEnumerable<KeyValuePair<int,_int>>_TypeInfo
                                   ), (uVar17 & 1) != 0)) {
            if ((in_stack_00000040._4_1_ & 1) == 0) {
              if (in_stack_000000d0 == 0) goto LAB_0145d050;
              if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar13) goto LAB_0145d054;
              cVar21 = *(char *)(in_stack_000000d0 + uVar13 * 0x18 + 0x30);
            }
            else {
              cVar21 = '\x01';
            }
            in_stack_00000040._4_1_ = cVar21 != '\0';
            if ((lVar24 == 0) || (lVar29 = FUN_0268b6ac(lVar24,0), lVar29 == 0)) goto LAB_0145d050;
            uVar17 = FUN_0160472c(lVar29,*(undefined8 *)
                                          Method_TMPro_TMP_TextProcessingStack<MaterialReference>__ctor__
                                  ,0);
            if ((uVar17 & 1) != 0) {
              if (in_stack_00000060 == (long *)0x0) goto LAB_0145d050;
              uVar27 = FUN_0268b6ac(in_stack_00000060,0);
              uVar27 = FUN_01600424(*(undefined8 *)
                                     Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass8_0_<DOLocalPath>b__0__
                                    ,uVar27,*(undefined8 *)
                                             Method_Oculus_Platform_Message<CowatchingState>_get_Data__
                                    ,0);
              lVar14 = *(long *)StringLiteral_302;
              goto LAB_0145c928;
            }
            if ((*(long *)(lVar14 + 0x18) == 0) ||
               (lVar29 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar29 == 0))
            goto LAB_0145d050;
            if ((*(char *)(lVar29 + 0x27) != '\0') &&
               ((uVar17 = FUN_01434ca8(lVar15,0), (uVar17 & 1) == 0 &&
                (1 < *(int *)(unaff_x24 + 0x30))))) {
              if (in_stack_00000060 == (long *)0x0) goto LAB_0145d050;
              uVar27 = FUN_0268b6ac(in_stack_00000060,0);
              uVar27 = FUN_01600424(*(undefined8 *)StringLiteral_3316,uVar27,
                                    *(undefined8 *)
                                     Method_Unity_Burst_Intrinsics_Arm_Neon_vmulq_laneq_f32__,0);
              if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                thunk_FUN_00d32864(*(long *)StringLiteral_302);
              }
              FUN_02661754(uVar27,0);
            }
            if (((*(long *)(lVar14 + 0x18) == 0) ||
                (lVar29 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar29 == 0)) ||
               (lVar29 = *(long *)(lVar29 + 0x70), lVar29 == 0)) goto LAB_0145d050;
            plVar16 = (long *)FUN_00da4fb8(*(undefined8 *)
                                            Method_UnityEngine_XR_ARSubsystems_XRCpuImage_ValidateConversionParamsAndThrow__
                                           ,*(undefined4 *)(lVar29 + 0x18));
            lVar29 = *(long *)(lVar14 + 0x18);
            if (lVar29 == 0) goto LAB_0145d050;
            uVar17 = 0;
            while( true ) {
              lVar29 = *(long *)(lVar29 + 0x10);
              if ((lVar29 == 0) || (*(long *)(lVar29 + 0x70) == 0)) goto LAB_0145d050;
              if ((long)*(int *)(*(long *)(lVar29 + 0x70) + 0x18) <= (long)uVar17) break;
              if (DAT_03774e1e == '\0') {
                thunk_FUN_00d48444();
                DAT_03774e1e = '\x01';
              }
              puVar25 = *(ulong **)(*unaff_x29 + 0xb8);
              in_stack_000000a8 = puVar25[1];
              if (DAT_03774d77 == '\0') {
                thunk_FUN_00d48444();
                DAT_03774d77 = '\x01';
                puVar25 = *(ulong **)(*unaff_x29 + 0xb8);
              }
              in_stack_000000a0 = *puVar25;
              if ((((*(long *)(lVar14 + 0x18) == 0) ||
                   (lVar29 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar29 == 0)) ||
                  (lVar29 = *(long *)(lVar29 + 0x70), lVar29 == 0)) ||
                 (FUN_0132138c(lVar29,uVar17 & 0xffffffff,&stack0x00000070,*unaff_x27),
                 in_stack_00000070 == (long *)0x0)) goto LAB_0145d050;
              uVar18 = FUN_0267e21c(lVar24,in_stack_00000070[2],0);
              if ((uVar18 & 1) == 0) {
                uVar8 = 0;
                plVar19 = (long *)0x0;
                fVar32 = 0.0;
              }
              else {
                if (((*(long *)(lVar14 + 0x18) == 0) ||
                    (lVar29 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar29 == 0)) ||
                   ((lVar29 = *(long *)(lVar29 + 0x90), lVar29 == 0 ||
                    (lVar29 = FUN_02666a34(lVar29,0), lVar29 == 0)))) goto LAB_0145d050;
                uVar27 = FUN_0268b6ac(lVar29,0);
                if (((*(long *)(lVar14 + 0x18) == 0) ||
                    (lVar29 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar29 == 0)) ||
                   ((lVar29 = *(long *)(lVar29 + 0x70), lVar29 == 0 ||
                    (FUN_0132138c(lVar29,uVar17 & 0xffffffff,&stack0x00000070,*unaff_x27),
                    in_stack_00000070 == (long *)0x0)))) goto LAB_0145d050;
                lVar29 = in_stack_00000070[2];
                if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0)
                    == 0) {
                  thunk_FUN_00d32864();
                }
                plVar19 = (long *)FUN_014578b8(uVar27,lVar24,lVar29);
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864(*(long *)
                                      System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                    );
                }
                uVar18 = FUN_02681b9c(plVar19,0,0);
                if ((uVar18 & 1) == 0) {
                  uVar8 = 0;
                  plVar19 = (long *)0x0;
                }
                else {
                  if ((plVar19 == (long *)0x0) ||
                     (*plVar19 != *(long *)SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo
                     )) {
                    if (in_stack_00000060 == (long *)0x0) goto LAB_0145d050;
                    uVar27 = FUN_0268b6ac(in_stack_00000060,0);
                    uVar27 = FUN_01600424(*(undefined8 *)
                                           UnityEngine_UIElements_VisualElement_TypeData_TypeInfo,
                                          uVar27,*(undefined8 *)
                                                  Method_System_Diagnostics_Contracts_Contract_ForAll<Type>__
                                          ,0);
                    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*(long *)StringLiteral_302);
                    }
                    FUN_026610e4(uVar27,0);
                    lVar14 = *(long *)(in_stack_00000058 + 0x38);
                    goto joined_r0x0145c834;
                  }
                  uVar10 = FUN_026709f8(plVar19,0);
                  uVar18 = FUN_0269e56c(0);
                  if ((uVar18 & 1) == 0) {
                    plVar28 = *(long **)(in_stack_00000058 + 0x40);
                    if (plVar28 == (long *)0x0) {
                      uVar18 = 0;
                      uVar8 = 0;
                    }
                    else {
                      if (*plVar19 !=
                          *(long *)SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo)
                      goto Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawPoint;
                      lVar29 = *plVar28;
                      uVar18 = (ulong)*(ushort *)(lVar29 + 0x12a);
                      if (uVar18 != 0) {
                        piVar26 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar26 + -2) == *(long *)StringLiteral_2590) {
                            puVar20 = (undefined8 *)(lVar29 + (long)(*piVar26 + 7) * 0x10 + 0x138);
                            goto LAB_0145c1b8;
                          }
                          uVar18 = uVar18 - 1;
                          piVar26 = piVar26 + 4;
                        } while (uVar18 != 0);
                      }
                      puVar20 = (undefined8 *)FUN_00d59724(plVar28,*(long *)StringLiteral_2590,7);
LAB_0145c1b8:
                      uVar18 = (*(code *)*puVar20)(plVar28,plVar19,puVar20[1]);
                      uVar8 = 1;
                      if ((uVar18 & 1) != 0) {
                        uVar8 = 0xffffffff;
                      }
                    }
                  }
                  else {
                    uVar18 = 0;
                    uVar8 = 0;
                  }
                  if (((uVar18 & 1) != 0) ||
                     ((uVar10 | 2) != 3 && (uVar10 != 0xe && (uVar10 | 1) != 5))) {
                    uVar18 = FUN_0269e56c(0);
                    lVar29 = *(long *)(lVar14 + 0x18);
                    if ((uVar18 & 1) == 0) {
                      if (lVar29 == 0) goto LAB_0145d050;
                    }
                    else {
                      if ((lVar29 == 0) || (lVar23 = *(long *)(lVar29 + 0x10), lVar23 == 0))
                      goto LAB_0145d050;
                      if ((*(int *)(lVar23 + 0x88) == 0) &&
                         ((*(int *)(lVar23 + 0x30) != 2 && (*(int *)(lVar23 + 0x30) != 5)))) {
                        plVar16 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,7);
                        puVar3 = StringLiteral_302;
                        if (plVar16 == (long *)0x0) goto LAB_0145d050;
                        if ((*(long *)StringLiteral_3316 != 0) &&
                           (lVar14 = thunk_FUN_00d6225c(*(long *)StringLiteral_3316,
                                                        *(undefined8 *)(*plVar16 + 0x40)),
                           lVar14 == 0)) goto LAB_0145d058;
                        if ((int)plVar16[3] == 0) goto LAB_0145d054;
                        plVar16[4] = *(long *)StringLiteral_3316;
                        if (in_stack_00000060 == (long *)0x0) goto LAB_0145d050;
                        lVar14 = FUN_0268b6ac(in_stack_00000060,0);
                        if ((lVar14 != 0) &&
                           (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar16 + 0x40)),
                           lVar15 == 0)) goto LAB_0145d058;
                        uVar22 = *(uint *)(plVar16 + 3);
                        if (uVar22 < 2) goto LAB_0145d054;
                        plVar16[5] = lVar14;
                        puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vaddl_u32__;
                        if (*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaddl_u32__ != 0) {
                          lVar14 = thunk_FUN_00d6225c(*(long *)
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vaddl_u32__
                                                  ,*(undefined8 *)(*plVar16 + 0x40));
                          if (lVar14 == 0) goto LAB_0145d058;
                          uVar22 = *(uint *)(plVar16 + 3);
                        }
                        if (uVar22 < 3) goto LAB_0145d054;
                        plVar16[6] = *(long *)puVar4;
                        lVar14 = FUN_0268b6ac(plVar19,0);
                        if ((lVar14 != 0) &&
                           (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar16 + 0x40)),
                           lVar15 == 0)) goto LAB_0145d058;
                        uVar22 = *(uint *)(plVar16 + 3);
                        if (uVar22 < 4) goto LAB_0145d054;
                        plVar16[7] = lVar14;
                        puVar4 = System_TimeZoneInfo_AdjustmentRule___var;
                        if (*(long *)System_TimeZoneInfo_AdjustmentRule___var != 0) {
                          lVar14 = thunk_FUN_00d6225c(*(long *)
                                                  System_TimeZoneInfo_AdjustmentRule___var,
                                                  *(undefined8 *)(*plVar16 + 0x40));
                          if (lVar14 == 0) goto LAB_0145d058;
                          uVar22 = *(uint *)(plVar16 + 3);
                        }
                        if (uVar22 < 5) goto LAB_0145d054;
                        plVar16[8] = *(long *)puVar4;
                        in_stack_00000080 = CONCAT44(in_stack_00000080._4_4_,uVar10);
                        in_stack_00000070 =
                             *(long **)
                              Method_System_Collections_Generic_HashSet<IXRInteractor>_Add__;
                        in_stack_00000078 = 0xffffffffffffffff;
                        lVar14 = FUN_017a7f78(&stack0x00000070,0);
                        if ((lVar14 != 0) &&
                           (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar16 + 0x40)),
                           lVar15 == 0)) goto LAB_0145d058;
                        uVar10 = *(uint *)(plVar16 + 3);
                        if (uVar10 < 6) goto LAB_0145d054;
                        plVar16[9] = lVar14;
                        puVar4 = System_Func<double>_TypeInfo;
                        if (*(long *)System_Func<double>_TypeInfo != 0) {
                          lVar14 = thunk_FUN_00d6225c(*(long *)System_Func<double>_TypeInfo,
                                                      *(undefined8 *)(*plVar16 + 0x40));
                          if (lVar14 == 0) goto LAB_0145d058;
                          uVar10 = *(uint *)(plVar16 + 3);
                        }
                        if (uVar10 < 7) goto LAB_0145d054;
                        plVar16[10] = *(long *)puVar4;
                        uVar27 = FUN_01600844(plVar16,0);
                        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                          thunk_FUN_00d32864(*(long *)puVar3);
                        }
                        FUN_026610e4(uVar27,0);
                        lVar14 = *(long *)(in_stack_00000058 + 0x38);
                        goto joined_r0x0145c834;
                      }
                    }
                    if (((*(long *)(lVar29 + 0x10) == 0) ||
                        (lVar29 = *(long *)(*(long *)(lVar29 + 0x10) + 0x70), lVar29 == 0)) ||
                       (FUN_0132138c(lVar29,uVar17 & 0xffffffff,&stack0x00000070,*unaff_x27),
                       in_stack_00000070 == (long *)0x0)) goto LAB_0145d050;
                    plVar19 = (long *)FUN_0267dbbc(lVar24,in_stack_00000070[2],0);
                    if ((plVar19 != (long *)0x0) &&
                       (*plVar19 !=
                        *(long *)SpaceShipCommunicationModule_<ScrambleHint>d__14_TypeInfo)) {
Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawPoint:
                    /* WARNING: Subroutine does not return */
                      FUN_00da544c(plVar19);
                    }
                  }
                }
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar18 = FUN_02681b9c(plVar19,0,0);
                fVar32 = 0.0;
                if ((uVar18 & 1) != 0) {
                  if ((*(long *)(lVar14 + 0x18) == 0) ||
                     (lVar29 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar29 == 0))
                  goto LAB_0145d050;
                  if (*(char *)(lVar29 + 0x48) != '\0') {
                    if (in_stack_000000d0 == 0) goto LAB_0145d050;
                    if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar17) goto LAB_0145d054;
                    if (*(float *)(in_stack_000000d0 + uVar17 * 0x18 + 0x34) != 0.0) {
                      if (plVar19 == (long *)0x0) goto LAB_0145d050;
                      iVar9 = (**(code **)(*plVar19 + 0x188))
                                        (plVar19,*(undefined8 *)(*plVar19 + 400));
                      iVar11 = (**(code **)(*plVar19 + 0x1a8))
                                         (plVar19,*(undefined8 *)(*plVar19 + 0x1b0));
                      if (in_stack_000000d0 == 0) goto LAB_0145d050;
                      if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar17) goto LAB_0145d054;
                      fVar32 = (float)(iVar11 * iVar9) /
                               *(float *)(in_stack_000000d0 + uVar17 * 0x18 + 0x34);
                    }
                  }
                }
                if ((((*(long *)(lVar14 + 0x18) == 0) ||
                     (lVar29 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar29 == 0)) ||
                    (lVar29 = *(long *)(lVar29 + 0x70), lVar29 == 0)) ||
                   (FUN_0132138c(lVar29,uVar17 & 0xffffffff,&stack0x00000070,*unaff_x27),
                   in_stack_00000070 == (long *)0x0)) goto LAB_0145d050;
                lVar29 = in_stack_00000070[2];
                if (*(int *)(*(long *)Method_System_Collections_Generic_List<Material>_Add__ + 0xe0)
                    == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_01459f0c(lVar24,lVar29,&stack0x000000a0,&stack0x000000a8);
              }
              uVar18 = in_stack_000000a0 & 0xffffffff;
              uVar6 = in_stack_000000a0._4_4_;
              uVar33 = in_stack_000000a8 & 0xffffffff;
              uVar7 = in_stack_000000a8._4_4_;
              lVar29 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_2762);
              if ((lVar29 == 0) ||
                 (FUN_01443e40(uVar18,uVar6,uVar33,uVar7,fVar32,lVar29,plVar19,uVar8,0),
                 plVar16 == (long *)0x0)) goto LAB_0145d050;
              lVar23 = thunk_FUN_00d6225c(lVar29,*(undefined8 *)(*plVar16 + 0x40));
              if (lVar23 == 0) goto LAB_0145d058;
              if (*(uint *)(plVar16 + 3) <= uVar17) goto LAB_0145d054;
              plVar16[uVar17 + 4] = lVar29;
              lVar29 = *(long *)(lVar14 + 0x18);
              uVar17 = uVar17 + 1;
              if (lVar29 == 0) goto LAB_0145d050;
            }
            if ((*(long *)(lVar29 + 0x50) == 0) ||
               (FUN_01449654(*(long *)(lVar29 + 0x50),*(undefined8 *)(lVar29 + 0x90),lVar24,0),
               in_stack_000000d0 == 0)) goto LAB_0145d050;
            if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar13) goto LAB_0145d054;
            uVar27 = FUN_026884c4(in_stack_000000d0 + uVar13 * 0x18 + 0x20,0);
            if (in_stack_000000d0 == 0) goto LAB_0145d050;
            if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar13) goto LAB_0145d054;
            uVar12 = FUN_026884d4(in_stack_000000d0 + uVar13 * 0x18 + 0x20,0);
            if (in_stack_000000d0 == 0) goto LAB_0145d050;
            if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar13) goto LAB_0145d054;
            uVar30 = FUN_02688390(in_stack_000000d0 + uVar13 * 0x18 + 0x20,0);
            if (in_stack_000000d0 == 0) goto LAB_0145d050;
            if (*(uint *)(in_stack_000000d0 + 0x18) <= uVar13) goto LAB_0145d054;
            uVar31 = FUN_026883a0(in_stack_000000d0 + uVar13 * 0x18 + 0x20,0);
            if ((*(long *)(lVar14 + 0x18) == 0) ||
               (lVar29 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar29 == 0))
            goto LAB_0145d050;
            uVar1 = *(undefined1 *)(lVar29 + 0x27);
            lVar29 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_13654);
            if (lVar29 == 0) goto LAB_0145d050;
            FUN_01444820(uVar30,uVar31,uVar27,uVar12,lVar29,plVar16,uVar1,0);
            *(long *)(lVar14 + 0x10) = lVar29;
            in_stack_00000078 = 0;
            in_stack_00000070 = (long *)0x0;
            in_stack_00000088 = 0;
            in_stack_00000080 = 0;
            FUN_01431554(uVar30,uVar31,uVar27,uVar12,&stack0x00000070,0);
            if ((*(long *)(lVar14 + 0x18) == 0) ||
               (lVar29 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar29 == 0))
            goto LAB_0145d050;
            cVar21 = *(char *)(lVar29 + 0x27);
            lVar29 = thunk_FUN_00d62348(*(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                       );
            if (lVar29 == 0) goto LAB_0145d050;
            FUN_01444454(in_stack_00000070,in_stack_00000078,in_stack_00000080,in_stack_00000088,
                         lVar29,cVar21 != '\0',lVar24,0);
            if (((*(long *)(lVar14 + 0x10) == 0) ||
                (lVar24 = *(long *)(*(long *)(lVar14 + 0x10) + 0x18), lVar24 == 0)) ||
               (lVar24 = *(long *)(lVar24 + 0x10), lVar24 == 0)) goto LAB_0145d050;
            FUN_00bc03b0(lVar24,lVar29,*(undefined8 *)PTR_DAT_033eb210);
            if ((*(long *)(lVar14 + 0x18) == 0) ||
               (lVar24 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar24 == 0))
            goto LAB_0145d050;
            lVar23 = *(long *)(lVar24 + 0x58);
            lVar24 = thunk_FUN_00d62348(*(undefined8 *)
                                         Method_Newtonsoft_Json_Utilities_CollectionUtils_IsNullOrEmpty<JsonConverter>__
                                       );
            if ((lVar24 == 0) ||
               (FUN_0136b58c(lVar24,lVar14,
                             *(undefined8 *)Method_PhoneDialtoneController_MuteDialtone__,0),
               lVar23 == 0)) goto LAB_0145d050;
            FUN_01322b20(lVar23,lVar24,&stack0x000000d8,
                         *(undefined8 *)Method_ShowPromptWhenTeleportPadsUsed_TeleportPointEntered__
                        );
            lVar24 = CONCAT71(uStack00000000000000d9,uStack00000000000000d8);
            if (lVar24 == 0) {
              if (((*(long *)(lVar14 + 0x18) == 0) ||
                  (lVar24 = *(long *)(*(long *)(lVar14 + 0x18) + 0x10), lVar24 == 0)) ||
                 (lVar24 = *(long *)(lVar24 + 0x58), lVar24 == 0)) goto LAB_0145d050;
              FUN_00bc0938(lVar24,*(undefined8 *)(lVar14 + 0x10),
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary<MeshId,_MeshInfo>_TryGetValue__
                          );
              lVar24 = *(long *)(lVar14 + 0x10);
              if (lVar24 == 0) goto LAB_0145d050;
            }
            else {
              *(long *)(lVar14 + 0x10) = lVar24;
            }
            if ((*(long *)(lVar24 + 0x18) == 0) ||
               (lVar24 = *(long *)(*(long *)(lVar24 + 0x18) + 0x10), lVar24 == 0))
            goto LAB_0145d050;
            uVar17 = FUN_01322618(lVar24,lVar29,
                                  *(undefined8 *)
                                   Method_Meta_WitAi_Json_WitResponseNode_SaveToCompressedStream__);
            if ((uVar17 & 1) == 0) {
              if (((*(long *)(lVar14 + 0x10) == 0) ||
                  (lVar24 = *(long *)(*(long *)(lVar14 + 0x10) + 0x18), lVar24 == 0)) ||
                 (lVar24 = *(long *)(lVar24 + 0x10), lVar24 == 0)) goto LAB_0145d050;
              FUN_00bc03b0(lVar24,lVar29,*(undefined8 *)PTR_DAT_033eb210);
            }
            if (((*(long *)(lVar14 + 0x10) == 0) ||
                (lVar29 = *(long *)(*(long *)(lVar14 + 0x10) + 0x18), lVar29 == 0)) ||
               (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)) goto LAB_0145d050;
            uVar17 = FUN_01322618(lVar29,in_stack_00000060,
                                  *(undefined8 *)
                                   Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__
                                 );
            unaff_x24 = in_stack_00000058;
            if ((uVar17 & 1) == 0) {
              if (((*(long *)(lVar14 + 0x10) == 0) ||
                  (lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + 0x18), lVar14 == 0)) ||
                 (lVar14 = *(long *)(lVar14 + 0x18), lVar14 == 0)) goto LAB_0145d050;
              FUN_00ac8520(lVar14,in_stack_00000060,*(undefined8 *)StringLiteral_1415);
              if (*(long *)(in_stack_00000058 + 0x48) == 0) goto LAB_0145d050;
              uVar17 = FUN_01322618(*(long *)(in_stack_00000058 + 0x48),in_stack_00000060,
                                    *(undefined8 *)
                                     Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__
                                   );
              if ((uVar17 & 1) == 0) {
                if (*(long *)(in_stack_00000058 + 0x48) == 0) goto LAB_0145d050;
                FUN_00ac8520(*(long *)(in_stack_00000058 + 0x48),in_stack_00000060,
                             *(undefined8 *)StringLiteral_1415);
              }
            }
          }
          uVar13 = uVar13 + 1;
        } while ((long)uVar13 < (long)*(int *)(lVar15 + 0x18));
      }
      puVar4 = StringLiteral_7763;
      unaff_x25 = (long *)StringLiteral_302;
      puVar3 = PTR_DAT_033ee2d8;
      lVar14 = *(long *)(unaff_x20 + 0x10);
      unaff_w28 = unaff_w28 + 1;
      if ((lVar14 == 0) || (lVar15 = *(long *)(lVar14 + 0x60), lVar15 == 0)) goto LAB_0145d050;
      if (*(int *)(lVar15 + 0x18) <= unaff_w28) {
        if (3 < *(int *)(unaff_x24 + 0x30)) {
          if (*(long *)(lVar14 + 0x58) == 0) goto LAB_0145d050;
          in_stack_00000070 =
               (long *)CONCAT44(in_stack_00000070._4_4_,
                                *(undefined4 *)(*(long *)(lVar14 + 0x58) + 0x18));
          uVar27 = thunk_FUN_00d61fa0(*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                                      ,&stack0x00000070);
          puVar5 = StringLiteral_9958;
          if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0145d050;
          uStack00000000000000d8 = *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + 0x27);
          uVar12 = thunk_FUN_00d61fa0(*(undefined8 *)StringLiteral_9958,&stack0x000000d8);
          if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0145d050;
          in_stack_00000068._4_1_ = *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + 0x49);
          uVar30 = thunk_FUN_00d61fa0(*(undefined8 *)puVar5,(long)&stack0x00000068 + 4);
          uVar27 = FUN_01600ba0(*(undefined8 *)Method_System_Threading_Tasks_Task_Run<int>__,uVar27,
                                uVar12,uVar30,0);
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_00d32864(*unaff_x25);
          }
          FUN_02660dac(uVar27,0);
          lVar14 = *(long *)(unaff_x20 + 0x10);
          if (lVar14 == 0) goto LAB_0145d050;
        }
        if (*(long *)(lVar14 + 0x58) == 0) goto LAB_0145d050;
        if (*(int *)(*(long *)(lVar14 + 0x58) + 0x18) == 0) {
          if ((*(long *)(lVar14 + 0x68) == 0) ||
             (plVar16 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,
                                             *(undefined4 *)(*(long *)(lVar14 + 0x68) + 0x18)),
             puVar5 = 
             Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_<>c__DisplayClass3_0_<CreateWireframeNotSupportedWarning>b__0__
             , puVar3 = UnityEngine_XR_InputTrackingState_TypeInfo, plVar16 == (long *)0x0))
          goto LAB_0145d050;
          if ((int)plVar16[3] < 1) goto LAB_0145cee8;
          uVar13 = 0;
          goto LAB_0145ce80;
        }
        cVar21 = *(char *)(lVar14 + 0x49);
        uVar27 = *(undefined8 *)(lVar14 + 0x50);
        cVar2 = *(char *)(lVar14 + 0x27);
        uVar8 = *(undefined4 *)(unaff_x24 + 0x30);
        lVar14 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f0098);
        if (lVar14 == 0) goto LAB_0145d050;
        FUN_014467b4(lVar14,cVar21 != '\0',uVar27,cVar2 != '\0',uVar8,0);
        if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0145d050;
        FUN_0144680c(lVar14,*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x58),0);
        lVar15 = *(long *)(unaff_x20 + 0x10);
        if (lVar15 == 0) goto LAB_0145d050;
        if (*(char *)(lVar15 + 0x4a) != '\0') {
          iVar9 = *(int *)(lVar15 + 0x20);
          if (*(int *)(lVar15 + 0x20) <= *(int *)(lVar15 + 0x1c)) {
            iVar9 = *(int *)(lVar15 + 0x1c);
          }
          FUN_01448250(lVar14,*(undefined8 *)(lVar15 + 0x58),iVar9,0);
          lVar15 = *(long *)(unaff_x20 + 0x10);
          if (lVar15 == 0) goto LAB_0145d050;
        }
        uVar13 = 0;
        goto LAB_0145cd00;
      }
      FUN_0132138c(lVar15,unaff_w28,&stack0x00000070,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Contains<int>__);
      unaff_x21 = *(long *)(unaff_x24 + 0x28);
      unaff_s15 = (float)unaff_w28;
      in_stack_00000060 = in_stack_00000070;
      unaff_x26 = in_stack_00000018;
    } while (unaff_x21 == 0);
    uVar27 = *(undefined8 *)
              Method_System_Collections_Generic_Dictionary<InternedString,_InputControlLayout_Collection_PrecompiledLayout>_TryGetValue__
    ;
    if (in_stack_00000070 == (long *)0x0) {
      uVar12 = 0;
    }
    else {
      if (in_stack_00000070 == (long *)0x0) goto LAB_0145d050;
      uVar12 = (**(code **)(*in_stack_00000070 + 0x168))
                         (in_stack_00000070,*(undefined8 *)(*in_stack_00000070 + 0x170));
    }
    param_2 = FUN_015f5b28(uVar27,uVar12,0);
    if ((*(long *)(unaff_x20 + 0x10) == 0) ||
       (param_1 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x60), param_1 == 0)) goto LAB_0145d050;
  } while( true );
  while( true ) {
    lVar14 = FUN_0268b6ac(in_stack_00000070,0);
    if ((lVar14 != 0) &&
       (lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar15 == 0))
    goto LAB_0145d058;
    uVar10 = *(uint *)(plVar16 + 3);
    if (uVar10 <= uVar13) goto LAB_0145d054;
    plVar16[uVar13 + 4] = lVar14;
    uVar13 = uVar13 + 1;
    if ((long)(int)uVar10 <= (long)uVar13) break;
LAB_0145ce80:
    if (((*(long *)(unaff_x20 + 0x10) == 0) ||
        (lVar14 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x68), lVar14 == 0)) ||
       (FUN_0132138c(lVar14,uVar13 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar4),
       in_stack_00000070 == (long *)0x0)) goto LAB_0145d050;
  }
LAB_0145cee8:
  lVar14 = FUN_01600f98(*(undefined8 *)PTR_DAT_033f38b8,plVar16,0);
  plVar16 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
  if (plVar16 != (long *)0x0) {
    lVar15 = *(long *)puVar3;
    if ((lVar15 != 0) &&
       (lVar15 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar15 == 0)) {
LAB_0145d058:
      uVar27 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar27,0);
    }
    if ((int)plVar16[3] != 0) {
      plVar16[4] = *(long *)puVar3;
      if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_0145d050;
      plVar19 = *(long **)(*(long *)(unaff_x20 + 0x10) + 0x90);
      if (plVar19 == (long *)0x0) {
        lVar15 = 0;
      }
      else {
        lVar15 = (**(code **)(*plVar19 + 0x168))(plVar19,*(undefined8 *)(*plVar19 + 0x170));
        if ((lVar15 != 0) &&
           (lVar29 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar29 == 0))
        goto LAB_0145d058;
      }
      uVar10 = *(uint *)(plVar16 + 3);
      if (1 < uVar10) {
        plVar16[5] = lVar15;
        lVar15 = *(long *)puVar5;
        if (lVar15 != 0) {
          lVar15 = thunk_FUN_00d6225c(lVar15,*(undefined8 *)(*plVar16 + 0x40));
          if (lVar15 == 0) goto LAB_0145d058;
          uVar10 = *(uint *)(plVar16 + 3);
        }
        puVar3 = Method_UnityEngine_Playables_ScriptPlayable<ParticleControlPlayable>_GetBehaviour__
        ;
        if (2 < uVar10) {
          plVar16[6] = *(long *)puVar5;
          if (lVar14 != 0) {
            lVar15 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar16 + 0x40));
            if (lVar15 == 0) goto LAB_0145d058;
            uVar10 = *(uint *)(plVar16 + 3);
          }
          if (3 < uVar10) {
            plVar16[7] = lVar14;
            lVar14 = *(long *)puVar3;
            if (lVar14 != 0) {
              lVar14 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar16 + 0x40));
              if (lVar14 == 0) goto LAB_0145d058;
              uVar10 = *(uint *)(plVar16 + 3);
            }
            if (4 < uVar10) {
              plVar16[8] = *(long *)puVar3;
              uVar27 = FUN_01600844(plVar16,0);
              lVar14 = *unaff_x25;
              iVar9 = *(int *)(lVar14 + 0xe0);
joined_r0x0145c930:
              if (iVar9 == 0) {
                thunk_FUN_00d32864(lVar14);
              }
LAB_0145c940:
              FUN_026610e4(uVar27,0);
              lVar14 = *(long *)(unaff_x24 + 0x38);
joined_r0x0145c834:
              if (lVar14 != 0) {
                *(undefined1 *)(lVar14 + 0x10) = 0;
                return 0;
              }
              goto LAB_0145d050;
            }
          }
        }
      }
    }
LAB_0145d054:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  goto LAB_0145d050;
  while( true ) {
    if ((long)*(int *)(lVar14 + 0x18) <= (long)uVar13) {
      if (*(int *)(in_stack_00000058 + 0x30) < 4) {
        return 0;
      }
      in_stack_00000098 = FUN_020407b0(in_stack_00000010,0);
      uVar27 = FUN_01770034(&stack0x00000098,*(undefined8 *)StringLiteral_12992,0);
      uVar27 = FUN_015f5b28(*(undefined8 *)
                             Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerCaptureOutEvent>__
                            ,uVar27,0);
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x25);
      }
      FUN_02660dac(uVar27,0);
      return 0;
    }
    FUN_0132138c(lVar14,uVar13 & 0xffffffff,&stack0x00000070,*unaff_x27);
    plVar16 = in_stack_00000070;
    if (in_stack_00000070 == (long *)0x0) break;
    lVar15 = *(long *)(unaff_x20 + 0x10);
    if (*(char *)((long)in_stack_00000070 + 0x19) != '\0') {
      if (lVar15 == 0) break;
      iVar11 = 0;
      iVar9 = 0;
      while( true ) {
        lVar14 = *(long *)(lVar15 + 0x58);
        if (lVar14 == 0) goto LAB_0145d050;
        if (*(int *)(lVar14 + 0x18) <= iVar9) break;
        FUN_0132138c(lVar14,iVar9,&stack0x00000070,*(undefined8 *)puVar3);
        if ((in_stack_00000070 == (long *)0x0) || (lVar14 = in_stack_00000070[2], lVar14 == 0))
        goto LAB_0145d050;
        if (*(uint *)(lVar14 + 0x18) <= uVar13) goto LAB_0145d054;
        lVar14 = *(long *)(lVar14 + uVar13 * 8 + 0x20);
        if (lVar14 == 0) goto LAB_0145d050;
        lVar15 = *(long *)(unaff_x20 + 0x10);
        iVar9 = iVar9 + 1;
        iVar11 = *(int *)(lVar14 + 0x60) + iVar11;
        if (lVar15 == 0) goto LAB_0145d050;
      }
      *(byte *)(plVar16 + 3) = (byte)((uint)iVar11 >> 0x1f);
      *(undefined1 *)((long)plVar16 + 0x19) = 0;
    }
    uVar13 = uVar13 + 1;
    if (lVar15 == 0) break;
LAB_0145cd00:
    lVar14 = *(long *)(lVar15 + 0x70);
    if (lVar14 == 0) break;
  }
LAB_0145d050:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


