/*
FUNCTION_NAME: OVREyeGaze$$.ctor
ENTRY_POINT: 05c95070
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x05c95244) */

void OVREyeGaze___ctor(float param_1,float param_2,float param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  
  fVar7 = SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2);
  FUN_06904aa4(fVar7 * *(float *)(unaff_x19 + 0x68),fVar7 * *(float *)(unaff_x19 + 0x6c),
               fVar7 * *(float *)(unaff_x19 + 0x70),param_4,0);
  if ((*(long *)(unaff_x19 + 0x30) == 0) || (lVar1 = *(long *)(unaff_x19 + 0x88), lVar1 == 0))
  goto LAB_05c952a4;
  if (*(int *)(*(long *)(unaff_x19 + 0x30) + 0x84) == 2) {
    FUN_068f8b44(lVar1,1,0);
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (lVar1 = FUN_068ce534(*(long *)(unaff_x19 + 0x40),0), lVar1 == 0)) goto LAB_05c952a4;
    FUN_068d1aec(DAT_01369e30,lVar1,*(undefined4 *)(unaff_x19 + 0x74),0);
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (lVar1 = FUN_068ce534(*(long *)(unaff_x19 + 0x40),0), lVar1 == 0)) goto LAB_05c952a4;
    FUN_068d1aec(0x3f800000,lVar1,*(undefined4 *)(unaff_x19 + 0x78),0);
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (lVar1 = FUN_068ce534(*(long *)(unaff_x19 + 0x40),0), lVar1 == 0)) goto LAB_05c952a4;
    uVar3 = *(undefined4 *)(unaff_x19 + 0x7c);
    fVar8 = 1.0;
  }
  else {
    FUN_068f8b44(lVar1,0,0);
    plVar6 = *(long **)(unaff_x19 + 0x28);
    if (plVar6 == (long *)0x0) goto LAB_05c952a4;
    lVar1 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06fb4b60) {
          puVar2 = (undefined8 *)(lVar1 + (long)(*piVar5 + 0x10) * 0x10 + 0x138);
          goto LAB_05c951b4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_02feb5b8(plVar6,*(long *)PTR_DAT_06fb4b60,0x10);
LAB_05c951b4:
    uVar9 = (*(code *)*puVar2)(plVar6,1,puVar2[1]);
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (lVar1 = FUN_068ce534(*(long *)(unaff_x19 + 0x40),0), fVar7 = DAT_01369e30, lVar1 == 0))
    goto LAB_05c952a4;
    fVar10 = (float)uVar9;
    fVar8 = 1.0 - fVar10;
    if (1.0 - fVar10 <= DAT_01369e30) {
      fVar8 = DAT_01369e30;
    }
    FUN_068d1aec(fVar8,lVar1,*(undefined4 *)(unaff_x19 + 0x74),0);
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (lVar1 = FUN_068ce534(*(long *)(unaff_x19 + 0x40),0), lVar1 == 0)) goto LAB_05c952a4;
    FUN_068d1aec(uVar9,lVar1,*(undefined4 *)(unaff_x19 + 0x78),0);
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (lVar1 = FUN_068ce534(*(long *)(unaff_x19 + 0x40),0), lVar1 == 0)) goto LAB_05c952a4;
    uVar3 = *(undefined4 *)(unaff_x19 + 0x7c);
    fVar8 = fVar10 * DAT_0136a880 + fVar7;
    if (fVar10 < 0.0) {
      fVar8 = fVar7;
    }
  }
  FUN_068d1aec(fVar8,lVar1,uVar3,0);
  if ((*(long *)(unaff_x19 + 0x40) != 0) &&
     (lVar1 = FUN_068ce534(*(long *)(unaff_x19 + 0x40),0), lVar1 != 0)) {
    thunk_FUN_068d0fac(*(undefined4 *)(unaff_x19 + 0x48),*(undefined4 *)(unaff_x19 + 0x4c),
                       *(undefined4 *)(unaff_x19 + 0x50),*(undefined4 *)(unaff_x19 + 0x54),lVar1,
                       *(undefined4 *)(unaff_x19 + 0x80),0);
    return;
  }
LAB_05c952a4:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


