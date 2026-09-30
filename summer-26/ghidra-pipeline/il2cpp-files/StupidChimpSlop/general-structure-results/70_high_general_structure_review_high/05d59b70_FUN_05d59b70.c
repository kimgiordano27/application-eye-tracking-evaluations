/*
FUNCTION_NAME: FUN_05d59b70
ENTRY_POINT: 05d59b70
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_05d59b70(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  int *piVar14;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long *local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long *local_70;
  
  if ((DAT_06a580b7 & 1) == 0) {
    FUN_02d4dc40(Method_System_Threading_SemaphoreSlim_CheckDispose__);
    FUN_02d4dc40(Method_System_Threading_SemaphoreSlim_Release__);
    FUN_02d4dc40(Method_System_Threading_SemaphoreSlim_Wait__);
    FUN_02d4dc40(Method_System_Threading_SemaphoreSlim_WaitAsync__);
    FUN_02d4dc40(Method_UnityEngine_InputSystem_XR_Haptics_SendBufferedHapticCommand_Create__);
    FUN_02d4dc40(Method_System_Threading_SendOrPostCallback_Invoke__);
    FUN_02d4dc40(Method_UnityEngine_InputSystem_Sensor_get_samplingFrequency__);
    FUN_02d4dc40(Method_UnityEngine_Rendering_SerializableEnum_get_value__);
    FUN_02d4dc40(
                Method_System_Runtime_Serialization_Formatters_Binary_SerializationHeaderRecord_Read__
                );
    FUN_02d4dc40(Method_System_Runtime_Serialization_SerializationInfo__ctor__);
    FUN_02d4dc40(Method_System_Runtime_Serialization_SerializationInfo_AddValue__);
    FUN_02d4dc40(PTR_DAT_0664c628);
    FUN_02d4dc40(Method_System_Runtime_Serialization_SerializationInfo_AddValueInternal__);
    FUN_02d4dc40(Method_System_Runtime_Serialization_SerializationInfo_FindElement__);
    FUN_02d4dc40(Method_System_Runtime_Serialization_SerializationInfo_GetValue__);
    DAT_06a580b7 = 1;
  }
  puVar8 = Method_System_Runtime_Serialization_SerializationInfo_FindElement__;
  puVar7 = Method_System_Runtime_Serialization_SerializationInfo_AddValue__;
  puVar6 = Method_System_Runtime_Serialization_SerializationInfo__ctor__;
  puVar5 = Method_System_Runtime_Serialization_Formatters_Binary_SerializationHeaderRecord_Read__;
  puVar4 = Method_System_Threading_SendOrPostCallback_Invoke__;
  puVar3 = Method_UnityEngine_InputSystem_XR_Haptics_SendBufferedHapticCommand_Create__;
  puVar2 = Method_System_Threading_SemaphoreSlim_WaitAsync__;
  puVar1 = PTR_DAT_0664c628;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = (long *)0x0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = (long *)0x0;
  if ((*(long *)(param_1 + 0xa0) != 0) &&
     (lVar10 = *(long *)(*(long *)(param_1 + 0xa0) + 0x10), lVar10 != 0)) {
    FUN_036a68ac(&local_b8,lVar10,
                 *(undefined8 *)
                  Method_System_Runtime_Serialization_SerializationInfo_AddValueInternal__);
    local_70 = local_a8;
    puStack_78 = puStack_b0;
    local_80 = local_b8;
    local_b8 = 0;
    puStack_b0 = &local_80;
    while (uVar11 = FUN_049c6928(&local_80,*(undefined8 *)puVar4), plVar9 = local_70,
          (uVar11 & 1) != 0) {
      plVar12 = *(long **)(param_1 + 0xa0);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar11 = (**(code **)(*plVar12 + 0x188))(plVar12,local_70,*(undefined8 *)(*plVar12 + 400));
      if ((uVar11 & 1) != 0) {
        if (*(long *)(param_1 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        uVar11 = FUN_04caaeb4(*(long *)(param_1 + 0xe0),plVar9,*(undefined8 *)puVar5);
        if ((uVar11 & 1) == 0) {
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          lVar10 = *plVar9;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar7) {
                puVar13 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0x12) * 0x10 + 0x138);
                goto LAB_05d59d84;
              }
              uVar11 = uVar11 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar11 != 0);
          }
          puVar13 = (undefined8 *)FUN_02d87540(plVar9,*(long *)puVar7,0x12);
LAB_05d59d84:
          (*(code *)*puVar13)(plVar9,param_2,puVar13[1]);
        }
      }
    }
    FUN_049c6924(&local_80,*(undefined8 *)puVar2);
    if ((*(long *)(param_1 + 0x98) != 0) &&
       (lVar10 = *(long *)(*(long *)(param_1 + 0x98) + 0x10), lVar10 != 0)) {
      FUN_036a68ac(&local_b8,lVar10,*(undefined8 *)puVar8);
      local_90 = local_a8;
      puStack_98 = puStack_b0;
      local_a0 = local_b8;
      local_b8 = 0;
      puStack_b0 = &local_a0;
      do {
        do {
          do {
            uVar11 = FUN_049c6928(&local_a0,*(undefined8 *)puVar3);
            plVar9 = local_90;
            if ((uVar11 & 1) == 0) {
              FUN_049c6924(&local_a0,*(undefined8 *)Method_System_Threading_SemaphoreSlim_Wait__);
              if (*(int *)(*(long *)Method_System_Runtime_Serialization_SerializationInfo_GetValue__
                          + 0xe4) == 0) {
                thunk_FUN_02dabd98();
              }
              FUN_05d976b8(0);
              return;
            }
            plVar12 = *(long **)(param_1 + 0x98);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d4dee8();
            }
            uVar11 = (**(code **)(*plVar12 + 0x188))
                               (plVar12,local_90,*(undefined8 *)(*plVar12 + 400));
          } while ((uVar11 & 1) == 0);
          if (*(long *)(param_1 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d4dee8();
          }
          uVar11 = FUN_04caaeb4(*(long *)(param_1 + 0xd8),plVar9,*(undefined8 *)puVar6);
        } while ((uVar11 & 1) != 0);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar10 = *plVar9;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
              puVar13 = (undefined8 *)(lVar10 + (long)(*piVar14 + 0xb) * 0x10 + 0x138);
              goto LAB_05d59e74;
            }
            uVar11 = uVar11 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar11 != 0);
        }
        puVar13 = (undefined8 *)FUN_02d87540(plVar9,*(long *)puVar1,0xb);
LAB_05d59e74:
        (*(code *)*puVar13)(plVar9,param_2,puVar13[1]);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


