/*
FUNCTION_NAME: System.Collections.BitArray$$get_IsSynchronized
ENTRY_POINT: 0262fbf0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0262fcec) */
/* WARNING: Removing unreachable block (ram,0x0262fda0) */

long * System_Collections_BitArray__get_IsSynchronized(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  char cStack000000000000000c;
  
  if ((DAT_04123fe4 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cf2778);
    FUN_01ab69ac(PTR_DAT_03cf2780);
    FUN_01ab69ac(PTR_DAT_03cc1810);
    FUN_01ab69ac(PTR_DAT_03cf22a8);
    DAT_04123fe4 = 1;
  }
  puVar2 = PTR_DAT_03cf22a8;
  if (param_1 == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1810);
    FUN_0269a22c(uVar3,param_1,0);
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *(long *)puVar2;
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
    cStack000000000000000c = '\0';
    FUN_027e0bd8(uVar7,&stack0x0000000c,0);
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *(long *)puVar2;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar5 = (long *)FUN_0265f7fc(lVar4,uVar3,0);
    if (cStack000000000000000c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar7,0);
    }
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_03cf2778 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_03cf2778))
      {
        plVar8 = (long *)plVar5[3];
        if (plVar8 == (long *)0x0) {
LAB_0262fdac:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*plVar8 != *(long *)PTR_DAT_03cf2780) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar8);
        }
        plVar5 = (long *)plVar5[2];
        uVar6 = FUN_0262fe20(plVar8);
        if ((uVar6 & 1) != 0) {
          lVar4 = FUN_027df29c(0);
          if (((lVar4 == 0) || (lVar4 = FUN_027df2f8(lVar4,0), lVar4 == 0)) ||
             (lVar4 = FUN_027df9d8(lVar4,0), lVar4 == 0)) goto LAB_0262fdac;
          FUN_0262fe8c(lVar4,plVar8);
        }
      }
    }
  }
  return plVar5;
}


