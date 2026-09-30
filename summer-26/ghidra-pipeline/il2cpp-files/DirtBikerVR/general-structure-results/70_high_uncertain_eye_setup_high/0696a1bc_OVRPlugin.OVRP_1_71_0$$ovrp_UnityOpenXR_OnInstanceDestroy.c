/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnInstanceDestroy
ENTRY_POINT: 0696a1bc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnInstanceDestroy(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 in_stack_00000008;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0x20));
  FUN_03a8a718(PTR_DAT_084b7028);
  FUN_03a8a718(PTR_DAT_084b7030);
  FUN_03a8a718(PTR_DAT_084b7038);
  *(undefined1 *)(unaff_x21 + 0xd4) = 1;
  in_stack_00000008 = 0;
  plVar6 = (long *)(unaff_x19 + 0x70);
  *plVar6 = unaff_x22;
  thunk_FUN_03afed3c(plVar6);
  *(long *)(unaff_x19 + 0x78) = unaff_x20;
  thunk_FUN_03afed3c();
  puVar1 = PTR_DAT_08486738;
  if (((unaff_x22 != 0) && (lVar4 = *(long *)(unaff_x22 + 0xd0), lVar4 != 0)) &&
     (*(long *)(lVar4 + 0x18) != 0)) {
    if (*(char *)(*(long *)(lVar4 + 0x18) + 0x18) == '\0') {
      return;
    }
    uVar7 = *(undefined8 *)(lVar4 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar2 = FUN_07c9e200(uVar7,0,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if (((*plVar6 != 0) && (lVar4 = *(long *)(*plVar6 + 0xd0), lVar4 != 0)) &&
       (lVar4 = *(long *)(lVar4 + 0x28), lVar4 != 0)) {
      uVar7 = *(undefined8 *)(lVar4 + 0x18);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar2 = FUN_07c9c218(uVar7,0,0);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b7020,0);
      }
      else {
        if (((*plVar6 == 0) || (lVar4 = *(long *)(*plVar6 + 0xd0), lVar4 == 0)) ||
           ((lVar4 = *(long *)(lVar4 + 0x28), lVar4 == 0 ||
            ((unaff_x20 == 0 || (*(long *)(unaff_x20 + 0x80) == 0)))))) goto LAB_0696a798;
        uVar8 = *(undefined8 *)(lVar4 + 0x18);
        uVar7 = FUN_07c98f88(*(long *)(unaff_x20 + 0x80),0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)puVar1);
        }
        lVar4 = FUN_04658320(uVar8,uVar7,1,*(undefined8 *)PTR_DAT_084b7018);
        plVar9 = (long *)(unaff_x19 + 0x38);
        *plVar9 = lVar4;
        thunk_FUN_03afed3c(plVar9,lVar4);
        if (*plVar9 == 0) goto LAB_0696a798;
        lVar4 = FUN_07c9c69c(*plVar9,0);
        if (DAT_08974d89 == '\0') {
          FUN_03a8a718(PTR_DAT_084868a0);
          DAT_08974d89 = '\x01';
        }
        plVar3 = *(long **)(unaff_x20 + 0x80);
        if (plVar3 == (long *)0x0) goto LAB_0696a798;
        fVar13 = *(float *)(*(long *)(*(long *)PTR_DAT_084868a0 + 0xb8) + 0x20);
        uVar7 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_084868a0 + 0xb8) + 0x18);
        fVar11 = (float)(**(code **)(*plVar3 + 0x338))(plVar3,*(undefined8 *)(*plVar3 + 0x340));
        if (lVar4 == 0) goto LAB_0696a798;
        FUN_07cab7ec(-(float)uVar7 * fVar11,-(float)((ulong)uVar7 >> 0x20) * fVar11,
                     -(fVar13 * fVar11),lVar4,0);
        if (*plVar9 == 0) goto LAB_0696a798;
        lVar4 = FUN_07c9c69c(*plVar9,0);
        if (DAT_08974d8a == '\0') {
          FUN_03a8a718(PTR_DAT_08486860);
          DAT_08974d8a = '\x01';
        }
        if (lVar4 == 0) goto LAB_0696a798;
        puVar5 = *(undefined4 **)(*(long *)PTR_DAT_08486860 + 0xb8);
        FUN_07cac71c(*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar4,0);
        if (*plVar9 == 0) goto LAB_0696a798;
        lVar4 = FUN_04561560(*plVar9,*(undefined8 *)PTR_DAT_084b7010);
        plVar9 = (long *)(unaff_x19 + 0x28);
        *plVar9 = lVar4;
        thunk_FUN_03afed3c(plVar9,lVar4);
        if (*plVar9 == 0) goto LAB_0696a798;
        thunk_FUN_07ca23d0(*plVar9,*(undefined8 *)PTR_DAT_084b7028,0);
        if (*plVar9 == 0) goto LAB_0696a798;
        in_stack_00000008 = FUN_07d1c684(*plVar9,0);
        plVar3 = *(long **)(unaff_x20 + 0x80);
        if (plVar3 == (long *)0x0) goto LAB_0696a798;
        fVar11 = (float)(**(code **)(*plVar3 + 0x248))(plVar3,*(undefined8 *)(*plVar3 + 0x250));
        FUN_07d1d2c8(fVar11 * 1.5,&stack0x00000008,0);
        if (*plVar9 == 0) goto LAB_0696a798;
        uVar7 = FUN_07d1c684(*plVar9,0);
        puVar10 = (undefined8 *)(unaff_x19 + 0x58);
        *puVar10 = uVar7;
        thunk_FUN_03afed3c(puVar10,0);
        plVar9 = *(long **)(unaff_x20 + 0x80);
        if (plVar9 == (long *)0x0) goto LAB_0696a798;
        (**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
        FUN_07d1d2c8(puVar10,0);
      }
      if (((*plVar6 != 0) && (lVar4 = *(long *)(*plVar6 + 0xd0), lVar4 != 0)) &&
         (lVar4 = *(long *)(lVar4 + 0x28), lVar4 != 0)) {
        uVar7 = *(undefined8 *)(lVar4 + 0x20);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar2 = FUN_07c9c218(uVar7,0,0);
        if ((uVar2 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07c4adbc(*(undefined8 *)PTR_DAT_084b7038,0);
          return;
        }
        if (((*plVar6 != 0) && (lVar4 = *(long *)(*plVar6 + 0xd0), lVar4 != 0)) &&
           ((lVar4 = *(long *)(lVar4 + 0x28), lVar4 != 0 &&
            ((unaff_x20 != 0 && (*(long *)(unaff_x20 + 0x80) != 0)))))) {
          uVar8 = *(undefined8 *)(lVar4 + 0x20);
          uVar7 = FUN_07c98f88(*(long *)(unaff_x20 + 0x80),0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03ae8be4(*(long *)puVar1);
          }
          lVar4 = FUN_04658320(uVar8,uVar7,1,*(undefined8 *)PTR_DAT_084b7018);
          plVar6 = (long *)(unaff_x19 + 0x40);
          *plVar6 = lVar4;
          thunk_FUN_03afed3c(plVar6,lVar4);
          if (*plVar6 != 0) {
            lVar4 = FUN_07c9c69c(*plVar6,0);
            if (DAT_08974d89 == '\0') {
              FUN_03a8a718(PTR_DAT_084868a0);
              DAT_08974d89 = '\x01';
            }
            plVar9 = *(long **)(unaff_x20 + 0x80);
            if (plVar9 != (long *)0x0) {
              uVar7 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_084868a0 + 0xb8) + 0x18);
              fVar13 = *(float *)(*(long *)(*(long *)PTR_DAT_084868a0 + 0xb8) + 0x20);
              fVar11 = (float)(**(code **)(*plVar9 + 0x338))
                                        (plVar9,*(undefined8 *)(*plVar9 + 0x340));
              plVar9 = *(long **)(unaff_x20 + 0x80);
              if ((plVar9 != (long *)0x0) &&
                 (fVar12 = (float)(**(code **)(*plVar9 + 0x228))
                                            (plVar9,*(undefined8 *)(*plVar9 + 0x230)), lVar4 != 0))
              {
                fVar11 = fVar11 + fVar12;
                FUN_07cab7ec(-(float)uVar7 * fVar11,-(float)((ulong)uVar7 >> 0x20) * fVar11,
                             fVar11 * -fVar13,lVar4,0);
                if (*plVar6 != 0) {
                  lVar4 = FUN_07c9c69c(*plVar6,0);
                  if (DAT_08974d8a == '\0') {
                    FUN_03a8a718(PTR_DAT_08486860);
                    DAT_08974d8a = '\x01';
                  }
                  if (lVar4 != 0) {
                    puVar5 = *(undefined4 **)(*(long *)PTR_DAT_08486860 + 0xb8);
                    FUN_07cac71c(*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar4,0);
                    if (*plVar6 != 0) {
                      lVar4 = FUN_04561560(*plVar6,*(undefined8 *)PTR_DAT_084b7010);
                      plVar6 = (long *)(unaff_x19 + 0x30);
                      *plVar6 = lVar4;
                      thunk_FUN_03afed3c(plVar6,lVar4);
                      if (*plVar6 != 0) {
                        thunk_FUN_07ca23d0(*plVar6,*(undefined8 *)PTR_DAT_084b7030,0);
                        if (*plVar6 != 0) {
                          uVar7 = FUN_07d1c684(*plVar6,0);
                          puVar10 = (undefined8 *)(unaff_x19 + 0x58);
                          *puVar10 = uVar7;
                          thunk_FUN_03afed3c(puVar10,0);
                          plVar6 = *(long **)(unaff_x20 + 0x80);
                          if (plVar6 != (long *)0x0) {
                            (**(code **)(*plVar6 + 0x248))(plVar6,*(undefined8 *)(*plVar6 + 0x250));
                            FUN_07d1d2c8(puVar10,0);
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
    }
  }
LAB_0696a798:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


