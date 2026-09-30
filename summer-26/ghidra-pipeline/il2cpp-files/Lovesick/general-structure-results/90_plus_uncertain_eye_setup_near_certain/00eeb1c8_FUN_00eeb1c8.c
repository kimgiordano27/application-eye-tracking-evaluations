/*
FUNCTION_NAME: FUN_00eeb1c8
ENTRY_POINT: 00eeb1c8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_00eeb1c8(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 auStack_68 [8];
  
  if ((DAT_03775383 & 1) == 0) {
                    /* try { // try from 00eeb1f8 to 00feb22b has its CatchHandler @ 00eeb410 */
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_HashSetExtensions_ExceptWithNonAlloc<__Il2CppFullySharedGenericType>__
                      );
    thunk_FUN_00d48444(StringLiteral_1775);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(System_Globalization_UmAlQuraCalendar_DateMapping___TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7269);
    thunk_FUN_00d48444(StringLiteral_4626);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_93_0_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Pose___TypeInfo);
                    /* try { // try from 00eeb260 to 00feb2ab has its CatchHandler @ 00eeb414 */
    thunk_FUN_00d48444(PTR_DAT_033f3868);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
    thunk_FUN_00d48444(OVR_OpenVR_IVRCompositor__ClearLastSubmittedFrame_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_object>_TryGetValue__);
    thunk_FUN_00d48444(System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsri_n_u64__);
    thunk_FUN_00d48444(StringLiteral_7102);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_12098);
    thunk_FUN_00d48444(StringLiteral_1727);
    thunk_FUN_00d48444(StringLiteral_10298);
    thunk_FUN_00d48444(Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_GetResult__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_<>c_<EndProfilingSampler>b__62_0__
                      );
                    /* try { // try from 00eeb2f8 to 00feb38f has its CatchHandler @ 00eeb40c */
    thunk_FUN_00d48444(StringLiteral_180);
    DAT_03775383 = 1;
  }
  puVar4 = StringLiteral_12098;
  puVar3 = PTR_DAT_033f3868;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  lVar16 = *(long *)(param_1 + 0x20);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_0268c0c8(0x40000000,uVar8,0);
    if (lVar16 == 0) goto LAB_00eec06c;
    goto LAB_00eeb8a4;
  }
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if (lVar7 != 0) {
      FUN_0268b098(lVar7,0);
      *(long *)(param_1 + 0x28) = lVar7;
      lVar7 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (lVar7,0);
      if ((lVar16 != 0) &&
         (uVar8 = FUN_0268fd10(lVar16,0),
         puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vsri_n_u64__, lVar7 != 0)) {
        FUN_0269fea8(lVar7,uVar8,0);
        lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
        puVar3 = Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
        if (lVar7 != 0) {
          FUN_01320e50(lVar7,*(undefined8 *)
                              System_Security_Cryptography_SHA1CryptoServiceProvider_TypeInfo);
          *(long *)(param_1 + 0x30) = lVar7;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (DAT_03774e19 == '\0') {
            thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
            DAT_03774e19 = '\x01';
          }
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar7 = *(long *)puVar3;
          }
          if (**(long **)(lVar7 + 0xb8) != 0) {
            uVar8 = *(undefined8 *)(**(long **)(lVar7 + 0xb8) + 0x138);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar9 = FUN_02681b9c(uVar8,0,0);
            if ((uVar9 & 1) != 0) {
              lVar7 = FUN_010c3404(lVar16,*(undefined8 *)StringLiteral_1775);
              if (*(long *)(param_1 + 0x28) == 0) goto LAB_00eec06c;
              lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                 (*(long *)(param_1 + 0x28),0);
              lVar11 = FUN_0268fd10(lVar16,0);
              if ((lVar11 == 0) ||
                 (FUN_026a0f08(*(undefined4 *)(lVar16 + 0x16c),*(undefined4 *)(lVar16 + 0x170),
                               *(undefined4 *)(lVar16 + 0x174),lVar11,0), lVar10 == 0))
              goto LAB_00eec06c;
              FUN_0269f618(lVar10,0);
              if (*(long *)(param_1 + 0x28) == 0) goto LAB_00eec06c;
              lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                 (*(long *)(param_1 + 0x28),0);
              lVar11 = FUN_0268fd10(lVar16,0);
              if ((lVar11 == 0) || (FUN_026a125c(lVar11,0), lVar10 == 0)) goto LAB_00eec06c;
              FUN_0269fd98(lVar10,0);
              if (*(long *)(param_1 + 0x28) == 0) goto LAB_00eec06c;
              lVar10 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                 (*(long *)(param_1 + 0x28),0);
              lVar11 = FUN_0268fd10(lVar16,0);
              if (((lVar11 == 0) || (FUN_0269f810(lVar11,0), lVar10 == 0)) ||
                 (FUN_0269f894(lVar10,0),
                 puVar5 = 
                 Method_Oculus_Interaction_HashSetExtensions_ExceptWithNonAlloc<__Il2CppFullySharedGenericType>__
                 , puVar4 = OVR_OpenVR_IVRCompositor__ClearLastSubmittedFrame_TypeInfo, lVar7 == 0))
              goto LAB_00eec06c;
              uVar2 = *(uint *)(lVar7 + 0x18);
              if (0 < (int)uVar2) {
                uVar18 = 0;
                do {
                  if (uVar2 <= uVar18) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  lVar11 = *(long *)(lVar7 + (long)(int)uVar18 * 8 + 0x20);
                  lVar10 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3868);
                  if (lVar10 == 0) goto LAB_00eec06c;
                  FUN_0268b098(lVar10,0);
                  lVar12 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                     (lVar10,0);
                  if ((*(long *)(param_1 + 0x28) == 0) ||
                     (uVar8 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                        (*(long *)(param_1 + 0x28),0), lVar12 == 0))
                  goto LAB_00eec06c;
                  FUN_0269fea8(lVar12,uVar8,0);
                  lVar12 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                     (lVar10,0);
                  if ((lVar11 == 0) ||
                     ((lVar13 = FUN_0268fd10(lVar11,0), lVar13 == 0 ||
                      (FUN_0269f578(lVar13,0), lVar12 == 0)))) goto LAB_00eec06c;
                  FUN_0269f618(lVar12,0);
                  lVar12 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                     (lVar10,0);
                  lVar13 = FUN_0268fd10(lVar11,0);
                  if ((lVar13 == 0) || (FUN_026a125c(lVar13,0), lVar12 == 0)) goto LAB_00eec06c;
                  FUN_0269fd98(lVar12,0);
                  lVar12 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                     (lVar10,0);
                  lVar13 = FUN_0268fd10(lVar11,0);
                  if ((lVar13 == 0) || (FUN_0269f810(lVar13,0), lVar12 == 0)) goto LAB_00eec06c;
                  FUN_0269f894(lVar12,0);
                  lVar12 = FUN_010e5800(lVar10,*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
                  uVar8 = FUN_026774f4(lVar11,0);
                  if (lVar12 == 0) goto LAB_00eec06c;
                  FUN_02677530(lVar12,uVar8,0);
                  lVar11 = FUN_010e5800(lVar10,*(undefined8 *)UnityEngine_Pose___TypeInfo);
                  if (lVar11 == 0) goto LAB_00eec06c;
                  FUN_0266622c(lVar11,0,0);
                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  if (DAT_03774e19 == '\0') {
                    thunk_FUN_00d48444(puVar3);
                    DAT_03774e19 = '\x01';
                  }
                  lVar12 = *(long *)puVar3;
                  if (*(int *)(lVar12 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar12 = *(long *)puVar3;
                  }
                  if (**(long **)(lVar12 + 0xb8) == 0) goto LAB_00eec06c;
                  uVar17 = *(undefined8 *)(**(long **)(lVar12 + 0xb8) + 0x138);
                  uVar8 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                    (lVar10,0);
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)
                                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                      );
                  }
                  lVar12 = FUN_0112fe80(uVar17,uVar8,*(undefined8 *)StringLiteral_7102);
                  if (lVar12 == 0) goto LAB_00eec06c;
                  FUN_010c2c5c(lVar12,auStack_68,*(undefined8 *)puVar5);
                  local_78 = FUN_026eabc8(lVar12,0);
                  FUN_026eb484(&local_78,lVar11,0);
                  if (*(long *)(param_1 + 0x30) == 0) goto LAB_00eec06c;
                  FUN_00ac5cb0(*(long *)(param_1 + 0x30),lVar12,*(undefined8 *)puVar4);
                  FUN_026ea898(lVar12,0);
                  FUN_0268c0c8(0x40800000,lVar10,0);
                  uVar2 = *(uint *)(lVar7 + 0x18);
                  uVar18 = uVar18 + 1;
                } while ((int)uVar18 < (int)uVar2);
              }
            }
            FUN_00ee8614(lVar16,0,0);
            lVar16 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_12098);
            if (lVar16 != 0) {
              FUN_0268a094(0x3f400000,lVar16,0);
              *(long *)(param_1 + 0x18) = lVar16;
              *(undefined4 *)(param_1 + 0x10) = 1;
              return 1;
            }
          }
        }
      }
    }
    goto LAB_00eec06c;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar16 == 0) goto LAB_00eec06c;
  if (*(char *)(lVar16 + 0x81) != '\0') {
    uVar8 = FUN_0268fd4c(lVar16,0);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    }
    FUN_0268c0c8(0x40000000,uVar8,0);
    return 0;
  }
  uVar8 = *(undefined8 *)(lVar16 + 0x48);
  if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar9 = FUN_0268b5e4(uVar8,0);
  if ((uVar9 & 1) != 0) {
    if (*(long *)(lVar16 + 0x48) == 0) goto LAB_00eec06c;
    uVar17 = *(undefined8 *)(*(long *)(lVar16 + 0x48) + 0xb0);
    uVar8 = FUN_00ee688c(lVar16,0);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    }
    uVar9 = FUN_0268b4e0(uVar17,uVar8,0);
    if (((uVar9 & 1) != 0) && (*(long *)(lVar16 + 0x48) != 0)) {
      FUN_00eec0e4(*(long *)(lVar16 + 0x48),1);
    }
  }
  *(undefined8 *)(lVar16 + 0x48) = 0;
  uVar8 = *(undefined8 *)(lVar16 + 0xb0);
  if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar5 = StringLiteral_302;
  uVar9 = FUN_0268b5e4(uVar8,0);
  puVar3 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  if ((uVar9 & 1) == 0) {
LAB_00eebb18:
    uVar8 = FUN_00ee650c(lVar16,0);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    }
    FUN_0268b5e4(uVar8,0);
    uVar8 = FUN_00ee67b0(lVar16,0);
    uVar9 = FUN_0268b5e4(uVar8,0);
    puVar6 = StringLiteral_1727;
    if ((uVar9 & 1) == 0) {
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)puVar6,0);
      if (*(long *)(lVar16 + 0xa0) != 0) {
        FUN_026f17d8(*(long *)(lVar16 + 0xa0),1,0);
        lVar7 = *(long *)(lVar16 + 0xa0);
        FUN_02698b6c(*(float *)(lVar16 + 0x24) * DAT_028aa044,
                     *(float *)(lVar16 + 0x28) * DAT_028aa044,
                     *(float *)(lVar16 + 0x2c) * DAT_028aa044,0);
        if (lVar7 != 0) {
          FUN_026f1fbc(lVar7,0);
          lVar7 = *(long *)(lVar16 + 0xa0);
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          if (lVar7 != 0) {
            puVar15 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
            FUN_026f1368(*puVar15,puVar15[1],puVar15[2],lVar7,0);
            lVar7 = *(long *)(lVar16 + 0xa0);
            if (DAT_03774d76 == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_03774d76 = '\x01';
            }
            if (lVar7 != 0) {
              puVar15 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
              FUN_026f14a0(*puVar15,puVar15[1],puVar15[2],lVar7,0);
              if (*(long *)(lVar16 + 0xa0) != 0) {
                FUN_026f1e88(*(undefined4 *)(lVar16 + 0x18),*(undefined4 *)(lVar16 + 0x1c),
                             *(undefined4 *)(lVar16 + 0x20),*(long *)(lVar16 + 0xa0),0);
                if (*(long *)(lVar16 + 0xa0) != 0) {
                  FUN_026f17d8(*(long *)(lVar16 + 0xa0),*(undefined1 *)(lVar16 + 0xb8),0);
                  puVar6 = StringLiteral_7269;
                  puVar5 = StringLiteral_4626;
                  puVar3 = System_Globalization_UmAlQuraCalendar_DateMapping___TypeInfo;
                  if (*(long *)(param_1 + 0x30) != 0) {
                    FUN_01323390(*(long *)(param_1 + 0x30),&local_90,
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_object>_TryGetValue__
                                );
                    while (uVar9 = FUN_012b894c(&local_90,*(undefined8 *)puVar6), (uVar9 & 1) != 0)
                    {
                      lVar7 = FUN_00ac5ba8(&local_90,*(undefined8 *)puVar5);
                      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_00da518c();
                      }
                      FUN_026ea898(lVar7,0);
                    }
                    FUN_012b8948(&local_90,*(undefined8 *)puVar3);
                    FUN_00ee80a0(lVar16,0);
                    uVar19 = *(undefined4 *)(lVar16 + 0x88);
                    lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                    if (lVar16 != 0) {
                      FUN_0268a094(uVar19,lVar16,0);
                      *(long *)(param_1 + 0x18) = lVar16;
                      *(undefined4 *)(param_1 + 0x10) = 2;
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_00eec06c;
    }
    lVar7 = FUN_00ee650c(lVar16,0);
    puVar3 = 
    Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_<>c_<EndProfilingSampler>b__62_0__
    ;
    if (lVar7 == 0) goto LAB_00eec06c;
    uVar8 = FUN_0268b6ac(lVar7,0);
    uVar8 = FUN_015f5b28(*(undefined8 *)puVar3,uVar8,0);
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar5);
    }
    FUN_02660dac(uVar8,0);
    plVar14 = (long *)FUN_00ee67b0(lVar16,0);
LAB_00eebbcc:
    uVar8 = FUN_00ee688c(lVar16,0);
    if (plVar14 == (long *)0x0) goto LAB_00eec06c;
    (**(code **)(*plVar14 + 0x1b8))(plVar14,uVar8,1,1,*(undefined8 *)(*plVar14 + 0x1c0));
  }
  else {
    uVar8 = *(undefined8 *)(lVar16 + 0xb0);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_0268b5e4(uVar8,0);
    if ((uVar9 & 1) == 0) {
      lVar7 = *(long *)(lVar16 + 0xb0);
    }
    else {
      lVar7 = *(long *)(lVar16 + 0xb0);
      if (lVar7 == 0) goto LAB_00eec06c;
      if ((*(char *)(lVar7 + 0x60) == '\0') && (*(char *)(lVar7 + 0x70) == '\0')) goto LAB_00eebb18;
    }
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_0268b5e4(lVar7,0);
    if ((uVar9 & 1) != 0) {
      if (*(long *)(lVar16 + 0xb0) == 0) goto LAB_00eec06c;
      if (*(char *)(*(long *)(lVar16 + 0xb0) + 0x60) != '\0') {
        lVar7 = FUN_00f11d24(0);
        if (lVar7 == 0) goto LAB_00eec06c;
        uVar9 = FUN_00f13df0(lVar7,0);
        if ((uVar9 & 1) == 0) goto LAB_00eebb18;
      }
    }
    uVar8 = *(undefined8 *)(lVar16 + 0xb0);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_0268b5e4(uVar8,0);
    if ((uVar9 & 1) != 0) {
      if (*(long *)(lVar16 + 0xb0) == 0) goto LAB_00eec06c;
      if (*(char *)(*(long *)(lVar16 + 0xb0) + 0x60) == '\0') goto LAB_00eebc00;
      lVar7 = FUN_00f11d24(0);
      if (lVar7 == 0) goto LAB_00eec06c;
      uVar9 = FUN_00f13df0(lVar7,0);
      if ((uVar9 & 1) == 0) goto LAB_00eebc00;
      lVar7 = FUN_00ee650c(lVar16,0);
      if ((lVar7 == 0) || (lVar7 = FUN_0268fd4c(lVar7,0), puVar3 = StringLiteral_10298, lVar7 == 0))
      goto LAB_00eec06c;
      uVar8 = FUN_0268b6ac(lVar7,0);
      uVar8 = FUN_015f5b28(*(undefined8 *)puVar3,uVar8,0);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar5);
      }
      FUN_02660dac(uVar8,0);
LAB_00eebc54:
      lVar7 = FUN_00f11d24(0);
      uVar8 = FUN_00ee688c(lVar16,0);
      if (lVar7 == 0) goto LAB_00eec06c;
      FUN_00f12698(lVar7,uVar8,0xffffffff,1,0);
      FUN_00ee7e8c(lVar16,0);
      goto LAB_00eeb8a4;
    }
LAB_00eebc00:
    uVar8 = *(undefined8 *)(lVar16 + 0xb0);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_0268b5e4(uVar8,0);
    if ((uVar9 & 1) != 0) {
      if (*(long *)(lVar16 + 0xb0) == 0) goto LAB_00eec06c;
      if (*(char *)(*(long *)(lVar16 + 0xb0) + 0x70) != '\0') {
        lVar7 = FUN_00f11d24(0);
        if (lVar7 == 0) goto LAB_00eec06c;
        uVar9 = FUN_00f13df0(lVar7,0);
        if ((uVar9 & 1) != 0) goto LAB_00eebc54;
      }
    }
    uVar8 = FUN_00ee650c(lVar16,0);
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    }
    uVar9 = FUN_0268b5e4(uVar8,0);
    if ((uVar9 & 1) != 0) {
      plVar14 = (long *)FUN_00ee650c(lVar16,0);
      uVar8 = FUN_00ee688c(lVar16,0);
      if (plVar14 == (long *)0x0) goto LAB_00eec06c;
      uVar9 = (**(code **)(*plVar14 + 0x1a8))(plVar14,uVar8,*(undefined8 *)(*plVar14 + 0x1b0));
      if ((uVar9 & 1) != 0) {
        lVar7 = FUN_00ee650c(lVar16,0);
        if ((lVar7 == 0) ||
           (lVar7 = FUN_0268fd4c(lVar7,0),
           puVar3 = Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_GetResult__, lVar7 == 0
           )) goto LAB_00eec06c;
        uVar8 = FUN_0268b6ac(lVar7,0);
        uVar8 = FUN_015f5b28(*(undefined8 *)puVar3,uVar8,0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar5);
        }
        FUN_02660dac(uVar8,0);
        plVar14 = (long *)FUN_00ee650c(lVar16,0);
        goto LAB_00eebbcc;
      }
    }
    puVar4 = StringLiteral_180;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02660dac(*(undefined8 *)puVar4,0);
    if (*(long *)(lVar16 + 0xa0) == 0) {
LAB_00eec06c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_026f17d8(*(long *)(lVar16 + 0xa0),1,0);
    lVar7 = *(long *)(lVar16 + 0xa0);
    FUN_02698b6c(*(float *)(lVar16 + 0x24) * DAT_028aa044,*(float *)(lVar16 + 0x28) * DAT_028aa044,
                 *(float *)(lVar16 + 0x2c) * DAT_028aa044,0);
    if (lVar7 == 0) goto LAB_00eec06c;
    FUN_026f1fbc(lVar7,0);
    lVar7 = *(long *)(lVar16 + 0xa0);
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    if (lVar7 == 0) goto LAB_00eec06c;
    puVar15 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
    FUN_026f1368(*puVar15,puVar15[1],puVar15[2],lVar7,0);
    lVar7 = *(long *)(lVar16 + 0xa0);
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    if (lVar7 == 0) goto LAB_00eec06c;
    puVar15 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
    FUN_026f14a0(*puVar15,puVar15[1],puVar15[2],lVar7,0);
    if (*(long *)(lVar16 + 0xa0) == 0) goto LAB_00eec06c;
    FUN_026f1e88(*(undefined4 *)(lVar16 + 0x18),*(undefined4 *)(lVar16 + 0x1c),
                 *(undefined4 *)(lVar16 + 0x20),*(long *)(lVar16 + 0xa0),0);
    if (*(long *)(lVar16 + 0xa0) == 0) goto LAB_00eec06c;
    FUN_026f17d8(*(long *)(lVar16 + 0xa0),*(undefined1 *)(lVar16 + 0xb8),0);
  }
  FUN_00ee80a0(lVar16,0);
LAB_00eeb8a4:
  *(undefined1 *)(lVar16 + 400) = 1;
  *(undefined1 *)(lVar16 + 0x100) = *(undefined1 *)(lVar16 + 0x101);
  if (*(long *)(lVar16 + 0xc0) != 0) {
    FUN_026c868c(*(long *)(lVar16 + 0xc0),0);
  }
  *(undefined1 *)(lVar16 + 0x1a0) = 0;
  return 0;
}


