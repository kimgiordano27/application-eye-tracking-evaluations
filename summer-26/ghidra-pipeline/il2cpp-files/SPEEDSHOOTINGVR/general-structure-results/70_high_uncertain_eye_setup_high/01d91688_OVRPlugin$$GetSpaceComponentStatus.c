/*
FUNCTION_NAME: OVRPlugin$$GetSpaceComponentStatus
ENTRY_POINT: 01d91688
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__GetSpaceComponentStatus(long param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  uint in_w9;
  long *in_x10;
  long *unaff_x19;
  long lVar6;
  long *plVar7;
  long *unaff_x21;
  long lVar8;
  
  bVar2 = *(byte *)(*in_x10 + 0x130);
  if ((in_w9 < bVar2) || (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) != *in_x10)) {
    bVar2 = *(byte *)(*unaff_x21 + 0x130);
    if ((in_w9 < bVar2) ||
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x21)) {
      plVar7 = (long *)0x0;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_02354070 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      plVar7 = (long *)FUN_01d9189c();
    }
  }
  else {
    plVar7 = (long *)FUN_01cd7260();
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar3 = FUN_01d611c4();
  if ((plVar7 != (long *)0x0) && ((uVar3 & 1) != 0)) {
    uVar1 = *(uint *)(plVar7 + 3);
    if (0 < (int)uVar1) {
      lVar8 = 0;
      do {
        if (uVar1 <= (uint)lVar8) {
LAB_01d9188c:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        if ((plVar7[lVar8 + 4] == 0) || (FUN_0105d828(), unaff_x19 == (long *)0x0)) {
LAB_01d91888:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        uVar3 = (**(code **)(*unaff_x19 + 0x288))();
        if ((uVar3 & 1) != 0) {
          if ((int)plVar7[3] == 1) {
            return plVar7;
          }
          plVar4 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0234bd08,1);
          if ((uint)lVar8 < *(uint *)(plVar7 + 3)) {
            if (plVar4 == (long *)0x0) goto LAB_01d91888;
            lVar8 = plVar7[lVar8 + 4];
            if ((lVar8 != 0) &&
               (lVar6 = thunk_FUN_0103ffe0(lVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
              uVar5 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
              FUN_00fdc400(uVar5,0);
            }
            if ((int)plVar4[3] != 0) {
              plVar4[4] = lVar8;
              thunk_FUN_0106e12c(plVar4 + 4,lVar8);
              return plVar4;
            }
          }
          goto LAB_01d9188c;
        }
        uVar1 = *(uint *)(plVar7 + 3);
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < (int)uVar1);
    }
    lVar6 = *(long *)PTR_DAT_023508c0;
    lVar8 = *(long *)(lVar6 + 0x38);
    if (lVar8 == 0) {
      FUN_0103c2a0(lVar6);
      lVar8 = *(long *)(lVar6 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0103c244();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar8 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0103c244();
    }
    plVar7 = (long *)**(long **)(lVar8 + 0xb8);
  }
  return plVar7;
}


