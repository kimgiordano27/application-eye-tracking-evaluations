/*
FUNCTION_NAME: FUN_06c2ef64
ENTRY_POINT: 06c2ef64
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_06c2ef64(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_0756088d & 1) == 0) {
    FUN_03188a78(Method_System_Collections_Generic_List_Enumerator<ButtonControl>_MoveNext__);
    FUN_03188a78(PTR_DAT_07123a60);
    FUN_03188a78(PTR_DAT_070f3648);
    FUN_03188a78(Method_System_Collections_Generic_List<ICoroutine>_get_Item__);
    FUN_03188a78(PTR_DAT_070c2428);
    FUN_03188a78(Method_System_Collections_Generic_List<IBaseUxmlObjectFactory>_Add__);
    DAT_0756088d = 1;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lVar3 = FUN_06c2ec2c(param_2,param_3,param_4,param_5);
  lVar4 = FUN_06c2e4e8(param_5);
  if (lVar3 == 0) {
    if (lVar4 == 0) goto LAB_06c2f2d4;
    uVar5 = FUN_06bd3430(lVar4,0);
    uVar6 = FUN_03a69cf8(uVar5,*(undefined8 *)
                                Method_System_Collections_Generic_List_Enumerator<ButtonControl>_MoveNext__
                        );
    if ((uVar6 & 1) != 0) goto LAB_06c2f098;
    lVar8 = *(long *)PTR_DAT_070f3648;
    lVar4 = *(long *)(lVar8 + 0x38);
    if (lVar4 == 0) {
      FUN_031c0a30(lVar8);
      lVar4 = *(long *)(lVar8 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_031c09d4();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar4 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_031c09d4();
    }
    lVar4 = **(long **)(lVar4 + 0xb8);
  }
  else {
    if (lVar4 == 0) goto LAB_06c2f2d4;
    iVar2 = FUN_06bd46ec(lVar4,0);
    if (iVar2 == 0) {
      lVar4 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070c2428,1);
      if (lVar4 == 0) goto LAB_06c2f2d4;
      if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(lVar3 + 0x20);
    }
    else {
      lVar4 = FUN_06c2e4e8(param_5);
      if (lVar4 == 0) goto LAB_06c2f2d4;
      uVar5 = FUN_06bd4a0c(lVar4,0);
      uVar6 = FUN_03a73854(uVar5,*(undefined4 *)(lVar3 + 0x20),*(undefined8 *)PTR_DAT_07123a60);
      if ((uVar6 & 1) == 0) {
        lVar4 = FUN_06c2e4e8(param_5);
        if (lVar4 == 0) goto LAB_06c2f2d4;
        NewAnalyticsManager__SendUpdateSessionStarted(lVar4,*(undefined4 *)(lVar3 + 0x20),0);
      }
LAB_06c2f098:
      lVar4 = FUN_06c2e4e8(param_5);
      if (lVar4 == 0) goto LAB_06c2f2d4;
      lVar4 = FUN_06bd3430(lVar4,0);
    }
  }
  puVar1 = Method_System_Collections_Generic_List<ICoroutine>_get_Item__;
  plVar10 = *(long **)(param_5 + 0x78);
  if (plVar10 != (long *)0x0) {
    lVar8 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_System_Collections_Generic_List<ICoroutine>_get_Item__) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_06c2f1a4;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_031c0d08(plVar10,*(long *)
                                   Method_System_Collections_Generic_List<ICoroutine>_get_Item__,1);
LAB_06c2f1a4:
    (*(code *)*puVar7)(&local_b8,plVar10,lVar4,0,puVar7[1]);
    uStack_88 = uStack_b0;
    local_90 = local_b8;
    uStack_78 = uStack_a0;
    uStack_80 = local_a8;
    local_70 = local_98;
    lVar4 = FUN_06c2e4e8(param_5);
    plVar10 = *(long **)(param_5 + 0x78);
    if (plVar10 != (long *)0x0) {
      lVar8 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 6) * 0x10 + 0x138);
            goto LAB_06c2f234;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_031c0d08(plVar10,*(long *)puVar1,6);
LAB_06c2f234:
      uVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
      puVar1 = Method_System_Collections_Generic_List<IBaseUxmlObjectFactory>_Add__;
      if (lVar4 != 0) {
        uStack_108 = uStack_88;
        local_110 = local_90;
        local_f0 = local_70;
        uStack_f8 = uStack_78;
        local_100 = uStack_80;
        FUN_06bd440c(&local_e0,lVar4,lVar3,uVar5,&local_110,0);
        uStack_88 = uStack_d8;
        local_90 = local_e0;
        uStack_78 = uStack_c8;
        uStack_80 = uStack_d0;
        local_70 = local_c0;
        uVar5 = FUN_06c2e4e8(param_5);
        FUN_06c2e458(&local_90,*(undefined8 *)puVar1,uVar5);
        param_1[4] = local_70;
        param_1[1] = uStack_88;
        *param_1 = local_90;
        param_1[3] = uStack_78;
        param_1[2] = uStack_80;
        return;
      }
    }
  }
LAB_06c2f2d4:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


