/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_EnqueueSubmitLayer
ENTRY_POINT: 01f98ac8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSubmitLayer
          (long *param_1,long param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  uint uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  uint uVar18;
  ulong uVar19;
  
  puVar10 = PTR_DAT_027b32e0;
  if ((DAT_0293df1c & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3998);
    thunk_FUN_01279b34(PTR_DAT_027b39e0);
    thunk_FUN_01279b34(PTR_DAT_027b3108);
    thunk_FUN_01279b34(PTR_DAT_027b3ea8);
    thunk_FUN_01279b34(PTR_DAT_027b3ec0);
    thunk_FUN_01279b34(PTR_DAT_027b32e0);
    thunk_FUN_01279b34(PTR_DAT_027b53a0);
    thunk_FUN_01279b34(PTR_DAT_027c1cf0);
    thunk_FUN_01279b34(PTR_DAT_027c1cf8);
    DAT_0293df1c = 1;
  }
  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar6 = FUN_01f7f404(param_1,0,0);
  if ((uVar6 & 1) != 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar8 = thunk_FUN_0124bba8();
    uVar9 = thunk_FUN_01279b34(PTR_DAT_027c1218);
    FUN_01e75914(uVar8,uVar9,0);
    uVar9 = thunk_FUN_01279b34(PTR_DAT_027c1d00);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar8,uVar9);
  }
  lVar7 = *(long *)PTR_DAT_027b3ec0;
  if (param_1 == (long *)0x0) {
LAB_01f98bc4:
    plVar17 = (long *)0x0;
  }
  else {
    if (*(byte *)(*param_1 + 0x130) < *(byte *)(lVar7 + 0x130)) goto LAB_01f98bc4;
    plVar17 = param_1;
    if (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7) {
      plVar17 = (long *)0x0;
    }
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  puVar10 = PTR_DAT_027bcb60;
  if (plVar17 != (long *)0x0) {
    if (param_1 == (long *)0x0) {
LAB_01f99048:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar6 = (**(code **)(*param_1 + 0x568))(param_1,*(undefined8 *)(*param_1 + 0x570));
    puVar10 = PTR_DAT_027c1210;
    if ((uVar6 & 1) != 0) {
      if (param_2 == 0) {
        FUN_01f992c8(param_4,2,*(undefined8 *)PTR_DAT_027b53a0);
      }
      else {
        lVar7 = FUN_01e6ba9c(param_2,0);
        if (lVar7 == 0) goto LAB_01f99048;
        if (*(int *)(lVar7 + 0x10) != 0) {
          uVar4 = FUN_01e60d24(lVar7,0,0);
          if (*(int *)(*(long *)PTR_DAT_027b3998 + 0xe0) == 0) {
            thunk_FUN_01220628(*(long *)PTR_DAT_027b3998);
          }
          uVar6 = FUN_01e7c948(uVar4,0);
          if ((((uVar6 & 1) == 0) && (sVar3 = FUN_01e60d24(lVar7,0,0), sVar3 != 0x2d)) &&
             (sVar3 = FUN_01e60d24(lVar7,0,0), puVar10 = PTR_DAT_027b3ea8, sVar3 != 0x2b)) {
            lVar12 = *(long *)PTR_DAT_027b3ea8;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01220628();
              lVar12 = *(long *)puVar10;
            }
            lVar12 = FUN_01e6ac40(lVar7,**(undefined8 **)(lVar12 + 0xb8),0);
            lVar13 = FUN_01f97d88(plVar17,1);
            if ((lVar13 == 0) || (lVar12 == 0)) goto LAB_01f99048;
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (0 < (int)uVar2) {
              lVar1 = *(long *)(lVar13 + 0x10);
              lVar13 = *(long *)(lVar13 + 0x18);
              uVar18 = 0;
              uVar6 = 0;
LAB_01f98f14:
              if (uVar18 < uVar2) {
                plVar17 = (long *)(lVar12 + (long)(int)uVar18 * 8 + 0x20);
                if (*plVar17 == 0) goto LAB_01f99048;
                lVar14 = FUN_01e6ba9c(*plVar17,0);
                if (*(uint *)(lVar12 + 0x18) <= uVar18) goto LAB_01f9904c;
                *plVar17 = lVar14;
                thunk_FUN_01286abc(plVar17,lVar14);
                if (lVar13 == 0) goto LAB_01f99048;
                if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
                  uVar19 = 0;
                  uVar16 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
                  do {
                    if ((uVar16 <= uVar19) || (*(uint *)(lVar12 + 0x18) <= uVar18))
                    goto LAB_01f9904c;
                    lVar14 = *(long *)(lVar13 + 0x20 + uVar19 * 8);
                    if ((param_3 & 1) == 0) {
                      if (lVar14 == 0) goto LAB_01f99048;
                      uVar16 = FUN_01e68100(lVar14,*plVar17,0);
                      if ((uVar16 & 1) != 0) goto LAB_01f98fc0;
                    }
                    else {
                      iVar5 = FUN_01e672c0(lVar14,*plVar17,5,0);
                      if (iVar5 == 0) goto LAB_01f98fc0;
                    }
                    uVar16 = (ulong)*(uint *)(lVar13 + 0x18);
                    uVar19 = uVar19 + 1;
                    if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar19) break;
                  } while( true );
                }
                uVar8 = 3;
                puVar15 = (undefined8 *)PTR_DAT_027c1cf0;
                goto LAB_01f98d84;
              }
LAB_01f9904c:
                    /* WARNING: Subroutine does not return */
              FUN_01230ca8();
            }
            uVar6 = 0;
LAB_01f99010:
            if (*(int *)(*(long *)PTR_DAT_027b3ea8 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar8 = FUN_01f99958(param_1,uVar6);
            *param_4 = uVar8;
            thunk_FUN_01286abc(param_4);
          }
          else {
            puVar10 = PTR_DAT_027b3ea8;
            if (*(int *)(*(long *)PTR_DAT_027b3ea8 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar8 = FUN_01f99390(param_1);
            if (*(int *)(*(long *)PTR_DAT_027b3108 + 0xe0) == 0) {
              thunk_FUN_01220628(*(long *)PTR_DAT_027b3108);
            }
            uVar9 = FUN_01f410f4(0);
            if (*(int *)(*(long *)PTR_DAT_027b39e0 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar8 = FUN_01e84d60(lVar7,uVar8,uVar9,0);
            if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar8 = FUN_01f99454(param_1,uVar8);
            *param_4 = uVar8;
            thunk_FUN_01286abc(param_4);
          }
          return 1;
        }
        uVar8 = 1;
        lVar7 = 0;
        puVar15 = (undefined8 *)PTR_DAT_027c1cf8;
LAB_01f98d84:
        FUN_01f99324(param_4,uVar8,*puVar15,lVar7);
      }
      return 0;
    }
  }
  uVar8 = thunk_FUN_01279b34(puVar10);
  thunk_FUN_01279b34(PTR_DAT_027b3eb0);
  uVar9 = thunk_FUN_0124bba8();
  uVar11 = thunk_FUN_01279b34(PTR_DAT_027c1218);
  FUN_01e7598c(uVar9,uVar8,uVar11,0);
  uVar8 = thunk_FUN_01279b34(PTR_DAT_027c1d00);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar9,uVar8);
LAB_01f98fc0:
  if (lVar1 == 0) goto LAB_01f99048;
  if ((uint)uVar19 < *(uint *)(lVar1 + 0x18)) {
    uVar2 = *(uint *)(lVar12 + 0x18);
    uVar18 = uVar18 + 1;
    uVar6 = *(ulong *)(lVar1 + 0x20 + uVar19 * 8) | uVar6;
    if ((int)uVar2 <= (int)uVar18) goto LAB_01f99010;
    goto LAB_01f98f14;
  }
  goto LAB_01f9904c;
}


