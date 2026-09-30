/*
FUNCTION_NAME: UnityEngine.AndroidJNI$$SetObjectArrayElement
ENTRY_POINT: 035463e4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 96
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_13;validity_or_gating_hits_5;strong_foveation_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x035466ec) */

void UnityEngine_AndroidJNI__SetObjectArrayElement(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 uVar11;
  int *unaff_x20;
  long unaff_x21;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x21 + 0xf02) = 1;
  }
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = 0;
  if (*unaff_x20 == 2) {
    lVar4 = thunk_FUN_01a89e68(*(undefined8 *)OVRManager_PassthroughCapabilities_TypeInfo);
    FUN_0219a4f0(lVar4,*(undefined8 *)OVRManager_CompositionMethod_TypeInfo);
    if ((*(long *)(param_2 + 0x18) == 0) ||
       (lVar5 = FUN_0219b394(*(long *)(param_2 + 0x18),
                             *(undefined8 *)OVRManager_EventListener_TypeInfo), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_0220449c(lVar5,&stack0x00000020,*(undefined8 *)OVRMesh_IOVRMeshDataProvider_TypeInfo);
    puVar3 = OVRManager_XrApi_TypeInfo;
    puVar2 = OVRManager_SystemHeadsetType_TypeInfo;
    puVar1 = SQLite_NotNullConstraintViolationException_<>c__DisplayClass5_0_TypeInfo;
    in_stack_00000048 = in_stack_00000028;
    in_stack_00000040 = in_stack_00000020;
    in_stack_00000050 = in_stack_00000030;
    while (uVar6 = FUN_021c0468(&stack0x00000040,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
      FUN_01c7be88(&stack0x00000040,&stack0x00000020,*(undefined8 *)puVar3);
      lVar5 = in_stack_00000020;
      if (*(long *)(param_2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_0219b634(*(long *)(param_2 + 0x18),in_stack_00000020,&stack0x00000020,
                   *(undefined8 *)puVar1);
      if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_00000030 = *(undefined8 *)(in_stack_00000020 + 0x48);
      in_stack_00000028 = *(undefined8 *)(in_stack_00000020 + 0x40);
      in_stack_00000020 = *(long *)(in_stack_00000020 + 0x38);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_0219b83c(lVar4,lVar5);
    }
    FUN_021c0464(&stack0x00000040,*(undefined8 *)OVRManager_ProcessorPerformanceLevel_TypeInfo);
    if (*(int *)(*(long *)PTR_DAT_03cbe188 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar7 = FUN_0366d41c(0);
    uVar11 = *(undefined8 *)(param_2 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_03cc1608 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar7 = FUN_026e58e8(uVar7,uVar11,0);
    plVar8 = (long *)FUN_026c939c(uVar7,0);
    if (*(int *)(*(long *)PTR_DAT_03cbedd0 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar7 = FUN_028007a0(lVar4,0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c(uVar7,uVar7);
    }
    (**(code **)(*plVar8 + 0x248))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x250));
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar9 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_035466b0;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)PTR_DAT_03cbed08,0);
LAB_035466b0:
    (*(code *)*puVar9)(plVar8,puVar9[1]);
  }
  return;
}


