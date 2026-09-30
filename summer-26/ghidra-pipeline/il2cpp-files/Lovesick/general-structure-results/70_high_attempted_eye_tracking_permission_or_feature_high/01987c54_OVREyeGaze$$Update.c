/*
FUNCTION_NAME: OVREyeGaze$$Update
ENTRY_POINT: 01987c54
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__Update(code *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *plVar8;
  long *unaff_x21;
  uint unaff_w22;
  
  uVar3 = (*param_1)();
  if (unaff_w22 == (uVar3 & 1)) {
    return;
  }
  FUN_0268f270();
  plVar8 = *(long **)(unaff_x19 + 0x20);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01987cd8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_00d59724(plVar8,*unaff_x21,0);
LAB_01987cd8:
    bVar2 = (*(code *)*puVar4)(plVar8,puVar4[1]);
    *(byte *)(unaff_x19 + 0x5c) = bVar2 & 1;
    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
       (lVar5 = FUN_01991930(*(long *)(unaff_x19 + 0x30),0), lVar5 != 0)) {
      thunk_FUN_0267c044(*(undefined4 *)(unaff_x19 + 0x3c),*(undefined4 *)(unaff_x19 + 0x40),
                         *(undefined4 *)(unaff_x19 + 0x44),*(undefined4 *)(unaff_x19 + 0x48),lVar5,
                         *(undefined4 *)(unaff_x19 + 0x58),0);
      plVar8 = *(long **)(unaff_x19 + 0x20);
      if (plVar8 != (long *)0x0) {
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x21) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_01987d6c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_00d59724(plVar8,*unaff_x21,0);
LAB_01987d6c:
        uVar6 = (*(code *)*puVar4)(plVar8,puVar4[1]);
        uVar3 = 0;
        uVar1 = 0x3f800000;
        if ((uVar6 & 1) == 0) {
          uVar1 = 0;
        }
        do {
          if ((*(uint *)(unaff_x19 + 0x28) & 1 << (ulong)(uVar3 & 0x1f)) != 0) {
            FUN_01987df0(uVar1);
            FUN_0268ee74();
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 != 5);
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          FUN_019a1c58(*(long *)(unaff_x19 + 0x30),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


