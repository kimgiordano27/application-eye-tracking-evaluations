/*
FUNCTION_NAME: FUN_017c9dd8
ENTRY_POINT: 017c9dd8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_017c9dd8(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  int iVar14;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_037790b2 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f3ff8);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_17__);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_88_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Type,_string>_set_Item__);
    thunk_FUN_00d48444(PTR_DAT_033eb318);
    thunk_FUN_00d48444(UnityEngine_Pool_ObjectPool<HashSet<int>>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64q_s8__);
    thunk_FUN_00d48444(PTR_DAT_033f38b8);
    DAT_037790b2 = 1;
  }
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64q_s8__;
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__;
  uStack_68 = 0;
  local_60 = 0;
  local_70 = 0;
  plVar13 = *(long **)(param_1 + 0x10);
  if (plVar13 != (long *)0x0) {
    lVar9 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64q_s8__)
        {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_017c9ee4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_00d59724(plVar13,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vrev64q_s8__,0);
LAB_017c9ee4:
    uVar6 = (*(code *)*puVar5)(plVar13,puVar5[1]);
    plVar13 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (plVar13 != (long *)0x0) {
      FUN_0160ac8c(plVar13,uVar6,0);
      puVar4 = Method_OVRPlugin_<>c_<_cctor>b__796_17__;
      puVar3 = OVRPlugin_OVRP_1_88_0_TypeInfo;
      puVar1 = PTR_DAT_033f3ff8;
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_01323390(*(long *)(param_1 + 0x20),&local_88,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<Type,_string>_set_Item__);
        uStack_68 = uStack_80;
        local_70 = local_88;
        local_60 = local_78;
        while (uVar11 = FUN_012b894c(&local_70,*(undefined8 *)puVar4), (uVar11 & 1) != 0) {
          plVar7 = (long *)FUN_00be7310(&local_70,*(undefined8 *)puVar3);
          lVar9 = FUN_0160cd0c(plVar13,0x2b,0);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar10 = *plVar7;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_017c9fdc;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar2,0);
LAB_017c9fdc:
          uVar6 = (*(code *)*puVar5)(plVar7,puVar5[1]);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c(uVar6,uVar6);
          }
          FUN_0160c430(lVar9,uVar6,0);
        }
        FUN_012b8948(&local_70,*(undefined8 *)puVar1);
      }
      puVar1 = PTR_DAT_033f38b8;
      if (*(long *)(param_1 + 0x28) == 0) {
LAB_017ca160:
        if ((param_2 >> 1 & 1) == 0) {
          FUN_017ca27c(param_1,plVar13);
        }
        if ((*(long *)(param_1 + 0x18) != 0 & param_2) != 0) {
          lVar9 = FUN_0160c430(plVar13,*(undefined8 *)puVar1,0);
          if (lVar9 == 0) goto LAB_017ca14c;
          FUN_0160c430(lVar9,*(undefined8 *)(param_1 + 0x18),0);
        }
        (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
        return;
      }
      FUN_0160cd0c(plVar13,0x5b,0);
      puVar2 = UnityEngine_Pool_ObjectPool<HashSet<int>>_TypeInfo;
      lVar9 = *(long *)(param_1 + 0x28);
      if (lVar9 != 0) {
        iVar14 = 0;
        do {
          if (*(int *)(lVar9 + 0x18) <= iVar14) {
            FUN_0160cd0c(plVar13,0x5d,0);
            goto LAB_017ca160;
          }
          if (iVar14 != 0) {
            FUN_0160c430(plVar13,*(undefined8 *)puVar1,0);
            lVar9 = *(long *)(param_1 + 0x28);
            if (lVar9 == 0) break;
          }
          FUN_0132138c(lVar9,iVar14,&local_88,*(undefined8 *)puVar2);
          if (local_88 == 0) break;
          if (*(long *)(local_88 + 0x18) == 0) {
            if (*(long *)(param_1 + 0x28) == 0) break;
            FUN_0132138c(*(long *)(param_1 + 0x28),iVar14,&local_88,*(undefined8 *)puVar2);
            lVar9 = local_88;
            if (local_88 == 0) break;
            lVar10 = *(long *)(local_88 + 0x40);
            if (lVar10 == 0) {
              lVar10 = FUN_017c9dd8(local_88);
              *(long *)(lVar9 + 0x40) = lVar10;
            }
            FUN_0160c430(plVar13,lVar10,0);
          }
          else {
            lVar9 = FUN_0160cd0c(plVar13,0x5b,0);
            if (*(long *)(param_1 + 0x28) == 0) break;
            FUN_0132138c(*(long *)(param_1 + 0x28),iVar14,&local_88,*(undefined8 *)puVar2);
            lVar10 = local_88;
            if (local_88 == 0) break;
            lVar8 = *(long *)(local_88 + 0x40);
            if (lVar8 == 0) {
              lVar8 = FUN_017c9dd8(local_88);
              *(long *)(lVar10 + 0x40) = lVar8;
            }
            if ((lVar9 == 0) || (lVar9 = FUN_0160c430(lVar9,lVar8,0), lVar9 == 0)) break;
            FUN_0160cd0c(lVar9,0x5d,0);
          }
          lVar9 = *(long *)(param_1 + 0x28);
          iVar14 = iVar14 + 1;
        } while (lVar9 != 0);
      }
    }
  }
LAB_017ca14c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


