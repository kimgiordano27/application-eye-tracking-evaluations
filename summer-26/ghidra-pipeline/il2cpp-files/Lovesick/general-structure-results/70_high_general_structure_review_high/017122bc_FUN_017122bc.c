/*
FUNCTION_NAME: FUN_017122bc
ENTRY_POINT: 017122bc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_017122bc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  short sVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  
  if ((DAT_03778a17 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Item__
                      );
    thunk_FUN_00d48444(StringLiteral_11230);
    thunk_FUN_00d48444(Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetResult__);
    thunk_FUN_00d48444(PTR_DAT_033ecd20);
    thunk_FUN_00d48444(StringLiteral_5740);
    thunk_FUN_00d48444(StringLiteral_8047);
    thunk_FUN_00d48444(PTR_DAT_033f3910);
    thunk_FUN_00d48444(Method_System_ParseNumbers_StringToLong__);
    thunk_FUN_00d48444(PTR_DAT_033f12e0);
    thunk_FUN_00d48444(MedleyBossPhase1_<DestroyRingsCoroutine>d__30_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9189);
    thunk_FUN_00d48444(System_Xml_Schema_XmlSchemaSimpleType___TypeInfo);
    thunk_FUN_00d48444(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetException__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<XRInputSubsystem>_MoveNext__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedSpatialAnchorCore_<LoadSharedSpatialAnchorsRoutine>d__13>__
                      );
    thunk_FUN_00d48444(StringLiteral_8592);
    thunk_FUN_00d48444(StringLiteral_10434);
    thunk_FUN_00d48444(
                      Method_Unity_XR_CoreUtils_Datums_DatumProperty<FollowPreset,_FollowPresetDatum>_get_Value__
                      );
    thunk_FUN_00d48444(Method_System_Xml_Linq_XContainer__ctor__);
    thunk_FUN_00d48444(UnityEngine_UI_Slider_var);
    thunk_FUN_00d48444(StringLiteral_12935);
    thunk_FUN_00d48444(Method_System_Array_SetValue__);
    thunk_FUN_00d48444(StringLiteral_4578);
    thunk_FUN_00d48444(StringLiteral_9381);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__);
    DAT_03778a17 = 1;
  }
  lVar13 = *(long *)(param_1 + 0x20);
  if (lVar13 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_01712b70;
    lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
    *(long *)(param_1 + 0x20) = lVar13;
    if (lVar13 == 0) goto LAB_01712b70;
  }
  puVar2 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
  uVar14 = FUN_015fe250(lVar13,*(undefined8 *)System_Xml_Schema_XmlSchemaSimpleType___TypeInfo,0);
  if ((uVar14 & 1) != 0) {
    lVar13 = *(long *)(param_1 + 0x38);
    if (lVar13 == 0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_01712b70;
      lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      *(long *)(param_1 + 0x38) = lVar13;
    }
    uVar15 = FUN_015f5b28(*(undefined8 *)puVar2,lVar13,0);
    FUN_01711fc0(param_1,param_2,uVar15,0x403,0);
    lVar13 = *(long *)(param_1 + 0x40);
    if (lVar13 == 0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_01712b70;
      lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
      *(long *)(param_1 + 0x40) = lVar13;
    }
    uVar15 = FUN_015f5b28(*(undefined8 *)puVar2,lVar13,0);
    FUN_01711fc0(param_1,param_2,uVar15,0x504,1);
  }
  puVar10 = StringLiteral_12935;
  puVar9 = StringLiteral_9189;
  puVar8 = StringLiteral_8592;
  puVar7 = StringLiteral_8047;
  puVar6 = Method_System_Xml_Linq_XContainer__ctor__;
  puVar5 = Method_System_Collections_Generic_List_Enumerator<XRInputSubsystem>_MoveNext__;
  puVar4 = 
  Method_Unity_XR_CoreUtils_Datums_DatumProperty<FollowPreset,_FollowPresetDatum>_get_Value__;
  puVar3 = PTR_DAT_033f3910;
  puVar2 = PTR_DAT_033ecd20;
  FUN_01711fc0(param_1,param_2,*(undefined8 *)StringLiteral_9381,0x800,0);
  FUN_01711fc0(param_1,param_2,*(undefined8 *)puVar3,0x800,0);
  FUN_01711fc0(param_1,param_2,*(undefined8 *)puVar6,0x900,0);
  FUN_01711fc0(param_1,param_2,*(undefined8 *)puVar7,0x900,0);
  FUN_01711fc0(param_1,param_2,*(undefined8 *)puVar5,0xa00,0);
  FUN_01711fc0(param_1,param_2,*(undefined8 *)puVar9,0xa00,0);
  FUN_01711fc0(param_1,param_2,*(undefined8 *)puVar8,0xb00,0);
  FUN_01711fc0(param_1,param_2,*(undefined8 *)puVar2,0xb00,0);
  FUN_01711fc0(param_1,param_2,*(undefined8 *)UnityEngine_UI_Slider_var,0xc00,0);
  FUN_01711fc0(param_1,param_2,*(undefined8 *)PTR_DAT_033f12e0,0xd00,0);
  if (*(char *)(*(long *)(*(long *)
                           Method_System_Collections_Generic_List<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Item__
                         + 0xb8) + 3) == '\0') {
    plVar16 = *(long **)(param_1 + 0x78);
    if (plVar16 == (long *)0x0) goto LAB_01712b70;
    iVar12 = (**(code **)(*plVar16 + 0x1a8))(plVar16,*(undefined8 *)(*plVar16 + 0x1b0));
    if (iVar12 == 3) {
      FUN_01711fc0(param_1,param_2,*(undefined8 *)StringLiteral_4578,2,1);
      FUN_01711fc0(param_1,param_2,*(undefined8 *)puVar4,0xf,0);
      FUN_01711fc0(param_1,param_2,*(undefined8 *)puVar10,0xf,0);
    }
  }
  lVar13 = *(long *)(param_1 + 0x20);
  if (lVar13 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_01712b70;
    lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
    *(long *)(param_1 + 0x20) = lVar13;
    if (lVar13 == 0) goto LAB_01712b70;
  }
  puVar5 = StringLiteral_11230;
  uVar14 = FUN_015fe250(lVar13,*(undefined8 *)
                                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetException__
                        ,0);
  puVar3 = StringLiteral_10434;
  puVar2 = Method_System_ParseNumbers_StringToLong__;
  if ((uVar14 & 1) != 0) {
    FUN_01711fc0(param_1,param_2,
                 *(undefined8 *)MedleyBossPhase1_<DestroyRingsCoroutine>d__30_TypeInfo,0xb00,0);
    FUN_01711fc0(param_1,param_2,*(undefined8 *)puVar3,0xc00,0);
    FUN_01711fc0(param_1,param_2,*(undefined8 *)puVar2,0xd00,0);
  }
  lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
  if (lVar13 == 0) goto LAB_01712b70;
  FUN_01712c44();
  lVar13 = FUN_01712cc0(lVar13,param_1);
  puVar1 = (undefined8 *)
           Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedSpatialAnchorCore_<LoadSharedSpatialAnchorsRoutine>d__13>__
  ;
  if (*(int *)(param_1 + 0x144) == -1) {
    FUN_01710fb8(param_1);
    puVar1 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedSpatialAnchorCore_<LoadSharedSpatialAnchorsRoutine>d__13>__
    ;
  }
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedSpatialAnchorCore_<LoadSharedSpatialAnchorsRoutine>d__13>__
       = (undefined *)puVar1;
  if ((lVar13 != 0) && (uVar19 = *(uint *)(lVar13 + 0x18), 0 < (int)uVar19)) {
    lVar21 = 0;
    lVar18 = lVar13 + 0x20;
    do {
      uVar20 = (uint)lVar21;
      if (uVar19 <= uVar20) goto LAB_01712b94;
      lVar17 = *(long *)(lVar18 + lVar21 * 8);
      if (lVar17 == 0) goto LAB_01712b70;
      sVar11 = FUN_015fa29c(lVar17,0,0);
      if (sVar11 == -0x1fff) {
        if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_01712b94;
        lVar17 = *(long *)(lVar18 + lVar21 * 8);
        if (lVar17 == 0) goto LAB_01712b70;
        uVar15 = FUN_01603ec8(lVar17,1,0);
        FUN_01711fc0(param_1,param_2,uVar15,0xf,0);
        lVar17 = FUN_0170f380(param_1);
        if ((lVar17 == 0) || (lVar17 = FUN_016045b0(lVar17,0,0), lVar17 == 0)) goto LAB_01712b70;
        uVar14 = FUN_015fe250(lVar17,uVar15,0);
        if ((uVar14 & 1) != 0) {
          *param_3 = 1;
        }
      }
      else if (sVar11 == -0x2000) {
        if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_01712b94;
        lVar17 = *(long *)(lVar18 + lVar21 * 8);
        if (lVar17 == 0) goto LAB_01712b70;
        uVar15 = FUN_01603ec8(lVar17,1,0);
        FUN_01712b98(param_1,param_2,uVar15);
      }
      else {
        if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_01712b94;
        FUN_01711fc0(param_1,param_2,*(undefined8 *)(lVar18 + lVar21 * 8),10,0);
        lVar17 = *(long *)(param_1 + 0x20);
        if (lVar17 == 0) {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_01712b70;
          lVar17 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
          *(long *)(param_1 + 0x20) = lVar17;
          if (lVar17 == 0) goto LAB_01712b70;
        }
        uVar14 = FUN_015fe250(lVar17,*puVar1,0);
        if ((uVar14 & 1) != 0) {
          if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_01712b94;
          uVar15 = FUN_015f5b28(*(undefined8 *)
                                 Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__
                                ,*(undefined8 *)(lVar18 + lVar21 * 8),0);
          FUN_01711fc0(param_1,param_2,uVar15,10,0);
        }
      }
      uVar19 = *(uint *)(lVar13 + 0x18);
      lVar21 = lVar21 + 1;
    } while ((int)lVar21 < (int)uVar19);
  }
  lVar13 = *(long *)(param_1 + 0x20);
  if (lVar13 == 0) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_01712b70;
    lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x50);
    *(long *)(param_1 + 0x20) = lVar13;
    if (lVar13 == 0) goto LAB_01712b70;
  }
  puVar2 = Method_OVRTaskBuilder<OVRSceneManager_LoadSceneModelResult>_SetResult__;
  uVar14 = FUN_015fe250(lVar13,*(undefined8 *)StringLiteral_5740,0);
  if ((uVar14 & 1) == 0) {
    lVar13 = *(long *)(param_1 + 0x18);
    if (lVar13 == 0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_01712b70;
      lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x58);
      *(long *)(param_1 + 0x18) = lVar13;
      if (lVar13 == 0) goto LAB_01712b70;
    }
    uVar14 = FUN_015fe250(lVar13,*(undefined8 *)Method_System_Array_SetValue__,0);
    if ((uVar14 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar13 = FUN_0171153c();
      if ((lVar13 != 0) && (plVar16 = *(long **)(lVar13 + 0x78), plVar16 != (long *)0x0)) {
        iVar12 = 1;
        do {
          lVar18 = (**(code **)(*plVar16 + 0x238))(plVar16,*(undefined8 *)(*plVar16 + 0x240));
          if (lVar18 == 0) break;
          if (*(int *)(lVar18 + 0x18) < iVar12) {
            return;
          }
          lVar18 = Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(lVar13,iVar12);
          if (lVar18 == 0) break;
          if (0 < *(int *)(lVar18 + 0x10)) {
            uVar15 = Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(lVar13,iVar12);
            FUN_01711fc0(param_1,param_2,uVar15,0xe,iVar12);
          }
          plVar16 = *(long **)(lVar13 + 0x78);
          iVar12 = iVar12 + 1;
        } while (plVar16 != (long *)0x0);
      }
LAB_01712b70:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  else {
    iVar12 = 0;
    do {
      uVar15 = FUN_0170ff8c(param_1,iVar12);
      uVar15 = FUN_01600424(*(undefined8 *)puVar4,uVar15,*(undefined8 *)puVar10,0);
      FUN_01711fc0(param_1,param_2,uVar15,7,iVar12);
      iVar12 = iVar12 + 1;
    } while (iVar12 != 7);
    uVar15 = *(undefined8 *)(param_1 + 0x78);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar14 = FUN_01712f84(uVar15);
    if ((uVar14 & 1) == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar13 = FUN_017113a8();
      if ((lVar13 != 0) && (plVar16 = *(long **)(lVar13 + 0x78), plVar16 != (long *)0x0)) {
        uVar19 = 0;
        do {
          lVar18 = (**(code **)(*plVar16 + 0x238))(plVar16,*(undefined8 *)(*plVar16 + 0x240));
          if (lVar18 == 0) break;
          iVar12 = uVar19 + 1;
          if (*(int *)(lVar18 + 0x18) < iVar12) {
            return;
          }
          uVar15 = Newtonsoft_Json_JsonSerializerSettings__set_DateFormatString(lVar13,iVar12);
          FUN_01711fc0(param_1,param_2,uVar15,0xd,iVar12);
          uVar15 = FUN_0170f240(lVar13,iVar12);
          FUN_01711fc0(param_1,param_2,uVar15,0xd,iVar12);
          lVar18 = FUN_0170f32c(lVar13);
          if (lVar18 == 0) break;
          if (*(uint *)(lVar18 + 0x18) <= uVar19) {
LAB_01712b94:
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          FUN_01711fc0(param_1,param_2,*(undefined8 *)(lVar18 + (long)(int)uVar19 * 8 + 0x20),0xd,
                       iVar12);
          plVar16 = *(long **)(lVar13 + 0x78);
          uVar19 = uVar19 + 1;
        } while (plVar16 != (long *)0x0);
      }
      goto LAB_01712b70;
    }
  }
  return;
}


