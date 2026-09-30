/*
FUNCTION_NAME: OVRPlugin$$SaveSpaces
ENTRY_POINT: 01d95560
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__SaveSpaces(long param_1,long *param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  
  if ((DAT_0247d890 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_02359838);
    FUN_00fdc2e4(PTR_DAT_023599f8);
    DAT_0247d890 = 1;
  }
  puVar4 = PTR_DAT_02359838;
  if (param_2 == (long *)0x0) {
    return param_1;
  }
  bVar3 = *(byte *)(*(long *)PTR_DAT_023599f8 + 0x130);
  if ((*(byte *)(*param_2 + 0x130) < bVar3) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_023599f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc8d0(param_2);
  }
  lVar5 = FUN_00fd830c(param_1);
  lVar8 = param_2[0xf];
  uVar7 = *(undefined8 *)puVar4;
  if (*(long *)(param_1 + 0x78) == 0) {
    if (lVar8 == 0) {
      plVar11 = (long *)FUN_00fdc388(uVar7,2);
      if (plVar11 != (long *)0x0) {
        lVar8 = thunk_FUN_0103ffe0(param_1,*(undefined8 *)(*plVar11 + 0x40));
        if (lVar8 != 0) {
          if ((int)plVar11[3] != 0) {
            plVar11[4] = param_1;
            thunk_FUN_0106e12c(plVar11 + 4,param_1);
            lVar8 = thunk_FUN_0103ffe0(param_2,*(undefined8 *)(*plVar11 + 0x40));
            if (lVar8 == 0) goto LAB_01d9581c;
            if (1 < *(uint *)(plVar11 + 3)) {
              plVar11[5] = (long)param_2;
              thunk_FUN_0106e12c(plVar11 + 5,param_2);
              if (lVar5 != 0) {
                plVar9 = (long *)(lVar5 + 0x78);
                *plVar9 = (long)plVar11;
                goto LAB_01d957f8;
              }
              goto LAB_01d95810;
            }
          }
LAB_01d95828:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
LAB_01d9581c:
        uVar7 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar7,0);
      }
    }
    else {
      uVar7 = FUN_00fdc388(uVar7,*(int *)(lVar8 + 0x18) + 1);
      if (lVar5 != 0) {
        puVar10 = (undefined8 *)(lVar5 + 0x78);
        *puVar10 = uVar7;
        thunk_FUN_0106e12c(puVar10,uVar7);
        plVar11 = (long *)*puVar10;
        if (plVar11 != (long *)0x0) {
          lVar8 = thunk_FUN_0103ffe0(param_1,*(undefined8 *)(*plVar11 + 0x40));
          if (lVar8 == 0) goto LAB_01d9581c;
          if ((int)plVar11[3] == 0) goto LAB_01d95828;
          plVar11[4] = param_1;
          thunk_FUN_0106e12c(plVar11 + 4,param_1);
          lVar8 = param_2[0xf];
          if (lVar8 != 0) {
            uVar7 = *puVar10;
            uVar2 = *(undefined4 *)(lVar8 + 0x18);
            uVar6 = 1;
            goto LAB_01d956e8;
          }
        }
      }
    }
  }
  else {
    iVar1 = *(int *)(*(long *)(param_1 + 0x78) + 0x18);
    if (lVar8 == 0) {
      uVar7 = FUN_00fdc388(uVar7,iVar1 + 1);
      if (lVar5 != 0) {
        puVar10 = (undefined8 *)(lVar5 + 0x78);
        *puVar10 = uVar7;
        thunk_FUN_0106e12c(puVar10,uVar7);
        lVar8 = *(long *)(param_1 + 0x78);
        if (lVar8 != 0) {
          FUN_01d6ade4(lVar8,0,*puVar10,0,*(undefined4 *)(lVar8 + 0x18),0);
          plVar9 = (long *)*puVar10;
          if (plVar9 != (long *)0x0) {
            lVar8 = thunk_FUN_0103ffe0(param_2,*(undefined8 *)(*plVar9 + 0x40));
            if (lVar8 != 0) {
              if ((int)plVar9[3] != 0) {
                plVar9 = (long *)((long)plVar9 + ((plVar9[3] << 0x20) + -0x100000000 >> 0x1d) + 0x20
                                 );
                *plVar9 = (long)param_2;
                plVar11 = param_2;
LAB_01d957f8:
                thunk_FUN_0106e12c(plVar9,plVar11);
                return lVar5;
              }
              goto LAB_01d95828;
            }
            goto LAB_01d9581c;
          }
        }
      }
    }
    else {
      uVar7 = FUN_00fdc388(uVar7,*(int *)(lVar8 + 0x18) + iVar1);
      if (lVar5 != 0) {
        puVar10 = (undefined8 *)(lVar5 + 0x78);
        *puVar10 = uVar7;
        thunk_FUN_0106e12c(puVar10,uVar7);
        lVar8 = *(long *)(param_1 + 0x78);
        if (lVar8 != 0) {
          FUN_01d6ade4(lVar8,0,*puVar10,0,*(undefined4 *)(lVar8 + 0x18),0);
          if ((*(long *)(param_1 + 0x78) != 0) && (lVar8 = param_2[0xf], lVar8 != 0)) {
            uVar7 = *puVar10;
            uVar6 = *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x18);
            uVar2 = *(undefined4 *)(lVar8 + 0x18);
LAB_01d956e8:
            FUN_01d6ade4(lVar8,0,uVar7,uVar6,uVar2,0);
            return lVar5;
          }
        }
      }
    }
  }
LAB_01d95810:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


