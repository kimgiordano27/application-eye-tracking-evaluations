/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionDestroy
ENTRY_POINT: 01f942e4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_15;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR__OnSessionDestroy(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  uint uVar11;
  
  if ((DAT_0293df09 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027ba078);
    DAT_0293df09 = 1;
  }
  if (param_2 != 0) {
    lVar3 = FUN_01230af8(*(undefined8 *)PTR_DAT_027ba078,*(undefined4 *)(param_2 + 0x18));
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    uVar5 = (uint)uVar6;
    if (0 < (int)uVar5) {
      if (param_1 == 0) goto LAB_01f94518;
      uVar11 = *(uint *)(param_1 + 0x18);
      uVar7 = 0;
      do {
        if (uVar11 <= uVar7) goto LAB_01f94514;
        *(undefined4 *)(param_1 + 0x20 + uVar7 * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)uVar5);
    }
    if (param_3 != 0) {
      if (0 < (int)*(ulong *)(param_3 + 0x18)) {
        uVar7 = 0;
        uVar8 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
        do {
          if ((int)uVar6 < 1) {
            uVar11 = 0;
          }
          else {
            if (uVar8 <= uVar7) goto LAB_01f94514;
            uVar11 = 0;
            while( true ) {
              if ((uint)uVar6 <= uVar11) goto LAB_01f94514;
              plVar4 = *(long **)(param_2 + (long)(int)uVar11 * 8 + 0x20);
              if (plVar4 == (long *)0x0) goto LAB_01f94518;
              lVar10 = *(long *)(param_3 + uVar7 * 8 + 0x20);
              uVar6 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
              if (lVar10 == 0) goto LAB_01f94518;
              uVar8 = FUN_01e68100(lVar10,uVar6,0);
              if ((uVar8 & 1) != 0) break;
              uVar6 = *(undefined8 *)(param_2 + 0x18);
              uVar11 = uVar11 + 1;
              if ((int)uVar6 <= (int)uVar11) goto LAB_01f94454;
              if (*(uint *)(param_3 + 0x18) <= uVar7) goto LAB_01f94514;
            }
            if (param_1 == 0) goto LAB_01f94518;
            if (*(uint *)(param_1 + 0x18) <= uVar11) goto LAB_01f94514;
            *(int *)(param_1 + (long)(int)uVar11 * 4 + 0x20) = (int)uVar7;
            if (lVar3 == 0) goto LAB_01f94518;
            if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_01f94514;
            *(undefined1 *)(lVar3 + uVar7 + 0x20) = 1;
            uVar6 = *(undefined8 *)(param_2 + 0x18);
          }
LAB_01f94454:
          uVar5 = (uint)uVar6;
          if (uVar11 == uVar5) {
            return 0;
          }
          uVar8 = (ulong)*(uint *)(param_3 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)*(uint *)(param_3 + 0x18));
      }
      if (0 < (int)uVar5) {
        if (param_1 == 0) goto LAB_01f94518;
        uVar1 = *(uint *)(param_1 + 0x18);
        uVar7 = 0;
        uVar11 = 0;
        do {
          if (uVar1 <= uVar7) {
LAB_01f94514:
                    /* WARNING: Subroutine does not return */
            FUN_01230ca8();
          }
          puVar9 = (uint *)(param_1 + uVar7 * 4 + 0x20);
          uVar2 = uVar11;
          if ((*puVar9 == 0xffffffff) && ((int)uVar11 < (int)uVar5)) {
            if (lVar3 == 0) goto LAB_01f94518;
            do {
              if (*(uint *)(lVar3 + 0x18) <= uVar11) goto LAB_01f94514;
              if (*(char *)(lVar3 + (int)uVar11 + 0x20) == '\0') {
                *puVar9 = uVar11;
                uVar2 = uVar11 + 1;
                break;
              }
              uVar11 = uVar11 + 1;
              uVar2 = uVar5;
            } while (uVar5 != uVar11);
          }
          uVar11 = uVar2;
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)uVar5);
      }
      return 1;
    }
  }
LAB_01f94518:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


