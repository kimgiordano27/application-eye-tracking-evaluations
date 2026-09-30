/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HandleError
ENTRY_POINT: 04d4c7b8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HandleError
               (long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  
  if ((DAT_066c86ea & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06332808);
    FUN_02b3c81c(PTR_DAT_063122f8);
    DAT_066c86ea = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_02ba3594(PTR_DAT_06315b90);
    uVar10 = thunk_FUN_02b79644();
    uVar11 = thunk_FUN_02ba3594(PTR_DAT_0631db50);
    FUN_04cee07c(uVar10,uVar11,0);
LAB_04d4ca04:
    uVar11 = thunk_FUN_02ba3594(PTR_DAT_06332808);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar10,uVar11);
  }
  plVar8 = *(long **)(param_1 + 0x20);
  if (plVar8 == (long *)0x0) goto LAB_04d4c9d0;
  iVar5 = (**(code **)(*plVar8 + 0x1e8))(plVar8,param_2,*(undefined8 *)(*plVar8 + 0x1f0));
  FUN_04d4ca64(param_1,iVar5);
  plVar8 = (long *)(param_1 + 0x38);
  lVar12 = *plVar8;
  if (lVar12 == 0) {
    lVar12 = FUN_02b3c908(*(undefined8 *)PTR_DAT_063122f8,0x100);
    *plVar8 = lVar12;
    thunk_FUN_02bb0e9c(plVar8,lVar12);
    lVar14 = *plVar8;
    if ((lVar14 == 0) || (plVar9 = *(long **)(param_1 + 0x20), plVar9 == (long *)0x0))
    goto LAB_04d4c9d0;
    iVar6 = (**(code **)(*plVar9 + 0x338))(plVar9,1,*(undefined8 *)(*plVar9 + 0x340));
    lVar12 = *(long *)(param_1 + 0x38);
    iVar4 = 0;
    if (iVar6 != 0) {
      iVar4 = *(int *)(lVar14 + 0x18) / iVar6;
    }
    *(int *)(param_1 + 0x40) = iVar4;
    if (lVar12 == 0) goto LAB_04d4c9d0;
  }
  if (*(int *)(lVar12 + 0x18) < iVar5) {
    if (0 < (int)*(uint *)(param_2 + 0x10)) {
      uVar13 = *(uint *)(param_2 + 0x10);
      uVar15 = 0;
      do {
        uVar3 = *(uint *)(param_1 + 0x40);
        uVar2 = uVar13;
        if ((int)uVar3 <= (int)uVar13) {
          uVar2 = uVar3;
        }
        if (((int)uVar15 < 0) || ((int)uVar3 < 0)) {
LAB_04d4c9d4:
          thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
          uVar10 = thunk_FUN_02b79644();
          uVar11 = thunk_FUN_02ba3594(PTR_DAT_0632a080);
          FUN_04cf60a0(uVar10,uVar11,0);
          goto LAB_04d4ca04;
        }
        if ((ulong)uVar2 + (ulong)uVar15 >> 0x1f != 0) {
          uVar10 = FUN_02b3cad4();
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar10,*(undefined8 *)PTR_DAT_06332808);
        }
        if (*(int *)(param_2 + 0x10) < (int)(uVar2 + uVar15)) goto LAB_04d4c9d4;
        iVar5 = thunk_FUN_02b485d0(0);
        lVar12 = *plVar8;
        if (lVar12 == 0) goto LAB_04d4c9d0;
        plVar9 = *(long **)(param_1 + 0x28);
        if (plVar9 == (long *)0x0) goto LAB_04d4c9d0;
        lVar14 = 0;
        if (*(int *)(lVar12 + 0x18) != 0) {
          lVar14 = lVar12 + 0x20;
        }
        uVar7 = (**(code **)(*plVar9 + 0x1b8))
                          (plVar9,param_2 + (ulong)uVar15 * 2 + (long)iVar5,uVar2,lVar14,
                           *(int *)(lVar12 + 0x18),(int)uVar13 <= (int)uVar3,
                           *(undefined8 *)(*plVar9 + 0x1c0));
        plVar9 = *(long **)(param_1 + 0x10);
        if (plVar9 == (long *)0x0) goto LAB_04d4c9d0;
        (**(code **)(*plVar9 + 0x368))(plVar9,*plVar8,0,uVar7,*(undefined8 *)(*plVar9 + 0x370));
        uVar3 = uVar13 - uVar2;
        bVar1 = (int)uVar2 <= (int)uVar13;
        uVar13 = uVar3;
        uVar15 = uVar2 + uVar15;
      } while (uVar3 != 0 && bVar1);
    }
    return;
  }
  plVar9 = *(long **)(param_1 + 0x20);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 600))
              (plVar9,param_2,0,*(undefined4 *)(param_2 + 0x10),lVar12,0,
               *(undefined8 *)(*plVar9 + 0x260));
    plVar9 = *(long **)(param_1 + 0x10);
    if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x04d4c9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x368))(plVar9,*plVar8,0,iVar5,*(undefined8 *)(*plVar9 + 0x370));
      return;
    }
  }
LAB_04d4c9d0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


