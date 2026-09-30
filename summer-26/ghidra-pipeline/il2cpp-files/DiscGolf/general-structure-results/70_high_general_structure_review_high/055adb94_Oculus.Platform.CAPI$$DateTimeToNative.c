/*
FUNCTION_NAME: Oculus.Platform.CAPI$$DateTimeToNative
ENTRY_POINT: 055adb94
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


undefined8
Oculus_Platform_CAPI__DateTimeToNative
          (long param_1,undefined8 param_2,long *param_3,long param_4,undefined8 param_5,
          long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  undefined8 in_stack_00000050;
  
                    /* try { // try from 055adbc4 to 056adbdb has its CatchHandler @ 055adf48 */
  uStack0000000000000010 = param_5;
  if ((DAT_06dbb64f & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc178);
    FUN_02d965b8(System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo);
    FUN_02d965b8(System_Action<PropertyContainer_GetPropertyVisitor>_TypeInfo);
    FUN_02d965b8(System_Action<UITKTextJobSystem_ManagedJobData>_TypeInfo);
                    /* try { // try from 055adbfc to 056adc0f has its CatchHandler @ 055adf44 */
    FUN_02d965b8(System_Action<XRInputModalityManager_InputMode>_TypeInfo);
    FUN_02d965b8(System_Action<DebugUI_Field<bool>,_bool>_TypeInfo);
    FUN_02d965b8(System_Action<DebugUI_Field<int>,_int>_TypeInfo);
    FUN_02d965b8(System_Action<DebugUI_Field<Object>,_Object>_TypeInfo);
                    /* try { // try from 055adc30 to 056adc43 has its CatchHandler @ 055adf74 */
    FUN_02d965b8(UnityEngine_UIElements_PanelRaycaster_var);
    FUN_02d965b8(System_Net_ServicePoint_var);
    FUN_02d965b8(PTR_DAT_06a119e8);
    FUN_02d965b8(System_Action<List<OVRAnchor>,_int>_TypeInfo);
    FUN_02d965b8(System_Action<List<Product>,_List<Purchase>>_TypeInfo);
    FUN_02d965b8(System_Runtime_Serialization_SerializationEntry_var);
    FUN_02d965b8(UnityEngine_UI_ScrollRect_var);
                    /* try { // try from 055adc7c to 056adcb3 has its CatchHandler @ 055adf04 */
    FUN_02d965b8(
                System_Action<OVRResult<OVRAnchor_ShareResult>,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                );
    FUN_02d965b8(System_Action<AvatarLOD,_bool>_TypeInfo);
    FUN_02d965b8(System_Action<bool,_List<OVRAnchor>>_TypeInfo);
    FUN_02d965b8(System_Action<Column,_ColumnDataType>_TypeInfo);
    FUN_02d965b8(System_Action<OVRColocationSession_Data>_TypeInfo);
    DAT_06dbb64f = 1;
  }
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  FUN_055b5334(param_1,param_3,param_4,param_2);
  if (param_4 == 0) goto LAB_055ae4e8;
  uVar5 = FUN_055aae50(param_4);
  puVar2 = System_Action<bool,_List<OVRAnchor>>_TypeInfo;
  if ((uVar5 & 1) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_055ae4e8;
    if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x2c) >> 1 & 1) != 0) goto LAB_055add0c;
    lVar14 = 0;
  }
  else {
LAB_055add0c:
    uVar6 = *(undefined8 *)(param_4 + 0xd8);
    lVar14 = *(long *)System_Action<bool,_List<OVRAnchor>>_TypeInfo;
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar14 = *(long *)puVar2;
    }
    puVar13 = *(undefined8 **)(lVar14 + 0xb8);
    lVar8 = puVar13[3];
    if (lVar8 == 0) {
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar13 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar9 = *puVar13;
      lVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                  System_Action<DebugUI_Field<Object>,_Object>_TypeInfo);
      FUN_03b78e40(lVar8,uVar9,
                   *(undefined8 *)
                    System_Action<OVRResult<OVRAnchor_ShareResult>,_IEnumerable<OVRSpatialAnchor>>_TypeInfo
                   ,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      *plVar7 = lVar8;
      LeanTween__value(plVar7,lVar8);
      lVar14 = *(long *)puVar2;
    }
    if (*(int *)(lVar14 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar14 = *(long *)puVar2;
    }
    puVar1 = System_Action<PropertyContainer_GetPropertyVisitor>_TypeInfo;
    puVar13 = *(undefined8 **)(lVar14 + 0xb8);
    lVar12 = puVar13[4];
    if (lVar12 == 0) {
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar13 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar9 = *puVar13;
      lVar12 = thunk_FUN_02dd3144(*(undefined8 *)System_Action<DebugUI_Field<int>,_int>_TypeInfo);
      FUN_03b788b4(lVar12,uVar9,*(undefined8 *)System_Action<AvatarLOD,_bool>_TypeInfo,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
      *plVar7 = lVar12;
      LeanTween__value(plVar7,lVar12);
    }
    lVar14 = FUN_03614a1c(uVar6,lVar8,lVar12,*(undefined8 *)puVar1);
  }
  if (param_6 != 0) {
    FUN_055b4f70(param_1,param_3,param_6,param_2);
  }
  puVar2 = System_Action<XRInputModalityManager_InputMode>_TypeInfo;
  if (param_3 != (long *)0x0) {
    uVar3 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
    do {
      iVar4 = (**(code **)(*param_3 + 0x188))(param_3,*(undefined8 *)(*param_3 + 400));
      if (iVar4 == 4) {
        plVar7 = (long *)(**(code **)(*param_3 + 0x198))(param_3,*(undefined8 *)(*param_3 + 0x1a0));
        if (plVar7 == (long *)0x0) break;
        uVar6 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        uVar5 = FUN_055afb58(param_1,param_3,uVar6);
        if ((uVar5 & 1) == 0) {
          if (*(long *)(param_4 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar8 = FUN_055abe7c(*(long *)(param_4 + 0xd8),uVar6);
          if (lVar8 == 0) {
            if (*(long *)(param_1 + 0x28) != 0) {
              uVar6 = FUN_0665018c();
              return uVar6;
            }
            if ((*(ulong *)(param_4 + 0xc0) & 0xff) == 0) {
              if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              iVar4 = *(int *)(*(long *)(param_1 + 0x20) + 0x20);
            }
            else {
              iVar4 = (int)(*(ulong *)(param_4 + 0xc0) >> 0x20);
            }
            if (iVar4 == 1) {
              lVar14 = thunk_FUN_02dfd288(PTR_DAT_069fc178);
              if (*(int *)(lVar14 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar9 = FUN_0547e2f8(0);
              plVar7 = *(long **)(param_4 + 0x60);
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uVar10 = (**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210));
              uVar11 = thunk_FUN_02dfd288(System_Action<DragGesture,_Touch>_TypeInfo);
              uVar6 = FUN_05588558(uVar11,uVar9,uVar6,uVar10,0);
              uVar6 = FUN_05574a94(param_3,uVar6,0);
              uVar9 = thunk_FUN_02dfd288(System_Action<ContextualMenuPopulateEvent,_Column>_TypeInfo
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_02d96724(uVar6,uVar9);
            }
            uVar5 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
            if ((uVar5 & 1) != 0) {
              FUN_055b7db4(param_1,param_4,uStack0000000000000010,param_3,uVar6,param_2);
            }
          }
          else if ((*(char *)(lVar8 + 0x80) == '\0') &&
                  (uVar5 = Oculus_Platform_CAPI__ovr_AbuseReportRecording_GetRecordingUuid_Native
                                     (param_1,param_3,lVar8,param_2), (uVar5 & 1) != 0)) {
            plVar7 = (long *)(lVar8 + 0x48);
            lVar12 = *plVar7;
            if (lVar12 == 0) {
              lVar12 = FUN_055ae608(param_1,*(undefined8 *)(lVar8 + 0x40));
              *plVar7 = lVar12;
              LeanTween__value(plVar7);
              lVar12 = *plVar7;
            }
            lVar12 = FUN_055aea4c(param_1,lVar12,*(undefined8 *)(lVar8 + 0x78),param_4,
                                  uStack0000000000000010);
            uVar5 = FUN_05574ae8(param_3,*plVar7,lVar12 != 0,0);
            if ((uVar5 & 1) == 0) {
              lVar14 = thunk_FUN_02dfd288(PTR_DAT_069fc178);
              if (*(int *)(lVar14 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar9 = FUN_0547e2f8(0);
              uVar10 = thunk_FUN_02dfd288(System_Action<Column,_int>_TypeInfo);
              uVar6 = FUN_055873e0(uVar10,uVar9,uVar6,0);
              uVar6 = FUN_05574a94(param_3,uVar6,0);
              uVar9 = thunk_FUN_02dfd288(System_Action<ContextualMenuPopulateEvent,_Column>_TypeInfo
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_02d96724(uVar6,uVar9);
            }
            FUN_055b8180(uVar5,param_3,lVar8,lVar14);
            uVar5 = FUN_055b4470(param_1,lVar8,lVar12,param_4,uStack0000000000000010,param_3,param_2
                                );
            if ((uVar5 & 1) == 0) {
              FUN_055b7db4(param_1,param_4,uStack0000000000000010,param_3,uVar6,param_2);
            }
          }
          else {
            uVar5 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
            if ((uVar5 & 1) != 0) {
              FUN_055b8180(uVar5,param_3,lVar8,lVar14);
              FUN_055b7db4(param_1,param_4,uStack0000000000000010,param_3,uVar6,param_2);
            }
          }
        }
      }
      else if (iVar4 != 5) {
        uVar6 = FUN_055ae438();
        return uVar6;
      }
      uVar5 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
      if ((uVar5 & 1) == 0) {
        FUN_055b578c(param_1,param_3,param_4,param_2,
                     *(undefined8 *)System_Action<OVRColocationSession_Data>_TypeInfo);
        if (lVar14 != 0) {
          FUN_04e8cb1c(&stack0x00000030,lVar14,
                       *(undefined8 *)System_Action<OVRSpatialAnchor_OperationResult>_TypeInfo);
          while (uVar5 = FUN_052314cc(&stack0x00000030,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
            FUN_055b7880(param_1,param_2,param_3,param_4,uVar3,in_stack_00000040,
                         in_stack_00000048 & 0xffffffff,1);
          }
          FUN_052315f0(&stack0x00000030,
                       *(undefined8 *)System_Action<UITKTextJobSystem_ManagedJobData>_TypeInfo);
        }
        FUN_055b5560(param_1,param_3,param_4,param_2);
        return param_2;
      }
    } while( true );
  }
LAB_055ae4e8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


