/*
FUNCTION_NAME: OVREyeGaze$$OnDestroy
ENTRY_POINT: 03351e04
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_7;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03351f98) */
/* WARNING: Removing unreachable block (ram,0x03352014) */
/* WARNING: Removing unreachable block (ram,0x03351fb0) */
/* WARNING: Removing unreachable block (ram,0x03351fb4) */
/* WARNING: Removing unreachable block (ram,0x03352074) */

void OVREyeGaze__OnDestroy(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x21;
  
  puVar2 = Method_System_Collections_Generic_List_Enumerator<Polygon>_Dispose__;
  puVar1 = PTR_DAT_04230960;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  do {
    lVar5 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03351e70;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498(param_1,*(long *)puVar1,0);
LAB_03351e70:
    uVar6 = (*(code *)*puVar3)(param_1,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (param_1 == (long *)0x0) goto LAB_03351f90;
      lVar5 = *param_1;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_03351f3c;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03351ecc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01c72498(param_1,*(long *)puVar2,0);
LAB_03351ecc:
    uVar4 = (*(code *)*puVar3)(param_1,puVar3[1]);
    uVar4 = FUN_032000a0(uVar4,0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4(uVar4,uVar4);
    }
    FUN_02ec0bf8();
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03351f84;
    }
  }
LAB_03351f3c:
  puVar3 = (undefined8 *)FUN_01c72498(param_1,*(long *)PTR_DAT_0422fce8,0);
LAB_03351f84:
  (*(code *)*puVar3)(param_1,puVar3[1]);
LAB_03351f90:
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    FUN_0335213c();
    return;
  }
  return;
}


