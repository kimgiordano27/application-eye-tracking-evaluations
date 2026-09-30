/*
FUNCTION_NAME: FUN_051601cc
ENTRY_POINT: 051601cc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0516052c) */

long FUN_051601cc(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  
  if ((DAT_06b79e59 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(PTR_DAT_06782418);
    FUN_02d6084c(PTR_DAT_06782420);
    FUN_02d6084c(PTR_DAT_0675f3d8);
    FUN_02d6084c(PTR_DAT_067823b8);
    FUN_02d6084c(PTR_DAT_06782428);
    FUN_02d6084c(PTR_DAT_067823c8);
    FUN_02d6084c(PTR_DAT_0677d900);
    DAT_06b79e59 = 1;
  }
  plVar13 = param_1 + 3;
  if (*plVar13 == 0) {
    uVar5 = (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
    puVar2 = PTR_DAT_0677d900;
    if ((uVar5 & 1) != 0) {
      lVar6 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067823c8);
      FUN_03aabc60(lVar6,*(undefined8 *)PTR_DAT_06782428);
      param_1[3] = lVar6;
      thunk_FUN_02dd37b4(plVar13,lVar6);
      lVar6 = FUN_0516177c(param_1);
      if ((lVar6 == 0) || (plVar7 = (long *)FUN_0552c8d0(lVar6,0), plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar6 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06782418) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_05160350;
          }
          uVar5 = uVar5 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_06782418,0);
LAB_05160350:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar4 = PTR_DAT_06782420;
      puVar3 = PTR_DAT_067823b8;
      puVar2 = PTR_DAT_0675f3d8;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      do {
        lVar6 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
              goto OVRPlugin_OVRP_1_65_0__ovrp_KtxTranscode;
            }
            uVar5 = uVar5 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar2,0);
OVRPlugin_OVRP_1_65_0__ovrp_KtxTranscode:
        uVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar5 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_05160504;
          lVar6 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar5 == 0) goto LAB_051604d8;
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_051604c0;
        }
        lVar6 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05160424;
            }
            uVar5 = uVar5 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar5 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar4,0);
LAB_05160424:
        (*(code *)*puVar8)(plVar7,puVar8[1]);
        lVar6 = *plVar13;
        uVar9 = FUN_05161244();
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar10 = *(long *)(lVar6 + 0x10);
        lVar11 = *(long *)puVar3;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
          thunk_FUN_02dd37b4();
        }
        else {
          FUN_03aac494(lVar6,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
    lVar6 = *(long *)PTR_DAT_0677d900;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar6 = *(long *)puVar2;
    }
    *plVar13 = **(long **)(lVar6 + 0xb8);
    thunk_FUN_02dd37b4(plVar13);
  }
  goto LAB_05160504;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar12 = piVar12 + 4;
    if (uVar5 == 0) break;
LAB_051604c0:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_051604f4;
    }
  }
LAB_051604d8:
  puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_0675f3d0,0);
LAB_051604f4:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_05160504:
  return *plVar13;
}


