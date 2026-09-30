/*
FUNCTION_NAME: FUN_01fae100
ENTRY_POINT: 01fae100
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long FUN_01fae100(long *param_1,long param_2,long *param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  
  puVar10 = PTR_DAT_027b32e0;
  if ((DAT_0293dfed & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027c25f0);
    thunk_FUN_01279b34(PTR_DAT_027bc3c0);
    thunk_FUN_01279b34(PTR_DAT_027b32e0);
                    /* try { // try from 01fae168 to 020ae367 has its CatchHandler @ 01fae168
                       catch() { ... } // from try @ 01fae168 with catch @ 01fae168
                       catch() { ... } // from try @ 01fae434 with catch @ 01fae168
                       catch() { ... } // from try @ 01fae4d8 with catch @ 01fae168
                       catch() { ... } // from try @ 01fae590 with catch @ 01fae168 */
    thunk_FUN_01279b34(PTR_DAT_027c25f8);
    DAT_0293dfed = 1;
  }
  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar4 = FUN_01f7f404(param_1,0,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_01ee57ec(param_3,0,0);
    if ((uVar4 & 1) == 0) {
      uVar13 = *(undefined8 *)PTR_DAT_027bc3c0;
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar13 = FUN_01f7d8a0(uVar13,0);
      if (param_1 == (long *)0x0) goto LAB_01fae878;
      uVar4 = (**(code **)(*param_1 + 0x278))(param_1,uVar13,*(undefined8 *)(*param_1 + 0x280));
      if ((uVar4 & 1) == 0) {
        thunk_FUN_01279b34(PTR_DAT_027b3eb0);
        uVar13 = thunk_FUN_0124bba8();
        puVar10 = PTR_DAT_027c2618;
LAB_01fae8ec:
        uVar6 = thunk_FUN_01279b34(puVar10);
        FUN_01e7d290(uVar13,uVar6,0);
        goto LAB_01fae900;
      }
      plVar5 = (long *)FUN_01f818dc(param_1,*(undefined8 *)PTR_DAT_027c25f8,0);
      if ((plVar5 == (long *)0x0) ||
         (uVar13 = (**(code **)(*plVar5 + 0x398))(plVar5,*(undefined8 *)(*plVar5 + 0x3a0)),
         param_3 == (long *)0x0)) goto LAB_01fae878;
      uVar6 = (**(code **)(*param_3 + 0x398))(param_3,*(undefined8 *)(*param_3 + 0x3a0));
      uVar4 = FUN_01fadee8(uVar13,uVar6);
      if ((uVar4 & 1) == 0) {
        if ((param_4 & 1) != 0) {
          thunk_FUN_01279b34(PTR_DAT_027b3eb0);
          uVar13 = thunk_FUN_0124bba8();
          puVar10 = PTR_DAT_027c2600;
          goto LAB_01fae8ec;
        }
LAB_01fae73c:
        lVar7 = 0;
      }
      else {
        lVar7 = (**(code **)(*plVar5 + 0x338))(plVar5,*(undefined8 *)(*plVar5 + 0x340));
        lVar8 = (**(code **)(*param_3 + 0x338))(param_3,*(undefined8 *)(*param_3 + 0x340));
        uVar4 = FUN_01ee569c(param_3,0);
        if ((lVar8 == 0) || (lVar7 == 0)) goto LAB_01fae878;
        iVar11 = *(int *)(lVar8 + 0x18);
        if (param_2 == 0) {
          if ((uVar4 & 1) == 0) {
            iVar12 = *(int *)(lVar7 + 0x18);
            if (iVar11 + 1 != iVar12) goto joined_r0x01fae2ec;
          }
          else {
            iVar12 = *(int *)(lVar7 + 0x18);
            if (iVar11 != iVar12) goto LAB_01fae2e4;
          }
        }
        else {
          iVar12 = *(int *)(lVar7 + 0x18);
          if ((uVar4 & 1) != 0) {
LAB_01fae2e4:
            iVar12 = iVar12 + 1;
          }
joined_r0x01fae2ec:
          if (iVar12 != iVar11) {
            if ((param_4 & 1) != 0) {
              thunk_FUN_01279b34(PTR_DAT_027bd218);
              uVar13 = thunk_FUN_0124bba8();
              uVar6 = thunk_FUN_01279b34(PTR_DAT_027c2608);
              FUN_01ee9b80(uVar13,uVar6,0);
              goto LAB_01fae900;
            }
            goto LAB_01fae73c;
          }
        }
        lVar9 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c25f0);
        uVar4 = FUN_01ee569c(param_3,0);
        if (param_2 == 0) {
          if ((uVar4 & 1) == 0) {
            iVar11 = *(int *)(lVar8 + 0x18);
            iVar12 = (int)*(undefined8 *)(lVar7 + 0x18);
            if (iVar11 + 1 == iVar12) {
              if (iVar11 == -1) goto LAB_01fae728;
              plVar5 = *(long **)(lVar7 + 0x20);
              if (plVar5 == (long *)0x0) goto LAB_01fae878;
              uVar13 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
              uVar6 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
              param_5 = FUN_01fadd8c(uVar13,uVar6,0);
              if (0 < *(int *)(lVar8 + 0x18)) {
                uVar4 = 0;
                do {
                  uVar1 = uVar4 + 1;
                  if (*(uint *)(lVar7 + 0x18) <= uVar1) goto LAB_01fae728;
                  plVar5 = *(long **)(lVar7 + 0x28 + uVar4 * 8);
                  if (plVar5 == (long *)0x0) goto LAB_01fae878;
                  uVar13 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
                  if (*(uint *)(lVar8 + 0x18) <= uVar4) goto LAB_01fae728;
                  plVar5 = *(long **)(lVar8 + 0x20 + uVar4 * 8);
                  if (plVar5 == (long *)0x0) goto LAB_01fae878;
                  uVar6 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
                  uVar3 = FUN_01fadbf4(uVar13,uVar6);
                  param_5 = param_5 & uVar3;
                  uVar4 = uVar1;
                } while ((long)uVar1 < (long)*(int *)(lVar8 + 0x18));
              }
            }
            else if (0 < iVar11) {
              if (iVar12 != 0) {
                lVar14 = 0;
                do {
                  plVar5 = *(long **)(lVar7 + 0x20 + lVar14 * 8);
                  if (plVar5 == (long *)0x0) goto LAB_01fae878;
                  uVar13 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
                  if (*(uint *)(lVar8 + 0x18) <= (uint)lVar14) break;
                  plVar5 = *(long **)(lVar8 + 0x20 + lVar14 * 8);
                  if (plVar5 == (long *)0x0) goto LAB_01fae878;
                  uVar6 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
                  uVar3 = FUN_01fadbf4(uVar13,uVar6);
                  param_5 = param_5 & uVar3;
                  if (*(int *)(lVar8 + 0x18) <= (int)((uint)lVar14 + 1)) goto joined_r0x01fae734;
                  lVar14 = lVar14 + 1;
                } while ((uint)lVar14 < *(uint *)(lVar7 + 0x18));
              }
              goto LAB_01fae728;
            }
            goto joined_r0x01fae734;
          }
          iVar11 = (int)*(undefined8 *)(lVar7 + 0x18);
          if (iVar11 + 1 == *(int *)(lVar8 + 0x18)) {
            if (iVar11 == -1) goto LAB_01fae728;
            plVar5 = *(long **)(lVar8 + 0x20);
            if ((plVar5 == (long *)0x0) ||
               (lVar14 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0)),
               lVar14 == 0)) goto LAB_01fae878;
            uVar4 = OVRPlugin__set_tiledMultiResLevel(lVar14,0);
            if ((uVar4 & 1) == 0) {
              if (*(int *)(lVar8 + 0x18) == 0) goto LAB_01fae728;
              plVar5 = *(long **)(lVar8 + 0x20);
              if ((plVar5 == (long *)0x0) ||
                 (lVar14 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0)),
                 lVar14 == 0)) goto LAB_01fae878;
              uVar3 = FUN_01f80ed8(lVar14,0);
              uVar3 = ~uVar3 & 1;
            }
            else {
              uVar3 = 0;
            }
            uVar2 = *(uint *)(lVar7 + 0x18);
            param_5 = param_5 & uVar3;
            if (0 < (int)uVar2) {
              lVar14 = 0;
              do {
                if (uVar2 <= (uint)lVar14) goto LAB_01fae728;
                plVar5 = *(long **)(lVar7 + 0x20 + lVar14 * 8);
                if (plVar5 == (long *)0x0) goto LAB_01fae878;
                uVar13 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
                uVar3 = (uint)lVar14 + 1;
                if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_01fae728;
                plVar5 = *(long **)(lVar8 + (long)(int)uVar3 * 8 + 0x20);
                if (plVar5 == (long *)0x0) goto LAB_01fae878;
                uVar6 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
                uVar3 = FUN_01fadbf4(uVar13,uVar6);
                uVar2 = *(uint *)(lVar7 + 0x18);
                param_5 = uVar3 & param_5;
                lVar14 = lVar14 + 1;
              } while ((int)lVar14 < (int)uVar2);
            }
            if (lVar9 == 0) goto LAB_01fae878;
            *(undefined1 *)(lVar9 + 0x20) = 1;
            goto joined_r0x01fae82c;
          }
          if (0 < *(int *)(lVar8 + 0x18)) {
            if (iVar11 != 0) {
              lVar14 = 0;
              param_5 = 1;
              do {
                plVar5 = *(long **)(lVar7 + 0x20 + lVar14 * 8);
                if (plVar5 == (long *)0x0) goto LAB_01fae878;
                uVar13 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
                if (*(uint *)(lVar8 + 0x18) <= (uint)lVar14) break;
                plVar5 = *(long **)(lVar8 + 0x20 + lVar14 * 8);
                if (plVar5 == (long *)0x0) goto LAB_01fae878;
                uVar6 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
                uVar3 = FUN_01fadbf4(uVar13,uVar6);
                param_5 = param_5 & uVar3;
                if (*(int *)(lVar8 + 0x18) <= (int)((uint)lVar14 + 1)) goto joined_r0x01fae734;
                lVar14 = lVar14 + 1;
              } while ((uint)lVar14 < *(uint *)(lVar7 + 0x18));
            }
LAB_01fae728:
                    /* WARNING: Subroutine does not return */
            FUN_01230ca8();
          }
        }
        else {
          uVar13 = FUN_0122c1cc(param_2);
          if ((uVar4 & 1) == 0) {
            uVar6 = (**(code **)(*param_3 + 0x1b8))(param_3,*(undefined8 *)(*param_3 + 0x1c0));
            param_5 = FUN_01fadd8c(uVar13,uVar6,1);
            if (0 < *(int *)(lVar8 + 0x18)) {
              lVar14 = 0;
              do {
                if (*(uint *)(lVar7 + 0x18) <= (uint)lVar14) goto LAB_01fae728;
                plVar5 = *(long **)(lVar7 + 0x20 + lVar14 * 8);
                if (plVar5 == (long *)0x0) goto LAB_01fae878;
                uVar13 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
                if (*(uint *)(lVar8 + 0x18) <= (uint)lVar14) goto LAB_01fae728;
                plVar5 = *(long **)(lVar8 + 0x20 + lVar14 * 8);
                if (plVar5 == (long *)0x0) goto LAB_01fae878;
                uVar6 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
                uVar3 = FUN_01fadbf4(uVar13,uVar6);
                lVar14 = lVar14 + 1;
                param_5 = param_5 & uVar3;
              } while ((int)lVar14 < *(int *)(lVar8 + 0x18));
            }
          }
          else {
            if (*(int *)(lVar8 + 0x18) == 0) goto LAB_01fae728;
            plVar5 = *(long **)(lVar8 + 0x20);
            if (plVar5 == (long *)0x0) goto LAB_01fae878;
            uVar6 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
            param_5 = FUN_01fadbf4(uVar13,uVar6);
            if (1 < *(int *)(lVar8 + 0x18)) {
              lVar14 = 0;
              do {
                uVar3 = (uint)lVar14;
                if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_01fae728;
                plVar5 = *(long **)(lVar7 + (long)(int)uVar3 * 8 + 0x20);
                if (plVar5 == (long *)0x0) goto LAB_01fae878;
                uVar13 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
                if (*(uint *)(lVar8 + 0x18) <= uVar3 + 1) goto LAB_01fae728;
                plVar5 = *(long **)(lVar8 + 0x28 + lVar14 * 8);
                if (plVar5 == (long *)0x0) goto LAB_01fae878;
                uVar6 = (**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
                uVar3 = FUN_01fadbf4(uVar13,uVar6);
                lVar14 = lVar14 + 1;
                param_5 = param_5 & uVar3;
              } while ((int)lVar14 + 1 < *(int *)(lVar8 + 0x18));
            }
            if (lVar9 == 0) goto LAB_01fae878;
            *(undefined1 *)(lVar9 + 0x20) = 1;
          }
joined_r0x01fae734:
          param_5 = param_5 & 1;
joined_r0x01fae82c:
          if (param_5 == 0) {
            if ((param_4 & 1) != 0) {
              thunk_FUN_01279b34(PTR_DAT_027b3eb0);
              uVar13 = thunk_FUN_0124bba8();
              puVar10 = PTR_DAT_027c2628;
              goto LAB_01fae8ec;
            }
            goto LAB_01fae73c;
          }
        }
        lVar7 = FUN_011f683c(param_1,param_2,param_3,param_4 & 1);
        if (lVar7 == 0) {
          if (lVar9 != 0) {
LAB_01fae878:
                    /* WARNING: Subroutine does not return */
            FUN_01230ca0();
          }
        }
        else {
          *(long *)(lVar7 + 0x60) = (long)param_3;
          thunk_FUN_01286abc((long *)(lVar7 + 0x60),param_3);
          if (lVar9 != 0) {
            *(long *)(lVar7 + 0x68) = lVar9;
            thunk_FUN_01286abc((long *)(lVar7 + 0x68),lVar9);
          }
        }
      }
      return lVar7;
    }
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar13 = thunk_FUN_0124bba8();
    puVar10 = PTR_DAT_027c2610;
  }
  else {
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar13 = thunk_FUN_0124bba8();
    puVar10 = PTR_DAT_027bb820;
  }
  uVar6 = thunk_FUN_01279b34(puVar10);
  FUN_01e75914(uVar13,uVar6,0);
LAB_01fae900:
  uVar6 = thunk_FUN_01279b34(PTR_DAT_027c2620);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar13,uVar6);
}


