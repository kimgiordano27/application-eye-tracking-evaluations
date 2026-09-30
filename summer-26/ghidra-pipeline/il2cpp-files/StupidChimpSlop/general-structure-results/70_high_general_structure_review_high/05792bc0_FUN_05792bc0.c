/*
FUNCTION_NAME: FUN_05792bc0
ENTRY_POINT: 05792bc0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_18;ray_or_cast_sink_hits_12;telemetry_or_network_hits_4
*/


undefined8 FUN_05792bc0(long param_1)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  
  if ((DAT_06a552db & 1) == 0) {
    FUN_02d4dc40(
                Method_Unity_Burst_FunctionPointer<XRTransformStabilizer_StabilizeTransform_000011D4_PostfixBurstDelegate>_get_Value__
                );
    FUN_02d4dc40(
                Method_Unity_Burst_FunctionPointer<xxHash3_Hash128Long_00000A71_PostfixBurstDelegate>_get_Value__
                );
    FUN_02d4dc40(Method_System_Collections_Generic_EqualityComparer<List<RuleMatcher>>_get_Default__
                );
    FUN_02d4dc40(
                Method_Unity_Burst_FunctionPointer<XRPokeLogic_CalculateInteractionPoint_00001083_PostfixBurstDelegate>_get_Value__
                );
    DAT_06a552db = 1;
  }
  lVar14 = *(long *)(param_1 + 0x80);
  if (lVar14 == 0) {
Cysharp_Threading_Tasks_Triggers_AsyncCollisionStay2DTrigger__OnCollisionStay2DAsync:
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  uVar2 = *(uint *)(lVar14 + 0x58);
  if ((uVar2 & 0x35) == 0) {
    if (*(long *)(lVar14 + 0x50) == 0) {
      if (*(char *)(lVar14 + 0x38) == '\0') {
        return 1;
      }
      lVar11 = *(long *)
                Method_Unity_Burst_FunctionPointer<XRPokeLogic_CalculateInteractionPoint_00001083_PostfixBurstDelegate>_get_Value__
      ;
      *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(lVar14 + 0x5c);
      cVar3 = *(char *)(lVar14 + 0x40);
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar14 = *(long *)(param_1 + 0x80);
        *(bool *)(param_1 + 0x99) = cVar3 != '\0';
        if (lVar14 == 0)
        goto Cysharp_Threading_Tasks_Triggers_AsyncCollisionStay2DTrigger__OnCollisionStay2DAsync;
      }
      else {
        *(bool *)(param_1 + 0x99) = cVar3 != '\0';
      }
      puVar5 = Method_System_Collections_Generic_EqualityComparer<List<RuleMatcher>>_get_Default__;
      lVar14 = *(long *)(lVar14 + 0x48);
      if (*(int *)(*(long *)
                    Method_System_Collections_Generic_EqualityComparer<List<RuleMatcher>>_get_Default__
                  + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      uVar13 = FUN_0578a738(lVar14);
      if ((uVar13 & 1) == 0) {
        bVar6 = *(char *)(param_1 + 0x98) != '\0';
        lVar11 = 0x28;
        if (bVar6) {
          lVar11 = 0x10;
        }
        lVar1 = 0x14;
        if (bVar6) {
          lVar1 = 0x28;
        }
        iVar9 = *(int *)(param_1 + lVar1) - *(int *)(param_1 + lVar11);
        if (iVar9 < 1) {
          return 0;
        }
        iVar9 = iVar9 + 1;
        while( true ) {
          uVar10 = FUN_057927e4(param_1);
          lVar11 = *(long *)puVar5;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_02dabd98(lVar11);
          }
          uVar13 = FUN_0578a9c0(uVar10,lVar14);
          if ((uVar13 & 1) != 0) break;
          iVar9 = iVar9 + -1;
          if (iVar9 < 2) {
            return 0;
          }
        }
      }
      else {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02dabd98();
        }
        if (lVar14 == 0)
        goto Cysharp_Threading_Tasks_Triggers_AsyncCollisionStay2DTrigger__OnCollisionStay2DAsync;
        sVar7 = FUN_04e7a3d8(lVar14,3,0);
        bVar6 = *(char *)(param_1 + 0x98) != '\0';
        lVar14 = 0x28;
        if (bVar6) {
          lVar14 = 0x10;
        }
        lVar11 = 0x14;
        if (bVar6) {
          lVar11 = 0x28;
        }
        iVar9 = *(int *)(param_1 + lVar11) - *(int *)(param_1 + lVar14);
        if (iVar9 < 1) {
          return 0;
        }
        iVar9 = iVar9 + 1;
        while (sVar8 = FUN_057927e4(param_1), sVar7 != sVar8) {
          iVar9 = iVar9 + -1;
          if (iVar9 < 2) {
            return 0;
          }
        }
      }
      if (param_1 != 0) {
        iVar9 = *(int *)(param_1 + 0x28) + -1;
        if (*(char *)(param_1 + 0x98) != '\0') {
          iVar9 = *(int *)(param_1 + 0x28) + 1;
        }
        *(int *)(param_1 + 0x28) = iVar9;
        return 1;
      }
    }
    else {
      iVar9 = FUN_057890ac(*(long *)(lVar14 + 0x50),*(undefined8 *)(param_1 + 0x20),
                           *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x10),
                           *(undefined4 *)(param_1 + 0x14));
      *(int *)(param_1 + 0x28) = iVar9;
      if (iVar9 != -1) {
        return 1;
      }
      if (*(long *)(param_1 + 0x80) != 0) {
        lVar14 = 0x14;
        if (*(char *)(*(long *)(param_1 + 0x80) + 0x5c) != '\0') {
          lVar14 = 0x10;
        }
        uVar10 = *(undefined4 *)(param_1 + lVar14);
        goto LAB_05792d14;
      }
    }
    goto Cysharp_Threading_Tasks_Triggers_AsyncCollisionStay2DTrigger__OnCollisionStay2DAsync;
  }
  if (*(char *)(lVar14 + 0x5c) == '\0') {
    if ((((uVar2 & 1) != 0) && (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x28))) ||
       (((uVar2 >> 2 & 1) != 0 && (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x28))))) {
      uVar10 = *(undefined4 *)(param_1 + 0x14);
      goto LAB_05792d14;
    }
    if (((uVar2 >> 4 & 1) != 0) &&
       (iVar9 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x28) < iVar9)) {
      *(int *)(param_1 + 0x28) = iVar9;
      goto LAB_05792d8c;
    }
    if (((uVar2 >> 5 & 1) == 0) ||
       (iVar9 = *(int *)(param_1 + 0x14), iVar9 <= *(int *)(param_1 + 0x28))) goto LAB_05792d8c;
