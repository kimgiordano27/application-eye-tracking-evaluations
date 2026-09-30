/*
FUNCTION_NAME: FUN_0504fac0
ENTRY_POINT: 0504fac0
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


undefined4 FUN_0504fac0(long param_1,uint param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 uVar16;
  undefined8 local_68;
  
  if ((DAT_066cc392 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(PTR_DAT_06334ac0);
    FUN_02b3c81c(System_Tuple<HumanBodyBones,_HumanBodyBones>_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631fad8);
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(UnityEngine_Animations_Rigging_OverrideTransformData_var);
    FUN_02b3c81c(System_Tuple<SendOrPostCallback,_object>_TypeInfo);
    DAT_066cc392 = 1;
  }
  if (*(char *)(param_1 + 0xd3) == '\0') {
    if (0 < *(int *)(param_1 + 0x1ac)) {
      if (*(long *)(param_1 + 0x128) == 0) {
        iVar5 = FUN_0504f480(param_1);
        uVar11 = 1;
        if (iVar5 == 0) {
          uVar11 = 2;
        }
        uVar10 = FUN_02b3c908(*(undefined8 *)System_Tuple<HumanBodyBones,_HumanBodyBones>_TypeInfo,
                              uVar11);
        *(undefined8 *)(param_1 + 0x128) = uVar10;
        thunk_FUN_02bb0e9c(param_1 + 0x128,uVar10);
      }
      FUN_0504f480(param_1);
      puVar4 = PTR_DAT_06312520;
      uVar14 = 0;
      uVar16 = 0;
      uVar11 = 0x11;
      if ((param_4 & 1) == 0) {
        uVar11 = 4;
      }
      bVar3 = 1;
      while (lVar6 = *(long *)(param_1 + 0x128), lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_0504ffbc;
        plVar7 = (long *)(lVar6 + uVar14 * 0x20 + 0x30);
        if (*plVar7 == 0) {
          lVar8 = FUN_02b3c908(*(undefined8 *)
                                UnityEngine_Animations_Rigging_OverrideTransformData_var,
                               *(undefined4 *)(param_1 + 0x1ac));
          if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_0504ffbc;
          *plVar7 = lVar8;
          thunk_FUN_02bb0e9c(plVar7,lVar8);
          lVar6 = *(long *)(param_1 + 0x128);
          if (lVar6 == 0) break;
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_0504ffbc;
        plVar7 = (long *)(lVar6 + uVar14 * 0x20 + 0x38);
        if (*plVar7 == 0) {
          lVar8 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06334ac0,*(undefined4 *)(param_1 + 0x1ac));
          if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_0504ffbc;
          *plVar7 = lVar8;
          thunk_FUN_02bb0e9c(plVar7,lVar8);
        }
        if (0 < *(int *)(param_1 + 0x1ac)) {
          uVar15 = 0;
          lVar6 = 0x20;
          do {
            lVar8 = *(long *)(param_1 + 0x128);
            if (lVar8 == 0) goto LAB_0504ffb8;
            if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_0504ffbc;
            lVar8 = lVar8 + 0x20 + uVar14 * 0x20;
            lVar12 = *(long *)(lVar8 + 0x10);
            if (lVar12 == 0) goto LAB_0504ffb8;
            if (*(uint *)(lVar12 + 0x18) <= uVar15) goto LAB_0504ffbc;
            lVar8 = *(long *)(lVar8 + 0x18);
            if (lVar8 == 0) goto LAB_0504ffb8;
            if (*(uint *)(lVar8 + 0x18) <= uVar15) goto LAB_0504ffbc;
            plVar7 = *(long **)(lVar12 + lVar6);
            lVar8 = *(long *)(lVar8 + lVar6);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            uVar9 = FUN_05c8c45c(plVar7,0,0);
            if ((uVar9 & 1) == 0) {
              if (lVar8 == 0) goto LAB_0504fe40;
LAB_0504fe78:
              if ((*(int *)(param_1 + 0xec) == 2) || (*(int *)(param_1 + 0xec) == 4)) {
                lVar12 = FUN_05c6c600(param_3 & 0xffffffff,uVar11,param_2 & 1,lVar8,0);
              }
              else {
                lVar12 = FUN_05c6af90(param_3 & 0xffffffff,param_3 >> 0x20,uVar11,param_2 & 1,0,
                                      lVar8,0);
              }
              lVar13 = *(long *)(param_1 + 0x128);
              if (lVar13 == 0) goto LAB_0504ffb8;
              if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_0504ffbc;
              plVar7 = *(long **)(lVar13 + uVar14 * 0x20 + 0x30);
              if (plVar7 == (long *)0x0) goto LAB_0504ffb8;
              if ((lVar12 != 0) &&
                 (lVar13 = thunk_FUN_02b79548(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar13 == 0))
              goto LAB_0504ffc0;
              if (*(uint *)(plVar7 + 3) <= uVar15) goto LAB_0504ffbc;
              *(long *)((long)plVar7 + lVar6) = lVar12;
              thunk_FUN_02bb0e9c((long)plVar7 + lVar6,lVar12);
              lVar12 = *(long *)(param_1 + 0x128);
              if (lVar12 == 0) goto LAB_0504ffb8;
              if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_0504ffbc;
              lVar12 = *(long *)(lVar12 + uVar14 * 0x20 + 0x38);
              if (lVar12 == 0) goto LAB_0504ffb8;
              if (*(uint *)(lVar12 + 0x18) <= uVar15) goto LAB_0504ffbc;
              uVar16 = 1;
              *(long *)(lVar12 + lVar6) = lVar8;
            }
            else if (lVar8 == 0) {
LAB_0504fe40:
              uVar2 = *(undefined4 *)(param_1 + 0x124);
              if (*(int *)(*(long *)PTR_DAT_0631fad8 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              lVar8 = FUN_0505b9cc(uVar2,uVar15 & 0xffffffff,uVar14,0);
              if (lVar8 != 0) goto LAB_0504fe78;
            }
            else {
              if (plVar7 == (long *)0x0) goto LAB_0504ffb8;
              iVar5 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
              if ((iVar5 != (int)param_3) ||
                 (iVar5 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0)),
                 iVar5 != (int)(param_3 >> 0x20))) goto LAB_0504fe78;
            }
            uVar15 = uVar15 + 1;
            lVar6 = lVar6 + 8;
          } while ((long)uVar15 < (long)*(int *)(param_1 + 0x1ac));
        }
        iVar5 = FUN_0504f480(param_1);
        uVar14 = 1;
        bVar1 = (bool)(iVar5 == 0 & bVar3);
        bVar3 = 0;
        if (!bVar1) {
          return uVar16;
        }
      }
LAB_0504ffb8:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
  else if (*(long *)(param_1 + 0x110) == 0) {
    uVar11 = *(undefined4 *)(param_1 + 0x124);
    if (*(int *)(*(long *)PTR_DAT_0631fad8 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar6 = FUN_0505bbd4(uVar11,0);
    *(long *)(param_1 + 0x110) = lVar6;
    if (lVar6 != 0) {
      plVar7 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,1);
      local_68 = *(undefined8 *)(param_1 + 0x110);
      lVar6 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)(PTR_DAT_06312310 + 0x58),&local_68);
      if (plVar7 == (long *)0x0) goto LAB_0504ffb8;
      if ((lVar6 != 0) &&
         (lVar8 = thunk_FUN_02b79548(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
LAB_0504ffc0:
        uVar10 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar10,0);
      }
      if ((int)plVar7[3] == 0) {
LAB_0504ffbc:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      plVar7[4] = lVar6;
      thunk_FUN_02bb0e9c(plVar7 + 4,lVar6);
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05c44b34(*(undefined8 *)System_Tuple<SendOrPostCallback,_object>_TypeInfo,plVar7,0);
      lVar6 = *(long *)(param_1 + 0x118);
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
      }
    }
  }
  return 0;
}


