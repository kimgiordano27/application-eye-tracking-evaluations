/*
FUNCTION_NAME: FUN_02bfea78
ENTRY_POINT: 02bfea78
PROGRAM: sharks-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_02bfea78(undefined8 param_1,long *param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  
  if ((DAT_03a25da2 & 1) == 0) {
    FUN_017fc350(PTR_DAT_0380aba0);
    FUN_017fc350(PTR_DAT_0380a318);
    FUN_017fc350(PTR_DAT_037f2f98);
    DAT_03a25da2 = 1;
  }
  if (param_3 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_0380aba0 + 0x130);
    if ((*(byte *)(*param_3 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0380aba0))
    {
                    /* WARNING: Subroutine does not return */
      FUN_017fc944(param_3);
    }
    lVar5 = param_3[2];
    lVar7 = *param_2;
    if (*(int *)(*(long *)PTR_DAT_0380a318 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02bfcc88(lVar5,lVar7);
    puVar4 = PTR_DAT_037f2f98;
    plVar9 = (long *)*param_2;
    if (plVar9 != (long *)0x0) {
      if (*(char *)((long)param_3 + 0x1c) == '\0') {
        if ((int)plVar9[3] <= (int)param_3[3]) {
          return;
        }
        plVar6 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2f98);
        FUN_02bf1608(*param_2,0,plVar6,0,(int)param_3[3],0);
        *param_2 = (long)plVar6;
      }
      else {
        iVar1 = (int)plVar9[3];
        uVar3 = iVar1 - 1;
        if ((int)param_3[3] == iVar1) {
          if (iVar1 == 0) goto OVRManager__get_boundary;
          param_2 = plVar9 + (long)(int)uVar3 + 4;
          lVar5 = *param_2;
          if (lVar5 == 0) goto LAB_02bfed5c;
          uVar8 = *(undefined8 *)PTR_DAT_037f2f98;
          lVar7 = thunk_FUN_01861ac0(lVar5,uVar8);
          if (lVar7 == 0) {
LAB_02bfed80:
                    /* WARNING: Subroutine does not return */
            FUN_017fc944(lVar5,uVar8);
          }
          uVar8 = *(undefined8 *)puVar4;
          lVar7 = thunk_FUN_01861ac0(lVar5,uVar8);
          if (lVar7 == 0) goto LAB_02bfed80;
          if (*(int *)(lVar7 + 0x18) == 0) {
OVRManager__get_boundary:
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          plVar6 = *(long **)(lVar7 + 0x20);
          if ((plVar6 != (long *)0x0) &&
             (lVar5 = thunk_FUN_01861ac0(plVar6,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
LAB_02bfed6c:
            uVar8 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
            FUN_017fc474(uVar8,0);
          }
          if (*(uint *)(plVar9 + 3) <= uVar3) goto OVRManager__get_boundary;
        }
        else {
          plVar6 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f2f98);
          FUN_02bf1608(*param_2,0,plVar6,0,uVar3,0);
          if (plVar6 == (long *)0x0) goto LAB_02bfed5c;
          if ((int)uVar3 < (int)plVar6[3]) {
            uVar10 = 0;
            plVar9 = plVar6 + (long)(int)uVar3 + 4;
            do {
              lVar5 = *param_2;
              if (lVar5 == 0) goto LAB_02bfed5c;
              if (*(uint *)(lVar5 + 0x18) <= uVar3) goto OVRManager__get_boundary;
              lVar5 = *(long *)(lVar5 + (long)(int)uVar3 * 8 + 0x20);
              if (lVar5 == 0) goto LAB_02bfed5c;
              uVar8 = *(undefined8 *)puVar4;
              lVar7 = thunk_FUN_01861ac0(lVar5,uVar8);
              if (lVar7 == 0) {
LAB_02bfed60:
                    /* WARNING: Subroutine does not return */
                FUN_017fc944(lVar5,uVar8);
              }
              uVar8 = *(undefined8 *)puVar4;
              lVar7 = thunk_FUN_01861ac0(lVar5,uVar8);
              if (lVar7 == 0) goto LAB_02bfed60;
              if (*(uint *)(lVar7 + 0x18) <= uVar10) goto OVRManager__get_boundary;
              lVar5 = *(long *)(lVar7 + (long)(int)uVar10 * 8 + 0x20);
              if ((lVar5 != 0) &&
                 (lVar7 = thunk_FUN_01861ac0(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
              goto LAB_02bfed6c;
              if (*(uint *)(plVar6 + 3) <= uVar3 + uVar10) goto OVRManager__get_boundary;
              *plVar9 = lVar5;
              thunk_FUN_0188fd20(plVar9,lVar5);
              uVar10 = uVar10 + 1;
              plVar9 = plVar9 + 1;
            } while ((int)(uVar3 + uVar10) < (int)plVar6[3]);
          }
        }
        *param_2 = (long)plVar6;
      }
      thunk_FUN_0188fd20(param_2,plVar6);
      return;
    }
  }
LAB_02bfed5c:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


