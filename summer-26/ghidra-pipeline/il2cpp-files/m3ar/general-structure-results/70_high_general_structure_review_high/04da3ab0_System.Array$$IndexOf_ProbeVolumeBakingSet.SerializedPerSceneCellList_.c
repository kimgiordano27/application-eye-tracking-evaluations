/*
FUNCTION_NAME: System.Array$$IndexOf<ProbeVolumeBakingSet.SerializedPerSceneCellList>
ENTRY_POINT: 04da3ab0
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04da4008) */

void System_Array__IndexOf<ProbeVolumeBakingSet_SerializedPerSceneCellList>
               (long param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined1 auStack_c0 [144];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  long lStack_8;
  
  lStack_8 = param_2;
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_0403162c(PTR_DAT_08f8c250);
    FUN_0403162c(PTR_DAT_08f8a7d0);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_0406ab48(param_2);
    }
  }
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  memset(auStack_c0,0,0x90);
  plStack_d0 = (long *)0x0;
  puStack_148 = (undefined8 *)0x0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uVar3 = FUN_087c0fac(param_1,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  memcpy(auStack_c0,(void *)(param_1 + 0x10),0x90);
  iVar11 = *(int *)(param_1 + 0xb8);
  *(int *)(param_1 + 0xb8) = iVar11 + 1;
  UnityEngine_UIElements_TextElement__OnGenerateVisualContent(&uStack_1d8,auStack_c0,iVar11,0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  uStack_28 = uStack_1d0;
  uStack_30 = uStack_1d8;
  uVar6 = uStack_30;
  uStack_18 = uStack_1c0;
  uStack_20 = uStack_1c8;
  uStack_30._0_4_ = (int)uStack_1d8;
  uStack_30 = uVar6;
  if ((int)uStack_30 == 1) {
    uVar6 = *(undefined8 *)(*(long *)(lStack_8 + 0x38) + 0x60);
    if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar6 = FUN_074f3c94(uVar6,0);
    uVar6 = FUN_087c1024(uVar6,0);
    uVar3 = FUN_074fe038(uVar6,0,0);
    if ((uVar3 & 1) != 0) {
      *(undefined8 *)(param_1 + 0xb0) = uVar6;
      plVar4 = (long *)FUN_0862ccb8(uVar6,0);
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar3 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f8c250) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_04da3e1c;
            }
            uVar3 = uVar3 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_0406ae20(plVar4,*(long *)PTR_DAT_08f8c250,0);
LAB_04da3e1c:
        (*(code *)*puVar5)(plVar4,param_1,puVar5[1]);
        return;
      }
    }
    goto LAB_04da3fcc;
  }
  bVar1 = (int)uStack_30 != 0;
  if (bVar1) goto LAB_04da3fcc;
  plVar4 = (long *)FUN_04c849bc(**(undefined8 **)(lStack_8 + 0x38));
  if (plVar4 == (long *)0x0) {
    return;
  }
  lVar8 = *(long *)(*(long *)(lStack_8 + 0x38) + 8);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0406aaec(lVar8);
  }
  lVar9 = *plVar4;
  uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar3 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar8) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_04da3cb0;
      }
      uVar3 = uVar3 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar3 != 0);
  }
  puVar5 = (undefined8 *)FUN_0406ae20(plVar4,lVar8,0);
LAB_04da3cb0:
  (*(code *)*puVar5)(&uStack_180,plVar4,puVar5[1]);
  uStack_138 = uStack_168;
  plStack_140 = plStack_170;
  uStack_128 = uStack_158;
  uStack_130 = uStack_160;
  puStack_148 = puStack_178;
  uStack_150 = uStack_180;
  lVar8 = *(long *)(*(long *)(lStack_8 + 0x38) + 0x28);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0406aaec();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  FUN_05d05bf0(&uStack_1d8,&uStack_150,*(undefined8 *)(*(long *)(lStack_8 + 0x38) + 0x20));
  memcpy(&uStack_120,&uStack_1d8,0x58);
  puVar2 = PTR_DAT_08f8a7d0;
  uStack_180 = 0;
  plStack_170 = &lStack_8;
  puStack_178 = &uStack_120;
  do {
    uVar3 = FUN_071d86bc(&uStack_120,*(undefined8 *)(*(long *)(lStack_8 + 0x38) + 0x50));
    plVar4 = plStack_d0;
    if ((uVar3 & 1) == 0) goto LAB_04da3f74;
    if (plStack_d0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar9 = *plStack_d0;
    lVar8 = *(long *)puVar2;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04da3da0;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plStack_d0,lVar8,0);
LAB_04da3da0:
    uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    uVar7 = FUN_086299f4(&uStack_30,0);
    uVar3 = FUN_07367c2c(uVar6,uVar7,0);
  } while ((uVar3 & 1) != 0);
  lVar9 = *plVar4;
  lVar8 = *(long *)puVar2;
  uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar3 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar8) {
        puVar5 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_04da3e40;
      }
      uVar3 = uVar3 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar3 != 0);
  }
  puVar5 = (undefined8 *)FUN_0406ae20(plVar4,lVar8,1);
LAB_04da3e40:
  uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
  *(undefined8 *)(param_1 + 0xb0) = uVar6;
  plVar4 = (long *)FUN_0862ccb8(uVar6,0);
  if (plVar4 == (long *)0x0) {
    uVar6 = FUN_087c1024(uVar6,0);
    if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar3 = FUN_074fe038(uVar6,0,0);
    if ((uVar3 & 1) != 0) {
      uVar3 = FUN_087c0fac(param_1,0);
      if ((uVar3 & 1) == 0) {
        memcpy(auStack_c0,(void *)(param_1 + 0x10),0x90);
        iVar11 = *(int *)(param_1 + 0xb8);
        *(int *)(param_1 + 0xb8) = iVar11 + 1;
        UnityEngine_UIElements_TextElement__OnGenerateVisualContent(&uStack_1d8,auStack_c0,iVar11,0)
        ;
        uStack_28 = uStack_1d0;
        uStack_30 = uStack_1d8;
        uStack_18 = uStack_1c0;
        uStack_20 = uStack_1c8;
        uVar3 = FUN_086299dc(&uStack_30,0);
        if ((uVar3 & 1) == 0) goto LAB_04da3f74;
        *(undefined8 *)(param_1 + 0xb0) = uVar6;
        lVar8 = FUN_0862ccb8(uVar6,0);
        if (lVar8 != 0) {
          FUN_03a90f00(0,*(undefined8 *)PTR_DAT_08f8c250,lVar8,param_1);
        }
      }
      goto LAB_04da3f9c;
    }
LAB_04da3f74:
    iVar11 = 0x13;
  }
  else {
    lVar8 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f8c250) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04da3f8c;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_0406ae20(plVar4,*(long *)PTR_DAT_08f8c250,0);
LAB_04da3f8c:
    (*(code *)*puVar5)(plVar4,param_1,puVar5[1]);
LAB_04da3f9c:
    iVar11 = 3;
  }
  FUN_071d8b04(&uStack_120,*(undefined8 *)(*(long *)(lStack_8 + 0x38) + 0x58));
  if ((iVar11 != 0) && (iVar11 != 0x13)) {
    return;
  }
LAB_04da3fcc:
  uVar3 = FUN_087c0fac(param_1,0);
  if (((uVar3 & 1) == 0) && (*(int *)(param_1 + 0xa8) == 0)) {
    *(undefined4 *)(param_1 + 0xa8) = 4;
  }
  return;
}


