/*
FUNCTION_NAME: FUN_00caa4e8
ENTRY_POINT: 00caa4e8
PROGRAM: JustAnotherCookingGame-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_10;strong_file_logging_hits_5
*/


long FUN_00caa4e8(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  if ((DAT_0165e571 & 1) == 0) {
    thunk_FUN_005cc344(PTR_DAT_01576f78);
    thunk_FUN_005cc344(PTR_DAT_0158eec8);
    thunk_FUN_005cc344(PTR_DAT_0158f180);
    thunk_FUN_005cc344(PTR_DAT_01572848);
    thunk_FUN_005cc344(PTR_DAT_01581f10);
    thunk_FUN_005cc344(PTR_DAT_01589c70);
    thunk_FUN_005cc344(PTR_DAT_01572800);
    DAT_0165e571 = 1;
  }
  lVar10 = *(long *)(param_1 + 0x18);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    FUN_005c1b60(lVar10);
  }
  puVar2 = PTR_DAT_01572800;
  uVar11 = *(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x10);
  if (((*(byte *)(*(long *)PTR_DAT_01572800 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(*(long *)PTR_DAT_01572800 + 0xe0) == 0)) {
    thunk_FUN_005c4488();
  }
  lVar10 = FUN_00de3c2c(uVar11,0);
  puVar3 = PTR_DAT_01581f10;
  if (lVar10 == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    uVar11 = *(undefined8 *)PTR_DAT_01581f10;
    plVar4 = (long *)thunk_FUN_005cd308(lVar10,uVar11);
    if (plVar4 == (long *)0x0) goto LAB_00caa5d4;
  }
  lVar10 = *(long *)(param_1 + 0x18);
  if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
    FUN_005c1b60(lVar10);
  }
  plVar5 = (long *)FUN_00de3c2c(*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18),0);
  if (plVar5 == (long *)0x0) {
System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteJaggedArray:
                    /* WARNING: Subroutine does not return */
    FUN_006281b8();
  }
  uVar6 = (**(code **)(*plVar5 + 0x7f8))(plVar5,plVar4,*(undefined8 *)(*plVar5 + 0x800));
  if ((uVar6 & 1) == 0) {
    if (plVar4 == (long *)0x0)
    goto System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteJaggedArray;
    uVar6 = (**(code **)(*plVar4 + 0x5a8))(plVar4,*(undefined8 *)(*plVar4 + 0x5b0));
    if ((uVar6 & 1) != 0) {
      uVar11 = (**(code **)(*plVar4 + 0x758))(plVar4,*(undefined8 *)(*plVar4 + 0x760));
      lVar10 = *(long *)puVar2;
      uVar14 = *(undefined8 *)PTR_DAT_01572848;
      if (((*(byte *)(lVar10 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar10 + 0xe0) == 0)) {
        thunk_FUN_005c4488(lVar10);
      }
      uVar14 = FUN_00de3c2c(uVar14,0);
      uVar6 = FUN_00de4df4(uVar11,uVar14,0);
      if ((uVar6 & 1) != 0) {
        lVar10 = (**(code **)(*plVar4 + 0x738))(plVar4,*(undefined8 *)(*plVar4 + 0x740));
        if (lVar10 == 0)
        goto System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteJaggedArray;
        if (*(int *)(lVar10 + 0x18) == 0) {
LAB_00caa900:
          uVar11 = thunk_FUN_005c3bd0();
                    /* WARNING: Subroutine does not return */
          FUN_00628184(uVar11,0);
        }
        lVar10 = *(long *)(lVar10 + 0x20);
        if (lVar10 == 0) {
          plVar4 = (long *)0x0;
        }
        else {
          uVar11 = *(undefined8 *)puVar3;
          plVar4 = (long *)thunk_FUN_005cd308(lVar10,uVar11);
          if (plVar4 == (long *)0x0) {
LAB_00caa5d4:
                    /* WARNING: Subroutine does not return */
            FUN_006284ac(lVar10,uVar11);
          }
        }
        uVar11 = *(undefined8 *)PTR_DAT_0158eec8;
        if (((*(byte *)(*(long *)puVar2 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(*(long *)puVar2 + 0xe0) == 0)) {
          thunk_FUN_005c4488();
        }
        plVar5 = (long *)FUN_00de3c2c(uVar11,0);
        plVar7 = (long *)FUN_006280f8(*(undefined8 *)PTR_DAT_01589c70,1);
        if (plVar7 == (long *)0x0)
        goto System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteJaggedArray;
        if ((plVar4 != (long *)0x0) &&
           (lVar10 = thunk_FUN_005cd308(plVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar10 == 0)) {
          uVar11 = thunk_FUN_005c3fa8();
                    /* WARNING: Subroutine does not return */
          FUN_00628184(uVar11,0);
        }
        if ((int)plVar7[3] == 0) goto LAB_00caa900;
        plVar7[4] = (long)plVar4;
        if ((plVar5 == (long *)0x0) ||
           (plVar5 = (long *)(**(code **)(*plVar5 + 0x6f8))
                                       (plVar5,plVar7,*(undefined8 *)(*plVar5 + 0x700)),
           plVar5 == (long *)0x0))
        goto System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteJaggedArray;
        uVar6 = (**(code **)(*plVar5 + 0x7f8))(plVar5,plVar4,*(undefined8 *)(*plVar5 + 0x800));
        if ((uVar6 & 1) != 0) {
          lVar10 = *(long *)puVar2;
          puVar8 = (undefined8 *)PTR_DAT_0158f180;
          goto LAB_00caa630;
        }
      }
    }
    lVar10 = *(long *)(param_1 + 0x18);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      FUN_005c1b60(lVar10);
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
      FUN_005c1b60(lVar10);
    }
    lVar12 = thunk_FUN_005cd404(lVar10);
    lVar13 = *(long *)(param_1 + 0x18);
    uVar1 = *(ushort *)(lVar13 + 0x132);
    lVar10 = lVar13;
    if ((uVar1 & 1) == 0) {
      FUN_005c1b60(lVar13);
      lVar10 = *(long *)(param_1 + 0x18);
      uVar1 = *(ushort *)(lVar10 + 0x132);
    }
    pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar13 + 0xc0) + 0x30);
    if ((uVar1 & 1) == 0) {
      FUN_005c1b60(lVar10);
    }
    (*pcVar9)(lVar12,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x30));
  }
  else {
    lVar10 = *(long *)puVar2;
    puVar8 = (undefined8 *)PTR_DAT_01576f78;
LAB_00caa630:
    uVar11 = *puVar8;
    if (((*(byte *)(lVar10 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar10 + 0xe0) == 0)) {
      thunk_FUN_005c4488();
    }
    uVar11 = FUN_00de3c2c(uVar11,0);
    lVar10 = *(long *)puVar3;
    if (((*(byte *)(lVar10 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar10 + 0xe0) == 0)) {
      thunk_FUN_005c4488(lVar10);
    }
    lVar10 = FUN_00a08310(uVar11,plVar4,0);
    lVar12 = *(long *)(param_1 + 0x18);
    if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
      FUN_005c1b60(lVar12);
    }
    lVar13 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x20);
    if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
      FUN_005c1b60(lVar13);
    }
    if (lVar10 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = thunk_FUN_005cd308(lVar10,lVar13);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006284ac(lVar10,lVar13);
      }
    }
  }
  return lVar12;
}


