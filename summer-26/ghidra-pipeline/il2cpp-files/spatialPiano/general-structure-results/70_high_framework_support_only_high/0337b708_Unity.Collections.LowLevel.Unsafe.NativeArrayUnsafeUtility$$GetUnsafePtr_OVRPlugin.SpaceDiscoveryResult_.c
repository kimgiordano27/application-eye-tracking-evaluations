/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$GetUnsafePtr<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0337b708
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0337bc80) */
/* WARNING: Removing unreachable block (ram,0x0337bc94) */
/* WARNING: Removing unreachable block (ram,0x0337bc9c) */
/* WARNING: Removing unreachable block (ram,0x0337bcac) */

void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__GetUnsafePtr<OVRPlugin_SpaceDiscoveryResult>
               (long param_1,long param_2,undefined8 ****param_3,long param_4)

{
  bool bVar1;
  undefined8 ****__src;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long alStack_50 [3];
  long *plStack_38;
  long **pplStack_30;
  long *plStack_28;
  long *plStack_20;
  undefined8 ***pppuStack_18;
  undefined8 *puStack_10;
  long lStack_8;
  
  lVar10 = tpidr_el0;
  lStack_8 = *(long *)(lVar10 + 0x28);
  lVar13 = *(long *)(param_4 + 0x38);
  pppuStack_18 = param_3;
  if (lVar13 == 0) {
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(PTR_DAT_067c9f30);
    FUN_02f08768(PTR_DAT_067c9f38);
    FUN_02f08768(PTR_DAT_067c9f40);
    FUN_02f08768(PTR_DAT_067c9f48);
    FUN_02f08768(PTR_DAT_067c9cb8);
    lVar13 = *(long *)(param_4 + 0x38);
    if (lVar13 == 0) {
      FUN_02f41ef8(param_4);
      lVar13 = *(long *)(param_4 + 0x38);
    }
  }
  alStack_50[2] = (long)*(uint *)(*(long *)(lVar13 + 8) + 0xfc);
  puVar9 = (undefined8 *)((long)alStack_50 - (alStack_50[2] + 0xfU & 0x1fffffff0));
  plStack_28 = (long *)0x0;
  plStack_20 = (long *)0x0;
  alStack_50[1] = param_4;
  if (*(long *)(param_1 + 0x18) == 0) {
    if (*(int *)(*(long *)PTR_DAT_067c9f48 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar13 = FUN_062834cc(0);
    puVar4 = PTR_DAT_067c9f40;
    puVar3 = PTR_DAT_067c9f38;
    if (lVar13 == 0) goto LAB_0337bc6c;
    iVar15 = *(int *)(lVar13 + 0x18) + -1;
    lVar14 = lVar10;
    if (-1 < iVar15) {
      do {
        alStack_50[0] = lVar14;
        plVar6 = (long *)FUN_03abf644(lVar13,iVar15,*(undefined8 *)puVar3);
        if (plVar6 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
          if (((bVar2 <= *(byte *)(*plVar6 + 0x130)) &&
              (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar4)) &&
             (uVar11 = FUN_06384aa8(plVar6,0), (uVar11 & 1) == 0)) {
            lVar14 = *(long *)(alStack_50[1] + 0x38);
            __src = (undefined8 ****)pppuStack_18;
            if (-1 < *(int *)(*(long *)(lVar14 + 8) + 0x28)) {
              __src = &pppuStack_18;
            }
            memcpy(puVar9,__src,alStack_50[2]);
            if (param_2 == 0) goto LAB_0337bc6c;
            puStack_10 = puVar9;
            if (-1 < *(int *)(*(long *)(lVar14 + 8) + 0x28)) {
              puStack_10 = (undefined8 *)*puVar9;
            }
            puVar7 = *(undefined8 **)(lVar14 + 0x10);
            (*(code *)puVar7[2])(*puVar7,puVar7,param_2,&puStack_10,&plStack_38);
            plVar5 = plStack_38;
            pplStack_30 = &plStack_28;
            plStack_38 = (long *)0x0;
            plStack_28 = plVar5;
            lVar14 = (**(code **)(*plVar6 + 0x3f8))(plVar6,*(undefined8 *)(*plVar6 + 0x400));
            if (plVar5 == (long *)0x0) {
              if (*(long *)(lVar10 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              goto LAB_0337bd38;
            }
            plVar5[7] = lVar14;
            plVar5 = (long *)(**(code **)(*plVar6 + 0x3f8))(plVar6,*(undefined8 *)(*plVar6 + 0x400))
            ;
            if (plVar5 == (long *)0x0) {
              if (*(long *)(lVar10 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              goto LAB_0337bd38;
            }
            (**(code **)(*plVar5 + 0x188))(plVar5,plStack_28,*(undefined8 *)(*plVar5 + 400));
            lVar14 = (**(code **)(*plVar6 + 0x278))(plVar6,*(undefined8 *)(*plVar6 + 0x280));
            if (lVar14 == 0) {
              if (*(long *)(lVar10 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              goto LAB_0337bd38;
            }
            lVar14 = FUN_0637014c(lVar14,0);
            if (lVar14 == 0) {
              if (plStack_28 == (long *)0x0) {
                if (*(long *)(lVar10 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02f089c8();
                }
                goto LAB_0337bd38;
              }
              uVar11 = FUN_0635bbbc(plStack_28,0);
              iVar8 = 4;
              if ((uVar11 & 1) == 0) {
                iVar8 = 0xc;
              }
            }
            else {
              FUN_06371d58(param_1,plVar6,0);
              iVar8 = 4;
            }
            plVar6 = plStack_28;
            if (plStack_28 != (long *)0x0) {
              lVar10 = *plStack_28;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_067c91b0) {
                    puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_0337bb64;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar7 = (undefined8 *)FUN_02f421d0(plStack_28,*(long *)PTR_DAT_067c91b0,0);
LAB_0337bb64:
              (*(code *)*puVar7)(plVar6,puVar7[1]);
            }
            lVar10 = alStack_50[0];
            if ((iVar8 != 0xc) && (iVar8 != 0)) break;
          }
        }
        bVar1 = 0 < iVar15;
        iVar15 = iVar15 + -1;
        lVar14 = alStack_50[0];
      } while (bVar1);
    }
  }
  else {
    if (-1 < *(int *)(*(long *)(lVar13 + 8) + 0x28)) {
      param_3 = &pppuStack_18;
    }
    memcpy(puVar9,param_3,alStack_50[2]);
    if (param_2 == 0) {
LAB_0337bc6c:
      if (*(long *)(lVar10 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_0337bd38;
    }
    puVar7 = *(undefined8 **)(lVar13 + 0x10);
    if (-1 < *(int *)(*(long *)(lVar13 + 8) + 0x28)) {
      puVar9 = (undefined8 *)*puVar9;
    }
    puStack_10 = puVar9;
    (*(code *)puVar7[2])(*puVar7,puVar7,param_2,&puStack_10,&plStack_38);
    plVar6 = plStack_38;
    plVar5 = *(long **)(param_1 + 0x20);
    pplStack_30 = &plStack_20;
    plStack_38 = (long *)0x0;
    plStack_20 = plVar6;
    if (plVar5 == (long *)0x0) {
      plVar5 = *(long **)(param_1 + 0x18);
      if (plVar5 == (long *)0x0) {
        alStack_50[0] = lVar10;
        if (*(long *)(lVar10 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        goto LAB_0337bd38;
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x3f8))(plVar5,*(undefined8 *)(*plVar5 + 0x400));
    }
    else {
      bVar2 = *(byte *)(*(long *)PTR_DAT_067c9cb8 + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_067c9cb8))
      {
        alStack_50[0] = lVar10;
        if (*(long *)(lVar10 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48();
        }
        goto LAB_0337bd38;
      }
    }
    if (plVar6 == (long *)0x0) {
      alStack_50[0] = lVar10;
      if (*(long *)(lVar10 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_0337bd38;
    }
    plVar6[7] = (long)plVar5;
    plVar6 = *(long **)(param_1 + 0x18);
    if (plVar6 == (long *)0x0) {
      alStack_50[0] = lVar10;
      if (*(long *)(lVar10 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_0337bd38;
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x3f8))(plVar6,*(undefined8 *)(*plVar6 + 0x400));
    if (plVar6 == (long *)0x0) {
      if (*(long *)(lVar10 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      goto LAB_0337bd38;
    }
    (**(code **)(*plVar6 + 0x188))(plVar6,plStack_20,*(undefined8 *)(*plVar6 + 400));
    FUN_06373ea8(param_1,*(undefined8 *)(param_1 + 0x18),0);
    plVar6 = plStack_20;
    if (plStack_20 != (long *)0x0) {
      lVar13 = *plStack_20;
      uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_067c91b0) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0337b93c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar9 = (undefined8 *)FUN_02f421d0(plStack_20,*(long *)PTR_DAT_067c91b0,0);
LAB_0337b93c:
      (*(code *)*puVar9)(plVar6,puVar9[1]);
    }
  }
  if (*(long *)(lVar10 + 0x28) == lStack_8) {
    return;
  }
LAB_0337bd38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


