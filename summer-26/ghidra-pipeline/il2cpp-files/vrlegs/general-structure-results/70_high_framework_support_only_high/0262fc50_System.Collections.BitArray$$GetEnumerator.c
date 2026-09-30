/*
FUNCTION_NAME: System.Collections.BitArray$$GetEnumerator
ENTRY_POINT: 0262fc50
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0262fcec) */
/* WARNING: Removing unreachable block (ram,0x0262fda0) */

long * System_Collections_BitArray__GetEnumerator(void)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *unaff_x21;
  char cStack000000000000000c;
  
  uVar2 = thunk_FUN_01a89e68();
  FUN_0269a22c();
  lVar3 = *unaff_x21;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *unaff_x21;
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
  cStack000000000000000c = '\0';
  FUN_027e0bd8(uVar6,&stack0x0000000c,0);
  lVar3 = *unaff_x21;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *unaff_x21;
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar4 = (long *)FUN_0265f7fc(lVar3,uVar2,0);
  if (cStack000000000000000c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
  }
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_03cf2778 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_03cf2778)) {
      plVar7 = (long *)plVar4[3];
      if (plVar7 == (long *)0x0) {
LAB_0262fdac:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*plVar7 != *(long *)PTR_DAT_03cf2780) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar7);
      }
      plVar4 = (long *)plVar4[2];
      uVar5 = FUN_0262fe20(plVar7);
      if ((uVar5 & 1) != 0) {
        lVar3 = FUN_027df29c(0);
        if (((lVar3 == 0) || (lVar3 = FUN_027df2f8(lVar3,0), lVar3 == 0)) ||
           (lVar3 = FUN_027df9d8(lVar3,0), lVar3 == 0)) goto LAB_0262fdac;
        FUN_0262fe8c(lVar3,plVar7);
      }
    }
  }
  return plVar4;
}


