/*
FUNCTION_NAME: FUN_07757678
ENTRY_POINT: 07757678
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_9;telemetry_or_network_hits_2
*/


uint FUN_07757678(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  
  puVar1 = Method_System_Collections_Generic_Dictionary<ParameterExpression,_int>_TryGetValue__;
  if ((DAT_08271b3a & 1) == 0) {
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<PlayerSetupInfo,_Vector3>_Add__);
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<PlayerSetupInfo,_Vector3>_Clear__);
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<PlayerSetupInfo,_Vector3>_GetEnumerator__
                );
    FUN_0373b518(
                System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
                );
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<PlayerSetupInfo,_Vector3>_Remove__);
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<PlayerSetupInfo,_Vector3>_get_Count__)
    ;
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<ParameterExpression,_int>_TryGetValue__
                );
    DAT_08271b3a = 1;
  }
  lVar7 = *(long *)puVar1;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (long *)0x0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar7 = *(long *)puVar1;
  }
  puVar4 = Method_System_Collections_Generic_Dictionary<PlayerSetupInfo,_Vector3>_Remove__;
  puVar3 = Method_System_Collections_Generic_Dictionary<PlayerSetupInfo,_Vector3>_Clear__;
  puVar2 = Method_System_Collections_Generic_Dictionary<PlayerSetupInfo,_Vector3>_Add__;
  puVar1 = 
  System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo;
  if (**(long **)(lVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  FUN_049cf910(&local_78,**(long **)(lVar7 + 0xb8),
               *(undefined8 *)
                Method_System_Collections_Generic_Dictionary<PlayerSetupInfo,_Vector3>_get_Count__);
  uStack_58 = uStack_70;
  local_60 = local_78;
  local_50 = local_68;
  do {
    uVar8 = FUN_05d64e98(&local_60,*(undefined8 *)puVar3);
    plVar5 = local_50;
    if ((uVar8 & 1) == 0) {
      FUN_05d64e94(&local_60,*(undefined8 *)puVar2);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar6 = FUN_07612694(param_1,0);
      goto LAB_07757824;
    }
    if (local_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar7 = *local_50;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_077577d4;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_0377596c(local_50,*(long *)puVar4,4);
LAB_077577d4:
    uVar8 = (*(code *)*puVar9)(plVar5,param_1,puVar9[1]);
  } while ((uVar8 & 1) == 0);
  FUN_05d64e94(&local_60,*(undefined8 *)puVar2);
  uVar6 = 1;
LAB_07757824:
  return uVar6 & 1;
}


