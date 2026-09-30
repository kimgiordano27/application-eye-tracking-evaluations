/*
FUNCTION_NAME: FUN_028da264
ENTRY_POINT: 028da264
PROGRAM: gunraiders-libil2cpp.so
SCORE: 119
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


uint FUN_028da264(long param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined4 local_54;
  
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    plVar11 = *(long **)(param_1 + 0x30);
    lVar14 = *(long *)(param_1 + 0x18);
    local_54 = param_2;
    if (plVar11 == (long *)0x0) {
      uVar4 = FUN_032cf300(&local_54,0);
      uVar12 = *(uint *)(lVar13 + 0x18);
      uVar4 = uVar4 & 0x7fffffff;
      iVar10 = 0;
      if (uVar12 != 0) {
        iVar10 = (int)uVar4 / (int)uVar12;
      }
      uVar3 = uVar4 - iVar10 * uVar12;
      if (uVar12 <= uVar3) goto LAB_028da530;
      if (lVar14 == 0)
      goto System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>__Dispose;
      uVar1 = *(uint *)(lVar14 + 0x18);
      uVar12 = *(int *)(lVar13 + (ulong)uVar3 * 4 + 0x20) - 1;
      if (uVar12 < uVar1) {
        iVar10 = 0;
        do {
          if (*(uint *)(lVar14 + (long)(int)uVar12 * 0x28 + 0x20) == uVar4) {
            plVar11 = (long *)FUN_022cb868(*(undefined8 *)
                                            (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(lVar14 + 0x18) <= uVar12) goto LAB_028da530;
            if (plVar11 == (long *)0x0)
            goto System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>__Dispose;
            uVar8 = (**(code **)(*plVar11 + 0x1b8))
                              (plVar11,*(undefined4 *)(lVar14 + (long)(int)uVar12 * 0x28 + 0x28),
                               local_54,*(undefined8 *)(*plVar11 + 0x1c0));
            if ((uVar8 & 1) != 0) {
              return uVar12;
            }
            uVar1 = *(uint *)(lVar14 + 0x18);
          }
          if (uVar1 <= uVar12) goto LAB_028da530;
          uVar12 = *(uint *)(lVar14 + (long)(int)uVar12 * 0x28 + 0x24);
          if ((int)uVar1 <= iVar10) {
            FUN_032f2aac(0);
          }
          uVar1 = *(uint *)(lVar14 + 0x18);
          iVar10 = iVar10 + 1;
        } while (uVar12 < uVar1);
      }
    }
    else {
      lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01c72394(lVar6);
      }
      lVar7 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_028da3e4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_01c72498(plVar11,lVar6,1);
LAB_028da3e4:
      uVar4 = (*(code *)*puVar5)(plVar11,param_2,puVar5[1]);
      uVar12 = *(uint *)(lVar13 + 0x18);
      uVar4 = uVar4 & 0x7fffffff;
      iVar10 = 0;
      if (uVar12 != 0) {
        iVar10 = (int)uVar4 / (int)uVar12;
      }
      uVar3 = uVar4 - iVar10 * uVar12;
      if (uVar12 <= uVar3) {
LAB_028da530:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      if (lVar14 == 0) {
System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>__Dispose:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      uVar1 = *(uint *)(lVar14 + 0x18);
      uVar12 = *(int *)(lVar13 + (ulong)uVar3 * 4 + 0x20) - 1;
      if (uVar12 < uVar1) {
        iVar10 = 0;
        do {
          if (*(uint *)(lVar14 + (long)(int)uVar12 * 0x28 + 0x20) == uVar4) {
            lVar13 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
            uVar2 = *(undefined4 *)(lVar14 + (long)(int)uVar12 * 0x28 + 0x28);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = FUN_01c72394(lVar13);
            }
            lVar6 = *plVar11;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar13) {
                  puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_028da4b8;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_01c72498(plVar11,lVar13,0);
LAB_028da4b8:
            uVar8 = (*(code *)*puVar5)(plVar11,uVar2,param_2,puVar5[1]);
            if ((uVar8 & 1) != 0) {
              return uVar12;
            }
            uVar1 = *(uint *)(lVar14 + 0x18);
          }
          if (uVar1 <= uVar12) goto LAB_028da530;
          uVar12 = *(uint *)(lVar14 + (long)(int)uVar12 * 0x28 + 0x24);
          if ((int)uVar1 <= iVar10) {
            FUN_032f2aac(0);
          }
          uVar1 = *(uint *)(lVar14 + 0x18);
          iVar10 = iVar10 + 1;
        } while (uVar12 < uVar1);
      }
    }
  }
  return uVar12;
}


