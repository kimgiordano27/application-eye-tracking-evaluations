/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$FindLargestSurface
ENTRY_POINT: 072cc42c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x072cc880) */

void Meta_XR_MRUtilityKit_MRUKRoom__FindLargestSurface(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar15;
  undefined8 uVar16;
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_092860c8);
  FUN_04077588(PTR_DAT_09287040);
  FUN_04077588(PTR_DAT_092b8400);
  FUN_04077588(PTR_DAT_092b8418);
  uVar6 = FUN_04077588(PTR_DAT_092c3908);
  *(undefined1 *)(unaff_x22 + 0xa54) = 1;
  if (((unaff_x21 != 0) && (unaff_x20 != 0)) && (lVar12 = *(long *)(unaff_x20 + 0x20), lVar12 != 0))
  {
    if (*(float *)(unaff_x21 + 0x28) < *(float *)(lVar12 + 0x18)) {
      return;
    }
    if (*(float *)(lVar12 + 0x1c) < *(float *)(unaff_x21 + 0x28)) {
      return;
    }
    plVar7 = (long *)FUN_072cb864(uVar6,*(undefined8 *)(unaff_x20 + 0x10));
    if (plVar7 != (long *)0x0) {
      lVar12 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092bc9d8) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_072cc508;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092bc9d8,0);
LAB_072cc508:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar5 = PTR_DAT_092c3908;
      puVar4 = PTR_DAT_092bc9e8;
      puVar3 = PTR_DAT_092b8418;
      puVar2 = PTR_DAT_092860c8;
      puVar1 = PTR_DAT_09285980;
joined_r0x072cc520:
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
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_072cc59c;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)puVar2,0);
LAB_072cc59c:
        uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar13 & 1) == 0) {
          if (plVar7 == (long *)0x0) {
            return;
          }
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 == 0) goto LAB_072cc804;
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_072cc7ec;
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
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_072cc600;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)puVar4,0);
LAB_072cc600:
        uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        plVar9 = *(long **)(unaff_x20 + 0x18);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar12 = (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (*(long *)(lVar12 + 0x18) == 0) {
          lVar15 = *(long *)(unaff_x20 + 0x18);
          lVar11 = *(long *)PTR_DAT_09288f08;
          lVar12 = *(long *)(lVar11 + 0x38);
          if (lVar12 == 0) {
            FUN_040b1b28(lVar11);
            lVar12 = *(long *)(lVar11 + 0x38);
          }
          lVar12 = *(long *)(lVar12 + 0x10);
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_040b1acc();
          }
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          lVar12 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
          if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_040b1acc();
          }
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_075a1c74(lVar15,uVar6,**(undefined8 **)(lVar12 + 0xb8),0);
          goto joined_r0x072cc520;
        }
        if ((int)*(long *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        plVar9 = *(long **)(lVar12 + 0x20);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        uVar10 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
        uVar16 = *(undefined8 *)puVar3;
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar16 = FUN_0768890c(uVar16,0);
        uVar13 = FUN_07692be0(uVar10,uVar16,0);
        if (((uVar13 & 1) == 0) && ((int)*(ulong *)(lVar12 + 0x18) < 3)) {
          if ((*(ulong *)(lVar12 + 0x18) & 0xffffffff) == 1) {
            lVar15 = *(long *)(unaff_x20 + 0x18);
            lVar12 = FUN_04077674(*(undefined8 *)PTR_DAT_09287040,1);
            if (lVar12 != 0) {
              if ((unaff_x19 != 0) && (lVar11 = thunk_FUN_040b4e00(), lVar11 == 0)) {
                uVar6 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
                FUN_040776f4(uVar6,0);
              }
              if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              *(long *)(lVar12 + 0x20) = unaff_x19;
              thunk_FUN_040ec700();
              if (lVar15 != 0) {
                FUN_075a1c74(lVar15,uVar6,lVar12,0);
                goto joined_r0x072cc520;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          goto joined_r0x072cc520;
        }
        if (*(int *)(*(long *)PTR_DAT_092b8400 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_072fd3e0(*(undefined8 *)puVar5,0,0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
LAB_072cc7ec:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_072cc820;
    }
  }
LAB_072cc804:
  puVar8 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092860c0,0);
LAB_072cc820:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}


