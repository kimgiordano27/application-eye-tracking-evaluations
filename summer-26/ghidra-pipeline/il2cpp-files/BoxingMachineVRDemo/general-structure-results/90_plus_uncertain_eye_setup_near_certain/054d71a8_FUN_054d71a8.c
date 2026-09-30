/*
FUNCTION_NAME: FUN_054d71a8
ENTRY_POINT: 054d71a8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_054d71a8(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  if ((DAT_06b7ebde & 1) == 0) {
    FUN_02d6084c(System_Action<ulong,_OVRSpace,_bool,_Guid>_TypeInfo);
    FUN_02d6084c(
                System_Action<Object[],_IntPtr,_IntPtr,_int,_int,_Action<TypeDispatchData>>_TypeInfo
                );
    FUN_02d6084c(PTR_DAT_0676bc60);
    FUN_02d6084c(System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo);
    FUN_02d6084c(System_Action<int,_bool,_bool,_bool,_bool,_byte[]>_TypeInfo);
    FUN_02d6084c(
                System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
                );
    DAT_06b7ebde = 1;
  }
  puVar4 = System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo;
  if ((*(uint *)(param_1 + 0x34) < 7) &&
     ((1 << (ulong)(*(uint *)(param_1 + 0x34) & 0x1f) & 0x68U) != 0)) {
    *(undefined4 *)(param_1 + 0x34) = 2;
    return;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_054d72b0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_02d9a5d4(param_2,*(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo,0);
LAB_054d72b0:
  uVar6 = (*(code *)*puVar5)(param_2,puVar5[1]);
  puVar3 = PTR_DAT_0676bc60;
  if (*(int *)(*(long *)PTR_DAT_0676bc60 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0676bc60);
  }
  uVar7 = FUN_054d5194();
  puVar2 = PTR_DAT_0675e258;
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)(PTR_DAT_0675e258 + 0xe0));
  }
  uVar9 = FUN_0501ed54(uVar6,uVar7,0);
  if ((uVar9 & 1) == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar7 = FUN_054d5394();
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)(puVar2 + 0xe0));
    }
    uVar9 = FUN_0501ed54(uVar6,uVar7,0);
    if ((uVar9 & 1) == 0) {
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = FUN_054d5a1c();
      if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)(puVar2 + 0xe0));
      }
      uVar9 = FUN_0501ed54(uVar6,uVar7,0);
      if ((uVar9 & 1) == 0) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar7 = FUN_054d57e4();
        if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)(puVar2 + 0xe0));
        }
        uVar9 = FUN_0501ed54(uVar6,uVar7,0);
        if ((uVar9 & 1) == 0) {
          lVar8 = *param_2;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
                puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_054d7564;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_02d9a5d4(param_2,*(long *)puVar4,1);
LAB_054d7564:
          lVar8 = (*(code *)*puVar5)(param_2,puVar5[1]);
          if (lVar8 != 0) {
            FUN_054d8244(param_1,param_2);
            return;
          }
          uVar6 = thunk_FUN_02dc61f4(
                                    System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo
                                    );
          uVar6 = FUN_054f9054(uVar6,0);
          thunk_FUN_02dc61f4(PTR_DAT_067696e0);
          uVar7 = thunk_FUN_02d9d534();
          System_Int32__System_IConvertible_ToUInt32(uVar7,uVar6,0);
          uVar6 = FUN_054f9058(uVar7,0);
          uVar7 = thunk_FUN_02dc61f4(
                                    System_Action<ulong,_bool,_OVRSpace,_Guid,_OVRPlugin_SpaceComponentType,_bool>_TypeInfo
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar6,uVar7);
        }
        bVar1 = *(byte *)(*(long *)
                           System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
                         + 0x130);
        if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)
             System_Data_Listeners_Action<DataViewListener,_DataViewListener,_ListChangedEventArgs,_bool,_bool>_TypeInfo
           )) {
          FUN_054d8030(param_1,param_2);
          return;
        }
      }
      else {
        bVar1 = *(byte *)(*(long *)System_Action<int,_bool,_bool,_bool,_bool,_byte[]>_TypeInfo +
                         0x130);
        if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)System_Action<int,_bool,_bool,_bool,_bool,_byte[]>_TypeInfo)) {
          FUN_054d7e0c(param_1,param_2);
          return;
        }
      }
    }
    else {
      bVar1 = *(byte *)(*(long *)
                         System_Action<Object[],_IntPtr,_IntPtr,_int,_int,_Action<TypeDispatchData>>_TypeInfo
                       + 0x130);
      if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
          *(long *)
           System_Action<Object[],_IntPtr,_IntPtr,_int,_int,_Action<TypeDispatchData>>_TypeInfo)) {
        FUN_054d7bc0(param_1,param_2);
        return;
      }
    }
  }
  else {
    bVar1 = *(byte *)(*(long *)System_Action<ulong,_OVRSpace,_bool,_Guid>_TypeInfo + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)System_Action<ulong,_OVRSpace,_bool,_Guid>_TypeInfo)) {
      FUN_054d7970(param_1,param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60e88(param_2);
}


