/*
FUNCTION_NAME: FUN_077636fc
ENTRY_POINT: 077636fc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x07763a28) */
/* WARNING: Removing unreachable block (ram,0x07763a2c) */
/* WARNING: Removing unreachable block (ram,0x07763b00) */

void FUN_077636fc(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long local_68;
  
  if ((DAT_08271bc2 & 1) == 0) {
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<string,_int>_Add__);
    FUN_0373b518(PTR_DAT_07d97e98);
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<string,_IWebSocketSession>_get_Count__
                );
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<string,_IWebSocketSession>_get_Keys__)
    ;
    FUN_0373b518(PTR_DAT_07d97ea0);
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<string,_IWebSocketSession>_get_Values__
                );
    FUN_0373b518(PTR_DAT_07d97ea8);
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<string,_int>_Clear__);
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<string,_Index>__ctor__);
    FUN_0373b518(PTR_DAT_07d97eb0);
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<string,_int>_GetEnumerator__);
    FUN_0373b518(PTR_DAT_07d8b398);
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<string,_Index>_Remove__);
    DAT_08271bc2 = 1;
  }
  puVar2 = Method_System_Collections_Generic_Dictionary<string,_int>__ctor__;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  lStack_88 = 0;
  local_90 = 0;
  local_b0 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x40) + 0x18) == 0) {
      return;
    }
    if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<string,_int>_Add__ + 0xe4) ==
        0) {
      thunk_FUN_03798b70();
    }
    lVar11 = FUN_0544df8c(*(undefined8 *)puVar2);
    puVar9 = Method_System_Collections_Generic_Dictionary<string,_int>_GetEnumerator__;
    puVar8 = Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__;
    puVar7 = Method_System_Collections_Generic_Dictionary<string,_int>_Clear__;
    puVar6 = Method_System_Collections_Generic_Dictionary<string,_IWebSocketSession>_get_Keys__;
    puVar5 = PTR_DAT_07d97eb0;
    puVar4 = PTR_DAT_07d97ea0;
    puVar3 = PTR_DAT_07d97e98;
    puVar2 = PTR_DAT_07d8b398;
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_04bb3644(&local_e0,*(long *)(param_1 + 0x40),
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<string,_Index>__ctor__);
      uStack_78 = uStack_d8;
      local_80 = local_e0;
      local_68 = lStack_c8;
      local_70 = local_d0;
      while (uVar12 = FUN_05de2748(&local_80,*(undefined8 *)puVar6), (uVar12 & 1) != 0) {
        if ((int)local_70 == param_2) {
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar14 = *(long *)(lVar11 + 0x10);
          lVar15 = *(long *)puVar7;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            lVar14 = lVar14 + (long)(int)uVar1 * 0x10;
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            plVar13 = (long *)(lVar14 + 0x28);
            *plVar13 = local_68;
            *(long *)(lVar14 + 0x20) = local_70;
            thunk_FUN_037aeb94(plVar13,0);
          }
          else {
            FUN_04bb2bd0(lVar11,local_70,local_68,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      FUN_05de2744(&local_80,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<string,_IWebSocketSession>_get_Count__
                  );
      if (lVar11 != 0) {
        FUN_04bb3644(&local_e0,lVar11,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<string,_Index>__ctor__);
        uStack_98 = uStack_d8;
        local_a0 = local_e0;
        lStack_88 = lStack_c8;
        local_90 = local_d0;
        while( true ) {
          uVar12 = FUN_05de2748(&local_a0,*(undefined8 *)puVar6);
          lVar14 = lStack_88;
          if ((uVar12 & 1) == 0) {
            FUN_05de2744(&local_a0,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<string,_IWebSocketSession>_get_Count__
                        );
            if (*(int *)(*(long *)Method_System_Collections_Generic_Dictionary<string,_int>_Add__ +
                        0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            FUN_0544e0cc(lVar11,*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
            return;
          }
          if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar10 = FUN_04bb37dc(*(long *)(param_1 + 0x40),local_90,lStack_88,*(undefined8 *)puVar8);
          if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          FUN_04bb433c(*(long *)(param_1 + 0x40),uVar10,*(undefined8 *)puVar9);
          if (*(long *)(param_1 + 0x48) == 0) break;
          System_Collections_Generic_List<Vector2>__RemoveRange
                    (*(long *)(param_1 + 0x48),uVar10,*(undefined8 *)puVar2);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          FUN_049cf910(&local_e0,lVar14,*(undefined8 *)puVar5);
          uStack_b8 = uStack_d8;
          local_c0 = local_e0;
          local_b0 = local_d0;
          while (uVar12 = FUN_05d64e98(&local_c0,*(undefined8 *)puVar4), (uVar12 & 1) != 0) {
            if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            FUN_077636fc(param_1,*(undefined4 *)(local_b0 + 0x28));
          }
          FUN_05d64e94(&local_c0,*(undefined8 *)puVar3);
        }
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


