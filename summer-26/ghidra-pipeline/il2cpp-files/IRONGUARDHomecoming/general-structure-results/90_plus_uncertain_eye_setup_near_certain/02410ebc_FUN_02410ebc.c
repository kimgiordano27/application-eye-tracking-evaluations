/*
FUNCTION_NAME: FUN_02410ebc
ENTRY_POINT: 02410ebc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x024113ec) */

void FUN_02410ebc(long *param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  long *local_58;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_Contexts_Context_SetProperty__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__);
    thunk_FUN_01efb3a4(Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_01ecafa0(param_3);
    }
  }
  puVar2 = Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__;
  local_58 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    lVar9 = *param_1;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_02410fa0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(param_1,*(long *)
                                   Method_System_Reflection_Emit_ConstructorBuilder_GetCustomAttributes__
                          ,2);
LAB_02410fa0:
    lVar9 = (*(code *)*puVar5)(param_1,puVar5[1]);
    if (lVar9 != 0) {
      uVar11 = FUN_03e1a3c0(lVar9,param_2,&local_58,0);
      if ((uVar11 & 1) == 0) {
        return;
      }
      lVar9 = *param_1;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02411010;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(param_1,*(long *)puVar2,0);
LAB_02411010:
      plVar6 = (long *)(*(code *)*puVar5)(param_1,puVar5[1]);
      puVar2 = Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__;
      if (plVar6 != (long *)0x0) {
        lVar9 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_02411078;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01ecb238(plVar6,*(long *)
                                      Method_System_Reflection_Emit_ConstructorBuilder_IsDefined__,0
                             );
LAB_02411078:
        lVar9 = (*(code *)*puVar5)(plVar6,param_2 & 0xffffffff,puVar5[1]);
        if (lVar9 != 0) {
          FUN_03e1f400(&local_118,lVar9,param_2 >> 0x20,0);
          plVar7 = local_58;
          uStack_d8 = uStack_110;
          uVar4 = uStack_d8;
          local_e0 = local_118;
          uStack_c8 = uStack_100;
          uStack_d0 = local_108;
          uStack_d8._0_4_ = (undefined4)uStack_110;
          uStack_b8 = uStack_f0;
          local_c0 = local_f8;
          local_b0 = local_e8;
          local_68 = local_118;
          local_60 = (undefined4)uStack_d8;
          uStack_d8 = uVar4;
          if (local_58 != (long *)0x0) {
            lVar9 = *local_58;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) ==
                    *(long *)Method_System_Runtime_Remoting_Contexts_Context_SetProperty__) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_02411124;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar5 = (undefined8 *)
                     FUN_01ecb238(local_58,*(long *)
                                            Method_System_Runtime_Remoting_Contexts_Context_SetProperty__
                                  ,0);
LAB_02411124:
            plVar7 = (long *)(*(code *)*puVar5)(plVar7,puVar5[1]);
            puVar3 = Method_UnityEngine_UIElements_ContextualMenuManipulator_OnContextualMenuEvent__
            ;
            puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            do {
              lVar9 = *plVar7;
              uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                    puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_02411194;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar5 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_02411194:
              uVar11 = (*(code *)*puVar5)(plVar7,puVar5[1]);
              if ((uVar11 & 1) == 0) {
LAB_02411354:
                if (plVar7 == (long *)0x0) {
                  return;
                }
                lVar9 = *plVar7;
                uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar11 == 0) goto LAB_02411394;
                piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                goto LAB_0241137c;
              }
              lVar9 = *plVar7;
              uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
                    puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_024111f0;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar5 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_024111f0:
              uVar11 = (*(code *)*puVar5)(plVar7,puVar5[1]);
              uVar8 = FUN_0240ea50(param_1,uVar11);
              if ((uVar8 & 1) == 0) goto LAB_02411354;
              lVar10 = *plVar6;
              lVar9 = *(long *)puVar2;
              uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar8 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == lVar9) {
                    puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_0241125c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar8 != 0);
              }
              puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,0);
LAB_0241125c:
              lVar9 = (*(code *)*puVar5)(plVar6,uVar11 & 0xffffffff,puVar5[1]);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              FUN_03e1f400(&local_e0,lVar9,uVar11 >> 0x20,0);
              uStack_88 = uStack_c8;
              uStack_90 = uStack_d0;
              uStack_78 = uStack_b8;
              local_80 = local_c0;
              local_70 = local_b0;
              local_a0 = local_68;
              uStack_98 = CONCAT44((int)((ulong)uStack_d8 >> 0x20),local_60);
              lVar10 = *plVar6;
              lVar9 = *(long *)puVar2;
              uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar8 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == lVar9) {
                    puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_024112f8;
                  }
                  uVar8 = uVar8 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar8 != 0);
              }
              puVar5 = (undefined8 *)FUN_01ecb238(plVar6,lVar9,0);
LAB_024112f8:
              lVar9 = (*(code *)*puVar5)(plVar6,uVar11 & 0xffffffff,puVar5[1]);
              uStack_d8 = uStack_98;
              local_e0 = local_a0;
              uStack_c8 = uStack_88;
              uStack_d0 = uStack_90;
              uStack_b8 = uStack_78;
              local_c0 = local_80;
              local_b0 = local_70;
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uStack_148 = uStack_98;
              local_150 = local_a0;
              uStack_138 = uStack_88;
              uStack_140 = uStack_90;
              uStack_128 = uStack_78;
              local_130 = local_80;
              local_120 = local_70;
              FUN_03e1f16c(lVar9,uVar11 >> 0x20,&local_150,1,0);
            } while( true );
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0241137c:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_024113b0;
    }
  }
LAB_02411394:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_024113b0:
  (*(code *)*puVar5)(plVar7,puVar5[1]);
  return;
}


