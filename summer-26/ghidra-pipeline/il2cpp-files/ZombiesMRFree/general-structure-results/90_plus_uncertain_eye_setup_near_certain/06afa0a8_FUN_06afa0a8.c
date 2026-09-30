/*
FUNCTION_NAME: FUN_06afa0a8
ENTRY_POINT: 06afa0a8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x06afa6d0) */
/* WARNING: Removing unreachable block (ram,0x06afa400) */
/* WARNING: Removing unreachable block (ram,0x06afa554) */
/* WARNING: Removing unreachable block (ram,0x06afa758) */
/* WARNING: Removing unreachable block (ram,0x06afa284) */

void FUN_06afa0a8(long param_1,uint param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  
  if ((DAT_073ab362 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f70b30);
    FUN_02fe925c(System_Diagnostics_SourceSwitch_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_116_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_117_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_118_0_TypeInfo);
    FUN_02fe925c(OVRPlugin_OVRP_1_119_0_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f9b060);
    DAT_073ab362 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 == 0) {
LAB_06afa750:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  if (param_2 < *(uint *)(lVar5 + 0x18)) {
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 == 0) goto LAB_06afa750;
    if (param_2 < *(uint *)(lVar6 + 0x18)) {
      lVar10 = (long)(int)param_2;
      lVar5 = *(long *)(lVar5 + lVar10 * 8 + 0x20);
      lVar6 = *(long *)(lVar6 + lVar10 * 8 + 0x20);
      if (lVar5 == lVar6) {
        return;
      }
      if (lVar5 != 0) {
        plVar2 = (long *)FUN_0493ce0c(lVar5,lVar6,param_2,
                                      *(undefined8 *)OVRPlugin_OVRP_1_118_0_TypeInfo);
        lVar5 = *(long *)(param_1 + 0x18);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        if (*(uint *)(lVar5 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        plVar9 = *(long **)(lVar5 + lVar10 * 8 + 0x20);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        lVar5 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)System_Diagnostics_SourceSwitch_TypeInfo) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_06afa1fc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)
                 FUN_02feb5b8(plVar9,*(long *)System_Diagnostics_SourceSwitch_TypeInfo,0);
LAB_06afa1fc:
        (*(code *)*puVar3)(plVar9,plVar2,puVar3[1]);
        if (plVar2 != (long *)0x0) {
          lVar5 = *plVar2;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06f70b30) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_06afa26c;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_02feb5b8(plVar2,*(long *)PTR_DAT_06f70b30,0);
LAB_06afa26c:
          (*(code *)*puVar3)(plVar2,puVar3[1]);
        }
        puVar1 = PTR_DAT_06f9b060;
        lVar5 = *(long *)PTR_DAT_06f9b060;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          lVar5 = *(long *)puVar1;
        }
        if (*(uint *)(*(long *)(lVar5 + 0xb8) + 8) == param_2) {
          lVar5 = *(long *)(param_1 + 0x18);
          if (lVar5 == 0) goto LAB_06afa750;
          if (*(uint *)(lVar5 + 0x18) <= param_2) goto LAB_06afa754;
          lVar6 = *(long *)(param_1 + 0x10);
          if (lVar6 == 0) goto LAB_06afa750;
          if (*(uint *)(lVar6 + 0x18) <= param_2) goto LAB_06afa754;
          plVar2 = (long *)FUN_0493ce0c(*(undefined8 *)(lVar5 + lVar10 * 8 + 0x20),
                                        *(undefined8 *)(lVar6 + lVar10 * 8 + 0x20),param_2,
                                        *(undefined8 *)OVRPlugin_OVRP_1_117_0_TypeInfo);
          lVar5 = *(long *)(param_1 + 0x18);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          if (*(uint *)(lVar5 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94f0();
          }
          plVar9 = *(long **)(lVar5 + lVar10 * 8 + 0x20);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          lVar5 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)System_Diagnostics_SourceSwitch_TypeInfo) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_06afa378;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)
                   FUN_02feb5b8(plVar9,*(long *)System_Diagnostics_SourceSwitch_TypeInfo,0);
LAB_06afa378:
          (*(code *)*puVar3)(plVar9,plVar2,puVar3[1]);
          if (plVar2 != (long *)0x0) {
            lVar5 = *plVar2;
            uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06f70b30) {
                  puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_06afa3e8;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined8 *)FUN_02feb5b8(plVar2,*(long *)PTR_DAT_06f70b30,0);
