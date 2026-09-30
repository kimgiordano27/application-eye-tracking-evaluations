/*
FUNCTION_NAME: FUN_06791588
ENTRY_POINT: 06791588
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_16;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x06791f7c) */
/* WARNING: Removing unreachable block (ram,0x06791994) */
/* WARNING: Removing unreachable block (ram,0x06791f60) */
/* WARNING: Removing unreachable block (ram,0x06791c78) */

void FUN_06791588(long param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  
  lVar8 = param_1;
  if ((DAT_082636d8 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db68a0);
    FUN_0373b518(PTR_DAT_07dca2c0);
    FUN_0373b518(PTR_DAT_07db6888);
    FUN_0373b518(PTR_DAT_07d896f8);
    FUN_0373b518(PTR_DAT_07d89700);
    FUN_0373b518(PTR_DAT_07db6d58);
    FUN_0373b518(PTR_DAT_07dccb80);
    lVar8 = FUN_0373b518(PTR_DAT_07dccb88);
    DAT_082636d8 = 1;
  }
  plVar9 = (long *)FUN_067927e0(lVar8,param_3);
  puVar3 = PTR_DAT_07dccb80;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar7 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
  uVar10 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
  FUN_06792ce8(uVar10,uVar7,0);
  *(undefined8 *)(param_1 + 0x10) = uVar10;
  thunk_FUN_037aeb94((undefined8 *)(param_1 + 0x10),uVar10);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x388))(plVar9,*(undefined8 *)(*plVar9 + 0x390));
  puVar6 = PTR_DAT_07dccb88;
  puVar5 = PTR_DAT_07dca2c0;
  puVar4 = PTR_DAT_07db68a0;
  puVar3 = PTR_DAT_07d89700;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  do {
    lVar8 = *plVar9;
    uVar18 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_06791708;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar11 = (undefined8 *)FUN_0377596c(plVar9,*(long *)puVar3,0);
LAB_06791708:
    uVar18 = (*(code *)*puVar11)(plVar9,puVar11[1]);
    puVar2 = PTR_DAT_07d896f8;
    if ((uVar18 & 1) == 0) {
      plVar9 = (long *)thunk_FUN_037787d0(plVar9,*(undefined8 *)PTR_DAT_07d896f8);
      if (plVar9 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar9;
      uVar18 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar18 == 0) goto LAB_06791dec;
      piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar9;
    uVar18 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar8 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto 
          System_Runtime_Serialization_XmlObjectSerializerReadContext__CreateReaderDelegatorForReader
          ;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar11 = (undefined8 *)FUN_0377596c(plVar9,*(long *)puVar3,1);
System_Runtime_Serialization_XmlObjectSerializerReadContext__CreateReaderDelegatorForReader:
    plVar12 = (long *)(*(code *)*puVar11)(plVar9,puVar11[1]);
    if (plVar12 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_07db6888 + 0x130);
      if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_07db6888)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar12);
      }
    }
    lVar8 = FUN_06792200(param_1,param_2,plVar12);
    if (lVar8 != 0) {
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      plVar13 = (long *)plVar12[8];
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      plVar13 = (long *)(**(code **)(*plVar13 + 0x1e8))(plVar13,*(undefined8 *)(*plVar13 + 0x1f0));
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
System_Runtime_Serialization_XmlObjectSerializerReadContext__IsReadingClassExtensionData:
      lVar17 = *plVar13;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar11 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_06791838;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar11 = (undefined8 *)FUN_0377596c(plVar13,*(long *)puVar3,0);
LAB_06791838:
      uVar18 = (*(code *)*puVar11)(plVar13,puVar11[1]);
      if ((uVar18 & 1) != 0) {
        lVar17 = *plVar13;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
              puVar11 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_06791898;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar11 = (undefined8 *)FUN_0377596c(plVar13,*(long *)puVar3,1);
LAB_06791898:
        plVar14 = (long *)(*(code *)*puVar11)(plVar13,puVar11[1]);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar14);
        }
        uVar10 = (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
        if ((int)uVar10 != 4) {
          FUN_0679261c(uVar10,param_2,plVar14,*(undefined8 *)(lVar8 + 0x18));
        }
        goto 
        System_Runtime_Serialization_XmlObjectSerializerReadContext__IsReadingClassExtensionData;
      }
      plVar13 = (long *)thunk_FUN_037787d0(plVar13,*(undefined8 *)PTR_DAT_07d896f8);
      if (plVar13 != (long *)0x0) {
        lVar17 = *plVar13;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_07d896f8) {
              puVar11 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_0679197c;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar11 = (undefined8 *)FUN_0377596c(plVar13,*(long *)PTR_DAT_07d896f8,0);
LAB_0679197c:
        (*(code *)*puVar11)(plVar13,puVar11[1]);
      }
      plVar12 = (long *)FUN_0670cb0c(plVar12,0);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      plVar12 = (long *)(**(code **)(*plVar12 + 0x1e8))(plVar12,*(undefined8 *)(*plVar12 + 0x1f0));
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
System_Runtime_Serialization_XmlObjectSerializerReadContextComplex__GetDataContract:
      lVar17 = *plVar12;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
            puVar11 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_06791a08;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar11 = (undefined8 *)FUN_0377596c(plVar12,*(long *)puVar3,0);
