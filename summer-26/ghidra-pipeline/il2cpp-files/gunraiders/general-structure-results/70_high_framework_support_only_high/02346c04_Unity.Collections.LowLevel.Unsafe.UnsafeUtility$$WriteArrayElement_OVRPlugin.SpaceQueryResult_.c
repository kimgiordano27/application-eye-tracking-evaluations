/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$WriteArrayElement<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 02346c04
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_possible_biometrics_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02346fa8) */

ulong Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_SpaceQueryResult>
                (void)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x21;
  int iVar11;
  
  if (unaff_x21 == (long *)0x0) {
    uVar5 = thunk_FUN_01c273e8(Unity_Services_Authentication_Internal_IPlayerId_TypeInfo);
    FUN_035dbefc(uVar5,0);
  }
  else {
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      FUN_01c72394(lVar6);
    }
    plVar3 = (long *)thunk_FUN_01c495e4();
    if (plVar3 == (long *)0x0) {
      lVar6 = **(long **)(unaff_x19 + 0x38);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01c72394(lVar6);
      }
      lVar7 = *unaff_x21;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto FUN_02346d90;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01c72498();
FUN_02346d90:
      plVar3 = (long *)(*(code *)*puVar4)();
      puVar1 = PTR_DAT_04230960;
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      lVar6 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04230960) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_02346df8;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01c72498(plVar3,*(long *)PTR_DAT_04230960,0);
LAB_02346df8:
      uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar8 & 1) == 0) {
        uVar8 = 0;
        iVar11 = 6;
        iVar2 = 6;
      }
      else {
        do {
          lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x38);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01c72394(lVar6);
          }
          lVar7 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar6) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_02346e6c;
              }
              uVar8 = uVar8 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_01c72498(plVar3,lVar6,0);
LAB_02346e6c:
          uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          lVar6 = *plVar3;
          uVar8 = uVar8 & 0xffffffff;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_02346ec8;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_01c72498(plVar3,*(long *)puVar1,0);
LAB_02346ec8:
          uVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        } while ((uVar9 & 1) != 0);
        iVar11 = 9;
        iVar2 = 9;
      }
      if (plVar3 != (long *)0x0) {
        lVar6 = *plVar3;
        uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0422fce8) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_02346f4c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_01c72498(plVar3,*(long *)PTR_DAT_0422fce8,0);
LAB_02346f4c:
        (*(code *)*puVar4)(plVar3,puVar4[1]);
        iVar2 = iVar11;
      }
      if ((iVar2 != 6) && (iVar2 != 0)) {
        return uVar8;
      }
    }
    else {
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01c72394(lVar6);
      }
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto FUN_02346cf0;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_01c72498(plVar3,lVar6,0);
FUN_02346cf0:
      iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if (0 < iVar2) {
        lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01c72394(lVar6);
        }
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar6) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto FUN_02346d68;
            }
            uVar8 = uVar8 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_01c72498(plVar3,lVar6,0);
FUN_02346d68:
                    /* WARNING: Could not recover jumptable at 0x02346d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar8 = (*(code *)*puVar4)(plVar3,iVar2 + -1,puVar4[1]);
        return uVar8;
      }
    }
    FUN_035dc08c(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c();
}


