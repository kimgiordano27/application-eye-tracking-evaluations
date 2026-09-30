/*
FUNCTION_NAME: FUN_05af7cdc
ENTRY_POINT: 05af7cdc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_7;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long * FUN_05af7cdc(long param_1,long param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  
  if ((DAT_06dc1eb6 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ff840);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__GetLivePhysicalBoundsInfo_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo_TypeInfo);
    FUN_02d965b8(Method_OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>_get_IsCompleted__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetException__
                );
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaGroupRef_TypeInfo);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_OnViewDataReady__);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<string>_get_rawValue__);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_SetValueWithoutNotify__
                );
    FUN_02d965b8(
                Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_get_showMixedValue__
                );
    FUN_02d965b8(PTR_DAT_069fba08);
    DAT_06dc1eb6 = 1;
  }
  puVar4 = OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo_TypeInfo;
  if (param_2 == 0) goto LAB_05af803c;
  plVar14 = *(long **)(param_2 + 0x88);
  if (plVar14 == (long *)0x0) {
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_05af803c;
    plVar14 = (long *)FUN_05b110a0(*(long *)(param_1 + 0x68),*(undefined8 *)(param_2 + 0x78),0);
    if (plVar14 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetException__
                       + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetException__
         )) goto LAB_05af820c;
      goto LAB_05af7e00;
    }
    plVar14 = *(long **)(param_2 + 0x78);
    if (plVar14 == (long *)0x0) goto LAB_05af803c;
    uVar8 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
    uVar11 = *(undefined8 *)
              Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_SetValueWithoutNotify__
    ;
LAB_05af8090:
    FUN_05bfde00(param_1,uVar11,uVar8,param_2,0);
LAB_05af80a0:
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar7 = *(long *)puVar4;
    }
    puVar12 = *(undefined8 **)(lVar7 + 0xb8);
LAB_05af80b8:
    return (long *)*puVar12;
  }
LAB_05af7e00:
  plVar15 = (long *)plVar14[0xc];
  if (plVar15 == (long *)0x0) {
    FUN_05aed93c(param_1,plVar14);
    plVar15 = (long *)plVar14[0xc];
  }
  lVar7 = *(long *)puVar4;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar7 = *(long *)puVar4;
  }
  puVar3 = PTR_DAT_069ff840;
  if (plVar15 == (long *)**(long **)(lVar7 + 0xb8)) {
    if (*(int *)(lVar7 + 0xe4) != 0) {
      return plVar15;
    }
    thunk_FUN_02df485c();
    puVar12 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    goto LAB_05af80b8;
  }
  plVar14 = (long *)plVar14[0xc];
  if (plVar14 == (long *)0x0) {
LAB_05af7f48:
    plVar15 = (long *)thunk_FUN_02dd3144(*(undefined8 *)
                                          OVR_OpenVR_IVRChaperoneSetup__GetLivePhysicalBoundsInfo_TypeInfo
                                        );
    FUN_05b09d54(plVar15,0);
  }
  else {
    lVar7 = *plVar14;
    bVar1 = *(byte *)(lVar7 + 0x130);
    bVar2 = *(byte *)(*(long *)Method_OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>_get_IsCompleted__
                     + 0x130);
    if ((bVar1 < bVar2) ||
       (lVar13 = *(long *)(lVar7 + 200),
       *(long *)(lVar13 + (ulong)bVar2 * 8 + -8) !=
       *(long *)Method_OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>_get_IsCompleted__)) {
LAB_05af820c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar14);
    }
    bVar2 = *(byte *)(*(long *)OVR_OpenVR_IVRChaperoneSetup__GetLivePhysicalBoundsInfo_TypeInfo +
                     0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(lVar13 + (ulong)bVar2 * 8 + -8) ==
        *(long *)OVR_OpenVR_IVRChaperoneSetup__GetLivePhysicalBoundsInfo_TypeInfo)) {
      if ((param_3 & 1) == 0) {
        uVar11 = *(undefined8 *)
                  Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_get_showMixedValue__
        ;
        uVar8 = *(undefined8 *)PTR_DAT_069fba08;
        goto LAB_05af8090;
      }
      uVar8 = *(undefined8 *)(param_2 + 0x50);
      uVar11 = *(undefined8 *)(param_2 + 0x58);
      lVar7 = *(long *)PTR_DAT_069ff840;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar7 = *(long *)puVar3;
      }
      uVar10 = FUN_05547e88(uVar8,uVar11,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10),
                            *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18),0);
      if ((uVar10 & 1) == 0) {
        lVar7 = *(long *)puVar3;
        uVar8 = *(undefined8 *)(param_2 + 0x60);
        uVar11 = *(undefined8 *)(param_2 + 0x68);
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar7 = *(long *)puVar3;
        }
        uVar10 = FUN_05547cdc(uVar8,uVar11,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10),
                              *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18),0);
        if ((uVar10 & 1) == 0) goto LAB_05af7ee8;
      }
      FUN_05bfde88(param_1,*(undefined8 *)
                            Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_OnViewDataReady__
                   ,param_2,0);
      goto LAB_05af80a0;
    }
    bVar2 = *(byte *)(*(long *)OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo_TypeInfo +
                     0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(lVar13 + (ulong)bVar2 * 8 + -8) ==
        *(long *)OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo_TypeInfo)) {
      lVar7 = (**(code **)(lVar7 + 0x238))(plVar14,*(undefined8 *)(lVar7 + 0x240));
      if (lVar7 == 0) goto LAB_05af803c;
      iVar5 = FUN_05489ff8(lVar7,0);
      puVar3 = PTR_DAT_069ff840;
      if (iVar5 == 0) {
        uVar8 = *(undefined8 *)(param_2 + 0x50);
        uVar11 = *(undefined8 *)(param_2 + 0x58);
        lVar7 = *(long *)PTR_DAT_069ff840;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar7 = *(long *)puVar3;
        }
        uVar10 = FUN_05547cdc(uVar8,uVar11,**(undefined8 **)(lVar7 + 0xb8),
                              (*(undefined8 **)(lVar7 + 0xb8))[1],0);
        if ((uVar10 & 1) != 0) {
          FUN_05bfe284(param_1,*(undefined8 *)
                                Method_UnityEngine_UIElements_BaseField<string>_get_rawValue__,
                       param_2,1,0);
        }
        goto LAB_05af80a0;
      }
    }
LAB_05af7ee8:
    lVar7 = *plVar14;
    bVar1 = *(byte *)(*(long *)System_Xml_Schema_XmlSchemaGroupRef_TypeInfo + 0x130);
    if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)System_Xml_Schema_XmlSchemaGroupRef_TypeInfo)) {
      bVar1 = *(byte *)(*(long *)OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo_TypeInfo +
                       0x130);
      if ((*(byte *)(lVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo_TypeInfo))
      goto LAB_05af7f48;
      plVar15 = (long *)thunk_FUN_02dd3144();
      FUN_05b0b48c(plVar15,0);
    }
    else {
      plVar15 = (long *)thunk_FUN_02dd3144();
      FUN_05b128f4(plVar15,0);
    }
  }
  if (plVar15 != (long *)0x0) {
    FUN_05b121a0(plVar15,*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58),0);
    uVar8 = FUN_05b122d8(plVar15,*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68),0);
    FUN_05af9018(uVar8,plVar15,param_2,1);
    if ((plVar14 != (long *)0x0) &&
       (lVar7 = (**(code **)(*plVar14 + 0x238))(plVar14,*(undefined8 *)(*plVar14 + 0x240)),
       lVar7 != 0)) {
      iVar5 = 0;
      do {
        iVar6 = FUN_05489ff8(lVar7,0);
        if (iVar6 <= iVar5) {
          *(undefined8 *)(param_2 + 0x80) = plVar15;
          LeanTween__value((undefined8 *)(param_2 + 0x80),plVar15);
          return plVar15;
        }
        lVar7 = (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240));
        plVar9 = (long *)(**(code **)(*plVar14 + 0x238))(plVar14,*(undefined8 *)(*plVar14 + 0x240));
        if ((plVar9 == (long *)0x0) ||
           (uVar8 = (**(code **)(*plVar9 + 0x308))(plVar9,iVar5,*(undefined8 *)(*plVar9 + 0x310)),
           lVar7 == 0)) break;
        FUN_05b0992c(lVar7,uVar8,0);
        iVar5 = iVar5 + 1;
        lVar7 = (**(code **)(*plVar14 + 0x238))(plVar14,*(undefined8 *)(*plVar14 + 0x240));
      } while (lVar7 != 0);
    }
  }
LAB_05af803c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


