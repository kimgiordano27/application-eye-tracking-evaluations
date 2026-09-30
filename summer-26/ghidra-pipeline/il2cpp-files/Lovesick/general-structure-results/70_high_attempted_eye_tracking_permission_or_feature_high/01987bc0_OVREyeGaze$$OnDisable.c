/*
FUNCTION_NAME: OVREyeGaze$$OnDisable
ENTRY_POINT: 01987bc0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnDisable(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  uint uVar11;
  long *plVar12;
  
  if ((DAT_0377a403 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f1800);
    DAT_0377a403 = 1;
  }
  puVar2 = PTR_DAT_033f1800;
  plVar12 = *(long **)(param_1 + 0x20);
  if (plVar12 != (long *)0x0) {
    lVar7 = *plVar12;
    bVar4 = *(byte *)(param_1 + 0x5c);
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_033f1800) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_01987c4c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724(plVar12,*(long *)PTR_DAT_033f1800,0);
LAB_01987c4c:
    bVar3 = (*(code *)*puVar5)(plVar12,puVar5[1]);
    if (bVar4 == (bVar3 & 1)) {
      return;
    }
    FUN_0268f270(param_1,0);
    plVar12 = *(long **)(param_1 + 0x20);
    if (plVar12 != (long *)0x0) {
      lVar8 = *plVar12;
      lVar7 = *(long *)puVar2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_01987cd8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724(plVar12,lVar7,0);
LAB_01987cd8:
      bVar4 = (*(code *)*puVar5)(plVar12,puVar5[1]);
      *(byte *)(param_1 + 0x5c) = bVar4 & 1;
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar7 = FUN_01991930(*(long *)(param_1 + 0x30),0), lVar7 != 0)) {
        thunk_FUN_0267c044(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                           *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48),lVar7,
                           *(undefined4 *)(param_1 + 0x58),0);
        plVar12 = *(long **)(param_1 + 0x20);
        if (plVar12 != (long *)0x0) {
          lVar8 = *plVar12;
          lVar7 = *(long *)puVar2;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar7) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_01987d6c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_00d59724(plVar12,lVar7,0);
LAB_01987d6c:
          uVar9 = (*(code *)*puVar5)(plVar12,puVar5[1]);
          uVar11 = 0;
          uVar1 = 0x3f800000;
          if ((uVar9 & 1) == 0) {
            uVar1 = 0;
          }
          do {
            if ((*(uint *)(param_1 + 0x28) & 1 << (ulong)(uVar11 & 0x1f)) != 0) {
              uVar6 = FUN_01987df0(uVar1,param_1,uVar11);
              FUN_0268ee74(param_1,uVar6,0);
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 != 5);
          if (*(long *)(param_1 + 0x30) != 0) {
            FUN_019a1c58(*(long *)(param_1 + 0x30),0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


