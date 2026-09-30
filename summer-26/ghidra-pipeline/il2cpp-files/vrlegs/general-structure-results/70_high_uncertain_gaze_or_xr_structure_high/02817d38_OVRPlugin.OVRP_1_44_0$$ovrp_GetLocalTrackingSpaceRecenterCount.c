/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetLocalTrackingSpaceRecenterCount
ENTRY_POINT: 02817d38
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetLocalTrackingSpaceRecenterCount
               (long *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_03cfdb48;
  if ((DAT_0412537e & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cfdb48);
    FUN_01ab69ac(PTR_DAT_03cc41f8);
    FUN_01ab69ac(PTR_DAT_03ce64d8);
    FUN_01ab69ac(PTR_DAT_03cc5270);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    DAT_0412537e = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar3 = FUN_02817ec8(param_1);
  if (lVar3 != 0) {
    iVar1 = 0x27;
    if (*(int *)(lVar3 + 0x18) != 1) {
      iVar1 = *(int *)(lVar3 + 0x18);
    }
    *param_2 = iVar1;
    puVar2 = PTR_DAT_03cc41f8;
    if (*(int *)(lVar3 + 0x18) == 1) {
      uVar8 = *(undefined8 *)PTR_DAT_03cc5270;
      if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = FUN_0277b678(uVar8,0);
    }
    else {
      uVar8 = *(undefined8 *)(lVar3 + 0x10);
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar4 = FUN_0271c480(0);
    if (param_1 != (long *)0x0) {
      lVar3 = *param_1;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03ce64d8) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0x10) * 0x10 + 0x138);
            goto LAB_02817e94;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar5 = (undefined8 *)FUN_01a472ec(param_1,*(long *)PTR_DAT_03ce64d8,0x10);
LAB_02817e94:
      uVar8 = (*(code *)*puVar5)(param_1,uVar8,uVar4,puVar5[1]);
      *param_3 = uVar8;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_3,uVar8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


