/*
FUNCTION_NAME: OVREyeGaze$$Update
ENTRY_POINT: 03351e10
PROGRAM: gunraiders-libil2cpp.so
SCORE: 86
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_6;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03351f98) */
/* WARNING: Removing unreachable block (ram,0x03352014) */
/* WARNING: Removing unreachable block (ram,0x03351fb0) */
/* WARNING: Removing unreachable block (ram,0x03351fb4) */
/* WARNING: Removing unreachable block (ram,0x03352074) */

void OVREyeGaze__Update(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *plVar7;
  
  puVar1 = Method_System_Collections_Generic_List_Enumerator<Polygon>_Dispose__;
  plVar7 = *(long **)(unaff_x23 + 0x960);
  do {
    lVar4 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *plVar7) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03351e70;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498();
LAB_03351e70:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_03351f90;
      lVar4 = *unaff_x22;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_03351f3c;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x22;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_03351ecc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01c72498();
LAB_03351ecc:
    uVar3 = (*(code *)*puVar2)();
    uVar3 = FUN_032000a0(uVar3,0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4(uVar3,uVar3);
    }
    FUN_02ec0bf8();
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0422fce8) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_03351f84;
    }
  }
LAB_03351f3c:
  puVar2 = (undefined8 *)FUN_01c72498();
LAB_03351f84:
  (*(code *)*puVar2)();
LAB_03351f90:
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  if (*(int *)(unaff_x21 + 0x18) < 1) {
    return;
  }
  FUN_0335213c();
  return;
}


