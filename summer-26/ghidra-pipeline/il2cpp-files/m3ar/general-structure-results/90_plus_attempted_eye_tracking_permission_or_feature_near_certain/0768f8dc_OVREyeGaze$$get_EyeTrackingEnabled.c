/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 0768f8dc
PROGRAM: m3ar-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_EyeTrackingEnabled(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *plVar7;
  long *unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_0532c238(param_2,param_3,**(undefined8 **)(param_1 + 0x870));
  puVar1 = PTR_DAT_08fac868;
  if (unaff_x20 != (long *)0x0) {
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* try { // try from 0768f910 to 0778f917 has its CatchHandler @ 0768f978 */
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08fac868) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto FUN_0768f948;
        }
                    /* try { // try from 0768f91c to 0778f92b has its CatchHandler @ 0768f97c */
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20();
FUN_0768f948:
    (*(code *)*puVar2)();
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      plVar7 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x98);
      uVar3 = thunk_FUN_0406deb8(*unaff_x23);
      FUN_0532c238();
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_0768f9dc;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)puVar1,1);
LAB_0768f9dc:
        (*(code *)*puVar2)(plVar7,uVar3,puVar2[1]);
        uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar5 = FUN_0858df34(uVar3,0);
        if ((uVar5 & 1) == 0) {
          return;
        }
        uVar3 = *(undefined8 *)(unaff_x19 + 0x48);
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar5 = FUN_0858816c(uVar3,0,0);
        if ((uVar5 & 1) != 0) {
          lVar4 = *(long *)(unaff_x19 + 0x48);
          uVar3 = FUN_0768f300();
          if (lVar4 == 0) goto LAB_0768fa90;
          FUN_054b4d04(lVar4,uVar3,*(undefined8 *)PTR_DAT_08fab608);
        }
        *(undefined8 *)(unaff_x19 + 0x48) = 0;
        FUN_0768fa94();
        return;
      }
    }
  }
LAB_0768fa90:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


