/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionCreate
ENTRY_POINT: 0696a238
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_20;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionCreate(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x24;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 in_stack_00000008;
  
  plVar9 = *(long **)(unaff_x24 + 0x738);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*plVar9 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_07c9e200(uVar5,0,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (((*unaff_x21 == 0) || (lVar3 = *(long *)(*unaff_x21 + 0xd0), lVar3 == 0)) ||
     (lVar3 = *(long *)(lVar3 + 0x28), lVar3 == 0)) goto LAB_0696a798;
  uVar5 = *(undefined8 *)(lVar3 + 0x18);
  if (*(int *)(*plVar9 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_07c9c218(uVar5,0,0);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b7020,0);
  }
  else {
    if (((*unaff_x21 == 0) || (lVar3 = *(long *)(*unaff_x21 + 0xd0), lVar3 == 0)) ||
       ((lVar3 = *(long *)(lVar3 + 0x28), lVar3 == 0 ||
        ((unaff_x20 == 0 || (*(long *)(unaff_x20 + 0x80) == 0)))))) goto LAB_0696a798;
    uVar6 = *(undefined8 *)(lVar3 + 0x18);
    uVar5 = FUN_07c98f88(*(long *)(unaff_x20 + 0x80),0);
    if (*(int *)(*plVar9 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*plVar9);
    }
    lVar3 = FUN_04658320(uVar6,uVar5,1,*(undefined8 *)PTR_DAT_084b7018);
    plVar7 = (long *)(unaff_x19 + 0x38);
    *plVar7 = lVar3;
    thunk_FUN_03afed3c(plVar7,lVar3);
    if (*plVar7 == 0) goto LAB_0696a798;
    lVar3 = FUN_07c9c69c(*plVar7,0);
    if (DAT_08974d89 == '\0') {
      FUN_03a8a718(PTR_DAT_084868a0);
      DAT_08974d89 = '\x01';
    }
    plVar2 = *(long **)(unaff_x20 + 0x80);
    if (plVar2 == (long *)0x0) goto LAB_0696a798;
    fVar12 = *(float *)(*(long *)(*(long *)PTR_DAT_084868a0 + 0xb8) + 0x20);
    uVar5 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_084868a0 + 0xb8) + 0x18);
    fVar10 = (float)(**(code **)(*plVar2 + 0x338))(plVar2,*(undefined8 *)(*plVar2 + 0x340));
    if (lVar3 == 0) goto LAB_0696a798;
    FUN_07cab7ec(-(float)uVar5 * fVar10,-(float)((ulong)uVar5 >> 0x20) * fVar10,-(fVar12 * fVar10),
                 lVar3,0);
    if (*plVar7 == 0) goto LAB_0696a798;
    lVar3 = FUN_07c9c69c(*plVar7,0);
    if (DAT_08974d8a == '\0') {
      FUN_03a8a718(PTR_DAT_08486860);
      DAT_08974d8a = '\x01';
    }
    if (lVar3 == 0) goto LAB_0696a798;
    puVar4 = *(undefined4 **)(*(long *)PTR_DAT_08486860 + 0xb8);
    FUN_07cac71c(*puVar4,puVar4[1],puVar4[2],puVar4[3],lVar3,0);
    if (*plVar7 == 0) goto LAB_0696a798;
    lVar3 = FUN_04561560(*plVar7,*(undefined8 *)PTR_DAT_084b7010);
    plVar7 = (long *)(unaff_x19 + 0x28);
    *plVar7 = lVar3;
    thunk_FUN_03afed3c(plVar7,lVar3);
    if (*plVar7 == 0) goto LAB_0696a798;
    thunk_FUN_07ca23d0(*plVar7,*(undefined8 *)PTR_DAT_084b7028,0);
    if (*plVar7 == 0) goto LAB_0696a798;
    in_stack_00000008 = FUN_07d1c684(*plVar7,0);
    plVar2 = *(long **)(unaff_x20 + 0x80);
    if (plVar2 == (long *)0x0) goto LAB_0696a798;
    fVar10 = (float)(**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(*plVar2 + 0x250));
    FUN_07d1d2c8(fVar10 * 1.5,&stack0x00000008,0);
    if (*plVar7 == 0) goto LAB_0696a798;
    uVar5 = FUN_07d1c684(*plVar7,0);
    puVar8 = (undefined8 *)(unaff_x19 + 0x58);
    *puVar8 = uVar5;
    thunk_FUN_03afed3c(puVar8,0);
    plVar7 = *(long **)(unaff_x20 + 0x80);
    if (plVar7 == (long *)0x0) goto LAB_0696a798;
    (**(code **)(*plVar7 + 0x248))(plVar7,*(undefined8 *)(*plVar7 + 0x250));
    FUN_07d1d2c8(puVar8,0);
  }
  if (((*unaff_x21 != 0) && (lVar3 = *(long *)(*unaff_x21 + 0xd0), lVar3 != 0)) &&
     (lVar3 = *(long *)(lVar3 + 0x28), lVar3 != 0)) {
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    if (*(int *)(*plVar9 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar1 = FUN_07c9c218(uVar5,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b7038,0);
      return;
    }
    if (((*unaff_x21 != 0) && (lVar3 = *(long *)(*unaff_x21 + 0xd0), lVar3 != 0)) &&
       ((lVar3 = *(long *)(lVar3 + 0x28), lVar3 != 0 &&
        ((unaff_x20 != 0 && (*(long *)(unaff_x20 + 0x80) != 0)))))) {
      uVar6 = *(undefined8 *)(lVar3 + 0x20);
      uVar5 = FUN_07c98f88(*(long *)(unaff_x20 + 0x80),0);
      if (*(int *)(*plVar9 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*plVar9);
      }
      lVar3 = FUN_04658320(uVar6,uVar5,1,*(undefined8 *)PTR_DAT_084b7018);
      plVar9 = (long *)(unaff_x19 + 0x40);
      *plVar9 = lVar3;
      thunk_FUN_03afed3c(plVar9,lVar3);
      if (*plVar9 != 0) {
        lVar3 = FUN_07c9c69c(*plVar9,0);
        if (DAT_08974d89 == '\0') {
          FUN_03a8a718(PTR_DAT_084868a0);
          DAT_08974d89 = '\x01';
        }
        plVar7 = *(long **)(unaff_x20 + 0x80);
        if (plVar7 != (long *)0x0) {
          uVar5 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_084868a0 + 0xb8) + 0x18);
          fVar12 = *(float *)(*(long *)(*(long *)PTR_DAT_084868a0 + 0xb8) + 0x20);
          fVar10 = (float)(**(code **)(*plVar7 + 0x338))(plVar7,*(undefined8 *)(*plVar7 + 0x340));
          plVar7 = *(long **)(unaff_x20 + 0x80);
          if ((plVar7 != (long *)0x0) &&
             (fVar11 = (float)(**(code **)(*plVar7 + 0x228))
                                        (plVar7,*(undefined8 *)(*plVar7 + 0x230)), lVar3 != 0)) {
            fVar10 = fVar10 + fVar11;
            FUN_07cab7ec(-(float)uVar5 * fVar10,-(float)((ulong)uVar5 >> 0x20) * fVar10,
                         fVar10 * -fVar12,lVar3,0);
            if (*plVar9 != 0) {
              lVar3 = FUN_07c9c69c(*plVar9,0);
              if (DAT_08974d8a == '\0') {
                FUN_03a8a718(PTR_DAT_08486860);
                DAT_08974d8a = '\x01';
              }
              if (lVar3 != 0) {
                puVar4 = *(undefined4 **)(*(long *)PTR_DAT_08486860 + 0xb8);
                FUN_07cac71c(*puVar4,puVar4[1],puVar4[2],puVar4[3],lVar3,0);
                if (*plVar9 != 0) {
                  lVar3 = FUN_04561560(*plVar9,*(undefined8 *)PTR_DAT_084b7010);
                  plVar9 = (long *)(unaff_x19 + 0x30);
                  *plVar9 = lVar3;
                  thunk_FUN_03afed3c(plVar9,lVar3);
                  if (*plVar9 != 0) {
                    thunk_FUN_07ca23d0(*plVar9,*(undefined8 *)PTR_DAT_084b7030,0);
                    if (*plVar9 != 0) {
                      uVar5 = FUN_07d1c684(*plVar9,0);
                      puVar8 = (undefined8 *)(unaff_x19 + 0x58);
                      *puVar8 = uVar5;
                      thunk_FUN_03afed3c(puVar8,0);
                      plVar9 = *(long **)(unaff_x20 + 0x80);
                      if (plVar9 != (long *)0x0) {
                        (**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
                        FUN_07d1d2c8(puVar8,0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0696a798:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


