/*
FUNCTION_NAME: OVRPlugin$$GetEyeTextureSize
ENTRY_POINT: 0566aa28
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0566ac74) */

void OVRPlugin__GetEyeTextureSize(ulong param_1)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *in_stack_00000018;
  
  uVar9 = 0;
  param_1 = param_1 & 0xffffffff;
  bVar2 = true;
  do {
    if (param_1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar10 = *(long *)(unaff_x22 + uVar9 * 8 + 0x20);
    if ((lVar10 != 0) && (uVar1 = *(uint *)(lVar10 + 0x18), 0 < (int)uVar1)) {
      lVar11 = 0;
      do {
        if (uVar1 <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar6 = *(long *)(lVar10 + 0x20 + lVar11 * 8);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar6 = *(long *)(lVar6 + 0x28);
        if ((lVar6 != 0) && (uVar3 = FUN_0634b3c4(lVar6,0), (uVar3 & 1) != 0)) {
          if (unaff_x20 == 0) {
LAB_0566ac68:
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar7 = *(long *)(unaff_x20 + 0x10);
          *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_0566ac68;
          uVar1 = *(uint *)(unaff_x20 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
            plVar4 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *plVar4 = lVar6;
            LeanTween__value(plVar4,lVar6);
          }
          else {
            FUN_040101ec();
          }
          if (bVar2) {
            bVar2 = *(char *)(lVar6 + 0x71) != '\0';
          }
          else {
            bVar2 = false;
          }
        }
        uVar1 = *(uint *)(lVar10 + 0x18);
        lVar11 = lVar11 + 1;
      } while ((int)lVar11 < (int)uVar1);
    }
    param_1 = (ulong)*(uint *)(unaff_x22 + 0x18);
    uVar9 = uVar9 + 1;
  } while ((long)uVar9 < (long)(int)*(uint *)(unaff_x22 + 0x18));
  plVar4 = *(long **)(unaff_x19 + 0x150);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  (**(code **)(*plVar4 + 0x188))(plVar4,bVar2,*(undefined8 *)(*plVar4 + 400));
  plVar4 = *(long **)(unaff_x19 + 0x198);
  if (plVar4 != (long *)0x0) {
    lVar10 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar9 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)System_Collections_Generic_List<ERSideWalkInstance>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_0566aba8;
        }
        uVar9 = uVar9 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_02dd004c(plVar4,*(long *)
                                  System_Collections_Generic_List<ERSideWalkInstance>_TypeInfo,3);
LAB_0566aba8:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  FUN_0566cac0();
  FUN_0566c810();
  if (in_stack_00000018 != (long *)0x0) {
    lVar10 = *in_stack_00000018;
    uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar9 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0566ac2c;
        }
        uVar9 = uVar9 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02dd004c(in_stack_00000018,*(long *)PTR_DAT_069fbff0,0);
LAB_0566ac2c:
    (*(code *)*puVar5)(in_stack_00000018,puVar5[1]);
  }
  return;
}


