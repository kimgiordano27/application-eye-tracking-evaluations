/*
FUNCTION_NAME: FUN_06ad82a0
ENTRY_POINT: 06ad82a0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_8
*/


uint FUN_06ad82a0(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 local_58;
  
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    plVar10 = *(long **)(param_1 + 0x30);
    lVar14 = *(long *)(param_1 + 0x18);
    local_58 = param_2;
    if (plVar10 == (long *)0x0) {
      uVar3 = FUN_0711f264(&local_58,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 400));
      uVar11 = *(uint *)(lVar12 + 0x18);
      uVar3 = uVar3 & 0x7fffffff;
      iVar9 = 0;
      if (uVar11 != 0) {
        iVar9 = (int)uVar3 / (int)uVar11;
      }
      uVar2 = uVar3 - iVar9 * uVar11;
      if (uVar11 <= uVar2)
      goto System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose;
      if (lVar14 == 0)
      goto System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__MoveNext;
      uVar1 = *(uint *)(lVar14 + 0x18);
      uVar11 = *(int *)(lVar12 + (ulong)uVar2 * 4 + 0x20) - 1;
      if (uVar11 < uVar1) {
        iVar9 = 0;
        do {
          if (*(uint *)(lVar14 + (long)(int)uVar11 * 0x18 + 0x20) == uVar3) {
            plVar10 = (long *)FUN_041d81b8(*(undefined8 *)
                                            (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(lVar14 + 0x18) <= uVar11)
            goto System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose;
            if (plVar10 == (long *)0x0)
            goto System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__MoveNext;
            uVar7 = (**(code **)(*plVar10 + 0x1b8))
                              (plVar10,*(undefined8 *)(lVar14 + (long)(int)uVar11 * 0x18 + 0x28),
                               local_58,*(undefined8 *)(*plVar10 + 0x1c0));
            if ((uVar7 & 1) != 0) {
              return uVar11;
            }
            uVar1 = *(uint *)(lVar14 + 0x18);
          }
          if (uVar1 <= uVar11)
          goto System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose;
          uVar11 = *(uint *)(lVar14 + (long)(int)uVar11 * 0x18 + 0x24);
          if ((int)uVar1 <= iVar9) {
            FUN_07122f08(0);
          }
          uVar1 = *(uint *)(lVar14 + 0x18);
          iVar9 = iVar9 + 1;
        } while (uVar11 < uVar1);
      }
    }
    else {
      lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03cf1244(lVar5);
      }
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_06ad8428;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348(plVar10,lVar5,1);
LAB_06ad8428:
      uVar3 = (*(code *)*puVar4)(plVar10,param_2,puVar4[1]);
      uVar11 = *(uint *)(lVar12 + 0x18);
      uVar3 = uVar3 & 0x7fffffff;
      iVar9 = 0;
      if (uVar11 != 0) {
        iVar9 = (int)uVar3 / (int)uVar11;
      }
      uVar2 = uVar3 - iVar9 * uVar11;
      if (uVar11 <= uVar2) {
System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      if (lVar14 == 0) {
System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__MoveNext:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      uVar1 = *(uint *)(lVar14 + 0x18);
      uVar11 = *(int *)(lVar12 + (ulong)uVar2 * 4 + 0x20) - 1;
      if (uVar11 < uVar1) {
        iVar9 = 0;
        do {
          if (*(uint *)(lVar14 + (long)(int)uVar11 * 0x18 + 0x20) == uVar3) {
            lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
            uVar13 = *(undefined8 *)(lVar14 + (long)(int)uVar11 * 0x18 + 0x28);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_03cf1244(lVar12);
            }
            lVar5 = *plVar10;
            uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == lVar12) {
                  puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_06ad84fc;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar4 = (undefined8 *)FUN_03cf1348(plVar10,lVar12,0);
LAB_06ad84fc:
            uVar7 = (*(code *)*puVar4)(plVar10,uVar13,param_2,puVar4[1]);
            if ((uVar7 & 1) != 0) {
              return uVar11;
            }
            uVar1 = *(uint *)(lVar14 + 0x18);
          }
          if (uVar1 <= uVar11)
          goto System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose;
          uVar11 = *(uint *)(lVar14 + (long)(int)uVar11 * 0x18 + 0x24);
          if ((int)uVar1 <= iVar9) {
            FUN_07122f08(0);
          }
          uVar1 = *(uint *)(lVar14 + 0x18);
          iVar9 = iVar9 + 1;
        } while (uVar11 < uVar1);
      }
    }
  }
  return uVar11;
}


