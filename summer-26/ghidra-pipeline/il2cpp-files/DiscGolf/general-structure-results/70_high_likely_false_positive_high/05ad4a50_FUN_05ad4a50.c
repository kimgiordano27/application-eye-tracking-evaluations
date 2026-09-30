/*
FUNCTION_NAME: FUN_05ad4a50
ENTRY_POINT: 05ad4a50
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


long * FUN_05ad4a50(long param_1,long param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  
  if ((DAT_06dc1e3d & 1) == 0) {
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
    DAT_06dc1e3d = 1;
  }
  puVar4 = OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo_TypeInfo;
  if (param_2 == 0) goto LAB_05ad4ddc;
  plVar14 = *(long **)(param_2 + 0x88);
  if (plVar14 == (long *)0x0) {
    if ((*(long *)(param_1 + 0x58) == 0) ||
       (lVar7 = *(long *)(*(long *)(param_1 + 0x58) + 0xa0), lVar7 == 0)) goto LAB_05ad4ddc;
    plVar14 = (long *)FUN_05b110a0(lVar7,*(undefined8 *)(param_2 + 0x78),0);
    if (plVar14 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetException__
                       + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetException__
         )) goto LAB_05ad4fb4;
      goto LAB_05ad4b7c;
    }
    plVar14 = *(long **)(param_2 + 0x78);
    if (plVar14 == (long *)0x0) goto LAB_05ad4ddc;
    uVar11 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
    uVar10 = *(undefined8 *)
              Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_SetValueWithoutNotify__
    ;
LAB_05ad4e30:
    FUN_05bfde00(param_1,uVar10,uVar11,param_2,0);
LAB_05ad4e40:
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar7 = *(long *)puVar4;
    }
    puVar12 = *(undefined8 **)(lVar7 + 0xb8);
LAB_05ad4e58:
    return (long *)*puVar12;
  }
LAB_05ad4b7c:
  plVar15 = (long *)plVar14[0xc];
  if (plVar15 == (long *)0x0) {
    FUN_05acc8ec(param_1,plVar14);
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
    goto LAB_05ad4e58;
  }
  plVar14 = (long *)plVar14[0xc];
  if (plVar14 == (long *)0x0) {
LAB_05ad4cc4:
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
LAB_05ad4fb4:
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(plVar14);
    }
    bVar2 = *(byte *)(*(long *)OVR_OpenVR_IVRChaperoneSetup__GetLivePhysicalBoundsInfo_TypeInfo +
                     0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(lVar13 + (ulong)bVar2 * 8 + -8) ==
        *(long *)OVR_OpenVR_IVRChaperoneSetup__GetLivePhysicalBoundsInfo_TypeInfo)) {
      if ((param_3 & 1) == 0) {
        uVar10 = *(undefined8 *)
                  Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_get_showMixedValue__
        ;
        uVar11 = *(undefined8 *)PTR_DAT_069fba08;
        goto LAB_05ad4e30;
      }
      uVar11 = *(undefined8 *)(param_2 + 0x50);
      uVar10 = *(undefined8 *)(param_2 + 0x58);
      lVar7 = *(long *)PTR_DAT_069ff840;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar7 = *(long *)puVar3;
      }
      uVar9 = FUN_05547cdc(uVar11,uVar10,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10),
                           *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18),0);
      if ((uVar9 & 1) == 0) {
        lVar7 = *(long *)puVar3;
        uVar11 = *(undefined8 *)(param_2 + 0x60);
        uVar10 = *(undefined8 *)(param_2 + 0x68);
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar7 = *(long *)puVar3;
        }
        uVar9 = FUN_05547cdc(uVar11,uVar10,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10),
                             *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18),0);
        if ((uVar9 & 1) == 0) goto LAB_05ad4c64;
      }
      FUN_05bfde88(param_1,*(undefined8 *)
                            Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_OnViewDataReady__
                   ,param_2,0);
      goto LAB_05ad4e40;
    }
    bVar2 = *(byte *)(*(long *)OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo_TypeInfo +
                     0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(lVar13 + (ulong)bVar2 * 8 + -8) ==
        *(long *)OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo_TypeInfo)) {
      lVar7 = (**(code **)(lVar7 + 0x238))(plVar14,*(undefined8 *)(lVar7 + 0x240));
      if (lVar7 == 0) goto LAB_05ad4ddc;
      iVar5 = FUN_05489ff8(lVar7,0);
      puVar3 = PTR_DAT_069ff840;
      if (iVar5 == 0) {
        uVar11 = *(undefined8 *)(param_2 + 0x50);
        uVar10 = *(undefined8 *)(param_2 + 0x58);
        lVar7 = *(long *)PTR_DAT_069ff840;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar7 = *(long *)puVar3;
        }
        uVar9 = FUN_05547cdc(uVar11,uVar10,**(undefined8 **)(lVar7 + 0xb8),
                             (*(undefined8 **)(lVar7 + 0xb8))[1],0);
        if ((uVar9 & 1) != 0) {
          FUN_05bfe284(param_1,*(undefined8 *)
                                Method_UnityEngine_UIElements_BaseField<string>_get_rawValue__,
                       param_2,1,0);
        }
        goto LAB_05ad4e40;
      }
    }
LAB_05ad4c64:
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
      goto LAB_05ad4cc4;
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
    FUN_05b122d8(plVar15,*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68),0);
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
        plVar8 = (long *)(**(code **)(*plVar14 + 0x238))(plVar14,*(undefined8 *)(*plVar14 + 0x240));
        if ((plVar8 == (long *)0x0) ||
           (plVar8 = (long *)(**(code **)(*plVar8 + 0x308))
                                       (plVar8,iVar5,*(undefined8 *)(*plVar8 + 0x310)), lVar7 == 0))
        break;
        if (plVar8 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0(plVar8);
          }
        }
        FUN_05b0992c(lVar7,plVar8,0);
        iVar5 = iVar5 + 1;
        lVar7 = (**(code **)(*plVar14 + 0x238))(plVar14,*(undefined8 *)(*plVar14 + 0x240));
      } while (lVar7 != 0);
    }
  }
LAB_05ad4ddc:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


