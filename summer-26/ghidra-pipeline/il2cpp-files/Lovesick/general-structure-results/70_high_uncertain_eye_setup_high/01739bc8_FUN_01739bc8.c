/*
FUNCTION_NAME: FUN_01739bc8
ENTRY_POINT: 01739bc8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_14;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01739bc8(undefined8 param_1,long param_2,long *param_3,uint param_4,byte *param_5,
                 byte *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  uint uVar14;
  long *local_68;
  long *local_58;
  
  local_58 = param_3;
  if ((DAT_03778b2a & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033eace0);
    thunk_FUN_00d48444(System_Dynamic_SetMemberBinder_TypeInfo);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(StringLiteral_3287);
    thunk_FUN_00d48444(Method_System_DefaultBinder_FindMostDerivedNewSlotMeth__);
    thunk_FUN_00d48444(PTR_DAT_033f38b8);
    thunk_FUN_00d48444(StringLiteral_12935);
    thunk_FUN_00d48444(Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__);
    thunk_FUN_00d48444(Method_Oculus_Interaction_PointableCanvas_<Start>b__4_0__);
    thunk_FUN_00d48444(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
    thunk_FUN_00d48444(System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__);
    DAT_03778b2a = 1;
  }
  local_68 = (long *)0x0;
  if ((param_3 != (long *)0x0) &&
     (plVar6 = (long *)(**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0)),
     local_68 = plVar6, plVar6 != (long *)0x0)) {
    uVar7 = (**(code **)(*plVar6 + 1000))(plVar6,*(undefined8 *)(*plVar6 + 0x3f0));
    plVar13 = param_3;
    plVar9 = local_58;
    if (((uVar7 & 1) != 0) &&
       (uVar7 = (**(code **)(*plVar6 + 0x3f8))(plVar6,*(undefined8 *)(*plVar6 + 0x400)),
       plVar9 = local_58, (uVar7 & 1) == 0)) {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x468))(plVar6,*(undefined8 *)(*plVar6 + 0x470));
      local_68 = plVar6;
      if ((plVar6 == (long *)0x0) ||
         (lVar8 = (**(code **)(*plVar6 + 0x7c8))(plVar6,0x3e,*(undefined8 *)(*plVar6 + 2000)),
         lVar8 == 0)) goto LAB_0173a210;
      uVar10 = *(uint *)(lVar8 + 0x18);
      plVar9 = local_58;
      if (0 < (int)uVar10) {
        uVar14 = 0;
        do {
          if (uVar10 <= uVar14) goto LAB_0173a214;
          plVar13 = *(long **)(lVar8 + (long)(int)uVar14 * 8 + 0x20);
          if (plVar13 == (long *)0x0) goto LAB_0173a210;
          iVar4 = (**(code **)(*plVar13 + 0x248))(plVar13,*(undefined8 *)(*plVar13 + 0x250));
          iVar5 = (**(code **)(*param_3 + 0x248))(param_3,*(undefined8 *)(*param_3 + 0x250));
          plVar9 = plVar13;
          if (iVar4 == iVar5) break;
          uVar10 = *(uint *)(lVar8 + 0x18);
          uVar14 = uVar14 + 1;
          plVar13 = param_3;
          plVar9 = local_58;
        } while ((int)uVar14 < (int)uVar10);
      }
    }
    local_58 = plVar9;
    puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    uVar12 = *(undefined8 *)Method_UnityEngine_Events_UnityEvent<MRUKTrackable>__ctor__;
    if (*(int *)(*(long *)Method_TMPro_TMP_TextProcessingStack<float>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar9 = (long *)FUN_01780344(uVar12,0);
    puVar2 = System_Dynamic_SetMemberBinder_TypeInfo;
    if (plVar9 != (long *)0x0) {
      bVar3 = (**(code **)(*plVar9 + 0x2c8))(plVar9,plVar6,*(undefined8 *)(*plVar9 + 0x2d0));
      *param_6 = bVar3 & 1;
      uVar12 = FUN_01780344(*(undefined8 *)puVar2,0);
      uVar7 = FUN_016b2cc4(plVar13,uVar12,0);
      if ((uVar7 & 1) == 0) {
        uVar12 = *(undefined8 *)puVar2;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_01780344(uVar12,0);
        bVar3 = FUN_016b2cc4(plVar6,uVar12,0);
        *param_5 = bVar3 & 1;
        if ((bVar3 & 1) == 0) {
          if (*param_6 != 0) {
            FUN_0173a220(&local_58,&local_68);
          }
          if ((param_4 & 1) == 0) {
            if (param_2 == 0) goto LAB_0173a210;
          }
          else {
            uVar12 = FUN_017b7e58(0);
            if (param_2 == 0) goto LAB_0173a210;
            FUN_0160c430(param_2,uVar12,0);
          }
          FUN_0160c430(param_2,*(undefined8 *)
                                Method_System_DefaultBinder_FindMostDerivedNewSlotMeth__,0);
          puVar1 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
          if (local_68 != (long *)0x0) {
            uVar12 = (**(code **)(*local_68 + 0x168))(local_68,*(undefined8 *)(*local_68 + 0x170));
            FUN_0160c430(param_2,uVar12,0);
            FUN_0160c430(param_2,*(undefined8 *)puVar1,0);
            plVar6 = local_58;
            if (local_58 != (long *)0x0) {
              uVar12 = (**(code **)(*local_58 + 0x1b8))(local_58,*(undefined8 *)(*local_58 + 0x1c0))
              ;
              FUN_0160c430(param_2,uVar12,0);
              uVar7 = (**(code **)(*plVar6 + 0x318))(plVar6,*(undefined8 *)(*plVar6 + 800));
              if ((uVar7 & 1) != 0) {
                lVar8 = *(long *)PTR_DAT_033eace0;
                if ((*(byte *)(*plVar6 + 300) < *(byte *)(lVar8 + 300)) ||
                   (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar8 + 300) * 8 + -8) !=
                    lVar8)) {
LAB_0173a218:
                    /* WARNING: Subroutine does not return */
                  FUN_00da544c(plVar6);
                }
                lVar11 = *plVar6;
                if ((*(byte *)(lVar11 + 300) < *(byte *)(lVar8 + 300)) ||
                   (*(long *)(*(long *)(lVar11 + 200) + (ulong)*(byte *)(lVar8 + 300) * 8 + -8) !=
                    lVar8)) goto LAB_0173a218;
                plVar6 = (long *)(**(code **)(lVar11 + 0x408))
                                           (plVar6,*(undefined8 *)(lVar11 + 0x410));
                puVar1 = Method_Oculus_Interaction_PointableCanvas_<Start>b__4_0__;
                local_58 = plVar6;
                if (plVar6 == (long *)0x0) goto LAB_0173a210;
                lVar8 = (**(code **)(*plVar6 + 0x338))(plVar6,*(undefined8 *)(*plVar6 + 0x340));
                FUN_0160c430(param_2,*(undefined8 *)puVar1,0);
                puVar1 = Method_System_Globalization_ThaiBuddhistCalendar_set_TwoDigitYearMax__;
                if (lVar8 == 0) goto LAB_0173a210;
                uVar10 = *(uint *)(lVar8 + 0x18);
                if (0 < (int)uVar10) {
                  uVar14 = 0;
                  do {
                    if (uVar14 != 0) {
                      FUN_0160c430(param_2,*(undefined8 *)puVar1,0);
                      uVar10 = *(uint *)(lVar8 + 0x18);
                    }
                    if (uVar10 <= uVar14) goto LAB_0173a214;
                    plVar13 = *(long **)(lVar8 + (long)(int)uVar14 * 8 + 0x20);
                    if (plVar13 == (long *)0x0) goto LAB_0173a210;
                    uVar12 = (**(code **)(*plVar13 + 0x1b8))
                                       (plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
                    FUN_0160c430(param_2,uVar12,0);
                    uVar10 = *(uint *)(lVar8 + 0x18);
                    uVar14 = uVar14 + 1;
                  } while ((int)uVar14 < (int)uVar10);
                }
                FUN_0160c430(param_2,*(undefined8 *)
                                      System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo
                             ,0);
              }
              puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__;
              lVar8 = (**(code **)(*plVar6 + 600))(plVar6,*(undefined8 *)(*plVar6 + 0x260));
              FUN_0160c430(param_2,*(undefined8 *)puVar1,0);
              puVar2 = StringLiteral_3287;
              puVar1 = PTR_DAT_033f38b8;
              if (lVar8 != 0) {
                uVar10 = *(uint *)(lVar8 + 0x18);
                if (0 < (int)uVar10) {
                  uVar14 = 0;
                  do {
                    if (uVar14 != 0) {
                      FUN_0160c430(param_2,*(undefined8 *)puVar1,0);
                      uVar10 = *(uint *)(lVar8 + 0x18);
                    }
                    if (uVar10 <= uVar14) {
LAB_0173a214:
                    /* WARNING: Subroutine does not return */
                      FUN_00da5194();
                    }
                    plVar13 = (long *)(lVar8 + (long)(int)uVar14 * 8 + 0x20);
                    plVar6 = (long *)*plVar13;
                    if (((plVar6 == (long *)0x0) ||
                        (plVar6 = (long *)(**(code **)(*plVar6 + 0x1e8))
                                                    (plVar6,*(undefined8 *)(*plVar6 + 0x1f0)),
                        plVar6 == (long *)0x0)) ||
                       ((uVar7 = (**(code **)(*plVar6 + 1000))
                                           (plVar6,*(undefined8 *)(*plVar6 + 0x3f0)),
                        (uVar7 & 1) != 0 &&
                        ((uVar7 = (**(code **)(*plVar6 + 0x3f8))
                                            (plVar6,*(undefined8 *)(*plVar6 + 0x400)),
                         (uVar7 & 1) == 0 &&
                         (plVar6 = (long *)(**(code **)(*plVar6 + 0x468))
                                                     (plVar6,*(undefined8 *)(*plVar6 + 0x470)),
                         plVar6 == (long *)0x0)))))) goto LAB_0173a210;
                    uVar12 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170))
                    ;
                    FUN_0160c430(param_2,uVar12,0);
                    if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_0173a214;
                    plVar6 = (long *)*plVar13;
                    if (plVar6 == (long *)0x0) goto LAB_0173a210;
                    lVar11 = (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0))
                    ;
                    if (lVar11 != 0) {
                      FUN_0160c430(param_2,*(undefined8 *)puVar2,0);
                      if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_0173a214;
                      plVar13 = (long *)*plVar13;
                      if (plVar13 == (long *)0x0) goto LAB_0173a210;
                      uVar12 = (**(code **)(*plVar13 + 0x1d8))
                                         (plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
                      FUN_0160c430(param_2,uVar12,0);
                    }
                    uVar10 = *(uint *)(lVar8 + 0x18);
                    uVar14 = uVar14 + 1;
                  } while ((int)uVar14 < (int)uVar10);
                }
                FUN_0160c430(param_2,*(undefined8 *)StringLiteral_12935,0);
                return;
              }
            }
          }
          goto LAB_0173a210;
        }
      }
      else {
        *param_5 = 1;
      }
      return;
    }
  }
LAB_0173a210:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


