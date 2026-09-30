/*
FUNCTION_NAME: RootMotion.FinalIK.FBBIKHeadEffector.BendBone$$FixTransforms
ENTRY_POINT: 0298d7b4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0298d948) */
/* WARNING: Removing unreachable block (ram,0x0298d824) */

void RootMotion_FinalIK_FBBIKHeadEffector_BendBone__FixTransforms
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x19;
  long lVar6;
  uint uVar7;
  char cStack000000000000000c;
  char in_stack_00000018;
  
  FUN_027e0bd8(param_1,param_2,0);
  lVar6 = unaff_x19[0x31];
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar1 = *(uint *)(lVar6 + 0x18);
  if (0 < (int)uVar1) {
    uVar7 = 0;
    do {
      if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      if (*(long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_0298bd58();
      uVar1 = *(uint *)(lVar6 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar1);
  }
  if (in_stack_00000018 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  lVar6 = unaff_x19[0x22];
  if (lVar6 != 0) {
    cVar2 = *(char *)(lVar6 + 0x10);
    FUN_0298da80(lVar6,0);
    if (unaff_x19[0x24] != 0) {
      lVar6 = FUN_0298d380();
      *(undefined1 *)(unaff_x19 + 8) = 4;
      FUN_0298d54c();
      (**(code **)(*unaff_x19 + 0x218))();
      if (unaff_x19[2] != 0) {
        uVar3 = FUN_0299ec14(unaff_x19[2],0);
        if ((uVar3 & 1) != 0) {
          if (((unaff_x19[2] == 0) || (lVar6 == 0)) ||
             (lVar4 = *(long *)(unaff_x19[2] + 0xa8), lVar4 == 0)) goto LAB_0298d944;
          FUN_029bf178(lVar4,*(undefined4 *)(lVar6 + 0x54),0);
        }
        if (unaff_x19[0x22] != 0) {
          FUN_0298da80(unaff_x19[0x22],cVar2 != '\0');
          plVar5 = (long *)unaff_x19[5];
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
            *(undefined1 *)(unaff_x19 + 8) = 0;
            FUN_0298e1e4();
            lVar6 = unaff_x19[0x2b];
            cStack000000000000000c = '\0';
            FUN_027e0bd8(lVar6,&stack0x0000000c,0);
            *(undefined1 *)((long)unaff_x19 + 0x184) = 0;
            if (cStack000000000000000c != '\0') {
              OVRManager_<>c__<InitOVRManager>b__424_0(lVar6,0);
            }
            return;
          }
        }
      }
    }
  }
LAB_0298d944:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


