/*
FUNCTION_NAME: FUN_01ba7bc8
ENTRY_POINT: 01ba7bc8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01ba7bc8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  
  if ((DAT_0377e6c9 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_93_0_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Pose___TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(StringLiteral_11347);
    thunk_FUN_00d48444(PTR_DAT_033f3618);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<VA_Triangle>_RemoveRange__);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_RemoveListener__);
    DAT_0377e6c9 = 1;
  }
  lVar4 = FUN_0268fd4c(param_1,0);
  if ((lVar4 != 0) && (lVar4 = FUN_0268b6ac(lVar4,0), lVar4 != 0)) {
    uVar5 = FUN_015fe854(lVar4,*(undefined8 *)
                                Method_System_Collections_Generic_List<VA_Triangle>_RemoveRange__,0)
    ;
    puVar2 = StringLiteral_11347;
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_0268c114(param_1,0);
      return;
    }
    uVar6 = FUN_0267c994(*(undefined8 *)
                          Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_RemoveListener__,0)
    ;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar4 != 0) {
      FUN_0267d648(lVar4,uVar6,0);
      *(long *)(param_1 + 0x50) = lVar4;
      lVar4 = FUN_0268fd4c(param_1,0);
      if (lVar4 != 0) {
        uVar6 = FUN_010e5800(lVar4,*(undefined8 *)OVRPlugin_OVRP_1_93_0_TypeInfo);
        *(undefined8 *)(param_1 + 0x48) = uVar6;
        lVar4 = FUN_0268fd4c(param_1,0);
        puVar2 = PTR_DAT_033f3618;
        if (lVar4 != 0) {
          uVar6 = FUN_010e5800(lVar4,*(undefined8 *)UnityEngine_Pose___TypeInfo);
          *(undefined8 *)(param_1 + 0x40) = uVar6;
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar4 != 0) {
            FUN_02669c18(lVar4,0);
            puVar2 = 
            Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
            ;
            if (*(long *)(param_1 + 0x48) != 0) {
              FUN_02677530(*(long *)(param_1 + 0x48),lVar4,0);
              lVar7 = FUN_00da4fb8(*(undefined8 *)puVar2,4);
              if (lVar7 != 0) {
                uVar1 = *(uint *)(lVar7 + 0x18);
                if (uVar1 != 0) {
                  *(undefined8 *)(lVar7 + 0x20) = 0xc0000000c0000000;
                  *(undefined4 *)(lVar7 + 0x28) = 0x3f800000;
                  uVar6 = DAT_028aa440;
                  if (uVar1 != 1) {
                    *(undefined4 *)(lVar7 + 0x34) = 0x3f800000;
                    *(undefined8 *)(lVar7 + 0x2c) = uVar6;
                    uVar6 = DAT_028aa448;
                    if (2 < uVar1) {
                      *(undefined4 *)(lVar7 + 0x40) = 0x3f800000;
                      *(undefined8 *)(lVar7 + 0x38) = uVar6;
                      puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
                      if (uVar1 != 3) {
                        *(undefined8 *)(lVar7 + 0x44) = 0x4000000040000000;
                        *(undefined4 *)(lVar7 + 0x4c) = 0x3f800000;
                        FUN_0266b9c4(lVar4,lVar7,0);
                        lVar7 = FUN_00da4fb8(*(undefined8 *)puVar3,6);
                        if (lVar7 == 0) goto LAB_01ba8060;
                        uVar1 = *(uint *)(lVar7 + 0x18);
                        if (((((uVar1 != 0) && (*(undefined4 *)(lVar7 + 0x20) = 0, uVar1 != 1)) &&
                             (*(undefined4 *)(lVar7 + 0x24) = 2, 2 < uVar1)) &&
                            ((*(undefined4 *)(lVar7 + 0x28) = 1, uVar1 != 3 &&
                             (*(undefined4 *)(lVar7 + 0x2c) = 2, 4 < uVar1)))) &&
                           (*(undefined4 *)(lVar7 + 0x30) = 3, uVar1 != 5)) {
                          *(undefined4 *)(lVar7 + 0x34) = 1;
                          FUN_0266db2c(lVar4,lVar7,0);
                          lVar7 = FUN_00da4fb8(*(undefined8 *)puVar2,4);
                          if (DAT_03775377 == '\0') {
                            thunk_FUN_00d48444(
                                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                              );
                            DAT_03775377 = '\x01';
                          }
                          puVar2 = 
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          ;
                          if (lVar7 == 0) goto LAB_01ba8060;
                          uVar1 = *(uint *)(lVar7 + 0x18);
                          if (uVar1 != 0) {
                            uVar6 = *(undefined8 *)
                                     (*(long *)(*(long *)
                                                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                               + 0xb8) + 0x48);
                            fVar8 = *(float *)(*(long *)(*(long *)
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                                  + 0xb8) + 0x50);
                            *(ulong *)(lVar7 + 0x20) =
                                 CONCAT44(-(float)((ulong)uVar6 >> 0x20),-(float)uVar6);
                            *(float *)(lVar7 + 0x28) = -fVar8;
                            if (uVar1 != 1) {
                              uVar6 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
                              fVar8 = *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
                              *(ulong *)(lVar7 + 0x2c) =
                                   CONCAT44(-(float)((ulong)uVar6 >> 0x20),-(float)uVar6);
                              *(float *)(lVar7 + 0x34) = -fVar8;
                              if (2 < uVar1) {
                                uVar6 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
                                fVar8 = *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
                                *(ulong *)(lVar7 + 0x38) =
                                     CONCAT44(-(float)((ulong)uVar6 >> 0x20),-(float)uVar6);
                                *(float *)(lVar7 + 0x40) = -fVar8;
                                puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__;
                                if (uVar1 != 3) {
                                  uVar6 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48);
                                  fVar8 = *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50);
                                  *(ulong *)(lVar7 + 0x44) =
                                       CONCAT44(-(float)((ulong)uVar6 >> 0x20),-(float)uVar6);
                                  *(float *)(lVar7 + 0x4c) = -fVar8;
                                  FUN_0266ba70(lVar4,lVar7,0);
                                  lVar7 = FUN_00da4fb8(*(undefined8 *)puVar3,4);
                                  if (lVar7 == 0) goto LAB_01ba8060;
                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                  if ((uVar1 != 0) &&
                                     (*(undefined8 *)(lVar7 + 0x20) = 0, uVar1 != 1)) {
                                    *(undefined8 *)(lVar7 + 0x28) = DAT_028aa450;
                                    if (2 < uVar1) {
                                      *(undefined8 *)(lVar7 + 0x30) = DAT_028aa458;
                                      if (uVar1 != 3) {
                                        uVar6 = NEON_fmov(0x3f800000,4);
                                        *(undefined8 *)(lVar7 + 0x38) = uVar6;
                                        FUN_0266bbc8(lVar4,lVar7,0);
                                        *(undefined4 *)(param_1 + 0x34) = 0;
                                        *(undefined8 *)(param_1 + 0x38) = 0;
                                        if (*(char *)(param_1 + 0x2c) != '\0') {
                                          uVar6 = FUN_01ba808c(0x3f800000,0,param_1);
                                          FUN_0268ee74(param_1,uVar6,0);
                                        }
                                        if (DAT_0377e751 == '\0') {
                                          thunk_FUN_00d48444(
                                                  Method_System_Collections_Generic_List_Enumerator<UIRStylePainter_Entry>_Dispose__
                                                  );
                                          DAT_0377e751 = '\x01';
                                        }
                                        **(long **)(*(long *)
                                                  Method_System_Collections_Generic_List_Enumerator<UIRStylePainter_Entry>_Dispose__
                                                  + 0xb8) = param_1;
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
            }
          }
        }
      }
    }
  }
LAB_01ba8060:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


