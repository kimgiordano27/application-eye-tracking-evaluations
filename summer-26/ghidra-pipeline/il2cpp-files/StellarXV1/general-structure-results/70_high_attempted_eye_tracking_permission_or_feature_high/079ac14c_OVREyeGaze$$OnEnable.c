/*
FUNCTION_NAME: OVREyeGaze$$OnEnable
ENTRY_POINT: 079ac14c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnEnable(byte param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  uint uVar5;
  long *plVar6;
  long *unaff_x21;
  undefined4 uVar7;
  
  *(byte *)(unaff_x19 + 100) = param_1 & 1;
  if ((*(long *)(unaff_x19 + 0x38) != 0) &&
     (lVar1 = FUN_079b62b0(*(long *)(unaff_x19 + 0x38),0), lVar1 != 0)) {
    thunk_FUN_0898f5cc(*(undefined4 *)(unaff_x19 + 0x44),*(undefined4 *)(unaff_x19 + 0x48),
                       *(undefined4 *)(unaff_x19 + 0x4c),*(undefined4 *)(unaff_x19 + 0x50),lVar1,
                       *(undefined4 *)(unaff_x19 + 0x60),0);
    plVar6 = *(long **)(unaff_x19 + 0x28);
    if (plVar6 != (long *)0x0) {
      lVar1 = *plVar6;
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x21) {
            puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
            goto FUN_079ac1d4;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_040b1e00(plVar6,*unaff_x21,0);
FUN_079ac1d4:
      uVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
      uVar5 = 0;
      uVar7 = 0x3f800000;
      if ((uVar3 & 1) == 0) {
        uVar7 = 0;
      }
      do {
        if ((*(uint *)(unaff_x19 + 0x30) >> (ulong)(uVar5 & 0x1f) & 1) != 0) {
          FUN_079ac250(uVar7);
          FUN_089cd004();
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != 5);
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        FUN_079c677c(*(long *)(unaff_x19 + 0x38),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


