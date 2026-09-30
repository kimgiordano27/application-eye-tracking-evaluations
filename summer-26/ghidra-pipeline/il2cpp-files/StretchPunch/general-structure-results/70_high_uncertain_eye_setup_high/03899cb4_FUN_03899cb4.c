/*
FUNCTION_NAME: FUN_03899cb4
ENTRY_POINT: 03899cb4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03899f38) */

void FUN_03899cb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  uint uVar14;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  puVar2 = Field_UnityEngine_EventSystems_RaycastResult_m_GameObject;
  puVar1 = Field_UnityEngine_InputSystem_UI_NavigationModel_eventData;
  if ((DAT_044aa252 & 1) == 0) {
    FUN_01d7d918(PTR_DAT_0422f830);
    FUN_01d7d918(PTR_DAT_0422f838);
    FUN_01d7d918(PTR_DAT_0422e000);
    FUN_01d7d918(PTR_DAT_0422f840);
    FUN_01d7d918(StringLiteral_3584);
    FUN_01d7d918(PTR_DAT_0422f848);
    FUN_01d7d918(PTR_DAT_0422f850);
    FUN_01d7d918(PTR_DAT_0422f858);
    FUN_01d7d918(StringLiteral_3585);
    FUN_01d7d918(StringLiteral_3586);
    FUN_01d7d918(PTR_DAT_0422f860);
    FUN_01d7d918(PTR_DAT_0422f868);
    FUN_01d7d918(StringLiteral_2919);
    FUN_01d7d918(Field_System_Reflection_ParameterInfo_ClassImpl);
    FUN_01d7d918(PTR_DAT_0422f870);
    FUN_01d7d918(PTR_DAT_0422a860);
    FUN_01d7d918(Field_UnityEngine_EventSystems_RaycastResult_m_GameObject);
    FUN_01d7d918(Field_UnityEngine_Playables_PlayableBinding_m_SourceBindingType);
    FUN_01d7d918(Field_UnityEngine_InputSystem_UI_NavigationModel_eventData);
    FUN_01d7d918(StringLiteral_7033);
    FUN_01d7d918(StringLiteral_3587);
    FUN_01d7d918(PTR_DAT_0422f878);
    FUN_01d7d918(StringLiteral_3695);
    DAT_044aa252 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  lVar8 = thunk_FUN_01de27b8(*(undefined8 *)puVar1);
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            (lVar8,*(undefined8 *)puVar2);
  puVar7 = PTR_DAT_0422f858;
  puVar6 = PTR_DAT_0422f850;
  puVar5 = StringLiteral_7033;
  puVar4 = StringLiteral_3587;
  puVar3 = StringLiteral_3585;
  puVar2 = StringLiteral_3584;
  puVar1 = Field_System_Reflection_ParameterInfo_ClassImpl;
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x68), lVar9 != 0)) {
    FUN_0319996c(&local_d8,lVar9,*(undefined8 *)PTR_DAT_0422f878);
    uStack_78 = uStack_d0;
    local_80 = local_d8;
    local_70 = local_c8;
    while (uVar10 = FUN_02c52b88(&local_80,*(undefined8 *)puVar7), lVar9 = local_70,
          (uVar10 & 1) != 0) {
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if (*(long *)(local_70 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar10 = FUN_03199300(*(long *)(local_70 + 0x18),param_2,*(undefined8 *)puVar5);
      if ((uVar10 & 1) != 0) {
        if (*(long *)(lVar9 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        FUN_0319996c(&local_d8,*(long *)(lVar9 + 0x58),*(undefined8 *)puVar4);
        uStack_98 = uStack_d0;
        local_a0 = local_d8;
        local_90 = local_c8;
        while (uVar10 = FUN_02c52b88(&local_a0,*(undefined8 *)puVar3), (uVar10 & 1) != 0) {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          FUN_02f17d24(lVar8,local_90,*(undefined8 *)puVar1);
        }
        FUN_02c52b84(&local_a0,*(undefined8 *)puVar2);
      }
    }
    FUN_02c52b84(&local_80,*(undefined8 *)PTR_DAT_0422f840);
    puVar1 = StringLiteral_2919;
    if (((*(long *)(param_1 + 0x10) != 0) &&
        (lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0xf0), lVar9 != 0)) && (lVar8 != 0)) {
      FUN_02f17400(lVar8,*(undefined8 *)(lVar9 + 0x70),*(undefined8 *)PTR_DAT_0422a860);
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar10 = thunk_FUN_03278f50(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1e0),param_2,0);
        if ((uVar10 & 1) != 0) {
          lVar9 = *(long *)(param_1 + 0x10);
          if ((lVar9 == 0) || (*(long *)(lVar9 + 0x1d0) == 0)) goto LAB_0389a2bc;
          if (*(int *)(lVar8 + 0x20) + 1 == *(int *)(*(long *)(lVar9 + 0x1d0) + 0x18)) {
            if (*(long *)(lVar9 + 0xf0) == 0) goto LAB_0389a2bc;
            uVar10 = thunk_FUN_03278f50(*(undefined8 *)(lVar9 + 0x1e8),
                                        *(undefined8 *)(*(long *)(lVar9 + 0xf0) + 0x70),0);
            if ((uVar10 & 1) != 0) {
              return;
            }
          }
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          FUN_02063008(*(long *)(param_1 + 0x10) + 0x1d0,*(int *)(lVar8 + 0x20) + 1,
                       *(undefined8 *)PTR_DAT_0422f830);
          if (*(long *)(param_1 + 0x10) != 0) {
            FUN_02062f00(*(long *)(param_1 + 0x10) + 0x1d8,*(int *)(lVar8 + 0x20) + 1,
                         *(undefined8 *)PTR_DAT_0422f838);
            if (*(long *)(param_1 + 0x10) != 0) {
              plVar13 = *(long **)(*(long *)(param_1 + 0x10) + 0x1d0);
              lVar9 = thunk_FUN_01de27b8(*(undefined8 *)puVar1);
              FUN_03da93c4(lVar9,*(undefined8 *)StringLiteral_3695,0);
              if (plVar13 != (long *)0x0) {
                if ((lVar9 != 0) &&
                   (lVar11 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar13 + 0x40)), lVar11 == 0
                   )) {
                  uVar12 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
                  FUN_01d7da3c(uVar12,0);
                }
                if ((int)plVar13[3] == 0) {
LAB_0389a2d8:
                    /* WARNING: Subroutine does not return */
                  FUN_01d7db78();
                }
                plVar13[4] = lVar9;
                thunk_FUN_01e10808(plVar13 + 4,lVar9);
                if ((*(long *)(param_1 + 0x10) != 0) &&
                   (lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x1d8), lVar9 != 0)) {
                  if (*(int *)(lVar9 + 0x18) == 0) goto LAB_0389a2d8;
                  *(undefined4 *)(lVar9 + 0x20) = 0;
                  FUN_02f176a8(&local_d8,lVar8,*(undefined8 *)PTR_DAT_0422f870);
                  uVar14 = 1;
                  uStack_b8 = uStack_d0;
                  local_c0 = local_d8;
                  local_b0 = local_c8;
                  while (uVar10 = FUN_02c5240c(&local_c0,*(undefined8 *)puVar6), lVar8 = local_b0,
                        (uVar10 & 1) != 0) {
                    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01d7db70();
                    }
                    plVar13 = *(long **)(*(long *)(param_1 + 0x10) + 0x1d0);
                    lVar9 = thunk_FUN_01de27b8(*(undefined8 *)puVar1);
                    FUN_03da93c4(lVar9,lVar8,0);
                    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01d7db70();
                    }
                    if ((lVar9 != 0) &&
                       (lVar8 = thunk_FUN_01de26bc(lVar9,*(undefined8 *)(*plVar13 + 0x40)),
                       lVar8 == 0)) {
                      uVar12 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
                      FUN_01d7da3c(uVar12,0);
                    }
                    if (*(uint *)(plVar13 + 3) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                      FUN_01d7db78();
                    }
                    plVar13[(long)(int)uVar14 + 4] = lVar9;
                    thunk_FUN_01e10808(plVar13 + (long)(int)uVar14 + 4,lVar9);
                    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01d7db70();
                    }
                    lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x1d8);
                    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01d7db70();
                    }
                    if (*(uint *)(lVar8 + 0x18) <= uVar14) {
                    /* WARNING: Subroutine does not return */
                      FUN_01d7db78();
                    }
                    *(uint *)(lVar8 + (long)(int)uVar14 * 4 + 0x20) = uVar14;
                    uVar14 = uVar14 + 1;
                  }
                  System_Collections_Generic_EqualityComparer<JobHandle>___ctor
                            (&local_c0,*(undefined8 *)PTR_DAT_0422f848);
                  lVar8 = *(long *)(param_1 + 0x10);
                  if (lVar8 != 0) {
                    *(undefined8 *)(lVar8 + 0x1e0) = param_2;
                    thunk_FUN_01e10808(lVar8 + 0x1e0,param_2);
                    lVar8 = *(long *)(param_1 + 0x10);
                    if ((lVar8 != 0) && (*(long *)(lVar8 + 0xf0) != 0)) {
                      *(undefined8 *)(lVar8 + 0x1e8) =
                           *(undefined8 *)(*(long *)(lVar8 + 0xf0) + 0x70);
                      thunk_FUN_01e10808(lVar8 + 0x1e8);
                      lVar8 = *(long *)(param_1 + 0x10);
                      if ((lVar8 != 0) && (*(long *)(lVar8 + 0x1f0) != 0)) {
                        *(undefined8 *)(*(long *)(lVar8 + 0x1f0) + 0x60) =
                             *(undefined8 *)(lVar8 + 0x1d0);
                        thunk_FUN_01e10808();
                        lVar8 = *(long *)(param_1 + 0x10);
                        if ((lVar8 != 0) && (*(long *)(lVar8 + 0x1f0) != 0)) {
                          FUN_02c214ec(*(long *)(lVar8 + 0x1f0),*(undefined8 *)(lVar8 + 0x1d8),
                                       *(undefined8 *)PTR_DAT_0422e000);
                          lVar8 = *(long *)(param_1 + 0x10);
                          if ((lVar8 != 0) &&
                             ((lVar9 = *(long *)(lVar8 + 400), lVar9 != 0 &&
                              (*(long *)(lVar8 + 0x1d0) != 0)))) {
                            if (*(int *)(*(long *)(lVar8 + 0x1d0) + 0x18) <= *(int *)(lVar9 + 0x44))
                            {
                              *(undefined4 *)(lVar9 + 0x44) = 0;
                            }
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
  }
LAB_0389a2bc:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


