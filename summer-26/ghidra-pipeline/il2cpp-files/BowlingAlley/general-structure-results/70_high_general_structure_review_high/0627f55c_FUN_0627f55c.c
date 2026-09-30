/*
FUNCTION_NAME: FUN_0627f55c
ENTRY_POINT: 0627f55c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_7
*/


void FUN_0627f55c(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long *plVar18;
  
  if ((DAT_076de29b & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0728f668);
    thunk_FUN_032e1da0(System_Runtime_CompilerServices_StrongBox<int>_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_AnalyticsIdentifier_TypeInfo);
    thunk_FUN_032e1da0(Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>_TypeInfo);
    DAT_076de29b = 1;
  }
  if ((param_2 == 0) || (*(int *)(param_2 + 0x10) == 0)) {
    lVar5 = thunk_FUN_032e1da0(PTR_DAT_072794f8);
    param_2 = **(long **)(lVar5 + 0xb8);
    thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
    uVar7 = thunk_FUN_032a56a0();
    puVar12 = UnityEngine_Analytics_AnalyticsSessionInfo_TypeInfo;
LAB_0627fcec:
    uVar11 = thunk_FUN_032e1da0(puVar12);
    FUN_06198cd4(uVar7,uVar11,param_2,0);
    uVar11 = thunk_FUN_032e1da0(Meta_XR_MultiplayerBlocks_Colocation_AnchorDebugVisual_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar7,uVar11);
  }
  lVar5 = FUN_057ad538(param_2,0x7c,0,0);
  puVar2 = System_Runtime_CompilerServices_StrongBox<int>_TypeInfo;
  puVar12 = PTR_DAT_0728f668;
  if (lVar5 != 0) {
    plVar6 = (long *)thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728f668);
    FUN_058f928c(plVar6,*(undefined4 *)(lVar5 + 0x18),0);
    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar12);
    FUN_058f928c(uVar7,*(undefined4 *)(lVar5 + 0x18),0);
    puVar16 = (undefined8 *)(param_1 + 0x10);
    *puVar16 = uVar7;
    thunk_FUN_0333a630(puVar16,uVar7);
    puVar12 = Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>_TypeInfo;
    if ((int)*(ulong *)(lVar5 + 0x18) < 1) {
      if (plVar6 == (long *)0x0) goto LAB_0627fad8;
    }
    else {
      uVar17 = 0;
      uVar14 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
      do {
        if (uVar14 <= uVar17) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        uVar7 = *(undefined8 *)(lVar5 + 0x20 + uVar17 * 8);
        if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        plVar8 = (long *)FUN_061ec6f4(uVar7,0);
        if (plVar8 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar8);
          }
        }
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        (**(code **)(*plVar6 + 0x308))(plVar6,plVar8,*(undefined8 *)(*plVar6 + 0x310));
        uVar14 = (ulong)*(uint *)(lVar5 + 0x18);
        uVar17 = uVar17 + 1;
      } while ((long)uVar17 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    iVar3 = (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
    puVar12 = Unity_VisualScripting_AnalyticsIdentifier_TypeInfo;
    if (iVar3 < 1) {
      return;
    }
    iVar3 = 0;
LAB_0627f718:
    plVar8 = (long *)(**(code **)(*plVar6 + 0x2e8))(plVar6,iVar3,*(undefined8 *)(*plVar6 + 0x2f0));
    if (plVar8 == (long *)0x0) {
LAB_0627fcd0:
      thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
      uVar7 = thunk_FUN_032a56a0();
      puVar12 = UnityEngine_UIElements_AncestorFilter_TypeInfo;
    }
    else {
      bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_032d618c(plVar8);
      }
      plVar9 = plVar8;
      plVar18 = plVar8;
      plVar10 = plVar8;
      if (((int)plVar8[2] != 2) || ((int)plVar8[6] != 2)) {
LAB_0627f7d0:
        do {
          if ((int)plVar18[2] == 0xc) {
            if (((int)plVar18[6] != 9) || (*(char *)((long)plVar18 + 0x34) == '\0'))
            goto LAB_0627f878;
            plVar9 = plVar18;
            if (plVar8 != plVar18) {
              if (plVar10 == (long *)0x0) goto LAB_0627fad8;
              plVar10[3] = plVar18[3];
              thunk_FUN_0333a630();
              plVar9 = plVar10;
            }
          }
          else {
            if (((int)plVar18[2] != 3) || ((int)plVar18[6] != 1)) {
LAB_0627f878:
              if (plVar10 == (long *)0x0) goto LAB_0627fad8;
              plVar10[3] = 0;
              thunk_FUN_0333a630(plVar10 + 3,0);
              if (((((int)plVar18[2] != 5) || ((int)plVar18[6] != 9)) ||
                  (*(char *)((long)plVar18 + 0x34) == '\0')) ||
                 (plVar9 = (long *)plVar18[3], plVar9 == (long *)0x0)) goto LAB_0627fcd0;
              lVar5 = *(long *)puVar2;
              bVar1 = *(byte *)(lVar5 + 0x130);
              if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(*plVar9 + 200) + ((ulong)bVar1 - 1) * 8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
                FUN_032d618c();
              }
              if ((((int)plVar9[2] != 0xc) || ((int)plVar9[6] != 9)) ||
                 ((*(char *)((long)plVar9 + 0x34) == '\0' || (plVar9[3] != 0)))) goto LAB_0627fcd0;
              if (((((int)plVar8[2] != 0xc) || ((int)plVar8[6] != 9)) ||
                  (*(char *)((long)plVar8 + 0x34) == '\0')) || ((long *)plVar8[3] == (long *)0x0)) {
                plVar9 = (long *)*puVar16;
                uVar11 = FUN_0627f258(plVar8);
                uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar12);
                uVar13 = 1;
                goto LAB_0627fa74;
              }
              lVar15 = *(long *)plVar8[3];
              if ((*(byte *)(lVar15 + 0x130) < bVar1) ||
                 (*(long *)(*(long *)(lVar15 + 200) + ((ulong)bVar1 - 1) * 8) != lVar5))
              goto LAB_0627fb20;
              plVar9 = (long *)*puVar16;
              uVar11 = FUN_0627f258();
              uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar12);
              uVar13 = 1;
              goto LAB_0627fa34;
            }
            FUN_0627fdc4(plVar9,plVar18,param_4);
            plVar9 = plVar18;
          }
          plVar18 = (long *)plVar18[3];
          if (plVar18 == (long *)0x0) goto LAB_0627f9a4;
          bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
          if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
             (plVar10 = plVar9,
             *(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar18);
          }
        } while( true );
      }
      if ((param_3 & 1) != 0) {
        plVar9 = (long *)FUN_0627fdc4(plVar8,plVar8,param_4);
        plVar18 = (long *)plVar8[3];
        if (plVar18 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
          if ((*(byte *)(*plVar18 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
            FUN_032d618c(plVar18);
          }
        }
        if (plVar18 != (long *)0x0) goto LAB_0627f7d0;
        goto LAB_0627f9b0;
      }
      thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_LinkedPool<RenderChainCommand>_TypeInfo);
      uVar7 = thunk_FUN_032a56a0();
      puVar12 = ReadyPlayerMe_Core_Analytics_AnalyticsRuntimeLogger_TypeInfo;
    }
    goto LAB_0627fcec;
  }
