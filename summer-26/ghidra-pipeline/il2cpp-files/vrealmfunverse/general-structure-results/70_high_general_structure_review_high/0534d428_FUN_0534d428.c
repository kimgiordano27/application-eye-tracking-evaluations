/*
FUNCTION_NAME: FUN_0534d428
ENTRY_POINT: 0534d428
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_16;ray_or_cast_sink_hits_4;strong_file_logging_hits_9
*/


undefined8 FUN_0534d428(long param_1,long *param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  ulong local_40;
  ulong local_38;
  
  if ((DAT_066d0568 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631a6c0);
    FUN_02b3c81c(PTR_DAT_06313c50);
    FUN_02b3c81c(PTR_DAT_06331898);
    DAT_066d0568 = 1;
  }
  if (param_2 == (long *)0x0) goto System_Xml_TextUtf8RawTextWriter___ctor;
  uVar6 = thunk_FUN_02b4c898(param_2,0);
  iVar4 = FUN_0534dc0c(uVar6,uVar6);
  if (param_3 == (long *)0x0) goto System_Xml_TextUtf8RawTextWriter___ctor;
  uVar6 = thunk_FUN_02b4c898(param_3,0);
  iVar5 = FUN_0534dc0c(uVar6,uVar6);
  if (iVar4 < iVar5) {
    return 0xffffffff;
  }
  if (iVar5 < iVar4) {
LAB_0534d4c4:
    uVar6 = 1;
  }
  else {
    if (iVar4 < 3) {
      if (iVar4 == 0) {
        if (*(long *)(param_1 + 0x18) == 0) goto System_Xml_TextUtf8RawTextWriter___ctor;
        uVar6 = FUN_0529d560(*(long *)(param_1 + 0x18),0);
        if (*(int *)(*(long *)PTR_DAT_0631a6c0 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_0631a6c0);
        }
        local_38 = NaughtyAttributes_EnableIfAttributeBase___ctor(param_2,uVar6,0);
        puVar2 = PTR_DAT_06313c50;
        lVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)PTR_DAT_06313c50,&local_38);
        if (*(long *)(param_1 + 0x18) == 0) goto System_Xml_TextUtf8RawTextWriter___ctor;
        uVar6 = FUN_0529d560(*(long *)(param_1 + 0x18),0);
        local_40 = NaughtyAttributes_EnableIfAttributeBase___ctor(lVar7,uVar6,0);
        uVar6 = *(undefined8 *)puVar2;
      }
      else {
        if (iVar4 != 1) goto LAB_0534d614;
        if (*(long *)(param_1 + 0x18) == 0) goto System_Xml_TextUtf8RawTextWriter___ctor;
        uVar6 = FUN_0529d560(*(long *)(param_1 + 0x18),0);
        if (*(int *)(*(long *)PTR_DAT_0631a6c0 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_0631a6c0);
        }
        local_38 = FUN_04d00f80(param_2,uVar6,0);
        puVar2 = PTR_DAT_06312310;
        lVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(PTR_DAT_06312310 + 0x80),&local_38);
        if (*(long *)(param_1 + 0x18) == 0) goto System_Xml_TextUtf8RawTextWriter___ctor;
        uVar6 = FUN_0529d560(*(long *)(param_1 + 0x18),0);
        local_40 = FUN_04d00f80(param_3,uVar6,0);
        uVar6 = *(undefined8 *)(puVar2 + 0x80);
      }
LAB_0534d6d0:
      uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody(uVar6,&local_40);
    }
    else {
      if (iVar4 == 4) {
        lVar7 = *(long *)(PTR_DAT_06312310 + 0xa0);
        bVar1 = *(byte *)(lVar7 + 0x130);
        if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(param_2);
        }
        if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(param_3);
        }
        iVar4 = FUN_04d941cc(param_2,0);
        iVar5 = FUN_04d941cc(param_3,0);
        if (iVar4 <= iVar5) {
          iVar4 = FUN_04d941cc(param_2,0);
          iVar5 = FUN_04d941cc(param_3,0);
          if (iVar4 < iVar5) {
            return 0xffffffff;
          }
          iVar4 = FUN_04d941cc(param_2,0);
          if (0 < iVar4) {
            iVar4 = 0;
            do {
              uVar6 = FUN_04d9422c(param_2,iVar4,0);
              uVar13 = FUN_04d9422c(param_3,iVar4,0);
              uVar6 = FUN_0534da9c(param_1,uVar6,uVar13);
              if ((int)uVar6 != 0) {
                return uVar6;
              }
              iVar4 = iVar4 + 1;
              iVar5 = FUN_04d941cc(param_2,0);
            } while (iVar4 < iVar5);
            return 0;
          }
          return 0;
        }
        goto LAB_0534d4c4;
      }
      if (iVar4 == 3) {
        if (*(long *)(param_1 + 0x18) == 0) goto System_Xml_TextUtf8RawTextWriter___ctor;
        uVar6 = FUN_0529d560(*(long *)(param_1 + 0x18),0);
        if (*(int *)(*(long *)PTR_DAT_0631a6c0 + 0xe4) == 0) {
          thunk_FUN_02b9ad44(*(long *)PTR_DAT_0631a6c0);
        }
        uVar3 = FUN_04cfd840(param_2,uVar6,0);
        puVar2 = PTR_DAT_06312310;
        local_38 = CONCAT71(local_38._1_7_,uVar3) & 0xffffffffffffff01;
        lVar7 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                          (*(undefined8 *)(PTR_DAT_06312310 + 0x28),&local_38);
        if (*(long *)(param_1 + 0x18) == 0) goto System_Xml_TextUtf8RawTextWriter___ctor;
        uVar6 = FUN_0529d560(*(long *)(param_1 + 0x18),0);
        uVar3 = FUN_04cfd840(param_3,uVar6,0);
        uVar6 = *(undefined8 *)(puVar2 + 0x28);
        local_40 = CONCAT71(local_40._1_7_,uVar3) & 0xffffffffffffff01;
        goto LAB_0534d6d0;
      }
LAB_0534d614:
      lVar7 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
      uVar6 = (**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
    }
    puVar2 = PTR_DAT_06331898;
    if (lVar7 == 0) {
System_Xml_TextUtf8RawTextWriter___ctor:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar13 = *(undefined8 *)PTR_DAT_06331898;
    lVar8 = thunk_FUN_02b79548(lVar7,uVar13);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(lVar7,uVar13);
    }
    lVar8 = *(long *)puVar2;
    plVar9 = (long *)thunk_FUN_02b79548(lVar7,lVar8);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3ce44(lVar7,lVar8);
    }
    lVar7 = *plVar9;
    uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
          puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0534d75c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_02b7654c(plVar9,lVar8,0);
LAB_0534d75c:
    uVar6 = (*(code *)*puVar10)(plVar9,uVar6,puVar10[1]);
  }
  return uVar6;
}


