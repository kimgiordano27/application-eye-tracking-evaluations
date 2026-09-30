/*
FUNCTION_NAME: OVRPlugin$$GetSpaceComponentStatusInternal
ENTRY_POINT: 01d91710
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__GetSpaceComponentStatusInternal(long *param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *unaff_x19;
  long lVar6;
  long *unaff_x21;
  long lVar7;
  
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  plVar2 = (long *)FUN_01d9189c();
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar3 = FUN_01d611c4();
  if ((plVar2 != (long *)0x0) && ((uVar3 & 1) != 0)) {
    uVar1 = *(uint *)(plVar2 + 3);
    if (0 < (int)uVar1) {
      lVar7 = 0;
      do {
        if (uVar1 <= (uint)lVar7) {
LAB_01d9188c:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        if ((plVar2[lVar7 + 4] == 0) || (FUN_0105d828(), unaff_x19 == (long *)0x0)) {
LAB_01d91888:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        uVar3 = (**(code **)(*unaff_x19 + 0x288))();
        if ((uVar3 & 1) != 0) {
          if ((int)plVar2[3] == 1) {
            return plVar2;
          }
          plVar4 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0234bd08,1);
          if ((uint)lVar7 < *(uint *)(plVar2 + 3)) {
            if (plVar4 == (long *)0x0) goto LAB_01d91888;
            lVar7 = plVar2[lVar7 + 4];
            if ((lVar7 != 0) &&
               (lVar6 = thunk_FUN_0103ffe0(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
              uVar5 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
              FUN_00fdc400(uVar5,0);
            }
            if ((int)plVar4[3] != 0) {
              plVar4[4] = lVar7;
              thunk_FUN_0106e12c(plVar4 + 4,lVar7);
              return plVar4;
            }
          }
          goto LAB_01d9188c;
        }
        uVar1 = *(uint *)(plVar2 + 3);
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)uVar1);
    }
    lVar6 = *(long *)PTR_DAT_023508c0;
    lVar7 = *(long *)(lVar6 + 0x38);
    if (lVar7 == 0) {
      FUN_0103c2a0(lVar6);
      lVar7 = *(long *)(lVar6 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0103c244();
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0103c244();
    }
    plVar2 = (long *)**(long **)(lVar7 + 0xb8);
  }
  return plVar2;
}


