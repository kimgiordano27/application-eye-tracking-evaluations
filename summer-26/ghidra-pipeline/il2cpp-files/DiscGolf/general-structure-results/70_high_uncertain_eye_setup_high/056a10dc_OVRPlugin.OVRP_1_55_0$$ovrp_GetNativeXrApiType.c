/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_0$$ovrp_GetNativeXrApiType
ENTRY_POINT: 056a10dc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_55_0__ovrp_GetNativeXrApiType
               (undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar4;
  long *plVar5;
  long *unaff_x22;
  long *plVar6;
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
  
  LeanTween__value();
  lVar1 = *(long *)(*unaff_x24 + 0x20);
                    /* try { // try from 056a10e8 to 057a115b has its CatchHandler @ 056a14b0 */
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  uVar4 = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 8);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x22);
  }
  uVar2 = FUN_063542dc(uVar4,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar1 = *(long *)(*unaff_x24 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar1 != 0) {
    uVar4 = FUN_05660db8(lVar1,0);
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02df485c(*unaff_x22);
    }
    uVar2 = FUN_06350670(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    lVar1 = *(long *)(*unaff_x24 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
    if ((lVar1 != 0) && (lVar1 = FUN_05660db8(lVar1,0), lVar1 != 0)) {
      lVar1 = FUN_0634bb04(lVar1,0);
      plVar5 = (long *)(unaff_x19 + 0x40);
      *plVar5 = lVar1;
      LeanTween__value(plVar5,lVar1);
      if (*(int *)(unaff_x19 + 0x28) == 1) {
        plVar6 = (long *)(unaff_x19 + 0x38);
        lVar1 = *plVar6;
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
          *plVar6 = lVar1;
          LeanTween__value(plVar6,lVar1);
        }
        if (*plVar5 == 0) goto LAB_056a149c;
        lVar1 = *unaff_x20;
        fVar7 = (float)FUN_0635d920(*plVar5,0);
        if (*unaff_x20 == 0) goto LAB_056a149c;
        fVar13 = param_2;
        fVar10 = param_3;
        fVar8 = (float)FUN_0635d920(*unaff_x20,0);
        if ((*plVar6 == 0) ||
           (fVar14 = fVar13, fVar15 = fVar10, lVar3 = FUN_0634ee08(*plVar6,0), lVar3 == 0))
        goto LAB_056a149c;
        fVar7 = fVar7 - fVar8;
        param_2 = param_2 - fVar13;
        param_3 = param_3 - fVar10;
        FUN_0635be14(lVar3,0);
        fVar13 = (float)FUN_0633fd20(0);
      }
      else if (*(int *)(unaff_x19 + 0x28) == 0) {
        if (*plVar5 == 0) goto LAB_056a149c;
        lVar1 = *unaff_x20;
        fVar7 = (float)FUN_0635d920(*plVar5,0);
        if (*unaff_x20 == 0) goto LAB_056a149c;
        fVar13 = param_2;
        fVar10 = param_3;
        fVar8 = (float)FUN_0635d920(*unaff_x20,0);
        fVar7 = fVar7 - fVar8;
        param_2 = param_2 - fVar13;
        fVar15 = *(float *)(unaff_x19 + 0x34);
        param_3 = param_3 - fVar10;
        fVar13 = *(float *)(unaff_x19 + 0x2c);
        fVar14 = *(float *)(unaff_x19 + 0x30);
      }
      else {
        uVar4 = *(undefined8 *)(unaff_x19 + 0x38);
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar2 = FUN_0634eb94(uVar4,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (*plVar5 == 0) goto LAB_056a149c;
        lVar1 = *unaff_x20;
        fVar7 = (float)FUN_0635d920(*plVar5,0);
        if (*unaff_x20 == 0) goto LAB_056a149c;
        fVar10 = param_2;
        fVar8 = param_3;
        fVar9 = (float)FUN_0635d920(*unaff_x20,0);
        if (*unaff_x20 == 0) goto LAB_056a149c;
        fVar14 = fVar10;
        fVar15 = fVar8;
        fVar13 = (float)FUN_0635d920(*unaff_x20,0);
        if ((*(long *)(unaff_x19 + 0x38) == 0) ||
           (fVar11 = fVar14, fVar12 = fVar15, lVar3 = FUN_0634ee08(*(long *)(unaff_x19 + 0x38),0),
           lVar3 == 0)) goto LAB_056a149c;
        fVar7 = fVar7 - fVar9;
        param_2 = param_2 - fVar10;
        param_3 = param_3 - fVar8;
        fVar10 = (float)FUN_0635d920(lVar3,0);
        fVar13 = fVar13 - fVar10;
        fVar14 = fVar14 - fVar11;
        fVar15 = fVar15 - fVar12;
      }
      FUN_0633fa1c(fVar7,param_2,param_3,fVar13,fVar14,fVar15,0);
      if (lVar1 != 0) {
        FUN_0635dba8(lVar1,0);
        return;
      }
    }
  }
LAB_056a149c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


