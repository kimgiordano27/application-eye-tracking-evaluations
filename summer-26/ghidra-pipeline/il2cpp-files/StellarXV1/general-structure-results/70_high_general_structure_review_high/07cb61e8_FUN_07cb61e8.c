/*
FUNCTION_NAME: FUN_07cb61e8
ENTRY_POINT: 07cb61e8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x07cb66bc) */
/* WARNING: Removing unreachable block (ram,0x07cb66b8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_07cb61e8(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  
  if ((DAT_09899849 & 1) == 0) {
    FUN_04077588(PTR_DAT_092ff138);
    FUN_04077588(PTR_DAT_092e1950);
    FUN_04077588(PTR_DAT_092860c0);
    FUN_04077588(PTR_DAT_092860c8);
    FUN_04077588(PTR_DAT_092ff0e0);
    DAT_09899849 = 1;
  }
  puVar3 = PTR_DAT_092860c8;
  plVar7 = *(long **)(param_1 + 0x48);
  if (plVar7 != (long *)0x0) {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
    puVar5 = PTR_DAT_092ff138;
    puVar4 = PTR_DAT_092ff0e0;
    if (plVar7 != (long *)0x0) {
      uVar15 = 0;
LAB_07cb62a4:
      do {
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto System_Net_Http_HttpClientHandler___ctor;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)puVar3,0);
System_Net_Http_HttpClientHandler___ctor:
        uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        puVar2 = PTR_DAT_092860c0;
        if ((uVar13 & 1) == 0) {
          plVar7 = (long *)thunk_FUN_040b4e00(plVar7,*(undefined8 *)PTR_DAT_092860c0);
          if (plVar7 == (long *)0x0) goto LAB_07cb6498;
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 == 0) goto LAB_07cb6470;
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_07cb6458;
        }
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
              goto LAB_07cb6358;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)puVar3,1);
LAB_07cb6358:
        plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (plVar9 != (long *)0x0) {
          lVar12 = *plVar9;
          bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((*(byte *)(lVar12 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0();
          }
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((bVar1 <= *(byte *)(lVar12 + 0x130)) &&
             (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) {
            uVar6 = (**(code **)(lVar12 + 600))(plVar9,*(undefined8 *)(lVar12 + 0x260));
            uVar15 = uVar15 | uVar6;
            if (plVar7 == (long *)0x0) break;
            goto LAB_07cb62a4;
          }
        }
      } while (plVar7 != (long *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  goto LAB_07cb66b4;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_07cb6644:
    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_07cb6678;
    }
  }
LAB_07cb665c:
  puVar8 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)puVar2,0);
LAB_07cb6678:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
System_Net_Http_HttpMessageHandler__Dispose:
  if ((uVar15 & 1) != 0) {
    if ((*(long *)(param_1 + 0x20) == 0) && (*(char *)(param_1 + 0x16e) != '\0')) {
      *(undefined1 *)(param_1 + 0x16e) = 0;
    }
    uVar10 = FUN_07cd196c(0);
    uVar11 = thunk_FUN_040dedf8(PTR_DAT_092ff1a8);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar10,uVar11);
  }
  return;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_07cb6458:
    if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_07cb648c;
    }
  }
LAB_07cb6470:
  puVar8 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)puVar2,0);
LAB_07cb648c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_07cb6498:
  plVar7 = *(long **)(param_1 + 0x40);
  if (plVar7 != (long *)0x0) {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
    puVar4 = PTR_DAT_092e1950;
    do {
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar12 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_07cb6524;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)puVar3,0);
LAB_07cb6524:
      uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar13 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_040b4e00(plVar7,*(undefined8 *)puVar2);
        if (plVar7 == (long *)0x0) goto System_Net_Http_HttpMessageHandler__Dispose;
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 == 0) goto LAB_07cb665c;
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_07cb6644;
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar12 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_07cb658c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)puVar3,1);
LAB_07cb658c:
      plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(plVar9);
      }
      if ((char)plVar9[4] == '\0') {
        uVar6 = FUN_07ccd1c8(plVar9,0);
        uVar15 = uVar15 | uVar6;
      }
      if (-1 < (int)plVar9[0xc]) {
        uVar6 = FUN_07cccc9c(plVar9,0);
        uVar15 = uVar15 | uVar6;
      }
    } while( true );
  }
LAB_07cb66b4:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


