/*
FUNCTION_NAME: FUN_0412a410
ENTRY_POINT: 0412a410
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x0412a8c4) */
/* WARNING: Removing unreachable block (ram,0x0412a8b8) */

void FUN_0412a410(long *param_1,long *param_2,int param_3,long *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar2 = PTR_DAT_0458a428;
  if ((DAT_04840788 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_0458a428);
    thunk_FUN_01efb3a4(PTR_DAT_0458a438);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<ValueInput,_object>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_DateTime_AddMonths__);
    thunk_FUN_01efb3a4(Method_System_DateTime_AddTicks__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_0458a448);
    thunk_FUN_01efb3a4(Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__);
    DAT_04840788 = 1;
  }
  lVar6 = *(long *)puVar2;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar6 = *(long *)puVar2;
  }
  uVar14 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
  uVar7 = FUN_035b51f0(uVar14,0,0);
  if ((uVar7 & 1) != 0) {
    FUN_04036e24(uVar14,0);
  }
  if (((param_2 != (long *)0x0) && (*param_4 != 0)) && (param_1[9] != 0)) {
    lVar6 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0412a574;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(param_2,*(long *)Method_System_DateTime_AddMonths__,0);
LAB_0412a574:
    plVar9 = (long *)(*(code *)*puVar8)(param_2,puVar8[1]);
    puVar4 = PTR_DAT_0458a438;
    puVar3 = Method_System_DateTime_AddTicks__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0412a5f4;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0);
LAB_0412a5f4:
      uVar7 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      if ((uVar7 & 1) == 0) {
        if (plVar9 == (long *)0x0) break;
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_0412a840;
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_0412a828;
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0412a650;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_0412a650:
      uVar5 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      if (param_1[6] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar7 = FUN_02b142d4(param_1[6],uVar5,&local_b0,*(undefined8 *)puVar4);
      if ((uVar7 & 1) != 0) {
        FUN_041bf29c(&local_c8,local_b0,uStack_a8,param_3,0);
        lVar6 = *param_4;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uStack_98 = uStack_c0;
        local_a0 = local_c8;
        local_90 = local_b8;
        lVar11 = *(long *)(lVar6 + 0x10);
        lVar12 = *(long *)PTR_DAT_0458a448;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          lVar11 = lVar11 + (long)(int)uVar1 * 0x18;
          *(undefined8 *)(lVar11 + 0x30) = local_b8;
          *(undefined8 *)(lVar11 + 0x28) = uStack_c0;
          *(undefined8 *)(lVar11 + 0x20) = local_c8;
          thunk_FUN_01f51358(lVar11 + 0x28,0);
        }
        else {
          uStack_78 = uStack_c0;
          local_80 = local_c8;
          local_70 = local_b8;
          FUN_03168d38(lVar6,&local_80,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        if (param_1[9] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_02ed9a64(param_1[9],uVar5,
                     *(undefined8 *)Method_System_Linq_Enumerable_Select<ValueInput,_object>__);
        lVar6 = FUN_04127458(param_1);
        if (lVar6 != 0) {
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(long *)(lVar6 + 0x4b0) != 0) {
            lVar6 = FUN_04127458(param_1);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar6 = *(long *)(lVar6 + 0x4b0);
            uVar7 = FUN_041bf288(&local_c8,0);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c(uVar7,uVar7 & 0xffffffff);
            }
            uVar7 = FUN_030bac7c(lVar6,uVar7 & 0xffffffff,
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_TaskAwaiter<bool>_GetResult__
                                );
            if (((uVar7 & 1) != 0) && (uVar7 = thunk_FUN_041bf220(&local_c8,0), (uVar7 & 1) != 0)) {
              uVar5 = FUN_041bf288(&local_c8,0);
              uVar10 = (**(code **)(*param_1 + 0x2b8))
                                 (param_1,uVar5,*(undefined8 *)(*param_1 + 0x2c0));
              FUN_0412a410(param_1,uVar10,param_3 + 1,param_4);
            }
          }
        }
      }
    } while( true );
  }
  goto LAB_0412a870;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar13 = piVar13 + 4;
    if (uVar7 == 0) break;
LAB_0412a828:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0412a85c;
    }
  }
LAB_0412a840:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar9,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_0412a85c:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
LAB_0412a870:
  uVar7 = FUN_035b51f0(uVar14,0,0);
  if ((uVar7 & 1) != 0) {
    FUN_04036ec0(uVar14,0);
  }
  return;
}


