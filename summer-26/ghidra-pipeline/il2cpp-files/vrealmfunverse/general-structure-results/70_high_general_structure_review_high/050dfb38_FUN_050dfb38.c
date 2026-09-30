/*
FUNCTION_NAME: FUN_050dfb38
ENTRY_POINT: 050dfb38
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void FUN_050dfb38(long param_1,long *param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  uint local_54 [3];
  undefined4 local_48;
  
                    /* try { // try from 050dfb3c to 051dfb3f has its CatchHandler @ 050dfc40 */
                    /* try { // try from 050dfb40 to 051dfbdf has its CatchHandler @ 050df984 */
  if ((DAT_066cd89c & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(PTR_DAT_0631ead8);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_Locomotion_Climbing_ClimbSettings_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(CoinTransaction_TypeInfo);
    FUN_02b3c81c(UnityEditor_Analytics_CollabOperationAnalytic_TypeInfo);
    DAT_066cd89c = 1;
  }
  local_48 = 0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0631ead8) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
        goto LAB_050dfc10;
      }
      uVar9 = uVar9 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_02b7654c(param_2,*(long *)PTR_DAT_0631ead8,2);
LAB_050dfc10:
  plVar6 = (long *)(*(code *)*puVar5)(param_2,puVar5[1]);
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    bVar2 = *(byte *)(*(long *)
                       UnityEngine_XR_Interaction_Toolkit_Locomotion_Climbing_ClimbSettings_TypeInfo
                     + 0x130);
    if ((bVar2 <= *(byte *)(lVar8 + 0x130)) &&
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)UnityEngine_XR_Interaction_Toolkit_Locomotion_Climbing_ClimbSettings_TypeInfo)) {
      iVar4 = (**(code **)(lVar8 + 0x2b8))(plVar6,param_2,*(undefined8 *)(lVar8 + 0x2c0));
      iVar4 = *(int *)(param_1 + 0x34) + iVar4;
      *(int *)(param_1 + 0x34) = iVar4;
      while( true ) {
        if (iVar4 < 0xc) {
          if (*(long *)(param_1 + 0x38) != 0) {
            FUN_04dded18(*(long *)(param_1 + 0x38),0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar8 = *(long *)(param_1 + 0x28);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        if (*(uint *)(lVar8 + 0x18) <= *(uint *)(param_1 + 0x30)) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        auVar13 = FUN_050ddae4(*(undefined8 *)
                                (lVar8 + (long)(int)*(uint *)(param_1 + 0x30) * 8 + 0x20));
        if (auVar13._0_4_ != 0x5283a76b) break;
        uVar12 = auVar13._8_4_;
        if (0xfff4 < uVar12) {
          plVar6 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,1);
          local_54[0] = uVar12;
          lVar8 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                            (*(undefined8 *)(PTR_DAT_06312310 + 0x48),local_54);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if ((lVar8 != 0) &&
             (lVar10 = thunk_FUN_02b79548(lVar8,*(undefined8 *)(*plVar6 + 0x40)), lVar10 == 0)) {
            uVar7 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar7,0);
          }
          if ((int)plVar6[3] != 0) {
            plVar6[4] = lVar8;
            thunk_FUN_02bb0e9c(plVar6 + 4,lVar8);
            if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            FUN_05c454cc(*(undefined8 *)UnityEditor_Analytics_CollabOperationAnalytic_TypeInfo,
                         plVar6,0);
            FUN_050df6d8(param_1);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        iVar4 = *(int *)(param_1 + 0x34);
        iVar1 = uVar12 + 0xc;
        if (iVar1 <= iVar4) {
          lVar8 = *(long *)(param_1 + 0x18);
          if (lVar8 != 0) {
            lVar10 = *(long *)(param_1 + 0x28);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            if (*(uint *)(lVar10 + 0x18) <= *(uint *)(param_1 + 0x30)) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            (**(code **)(lVar8 + 0x18))
                      (*(undefined8 *)(lVar8 + 0x40),auVar13._0_8_ >> 0x20,
                       *(undefined8 *)(lVar10 + (long)(int)*(uint *)(param_1 + 0x30) * 8 + 0x20),0xc
                       ,auVar13._8_8_ & 0xffffffff,*(undefined8 *)(lVar8 + 0x28));
            iVar4 = *(int *)(param_1 + 0x34);
          }
          uVar12 = *(uint *)(param_1 + 0x30);
          iVar4 = iVar4 - iVar1;
          uVar3 = 1 - uVar12;
          if (0 < iVar4) {
            lVar8 = *(long *)(param_1 + 0x28);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            if (*(uint *)(lVar8 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            if (*(uint *)(lVar8 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            FUN_04d9e334(*(undefined8 *)(lVar8 + 0x20 + (long)(int)uVar12 * 8),iVar1,
                         *(undefined8 *)(lVar8 + 0x20 + (long)(int)uVar3 * 8),0,iVar4,0);
          }
          *(uint *)(param_1 + 0x30) = uVar3;
          *(int *)(param_1 + 0x34) = iVar4;
        }
      }
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05c41e34(*(undefined8 *)CoinTransaction_TypeInfo,0);
      FUN_050df6d8(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


