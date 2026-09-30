/*
FUNCTION_NAME: FUN_032482e4
ENTRY_POINT: 032482e4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_032482e4(long param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  long *plVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_03ff47d2 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d845f8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff47d2 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (((*(float *)(param_1 + 0xa0) == *(float *)(param_1 + 100)) &&
      (*(float *)(param_1 + 0xa4) == *(float *)(param_1 + 0x60))) &&
     (*(float *)(param_1 + 0x9c) == *(float *)(param_1 + 0x68))) {
    uVar11 = *(undefined8 *)(param_1 + 0x90);
    uVar12 = *(undefined8 *)(param_1 + 0x70);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar11,uVar12,0);
    if ((uVar3 & 1) != 0) goto LAB_032483f8;
    uVar11 = *(undefined8 *)(param_1 + 0x88);
    uVar12 = *(undefined8 *)(param_1 + 0x78);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_0391f968(uVar11,uVar12,0);
    if ((((uVar3 & 1) != 0) || (*(float *)(param_1 + 0xb0) != *(float *)(param_1 + 0x80))) ||
       (*(float *)(param_1 + 0x98) != *(float *)(param_1 + 0x6c))) goto LAB_032483f8;
    uVar10 = (uint)(*(char *)(param_1 + 0xb4) != *(char *)(param_1 + 0x84));
  }
  else {
LAB_032483f8:
    uVar10 = 1;
  }
  iVar6 = *(int *)(param_1 + 0x50);
  if (iVar6 == 1) {
    if (*(long *)(param_1 + 0x58) == 0) goto LAB_032485a8;
    uVar2 = FUN_03910cb4(*(long *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0xa8),0);
    iVar6 = *(int *)(param_1 + 0x50);
    uVar2 = ~uVar2 & 1;
  }
  else {
    uVar2 = 0;
  }
  puVar1 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  if (iVar6 - 1U < 6) {
    uVar7 = *(uint *)(&DAT_00bfc614 + (long)(int)(iVar6 - 1U) * 4);
  }
  else {
    uVar7 = 0;
  }
  if ((uVar2 != 0 || (param_2 & 1) != 0) || (uVar7 & uVar10) != 0) {
    FUN_03215194(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x58),0);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x70);
    auVar13 = NEON_rev64(*(undefined1 (*) [16])(param_1 + 0x60),4);
    auVar13 = NEON_ext(auVar13,auVar13,8,1);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x80);
    *(long *)(param_1 + 0xa0) = auVar13._8_8_;
    *(long *)(param_1 + 0x98) = auVar13._0_8_;
    *(undefined1 *)(param_1 + 0xb4) = *(undefined1 *)(param_1 + 0x84);
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x78);
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x88));
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = UnityEngine_UIElements_BaseVisualTreeHierarchyTrackerUpdater__ProcessRemove(0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x110) != 0) {
        uVar15 = *(undefined8 *)(param_1 + 0xa0);
        uVar14 = *(undefined8 *)(param_1 + 0x98);
        auVar13 = *(undefined1 (*) [16])(param_1 + 0xa8);
        uVar12 = *(undefined8 *)(param_1 + 0x90);
        uVar11 = *(undefined8 *)(param_1 + 0x88);
        plVar9 = *(long **)(*(long *)(param_1 + 0x110) + 0x50);
        if (plVar9 != (long *)0x0) {
          lVar5 = *plVar9;
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_03d845f8) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_03248568;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_01ae9f78(plVar9,*(long *)PTR_DAT_03d845f8,1);
LAB_03248568:
          local_60 = uVar11;
          uStack_58 = uVar12;
          uStack_50 = uVar14;
          uStack_48 = uVar15;
          local_40 = auVar13._0_8_;
          uStack_38 = auVar13._8_8_;
          (*(code *)*puVar4)(plVar9,&local_60,puVar4[1]);
          *(undefined1 *)(param_1 + 0x10c) = 1;
          return;
        }
      }
LAB_032485a8:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
  }
  return;
}