LAB_05792d88:
    *(int *)(param_1 + 0x28) = iVar9;
LAB_05792d8c:
    if (*(long *)(lVar14 + 0x50) == 0) {
      return 1;
    }
    uVar12 = FUN_05789040(*(long *)(lVar14 + 0x50),*(undefined8 *)(param_1 + 0x20),
                          *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x10),
                          *(undefined4 *)(param_1 + 0x14));
    return uVar12;
  }
  if (((uVar2 >> 5 & 1) == 0) || (*(int *)(param_1 + 0x14) <= *(int *)(param_1 + 0x28))) {
    if ((uVar2 >> 4 & 1) != 0) {
      iVar9 = *(int *)(param_1 + 0x28);
      iVar4 = *(int *)(param_1 + 0x14) + -1;
      if (iVar9 < iVar4) goto LAB_05792d0c;
      if (iVar9 == iVar4) {
        if (*(long *)(param_1 + 0x20) == 0)
        goto Cysharp_Threading_Tasks_Triggers_AsyncCollisionStay2DTrigger__OnCollisionStay2DAsync;
        sVar7 = FUN_04e7a3d8(*(long *)(param_1 + 0x20),iVar9,0);
        if (sVar7 != 10) goto LAB_05792d0c;
        lVar14 = *(long *)(param_1 + 0x80);
        if (lVar14 == 0)
        goto Cysharp_Threading_Tasks_Triggers_AsyncCollisionStay2DTrigger__OnCollisionStay2DAsync;
      }
    }
    if (((*(uint *)(lVar14 + 0x58) >> 2 & 1) == 0) ||
       (*(int *)(param_1 + 0x18) <= *(int *)(param_1 + 0x28))) {
      if (((*(uint *)(lVar14 + 0x58) & 1) == 0) ||
         (iVar9 = *(int *)(param_1 + 0x10), *(int *)(param_1 + 0x28) <= iVar9)) goto LAB_05792d8c;
      goto LAB_05792d88;
    }
  }
LAB_05792d0c:
  uVar10 = *(undefined4 *)(param_1 + 0x10);
LAB_05792d14:
  *(undefined4 *)(param_1 + 0x28) = uVar10;
  return 0;
}


