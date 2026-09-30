/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ReadAsDoubleAsync
ENTRY_POINT: 017124f0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonTextReader__ReadAsDoubleAsync(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  short sVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  uint uVar13;
  uint uVar14;
  long lVar15;
  undefined1 *in_stack_00000008;
  
  puVar4 = StringLiteral_12935;
  puVar2 = 
  Method_Unity_XR_CoreUtils_Datums_DatumProperty<FollowPreset,_FollowPresetDatum>_get_Value__;
  FUN_01711fc0();
  FUN_01711fc0();
  FUN_01711fc0();
  FUN_01711fc0();
  FUN_01711fc0();
  FUN_01711fc0();
  FUN_01711fc0();
  FUN_01711fc0();
  FUN_01711fc0();
  FUN_01711fc0();
  if (*(char *)(*(long *)(*(long *)
                           Method_System_Collections_Generic_List<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Item__
                         + 0xb8) + 3) == '\0') {
    plVar7 = *(long **)(unaff_x20 + 0x78);
    if (plVar7 == (long *)0x0) goto LAB_01712b70;
    iVar6 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
    if (iVar6 == 3) {
      FUN_01711fc0();
      FUN_01711fc0();
      FUN_01711fc0();
    }
  }
  lVar8 = *(long *)(unaff_x20 + 0x20);
  if (lVar8 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_01712b70;
    lVar8 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x50);
    *(long *)(unaff_x20 + 0x20) = lVar8;
    if (lVar8 == 0) goto LAB_01712b70;
  }
  puVar3 = StringLiteral_11230;
  uVar9 = FUN_015fe250(lVar8,*(undefined8 *)
                              Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetException__
                       ,0);
  if ((uVar9 & 1) != 0) {
    FUN_01711fc0();
    FUN_01711fc0();
    FUN_01711fc0();
  }
  lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  if (lVar8 == 0) goto LAB_01712b70;
  FUN_01712c44();
  lVar8 = FUN_01712cc0(lVar8);
  puVar1 = (undefined8 *)
           Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedSpatialAnchorCore_<LoadSharedSpatialAnchorsRoutine>d__13>__
  ;
  if (*(int *)(unaff_x20 + 0x144) == -1) {
    FUN_01710fb8();
    puVar1 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedSpatialAnchorCore_<LoadSharedSpatialAnchorsRoutine>d__13>__
    ;
  }
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedSpatialAnchorCore_<LoadSharedSpatialAnchorsRoutine>d__13>__
       = (undefined *)puVar1;
  if ((lVar8 != 0) && (uVar13 = *(uint *)(lVar8 + 0x18), 0 < (int)uVar13)) {
    lVar15 = 0;
    lVar12 = lVar8 + 0x20;
    do {
      uVar14 = (uint)lVar15;
      if (uVar13 <= uVar14) goto LAB_01712b94;
      lVar10 = *(long *)(lVar12 + lVar15 * 8);
      if (lVar10 == 0) goto LAB_01712b70;
      sVar5 = FUN_015fa29c(lVar10,0,0);
      if (sVar5 == -0x1fff) {
        if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_01712b94;
        lVar10 = *(long *)(lVar12 + lVar15 * 8);
        if (lVar10 == 0) goto LAB_01712b70;
        uVar11 = FUN_01603ec8(lVar10,1,0);
        FUN_01711fc0();
        lVar10 = FUN_0170f380();
        if ((lVar10 == 0) || (lVar10 = FUN_016045b0(lVar10,0,0), lVar10 == 0)) goto LAB_01712b70;
        uVar9 = FUN_015fe250(lVar10,uVar11,0);
        if ((uVar9 & 1) != 0) {
          *in_stack_00000008 = 1;
        }
      }
      else if (sVar5 == -0x2000) {
        if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_01712b94;
        lVar10 = *(long *)(lVar12 + lVar15 * 8);
        if (lVar10 == 0) goto LAB_01712b70;
        FUN_01603ec8(lVar10,1,0);
        FUN_01712b98();
      }
      else {
        if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_01712b94;
        FUN_01711fc0();
        lVar10 = *(long *)(unaff_x20 + 0x20);
        if (lVar10 == 0) {
          if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_01712b70;
          lVar10 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x50);
          *(long *)(unaff_x20 + 0x20) = lVar10;
          if (lVar10 == 0) goto LAB_01712b70;
        }
        uVar9 = FUN_015fe250(lVar10,*puVar1,0);
        if ((uVar9 & 1) != 0) {
          if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_01712b94;
          FUN_015f5b28(*(undefined8 *)
                        Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__,
                       *(undefined8 *)(lVar12 + lVar15 * 8),0);
          FUN_01711fc0();
        }
      }
      uVar13 = *(uint *)(lVar8 + 0x18);
      lVar15 = lVar15 + 1;
    } while ((int)lVar15 < (int)uVar13);
  }
  lVar8 = *(long *)(unaff_x20 + 0x20);
  if (lVar8 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_01712b70;
    lVar8 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x50);
    *(long *)(unaff_x20 + 0x20) = lVar8;
    if (lVar8 == 0) goto LAB_01712b70;
  }
  puVar3 = Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetResult__;
  uVar9 = FUN_015fe250(lVar8,*(undefined8 *)StringLiteral_5740,0);
  if ((uVar9 & 1) == 0) {
    lVar8 = *(long *)(unaff_x20 + 0x18);
    if (lVar8 == 0) {
      if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_01712b70;
      lVar8 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x58);
      *(long *)(unaff_x20 + 0x18) = lVar8;
      if (lVar8 == 0) goto LAB_01712b70;
    }
    uVar9 = FUN_015fe250(lVar8,*(undefined8 *)Method_System_Array_SetValue__,0);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar8 = FUN_0171153c();
      if ((lVar8 != 0) && (plVar7 = *(long **)(lVar8 + 0x78), plVar7 != (long *)0x0)) {
        iVar6 = 1;
        do {
          lVar12 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
          if (lVar12 == 0) break;
          if (*(int *)(lVar12 + 0x18) < iVar6) {
            return;
          }
          lVar12 = Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(lVar8,iVar6);
          if (lVar12 == 0) break;
          if (0 < *(int *)(lVar12 + 0x10)) {
            Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(lVar8,iVar6);
            FUN_01711fc0();
          }
          plVar7 = *(long **)(lVar8 + 0x78);
          iVar6 = iVar6 + 1;
        } while (plVar7 != (long *)0x0);
      }
