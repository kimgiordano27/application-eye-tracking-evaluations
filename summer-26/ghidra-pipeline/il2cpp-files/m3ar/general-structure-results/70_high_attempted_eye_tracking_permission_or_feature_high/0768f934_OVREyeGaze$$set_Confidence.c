/*
FUNCTION_NAME: OVREyeGaze$$set_Confidence
ENTRY_POINT: 0768f934
PROGRAM: m3ar-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__set_Confidence(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  
  (*(code *)*param_1)();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    plVar6 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x98);
    uVar1 = thunk_FUN_0406deb8(*unaff_x23);
    FUN_0532c238();
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_0768f9dc;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0406ae20(plVar6,*unaff_x24,1);
LAB_0768f9dc:
      (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
      uVar1 = *(undefined8 *)(unaff_x19 + 0x48);
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar4 = FUN_0858df34(uVar1,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      uVar1 = *(undefined8 *)(unaff_x19 + 0x48);
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      uVar4 = FUN_0858816c(uVar1,0,0);
      if ((uVar4 & 1) != 0) {
        lVar3 = *(long *)(unaff_x19 + 0x48);
        uVar1 = FUN_0768f300();
        if (lVar3 == 0) goto LAB_0768fa90;
        FUN_054b4d04(lVar3,uVar1,*(undefined8 *)PTR_DAT_08fab608);
      }
      *(undefined8 *)(unaff_x19 + 0x48) = 0;
      FUN_0768fa94();
      return;
    }
  }
LAB_0768fa90:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


