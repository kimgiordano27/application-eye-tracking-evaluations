/*
FUNCTION_NAME: FUN_05ff5558
ENTRY_POINT: 05ff5558
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05ff57e0) */
/* WARNING: Removing unreachable block (ram,0x05ff5bc4) */
/* WARNING: Removing unreachable block (ram,0x05ff58b8) */

void FUN_05ff5558(int *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  int iVar7;
  int *piVar8;
  undefined8 local_90;
  int *piStack_88;
  long *local_80;
  undefined8 *puStack_78;
  char *local_70;
  int **ppiStack_68;
  undefined1 local_60 [16];
  char local_4c [4];
  undefined8 local_48;
  long local_40;
  int local_34;
  int *local_28;
  
  local_28 = param_1;
  if ((DAT_076dcfe9 & 1) == 0) {
    thunk_FUN_032e1da0(
                      UnityEngine_Rendering_Universal_DecalUpdateCachedSystem_UpdateTransformsJob_var
                      );
    thunk_FUN_032e1da0(PTR_DAT_07291940);
    thunk_FUN_032e1da0(PTR_DAT_072918c0);
    thunk_FUN_032e1da0(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleCubicBezierPoint_00000A67_PostfixBurstDelegate_var
                      );
    thunk_FUN_032e1da0(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleProjectilePoint_00000A6A_PostfixBurstDelegate_var
                      );
    thunk_FUN_032e1da0(
                      UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleQuadraticBezierPoint_00000A66_PostfixBurstDelegate_var
                      );
    thunk_FUN_032e1da0(UnityEngine_XR_OpenXR_Features_Interactions_DPadInteraction_DPad_var);
    DAT_076dcfe9 = 1;
  }
  local_4c[0] = '\0';
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_34 = *param_1;
  local_40 = *(long *)(param_1 + 8);
  local_48 = 0;
  if (local_34 != 0) {
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_05ff35a8(local_40,1,param_1[10] != 0);
    if (local_28[10] == 0) {
      if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar4 = FUN_032ef8c0(local_40 + 0x50,*(undefined8 *)(local_28 + 0xc),0);
      if (lVar4 != 0) {
        lVar4 = thunk_FUN_032e1da0(
                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetEvaluator_var
                                  );
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        FUN_05ff3830();
        uVar5 = thunk_FUN_032e1da0(
                                  Newtonsoft_Json_Serialization_DefaultContractResolver_EnumerableDictionaryWrapper<TEnumeratorKey,_TEnumeratorValue>_var
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar5,uVar5);
      }
    }
    else if (local_28[10] == 2) {
      if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar4 = FUN_032ef8c0(local_40 + 0x48,*(undefined8 *)(local_28 + 0xc),0);
      if (lVar4 != 0) {
        lVar4 = thunk_FUN_032e1da0(
                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetEvaluator_var
                                  );
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        FUN_05ff3830();
        uVar5 = thunk_FUN_032e1da0(
                                  Newtonsoft_Json_Serialization_DefaultContractResolver_EnumerableDictionaryWrapper<TEnumeratorKey,_TEnumeratorValue>_var
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar5,uVar5);
      }
      if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar4 = FUN_032ef8c0(local_40 + 0x50,*(undefined8 *)(local_28 + 0xc),0);
      if (lVar4 != 0) {
        lVar4 = thunk_FUN_032e1da0(
                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetEvaluator_var
                                  );
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        FUN_05ff3830();
        uVar5 = thunk_FUN_032e1da0(
                                  Newtonsoft_Json_Serialization_DefaultContractResolver_EnumerableDictionaryWrapper<TEnumeratorKey,_TEnumeratorValue>_var
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar5,uVar5);
      }
      if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar4 = FUN_032ef8c0(local_40 + 0x58,*(undefined8 *)(local_28 + 0xc),0);
      if (lVar4 != 0) {
        lVar4 = thunk_FUN_032e1da0(
                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetEvaluator_var
                                  );
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        FUN_05ff3830();
        uVar5 = thunk_FUN_032e1da0(
                                  Newtonsoft_Json_Serialization_DefaultContractResolver_EnumerableDictionaryWrapper<TEnumeratorKey,_TEnumeratorValue>_var
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar5,uVar5);
      }
    }
    else {
      if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar4 = FUN_032ef8c0(local_40 + 0x58,*(undefined8 *)(local_28 + 0xc),0);
      if (lVar4 != 0) {
        lVar4 = thunk_FUN_032e1da0(
                                  UnityEngine_XR_Interaction_Toolkit_Filtering_XRTargetEvaluator_var
                                  );
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        FUN_05ff3830();
        uVar5 = thunk_FUN_032e1da0(
                                  Newtonsoft_Json_Serialization_DefaultContractResolver_EnumerableDictionaryWrapper<TEnumeratorKey,_TEnumeratorValue>_var
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar5,uVar5);
      }
    }
  }
  puVar2 = PTR_DAT_072918c0;
  piStack_88 = &local_34;
  local_80 = &local_40;
  puStack_78 = &local_48;
  local_90 = 0;
  local_70 = local_4c;
  ppiStack_68 = &local_28;
  if (local_34 == 0) {
    local_60 = *(undefined1 (*) [16])(local_28 + 0x10);
    local_28[0x10] = 0;
    local_28[0x11] = 0;
    local_28[0x12] = 0;
    local_28[0x13] = 0;
    local_34 = -1;
    *local_28 = -1;
  }
  else {
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    local_48 = *(undefined8 *)(local_40 + 0x70);
    local_4c[0] = '\0';
    FUN_05987d14(local_48,local_4c,0);
    if (local_28[10] == 0) {
      if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(long *)(local_40 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_05ff03b0();
    }
    else {
      if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      if (*(long *)(local_40 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_05ff03b0();
    }
    if ((local_34 < 0) && (local_4c[0] != '\0')) {
      thunk_FUN_03313794(local_48,0);
    }
    if (*(long *)(local_28 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar4 = System_Data_Common_UInt32Storage__SetCapacity
                      (*(long *)(local_28 + 0xc),*(undefined8 *)(local_28 + 0xe));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    local_60 = FUN_04a4b83c(lVar4,0,*(undefined8 *)
                                     UnityEngine_XR_OpenXR_Features_Interactions_DPadInteraction_DPad_var
                           );
    uVar6 = FUN_04ed58b8(local_60,*(undefined8 *)
                                   UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleQuadraticBezierPoint_00000A66_PostfixBurstDelegate_var
                        );
    if ((uVar6 & 1) == 0) {
      local_34 = 0;
      *local_28 = 0;
      *(undefined1 (*) [16])(local_28 + 0x10) = local_60;
      thunk_FUN_0333a630(local_28 + 0x10,0);
      piVar8 = local_28;
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar4,extraout_x1,local_28);
      }
      FUN_035583a0(piVar8 + 2,local_60,local_28,
                   *(undefined8 *)
                    UnityEngine_Rendering_Universal_DecalUpdateCachedSystem_UpdateTransformsJob_var)
      ;
      lVar4 = 0;
      iVar7 = 0x16;
      goto LAB_05ff5bc8;
    }
  }
  lVar4 = FUN_04ed5904(local_60,*(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleProjectilePoint_00000A6A_PostfixBurstDelegate_var
                      );
  iVar7 = 0x19;
LAB_05ff5bc8:
  FUN_03229010(&local_90);
  if ((iVar7 == 0x19) || (iVar7 == 0)) {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(long *)(lVar4 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0584c8a4(*(long *)(lVar4 + 0x18),0);
    }
    uVar1 = *(undefined4 *)(lVar4 + 0x10);
    piVar8 = local_28 + 2;
    *local_28 = -2;
    puVar3 = PTR_DAT_07291940;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_0460136c(piVar8,uVar1,*(undefined8 *)puVar3);
  }
  return;
}


