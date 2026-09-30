/*
FUNCTION_NAME: FUN_056699d0
ENTRY_POINT: 056699d0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05669d2c) */

void FUN_056699d0(long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 local_60;
  long **pplStack_58;
  long **local_50;
  long *local_48;
  long *local_38;
  
  if ((DAT_066d1d71 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06322660);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(PTR_DAT_06312f90);
    DAT_066d1d71 = 1;
  }
  local_38 = (long *)0x0;
  local_48 = (long *)0x0;
  if (param_2 == 0) {
    thunk_FUN_02ba3594(PTR_DAT_06315b90);
    uVar6 = thunk_FUN_02b79644();
    uVar7 = thunk_FUN_02ba3594(PTR_DAT_0631cbb8);
    FUN_04cee07c(uVar6,uVar7,0);
    uVar7 = thunk_FUN_02ba3594(
                              Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Current__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar6,uVar7);
  }
  if (param_3 < 0) {
    local_60 = CONCAT44(local_60._4_4_,param_3);
    uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_60);
    thunk_FUN_02ba3594(PTR_DAT_0631cbc0);
    uVar7 = thunk_FUN_02b79644();
    uVar8 = thunk_FUN_02ba3594(PTR_DAT_0631eb88);
    uVar9 = thunk_FUN_02ba3594(PTR_DAT_0631ed68);
    System_Threading_Tasks_Task__get_CompletedTask(uVar7,uVar8,uVar6,uVar9,0);
    uVar6 = thunk_FUN_02ba3594(
                              Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Current__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar7,uVar6);
  }
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x388))(plVar4,*(undefined8 *)(*plVar4 + 0x390));
  puVar3 = PTR_DAT_06322660;
  puVar2 = PTR_DAT_06312f90;
  pplStack_58 = &local_38;
  local_60 = 0;
  local_50 = &local_48;
  do {
    local_38 = plVar4;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar11 = *plVar4;
    lVar10 = *(long *)puVar2;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_05669ac8;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c(plVar4,lVar10,0);
LAB_05669ac8:
    uVar12 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    plVar4 = local_38;
    puVar1 = PTR_DAT_06312f78;
    if ((uVar12 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_02b79548(local_38,*(undefined8 *)PTR_DAT_06312f78);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar4;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      local_48 = plVar4;
      if (uVar12 == 0) goto LAB_05669c0c;
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar11 = *local_38;
    lVar10 = *(long *)puVar2;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar10) {
          puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_05669b30;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_02b7654c(local_38,lVar10,1);
LAB_05669b30:
    plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (*(char *)(param_1 + 0x18) == '\0') {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44();
      }
      lVar10 = thunk_FUN_02b7978c();
      puVar5 = (undefined8 *)(lVar10 + 8);
    }
    else {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(long *)(*plVar4 + 0x40) != *(long *)(*(long *)puVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44();
      }
      puVar5 = (undefined8 *)thunk_FUN_02b7978c();
    }
    FUN_04d9ddec(param_2,*puVar5,param_3,0);
    param_3 = param_3 + 1;
    plVar4 = local_38;
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_05669c28;
    }
  }
LAB_05669c0c:
  puVar5 = (undefined8 *)FUN_02b7654c(plVar4,*(long *)puVar1,0);
LAB_05669c28:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


