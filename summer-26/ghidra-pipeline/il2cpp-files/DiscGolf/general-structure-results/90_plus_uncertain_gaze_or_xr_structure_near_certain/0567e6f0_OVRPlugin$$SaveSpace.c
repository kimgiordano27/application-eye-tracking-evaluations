/*
FUNCTION_NAME: OVRPlugin$$SaveSpace
ENTRY_POINT: 0567e6f0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 102
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0567e870) */
/* WARNING: Removing unreachable block (ram,0x0567e98c) */

void OVRPlugin__SaveSpace(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  uint uVar11;
  long unaff_x20;
  long *unaff_x22;
  long lVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  
  thunk_FUN_02df485c();
  puVar1 = System_Collections_Generic_List<TreeInstance>_TypeInfo;
  in_stack_00000048 = FUN_0564de84(0x16,0);
  in_stack_00000028 = &stack0x00000048;
  plVar10 = (long *)(unaff_x20 + 0x18);
  lVar12 = *plVar10;
  in_stack_00000020 = 0;
  if (lVar12 != 0) {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    iVar3 = FUN_0400fd54(*(long *)(unaff_x20 + 0x10),*(undefined8 *)puVar1);
    if (iVar3 <= *(int *)(lVar12 + 0x18)) goto LAB_0567e770;
  }
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar4 = FUN_0400fd54(*(long *)(unaff_x20 + 0x10),*(undefined8 *)puVar1);
  lVar12 = FUN_02d966a4(*(undefined8 *)System_Collections_Generic_List<TriangleER>_TypeInfo,uVar4);
  *plVar10 = lVar12;
  LeanTween__value(plVar10);
LAB_0567e770:
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_04010c90(&stack0x00000008,*(long *)(unaff_x20 + 0x10),
               *(undefined8 *)System_Collections_Generic_List<TreeFunctionAsset>_TypeInfo);
  puVar2 = System_Collections_Generic_List<TrailRenderer>_TypeInfo;
  puVar1 = System_Collections_Generic_List<TokenRequest>_TypeInfo;
  uVar11 = 0;
  in_stack_00000038 = in_stack_00000010;
  in_stack_00000030 = in_stack_00000008;
  in_stack_00000040 = in_stack_00000018;
  in_stack_00000010 = &stack0x00000030;
  in_stack_00000008 = 0;
  while (uVar5 = FUN_05156804(&stack0x00000030,*(undefined8 *)puVar2), lVar12 = in_stack_00000040,
        (uVar5 & 1) != 0) {
    if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(in_stack_00000040 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar5 = FUN_0635ff10(*(long *)(in_stack_00000040 + 0x28),0);
    if ((uVar5 & 1) != 0) {
      FUN_0567e45c(lVar12);
      lVar8 = *plVar10;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar8 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      uVar13 = *(undefined8 *)(lVar12 + 0x38);
      uVar6 = *(undefined8 *)(lVar12 + 0x30);
      lVar8 = lVar8 + (long)(int)uVar11 * 0x14;
      *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)(lVar12 + 0x40);
      *(undefined8 *)(lVar8 + 0x28) = uVar13;
      *(undefined8 *)(lVar8 + 0x20) = uVar6;
      lVar8 = *plVar10;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar4 = FUN_0567df40(lVar12);
      if (*(uint *)(lVar8 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar8 = lVar8 + (long)(int)uVar11 * 0x14;
      uVar11 = uVar11 + 1;
      *(undefined4 *)(lVar8 + 0x24) = uVar4;
      *(undefined4 *)(lVar8 + 0x28) = param_2;
      *(undefined4 *)(lVar8 + 0x2c) = param_3;
    }
  }
  FUN_05156800(&stack0x00000030,*(undefined8 *)puVar1);
  if (0 < (int)uVar11) {
    lVar12 = *plVar10;
    if (lVar12 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      if (*(int *)(lVar12 + 0x18) != 0) {
        lVar8 = lVar12 + 0x20;
      }
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar6 = FUN_05646ae8(lVar8,uVar11,0);
    FUN_05696b6c(uVar6,*(undefined8 *)System_Collections_Generic_List<KeyValuePair>_TypeInfo,
                 *(undefined8 *)System_Collections_Generic_List<TrialOffer>_TypeInfo,
                 *(undefined8 *)System_Collections_Generic_IEnumerable<ServicePoint>_TypeInfo,0,0);
  }
  plVar10 = (long *)*in_stack_00000028;
  if (plVar10 != (long *)0x0) {
    lVar12 = *plVar10;
    uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0567e94c;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)PTR_DAT_069fbff0,0);
LAB_0567e94c:
    (*(code *)*puVar7)(plVar10,puVar7[1]);
  }
  if (in_stack_00000020 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


