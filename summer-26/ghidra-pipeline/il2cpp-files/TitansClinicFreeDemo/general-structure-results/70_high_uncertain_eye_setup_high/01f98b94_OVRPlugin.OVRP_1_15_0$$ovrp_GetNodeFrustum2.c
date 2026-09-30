/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetNodeFrustum2
ENTRY_POINT: 01f98b94
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_15_0__ovrp_GetNodeFrustum2(undefined8 param_1,undefined8 param_2)

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
  ulong uVar14;
  undefined8 *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long *plVar15;
  uint uVar16;
  
  uVar6 = FUN_01f7f404(param_1,param_2,0);
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
  if (unaff_x20 == (long *)0x0) {
LAB_01f98bc4:
    plVar15 = (long *)0x0;
  }
  else {
    if (*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar7 + 0x130)) goto LAB_01f98bc4;
    plVar15 = unaff_x20;
    if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)
    {
      plVar15 = (long *)0x0;
    }
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  puVar10 = PTR_DAT_027bcb60;
  if (plVar15 != (long *)0x0) {
    if (unaff_x20 == (long *)0x0) {
LAB_01f99048:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar6 = (**(code **)(*unaff_x20 + 0x568))();
    puVar10 = PTR_DAT_027c1210;
    if ((uVar6 & 1) != 0) {
      if (unaff_x22 == 0) {
        FUN_01f992c8();
      }
      else {
        lVar7 = FUN_01e6ba9c();
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
            lVar7 = FUN_01e6ac40(lVar7,**(undefined8 **)(lVar12 + 0xb8),0);
            lVar12 = FUN_01f97d88(plVar15,1);
            if ((lVar12 == 0) || (lVar7 == 0)) goto LAB_01f99048;
            uVar2 = *(uint *)(lVar7 + 0x18);
            if (0 < (int)uVar2) {
              lVar1 = *(long *)(lVar12 + 0x10);
              lVar12 = *(long *)(lVar12 + 0x18);
              uVar16 = 0;
LAB_01f98f14:
              if (uVar16 < uVar2) {
                plVar15 = (long *)(lVar7 + (long)(int)uVar16 * 8 + 0x20);
                if (*plVar15 != 0) {
                  lVar13 = FUN_01e6ba9c(*plVar15,0);
                  if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_01f9904c;
                  *plVar15 = lVar13;
                  thunk_FUN_01286abc(plVar15,lVar13);
                  if (lVar12 != 0) {
                    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
                      uVar6 = 0;
                      uVar14 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
                      do {
                        if ((uVar14 <= uVar6) || (*(uint *)(lVar7 + 0x18) <= uVar16))
                        goto LAB_01f9904c;
                        lVar13 = *(long *)(lVar12 + 0x20 + uVar6 * 8);
                        if ((unaff_x21 & 1) == 0) {
                          if (lVar13 == 0) goto LAB_01f99048;
                          uVar14 = FUN_01e68100(lVar13,*plVar15,0);
                          if ((uVar14 & 1) != 0) goto LAB_01f98fc0;
                        }
                        else {
                          iVar5 = FUN_01e672c0(lVar13,*plVar15,5,0);
                          if (iVar5 == 0) goto LAB_01f98fc0;
                        }
                        uVar14 = (ulong)*(uint *)(lVar12 + 0x18);
                        uVar6 = uVar6 + 1;
                        if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar6) break;
                      } while( true );
                    }
                    goto LAB_01f98d84;
                  }
                }
                goto LAB_01f99048;
              }
LAB_01f9904c:
                    /* WARNING: Subroutine does not return */
              FUN_01230ca8();
            }
LAB_01f99010:
            if (*(int *)(*(long *)PTR_DAT_027b3ea8 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar8 = FUN_01f99958();
            *unaff_x19 = uVar8;
            thunk_FUN_01286abc();
          }
          else {
            puVar10 = PTR_DAT_027b3ea8;
            if (*(int *)(*(long *)PTR_DAT_027b3ea8 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar8 = FUN_01f99390();
            if (*(int *)(*(long *)PTR_DAT_027b3108 + 0xe0) == 0) {
              thunk_FUN_01220628(*(long *)PTR_DAT_027b3108);
            }
            uVar9 = FUN_01f410f4(0);
            if (*(int *)(*(long *)PTR_DAT_027b39e0 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            FUN_01e84d60(lVar7,uVar8,uVar9,0);
            if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar8 = FUN_01f99454();
            *unaff_x19 = uVar8;
            thunk_FUN_01286abc();
          }
          return 1;
        }
LAB_01f98d84:
        FUN_01f99324();
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
  if ((uint)uVar6 < *(uint *)(lVar1 + 0x18)) {
    uVar2 = *(uint *)(lVar7 + 0x18);
    uVar16 = uVar16 + 1;
    if ((int)uVar2 <= (int)uVar16) goto LAB_01f99010;
    goto LAB_01f98f14;
  }
  goto LAB_01f9904c;
}