LAB_01712b70:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  else {
    iVar6 = 0;
    do {
      uVar11 = FUN_0170ff8c();
      FUN_01600424(*(undefined8 *)puVar2,uVar11,*(undefined8 *)puVar4,0);
      FUN_01711fc0();
      iVar6 = iVar6 + 1;
    } while (iVar6 != 7);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x78);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_01712f84(uVar11);
    if ((uVar9 & 1) == 0) {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar8 = FUN_017113a8();
      if ((lVar8 != 0) && (plVar7 = *(long **)(lVar8 + 0x78), plVar7 != (long *)0x0)) {
        uVar13 = 0;
        do {
          lVar12 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
          if (lVar12 == 0) break;
          iVar6 = uVar13 + 1;
          if (*(int *)(lVar12 + 0x18) < iVar6) {
            return;
          }
          Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(lVar8,iVar6);
          FUN_01711fc0();
          FUN_0170f240(lVar8,iVar6);
          FUN_01711fc0();
          lVar12 = FUN_0170f32c(lVar8);
          if (lVar12 == 0) break;
          if (*(uint *)(lVar12 + 0x18) <= uVar13) {
LAB_01712b94:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          FUN_01711fc0();
          plVar7 = *(long **)(lVar8 + 0x78);
          uVar13 = uVar13 + 1;
        } while (plVar7 != (long *)0x0);
      }
      goto LAB_01712b70;
    }
  }
  return;
}


