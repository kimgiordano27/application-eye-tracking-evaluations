/*
FUNCTION_NAME: FUN_03e3ef24
ENTRY_POINT: 03e3ef24
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_6;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_03e3ef24(long param_1,byte param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_0454294c & 1) == 0) {
    FUN_01c5d288(OVRExternalComposition_TypeInfo);
    FUN_01c5d288(OVREyeGaze_TypeInfo);
    FUN_01c5d288(StringLiteral_10073);
    FUN_01c5d288(StringLiteral_10074);
    FUN_01c5d288(StringLiteral_10075);
    DAT_0454294c = 1;
  }
  if ((*(char *)(param_1 + 0x18) != '\0') == (bool)(param_2 & 1)) {
    return;
  }
  plVar7 = *(long **)(param_1 + 0x10);
  *(byte *)(param_1 + 0x18) = param_2 & 1;
  puVar1 = StringLiteral_10075;
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)StringLiteral_10075) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03e3f010;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498(plVar7,*(long *)StringLiteral_10075,0);
LAB_03e3f010:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if (lVar3 != 0) {
      if ((param_2 & 1) == 0) {
        FUN_0230622c(lVar3,*(undefined8 *)(param_1 + 0x20),0,*(undefined8 *)StringLiteral_10073);
        plVar7 = *(long **)(param_1 + 0x10);
        if (plVar7 != (long *)0x0) {
          lVar4 = *plVar7;
          lVar3 = *(long *)puVar1;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == lVar3) {
                puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_03e3f134;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined8 *)FUN_01c72498(plVar7,lVar3,0);
LAB_03e3f134:
          lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
          if (lVar3 != 0) {
            FUN_0230622c(lVar3,*(undefined8 *)(param_1 + 0x28),0,*(undefined8 *)StringLiteral_10074)
            ;
            FUN_03e3f28c(param_1);
            return;
          }
        }
      }
      else {
        FUN_02305eac(lVar3,*(undefined8 *)(param_1 + 0x20),0,
                     *(undefined8 *)OVRExternalComposition_TypeInfo);
        plVar7 = *(long **)(param_1 + 0x10);
        if (plVar7 != (long *)0x0) {
          lVar4 = *plVar7;
          lVar3 = *(long *)puVar1;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == lVar3) {
                puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_03e3f0ec;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined8 *)FUN_01c72498(plVar7,lVar3,0);
LAB_03e3f0ec:
          lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
          if (lVar3 != 0) {
            FUN_02305eac(lVar3,*(undefined8 *)(param_1 + 0x28),0,*(undefined8 *)OVREyeGaze_TypeInfo)
            ;
            FUN_03e3f174(param_1);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


