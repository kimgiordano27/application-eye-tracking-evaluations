/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$SizeOf<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 04010530
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<OVRPlugin_SpaceDiscoveryResult>
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong in_x9;
  undefined8 *puVar8;
  long unaff_x19;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  
  puVar1 = (ulong *)(param_1 + 2000 + (in_x9 >> 0x12 & 0x7fff) * 8 + 0x464e0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | 1L << (in_x9 >> 0xc & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (1 < *(uint *)(unaff_x21 + 0x18)) {
    puVar8 = (undefined8 *)(unaff_x21 + 0x28);
    *puVar8 = unaff_x22;
    puVar1 = (ulong *)(param_1 + 2000 + ((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x464e0);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = FUN_0335b6c8(&DAT_0842f7e0,1);
    if (2 < *(uint *)(unaff_x21 + 0x18)) {
      puVar8 = (undefined8 *)(unaff_x21 + 0x30);
      *puVar8 = uVar4;
      if (*(int *)(unaff_x23 + 0xcd0) != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar8 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8);
      lVar5 = FUN_0335b6c8(&DAT_083d23b8,1);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        FUN_033b9870();
      }
      plVar6 = (long *)FUN_0683eca4(uVar4,0);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      uVar4 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      if (3 < *(uint *)(unaff_x21 + 0x18)) {
        puVar8 = (undefined8 *)(unaff_x21 + 0x38);
        *puVar8 = uVar4;
        if (*(int *)(unaff_x23 + 0xcd0) != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)puVar8 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uVar4 = FUN_0335b6c8(&DAT_0842f588,1);
        if (4 < *(uint *)(unaff_x21 + 0x18)) {
          puVar8 = (undefined8 *)(unaff_x21 + 0x40);
          *puVar8 = uVar4;
          if (*(int *)(unaff_x23 + 0xcd0) != 0) {
            puVar1 = &DAT_0873ccb0 + ((ulong)puVar8 >> 0x12 & 0x7fff);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          plVar6 = (long *)FUN_06877628();
          FUN_02e06434();
          (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
          FUN_02e06434();
          FUN_02e06560();
          FUN_02e06434();
          FUN_033d1ba8(&DAT_0842f690);
          FUN_02e06560();
          uVar4 = FUN_0666ee4c();
          FUN_033d1ba8(&DAT_083cdc60);
          uVar7 = thunk_FUN_03398a84();
          FUN_0682eb84(uVar7,uVar4,0);
                    /* WARNING: Subroutine does not return */
          FUN_033d1c20(uVar7);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


