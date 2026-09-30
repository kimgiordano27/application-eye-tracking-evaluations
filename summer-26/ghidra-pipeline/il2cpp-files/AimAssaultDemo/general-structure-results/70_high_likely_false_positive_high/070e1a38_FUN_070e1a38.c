/*
FUNCTION_NAME: FUN_070e1a38
ENTRY_POINT: 070e1a38
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x070e1e0c) */

void FUN_070e1a38(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  long local_38;
  
  if ((DAT_08267c65 & 1) == 0) {
    FUN_0373b518(UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var);
    FUN_0373b518(PTR_DAT_07dfc188);
    FUN_0373b518(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_BypassScope_var
                );
    FUN_0373b518(PTR_DAT_07df7550);
    FUN_0373b518(PTR_DAT_07d896f8);
    FUN_0373b518(UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystemDescriptor_Cinfo_var);
    FUN_0373b518(PTR_DAT_07df82f8);
    FUN_0373b518(UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_var);
    FUN_0373b518(UnityEngine_XR_ARSubsystems_XROcclusionSubsystemDescriptor_Cinfo_var);
    FUN_0373b518(UnityEngine_XR_ARSubsystems_XRParticipantSubsystemDescriptor_Cinfo_var);
    FUN_0373b518(UnityEngine_XR_ARSubsystems_XRHumanBodySubsystemDescriptor_Cinfo_var);
    DAT_08267c65 = 1;
  }
  local_38 = 0;
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = FUN_0708172c(param_1,0);
  puVar1 = PTR_DAT_07d896f8;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  plVar4 = (long *)FUN_041b4a9c(param_2,uVar12,&local_38,uVar3,
                                *(undefined8 *)
                                 UnityEngine_XR_ARSubsystems_XRHumanBodySubsystemDescriptor_Cinfo_var
                                ,0x126,*(undefined8 *)
                                        UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_var
                               );
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar5 = FUN_07041e9c(param_3,*(undefined8 *)PTR_DAT_07dfc188);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  auVar13 = FUN_070a42c0(lVar5,0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar5 = *plVar4;
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07df82f8) {
        puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_070e1bc4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07df82f8,0);
LAB_070e1bc4:
  (*(code *)*puVar6)(plVar4,auVar13._0_8_,auVar13._8_8_,0,2,puVar6[1]);
  lVar5 = local_38;
  uVar3 = FUN_07041e9c(param_3,*(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_BypassScope_var
                      );
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  puVar6 = (undefined8 *)(lVar5 + 0x18);
  *puVar6 = uVar3;
  thunk_FUN_037aeb94(puVar6);
  if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  *(long *)(local_38 + 0x10) = param_1;
  thunk_FUN_037aeb94((long *)(local_38 + 0x10),param_1);
  lVar5 = *plVar4;
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07df7550) {
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xc) * 0x10 + 0x138);
        goto LAB_070e1c78;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07df7550,0xc);
LAB_070e1c78:
  (*(code *)*puVar6)(plVar4,1,puVar6[1]);
  puVar2 = UnityEngine_XR_ARSubsystems_XRParticipantSubsystemDescriptor_Cinfo_var;
  lVar5 = *(long *)UnityEngine_XR_ARSubsystems_XRParticipantSubsystemDescriptor_Cinfo_var;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar5);
    lVar5 = *(long *)puVar2;
  }
  lVar10 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar10 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03798b70(lVar5);
      lVar5 = *(long *)puVar2;
    }
    uVar3 = **(undefined8 **)(lVar5 + 0xb8);
    lVar10 = thunk_FUN_037788cc(*(undefined8 *)
                                 UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var);
    FUN_052032cc(lVar10,uVar3,
                 *(undefined8 *)UnityEngine_XR_ARSubsystems_XROcclusionSubsystemDescriptor_Cinfo_var
                 ,0);
    plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar7 = lVar10;
    thunk_FUN_037aeb94(plVar7,lVar10);
  }
  lVar5 = *plVar4;
  lVar11 = *(long *)UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystemDescriptor_Cinfo_var;
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)(lVar11 + 0x20)) {
        lVar5 = lVar5 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
        goto LAB_070e1d6c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  lVar5 = FUN_0377596c(plVar4);
LAB_070e1d6c:
  lVar5 = thunk_FUN_0375ad08(*(undefined8 *)(lVar5 + 8),lVar11);
  (**(code **)(lVar5 + 8))(plVar4,lVar10,lVar5);
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_070e1de0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar4,*(long *)puVar1,0);
LAB_070e1de0:
    (*(code *)*puVar6)(plVar4,puVar6[1]);
  }
  return;
}


