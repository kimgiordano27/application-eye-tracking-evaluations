/*
FUNCTION_NAME: FUN_05dc7ccc
ENTRY_POINT: 05dc7ccc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_05dc7ccc(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  ushort uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  long local_60;
  long local_58;
  long *local_50;
  undefined8 uStack_48;
  long *local_40;
  undefined8 uStack_38;
  
  local_50 = param_4;
  uStack_48 = param_5;
  local_40 = param_2;
  uStack_38 = param_3;
  if ((DAT_06b830d6 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0676b2b8);
                    /* try { // try from 05dc7d04 to 05ec7d2f has its CatchHandler @ 05dc7db4 */
    FUN_02d6084c(PTR_DAT_0676b2c0);
    FUN_02d6084c(PTR_DAT_0676b280);
    FUN_02d6084c(PTR_DAT_0676b288);
    DAT_06b830d6 = 1;
  }
                    /* try { // try from 05dc7d30 to 05ec7da7 has its CatchHandler @ 05dc7c70 */
  local_60 = 0;
  local_58 = 0;
  plVar3 = (long *)FUN_05dc80a4(&local_40,&local_58);
  uVar4 = FUN_05dc8410(&local_50,&local_60);
  puVar2 = PTR_DAT_0676b280;
  if (plVar3 == (long *)0x0) goto LAB_05dc80a0;
  lVar8 = *plVar3;
  uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0676b280) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
        goto LAB_05dc7db0;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)PTR_DAT_0676b280,0xc);
LAB_05dc7db0:
  uVar6 = (*(code *)*puVar5)(plVar3,uVar4,puVar5[1]);
  lVar9 = *plVar3;
  lVar8 = *(long *)puVar2;
  uVar1 = *(ushort *)(lVar9 + 0x12e);
  uVar11 = (ulong)uVar1;
  if ((uVar6 & 1) != 0) {
    if (uVar1 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
          iVar10 = *piVar12 + 0xe;
LAB_05dc7efc:
          puVar5 = (undefined8 *)(lVar9 + (long)iVar10 * 0x10 + 0x138);
          goto 
          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000354_PostfixBurstDelegate__EndInvoke
          ;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    uVar7 = 0xe;
LAB_05dc7e94:
    puVar5 = (undefined8 *)FUN_02d9a5d4(plVar3,lVar8,uVar7);

    UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000354_PostfixBurstDelegate__EndInvoke
    :
    (*(code *)*puVar5)(plVar3,uVar4,puVar5[1]);
    return;
  }
  if (uVar1 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar8) {
        puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0xb) * 0x10 + 0x138);
        goto LAB_05dc7e4c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)FUN_02d9a5d4(plVar3,lVar8,0xb);
LAB_05dc7e4c:
  uVar11 = (*(code *)*puVar5)(plVar3,uVar4,puVar5[1]);
  if ((uVar11 & 1) != 0) {
    lVar9 = *plVar3;
    lVar8 = *(long *)puVar2;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar8) {
          iVar10 = *piVar12 + 0xd;
          goto LAB_05dc7efc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    uVar7 = 0xd;
    goto LAB_05dc7e94;
  }
  if (local_58 != 0) {
    if (param_2 == (long *)0x0) goto LAB_05dc80a0;
    lVar8 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0676b288) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar12 + 0xe) * 0x10 + 0x138);
          goto LAB_05dc7f38;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(param_2,*(long *)PTR_DAT_0676b288,0xe);
LAB_05dc7f38:
    plVar3 = (long *)(*(code *)*puVar5)(param_2,puVar5[1]);
    lVar8 = local_58;
    if (plVar3 == (long *)0x0) goto LAB_05dc80a0;
    lVar9 = *plVar3;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0676b2b8) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 6) * 0x10 + 0x138);
          goto LAB_05dc7fa8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)PTR_DAT_0676b2b8,6);
LAB_05dc7fa8:
    (*(code *)*puVar5)(plVar3,lVar8,puVar5[1]);
  }
  if (local_60 == 0) {
    return;
  }
  if (param_4 != (long *)0x0) {
    lVar8 = *param_4;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0676b288) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
          goto 
          UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_00000355_PostfixBurstDelegate___ctor
          ;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(param_4,*(long *)PTR_DAT_0676b288,0xd);

    UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_00000355_PostfixBurstDelegate___ctor
    :
    plVar3 = (long *)(*(code *)*puVar5)(param_4,puVar5[1]);
    lVar8 = local_60;
    if (plVar3 != (long *)0x0) {
      lVar9 = *plVar3;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0676b2c0) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 6) * 0x10 + 0x138);
            goto LAB_05dc808c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)PTR_DAT_0676b2c0,6);
LAB_05dc808c:
      (*(code *)*puVar5)(plVar3,lVar8,puVar5[1]);
      return;
    }
  }
LAB_05dc80a0:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