LAB_0627fad8:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
LAB_0627f9a4:
  plVar10 = plVar9;
  if (plVar9 == (long *)0x0) goto LAB_0627fad8;
LAB_0627f9b0:
  plVar10[3] = 0;
  thunk_FUN_0333a630(plVar10 + 3,0);
  if (((((int)plVar8[2] == 0xc) && ((int)plVar8[6] == 9)) &&
      (*(char *)((long)plVar8 + 0x34) != '\0')) && ((long *)plVar8[3] != (long *)0x0)) {
    lVar5 = *(long *)plVar8[3];
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(lVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
LAB_0627fb20:
                    /* WARNING: Subroutine does not return */
      FUN_032d618c();
    }
    plVar9 = (long *)*puVar16;
    uVar11 = FUN_0627f258();
    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar12);
    uVar13 = 0;
LAB_0627fa34:
    FUN_0627f340(uVar7,uVar11,uVar13);
    if (plVar9 == (long *)0x0) goto LAB_0627fad8;
    lVar5 = *plVar9;
  }
  else {
    plVar9 = (long *)*puVar16;
    uVar11 = FUN_0627f258(plVar8);
    uVar7 = thunk_FUN_032a56a0(*(undefined8 *)puVar12);
    uVar13 = 0;
LAB_0627fa74:
    FUN_0627f340(uVar7,uVar11,uVar13);
    if (plVar9 == (long *)0x0) goto LAB_0627fad8;
    lVar5 = *plVar9;
  }
  (**(code **)(lVar5 + 0x308))(plVar9,uVar7,*(undefined8 *)(lVar5 + 0x310));
  iVar3 = iVar3 + 1;
  iVar4 = (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0));
  if (iVar4 <= iVar3) {
    return;
  }
  goto LAB_0627f718;
}


