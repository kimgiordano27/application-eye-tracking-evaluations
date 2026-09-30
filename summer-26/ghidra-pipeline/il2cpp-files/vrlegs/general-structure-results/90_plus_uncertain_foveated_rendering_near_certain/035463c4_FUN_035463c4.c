/*
FUNCTION_NAME: FUN_035463c4
ENTRY_POINT: 035463c4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 121
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;validity_or_gating_hits_5;strong_foveation_hits_2;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x035466ec) */

void FUN_035463c4(long param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 uVar12;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_0412df02 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbe188);
    FUN_01ab69ac(OVRManager_CompositionMethod_TypeInfo);
    FUN_01ab69ac(SQLite_NotNullConstraintViolationException_<>c__DisplayClass5_0_TypeInfo);
    FUN_01ab69ac(OVRManager_EventListener_TypeInfo);
    FUN_01ab69ac(OVRManager_FoveatedRenderingLevel_TypeInfo);
    FUN_01ab69ac(OVRManager_PassthroughCapabilities_TypeInfo);
    FUN_01ab69ac(OVRManager_ProcessorPerformanceLevel_TypeInfo);
    FUN_01ab69ac(OVRManager_SystemHeadsetType_TypeInfo);
    FUN_01ab69ac(OVRManager_XrApi_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cbedd0);
    FUN_01ab69ac(OVRMesh_IOVRMeshDataProvider_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cc1608);
    DAT_0412df02 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (*param_2 == 2) {
    lVar5 = thunk_FUN_01a89e68(*(undefined8 *)OVRManager_PassthroughCapabilities_TypeInfo);
    FUN_0219a4f0(lVar5,*(undefined8 *)OVRManager_CompositionMethod_TypeInfo);
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar6 = FUN_0219b394(*(long *)(param_1 + 0x18),
                             *(undefined8 *)OVRManager_EventListener_TypeInfo), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_0220449c(lVar6,&local_80,*(undefined8 *)OVRMesh_IOVRMeshDataProvider_TypeInfo);
    puVar4 = OVRManager_XrApi_TypeInfo;
    puVar3 = OVRManager_SystemHeadsetType_TypeInfo;
    puVar2 = OVRManager_FoveatedRenderingLevel_TypeInfo;
    puVar1 = SQLite_NotNullConstraintViolationException_<>c__DisplayClass5_0_TypeInfo;
    uStack_58 = uStack_78;
    local_60 = local_80;
    local_50 = local_70;
    while (uVar7 = FUN_021c0468(&local_60,*(undefined8 *)puVar3), (uVar7 & 1) != 0) {
      FUN_01c7be88(&local_60,&local_80,*(undefined8 *)puVar4);
      lVar6 = local_80;
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_0219b634(*(long *)(param_1 + 0x18),local_80,&local_80,*(undefined8 *)puVar1);
      if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      local_70 = *(undefined8 *)(local_80 + 0x48);
      uStack_78 = *(undefined8 *)(local_80 + 0x40);
      local_80 = *(long *)(local_80 + 0x38);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      local_a0 = local_80;
      uStack_98 = uStack_78;
      local_90 = local_70;
      FUN_0219b83c(lVar5,lVar6,&local_a0,*(undefined8 *)puVar2);
    }
    FUN_021c0464(&local_60,*(undefined8 *)OVRManager_ProcessorPerformanceLevel_TypeInfo);
    if (*(int *)(*(long *)PTR_DAT_03cbe188 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar8 = FUN_0366d41c(0);
    uVar12 = *(undefined8 *)(param_1 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_03cc1608 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar8 = FUN_026e58e8(uVar8,uVar12,0);
    plVar9 = (long *)FUN_026c939c(uVar8,0);
    if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar8 = FUN_028007a0(lVar5,0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c(uVar8,uVar8);
    }
    (**(code **)(*plVar9 + 0x248))(plVar9,uVar8,*(undefined8 *)(*plVar9 + 0x250));
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar10 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_035466b0;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)PTR_DAT_03cbed08,0);
LAB_035466b0:
    (*(code *)*puVar10)(plVar9,puVar10[1]);
  }
  return;
}


