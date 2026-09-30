/*
FUNCTION_NAME: FUN_034ad440
ENTRY_POINT: 034ad440
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_16;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x034ad7a0) */

undefined8 FUN_034ad440(long param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint local_38;
  char local_34 [4];
  
  if ((DAT_04832c09 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    DAT_04832c09 = 1;
  }
  iVar2 = FUN_034ad00c(param_1,param_2);
  local_34[0] = '\0';
  FUN_035ce230(param_1,local_34,0);
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar4 + 0x308))
            (plVar4,*(long *)(param_1 + 0x20) + (long)iVar2,0,*(undefined8 *)(*plVar4 + 0x310));
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = FUN_034dc5dc(*(long *)(param_1 + 0x10),0);
  uVar8 = (ulong)uVar3;
  if ((int)uVar3 < 0) {
    uVar7 = thunk_FUN_01efb3a4(Method_UnityEngine_Texture3D_Apply__);
    uVar7 = FUN_035ac8e0(uVar7,0);
    thunk_FUN_01efb3a4(Method_UnityEngine_SubsystemManager_GetInstances<XRInputSubsystem>__);
    uVar9 = thunk_FUN_01f117cc();
    FUN_034f85bc(uVar9,uVar7,0);
    uVar7 = thunk_FUN_01efb3a4(Method_System_Globalization_ThaiBuddhistCalendar_ToFourDigitYear__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar9,uVar7);
  }
  plVar4 = *(long **)(param_1 + 0x70);
  local_38 = param_2;
  if (plVar4 == (long *)0x0) {
    uVar9 = FUN_01f08890(*(undefined8 *)
                          Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,uVar8);
    plVar4 = *(long **)(param_1 + 0x10);
    uVar10 = uVar8;
    uVar1 = uVar3;
    while (0 < (int)uVar1) {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      iVar2 = (**(code **)(*plVar4 + 0x2b8))
                        (plVar4,uVar9,uVar3 - (int)uVar10,uVar10,*(undefined8 *)(*plVar4 + 0x2c0));
      if (iVar2 == 0) {
        uVar7 = thunk_FUN_01efb3a4(
                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                  );
        plVar4 = (long *)FUN_01f08890(uVar7,1);
        uVar7 = thunk_FUN_01efb3a4(
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                  );
        lVar5 = thunk_FUN_01f113fc(uVar7,&local_38);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
          uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar7,0);
        }
        if ((int)plVar4[3] != 0) {
          plVar4[4] = lVar5;
          thunk_FUN_01f51358(plVar4 + 4,lVar5);
          uVar7 = thunk_FUN_01efb3a4(
                                    Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__
                                    );
          uVar7 = FUN_035ae81c(uVar7,plVar4,0);
          thunk_FUN_01efb3a4(
                            Method_UnityEngine_UIElements_StyleSheets_Syntax_StyleSyntaxParser_ParseMultiplier__
                            );
          uVar9 = thunk_FUN_01f117cc();
          FUN_034c6ac4(uVar9,uVar7,0);
          uVar7 = thunk_FUN_01efb3a4(
                                    Method_System_Globalization_ThaiBuddhistCalendar_ToFourDigitYear__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar9,uVar7);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar4 = *(long **)(param_1 + 0x10);
      uVar1 = (int)uVar10 - iVar2;
      uVar10 = (ulong)uVar1;
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar3 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
    *param_3 = uVar3;
    if (-1 < (int)uVar3) {
      plVar4 = *(long **)(param_1 + 0x10);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar4 = (long *)(**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
      if ((long)(ulong)uVar3 < lVar5 - *(long *)(param_1 + 0x28)) {
        uVar7 = 0;
        iVar2 = 0x1e;
LAB_034ad6c0:
        if (local_34[0] != '\0') {
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit
                    (param_1,0);
        }
        if ((iVar2 == 0x1e) || (iVar2 == 0)) {
          plVar4 = (long *)FUN_03428128(0);
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar7 = (**(code **)(*plVar4 + 0x368))
                            (plVar4,uVar9,0,uVar8,*(undefined8 *)(*plVar4 + 0x370));
        }
        return uVar7;
      }
    }
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                              );
    plVar4 = (long *)FUN_01f08890(uVar7,1);
    local_38 = *param_3;
    uVar7 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    lVar5 = thunk_FUN_01f113fc(uVar7,&local_38);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar7,0);
    }
    if ((int)plVar4[3] != 0) {
      plVar4[4] = lVar5;
      thunk_FUN_01f51358(plVar4 + 4,lVar5);
      uVar7 = thunk_FUN_01efb3a4(
                                Method_UnityEngine_UIElements_TextSelectingManipulator_OnRevealCursor__
                                );
      uVar7 = FUN_035ae81c(uVar7,plVar4,0);
      thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Member_ReflectField__);
      uVar9 = thunk_FUN_01f117cc();
      FUN_03553fd0(uVar9,uVar7,0);
      uVar7 = thunk_FUN_01efb3a4(Method_System_Globalization_ThaiBuddhistCalendar_ToFourDigitYear__)
      ;
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar9,uVar7);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  lVar5 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
  plVar4 = *(long **)(param_1 + 0x70);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar6 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
  if ((long)(lVar6 - uVar8) < lVar5) {
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                              );
    plVar4 = (long *)FUN_01f08890(uVar7,1);
    uVar7 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__)
    ;
    lVar5 = thunk_FUN_01f113fc(uVar7,&local_38);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar7,0);
    }
    if ((int)plVar4[3] != 0) {
      plVar4[4] = lVar5;
      thunk_FUN_01f51358(plVar4 + 4,lVar5);
      uVar7 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_This_IsPredictable__);
      uVar7 = FUN_035ae81c(uVar7,plVar4,0);
      thunk_FUN_01efb3a4(Method_UnityEngine_SubsystemManager_GetInstances<XRInputSubsystem>__);
      uVar9 = thunk_FUN_01f117cc();
      FUN_034f85bc(uVar9,uVar7,0);
      uVar7 = thunk_FUN_01efb3a4(Method_System_Globalization_ThaiBuddhistCalendar_ToFourDigitYear__)
      ;
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar9,uVar7);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar7 = FUN_034cf434(*(long *)(param_1 + 0x70),0);
  uVar7 = FUN_03415cac(0,uVar7,0,uVar3 >> 1,0);
  plVar4 = *(long **)(param_1 + 0x70);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = (**(code **)(*plVar4 + 0x1f8))(plVar4,*(undefined8 *)(*plVar4 + 0x200));
  (**(code **)(*plVar4 + 0x208))(plVar4,lVar5 + uVar8,*(undefined8 *)(*plVar4 + 0x210));
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar3 = (**(code **)(*plVar4 + 0x228))(plVar4,*(undefined8 *)(*plVar4 + 0x230));
  *param_3 = uVar3;
  if (-1 < (int)uVar3) {
    plVar4 = *(long **)(param_1 + 0x10);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
    if ((long)(ulong)uVar3 < lVar5 - *(long *)(param_1 + 0x28)) {
      uVar9 = 0;
      iVar2 = 0x14;
      goto LAB_034ad6c0;
    }
  }
  uVar7 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                            );
  plVar4 = (long *)FUN_01f08890(uVar7,1);
  local_38 = *param_3;
  uVar7 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  lVar5 = thunk_FUN_01f113fc(uVar7,&local_38);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_01f116d0(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
    uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar7,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = lVar5;
    thunk_FUN_01f51358(plVar4 + 4,lVar5);
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_TextSelectingManipulator_OnRevealCursor__
                              );
    uVar7 = FUN_035ae81c(uVar7,plVar4,0);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Member_ReflectField__);
    uVar9 = thunk_FUN_01f117cc();
    FUN_03553fd0(uVar9,uVar7,0);
    uVar7 = thunk_FUN_01efb3a4(Method_System_Globalization_ThaiBuddhistCalendar_ToFourDigitYear__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar9,uVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


