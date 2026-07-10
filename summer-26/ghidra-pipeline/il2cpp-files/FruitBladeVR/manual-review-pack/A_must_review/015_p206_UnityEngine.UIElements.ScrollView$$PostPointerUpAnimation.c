/*
FUNCTION_NAME: UnityEngine.UIElements.ScrollView$$PostPointerUpAnimation
ENTRY_POINT: 0399cba0
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_UIElements_ScrollView__PostPointerUpAnimation(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  
  if ((DAT_03efcd98 & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_UIElements_IVisualElementScheduledItem_TypeInfo_03cb8918);
    DAT_03efcd98 = 1;
  }
  fVar6 = (float)UnityEngine_Time__get_unscaledTime(0);
  *(float *)(param_1 + 0x530) = fVar6 - *(float *)(param_1 + 0x528);
  uVar7 = UnityEngine_Time__get_unscaledTime(0);
  *(undefined4 *)(param_1 + 0x528) = uVar7;
  fVar6 = (float)UnityEngine_Time__get_unscaledTime(0);
  *(float *)(param_1 + 0x534) = fVar6 - *(float *)(param_1 + 0x52c);
  uVar7 = UnityEngine_Time__get_unscaledTime(0);
  *(undefined4 *)(param_1 + 0x52c) = uVar7;
  UnityEngine_UIElements_ScrollView__ApplyScrollInertia(param_1);
  UnityEngine_UIElements_ScrollView__SpringBack(param_1);
  uVar11 = *(undefined8 *)(param_1 + 0x560);
  if (DAT_03ef1437 == '\0') {
    FUN_01c5c92c(PTR_UnityEngine_Vector2_TypeInfo_03cb6560);
    DAT_03ef1437 = '\x01';
  }
  fVar6 = (float)**(undefined8 **)(*(long *)PTR_UnityEngine_Vector2_TypeInfo_03cb6560 + 0xb8);
  fVar9 = (float)uVar11 - fVar6;
  fVar8 = (float)((ulong)**(undefined8 **)
                           (*(long *)PTR_UnityEngine_Vector2_TypeInfo_03cb6560 + 0xb8) >> 0x20);
  fVar10 = (float)((ulong)uVar11 >> 0x20) - fVar8;
  if ((fVar9 * fVar9 + fVar10 * fVar10 < DAT_00b45dd0) &&
     (fVar6 = (float)*(undefined8 *)(param_1 + 0x558) - fVar6,
     fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x558) >> 0x20) - fVar8,
     fVar6 * fVar6 + fVar8 * fVar8 < DAT_00b45dd0)) {
    plVar5 = *(long **)(param_1 + 0x598);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            *(long *)PTR_UnityEngine_UIElements_IVisualElementScheduledItem_TypeInfo_03cb8918) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
          goto LAB_0399ccf0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)
             FUN_01c8cb54(plVar5,*(long *)
                                  PTR_UnityEngine_UIElements_IVisualElementScheduledItem_TypeInfo_03cb8918
                          ,2);
LAB_0399ccf0:
    (*(code *)*puVar1)(plVar5,puVar1[1]);
    *(undefined8 *)(param_1 + 0x528) = 0;
    *(undefined8 *)(param_1 + 0x530) = 0;
  }
  return;
}


