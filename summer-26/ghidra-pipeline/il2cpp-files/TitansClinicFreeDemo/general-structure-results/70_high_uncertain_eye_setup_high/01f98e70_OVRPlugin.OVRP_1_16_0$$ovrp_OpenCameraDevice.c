/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_OpenCameraDevice
ENTRY_POINT: 01f98e70
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_16_0__ovrp_OpenCameraDevice(undefined8 param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  long *plVar12;
  uint uVar13;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012f5474(param_1);
  }
  puVar4 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar5 = thunk_FUN_01279b34(PTR_DAT_027b98d8);
  uVar6 = thunk_FUN_01275790(uVar5,*(undefined8 *)*puVar4);
  if ((uVar6 & 1) == 0) {
    uVar5 = thunk_FUN_01279b34(PTR_DAT_027b1d70);
    uVar6 = thunk_FUN_01275790(uVar5,*(undefined8 *)*puVar4);
    if ((uVar6 & 1) == 0) {
      puVar10 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar10 = *puVar4;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar10,&PTR_PTR_026574d8,0);
    }
    uVar5 = *puVar4;
    __cxa_end_catch();
    if (*(char *)(unaff_x19 + 1) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_011e1944(uVar5);
    }
    unaff_x19[5] = uVar5;
    *(undefined4 *)((long)unaff_x19 + 0xc) = 4;
    thunk_FUN_01286abc(unaff_x19 + 5,uVar5);
LAB_01f98d8c:
    uVar5 = 0;
  }
  else {
    __cxa_end_catch();
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
      uVar13 = 0;
LAB_01f98f14:
      if (uVar2 <= uVar13) goto LAB_01f9904c;
      plVar12 = (long *)(lVar7 + (long)(int)uVar13 * 8 + 0x20);
      if (*plVar12 == 0) goto LAB_01f99048;
      lVar9 = FUN_01e6ba9c(*plVar12,0);
      if (uVar13 < *(uint *)(lVar7 + 0x18)) {
        *plVar12 = lVar9;
        thunk_FUN_01286abc(plVar12,lVar9);
        if (lVar8 == 0) goto LAB_01f99048;
        if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
          uVar6 = 0;
          uVar11 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
          do {
            if ((uVar11 <= uVar6) || (*(uint *)(lVar7 + 0x18) <= uVar13)) goto LAB_01f9904c;
            lVar9 = *(long *)(lVar8 + 0x20 + uVar6 * 8);
            if ((unaff_x21 & 1) == 0) {
              if (lVar9 == 0) goto LAB_01f99048;
              uVar11 = FUN_01e68100(lVar9,*plVar12,0);
              if ((uVar11 & 1) != 0) goto LAB_01f98fc0;
            }
            else {
              iVar3 = FUN_01e672c0(lVar9,*plVar12,5,0);
              if (iVar3 == 0) goto LAB_01f98fc0;
            }
            uVar11 = (ulong)*(uint *)(lVar8 + 0x18);
            uVar6 = uVar6 + 1;
            if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar6) break;
          } while( true );
        }
        FUN_01f99324();
        goto LAB_01f98d8c;
      }
      goto LAB_01f9904c;
    }
LAB_01f99010:
    if (*(int *)(*(long *)PTR_DAT_027b3ea8 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar5 = FUN_01f99958();
    *unaff_x19 = uVar5;
    thunk_FUN_01286abc();
    uVar5 = 1;
  }
  return uVar5;
LAB_01f98fc0:
  if (lVar1 == 0) goto LAB_01f99048;
  if ((uint)uVar6 < *(uint *)(lVar1 + 0x18)) {
    uVar2 = *(uint *)(lVar7 + 0x18);
    uVar13 = uVar13 + 1;
    if ((int)uVar2 <= (int)uVar13) goto LAB_01f99010;
    goto LAB_01f98f14;
  }
LAB_01f9904c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


