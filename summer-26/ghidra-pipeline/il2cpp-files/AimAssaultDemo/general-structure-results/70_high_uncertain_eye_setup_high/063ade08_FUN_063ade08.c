/*
FUNCTION_NAME: FUN_063ade08
ENTRY_POINT: 063ade08
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_063ade08(undefined8 param_1,long *param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if ((DAT_0825c6b2 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db6e20);
    FUN_0373b518(PTR_DAT_07db6d50);
    FUN_0373b518(PTR_DAT_07db6c90);
    FUN_0373b518(PTR_DAT_07db6d60);
    FUN_0373b518(PTR_DAT_07d9b220);
    FUN_0373b518(PTR_DAT_07db6f50);
    FUN_0373b518(PTR_DAT_07d91d88);
    FUN_0373b518(PTR_DAT_07db6f58);
    DAT_0825c6b2 = 1;
  }
  puVar5 = PTR_DAT_07db6e20;
  puVar4 = PTR_DAT_07db6d60;
  if (param_3 != (long *)0x0) {
    lVar8 = *param_3;
    uVar13 = *(undefined8 *)PTR_DAT_07db6f50;
    uVar11 = *(undefined8 *)PTR_DAT_07db6d60;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    uVar12 = *(undefined8 *)PTR_DAT_07d91d88;
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db6e20) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
          goto LAB_063adf18;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(param_3,*(long *)PTR_DAT_07db6e20,0xb);
LAB_063adf18:
    uVar11 = (*(code *)*puVar6)(param_3,uVar13,uVar11,uVar12,puVar6[1]);
    puVar3 = PTR_DAT_07db6d50;
    puVar2 = PTR_DAT_07db6c90;
    if (param_2 != (long *)0x0) {
      lVar8 = *param_2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db6d50) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_063adf94;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_0377596c(param_2,*(long *)PTR_DAT_07db6d50,0);
LAB_063adf94:
      (*(code *)*puVar6)(param_2,uVar11,puVar6[1]);
      lVar8 = *param_2;
      bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
      if ((bVar1 <= *(byte *)(lVar8 + 0x130)) &&
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
        lVar7 = *(long *)puVar3;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        uVar11 = *(undefined8 *)puVar4;
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_063ae020;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_0377596c(param_2,lVar7,1);
LAB_063ae020:
        lVar8 = (*(code *)*puVar6)(param_2,uVar11,puVar6[1]);
        if (lVar8 == 0) {
          lVar8 = *param_3;
          uVar11 = *(undefined8 *)PTR_DAT_07db6f58;
          uVar13 = *(undefined8 *)puVar4;
          uVar12 = *(undefined8 *)PTR_DAT_07d9b220;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
                puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
                goto FUN_063ae0b8;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_0377596c(param_3,*(long *)puVar5,0xb);
FUN_063ae0b8:
          uVar11 = (*(code *)*puVar6)(param_3,uVar11,uVar12,uVar13,puVar6[1]);
          lVar7 = *param_2;
          lVar8 = *(long *)puVar3;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar8) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto OVRPlugin_UnityOpenXR___ctor;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar6 = (undefined8 *)FUN_0377596c(param_2,lVar8,0);
OVRPlugin_UnityOpenXR___ctor:
                    /* WARNING: Could not recover jumptable at 0x063ae140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar6)(param_2,uVar11,puVar6[1]);
          return;
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


