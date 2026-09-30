/*
FUNCTION_NAME: FUN_05323bf0
ENTRY_POINT: 05323bf0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 84
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x0532404c) */

uint FUN_05323bf0(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  
  if ((DAT_066d03ca & 1) == 0) {
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(PTR_DAT_06312f90);
    FUN_02b3c81c(System_Xml_XmlChildEnumerator_TypeInfo);
    FUN_02b3c81c(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ApproximateCubicBezierLength_00000446_PostfixBurstDelegate_TypeInfo
                );
    DAT_066d03ca = 1;
  }
  if (param_1 == (long *)0x0) goto LAB_05324038;
  iVar7 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
  puVar2 = PTR_DAT_06312310;
  if (iVar7 == 4) {
    lVar15 = param_1[7];
    lVar16 = *(long *)(PTR_DAT_06312310 + 0x48);
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar9 = FUN_04d8a7b0(lVar16 + 0x20,0);
    uVar10 = FUN_04d94540(lVar15,uVar9,0);
    puVar5 = System_Xml_XmlChildEnumerator_TypeInfo;
    if ((uVar10 & 1) == 0) {
      if (param_1[0xf] == 0) {
LAB_05324038:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar9 = FUN_04bffdac(*(undefined8 *)(param_1[0xf] + 0x90),
                           *(undefined8 *)System_Xml_XmlChildEnumerator_TypeInfo,0);
      uVar10 = thunk_FUN_04c08854(param_1[6],uVar9,0);
      puVar6 = 
      UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ApproximateCubicBezierLength_00000446_PostfixBurstDelegate_TypeInfo
      ;
      if ((uVar10 & 1) == 0) {
        lVar15 = param_1[6];
        uVar9 = FUN_04bffdac(uVar9,*(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ApproximateCubicBezierLength_00000446_PostfixBurstDelegate_TypeInfo
                             ,0);
        uVar10 = thunk_FUN_04c08854(lVar15,uVar9,0);
        if ((uVar10 & 1) == 0) {
          if (param_1[0xf] != 0) {
            uVar9 = **(undefined8 **)(*(long *)(puVar2 + 0x90) + 0xb8);
            plVar11 = (long *)FUN_0529cbdc(param_1[0xf],0);
            if (plVar11 != (long *)0x0) {
              plVar11 = (long *)(**(code **)(*plVar11 + 0x1e8))
                                          (plVar11,*(undefined8 *)(*plVar11 + 0x1f0));
              puVar4 = 
              UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_TypeInfo;
              puVar2 = PTR_DAT_06312f90;
              do {
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                lVar16 = *plVar11;
                lVar15 = *(long *)puVar2;
                uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar10 != 0) {
                  piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == lVar15) {
                      puVar12 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_05323ddc;
                    }
                    uVar10 = uVar10 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar10 != 0);
                }
                puVar12 = (undefined8 *)FUN_02b7654c(plVar11,lVar15,0);
LAB_05323ddc:
                uVar10 = (*(code *)*puVar12)(plVar11,puVar12[1]);
                puVar3 = PTR_DAT_06312f78;
                if ((uVar10 & 1) == 0) {
                  plVar11 = (long *)thunk_FUN_02b79548(plVar11,*(undefined8 *)PTR_DAT_06312f78);
                  if (plVar11 == (long *)0x0) goto LAB_05323fc0;
                  lVar15 = *plVar11;
                  uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
                  if (uVar10 == 0) goto LAB_05323f98;
                  piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  goto LAB_05323f80;
                }
                if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                lVar16 = *plVar11;
                lVar15 = *(long *)puVar2;
                uVar10 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar10 != 0) {
                  piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == lVar15) {
                      puVar12 = (undefined8 *)(lVar16 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                      goto LAB_05323e44;
                    }
                    uVar10 = uVar10 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar10 != 0);
                }
                puVar12 = (undefined8 *)FUN_02b7654c(plVar11,lVar15,1);
LAB_05323e44:
                plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                lVar15 = *plVar13;
                bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
                if ((*(byte *)(lVar15 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(lVar15 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4))
                {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3ce44(plVar13);
                }
                uVar10 = (**(code **)(lVar15 + 0x1d8))(plVar13,*(undefined8 *)(lVar15 + 0x1e0));
                if ((uVar10 & 1) != 0) {
                  lVar15 = FUN_052d4748(plVar13,0);
                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4();
                  }
                  if (*(int *)(lVar15 + 0x18) == 1) {
                    lVar15 = FUN_052d4748(plVar13,0);
                    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cacc();
                    }
                    if (*(long **)(lVar15 + 0x20) == param_1) {
                      lVar15 = FUN_052d4bb4(plVar13,0);
                      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02b3cac4();
                      }
                      if (*(int *)(lVar15 + 0x18) == 1) {
                        lVar15 = FUN_052d4bb4(plVar13,0);
                        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02b3cac4();
                        }
                        if (*(int *)(lVar15 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02b3cacc();
                        }
                        if (*(long *)(lVar15 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02b3cac4();
                        }
                        lVar15 = *(long *)(*(long *)(lVar15 + 0x20) + 0x78);
                        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02b3cac4();
                        }
                        uVar9 = FUN_04bffdac(*(undefined8 *)(lVar15 + 0x90),*(undefined8 *)puVar5,0)
                        ;
                      }
                    }
                  }
                }
              } while( true );
            }
          }
          goto LAB_05324038;
        }
      }
      goto LAB_05323fd8;
    }
  }
  uVar8 = 0;
  goto LAB_05323fdc;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar14 = piVar14 + 4;
    if (uVar10 == 0) break;
LAB_05323f80:
    if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
      puVar12 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_05323fb4;
    }
  }
LAB_05323f98:
  puVar12 = (undefined8 *)FUN_02b7654c(plVar11,*(long *)puVar3,0);
LAB_05323fb4:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_05323fc0:
  uVar10 = thunk_FUN_04c08854(param_1[6],uVar9,0);
  if ((uVar10 & 1) == 0) {
    lVar15 = param_1[6];
    uVar9 = FUN_04bffdac(uVar9,*(undefined8 *)puVar6,0);
    uVar8 = thunk_FUN_04c08854(lVar15,uVar9,0);
    goto LAB_05323fdc;
  }
LAB_05323fd8:
  uVar8 = 1;
LAB_05323fdc:
  return uVar8 & 1;
}


