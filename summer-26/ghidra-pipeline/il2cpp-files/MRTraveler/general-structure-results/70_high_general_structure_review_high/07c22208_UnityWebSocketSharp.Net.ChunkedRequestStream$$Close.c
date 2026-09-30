/*
FUNCTION_NAME: UnityWebSocketSharp.Net.ChunkedRequestStream$$Close
ENTRY_POINT: 07c22208
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void UnityWebSocketSharp_Net_ChunkedRequestStream__Close(long *param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar11;
  
  uVar11 = *(undefined8 *)PTR_DAT_08ee51e0;
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_0710fcf0(uVar11,0);
  lVar8 = *unaff_x23;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08ee4ea8) {
        puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_07c22294;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_03cf1348();
LAB_07c22294:
  lVar8 = (*(code *)*puVar3)();
  puVar2 = PTR_DAT_08ee51e8;
  if (lVar8 == 0) {
    bVar1 = false;
    plVar4 = (long *)0x0;
  }
  else {
    uVar11 = *(undefined8 *)PTR_DAT_08ee51e8;
    plVar4 = (long *)thunk_FUN_03cf5138(lVar8,uVar11);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fecc(lVar8,uVar11);
    }
    FUN_07c21af4();
    lVar8 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto LAB_07c2233c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)puVar2,1);
LAB_07c2233c:
    (*(code *)*puVar3)(plVar4);
    bVar1 = true;
  }
  lVar8 = (**(code **)(*unaff_x22 + 0x1f8))();
  if (lVar8 == 0) {
    lVar5 = 0;
  }
  else {
    uVar11 = *(undefined8 *)PTR_DAT_08ee51d8;
    lVar5 = thunk_FUN_03cf5138(lVar8,uVar11);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fecc(lVar8,uVar11);
    }
  }
  uVar11 = FUN_07c20ec4();
  uVar9 = FUN_0702dc84(uVar11,0,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  lVar8 = FUN_07c20ec4();
  lVar6 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,2);
  if (lVar6 == 0) {
LAB_07c224f0:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if ((unaff_x21 != 0) && (lVar7 = thunk_FUN_03cf5138(), lVar7 == 0)) {
LAB_07c224f8:
    uVar11 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
    FUN_03c8f9fc(uVar11,0);
  }
  if (*(int *)(lVar6 + 0x18) != 0) {
    *(long *)(lVar6 + 0x20) = unaff_x21;
    thunk_FUN_03d233cc();
    if ((unaff_x19 != 0) && (lVar7 = thunk_FUN_03cf5138(), lVar7 == 0)) goto LAB_07c224f8;
    if (1 < *(uint *)(lVar6 + 0x18)) {
      *(long *)(lVar6 + 0x28) = unaff_x19;
      thunk_FUN_03d233cc();
      if (lVar8 != 0) {
        FUN_0702dc3c(lVar8,lVar5,lVar6,0);
        if (!bVar1) {
          return;
        }
        if (plVar4 != (long *)0x0) {
          lVar8 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08ee51e8) {
                puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_07c224bc;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_03cf1348(plVar4,*(long *)PTR_DAT_08ee51e8,0);
LAB_07c224bc:
                    /* WARNING: Could not recover jumptable at 0x07c224ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar3)(plVar4);
          return;
        }
      }
      goto LAB_07c224f0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


