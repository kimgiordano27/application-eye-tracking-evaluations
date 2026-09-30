/*
FUNCTION_NAME: FUN_06b79620
ENTRY_POINT: 06b79620
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_5;telemetry_or_network_hits_13
*/


/* WARNING: Removing unreachable block (ram,0x06b79b24) */
/* WARNING: Removing unreachable block (ram,0x06b79bcc) */

void FUN_06b79620(long param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  undefined1 auStack_158 [80];
  undefined8 local_108;
  long **pplStack_100;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_075600bf & 1) == 0) {
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<BurstLerpUtility_SingleBounceOutLerp_0000034A_PostfixBurstDelegate>_get_Value__
                );
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<BurstMathUtility_Scale_0000035C_PostfixBurstDelegate>_get_Value__
                );
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<BurstPhysicsUtils_GetConecastOffset_00000362_PostfixBurstDelegate>_get_Value__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
                );
    FUN_03188a78(PTR_DAT_070c2e88);
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<BurstLerpUtility_SingleBounceOutLerp_0000034B_PostfixBurstDelegate>_get_Value__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_Enumerator<TerrainTileCoord,_Terrain>_MoveNext__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<TerrainTileCoord,_Terrain>_MoveNext__
                );
    FUN_03188a78(
                Method_Unity_Burst_FunctionPointer<BurstPhysicsUtils_GetConecastParameters_00000360_PostfixBurstDelegate>_get_Value__
                );
    DAT_075600bf = 1;
  }
  local_b8 = (long *)0x0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uVar6 = FUN_06b79c1c(param_1,param_2);
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_06b797f8;
  uVar6 = FUN_03eb5b34(*(long *)(param_1 + 0x18),param_2,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
                      );
  if ((uVar6 & 1) != 0) {
    if (param_2 == 0) goto LAB_06b797f8;
    *(undefined8 *)(param_2 + 0x29c) = 0;
  }
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (iVar3 = FUN_06b79178(),
     puVar1 = 
     Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<TerrainTileCoord,_Terrain>_MoveNext__
     , param_2 == 0)) goto LAB_06b797f8;
  lVar7 = *(long *)(param_2 + 0x498);
  if (lVar7 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(lVar7 + 0x18) <= iVar4) goto LAB_06b797fc;
      lVar7 = FUN_042e47a4(lVar7,iVar4,*(undefined8 *)puVar1);
      if (lVar7 == 0) break;
      lVar8 = FUN_06b46abc(lVar7,0);
      if (lVar8 != 0) {
        lVar8 = FUN_06b46abc(lVar7,0);
        if (lVar8 == 0) break;
        iVar13 = 0;
        while (iVar13 < *(int *)(lVar8 + 0x18)) {
          lVar14 = *(long *)(param_1 + 0x38);
          lVar8 = FUN_06b46abc(lVar7,0);
          if ((lVar8 == 0) ||
             (uVar9 = FUN_042e47a4(lVar8,iVar13,*(undefined8 *)puVar1), lVar14 == 0))
          goto LAB_06b797f8;
          FUN_06b792b0(lVar14,uVar9);
          iVar13 = iVar13 + 1;
          lVar8 = FUN_06b46abc(lVar7,0);
          if (lVar8 == 0) goto LAB_06b797f8;
        }
      }
      if (*(long *)(param_1 + 0x38) == 0) break;
      FUN_06b792b0(*(long *)(param_1 + 0x38),lVar7);
      lVar7 = *(long *)(param_2 + 0x498);
      iVar4 = iVar4 + 1;
    } while (lVar7 != 0);
    goto LAB_06b797f8;
  }
