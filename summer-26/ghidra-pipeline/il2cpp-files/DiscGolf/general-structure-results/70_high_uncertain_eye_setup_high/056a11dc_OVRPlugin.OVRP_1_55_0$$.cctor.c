/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_0$$.cctor
ENTRY_POINT: 056a11dc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_55_0___cctor
               (ushort *param_1,undefined1 param_2 [16],float param_3,float param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long *plVar4;
  long *unaff_x22;
  long *plVar5;
  undefined8 uVar6;
  long *unaff_x24;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((*param_1 & 1) == 0) {
    param_5 = FUN_02dcfd18();
  }
  lVar1 = *(long *)(*(long *)(param_5 + 0xc0) + 8);
                    /* try { // try from 056a11f8 to 057a11ff has its CatchHandler @ 056a14c8 */
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
                    /* try { // try from 056a1208 to 057a127b has its CatchHandler @ 056a147c */
  if ((lVar1 == 0) || (lVar1 = FUN_05660db8(lVar1,0), lVar1 == 0)) goto LAB_056a149c;
  lVar1 = FUN_0634bb04(lVar1,0);
  plVar4 = (long *)(unaff_x19 + 0x40);
  *plVar4 = lVar1;
  LeanTween__value(plVar4,lVar1);
  if (*(int *)(unaff_x19 + 0x28) == 1) {
    plVar5 = (long *)(unaff_x19 + 0x38);
    lVar1 = *plVar5;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar2 = FUN_06350670(lVar1,0,0);
    if ((uVar2 & 1) != 0) {
      lVar1 = *(long *)(*unaff_x24 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02dcfd18();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02dcfd18();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
      if ((lVar1 == 0) || (lVar1 = FUN_05660db8(lVar1,0), lVar1 == 0)) goto LAB_056a149c;
      lVar1 = FUN_0634bbcc(lVar1,0);
      *plVar5 = lVar1;
      LeanTween__value(plVar5,lVar1);
    }
    if (*plVar4 == 0) goto LAB_056a149c;
    lVar1 = *unaff_x20;
    fVar7 = (float)FUN_0635d920(*plVar4,0);
    if (*unaff_x20 == 0) goto LAB_056a149c;
    fVar13 = param_3;
    fVar10 = param_4;
    fVar8 = (float)FUN_0635d920(*unaff_x20,0);
    if ((*plVar5 == 0) ||
       (fVar14 = fVar13, fVar15 = fVar10, lVar3 = FUN_0634ee08(*plVar5,0), lVar3 == 0))
    goto LAB_056a149c;
    fVar7 = fVar7 - fVar8;
    param_3 = param_3 - fVar13;
    param_4 = param_4 - fVar10;
    FUN_0635be14(lVar3,0);
    fVar13 = (float)FUN_0633fd20(0);
  }
  else if (*(int *)(unaff_x19 + 0x28) == 0) {
    if (*plVar4 == 0) goto LAB_056a149c;
    lVar1 = *unaff_x20;
    fVar7 = (float)FUN_0635d920(*plVar4,0);
    if (*unaff_x20 == 0) goto LAB_056a149c;
    fVar13 = param_3;
    fVar10 = param_4;
    fVar8 = (float)FUN_0635d920(*unaff_x20,0);
    fVar7 = fVar7 - fVar8;
    param_3 = param_3 - fVar13;
    fVar15 = *(float *)(unaff_x19 + 0x34);
    param_4 = param_4 - fVar10;
    fVar13 = *(float *)(unaff_x19 + 0x2c);
    fVar14 = *(float *)(unaff_x19 + 0x30);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar2 = FUN_0634eb94(uVar6,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*plVar4 == 0) goto LAB_056a149c;
    lVar1 = *unaff_x20;
    fVar7 = (float)FUN_0635d920(*plVar4,0);
    if (*unaff_x20 == 0) goto LAB_056a149c;
    fVar10 = param_3;
    fVar8 = param_4;
    fVar9 = (float)FUN_0635d920(*unaff_x20,0);
    if (*unaff_x20 == 0) goto LAB_056a149c;
    fVar14 = fVar10;
    fVar15 = fVar8;
    fVar13 = (float)FUN_0635d920(*unaff_x20,0);
    if ((*(long *)(unaff_x19 + 0x38) == 0) ||
       (fVar11 = fVar14, fVar12 = fVar15, lVar3 = FUN_0634ee08(*(long *)(unaff_x19 + 0x38),0),
       lVar3 == 0)) goto LAB_056a149c;
    fVar7 = fVar7 - fVar9;
    param_3 = param_3 - fVar10;
    param_4 = param_4 - fVar8;
    fVar10 = (float)FUN_0635d920(lVar3,0);
    fVar13 = fVar13 - fVar10;
    fVar14 = fVar14 - fVar11;
    fVar15 = fVar15 - fVar12;
  }
  FUN_0633fa1c(fVar7,param_3,param_4,fVar13,fVar14,fVar15,0);
  if (lVar1 != 0) {
    FUN_0635dba8(lVar1,0);
    return;
  }
LAB_056a149c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


