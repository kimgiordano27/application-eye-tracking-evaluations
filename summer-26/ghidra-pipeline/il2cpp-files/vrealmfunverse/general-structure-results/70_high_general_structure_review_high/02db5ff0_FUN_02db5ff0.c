/*
FUNCTION_NAME: FUN_02db5ff0
ENTRY_POINT: 02db5ff0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


undefined8 FUN_02db5ff0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined4 local_54 [3];
  undefined4 local_48;
  undefined8 local_38;
  
  if ((DAT_066c293f & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313d48);
    FUN_02b3c81c(PTR_DAT_06313c50);
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(PTR_DAT_0631a4c8);
    FUN_02b3c81c(PTR_DAT_0631a4d0);
    FUN_02b3c81c(PTR_DAT_0631a4d8);
    FUN_02b3c81c(PTR_DAT_06315e30);
    FUN_02b3c81c(PTR_DAT_0631a7e8);
    FUN_02b3c81c(PTR_DAT_06314578);
    FUN_02b3c81c(PTR_DAT_0631a910);
    FUN_02b3c81c(PTR_DAT_0631a918);
    FUN_02b3c81c(PTR_DAT_06314590);
    FUN_02b3c81c(PTR_DAT_0631a680);
    FUN_02b3c81c(PTR_DAT_0631a688);
    FUN_02b3c81c(PTR_DAT_0631a690);
    FUN_02b3c81c(PTR_DAT_0631a698);
    FUN_02b3c81c(PTR_DAT_0631a1c8);
    FUN_02b3c81c(PTR_DAT_0631a920);
    FUN_02b3c81c(PTR_DAT_0631a928);
    FUN_02b3c81c(PTR_DAT_0631a930);
    FUN_02b3c81c(PTR_DAT_0631a938);
    FUN_02b3c81c(PTR_DAT_0631a940);
    FUN_02b3c81c(PTR_DAT_0631a6a0);
    FUN_02b3c81c(PTR_DAT_0631a8c0);
    FUN_02b3c81c(PTR_DAT_0631a948);
    FUN_02b3c81c(PTR_DAT_0631a6a8);
    FUN_02b3c81c(PTR_DAT_0631a950);
    DAT_066c293f = 1;
  }
  puVar1 = PTR_DAT_0631a918;
  lVar9 = *(long *)(param_1 + 0x20);
  local_38 = 0;
  local_48 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar2 == 0)) goto LAB_02db6914;
    lVar2 = FUN_04df2688(lVar2,0);
    if (lVar2 == 0) {
      *(undefined1 *)(param_1 + 0x30) = 1;
      if (((lVar9 == 0) || (*(long *)(lVar9 + 0x38) == 0)) ||
         (lVar2 = *(long *)(*(long *)(lVar9 + 0x38) + 0x38), lVar2 == 0)) goto LAB_02db6914;
      lVar2 = *(long *)(lVar2 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_06313c50 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      local_38 = FUN_04d5cf7c(0);
      uVar6 = FUN_04d5dd54(&local_38,*(undefined8 *)PTR_DAT_0631a1c8,0);
      if (lVar2 == 0) goto LAB_02db6914;
      puVar4 = (undefined8 *)(lVar2 + 0x10);
      *puVar4 = uVar6;
      thunk_FUN_02bb0e9c(puVar4,uVar6);
      if (((*(long *)(lVar9 + 0x38) == 0) ||
          (lVar2 = *(long *)(*(long *)(lVar9 + 0x38) + 0x38), lVar2 == 0)) ||
         (lVar2 = *(long *)(lVar2 + 0x28), lVar2 == 0)) goto LAB_02db6914;
      *(undefined1 *)(lVar2 + 0x18) = 0;
      *(undefined4 *)(lVar2 + 0x1c) = 0;
      FUN_02daffa0(lVar9);
      if (*(char *)(lVar9 + 0x30) != '\0') {
        if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c44914(*(undefined8 *)PTR_DAT_0631a930,0);
      }
    }
    else {
      if ((*(long *)(param_1 + 0x28) == 0) ||
         (lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar9 == 0)) goto LAB_02db6914;
      uVar6 = FUN_04df2688(lVar9,0);
      uVar6 = FUN_04c00984(*(undefined8 *)PTR_DAT_0631a938,uVar6,0);
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
      }
      FUN_05c44f60(uVar6,0);
      lVar9 = *(long *)(*(long *)(*(long *)PTR_DAT_06313d48 + 0xb8) + 8);
      if (lVar9 != 0) {
        if (((*(long *)(param_1 + 0x28) == 0) ||
            (lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar2 == 0)) ||
           (plVar11 = (long *)FUN_04df2688(lVar2,0), plVar11 == (long *)0x0)) goto LAB_02db6914;
        uVar6 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
        uVar6 = FUN_04bffdac(*(undefined8 *)PTR_DAT_0631a950,uVar6,0);
        (**(code **)(lVar9 + 0x18))
                  (*(undefined8 *)(lVar9 + 0x40),uVar6,*(undefined8 *)(lVar9 + 0x28));
      }
    }
    lVar9 = **(long **)(*(long *)PTR_DAT_06313d48 + 0xb8);
    if (lVar9 == 0) {
      return 0;
    }
    uVar7 = *(undefined1 *)(param_1 + 0x30);
    pcVar8 = *(code **)(lVar9 + 0x18);
    uVar6 = *(undefined8 *)(lVar9 + 0x40);
    goto LAB_02db6740;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  lVar2 = thunk_FUN_02b79644(*(undefined8 *)puVar1);
  FUN_04dbdb8c(lVar2,0);
  plVar11 = (long *)(param_1 + 0x28);
  *plVar11 = lVar2;
  thunk_FUN_02bb0e9c(plVar11,lVar2);
  if (lVar9 == 0) goto LAB_02db6914;
  uVar3 = FUN_02db1070(lVar9);
  if ((uVar3 & 1) == 0) {
    if (*(char *)(lVar9 + 0x30) == '\0') {
      return 0;
    }
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05c44914(*(undefined8 *)PTR_DAT_0631a940,0);
    return 0;
  }
  plVar12 = (long *)(lVar9 + 0x40);
  if (*plVar12 == 0) {
    if (*(int *)(*(long *)PTR_DAT_0631a7e8 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar2 = FUN_02e25528(0);
    *plVar12 = lVar2;
    thunk_FUN_02bb0e9c(plVar12,lVar2);
    if (*plVar12 != 0) goto LAB_02db620c;
    puVar4 = (undefined8 *)PTR_DAT_0631a920;
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar4 = (undefined8 *)PTR_DAT_0631a920;
    }
System_Array__InternalArray__ICollection_CopyTo<AsyncGPUReadbackRequest>:
    FUN_05c44f60(*puVar4,0);
  }
  else {
LAB_02db620c:
    puVar1 = PTR_DAT_06315e30;
    *(undefined1 *)(param_1 + 0x30) = 0;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar2 = FUN_02e1eb94(0);
    if (lVar2 == 0) {
LAB_02db6914:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    lVar2 = FUN_02e1d460(lVar2,0);
    if (lVar2 != 0) {
      if (*(long *)(lVar9 + 0x38) != 0) {
        if (*plVar11 != 0) {
          puVar4 = (undefined8 *)(*plVar11 + 0x10);
          *puVar4 = 0;
          thunk_FUN_02bb0e9c(puVar4,0);
          if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar5 = FUN_02e25bc0(*plVar12,*(undefined8 *)PTR_DAT_0631a8c0,0);
          uVar6 = FUN_02e1aff8(lVar2,0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4(uVar6,uVar6);
          }
          lVar2 = FUN_02e22234(lVar5,uVar6,0);
          lVar5 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631a4d8);
          FUN_0452d044(lVar5,*(undefined8 *)PTR_DAT_0631a4d0);
          puVar1 = PTR_DAT_0631a4c8;
          if (*(long *)(lVar9 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          FUN_0452ddc0(lVar5,*(undefined8 *)PTR_DAT_0631a698,
                       *(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x10),
                       *(undefined8 *)PTR_DAT_0631a4c8);
          if (*(long *)(lVar9 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          local_54[0] = *(undefined4 *)(*(long *)(lVar9 + 0x38) + 0x18);
          uVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(PTR_DAT_06312310 + 0x48),local_54);
          FUN_0452ddc0(lVar5,*(undefined8 *)PTR_DAT_0631a680,uVar6,*(undefined8 *)puVar1);
          if (*(long *)(lVar9 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          FUN_0452ddc0(lVar5,*(undefined8 *)PTR_DAT_0631a6a0,
                       *(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x20),*(undefined8 *)puVar1);
          if (*(long *)(lVar9 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          FUN_0452ddc0(lVar5,*(undefined8 *)PTR_DAT_0631a688,
                       *(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x28),*(undefined8 *)puVar1);
          if (*(long *)(lVar9 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          uVar6 = FUN_0452ddc0(lVar5,*(undefined8 *)PTR_DAT_0631a6a8,
                               *(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x30),*(undefined8 *)puVar1
                              );
          if (*(long *)(lVar9 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          uVar6 = FUN_02db156c(uVar6,*(undefined8 *)(*(long *)(lVar9 + 0x38) + 0x38));
          FUN_0452ddc0(lVar5,*(undefined8 *)PTR_DAT_0631a690,uVar6,*(undefined8 *)puVar1);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar9 = *plVar11;
          uVar6 = FUN_02e22b9c(lVar2,lVar5,0,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          puVar4 = (undefined8 *)(lVar9 + 0x10);
          *puVar4 = uVar6;
          thunk_FUN_02bb0e9c(puVar4);
          uVar10 = *(undefined8 *)(param_1 + 0x28);
          uVar6 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06314578);
          FUN_049b749c(uVar6,uVar10,*(undefined8 *)PTR_DAT_0631a910,0);
          uVar10 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06314590);
          FUN_05c94ec4(uVar10,uVar6,0);
          *(undefined8 *)(param_1 + 0x18) = uVar10;
          thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x18),uVar10);
          *(undefined4 *)(param_1 + 0x10) = 1;
          return 1;
        }
        goto LAB_02db6914;
      }
      puVar4 = (undefined8 *)PTR_DAT_0631a948;
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        puVar4 = (undefined8 *)PTR_DAT_0631a948;
      }
      goto System_Array__InternalArray__ICollection_CopyTo<AsyncGPUReadbackRequest>;
    }
    if (*(char *)(lVar9 + 0x30) != '\0') {
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05c41e34(*(undefined8 *)PTR_DAT_0631a928,0);
    }
  }
  lVar9 = **(long **)(*(long *)PTR_DAT_06313d48 + 0xb8);
  if (lVar9 == 0) {
    return 0;
  }
  pcVar8 = *(code **)(lVar9 + 0x18);
  uVar6 = *(undefined8 *)(lVar9 + 0x40);
  uVar7 = 0;
LAB_02db6740:
  (*pcVar8)(uVar6,uVar7,*(undefined8 *)(lVar9 + 0x28));
  return 0;
}


