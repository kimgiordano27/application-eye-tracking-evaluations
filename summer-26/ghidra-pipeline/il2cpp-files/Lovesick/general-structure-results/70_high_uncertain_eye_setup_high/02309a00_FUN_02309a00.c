/*
FUNCTION_NAME: FUN_02309a00
ENTRY_POINT: 02309a00
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02309a00(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar17;
  undefined *puVar16;
  
  puVar16 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03781ba0 & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_79_0_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystem_set_library__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__);
    DAT_03781ba0 = 1;
  }
  if (*(int *)(*(long *)puVar16 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_0268b4e0(param_1,0,0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)puVar16 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_0268b4e0(param_2,0,0);
    if ((uVar4 & 1) == 0) {
      if ((param_1 != 0) &&
         (lVar5 = FUN_0266b978(param_1,0),
         puVar2 = 
         Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__,
         puVar16 = Method_UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystem_set_library__,
         lVar5 != 0)) {
        lVar5 = FUN_00da4fb8(*(undefined8 *)
                              Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                             ,*(undefined4 *)(lVar5 + 0x18));
        uVar3 = FUN_02666048(param_1,0);
        plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)puVar16,uVar3);
        lVar7 = UnityEngine_UIElements_KeyboardNavigationManipulator__OnNavigationMove(param_1,0);
        puVar16 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__;
        if (lVar7 != 0) {
          lVar7 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqadd_s32__,
                               *(undefined4 *)(lVar7 + 0x18));
          lVar8 = FUN_0266bc28(param_1,0);
          if (lVar8 != 0) {
            lVar8 = FUN_00da4fb8(*(undefined8 *)puVar16,*(undefined4 *)(lVar8 + 0x18));
            lVar9 = FUN_0266bad0(param_1,0);
            if (lVar9 != 0) {
              lVar9 = FUN_00da4fb8(*(undefined8 *)
                                    Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__
                                   ,*(undefined4 *)(lVar9 + 0x18));
              lVar10 = FUN_0266ba24(param_1,0);
              if (lVar10 != 0) {
                lVar10 = FUN_00da4fb8(*(undefined8 *)puVar2,*(undefined4 *)(lVar10 + 0x18));
                lVar11 = FUN_0266c188(param_1,0);
                if (lVar11 != 0) {
                  lVar11 = FUN_00da4fb8(*(undefined8 *)OVRPlugin_OVRP_1_79_0_TypeInfo,
                                        *(undefined4 *)(lVar11 + 0x18));
                  uVar12 = FUN_0266b978(param_1,0);
                  if ((lVar5 != 0) &&
                     (FUN_01796450(uVar12,lVar5,*(undefined4 *)(lVar5 + 0x18),0),
                     plVar6 != (long *)0x0)) {
                    if (0 < (int)plVar6[3]) {
                      uVar4 = 0;
                      do {
                        lVar13 = FUN_0266dc74(param_1,uVar4 & 0xffffffff,0);
                        if ((lVar13 != 0) &&
                           (lVar14 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar14 == 0)) {
                          uVar12 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                          FUN_00da5038(uVar12,0);
                        }
                        uVar1 = *(uint *)(plVar6 + 3);
                        if (uVar1 <= uVar4) goto LAB_02309e1c;
                        plVar6[uVar4 + 4] = lVar13;
                        uVar4 = uVar4 + 1;
                      } while ((long)uVar4 < (long)(int)uVar1);
                    }
                    uVar12 = UnityEngine_UIElements_KeyboardNavigationManipulator__OnNavigationMove
                                       (param_1,0);
                    if (lVar7 != 0) {
                      FUN_01796450(uVar12,lVar7,*(undefined4 *)(lVar7 + 0x18),0);
                      uVar12 = FUN_0266bc28(param_1,0);
                      if (lVar8 != 0) {
                        FUN_01796450(uVar12,lVar8,*(undefined4 *)(lVar8 + 0x18),0);
                        uVar12 = FUN_0266ba24(param_1,0);
                        if (lVar10 != 0) {
                          FUN_01796450(uVar12,lVar10,*(undefined4 *)(lVar10 + 0x18),0);
                          uVar12 = FUN_0266bad0(param_1,0);
                          if (lVar9 != 0) {
                            FUN_01796450(uVar12,lVar9,*(undefined4 *)(lVar9 + 0x18),0);
                            uVar12 = FUN_0266c188(param_1,0);
                            if ((lVar11 != 0) &&
                               (FUN_01796450(uVar12,lVar11,*(undefined4 *)(lVar11 + 0x18),0),
                               param_2 != 0)) {
                              FUN_0266ed50(param_2,0);
                              uVar12 = FUN_0268b6ac(param_1,0);
                              FUN_0268b75c(param_2,uVar12,0);
                              FUN_0266b9c4(param_2,lVar5,0);
                              FUN_0266ad68(param_2,(int)plVar6[3],0);
                              if (0 < (int)plVar6[3]) {
                                uVar4 = 0;
                                uVar17 = plVar6[3] & 0xffffffff;
                                do {
                                  if (uVar17 <= uVar4) {
LAB_02309e1c:
                    /* WARNING: Subroutine does not return */
                                    FUN_00da5194();
                                  }
                                  FUN_0266e3ac(param_2,plVar6[uVar4 + 4],uVar4 & 0xffffffff,0);
                                  uVar17 = (ulong)*(uint *)(plVar6 + 3);
                                  uVar4 = uVar4 + 1;
                                } while ((long)uVar4 < (long)(int)*(uint *)(plVar6 + 3));
                              }
                              FUN_0266bbc8(param_2,lVar7,0);
                              FUN_0266bc74(param_2,lVar8,0);
                              FUN_0266bb1c(param_2,lVar9,0);
                              FUN_0266ba70(param_2,lVar10,0);
                              FUN_0266c1dc(param_2,lVar11,0);
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
      FUN_00da518c();
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar12 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar16 = Method_System_Collections_Generic_List<List<string>>_get_Item__;
  }
  else {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar12 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar16 = StringLiteral_3570;
  }
  uVar15 = thunk_FUN_00d48444(puVar16);
  FUN_016ec5b8(uVar12,uVar15,0);
  uVar15 = thunk_FUN_00d48444(UnityEngine_Rendering_Universal_LocalMinima_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar12,uVar15);
}


