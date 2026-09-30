/*
FUNCTION_NAME: PlayFab.Internal.PlayFabWebRequest.<>c__DisplayClass21_0$$<SimpleGetCall>b__0
ENTRY_POINT: 05282c60
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void PlayFab_Internal_PlayFabWebRequest_<>c__DisplayClass21_0__<SimpleGetCall>b__0(void)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 in_stack_00000008;
  
  FUN_02d4dc40(PTR_DAT_0664b728);
  FUN_02d4dc40(PTR_DAT_066462d0);
  FUN_02d4dc40(System_Collections_Generic_List<ButtonControl>_TypeInfo);
  FUN_02d4dc40(System_Collections_Generic_List<ByRefUpdater>_TypeInfo);
  FUN_02d4dc40(System_Collections_Generic_List<byte>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x4f3) = 1;
  puVar1 = PTR_DAT_066462d0;
  if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_05283034;
  if (*(char *)(*(long *)(unaff_x19 + 0x28) + 0x68) != '\0') {
    FUN_05283038();
    uVar7 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar2 = FUN_05ee2f7c(uVar7,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_05283034;
      uVar2 = FUN_05edd428(*(long *)(unaff_x19 + 0x38),0);
      if ((uVar2 & 1) != 0) goto LAB_05282eac;
      plVar3 = (long *)FUN_0526dae0();
      lVar8 = *(long *)PTR_DAT_06648110;
      lVar5 = *(long *)(lVar8 + 0x38);
      if (lVar5 == 0) {
        FUN_02d87268(lVar8);
        lVar5 = *(long *)(lVar8 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02d8720c();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02d8720c();
      }
      if (plVar3 == (long *)0x0) goto LAB_05283034;
      lVar8 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar5 = *(long *)PTR_DAT_0664b728;
      uVar9 = *(undefined8 *)System_Collections_Generic_List<byte>_TypeInfo;
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar5) goto LAB_05282e84;
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
    }
    else {
      plVar3 = (long *)FUN_0526dae0();
      lVar8 = *(long *)PTR_DAT_06648110;
      lVar5 = *(long *)(lVar8 + 0x38);
      if (lVar5 == 0) {
        FUN_02d87268(lVar8);
        lVar5 = *(long *)(lVar8 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02d8720c();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02d8720c();
      }
      if (plVar3 == (long *)0x0) goto LAB_05283034;
      lVar8 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar5 = *(long *)PTR_DAT_0664b728;
      uVar9 = *(undefined8 *)System_Collections_Generic_List<ByRefUpdater>_TypeInfo;
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar5) goto LAB_05282e84;
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
    }
    puVar4 = (undefined8 *)FUN_02d87540(plVar3,lVar5,1);
    goto LAB_05282e94;
  }
  goto LAB_05282eac;
LAB_05282e84:
  puVar4 = (undefined8 *)(lVar8 + (long)(*piVar6 + 1) * 0x10 + 0x138);
LAB_05282e94:
  (*(code *)*puVar4)(plVar3,2,uVar9,uVar7,puVar4[1]);
LAB_05282eac:
  FUN_052833d0();
  uVar7 = *(undefined8 *)(unaff_x19 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  uVar2 = FUN_05ee2f7c(uVar7,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      in_stack_00000008._4_4_ = *(undefined4 *)(*(long *)(unaff_x19 + 0x28) + 0x94);
      lVar5 = *(long *)(unaff_x19 + 0x30);
      uVar9 = *(undefined8 *)(unaff_x19 + 0x40);
      uVar7 = thunk_FUN_02d8a270(*(undefined8 *)(PTR_DAT_066462a0 + 0x48),(long)&stack0x00000008 + 4
                                );
      if (lVar5 != 0) {
        FUN_05278870(lVar5,uVar9,uVar7,0);
        return;
      }
    }
  }
  else {
    plVar3 = (long *)FUN_0526dae0();
    lVar8 = *(long *)PTR_DAT_06648110;
    lVar5 = *(long *)(lVar8 + 0x38);
    if (lVar5 == 0) {
      FUN_02d87268(lVar8);
      lVar5 = *(long *)(lVar8 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d8720c();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d8720c();
    }
    if (plVar3 != (long *)0x0) {
      lVar8 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      uVar9 = *(undefined8 *)System_Collections_Generic_List<ButtonControl>_TypeInfo;
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0664b728) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_0528300c;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_02d87540(plVar3,*(long *)PTR_DAT_0664b728,1);
LAB_0528300c:
                    /* WARNING: Could not recover jumptable at 0x05283030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar3,2,uVar9,uVar7,puVar4[1]);
      return;
    }
  }
LAB_05283034:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