LAB_06b797fc:
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_06b797f8;
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
  uVar9 = FUN_06b17580(param_2,0);
  iVar4 = FUN_06c5ab40(uVar9,0);
  lVar7 = *(long *)(param_1 + 0x38);
  if ((uVar6 & 1) == 0) {
    if (lVar7 == 0) goto LAB_06b797f8;
    *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(param_2 + 0x330);
  }
  else {
    if (lVar7 == 0) goto LAB_06b797f8;
    *(long *)(lVar7 + 0x20) = param_2;
    FUN_06bbdc90(lVar7,*(undefined8 *)(param_1 + 0x28),iVar3 + -1,0);
    FUN_06b79ca0(&local_108,param_1,param_2,*(undefined8 *)(param_1 + 0x28));
    memcpy(&local_b0,&local_108,0x50);
    FUN_06c5fa28(auStack_158,&local_b0,0);
    uVar6 = FUN_06b222dc(param_2,0);
    if ((uVar6 & 1) != 0) {
      if (*(long *)(param_2 + 0x488) == 0) goto LAB_06b797f8;
      FUN_06c865d4(*(long *)(param_2 + 0x488),&local_b0,0);
    }
    puVar1 = 
    Method_Unity_Burst_FunctionPointer<BurstLerpUtility_SingleBounceOutLerp_0000034A_PostfixBurstDelegate>_get_Value__
    ;
    if (*(int *)(*(long *)
                  Method_Unity_Burst_FunctionPointer<BurstLerpUtility_SingleBounceOutLerp_0000034A_PostfixBurstDelegate>_get_Value__
                + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_06c7f108(&local_b0,0);
    uVar6 = FUN_06b1bd40(param_2,0);
    if ((uVar6 & 1) != 0) {
      uVar9 = FUN_06b17580(param_2,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)puVar1);
      }
      uVar6 = FUN_06c7fc14(uVar9,&local_b0,0);
      if ((uVar6 & 1) == 0) {
        FUN_06b78b00(param_1,param_2,&local_b0);
      }
    }
    uVar6 = FUN_06c5ab98(&local_b0,0);
    if (((uVar6 & 1) == 0) ||
       (uVar6 = UnityEngine_UIElements_TwoPaneSplitViewResizer__get_flexedPaneMargin(param_2,0),
       (uVar6 & 1) == 0)) {
      FUN_06b25418(param_2,&local_b0,0);
    }
    else {
      uVar9 = FUN_06b17580(param_2,0);
      FUN_06b7a3f8(uVar9,param_2,uVar9,&local_b0);
      FUN_06b25418(param_2,&local_b0,0);
      FUN_06b7a4dc(param_1,param_2);
    }
    FUN_06c5fb3c(&local_b0,0);
    FUN_06b222f8(param_2,1,0);
    uVar9 = FUN_06b17580(param_2,0);
    uVar5 = FUN_04b3ff30(uVar9,*(undefined8 *)
                                Method_Unity_Burst_FunctionPointer<BurstPhysicsUtils_GetConecastParameters_00000360_PostfixBurstDelegate>_get_Value__
                        );
    *(undefined4 *)(param_2 + 0x338) = uVar5;
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_06b797f8;
    *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20) = 0;
    lVar7 = *(long *)(param_1 + 0x28);
    if (lVar7 == 0) goto LAB_06b797f8;
    iVar13 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar13) {
      FUN_0595236c(*(undefined8 *)(lVar7 + 0x10),0,iVar13,0);
    }
    if (iVar4 < 1) {
      uVar9 = FUN_06b17580(param_2,0);
      iVar4 = FUN_06c5ab40(uVar9,0);
      if (iVar4 < 1) goto LAB_06b79b28;
    }
    puVar1 = 
    Method_Unity_Burst_FunctionPointer<BurstPhysicsUtils_GetConecastOffset_00000362_PostfixBurstDelegate>_get_Value__
    ;
    lVar7 = *(long *)
             Method_Unity_Burst_FunctionPointer<BurstPhysicsUtils_GetConecastOffset_00000362_PostfixBurstDelegate>_get_Value__
    ;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar7 = *(long *)puVar1;
    }
    uVar6 = UnityEngine_UIElements_UnsignedIntegerField_UnsignedIntegerInput___ctor
                      (param_2,*(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x10),0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      local_b8 = (long *)FUN_056d2758(*(undefined8 *)
                                       Method_Unity_Burst_FunctionPointer<BurstMathUtility_Scale_0000035C_PostfixBurstDelegate>_get_Value__
                                     );
      pplStack_100 = &local_b8;
      local_108 = 0;
      if (local_b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      local_b8[7] = param_2;
      FUN_06c3cbf4(local_b8,*(undefined8 *)(param_1 + 0x48),param_2,0);
      plVar2 = local_b8;
      if (local_b8 != (long *)0x0) {
        lVar7 = *local_b8;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_070c2e88) {
              puVar10 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_06b79b0c;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar10 = (undefined8 *)FUN_031c0d08(local_b8,*(long *)PTR_DAT_070c2e88,0);
LAB_06b79b0c:
        (*(code *)*puVar10)(plVar2,puVar10[1]);
      }
    }
  }
LAB_06b79b28:
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x30), lVar7 != 0)) {
    FUN_06c24fe8(lVar7,param_2,0);
    FUN_06bac5b0(param_1,param_2,param_3,0);
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x30), lVar7 != 0)) {
      FUN_06c25160(lVar7,0);
      if (*(long *)(param_1 + 0x38) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18) = uVar12;
        iVar4 = FUN_06b79178();
        if (iVar3 < iVar4) {
          lVar7 = *(long *)(param_1 + 0x38);
          if (lVar7 == 0) goto LAB_06b797f8;
          iVar4 = FUN_06b79178(lVar7);
          FUN_06b79398(lVar7,iVar3,iVar4 - iVar3);
        }
        return;
      }
    }
  }
LAB_06b797f8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


