/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperMode
ENTRY_POINT: 033c54e0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 OVRPlugin__SetDeveloperMode(undefined8 param_1,int param_2)

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
    FUN_01e7f0d0(param_1);
  }
  puVar4 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar5 = thunk_FUN_01dd295c(StringLiteral_4275);
  uVar6 = thunk_FUN_01dce4e8(uVar5,*(undefined8 *)*puVar4);
  if ((uVar6 & 1) == 0) {
    uVar5 = thunk_FUN_01dd295c(StringLiteral_464);
    uVar6 = thunk_FUN_01dce4e8(uVar5,*(undefined8 *)*puVar4);
    if ((uVar6 & 1) == 0) {
      puVar10 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar10 = *puVar4;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar10,&
                          PTR_Method_SojaExiles_opencloseWindow1_<opening>d__5_System_Collections_IEnumerator_Reset___03fad958
                  ,0);
    }
    uVar5 = *puVar4;
    __cxa_end_catch();
    if (*(char *)(unaff_x19 + 1) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db68(uVar5);
    }
    unaff_x19[5] = uVar5;
    *(undefined4 *)((long)unaff_x19 + 0xc) = 4;
    thunk_FUN_01e10808(unaff_x19 + 5,uVar5);
LAB_033c53f4:
    uVar5 = 0;
  }
  else {
    __cxa_end_catch();
    if (*(int *)(*(long *)StringLiteral_1148 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar7 = FUN_0327baac();
    lVar8 = FUN_033c43e0();
    if ((lVar8 == 0) || (lVar7 == 0)) {
LAB_033c56b8:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar2 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar2) {
      lVar1 = *(long *)(lVar8 + 0x10);
      lVar8 = *(long *)(lVar8 + 0x18);
      uVar13 = 0;
LAB_033c5584:
      if (uVar2 <= uVar13) goto LAB_033c56bc;
      plVar12 = (long *)(lVar7 + (long)(int)uVar13 * 8 + 0x20);
      if (*plVar12 == 0) goto LAB_033c56b8;
      lVar9 = FUN_0327d400(*plVar12,0);
      if (uVar13 < *(uint *)(lVar7 + 0x18)) {
        *plVar12 = lVar9;
        thunk_FUN_01e10808(plVar12,lVar9);
        if (lVar8 == 0) goto LAB_033c56b8;
        if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
          uVar6 = 0;
          uVar11 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
          do {
            if ((uVar11 <= uVar6) || (*(uint *)(lVar7 + 0x18) <= uVar13)) goto LAB_033c56bc;
            lVar9 = *(long *)(lVar8 + 0x20 + uVar6 * 8);
            if ((unaff_x21 & 1) == 0) {
              if (lVar9 == 0) goto LAB_033c56b8;
              uVar11 = FUN_03278c78(lVar9,*plVar12,0);
              if ((uVar11 & 1) != 0) goto LAB_033c5630;
            }
            else {
              iVar3 = FUN_03277cf0(lVar9,*plVar12,5,0);
              if (iVar3 == 0) goto LAB_033c5630;
            }
            uVar11 = (ulong)*(uint *)(lVar8 + 0x18);
            uVar6 = uVar6 + 1;
            if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar6) break;
          } while( true );
        }
        FUN_033c5988();
        goto LAB_033c53f4;
      }
      goto LAB_033c56bc;
    }
LAB_033c5680:
    if (*(int *)(*(long *)StringLiteral_1148 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar5 = FUN_033c5fc4();
    *unaff_x19 = uVar5;
    thunk_FUN_01e10808();
    uVar5 = 1;
  }
  return uVar5;
LAB_033c5630:
  if (lVar1 == 0) goto LAB_033c56b8;
  if ((uint)uVar6 < *(uint *)(lVar1 + 0x18)) {
    uVar2 = *(uint *)(lVar7 + 0x18);
    uVar13 = uVar13 + 1;
    if ((int)uVar2 <= (int)uVar13) goto LAB_033c5680;
    goto LAB_033c5584;
  }
LAB_033c56bc:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


