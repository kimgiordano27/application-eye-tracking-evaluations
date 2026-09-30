/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ReadAsStringAsync
ENTRY_POINT: 01712710
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


void Newtonsoft_Json_JsonTextReader__ReadAsStringAsync(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  short sVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long unaff_x20;
  int iVar10;
  undefined8 *unaff_x21;
  uint uVar11;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  uint uVar12;
  long lVar13;
  undefined1 *in_stack_00000008;
  
  FUN_01711fc0();
  FUN_01711fc0();
  FUN_01711fc0();
  lVar4 = thunk_FUN_00d62348(*unaff_x21);
  if (lVar4 == 0) goto LAB_01712b70;
  FUN_01712c44();
  lVar4 = FUN_01712cc0(lVar4);
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
  if ((lVar4 != 0) && (uVar11 = *(uint *)(lVar4 + 0x18), 0 < (int)uVar11)) {
    lVar13 = 0;
    lVar9 = lVar4 + 0x20;
    do {
      uVar12 = (uint)lVar13;
      if (uVar11 <= uVar12) goto LAB_01712b94;
      lVar5 = *(long *)(lVar9 + lVar13 * 8);
      if (lVar5 == 0) goto LAB_01712b70;
      sVar3 = FUN_015fa29c(lVar5,0,0);
      if (sVar3 == -0x1fff) {
        if (*(uint *)(lVar4 + 0x18) <= uVar12) goto LAB_01712b94;
        lVar5 = *(long *)(lVar9 + lVar13 * 8);
        if (lVar5 == 0) goto LAB_01712b70;
        uVar7 = FUN_01603ec8(lVar5,1,0);
        FUN_01711fc0();
        lVar5 = FUN_0170f380();
        if ((lVar5 == 0) || (lVar5 = FUN_016045b0(lVar5,0,0), lVar5 == 0)) goto LAB_01712b70;
        uVar6 = FUN_015fe250(lVar5,uVar7,0);
        if ((uVar6 & 1) != 0) {
          *in_stack_00000008 = 1;
        }
      }
      else if (sVar3 == -0x2000) {
        if (*(uint *)(lVar4 + 0x18) <= uVar12) goto LAB_01712b94;
        lVar5 = *(long *)(lVar9 + lVar13 * 8);
        if (lVar5 == 0) goto LAB_01712b70;
        FUN_01603ec8(lVar5,1,0);
        FUN_01712b98();
      }
      else {
        if (*(uint *)(lVar4 + 0x18) <= uVar12) goto LAB_01712b94;
        FUN_01711fc0();
        lVar5 = *(long *)(unaff_x20 + 0x20);
        if (lVar5 == 0) {
          if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_01712b70;
          lVar5 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x50);
          *(long *)(unaff_x20 + 0x20) = lVar5;
          if (lVar5 == 0) goto LAB_01712b70;
        }
        uVar6 = FUN_015fe250(lVar5,*puVar1,0);
        if ((uVar6 & 1) != 0) {
          if (*(uint *)(lVar4 + 0x18) <= uVar12) goto LAB_01712b94;
          FUN_015f5b28(*(undefined8 *)
                        Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__,
                       *(undefined8 *)(lVar9 + lVar13 * 8),0);
          FUN_01711fc0();
        }
      }
      uVar11 = *(uint *)(lVar4 + 0x18);
      lVar13 = lVar13 + 1;
    } while ((int)lVar13 < (int)uVar11);
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if (lVar4 == 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_01712b70;
    lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x50);
    *(long *)(unaff_x20 + 0x20) = lVar4;
    if (lVar4 == 0) goto LAB_01712b70;
  }
  puVar2 = Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetResult__;
  uVar6 = FUN_015fe250(lVar4,*(undefined8 *)StringLiteral_5740,0);
  if ((uVar6 & 1) == 0) {
    lVar4 = *(long *)(unaff_x20 + 0x18);
    if (lVar4 == 0) {
      if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_01712b70;
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x58);
      *(long *)(unaff_x20 + 0x18) = lVar4;
      if (lVar4 == 0) goto LAB_01712b70;
    }
    uVar6 = FUN_015fe250(lVar4,*(undefined8 *)Method_System_Array_SetValue__,0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar4 = FUN_0171153c();
      if ((lVar4 != 0) && (plVar8 = *(long **)(lVar4 + 0x78), plVar8 != (long *)0x0)) {
        iVar10 = 1;
        do {
          lVar9 = (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
          if (lVar9 == 0) break;
          if (*(int *)(lVar9 + 0x18) < iVar10) {
            return;
          }
          lVar9 = Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(lVar4,iVar10);
          if (lVar9 == 0) break;
          if (0 < *(int *)(lVar9 + 0x10)) {
            Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(lVar4,iVar10);
            FUN_01711fc0();
          }
          plVar8 = *(long **)(lVar4 + 0x78);
          iVar10 = iVar10 + 1;
        } while (plVar8 != (long *)0x0);
      }
LAB_01712b70:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  else {
    iVar10 = 0;
    do {
      uVar7 = FUN_0170ff8c();
      FUN_01600424(*unaff_x25,uVar7,*unaff_x26,0);
      FUN_01711fc0();
      iVar10 = iVar10 + 1;
    } while (iVar10 != 7);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x78);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar6 = FUN_01712f84(uVar7);
    if ((uVar6 & 1) == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar4 = FUN_017113a8();
      if ((lVar4 != 0) && (plVar8 = *(long **)(lVar4 + 0x78), plVar8 != (long *)0x0)) {
        uVar11 = 0;
        do {
          lVar9 = (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
          if (lVar9 == 0) break;
          iVar10 = uVar11 + 1;
          if (*(int *)(lVar9 + 0x18) < iVar10) {
            return;
          }
          Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(lVar4,iVar10);
          FUN_01711fc0();
          FUN_0170f240(lVar4,iVar10);
          FUN_01711fc0();
          lVar9 = FUN_0170f32c(lVar4);
          if (lVar9 == 0) break;
          if (*(uint *)(lVar9 + 0x18) <= uVar11) {
LAB_01712b94:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          FUN_01711fc0();
          plVar8 = *(long **)(lVar4 + 0x78);
          uVar11 = uVar11 + 1;
        } while (plVar8 != (long *)0x0);
      }
      goto LAB_01712b70;
    }
  }
  return;
}


