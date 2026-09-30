/*
FUNCTION_NAME: FUN_0685b0ac
ENTRY_POINT: 0685b0ac
PROGRAM: Untangled-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


float FUN_0685b0ac(float param_1,float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  
  puVar2 = OVRPlugin_OVRP_1_113_0_TypeInfo;
  puVar1 = OVRPassthroughLayer_InterpolatedColorLutHandler_TypeInfo;
  if ((DAT_071d6b56 & 1) == 0) {
    FUN_02f07e70(OVRPlugin_OVRP_1_52_0_TypeInfo);
    FUN_02f07e70(OVRPassthroughLayer_<>c__DisplayClass10_0_TypeInfo);
    FUN_02f07e70(OVRPassthroughLayer_InterpolatedColorLutHandler_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_113_0_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d382e0);
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071d6b56 = 1;
  }
  fVar9 = (float)FUN_04710798(param_4,*(undefined8 *)puVar1);
  fVar10 = (float)FUN_047106f0(param_4,*(undefined8 *)puVar2);
  if ((*(long *)(param_4 + 0x450) != 0) &&
     (plVar3 = (long *)FUN_068c2b14(*(long *)(param_4 + 0x450),0), puVar1 = PTR_DAT_06d382e0,
     plVar3 != (long *)0x0)) {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06d382e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x2c) * 0x10 + 0x138);
          goto LAB_0685b1d0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)PTR_DAT_06d382e0,0x2c);
LAB_0685b1d0:
    fVar11 = (float)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((*(long *)(param_4 + 0x458) != 0) &&
       (plVar3 = (long *)FUN_068c2b14(*(long *)(param_4 + 0x458),0), plVar3 != (long *)0x0)) {
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x2c) * 0x10 + 0x138);
            goto LAB_0685b248;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)puVar1,0x2c);
LAB_0685b248:
      puVar1 = PTR_DAT_06d03010;
      fVar12 = (float)(*(code *)*puVar4)(plVar3,puVar4[1]);
      fVar10 = (fVar9 - fVar10) / (fVar11 - fVar12);
      fVar9 = log10f(ABS(fVar10));
      if (fVar10 == 0.0) {
        iVar6 = -0x80000000;
        if (5.0 - fVar9 != INFINITY) {
          iVar6 = (int)(5.0 - fVar9);
        }
      }
      else {
        if (DAT_071bb834 == '\0') {
          FUN_02f07e70(PTR_DAT_06d03010);
          DAT_071bb834 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        iVar6 = -0x80000000;
        if ((float)(int)fVar9 != INFINITY) {
          iVar6 = (int)fVar9;
        }
        iVar6 = -iVar6;
      }
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0xe < iVar6) {
        iVar6 = 0xf;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      dVar13 = (double)FUN_05603210((double)((param_2 - param_1) * param_3 + param_1),iVar6,1,0);
      return (float)dVar13;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


