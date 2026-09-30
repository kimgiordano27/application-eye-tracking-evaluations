/*
FUNCTION_NAME: FUN_0275f63c
ENTRY_POINT: 0275f63c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_8
*/


void FUN_0275f63c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  
  if ((DAT_04530911 & 1) == 0) {
    FUN_01c5d288(Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo);
    FUN_01c5d288(Newtonsoft_Json_JsonSerializerSettings_TypeInfo);
    DAT_04530911 = 1;
  }
  lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01c72394();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  lVar3 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01c72394();
  }
  if (param_1 != 0) {
    uVar4 = FUN_03f18a3c(param_1,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x30),0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    fVar14 = *(float *)(param_1 + 0x3dc);
    fVar9 = (float)FUN_03f136e0(param_1,0);
    if (*(long *)(param_1 + 0x428) != 0) {
      fVar10 = (float)FUN_03f136e0(*(long *)(param_1 + 0x428),0);
      if ((*(long *)(param_1 + 0x428) != 0) &&
         (plVar5 = (long *)FUN_03f06988(*(long *)(param_1 + 0x428),0),
         puVar1 = Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo, plVar5 != (long *)0x0)
         ) {
        lVar3 = *plVar5;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                *(long *)Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo) {
              puVar6 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0x1d) * 0x10 + 0x138);
              goto LAB_0275f77c;
            }
            uVar4 = uVar4 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01c72498(plVar5,*(long *)
                                      Newtonsoft_Json_Serialization_JsonSerializerProxy_TypeInfo,
                              0x1d);
LAB_0275f77c:
        fVar11 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
        plVar5 = (long *)FUN_03f06988(param_1,0);
        if (plVar5 != (long *)0x0) {
          lVar3 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0x1d) * 0x10 + 0x138);
                goto LAB_0275f7f0;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)FUN_01c72498(plVar5,*(long *)puVar1,0x1d);
LAB_0275f7f0:
          fVar12 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
          fVar15 = *(float *)(param_1 + 0x3e0);
          plVar5 = (long *)FUN_03f06988(param_1,0);
          if (plVar5 != (long *)0x0) {
            lVar3 = *plVar5;
            uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar4 != 0) {
              piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                  puVar6 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0x1d) * 0x10 + 0x138);
                  goto System_Action<Vector2>___ctor;
                }
                uVar4 = uVar4 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar4 != 0);
            }
            puVar6 = (undefined8 *)FUN_01c72498(plVar5,*(long *)puVar1,0x1d);
System_Action<Vector2>___ctor:
            fVar13 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
            lVar3 = *(long *)(param_1 + 0x420);
            if (lVar3 == 0) {
              lVar3 = *(long *)(param_1 + 0x428);
            }
            if (*(long *)(param_1 + 0x400) != 0) {
              fVar11 = (fVar9 - fVar10) - fVar11;
              plVar5 = (long *)FUN_03f0d9bc(*(long *)(param_1 + 0x400),0);
              auVar16 = FUN_03f24884((fVar15 - fVar11) - fVar13,0);
              puVar2 = Newtonsoft_Json_JsonSerializerSettings_TypeInfo;
              if (plVar5 != (long *)0x0) {
                lVar8 = *plVar5;
                uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar4 != 0) {
                  piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) ==
                        *(long *)Newtonsoft_Json_JsonSerializerSettings_TypeInfo) {
                      puVar6 = (undefined8 *)(lVar8 + (long)(*piVar7 + 0x20) * 0x10 + 0x138);
                      goto FUN_0275f91c;
                    }
                    uVar4 = uVar4 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar4 != 0);
                }
                puVar6 = (undefined8 *)
                         FUN_01c72498(plVar5,*(long *)
                                              Newtonsoft_Json_JsonSerializerSettings_TypeInfo,0x20);
FUN_0275f91c:
                (*(code *)*puVar6)(plVar5,auVar16._0_8_,auVar16._8_8_ & 0xffffffff,puVar6[1]);
                if ((lVar3 != 0) && (plVar5 = (long *)FUN_03f06988(lVar3,0), plVar5 != (long *)0x0))
                {
                  lVar3 = *plVar5;
                  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                  if (uVar4 != 0) {
                    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                        puVar6 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0x2c) * 0x10 + 0x138);
                        goto LAB_0275f998;
                      }
                      uVar4 = uVar4 - 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar4 != 0);
                  }
                  puVar6 = (undefined8 *)FUN_01c72498(plVar5,*(long *)puVar1,0x2c);
LAB_0275f998:
                  fVar9 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
                  if (*(long *)(param_1 + 0x400) != 0) {
                    fVar10 = *(float *)(param_1 + 0x3e4);
                    fVar15 = *(float *)(param_1 + 0x3d8);
                    plVar5 = (long *)FUN_03f06988(*(long *)(param_1 + 0x400),0);
                    if (plVar5 != (long *)0x0) {
                      lVar3 = *plVar5;
                      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                      fVar9 = (fVar9 + fVar10) * fVar15 - (fVar14 + fVar11 + fVar12);
                      if (uVar4 != 0) {
                        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                            puVar6 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0x2c) * 0x10 + 0x138);
                            goto LAB_0275fa2c;
                          }
                          uVar4 = uVar4 - 1;
                          piVar7 = piVar7 + 4;
                        } while (uVar4 != 0);
                      }
                      puVar6 = (undefined8 *)FUN_01c72498(plVar5,*(long *)puVar1,0x2c);
LAB_0275fa2c:
                      fVar14 = (float)(*(code *)*puVar6)(plVar5,puVar6[1]);
                      if (ABS(fVar14 - fVar9) <= DAT_00b9304c) {
                        return;
                      }
                      if (*(long *)(param_1 + 0x400) != 0) {
                        plVar5 = (long *)FUN_03f0d9bc(*(long *)(param_1 + 0x400),0);
                        auVar16 = FUN_03f24884(fVar9,0);
                        if (plVar5 != (long *)0x0) {
                          lVar3 = *plVar5;
                          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                          if (uVar4 != 0) {
                            piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                                puVar6 = (undefined8 *)
                                         (lVar3 + (long)(*piVar7 + 0x36) * 0x10 + 0x138);
                                goto LAB_0275faf0;
                              }
                              uVar4 = uVar4 - 1;
                              piVar7 = piVar7 + 4;
                            } while (uVar4 != 0);
                          }
                          puVar6 = (undefined8 *)FUN_01c72498(plVar5,*(long *)puVar2,0x36);
LAB_0275faf0:
                    /* WARNING: Could not recover jumptable at 0x0275fb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*(code *)*puVar6)(plVar5,auVar16._0_8_,auVar16._8_8_ & 0xffffffff,
                                             puVar6[1]);
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
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


