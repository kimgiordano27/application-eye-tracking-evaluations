/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_GetNodePositionValid
ENTRY_POINT: 0516a318
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_38_0__ovrp_GetNodePositionValid(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_02d6084c(PTR_DAT_06782540);
  FUN_02d6084c(PTR_DAT_06782480);
  FUN_02d6084c(PTR_DAT_06782550);
  FUN_02d6084c(PTR_DAT_0676bc98);
  FUN_02d6084c(PTR_DAT_06782760);
  FUN_02d6084c(PTR_DAT_06771b30);
  FUN_02d6084c(PTR_DAT_06782768);
  *(undefined1 *)(unaff_x21 + 0xe74) = 1;
  puVar4 = PTR_DAT_06782640;
  if (unaff_x20 != (long *)0x0) {
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06782640) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
          goto LAB_0516a3f4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_0516a3f4:
    (*(code *)*puVar5)();
    puVar3 = PTR_DAT_06782540;
    puVar2 = PTR_DAT_06782480;
    if (unaff_x19 != (long *)0x0) {
      lVar6 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06782540) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0516a470;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_0516a470:
      (*(code *)*puVar5)();
      lVar6 = *unaff_x19;
      bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
      if ((bVar1 <= *(byte *)(lVar6 + 0x130)) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_0516a4fc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_0516a4fc:
        lVar6 = (*(code *)*puVar5)();
        if (lVar6 == 0) {
          lVar6 = *unaff_x20;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar4) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
                goto LAB_0516a594;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_0516a594:
          (*(code *)*puVar5)();
          lVar6 = *unaff_x19;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0516a5fc;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_0516a5fc:
                    /* WARNING: Could not recover jumptable at 0x0516a61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar5)();
          return;
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


