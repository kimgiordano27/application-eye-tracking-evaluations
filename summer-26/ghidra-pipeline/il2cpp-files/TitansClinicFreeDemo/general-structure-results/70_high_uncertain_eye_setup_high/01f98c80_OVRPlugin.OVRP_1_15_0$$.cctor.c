/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$.cctor
ENTRY_POINT: 01f98c80
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_15_0___cctor(void)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  short sVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int in_w8;
  ulong uVar10;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  
  if ((in_w8 == 0x2d) || (sVar4 = FUN_01e60d24(), sVar4 == 0x2b)) {
    puVar3 = PTR_DAT_027b3ea8;
    if (*(int *)(*(long *)PTR_DAT_027b3ea8 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f99390();
    if (*(int *)(*(long *)PTR_DAT_027b3108 + 0xe0) == 0) {
      thunk_FUN_01220628(*(long *)PTR_DAT_027b3108);
    }
    FUN_01f410f4(0);
    if (*(int *)(*(long *)PTR_DAT_027b39e0 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01e84d60();
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar6 = FUN_01f99454();
    *unaff_x19 = uVar6;
    thunk_FUN_01286abc();
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_027b3ea8 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    lVar7 = FUN_01e6ac40();
    lVar8 = FUN_01f97d88();
    if ((lVar8 == 0) || (lVar7 == 0)) {
LAB_01f99048:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar2 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar2) {
      lVar1 = *(long *)(lVar8 + 0x10);
      lVar8 = *(long *)(lVar8 + 0x18);
      uVar12 = 0;
LAB_01f98f14:
      if (uVar12 < uVar2) {
        plVar11 = (long *)(lVar7 + (long)(int)uVar12 * 8 + 0x20);
        if (*plVar11 != 0) {
          lVar9 = FUN_01e6ba9c(*plVar11,0);
          if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_01f9904c;
          *plVar11 = lVar9;
          thunk_FUN_01286abc(plVar11,lVar9);
          if (lVar8 != 0) {
            if ((int)*(ulong *)(lVar8 + 0x18) < 1) {
LAB_01f98d84:
              FUN_01f99324();
              return 0;
            }
            uVar13 = 0;
            uVar10 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
            do {
              if ((uVar10 <= uVar13) || (*(uint *)(lVar7 + 0x18) <= uVar12)) goto LAB_01f9904c;
              lVar9 = *(long *)(lVar8 + 0x20 + uVar13 * 8);
              if ((unaff_x21 & 1) == 0) {
                if (lVar9 == 0) break;
                uVar10 = FUN_01e68100(lVar9,*plVar11,0);
                if ((uVar10 & 1) != 0) goto LAB_01f98fc0;
              }
              else {
                iVar5 = FUN_01e672c0(lVar9,*plVar11,5,0);
                if (iVar5 == 0) goto LAB_01f98fc0;
              }
              uVar10 = (ulong)*(uint *)(lVar8 + 0x18);
              uVar13 = uVar13 + 1;
              if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar13) goto LAB_01f98d84;
            } while( true );
          }
        }
        goto LAB_01f99048;
      }
      goto LAB_01f9904c;
    }
LAB_01f99010:
    if (*(int *)(*(long *)PTR_DAT_027b3ea8 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar6 = FUN_01f99958();
    *unaff_x19 = uVar6;
    thunk_FUN_01286abc();
  }
  return 1;
LAB_01f98fc0:
  if (lVar1 == 0) goto LAB_01f99048;
  if ((uint)uVar13 < *(uint *)(lVar1 + 0x18)) {
    uVar2 = *(uint *)(lVar7 + 0x18);
    uVar12 = uVar12 + 1;
    if ((int)uVar2 <= (int)uVar12) goto LAB_01f99010;
    goto LAB_01f98f14;
  }
LAB_01f9904c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


