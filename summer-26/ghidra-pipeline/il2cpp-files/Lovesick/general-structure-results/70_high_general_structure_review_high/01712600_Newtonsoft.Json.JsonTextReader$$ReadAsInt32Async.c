/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ReadAsInt32Async
ENTRY_POINT: 01712600
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


void Newtonsoft_Json_JsonTextReader__ReadAsInt32Async(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  short sVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  uint uVar11;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  uint uVar12;
  long lVar13;
  undefined1 *in_stack_00000008;
  
  FUN_01711fc0();
  FUN_01711fc0();
  if (*(char *)(*(long *)(*(long *)
                           Method_System_Collections_Generic_List<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Item__
                         + 0xb8) + 3) == '\0') {
    plVar5 = *(long **)(unaff_x20 + 0x78);
    if (plVar5 == (long *)0x0) goto LAB_01712b70;
    iVar4 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
    if (iVar4 == 3) {
      FUN_01711fc0();
      FUN_01711fc0();
      FUN_01711fc0();
    }
  }
  lVar6 = *(long *)(unaff_x20 + 0x20);
  if (lVar6 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_01712b70;
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x50);
    *(long *)(unaff_x20 + 0x20) = lVar6;
    if (lVar6 == 0) goto LAB_01712b70;
  }
  puVar2 = StringLiteral_11230;
  uVar7 = FUN_015fe250(lVar6,*(undefined8 *)
                              Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetException__
                       ,0);
  if ((uVar7 & 1) != 0) {
    FUN_01711fc0();
    FUN_01711fc0();
    FUN_01711fc0();
  }
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
  if (lVar6 == 0) goto LAB_01712b70;
  FUN_01712c44();
  lVar6 = FUN_01712cc0(lVar6);
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
  if ((lVar6 != 0) && (uVar11 = *(uint *)(lVar6 + 0x18), 0 < (int)uVar11)) {
    lVar13 = 0;
    lVar10 = lVar6 + 0x20;
    do {
      uVar12 = (uint)lVar13;
      if (uVar11 <= uVar12) goto LAB_01712b94;
      lVar8 = *(long *)(lVar10 + lVar13 * 8);
      if (lVar8 == 0) goto LAB_01712b70;
      sVar3 = FUN_015fa29c(lVar8,0,0);
      if (sVar3 == -0x1fff) {
        if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_01712b94;
        lVar8 = *(long *)(lVar10 + lVar13 * 8);
        if (lVar8 == 0) goto LAB_01712b70;
        uVar9 = FUN_01603ec8(lVar8,1,0);
        FUN_01711fc0();
        lVar8 = FUN_0170f380();
        if ((lVar8 == 0) || (lVar8 = FUN_016045b0(lVar8,0,0), lVar8 == 0)) goto LAB_01712b70;
        uVar7 = FUN_015fe250(lVar8,uVar9,0);
        if ((uVar7 & 1) != 0) {
          *in_stack_00000008 = 1;
        }
      }
      else if (sVar3 == -0x2000) {
        if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_01712b94;
        lVar8 = *(long *)(lVar10 + lVar13 * 8);
        if (lVar8 == 0) goto LAB_01712b70;
        FUN_01603ec8(lVar8,1,0);
        FUN_01712b98();
      }
      else {
        if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_01712b94;
        FUN_01711fc0();
        lVar8 = *(long *)(unaff_x20 + 0x20);
        if (lVar8 == 0) {
          if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_01712b70;
          lVar8 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x50);
          *(long *)(unaff_x20 + 0x20) = lVar8;
          if (lVar8 == 0) goto LAB_01712b70;
        }
        uVar7 = FUN_015fe250(lVar8,*puVar1,0);
        if ((uVar7 & 1) != 0) {
          if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_01712b94;
          FUN_015f5b28(*(undefined8 *)
                        Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__,
                       *(undefined8 *)(lVar10 + lVar13 * 8),0);
          FUN_01711fc0();
        }
      }
      uVar11 = *(uint *)(lVar6 + 0x18);
      lVar13 = lVar13 + 1;
    } while ((int)lVar13 < (int)uVar11);
  }
  lVar6 = *(long *)(unaff_x20 + 0x20);
  if (lVar6 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_01712b70;
    lVar6 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x50);
    *(long *)(unaff_x20 + 0x20) = lVar6;
    if (lVar6 == 0) goto LAB_01712b70;
  }
  puVar2 = Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetResult__;
  uVar7 = FUN_015fe250(lVar6,*(undefined8 *)StringLiteral_5740,0);
  if ((uVar7 & 1) == 0) {
    lVar6 = *(long *)(unaff_x20 + 0x18);
    if (lVar6 == 0) {
      if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_01712b70;
      lVar6 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x58);
      *(long *)(unaff_x20 + 0x18) = lVar6;
      if (lVar6 == 0) goto LAB_01712b70;
    }
    uVar7 = FUN_015fe250(lVar6,*(undefined8 *)Method_System_Array_SetValue__,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar6 = FUN_0171153c();
      if ((lVar6 != 0) && (plVar5 = *(long **)(lVar6 + 0x78), plVar5 != (long *)0x0)) {
        iVar4 = 1;
        do {
          lVar10 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
          if (lVar10 == 0) break;
          if (*(int *)(lVar10 + 0x18) < iVar4) {
            return;
          }
          lVar10 = Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(lVar6,iVar4);
          if (lVar10 == 0) break;
          if (0 < *(int *)(lVar10 + 0x10)) {
            Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(lVar6,iVar4);
            FUN_01711fc0();
          }
          plVar5 = *(long **)(lVar6 + 0x78);
          iVar4 = iVar4 + 1;
        } while (plVar5 != (long *)0x0);
      }
LAB_01712b70:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  else {
    iVar4 = 0;
    do {
      uVar9 = FUN_0170ff8c();
      FUN_01600424(*unaff_x25,uVar9,*unaff_x26,0);
      FUN_01711fc0();
      iVar4 = iVar4 + 1;
    } while (iVar4 != 7);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x78);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar7 = FUN_01712f84(uVar9);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar6 = FUN_017113a8();
      if ((lVar6 != 0) && (plVar5 = *(long **)(lVar6 + 0x78), plVar5 != (long *)0x0)) {
        uVar11 = 0;
        do {
          lVar10 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
          if (lVar10 == 0) break;
          iVar4 = uVar11 + 1;
          if (*(int *)(lVar10 + 0x18) < iVar4) {
            return;
          }
          Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(lVar6,iVar4);
          FUN_01711fc0();
          FUN_0170f240(lVar6,iVar4);
          FUN_01711fc0();
          lVar10 = FUN_0170f32c(lVar6);
          if (lVar10 == 0) break;
          if (*(uint *)(lVar10 + 0x18) <= uVar11) {
LAB_01712b94:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          FUN_01711fc0();
          plVar5 = *(long **)(lVar6 + 0x78);
          uVar11 = uVar11 + 1;
        } while (plVar5 != (long *)0x0);
      }
      goto LAB_01712b70;
    }
  }
  return;
}


