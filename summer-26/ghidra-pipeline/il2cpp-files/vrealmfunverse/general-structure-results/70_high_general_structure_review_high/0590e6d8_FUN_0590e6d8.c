/*
FUNCTION_NAME: FUN_0590e6d8
ENTRY_POINT: 0590e6d8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0590e6d8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_108;
  undefined8 *puStack_100;
  long *local_f8;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  long *local_e0;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  long *local_c0;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  long *local_a0;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long *local_70;
  
  puVar2 = PTR_DAT_0631f0a0;
  if ((DAT_066d35a6 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631f0a0);
    FUN_02b3c81c(Method_Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_ReflectionObject>_Get__);
    FUN_02b3c81c(Method_System_Tuple<Action<object>,_object>_get_Item2__);
    FUN_02b3c81c(Method_System_Tuple<TaskCompletionSource<int>,_byte[]>_get_Item1__);
    FUN_02b3c81c(
                Method_Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_Func<object[],_object>>__ctor__
                );
    FUN_02b3c81c(Method_System_Tuple<TaskCompletionSource<int>,_byte[]>_get_Item2__);
    FUN_02b3c81c(
                Method_Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_Func<object[],_object>>_Get__
                );
    FUN_02b3c81c(Method_System_Tuple<Guid,_string>__ctor__);
    FUN_02b3c81c(Method_System_Tuple<Guid,_string>_get_Item1__);
    FUN_02b3c81c(Method_System_Tuple<Guid,_string>_get_Item2__);
    FUN_02b3c81c(Method_System_Tuple<HumanBodyBones,_HumanBodyBones>__ctor__);
    FUN_02b3c81c(Method_Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_JsonContract>__ctor__);
    FUN_02b3c81c(Method_System_Tuple<HumanBodyBones,_HumanBodyBones>_get_Item1__);
    FUN_02b3c81c(Method_System_Tuple<HumanBodyBones,_HumanBodyBones>_get_Item2__);
    FUN_02b3c81c(Method_System_Tuple<SendOrPostCallback,_object>__ctor__);
    FUN_02b3c81c(Method_System_Tuple<SendOrPostCallback,_object>_get_Item1__);
    FUN_02b3c81c(Method_System_Tuple<SendOrPostCallback,_object>_get_Item2__);
    FUN_02b3c81c(Method_System_Tuple<string,_string>__ctor__);
    FUN_02b3c81c(Method_System_Tuple<string,_string>_get_Item1__);
    FUN_02b3c81c(Method_System_Tuple<string,_string>_get_Item2__);
    FUN_02b3c81c(Method_System_Tuple<Vector3,_float>__ctor__);
    FUN_02b3c81c(Method_Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_JsonContract>_Get__);
    FUN_02b3c81c(Method_System_Tuple<Vector3,_float>_get_Item1__);
    DAT_066d35a6 = 1;
  }
  uVar13 = *(undefined8 *)(param_1 + 0x70);
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = (long *)0x0;
  local_90 = 0;
  lStack_88 = 0;
  local_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_a0 = (long *)0x0;
  local_d0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  local_c0 = (long *)0x0;
  local_f0 = 0;
  puStack_e8 = (undefined8 *)0x0;
  local_e0 = (long *)0x0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_0586c3a0(uVar13,0);
  FUN_0586c3a0(*(undefined8 *)(param_1 + 0x78),0);
  puVar10 = Method_System_Tuple<Vector3,_float>_get_Item1__;
  puVar9 = Method_System_Tuple<Vector3,_float>__ctor__;
  puVar8 = Method_System_Tuple<Guid,_string>_get_Item2__;
  puVar7 = Method_System_Tuple<Guid,_string>_get_Item1__;
  puVar6 = Method_System_Tuple<Guid,_string>__ctor__;
  puVar5 = Method_System_Tuple<TaskCompletionSource<int>,_byte[]>_get_Item2__;
  puVar4 = Method_Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_JsonContract>_Get__;
  puVar3 = Method_Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_Func<object[],_object>>_Get__;
  puVar2 = Method_Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_Func<object[],_object>>__ctor__;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_037a6fdc(&local_108,*(long *)(param_1 + 0x10),
                 *(undefined8 *)
                  Method_Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_JsonContract>_Get__);
    local_70 = local_f8;
    puStack_78 = puStack_100;
    local_80 = local_108;
    local_108 = 0;
    puStack_100 = &local_80;
    while (uVar11 = FUN_0472eaf4(&local_80,*(undefined8 *)puVar3), (uVar11 & 1) != 0) {
      if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lStack_88 = local_70[4];
      local_90 = local_70[3];
      FUN_05c351e4(&local_90,0);
    }
    FUN_0472eaf0(&local_80,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_037a6fdc(&local_108,*(long *)(param_1 + 0x18),*(undefined8 *)puVar10);
      local_a0 = local_f8;
      puStack_a8 = puStack_100;
      local_b0 = local_108;
      local_108 = 0;
      puStack_100 = &local_b0;
      while (uVar11 = FUN_0472eaf4(&local_b0,*(undefined8 *)puVar8), (uVar11 & 1) != 0) {
        if (local_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lStack_88 = local_a0[4];
        local_90 = local_a0[3];
        FUN_05c351e4(&local_90,0);
      }
      FUN_0472eaf0(&local_b0,*(undefined8 *)puVar5);
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_037a6fdc(&local_108,*(long *)(param_1 + 0x20),*(undefined8 *)puVar9);
        local_c0 = local_f8;
        puStack_c8 = puStack_100;
        local_d0 = local_108;
        local_108 = 0;
        puStack_100 = &local_d0;
        while (uVar11 = FUN_0472eaf4(&local_d0,*(undefined8 *)puVar7), (uVar11 & 1) != 0) {
          if (local_c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lStack_88 = local_c0[4];
          local_90 = local_c0[3];
          FUN_05c351e4(&local_90,0);
        }
        FUN_0472eaf0(&local_d0,
                     *(undefined8 *)Method_System_Tuple<Action<object>,_object>_get_Item2__);
        if (*(long *)(param_1 + 0x28) != 0) {
          FUN_037a6fdc(&local_108,*(long *)(param_1 + 0x28),
                       *(undefined8 *)Method_System_Tuple<string,_string>_get_Item2__);
          local_e0 = local_f8;
          puStack_e8 = puStack_100;
          local_f0 = local_108;
          local_108 = 0;
          puStack_100 = &local_f0;
          while (uVar11 = FUN_0472eaf4(&local_f0,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
            if (local_e0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lStack_88 = local_e0[4];
            local_90 = local_e0[3];
            FUN_05c351e4(&local_90,0);
          }
          FUN_0472eaf0(&local_f0,
                       *(undefined8 *)
                        Method_System_Tuple<TaskCompletionSource<int>,_byte[]>_get_Item1__);
          if (*(long *)(param_1 + 0x10) != 0) {
            FUN_037a6fdc(&local_108,*(long *)(param_1 + 0x10),*(undefined8 *)puVar4);
            local_70 = local_f8;
            puStack_78 = puStack_100;
            local_80 = local_108;
            local_108 = 0;
            puStack_100 = &local_80;
            while (uVar11 = FUN_0472eaf4(&local_80,*(undefined8 *)puVar3), (uVar11 & 1) != 0) {
              if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              (**(code **)(*local_70 + 0x1b8))(local_70,*(undefined8 *)(*local_70 + 0x1c0));
            }
            FUN_0472eaf0(&local_80,*(undefined8 *)puVar2);
            if (*(long *)(param_1 + 0x18) != 0) {
              FUN_037a6fdc(&local_108,*(long *)(param_1 + 0x18),*(undefined8 *)puVar10);
              local_a0 = local_f8;
              puStack_a8 = puStack_100;
              local_b0 = local_108;
              local_108 = 0;
              puStack_100 = &local_b0;
              while (uVar11 = FUN_0472eaf4(&local_b0,*(undefined8 *)puVar8), (uVar11 & 1) != 0) {
                if (local_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                (**(code **)(*local_a0 + 0x1b8))(local_a0,*(undefined8 *)(*local_a0 + 0x1c0));
              }
              FUN_0472eaf0(&local_b0,*(undefined8 *)puVar5);
              if (*(long *)(param_1 + 0x20) != 0) {
                FUN_037a6fdc(&local_108,*(long *)(param_1 + 0x20),*(undefined8 *)puVar9);
                local_c0 = local_f8;
                puStack_c8 = puStack_100;
                local_d0 = local_108;
                local_108 = 0;
                puStack_100 = &local_d0;
                while (uVar11 = FUN_0472eaf4(&local_d0,*(undefined8 *)puVar7), (uVar11 & 1) != 0) {
                  if (local_c0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4();
                  }
                  (**(code **)(*local_c0 + 0x1b8))(local_c0,*(undefined8 *)(*local_c0 + 0x1c0));
                }
                FUN_0472eaf0(&local_d0,
                             *(undefined8 *)Method_System_Tuple<Action<object>,_object>_get_Item2__)
                ;
                if (*(long *)(param_1 + 0x28) != 0) {
                  FUN_037a6fdc(&local_108,*(long *)(param_1 + 0x28),
                               *(undefined8 *)Method_System_Tuple<string,_string>_get_Item2__);
                  local_e0 = local_f8;
                  puStack_e8 = puStack_100;
                  local_f0 = local_108;
                  local_108 = 0;
                  puStack_100 = &local_f0;
                  while (uVar11 = FUN_0472eaf4(&local_f0,*(undefined8 *)puVar6), (uVar11 & 1) != 0)
                  {
                    if (local_e0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    (**(code **)(*local_e0 + 0x1b8))(local_e0,*(undefined8 *)(*local_e0 + 0x1c0));
                  }
                  FUN_0472eaf0(&local_f0,
                               *(undefined8 *)
                                Method_System_Tuple<TaskCompletionSource<int>,_byte[]>_get_Item1__);
                  if (*(long *)(param_1 + 0x50) != 0) {
                    FUN_0590c448();
                    if (*(long *)(param_1 + 0x58) != 0) {
                      FUN_0451c310(*(long *)(param_1 + 0x58),
                                   *(undefined8 *)
                                    Method_Newtonsoft_Json_Utilities_ThreadSafeStore<Type,_ReflectionObject>_Get__
                                  );
                      lVar12 = *(long *)(param_1 + 0x10);
                      if (lVar12 != 0) {
                        iVar1 = *(int *)(lVar12 + 0x18);
                        *(undefined4 *)(lVar12 + 0x18) = 0;
                        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                        if (0 < iVar1) {
                          FUN_04d9e084(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
                        }
                        lVar12 = *(long *)(param_1 + 0x18);
                        if (lVar12 != 0) {
                          iVar1 = *(int *)(lVar12 + 0x18);
                          *(undefined4 *)(lVar12 + 0x18) = 0;
                          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                          if (0 < iVar1) {
                            FUN_04d9e084(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
                          }
                          lVar12 = *(long *)(param_1 + 0x20);
                          if (lVar12 != 0) {
                            iVar1 = *(int *)(lVar12 + 0x18);
                            *(undefined4 *)(lVar12 + 0x18) = 0;
                            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                            if (0 < iVar1) {
                              FUN_04d9e084(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
                            }
                            lVar12 = *(long *)(param_1 + 0x28);
                            if (lVar12 != 0) {
                              iVar1 = *(int *)(lVar12 + 0x18);
                              *(undefined4 *)(lVar12 + 0x18) = 0;
                              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                              if (0 < iVar1) {
                                FUN_04d9e084(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
                              }
                              lVar12 = *(long *)(param_1 + 0x60);
                              if (lVar12 != 0) {
                                iVar1 = *(int *)(lVar12 + 0x18);
                                *(undefined4 *)(lVar12 + 0x18) = 0;
                                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                if (0 < iVar1) {
                                  FUN_04d9e084(*(undefined8 *)(lVar12 + 0x10),0,iVar1,0);
                                }
                                *(undefined4 *)(param_1 + 0x30) = 0;
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


