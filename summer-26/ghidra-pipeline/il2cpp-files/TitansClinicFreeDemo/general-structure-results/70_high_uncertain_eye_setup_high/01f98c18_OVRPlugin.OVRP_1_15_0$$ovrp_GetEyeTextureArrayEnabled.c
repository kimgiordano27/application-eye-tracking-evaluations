/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetEyeTextureArrayEnabled
ENTRY_POINT: 01f98c18
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_15_0__ovrp_GetEyeTextureArrayEnabled(void)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  long *plVar14;
  uint uVar15;
  
  lVar7 = FUN_01e6ba9c();
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x10) == 0) {
LAB_01f98d84:
      FUN_01f99324();
      uVar9 = 0;
    }
    else {
      uVar5 = FUN_01e60d24(lVar7,0,0);
      if (*(int *)(*(long *)PTR_DAT_027b3998 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)PTR_DAT_027b3998);
      }
      uVar8 = FUN_01e7c948(uVar5,0);
      if ((((uVar8 & 1) == 0) && (sVar4 = FUN_01e60d24(lVar7,0,0), sVar4 != 0x2d)) &&
         (sVar4 = FUN_01e60d24(lVar7,0,0), puVar3 = PTR_DAT_027b3ea8, sVar4 != 0x2b)) {
        lVar11 = *(long *)PTR_DAT_027b3ea8;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_01220628();
          lVar11 = *(long *)puVar3;
        }
        lVar7 = FUN_01e6ac40(lVar7,**(undefined8 **)(lVar11 + 0xb8),0);
        lVar11 = FUN_01f97d88();
        if ((lVar11 == 0) || (lVar7 == 0)) goto LAB_01f99048;
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (0 < (int)uVar2) {
          lVar1 = *(long *)(lVar11 + 0x10);
          lVar11 = *(long *)(lVar11 + 0x18);
          uVar15 = 0;
LAB_01f98f14:
          if (uVar2 <= uVar15) goto LAB_01f9904c;
          plVar14 = (long *)(lVar7 + (long)(int)uVar15 * 8 + 0x20);
          if (*plVar14 == 0) goto LAB_01f99048;
          lVar12 = FUN_01e6ba9c(*plVar14,0);
          if (uVar15 < *(uint *)(lVar7 + 0x18)) {
            *plVar14 = lVar12;
            thunk_FUN_01286abc(plVar14,lVar12);
            if (lVar11 != 0) {
              if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
                uVar8 = 0;
                uVar13 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
                do {
                  if ((uVar13 <= uVar8) || (*(uint *)(lVar7 + 0x18) <= uVar15)) goto LAB_01f9904c;
                  lVar12 = *(long *)(lVar11 + 0x20 + uVar8 * 8);
                  if ((unaff_x21 & 1) == 0) {
                    if (lVar12 == 0) goto LAB_01f99048;
                    uVar13 = FUN_01e68100(lVar12,*plVar14,0);
                    if ((uVar13 & 1) != 0) goto LAB_01f98fc0;
                  }
                  else {
                    iVar6 = FUN_01e672c0(lVar12,*plVar14,5,0);
                    if (iVar6 == 0) goto LAB_01f98fc0;
                  }
                  uVar13 = (ulong)*(uint *)(lVar11 + 0x18);
                  uVar8 = uVar8 + 1;
                  if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar8) break;
                } while( true );
              }
              goto LAB_01f98d84;
            }
            goto LAB_01f99048;
          }
          goto LAB_01f9904c;
        }
LAB_01f99010:
        if (*(int *)(*(long *)PTR_DAT_027b3ea8 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar9 = FUN_01f99958();
        *unaff_x19 = uVar9;
        thunk_FUN_01286abc();
      }
      else {
        puVar3 = PTR_DAT_027b3ea8;
        if (*(int *)(*(long *)PTR_DAT_027b3ea8 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar9 = FUN_01f99390();
        if (*(int *)(*(long *)PTR_DAT_027b3108 + 0xe0) == 0) {
          thunk_FUN_01220628(*(long *)PTR_DAT_027b3108);
        }
        uVar10 = FUN_01f410f4(0);
        if (*(int *)(*(long *)PTR_DAT_027b39e0 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        FUN_01e84d60(lVar7,uVar9,uVar10,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar9 = FUN_01f99454();
        *unaff_x19 = uVar9;
        thunk_FUN_01286abc();
      }
      uVar9 = 1;
    }
    return uVar9;
  }
LAB_01f99048:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
LAB_01f98fc0:
  if (lVar1 == 0) goto LAB_01f99048;
  if ((uint)uVar8 < *(uint *)(lVar1 + 0x18)) {
    uVar2 = *(uint *)(lVar7 + 0x18);
    uVar15 = uVar15 + 1;
    if ((int)uVar2 <= (int)uVar15) goto LAB_01f99010;
    goto LAB_01f98f14;
  }
LAB_01f9904c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


