/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$GetUnsafePtr<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0337b70c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0337bc80) */
/* WARNING: Removing unreachable block (ram,0x0337bc94) */
/* WARNING: Removing unreachable block (ram,0x0337bc9c) */
/* WARNING: Removing unreachable block (ram,0x0337bcac) */

void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<OVRPlugin_SpaceQueryResult>
               (long param_1,long param_2,void *param_3,long param_4)

{
  bool bVar1;
  void *__src;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  code *pcVar15;
  int *piVar16;
  long lVar17;
  int iVar18;
  long unaff_x29;
  undefined8 auStack_50 [10];
  
  lVar13 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar13 + 0x28);
  lVar17 = *(long *)(param_4 + 0x38);
  *(void **)(unaff_x29 + -0x18) = param_3;
  if (lVar17 == 0) {
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067c9f30);
    FUN_02f08768(PTR_DAT_067c9f38);
    FUN_02f08768(PTR_DAT_067c9f40);
    FUN_02f08768(PTR_DAT_067c9f48);
    FUN_02f08768(PTR_DAT_067c9cb8);
    lVar17 = *(long *)(param_4 + 0x38);
    if (lVar17 == 0) {
      FUN_02f41ef8(param_4);
      lVar17 = *(long *)(param_4 + 0x38);
    }
  }
  uVar14 = (ulong)*(uint *)(*(long *)(lVar17 + 8) + 0xfc);
  *(long *)(unaff_x29 + -0x48) = param_4;
  *(ulong *)(unaff_x29 + -0x40) = uVar14;
  puVar11 = (undefined8 *)((long)auStack_50 - (uVar14 + 0xf & 0x1fffffff0));
  lVar10 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  if (lVar10 == 0) {
    if (*(int *)(*(long *)PTR_DAT_067c9f48 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar17 = FUN_062834cc(0);
    puVar4 = PTR_DAT_067c9f40;
    puVar3 = PTR_DAT_067c9f38;
    if (lVar17 == 0) goto LAB_0337bc6c;
    iVar18 = *(int *)(lVar17 + 0x18) + -1;
    if (-1 < iVar18) {
      *(long *)(unaff_x29 + -0x50) = lVar13;
      do {
        plVar6 = (long *)FUN_03abf644(lVar17,iVar18,*(undefined8 *)puVar3);
        if (plVar6 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
          if (((bVar2 <= *(byte *)(*plVar6 + 0x130)) &&
              (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar4)) &&
             (uVar14 = FUN_06384aa8(plVar6,0), (uVar14 & 1) == 0)) {
            lVar10 = *(long *)(*(long *)(unaff_x29 + -0x48) + 0x38);
            __src = *(void **)(unaff_x29 + -0x18);
            if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
              __src = (void *)(unaff_x29 + -0x18);
            }
            memcpy(puVar11,__src,*(size_t *)(unaff_x29 + -0x40));
            if (param_2 == 0) goto LAB_0337bc6c;
            puVar12 = puVar11;
            if (-1 < *(int *)(*(long *)(lVar10 + 8) + 0x28)) {
              puVar12 = (undefined8 *)*puVar11;
            }
            puVar8 = *(undefined8 **)(lVar10 + 0x10);
            uVar5 = *puVar8;
            pcVar15 = (code *)puVar8[2];
            *(undefined8 **)(unaff_x29 + -0x10) = puVar12;
            (*pcVar15)(uVar5,puVar8,param_2,unaff_x29 + -0x10,unaff_x29 + -0x38);
            lVar10 = *(long *)(unaff_x29 + -0x38);
            *(undefined8 *)(unaff_x29 + -0x38) = 0;
            *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x28;
            *(long *)(unaff_x29 + -0x28) = lVar10;
            uVar5 = (**(code **)(*plVar6 + 0x3f8))(plVar6,*(undefined8 *)(*plVar6 + 0x400));
            if (lVar10 == 0) {
              if (*(long *)(lVar13 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              goto LAB_0337bd38;
            }
            *(undefined8 *)(lVar10 + 0x38) = uVar5;
            plVar7 = (long *)(**(code **)(*plVar6 + 0x3f8))(plVar6,*(undefined8 *)(*plVar6 + 0x400))
            ;
            if (plVar7 == (long *)0x0) {
              if (*(long *)(lVar13 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              goto LAB_0337bd38;
            }
            (**(code **)(*plVar7 + 0x188))
                      (plVar7,*(undefined8 *)(unaff_x29 + -0x28),*(undefined8 *)(*plVar7 + 400));
            lVar10 = (**(code **)(*plVar6 + 0x278))(plVar6,*(undefined8 *)(*plVar6 + 0x280));
            if (lVar10 == 0) {
              if (*(long *)(lVar13 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              goto LAB_0337bd38;
            }
            lVar10 = FUN_0637014c(lVar10,0);
            if (lVar10 == 0) {
              if (*(long *)(unaff_x29 + -0x28) == 0) {
                if (*(long *)(lVar13 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                goto LAB_0337bd38;
              }
              uVar14 = FUN_0635bbbc(*(long *)(unaff_x29 + -0x28),0);
              iVar9 = 4;
              if ((uVar14 & 1) == 0) {
                iVar9 = 0xc;
              }
            }
            else {
              FUN_06371d58(param_1,plVar6,0);
              iVar9 = 4;
            }
            plVar6 = *(long **)(unaff_x29 + -0x28);
            if (plVar6 != (long *)0x0) {
              lVar13 = *plVar6;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar14 != 0) {
                piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_067c91b0) {
                    puVar12 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                    goto LAB_0337bb64;
                  }
                  uVar14 = uVar14 - 1;
                  piVar16 = piVar16 + 4;
                } while (uVar14 != 0);
              }
              puVar12 = (undefined8 *)FUN_02f421d0(plVar6,*(long *)PTR_DAT_067c91b0,0);
LAB_0337bb64:
              (*(code *)*puVar12)(plVar6,puVar12[1]);
            }
            lVar13 = *(long *)(unaff_x29 + -0x50);
            if ((iVar9 != 0xc) && (iVar9 != 0)) break;
          }
        }
        bVar1 = 0 < iVar18;
        iVar18 = iVar18 + -1;
      } while (bVar1);
    }
  }
  else {
    if (-1 < *(int *)(*(long *)(lVar17 + 8) + 0x28)) {
      param_3 = (void *)(unaff_x29 + -0x18);
    }
    memcpy(puVar11,param_3,*(size_t *)(unaff_x29 + -0x40));
    if (param_2 == 0) {
LAB_0337bc6c:
      if (*(long *)(lVar13 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_0337bd38;
    }
    puVar12 = *(undefined8 **)(lVar17 + 0x10);
    uVar5 = *puVar12;
    if (-1 < *(int *)(*(long *)(lVar17 + 8) + 0x28)) {
      puVar11 = (undefined8 *)*puVar11;
    }
    pcVar15 = (code *)puVar12[2];
    *(undefined8 **)(unaff_x29 + -0x10) = puVar11;
    (*pcVar15)(uVar5,puVar12,param_2,unaff_x29 + -0x10,unaff_x29 + -0x38);
    lVar17 = *(long *)(unaff_x29 + -0x38);
    plVar6 = *(long **)(param_1 + 0x20);
    *(undefined8 *)(unaff_x29 + -0x38) = 0;
    *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x20;
    *(long *)(unaff_x29 + -0x20) = lVar17;
    if (plVar6 == (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x18);
      if (plVar6 == (long *)0x0) {
        *(long *)(unaff_x29 + -0x50) = lVar13;
        if (*(long *)(lVar13 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_0337bd38;
      }
      plVar6 = (long *)(**(code **)(*plVar6 + 0x3f8))(plVar6,*(undefined8 *)(*plVar6 + 0x400));
    }
    else {
      bVar2 = *(byte *)(*(long *)PTR_DAT_067c9cb8 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_067c9cb8))
      {
        *(long *)(unaff_x29 + -0x50) = lVar13;
        if (*(long *)(lVar13 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48();
        }
        goto LAB_0337bd38;
      }
    }
    if (lVar17 == 0) {
      *(long *)(unaff_x29 + -0x50) = lVar13;
      if (*(long *)(lVar13 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_0337bd38;
    }
    *(long **)(lVar17 + 0x38) = plVar6;
    plVar6 = *(long **)(param_1 + 0x18);
    if (plVar6 == (long *)0x0) {
      *(long *)(unaff_x29 + -0x50) = lVar13;
      if (*(long *)(lVar13 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_0337bd38;
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x3f8))(plVar6,*(undefined8 *)(*plVar6 + 0x400));
    if (plVar6 == (long *)0x0) {
      if (*(long *)(lVar13 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_0337bd38;
    }
    (**(code **)(*plVar6 + 0x188))
              (plVar6,*(undefined8 *)(unaff_x29 + -0x20),*(undefined8 *)(*plVar6 + 400));
    FUN_06373ea8(param_1,*(undefined8 *)(param_1 + 0x18),0);
    plVar6 = *(long **)(unaff_x29 + -0x20);
    if (plVar6 != (long *)0x0) {
      lVar17 = *plVar6;
      uVar14 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_067c91b0) {
            puVar11 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0337b93c;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar11 = (undefined8 *)FUN_02f421d0(plVar6,*(long *)PTR_DAT_067c91b0,0);
LAB_0337b93c:
      (*(code *)*puVar11)(plVar6,puVar11[1]);
    }
  }
  if (*(long *)(lVar13 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_0337bd38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


