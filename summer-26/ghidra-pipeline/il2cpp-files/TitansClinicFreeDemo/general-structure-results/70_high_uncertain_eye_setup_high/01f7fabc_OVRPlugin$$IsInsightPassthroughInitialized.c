/*
FUNCTION_NAME: OVRPlugin$$IsInsightPassthroughInitialized
ENTRY_POINT: 01f7fabc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsInsightPassthroughInitialized(void)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int *piVar14;
  uint uVar15;
  long unaff_x19;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long *unaff_x21;
  uint uVar19;
  ulong uVar20;
  long *in_stack_00000008;
  long *in_stack_00000010;
  
  thunk_FUN_01279b34();
  thunk_FUN_01279b34(PTR_DAT_027b5ad8);
  thunk_FUN_01279b34(PTR_DAT_027b3650);
  thunk_FUN_01279b34(PTR_DAT_027b1a80);
  *(undefined1 *)(unaff_x19 + 0xe1f) = 1;
  lVar4 = (**(code **)(*unaff_x21 + 0x678))();
  puVar2 = PTR_DAT_027b1a80;
  if (lVar4 != 0) {
    plVar5 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650,*(undefined4 *)(lVar4 + 0x18));
    lVar6 = FUN_01230af8(*(undefined8 *)puVar2,*(undefined4 *)(lVar4 + 0x18));
    uVar19 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar19) {
      lVar16 = 0;
      puVar12 = (undefined8 *)(lVar6 + 0x20);
      plVar11 = plVar5 + 4;
      do {
        uVar15 = (uint)lVar16;
        if (uVar19 <= uVar15) goto LAB_01f7fe38;
        plVar7 = *(long **)(lVar4 + 0x20 + lVar16 * 8);
        if ((plVar7 == (long *)0x0) ||
           (uVar8 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0)),
           lVar6 == 0)) goto LAB_01f7fe3c;
        if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_01f7fe38;
        *puVar12 = uVar8;
        thunk_FUN_01286abc(puVar12,uVar8);
        if (*(uint *)(lVar4 + 0x18) <= uVar15) goto LAB_01f7fe38;
        plVar7 = *(long **)(lVar4 + 0x20 + lVar16 * 8);
        if ((plVar7 == (long *)0x0) ||
           (lVar9 = (**(code **)(*plVar7 + 0x2e8))(plVar7,*(undefined8 *)(*plVar7 + 0x2f0)),
           plVar5 == (long *)0x0)) goto LAB_01f7fe3c;
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_0124baac(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
        goto LAB_01f7fe40;
        if (*(uint *)(plVar5 + 3) <= uVar15) goto LAB_01f7fe38;
        *plVar11 = lVar9;
        thunk_FUN_01286abc(plVar11,lVar9);
        uVar19 = *(uint *)(lVar4 + 0x18);
        lVar16 = lVar16 + 1;
        puVar12 = puVar12 + 1;
        plVar11 = plVar11 + 1;
      } while ((int)lVar16 < (int)uVar19);
    }
    plVar11 = (long *)FUN_015ab07c(*(undefined8 *)PTR_DAT_027b5ac8);
    if (plVar5 != (long *)0x0) {
      if ((int)plVar5[3] < 2) {
LAB_01f7fdfc:
        *in_stack_00000008 = lVar6;
        thunk_FUN_01286abc(in_stack_00000008,lVar6);
        *in_stack_00000010 = (long)plVar5;
        thunk_FUN_01286abc(in_stack_00000010,plVar5);
        return;
      }
      uVar13 = plVar5[3] & 0xffffffff;
      uVar17 = 1;
LAB_01f7fc40:
      if (lVar6 != 0) {
        if (((uVar17 < *(uint *)(lVar6 + 0x18)) && (uVar17 < uVar13)) &&
           ((uint)(uVar17 - 1) < (uint)uVar13)) {
          uVar8 = *(undefined8 *)(lVar6 + uVar17 * 8 + 0x20);
          lVar4 = plVar5[uVar17 + 4];
          bVar1 = false;
          uVar13 = uVar17 - 1;
          uVar20 = uVar17;
          do {
            uVar18 = uVar13;
            lVar16 = plVar5[uVar18 + 4];
            if (plVar11 == (long *)0x0) goto LAB_01f7fe3c;
            lVar9 = *plVar11;
            uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_027b5ad8) {
                  puVar12 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_01f7fce4;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar12 = (undefined8 *)FUN_0122ea3c(plVar11,*(long *)PTR_DAT_027b5ad8,0);
LAB_01f7fce4:
            iVar3 = (*(code *)*puVar12)(plVar11,lVar16,lVar4,puVar12[1]);
            if (iVar3 < 1) {
              if (!bVar1) goto LAB_01f7fdec;
              goto LAB_01f7fd98;
            }
            if ((*(uint *)(lVar6 + 0x18) <= (uint)uVar18) ||
               (*(uint *)(lVar6 + 0x18) <= (uint)uVar20)) break;
            *(undefined8 *)(lVar6 + uVar20 * 8 + 0x20) = *(undefined8 *)(lVar6 + uVar18 * 8 + 0x20);
            thunk_FUN_01286abc();
            uVar19 = *(uint *)(plVar5 + 3);
            if (uVar19 <= (uint)uVar18) break;
            lVar16 = plVar5[uVar18 + 4];
            if (lVar16 != 0) {
              lVar9 = thunk_FUN_0124baac(lVar16,*(undefined8 *)(*plVar5 + 0x40));
              if (lVar9 == 0) goto LAB_01f7fe40;
              uVar19 = *(uint *)(plVar5 + 3);
            }
            if (uVar19 <= (uint)uVar20) break;
            plVar5[uVar20 + 4] = lVar16;
            thunk_FUN_01286abc(plVar5 + uVar20 + 4,lVar16);
            if (uVar18 == 0) goto LAB_01f7fd94;
            bVar1 = true;
            uVar13 = uVar18 - 1;
            uVar20 = uVar18;
            if (*(uint *)(plVar5 + 3) <= (uint)(uVar18 - 1)) break;
          } while( true );
        }
LAB_01f7fe38:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
    }
  }
LAB_01f7fe3c:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
LAB_01f7fd94:
  uVar20 = 0;
LAB_01f7fd98:
  uVar19 = (uint)uVar20;
  if (*(uint *)(lVar6 + 0x18) <= uVar19) goto LAB_01f7fe38;
  *(undefined8 *)(lVar6 + (long)(int)uVar19 * 8 + 0x20) = uVar8;
  thunk_FUN_01286abc();
  if ((lVar4 != 0) &&
     (lVar16 = thunk_FUN_0124baac(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar16 == 0)) {
LAB_01f7fe40:
    uVar8 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar8,0);
  }
  if (*(uint *)(plVar5 + 3) <= uVar19) goto LAB_01f7fe38;
  plVar5[(long)(int)uVar19 + 4] = lVar4;
  thunk_FUN_01286abc(plVar5 + (long)(int)uVar19 + 4,lVar4);
LAB_01f7fdec:
  uVar13 = (ulong)*(uint *)(plVar5 + 3);
  uVar17 = uVar17 + 1;
  if ((long)(int)*(uint *)(plVar5 + 3) <= (long)uVar17) goto LAB_01f7fdfc;
  goto LAB_01f7fc40;
}


