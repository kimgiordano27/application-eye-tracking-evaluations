/*
FUNCTION_NAME: OVRPlugin$$GetControllerHapticsDesc
ENTRY_POINT: 0909dadc
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__GetControllerHapticsDesc(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_0b33024b & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac75968);
    FUN_04947ee4(PTR_DAT_0ac75948);
    FUN_04947ee4(PTR_DAT_0ac759b0);
    DAT_0b33024b = 1;
  }
  puVar1 = PTR_DAT_0ac75948;
  if (param_1 != (long *)0x0) {
    lVar9 = *param_1;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac75948) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0909db78;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_04980e68(param_1,*(long *)PTR_DAT_0ac75948,0);
LAB_0909db78:
    plVar8 = (long *)(*(code *)*puVar7)(param_1,puVar7[1]);
    if (plVar8 != (long *)0x0) {
      lVar9 = *plVar8;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac759b0) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0909dbe0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac759b0,0);
LAB_0909dbe0:
      uVar4 = (*(code *)*puVar7)(plVar8,puVar7[1]);
      puVar2 = PTR_DAT_0ac75968;
      if (param_2 != (long *)0x0) {
        lVar9 = *param_2;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0ac75968) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
              goto LAB_0909dc4c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_04980e68(param_2,*(long *)PTR_DAT_0ac75968,3);
LAB_0909dc4c:
        uVar10 = (*(code *)*puVar7)(param_2,uVar4,puVar7[1]);
        if ((uVar10 & 1) == 0) {
          bVar3 = false;
        }
        else {
          lVar9 = *param_1;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
                goto LAB_0909dcb8;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_04980e68(param_1,*(long *)puVar1,5);
LAB_0909dcb8:
          uVar5 = (*(code *)*puVar7)(param_1,puVar7[1]);
          lVar9 = *param_2;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
                goto LAB_0909dd18;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_04980e68(param_2,*(long *)puVar2,7);
LAB_0909dd18:
          uVar6 = (*(code *)*puVar7)(param_2,puVar7[1]);
          bVar3 = (uVar6 & uVar5) != 0;
        }
        return bVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


