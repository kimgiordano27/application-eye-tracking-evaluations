/*
FUNCTION_NAME: FUN_05506da0
ENTRY_POINT: 05506da0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x055073a8) */

void FUN_05506da0(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long lVar19;
  long *plVar20;
  int iVar21;
  long lVar22;
  
  if ((DAT_06bbf56a & 1) == 0) {
    FUN_02f08768(PTR_DAT_067ca810);
    FUN_02f08768(OVRPlugin_OVRP_1_122_0_TypeInfo);
    FUN_02f08768(PTR_DAT_067d8ad8);
    FUN_02f08768(PTR_DAT_067d8ae0);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067ca818);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(PTR_DAT_067ca820);
    FUN_02f08768(PTR_DAT_067ca828);
    FUN_02f08768(PTR_DAT_067ca830);
    FUN_02f08768(OVRPlugin_OVRP_1_123_0_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_124_0_TypeInfo);
    DAT_06bbf56a = 1;
  }
  lVar9 = FUN_055063a8(param_1,0);
  puVar4 = PTR_DAT_067d8ae0;
  puVar3 = PTR_DAT_067d8ad8;
  if (param_2 != (long *)0x0) {
    uVar10 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    puVar2 = PTR_DAT_067c9338;
    lVar19 = *(long *)(PTR_DAT_067c9338 + 0x20);
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)(PTR_DAT_067c9338 + 0xe0));
    }
    uVar11 = FUN_050e4454(lVar19 + 0x20,0);
    uVar6 = FUN_050edfb8(uVar10,uVar11,0);
    FUN_05500c08(param_1,param_2[2]);
    lVar19 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
    FUN_0491be5c(lVar19,*(undefined8 *)puVar3);
    puVar4 = OVRPlugin_OVRP_1_124_0_TypeInfo;
    puVar3 = OVRPlugin_OVRP_1_123_0_TypeInfo;
    if (*(long *)(param_1 + 0x10) != 0) {
      iVar7 = FUN_054f6fe4();
      lVar12 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
      FUN_042f24c0(lVar12,1,*(undefined8 *)puVar3);
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_054fc4e4(*(long *)(param_1 + 0x10),lVar19,lVar12);
        if (param_2[4] != 0) {
          if ((uVar6 & 1) == 0) {
            FUN_05501c04(param_1);
          }
          else {
            FUN_05500c08(param_1);
          }
        }
        if (lVar9 != 0) {
          lVar22 = *(long *)(param_1 + 0x10);
          FUN_054fd73c(lVar9,param_1);
          if (lVar22 != 0) {
            FUN_054fbcfc(lVar22,*(undefined8 *)(lVar9 + 0x18),0,uVar6 & 1);
            puVar5 = OVRPlugin_OVRP_1_122_0_TypeInfo;
            puVar4 = PTR_DAT_067ca818;
            puVar3 = PTR_DAT_067ca810;
            lVar22 = param_2[3];
            if (lVar22 != 0) {
              iVar21 = 0;
              plVar20 = (long *)PTR_DAT_067c91b8;
LAB_05506fdc:
              iVar8 = FUN_040bc85c(lVar22,*(undefined8 *)PTR_DAT_067ca828);
              if (iVar21 < iVar8) {
                if (param_2[3] != 0) {
                  lVar22 = FUN_040bc8e8(param_2[3],iVar21,*(undefined8 *)PTR_DAT_067ca830);
                  if (((*(long *)(param_1 + 0x10) != 0) &&
                      (iVar8 = FUN_054f6fe4(*(long *)(param_1 + 0x10)), lVar22 != 0)) &&
                     (*(long *)(lVar22 + 0x10) != 0)) {
                    plVar13 = (long *)FUN_040bcacc(*(long *)(lVar22 + 0x10),
                                                   *(undefined8 *)PTR_DAT_067ca820);
                    if (plVar13 == (long *)0x0) {
LAB_05507198:
                    /* WARNING: Subroutine does not return */
                      FUN_02f089c8();
                    }
                    do {
                      lVar16 = *plVar13;
                      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
                      if (uVar17 != 0) {
                        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar18 + -2) == *plVar20) {
                            puVar14 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                            goto LAB_055070ac;
                          }
                          uVar17 = uVar17 - 1;
                          piVar18 = piVar18 + 4;
                        } while (uVar17 != 0);
                      }
                      puVar14 = (undefined8 *)FUN_02f421d0(plVar13,*plVar20,0);
LAB_055070ac:
                      uVar17 = (*(code *)*puVar14)(plVar13,puVar14[1]);
                      if ((uVar17 & 1) == 0) goto LAB_055071a0;
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02f089c8();
                      }
                      lVar16 = *plVar13;
                      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
                      if (uVar17 != 0) {
                        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar18 + -2) == *(long *)puVar4) {
                            puVar14 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                            goto LAB_05507110;
                          }
                          uVar17 = uVar17 - 1;
                          piVar18 = piVar18 + 4;
                        } while (uVar17 != 0);
                      }
                      puVar14 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar4,0);
LAB_05507110:
                      plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02f089c8();
                      }
                      bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
                      if ((*(byte *)(*plVar15 + 0x130) < bVar1) ||
                         (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar1 * 8 + -8) !=
                          *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
                        FUN_02f08d48();
                      }
                      plVar15 = (long *)plVar15[2];
                      if (plVar15 == (long *)0x0) {
                        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02f089c8();
                        }
                        if (*(int *)(lVar12 + 0x10) == 1) {
                          *(int *)(lVar12 + 0x10) = iVar8 - iVar7;
                        }
                      }
                      else {
                        if (*plVar15 != *(long *)(puVar2 + 0x90)) {
                    /* WARNING: Subroutine does not return */
                          FUN_02f08d48(plVar15,*(long *)(puVar2 + 0x90));
                        }
                        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02f089c8();
                        }
                        FUN_0491e280(lVar19,plVar15,iVar8 - iVar7,*(undefined8 *)puVar5);
                      }
                      if (plVar13 == (long *)0x0) goto LAB_05507198;
                    } while( true );
                  }
                }
              }
              else {
                lVar19 = *(long *)(param_1 + 0x10);
                FUN_054fd73c(lVar9,param_1);
                if ((lVar19 != 0) && (*(long *)(lVar9 + 0x18) != 0)) {
                  FUN_054eb158(*(long *)(lVar9 + 0x18),lVar19,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_055073a4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
LAB_055071a0:
  if (plVar13 != (long *)0x0) {
    lVar16 = *plVar13;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar14 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_05507204;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar14 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)PTR_DAT_067c91b0,0);
LAB_05507204:
    (*(code *)*puVar14)(plVar13,puVar14[1]);
  }
  if ((uVar6 & 1) == 0) {
    FUN_05501c04(param_1,*(undefined8 *)(lVar22 + 0x18));
  }
  else {
    FUN_05500c08(param_1);
  }
  if (param_2[3] == 0) goto LAB_055073a4;
  iVar8 = FUN_040bc85c(param_2[3],*(undefined8 *)PTR_DAT_067ca828);
  if (iVar21 < iVar8 + -1) {
    lVar22 = *(long *)(param_1 + 0x10);
    FUN_054fd73c(lVar9,param_1);
    if (lVar22 == 0) goto LAB_055073a4;
    FUN_054fbcfc(lVar22,*(undefined8 *)(lVar9 + 0x18),0,uVar6 & 1);
    plVar20 = (long *)PTR_DAT_067c91b8;
  }
  lVar22 = param_2[3];
  iVar21 = iVar21 + 1;
  if (lVar22 == 0) goto LAB_055073a4;
  goto LAB_05506fdc;
}


