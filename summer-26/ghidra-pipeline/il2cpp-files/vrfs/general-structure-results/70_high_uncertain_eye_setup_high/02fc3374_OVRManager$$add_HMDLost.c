/*
FUNCTION_NAME: OVRManager$$add_HMDLost
ENTRY_POINT: 02fc3374
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


uint OVRManager__add_HMDLost(long param_1,undefined4 param_2,long param_3)

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
  uint uVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  undefined4 uStack_54;
  
                    /* try { // try from 02fc3374 to 030c3397 has its CatchHandler @ 02fc3c24 */
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 0) {
    uVar10 = 0xffffffff;
  }
  else {
    plVar13 = *(long **)(param_1 + 0x30);
    lVar14 = *(long *)(param_1 + 0x18);
    uStack_54 = param_2;
    if (plVar13 == (long *)0x0) {
      uVar4 = FUN_031d7008(&uStack_54,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x130));
      uVar10 = *(uint *)(lVar11 + 0x18);
      uVar4 = uVar4 & 0x7fffffff;
      iVar12 = 0;
      if (uVar10 != 0) {
        iVar12 = (int)uVar4 / (int)uVar10;
      }
      uVar3 = uVar4 - iVar12 * uVar10;
      if (uVar10 <= uVar3) goto LAB_02fc3640;
      if (lVar14 == 0) goto LAB_02fc3644;
      uVar1 = *(uint *)(lVar14 + 0x18);
      uVar10 = *(int *)(lVar11 + (ulong)uVar3 * 4 + 0x20) - 1;
      if (uVar10 < uVar1) {
        iVar12 = 0;
        do {
          if (*(uint *)(lVar14 + (long)(int)uVar10 * 0x38 + 0x20) == uVar4) {
            plVar13 = (long *)(**(code **)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) +
                                                    0x10) + 8))();
            if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_02fc3640;
            if (plVar13 == (long *)0x0) goto LAB_02fc3644;
            uVar8 = (**(code **)(*plVar13 + 0x1b8))
                              (plVar13,*(undefined4 *)(lVar14 + (long)(int)uVar10 * 0x38 + 0x28),
                               uStack_54,*(undefined8 *)(*plVar13 + 0x1c0));
            if ((uVar8 & 1) != 0) {
              return uVar10;
            }
            uVar1 = *(uint *)(lVar14 + 0x18);
          }
          if (uVar1 <= uVar10) goto LAB_02fc3640;
          uVar10 = *(uint *)(lVar14 + (long)(int)uVar10 * 0x38 + 0x24);
          if ((int)uVar1 <= iVar12) {
            FUN_031dbf48(0);
          }
          uVar1 = *(uint *)(lVar14 + 0x18);
          iVar12 = iVar12 + 1;
        } while (uVar10 < uVar1);
      }
    }
    else {
      lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148);
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        lVar6 = FUN_015c2790(lVar6);
      }
      lVar7 = *plVar13;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_02fc3500;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
                    /* try { // try from 02fc33f4 to 030c341f has its CatchHandler @ 02fc3c58 */
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_015c2a80(plVar13,lVar6,1);
LAB_02fc3500:
      uVar4 = (*(code *)*puVar5)(plVar13,param_2,puVar5[1]);
      uVar10 = *(uint *)(lVar11 + 0x18);
      uVar4 = uVar4 & 0x7fffffff;
      iVar12 = 0;
      if (uVar10 != 0) {
        iVar12 = (int)uVar4 / (int)uVar10;
      }
      uVar3 = uVar4 - iVar12 * uVar10;
      if (uVar10 <= uVar3) {
LAB_02fc3640:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      if (lVar14 == 0) {
LAB_02fc3644:
                    /* WARNING: Subroutine does not return */
        FUN_0160eeb4();
      }
      uVar1 = *(uint *)(lVar14 + 0x18);
      uVar10 = *(int *)(lVar11 + (ulong)uVar3 * 4 + 0x20) - 1;
      if (uVar10 < uVar1) {
        iVar12 = 0;
        do {
          if (*(uint *)(lVar14 + (long)(int)uVar10 * 0x38 + 0x20) == uVar4) {
            lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148);
            uVar2 = *(undefined4 *)(lVar14 + (long)(int)uVar10 * 0x38 + 0x28);
            if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
              lVar11 = FUN_015c2790(lVar11);
            }
            lVar6 = *plVar13;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12a);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar11) {
                  puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_02fc35d4;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_015c2a80(plVar13,lVar11,0);
LAB_02fc35d4:
            uVar8 = (*(code *)*puVar5)(plVar13,uVar2,param_2,puVar5[1]);
            if ((uVar8 & 1) != 0) {
              return uVar10;
            }
            uVar1 = *(uint *)(lVar14 + 0x18);
          }
          if (uVar1 <= uVar10) goto LAB_02fc3640;
          uVar10 = *(uint *)(lVar14 + (long)(int)uVar10 * 0x38 + 0x24);
          if ((int)uVar1 <= iVar12) {
            FUN_031dbf48(0);
          }
          uVar1 = *(uint *)(lVar14 + 0x18);
          iVar12 = iVar12 + 1;
        } while (uVar10 < uVar1);
      }
    }
  }
  return uVar10;
}