LAB_06afa3e8:
            (*(code *)*puVar3)(plVar2,puVar3[1]);
          }
        }
      }
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) goto LAB_06afa750;
      if (param_2 < *(uint *)(lVar5 + 0x18)) {
        lVar5 = *(long *)(lVar5 + lVar10 * 8 + 0x20);
        if (lVar5 != 0) {
          lVar6 = *(long *)(param_1 + 0x18);
          if (lVar6 == 0) goto LAB_06afa750;
          if (*(uint *)(lVar6 + 0x18) <= param_2) goto LAB_06afa754;
          plVar2 = (long *)FUN_0493ce0c(lVar5,*(undefined8 *)(lVar6 + lVar10 * 8 + 0x20),param_2,
                                        *(undefined8 *)OVRPlugin_OVRP_1_116_0_TypeInfo);
          lVar5 = *(long *)(param_1 + 0x10);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          if (*(uint *)(lVar5 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94f0();
          }
          plVar9 = *(long **)(lVar5 + lVar10 * 8 + 0x20);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02fe94e8();
          }
          lVar5 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)System_Diagnostics_SourceSwitch_TypeInfo) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_06afa4cc;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)
                   FUN_02feb5b8(plVar9,*(long *)System_Diagnostics_SourceSwitch_TypeInfo,0);
LAB_06afa4cc:
          (*(code *)*puVar3)(plVar9,plVar2,puVar3[1]);
          if (plVar2 != (long *)0x0) {
            lVar5 = *plVar2;
            uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06f70b30) {
                  puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_06afa53c;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined8 *)FUN_02feb5b8(plVar2,*(long *)PTR_DAT_06f70b30,0);
LAB_06afa53c:
            (*(code *)*puVar3)(plVar2,puVar3[1]);
          }
          puVar1 = PTR_DAT_06f9b060;
          lVar5 = *(long *)PTR_DAT_06f9b060;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_02fdcff0();
            lVar5 = *(long *)puVar1;
          }
          if (*(uint *)(*(long *)(lVar5 + 0xb8) + 8) == param_2) {
            lVar5 = *(long *)(param_1 + 0x10);
            if (lVar5 == 0) goto LAB_06afa750;
            if (*(uint *)(lVar5 + 0x18) <= param_2) goto LAB_06afa754;
            lVar6 = *(long *)(param_1 + 0x18);
            if (lVar6 == 0) goto LAB_06afa750;
            if (*(uint *)(lVar6 + 0x18) <= param_2) goto LAB_06afa754;
            plVar2 = (long *)FUN_0493ce0c(*(undefined8 *)(lVar5 + lVar10 * 8 + 0x20),
                                          *(undefined8 *)(lVar6 + lVar10 * 8 + 0x20),param_2,
                                          *(undefined8 *)OVRPlugin_OVRP_1_119_0_TypeInfo);
            lVar5 = *(long *)(param_1 + 0x10);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            if (*(uint *)(lVar5 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94f0();
            }
            plVar9 = *(long **)(lVar5 + lVar10 * 8 + 0x20);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02fe94e8();
            }
            lVar5 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)System_Diagnostics_SourceSwitch_TypeInfo) {
                  puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_06afa648;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined8 *)
                     FUN_02feb5b8(plVar9,*(long *)System_Diagnostics_SourceSwitch_TypeInfo,0);
LAB_06afa648:
            (*(code *)*puVar3)(plVar9,plVar2,puVar3[1]);
            if (plVar2 != (long *)0x0) {
              lVar5 = *plVar2;
              uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06f70b30) {
                    puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_06afa6b8;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar3 = (undefined8 *)FUN_02feb5b8(plVar2,*(long *)PTR_DAT_06f70b30,0);
LAB_06afa6b8:
              (*(code *)*puVar3)(plVar2,puVar3[1]);
            }
          }
        }
        lVar5 = *(long *)(param_1 + 0x10);
        if (lVar5 == 0) goto LAB_06afa750;
        if (param_2 < *(uint *)(lVar5 + 0x18)) {
          plVar2 = *(long **)(param_1 + 0x18);
          if (plVar2 == (long *)0x0) goto LAB_06afa750;
          lVar5 = *(long *)(lVar5 + lVar10 * 8 + 0x20);
          if ((lVar5 != 0) &&
             (lVar6 = thunk_FUN_03010710(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0)) {
            uVar4 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                              ();
                    /* WARNING: Subroutine does not return */
            FUN_02fe93c0(uVar4,0);
          }
          if (param_2 < *(uint *)(plVar2 + 3)) {
            plVar2[lVar10 + 4] = lVar5;
            thunk_FUN_03048534(plVar2 + lVar10 + 4,lVar5);
            return;
          }
        }
      }
    }
  }
LAB_06afa754:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


