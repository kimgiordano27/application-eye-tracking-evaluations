/*
FUNCTION_NAME: FUN_05ef4adc
ENTRY_POINT: 05ef4adc
PROGRAM: beastcraft-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_13;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05ef4f50) */

void FUN_05ef4adc(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,byte param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long local_50;
  long *local_48;
  
  if ((DAT_06e9438d & 1) == 0) {
    FUN_02e3ca1c(Fusion_ISceneLoadDone_var);
    FUN_02e3ca1c(PTR_DAT_06ab07f8);
    FUN_02e3ca1c(PTR_DAT_06a2ef10);
    FUN_02e3ca1c(Fusion_ISceneLoadStart_var);
    FUN_02e3ca1c(PTR_DAT_06ab16a0);
    FUN_02e3ca1c(PTR_DAT_06ab5e18);
    FUN_02e3ca1c(System_Reactive_Concurrency_IScheduler_var);
    FUN_02e3ca1c(System_Reactive_Concurrency_ISchedulerLongRunning_var);
    FUN_02e3ca1c(MessagePipe_IAsyncRequestHandlerFilter_var);
    FUN_02e3ca1c(System_Reactive_Concurrency_ISchedulerPeriodic_var);
    FUN_02e3ca1c(System_ComponentModel_IChangeTracking_var);
    DAT_06e9438d = 1;
  }
  puVar2 = PTR_DAT_06ab5e18;
  local_50 = 0;
  local_48 = (long *)0x0;
  if ((*(long *)(param_1 + 0x1a0) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x70), lVar3 != 0)) {
    thunk_FUN_0623a5f0(lVar3,0,0);
    uVar4 = FUN_03a21438(0x38,*(undefined8 *)puVar2);
    if (param_2 != 0) {
      plVar5 = (long *)UnityEngine_Rendering_VolumeProfile__Remove<object>
                                 (param_2,*(undefined8 *)
                                           System_Reactive_Concurrency_ISchedulerPeriodic_var,
                                  &local_50,uVar4,
                                  *(undefined8 *)System_ComponentModel_IChangeTracking_var,0x5cf,
                                  *(undefined8 *)System_Reactive_Concurrency_IScheduler_var);
      puVar2 = PTR_DAT_06ab07f8;
      local_48 = plVar5;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      lVar3 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06ab07f8) {
            puVar6 = (undefined8 *)(lVar3 + (long)(*piVar9 + 0xc) * 0x10 + 0x138);
            goto LAB_05ef4c78;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02e759c0(plVar5,*(long *)PTR_DAT_06ab07f8,0xc);
LAB_05ef4c78:
      (*(code *)*puVar6)(plVar5,1,puVar6[1]);
      plVar5 = local_48;
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      uVar4 = *param_4;
      *(undefined8 *)(local_50 + 0x18) = param_4[1];
      *(undefined8 *)(local_50 + 0x10) = uVar4;
      if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      lVar3 = *local_48;
      uVar4 = *param_4;
      uVar1 = param_4[1];
      uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06ab16a0) {
            puVar6 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05ef4cf8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02e759c0(local_48,*(long *)PTR_DAT_06ab16a0,0);
LAB_05ef4cf8:
      (*(code *)*puVar6)(plVar5,uVar4,uVar1,0,2,puVar6[1]);
      plVar5 = local_48;
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      uVar4 = *param_3;
      *(undefined8 *)(local_50 + 0x28) = param_3[1];
      *(undefined8 *)(local_50 + 0x20) = uVar4;
      if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      lVar3 = *local_48;
      uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05ef4d78;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02e759c0(local_48,*(long *)puVar2,0);
LAB_05ef4d78:
      (*(code *)*puVar6)(plVar5,param_3,1,puVar6[1]);
      if (*(long *)(param_1 + 0x1a0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      *(undefined8 *)(local_50 + 0x30) = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x70);
      thunk_FUN_02ee2be8();
      plVar5 = local_48;
      puVar2 = MessagePipe_IAsyncRequestHandlerFilter_var;
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      *(byte *)(local_50 + 0x38) = param_5 & 1;
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        lVar3 = *(long *)puVar2;
      }
      puVar6 = *(undefined8 **)(lVar3 + 0xb8);
      lVar10 = puVar6[0x15];
      if (lVar10 == 0) {
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_02e9a04c();
          puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar4 = *puVar6;
        lVar10 = thunk_FUN_02e78ab8(*(undefined8 *)Fusion_ISceneLoadDone_var);
        FUN_04b2178c(lVar10,uVar4,
                     *(undefined8 *)System_Reactive_Concurrency_ISchedulerLongRunning_var,0);
        plVar7 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa8);
        *plVar7 = lVar10;
        thunk_FUN_02ee2be8(plVar7,lVar10);
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02e3ccc4();
      }
      lVar3 = *plVar5;
      lVar11 = *(long *)Fusion_ISceneLoadStart_var;
      uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)(lVar11 + 0x20)) {
            lVar3 = lVar3 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
            goto LAB_05ef4e9c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      lVar3 = FUN_02e759c0(plVar5);
LAB_05ef4e9c:
      lVar3 = thunk_FUN_02e5afdc(*(undefined8 *)(lVar3 + 8),lVar11);
      (**(code **)(lVar3 + 8))(plVar5,lVar10,lVar3);
      plVar5 = local_48;
      if (local_48 != (long *)0x0) {
        lVar3 = *local_48;
        uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06a2ef10) {
              puVar6 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
              goto FUN_05ef4f20;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_02e759c0(local_48,*(long *)PTR_DAT_06a2ef10,0);
FUN_05ef4f20:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


