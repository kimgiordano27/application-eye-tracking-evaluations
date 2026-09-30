/*
FUNCTION_NAME: OVRManager$$remove_HMDAcquired
ENTRY_POINT: 02bfef0c
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager__remove_HMDAcquired(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  uint unaff_w24;
  long *plVar6;
  uint uVar7;
  
  do {
    thunk_FUN_0188fd20(param_1,param_2);
    unaff_w22 = unaff_w22 + 1;
    do {
      do {
        unaff_w24 = unaff_w24 + 1;
        if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)unaff_w24) {
          if (unaff_w22 == 0) {
            lVar3 = 0;
          }
          else {
            if (unaff_w22 != 1) {
              if (*(int *)(*(long *)PTR_DAT_0380a318 + 0xe0) == 0) {
                thunk_FUN_01843fdc();
              }
              lVar3 = FUN_02bfeff4();
              return lVar3;
            }
            if (unaff_x21 == (long *)0x0) goto LAB_02bfef98;
            if ((int)unaff_x21[3] == 0) goto LAB_02bfef9c;
            lVar3 = unaff_x21[4];
          }
          return lVar3;
        }
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) goto LAB_02bfef9c;
        plVar6 = (long *)(unaff_x20 + (long)(int)unaff_w24 * 8 + 0x20);
        plVar1 = (long *)*plVar6;
        if ((plVar1 == (long *)0x0) ||
           (lVar3 = (**(code **)(*plVar1 + 0x398))(plVar1,*(undefined8 *)(*plVar1 + 0x3a0)),
           lVar3 == 0)) goto LAB_02bfef98;
      } while (*(long *)(lVar3 + 0x18) == 0);
      if (unaff_x19 == 0) goto LAB_02bfef98;
      iVar5 = (int)*(undefined8 *)(unaff_x19 + 0x18);
      if (iVar5 < 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        do {
          if (*(uint *)(lVar3 + 0x18) <= uVar7) goto LAB_02bfef9c;
          plVar1 = *(long **)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
          if (plVar1 == (long *)0x0) goto LAB_02bfef98;
          plVar1 = (long *)(**(code **)(*plVar1 + 0x1d8))(plVar1,*(undefined8 *)(*plVar1 + 0x1e0));
          if (*(uint *)(unaff_x19 + 0x18) <= uVar7) goto LAB_02bfef9c;
          if (plVar1 == (long *)0x0) goto LAB_02bfef98;
          uVar2 = (**(code **)(*plVar1 + 0x908))
                            (plVar1,*(undefined8 *)(unaff_x19 + (long)(int)uVar7 * 8 + 0x20),
                             *(undefined8 *)(*plVar1 + 0x910));
          if ((uVar2 & 1) == 0) {
            iVar5 = (int)*(undefined8 *)(unaff_x19 + 0x18);
            break;
          }
          uVar7 = uVar7 + 1;
          iVar5 = (int)*(undefined8 *)(unaff_x19 + 0x18);
        } while ((int)uVar7 < iVar5);
      }
    } while ((int)uVar7 < iVar5);
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) {
LAB_02bfef9c:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    if (unaff_x21 == (long *)0x0) {
LAB_02bfef98:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    param_2 = *plVar6;
    if ((param_2 != 0) &&
       (lVar3 = thunk_FUN_01861ac0(param_2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0)) {
      uVar4 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar4,0);
    }
    if (*(uint *)(unaff_x21 + 3) <= unaff_w22) goto LAB_02bfef9c;
    param_1 = unaff_x21 + (long)(int)unaff_w22 + 4;
    *param_1 = param_2;
  } while( true );
}


