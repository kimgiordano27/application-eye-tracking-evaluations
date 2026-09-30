/*
FUNCTION_NAME: FUN_03467d90
ENTRY_POINT: 03467d90
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_3
*/


undefined8 FUN_03467d90(long param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  
  if ((DAT_04832992 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_SerializationUtility_DeserializeValue<object>__)
    ;
    thunk_FUN_01efb3a4(Method_System_RuntimeType_GetCustomAttributes__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_SerializationNodeDataReader_<_ctor>b__6_1__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04832992 = 1;
  }
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 != (long *)0x0) {
    lVar6 = *plVar2;
    bVar1 = *(byte *)(*(long *)
                       Method_Sirenix_Serialization_SerializationUtility_DeserializeValue<object>__
                     + 0x130);
    if ((bVar1 <= *(byte *)(lVar6 + 0x130)) &&
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_Sirenix_Serialization_SerializationUtility_DeserializeValue<object>__)) {
      plVar2 = (long *)(**(code **)(lVar6 + 0x178))(plVar2,0,*(undefined8 *)(lVar6 + 0x180));
      if (plVar2 == (long *)0x0) goto LAB_03467fa8;
      uVar4 = FUN_03453870(plVar2,0);
      if ((uVar4 & 1) != 0) {
        if (param_2 == (long *)0x0) goto LAB_03467fa8;
        uVar4 = FUN_03583944(param_2,0);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
        uVar3 = FUN_0345e228(param_1);
        uVar8 = *(undefined8 *)
                 Method_Sirenix_Serialization_SerializationNodeDataReader_<_ctor>b__6_1__;
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
        }
        uVar8 = FUN_03579868(uVar8,0);
        uVar4 = FUN_03582560(uVar3,uVar8,0);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
      }
      lVar6 = (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      if (lVar6 != 0) {
        plVar2 = (long *)(**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
        if (plVar2 != (long *)0x0) {
          lVar6 = *plVar2;
          uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)Method_System_RuntimeType_GetCustomAttributes__
                 ) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_03467f84;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)
                   FUN_01ecb238(plVar2,*(long *)Method_System_RuntimeType_GetCustomAttributes__,1);
LAB_03467f84:
                    /* WARNING: Could not recover jumptable at 0x03467fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (*(code *)*puVar5)(plVar2,param_2,param_3,puVar5[1]);
          return uVar3;
        }
        goto LAB_03467fa8;
      }
    }
  }
  uVar3 = FUN_0345e228(param_1);
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03467e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*param_2 + 0x2a8))(param_2,uVar3,*(undefined8 *)(*param_2 + 0x2b0));
    return uVar3;
  }
LAB_03467fa8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


