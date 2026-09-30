/*
FUNCTION_NAME: OVRManager$$get_suggestedCpuPerfLevel
ENTRY_POINT: 02fc6cdc
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__get_suggestedCpuPerfLevel(long param_1,undefined4 param_2,long param_3)

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
  undefined8 in_stack_00000008;
  
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    plVar11 = *(long **)(param_1 + 0x30);
    lVar14 = *(long *)(param_1 + 0x18);
    if (plVar11 == (long *)0x0) {
      uVar4 = FUN_031d7008((long)&stack0x00000008 + 4,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x130));
      uVar12 = *(uint *)(lVar13 + 0x18);
      uVar4 = uVar4 & 0x7fffffff;
      iVar10 = 0;
      if (uVar12 != 0) {
        iVar10 = (int)uVar4 / (int)uVar12;
      }
      uVar3 = uVar4 - iVar10 * uVar12;
      if (uVar12 <= uVar3) goto LAB_02fc6f7c;
      if (lVar14 == 0) goto LAB_02fc6f80;
      uVar1 = *(uint *)(lVar14 + 0x18);
      uVar12 = *(int *)(lVar13 + (ulong)uVar3 * 4 + 0x20) - 1;
      if (uVar12 < uVar1) {
        iVar10 = 0;
        do {
          if (*(uint *)(lVar14 + (long)(int)uVar12 * 0x10 + 0x20) == uVar4) {
            plVar11 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) +
                                                    0x10) + 8))();
            if (*(uint *)(lVar14 + 0x18) <= uVar12) goto LAB_02fc6f7c;
            if (plVar11 == (long *)0x0) goto LAB_02fc6f80;
            uVar8 = (**(code **)(*plVar11 + 0x1b8))
                              (plVar11,*(undefined4 *)(lVar14 + (long)(int)uVar12 * 0x10 + 0x28),
                               in_stack_00000008._4_4_,*(undefined8 *)(*plVar11 + 0x1c0));
            if ((uVar8 & 1) != 0) {
              return uVar12;
            }
            uVar1 = *(uint *)(lVar14 + 0x18);
          }
          if (uVar1 <= uVar12) goto LAB_02fc6f7c;
          uVar12 = *(uint *)(lVar14 + (long)(int)uVar12 * 0x10 + 0x24);
          if ((int)uVar1 <= iVar10) {
            FUN_031dbf48(0);
          }
          uVar1 = *(uint *)(lVar14 + 0x18);
          iVar10 = iVar10 + 1;
        } while (uVar12 < uVar1);
      }
    }
    else {
      lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148);
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        lVar6 = FUN_015c2790(lVar6);
      }
      lVar7 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_02fc6e44;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_015c2a80(plVar11,lVar6,1);
LAB_02fc6e44:
      uVar4 = (*(code *)*puVar5)(plVar11,param_2,puVar5[1]);
      uVar12 = *(uint *)(lVar13 + 0x18);
      uVar4 = uVar4 & 0x7fffffff;
      iVar10 = 0;
      if (uVar12 != 0) {
        iVar10 = (int)uVar4 / (int)uVar12;
      }
      uVar3 = uVar4 - iVar10 * uVar12;
      if (uVar12 <= uVar3) {
LAB_02fc6f7c:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      if (lVar14 == 0) {
LAB_02fc6f80:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar1 = *(uint *)(lVar14 + 0x18);
      uVar12 = *(int *)(lVar13 + (ulong)uVar3 * 4 + 0x20) - 1;
      if (uVar12 < uVar1) {
        iVar10 = 0;
        do {
          if (*(uint *)(lVar14 + (long)(int)uVar12 * 0x10 + 0x20) == uVar4) {
            lVar13 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148);
            uVar2 = *(undefined4 *)(lVar14 + (long)(int)uVar12 * 0x10 + 0x28);
            if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
              lVar13 = FUN_015c2790(lVar13);
            }
            lVar6 = *plVar11;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar13) {
                  puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_02fc6f10;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_015c2a80(plVar11,lVar13,0);
LAB_02fc6f10:
            uVar8 = (*(code *)*puVar5)(plVar11,uVar2,param_2,puVar5[1]);
            if ((uVar8 & 1) != 0) {
              return uVar12;
            }
            uVar1 = *(uint *)(lVar14 + 0x18);
          }
          if (uVar1 <= uVar12) goto LAB_02fc6f7c;
          uVar12 = *(uint *)(lVar14 + (long)(int)uVar12 * 0x10 + 0x24);
          if ((int)uVar1 <= iVar10) {
            FUN_031dbf48(0);
          }
          uVar1 = *(uint *)(lVar14 + 0x18);
          iVar10 = iVar10 + 1;
        } while (uVar12 < uVar1);
      }
    }
  }
  return uVar12;
}


