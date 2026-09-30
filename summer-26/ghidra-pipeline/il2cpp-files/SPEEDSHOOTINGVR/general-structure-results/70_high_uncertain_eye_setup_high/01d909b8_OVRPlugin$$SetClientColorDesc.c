/*
FUNCTION_NAME: OVRPlugin$$SetClientColorDesc
ENTRY_POINT: 01d909b8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetClientColorDesc(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *in_x9;
  long unaff_x19;
  long unaff_x21;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  
  bVar1 = *(byte *)(*in_x9 + 0x130);
  if ((*(byte *)(param_1 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) != *in_x9)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc8d0();
  }
  uVar8 = 0;
  lVar5 = unaff_x21;
  do {
    lVar5 = *(long *)(lVar5 + 0x40);
    uVar8 = uVar8 + 1;
  } while (lVar5 != 0);
  if (uVar8 == 1) {
    if (unaff_x21 == 0) {
LAB_01d90af0:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar2 = FUN_01d90b0c();
  }
  else {
    plVar3 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_02359838,uVar8);
    if (0 < (int)uVar8) {
      uVar6 = 0;
      plVar7 = plVar3 + 4;
      do {
        if ((unaff_x21 == 0) || (lVar5 = FUN_01d90b0c(unaff_x21), plVar3 == (long *)0x0))
        goto LAB_01d90af0;
        if ((lVar5 != 0) &&
           (lVar4 = thunk_FUN_0103ffe0(lVar5,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
          uVar2 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
          FUN_00fdc400(uVar2,0);
        }
        if (*(uint *)(plVar3 + 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        *plVar7 = lVar5;
        thunk_FUN_0106e12c(plVar7,lVar5);
        unaff_x21 = *(long *)(unaff_x21 + 0x40);
        uVar6 = uVar6 + 1;
        plVar7 = plVar7 + 1;
      } while (uVar8 != uVar6);
    }
    uVar2 = FUN_01d9064c(plVar3);
  }
  *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
  thunk_FUN_0106e12c((undefined8 *)(unaff_x19 + 0x10),uVar2);
  return;
}