LAB_06791a08:
      uVar18 = (*(code *)*puVar11)(plVar12,puVar11[1]);
      if ((uVar18 & 1) != 0) {
        lVar17 = *plVar12;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
              puVar11 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_06791a68;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar11 = (undefined8 *)FUN_0377596c(plVar12,*(long *)puVar3,1);
LAB_06791a68:
        plVar13 = (long *)(*(code *)*puVar11)(plVar12,puVar11[1]);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar13);
        }
        uVar18 = (**(code **)(*plVar13 + 0x1d8))(plVar13,*(undefined8 *)(*plVar13 + 0x1e0));
        if ((uVar18 & 1) != 0) {
          lVar17 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar10 = *(undefined8 *)(lVar17 + 0x90);
          if (*(int *)(*(long *)PTR_DAT_07db6d58 + 0xe4) == 0) {
            thunk_FUN_03798b70(*(long *)PTR_DAT_07db6d58);
          }
          uVar10 = FUN_06a0dd8c(uVar10,0);
          if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar17 = (**(code **)(*param_2 + 0x188))(param_2,uVar10,*(undefined8 *)(*param_2 + 400));
          if (lVar17 == 0) {
            lVar17 = (**(code **)(*param_2 + 0x1a8))
                               (param_2,uVar10,*(undefined8 *)(*param_2 + 0x1b0));
          }
          lVar15 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          uVar10 = FUN_06706bc4(lVar15,0);
          lVar15 = (**(code **)(*param_2 + 0x188))(param_2,uVar10,*(undefined8 *)(*param_2 + 400));
          if (lVar15 == 0) {
            lVar15 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            uVar10 = FUN_06706bc4(lVar15,0);
            lVar15 = (**(code **)(*param_2 + 0x1a8))
                               (param_2,uVar10,*(undefined8 *)(*param_2 + 0x1b0));
          }
          uVar10 = thunk_FUN_037788cc(*(undefined8 *)puVar6);
          FUN_067921bc(uVar10,lVar17,lVar15);
          plVar14 = *(long **)(lVar8 + 0x18);
          uVar16 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          (**(code **)(*plVar14 + 0x318))(plVar14,uVar10,uVar16,*(undefined8 *)(*plVar14 + 800));
        }
        goto System_Runtime_Serialization_XmlObjectSerializerReadContextComplex__GetDataContract;
      }
      plVar12 = (long *)thunk_FUN_037787d0(plVar12,*(undefined8 *)PTR_DAT_07d896f8);
      if (plVar12 != (long *)0x0) {
        lVar8 = *plVar12;
        uVar18 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_07d896f8) {
              puVar11 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_06791c68;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar11 = (undefined8 *)FUN_0377596c(plVar12,*(long *)PTR_DAT_07d896f8,0);
LAB_06791c68:
        (*(code *)*puVar11)(plVar12,puVar11[1]);
      }
    }
  } while( true );
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
    if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
      puVar11 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_06791e08;
    }
  }
LAB_06791dec:
  puVar11 = (undefined8 *)FUN_0377596c(plVar9,*(long *)puVar2,0);
LAB_06791e08:
  (*(code *)*puVar11)(plVar9,puVar11[1]);
  return;
}


