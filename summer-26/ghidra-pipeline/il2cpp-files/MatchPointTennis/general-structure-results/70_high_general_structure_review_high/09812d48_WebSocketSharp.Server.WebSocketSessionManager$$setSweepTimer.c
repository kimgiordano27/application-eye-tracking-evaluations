/*
FUNCTION_NAME: WebSocketSharp.Server.WebSocketSessionManager$$setSweepTimer
ENTRY_POINT: 09812d48
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void WebSocketSharp_Server_WebSocketSessionManager__setSweepTimer
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  int extraout_var;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  long unaff_x20;
  long lVar11;
  long lVar12;
  float unaff_w23;
  long unaff_x24;
  long *unaff_x25;
  ulong uVar13;
  float fVar14;
  undefined8 uVar15;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar16;
  float unaff_s11;
  int unaff_s12;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar6 = (undefined8 *)FUN_044822ac();
      goto LAB_09812d74;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar6 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_09812d74:
  (*(code *)*puVar6)();
  if (*(long *)(unaff_x19 + 0x108) != 0) {
    fVar14 = (float)FUN_0982b298(*(long *)(unaff_x19 + 0x108),0);
    lVar12 = *(long *)(unaff_x19 + 0x1a8);
    if (lVar12 != 0) {
      fVar16 = unaff_w23 / unaff_s10;
      uVar13 = 0;
      lVar11 = 0x48;
      do {
        iVar3 = (int)*(undefined8 *)(lVar12 + 0x18);
        if ((long)iVar3 <= (long)uVar13) {
          if (iVar3 == 0) goto LAB_09813114;
          fVar14 = fVar16 - (float)extraout_var / fVar14;
          *(float *)(lVar12 + 0x20) = unaff_s11;
          *(float *)(lVar12 + 0x24) = fVar14;
          *(undefined4 *)(lVar12 + 0x28) = 0;
          lVar12 = *(long *)(unaff_x19 + 0x1a8);
          if (lVar12 != 0) {
            if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_09813114;
            *(float *)(lVar12 + 0x8c) = unaff_s11 + (float)unaff_s12;
            *(float *)(lVar12 + 0x90) = fVar14;
            *(undefined4 *)(lVar12 + 0x94) = 0;
            lVar12 = *(long *)(unaff_x19 + 0x1a8);
            if (lVar12 != 0) {
              if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_09813114;
              *(float *)(lVar12 + 0xf8) = unaff_s11 + (float)unaff_s12;
              *(float *)(lVar12 + 0xfc) = fVar16;
              *(undefined4 *)(lVar12 + 0x100) = 0;
              lVar12 = *(long *)(unaff_x19 + 0x1a8);
              if (lVar12 != 0) {
                if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_09813114;
                *(float *)(lVar12 + 0x164) = unaff_s11;
                *(float *)(lVar12 + 0x168) = fVar16;
                *(undefined4 *)(lVar12 + 0x16c) = 0;
                if (*(char *)(unaff_x24 + 0x153) == '\0') {
                  FUN_04447ba8(PTR_DAT_09f1fb40);
                  *(undefined1 *)(unaff_x24 + 0x153) = 1;
                }
                fVar14 = unaff_s9 - **(float **)(*unaff_x25 + 0xb8);
                fVar16 = unaff_s8 - (*(float **)(*unaff_x25 + 0xb8))[1];
                if (fVar14 * fVar14 + fVar16 * fVar16 < DAT_01c759c8) goto LAB_09812ee8;
                if (*(long *)(unaff_x19 + 0x1a8) != 0) {
                  uVar4 = *(uint *)(*(long *)(unaff_x19 + 0x1a8) + 0x18);
                  if ((int)uVar4 < 1) goto LAB_09812ee8;
                  uVar10 = 0;
                  goto WebSocketSharp_Server_WebSocketSessionManager__get_Count;
                }
              }
            }
          }
          break;
        }
        FUN_0980bb08();
        uVar2 = FUN_04624244(0);
        if (*(uint *)(lVar12 + 0x18) <= uVar13) goto LAB_09813114;
        *(undefined4 *)(lVar12 + lVar11) = uVar2;
        lVar12 = *(long *)(unaff_x19 + 0x1a8);
        lVar11 = lVar11 + 0x6c;
        uVar13 = uVar13 + 1;
      } while (lVar12 != 0);
    }
  }
  goto LAB_09812e00;
  while (uVar10 = uVar10 + 1, (int)uVar10 < (int)uVar4) {
WebSocketSharp_Server_WebSocketSessionManager__get_Count:
    if (uVar4 <= uVar10) goto LAB_09813114;
  }
LAB_09812ee8:
  if (unaff_x20 == 0) goto LAB_09812e00;
  FUN_0982be50();
  iVar3 = FUN_094d0908(0);
  if ((*(long *)(unaff_x19 + 0x108) == 0) ||
     (lVar12 = FUN_096404c4(*(long *)(unaff_x19 + 0x108),0), lVar12 == 0)) goto LAB_09812e00;
  uVar4 = FUN_098091ac(lVar12,0);
  puVar1 = PTR_DAT_09f9b010;
  if (0 < (int)uVar4) {
    lVar12 = *(long *)PTR_DAT_09f9b010;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar12 = *(long *)puVar1;
    }
    lVar11 = **(long **)(lVar12 + 0xb8);
    if (lVar11 == 0) goto LAB_09812e00;
    if ((int)uVar4 < *(int *)(lVar11 + 0x18)) {
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar11 = **(long **)(*(long *)puVar1 + 0xb8);
        if (lVar11 == 0) goto LAB_09812e00;
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_09813114;
      lVar12 = *(long *)(lVar11 + (ulong)uVar4 * 8 + 0x20);
      if (lVar12 == 0) goto LAB_09812e00;
      iVar3 = FUN_094ce72c(lVar12,0);
    }
  }
  if ((*(long *)(unaff_x19 + 0x108) != 0) &&
     (lVar12 = FUN_096404c4(*(long *)(unaff_x19 + 0x108),0), lVar12 != 0)) {
    iVar5 = FUN_0980837c(lVar12,0);
    if (iVar5 == 0) {
      uVar7 = 0;
    }
    else {
      if ((*(long *)(unaff_x19 + 0x108) == 0) ||
         (lVar12 = FUN_096404c4(*(long *)(unaff_x19 + 0x108),0), lVar12 == 0)) goto LAB_09812e00;
      uVar7 = FUN_09809cd4(lVar12,0);
    }
    if ((*(long *)(unaff_x19 + 0x1b8) != 0) &&
       (lVar12 = FUN_095259a0(*(long *)(unaff_x19 + 0x1b8),0), lVar12 != 0)) {
      lVar12 = FUN_0952a094(lVar12,0);
      lVar11 = *(long *)(unaff_x19 + 0x1a8);
      if (lVar11 != 0) {
        if (*(int *)(lVar11 + 0x18) == 0) {
LAB_09813114:
                    /* WARNING: Subroutine does not return */
          FUN_04447e4c();
        }
        if (lVar12 != 0) {
          uVar13 = (ulong)*(uint *)(lVar11 + 0x24);
          uVar8 = (ulong)*(uint *)(lVar11 + 0x28);
          uVar15 = FUN_09537f40(*(undefined4 *)(lVar11 + 0x20),uVar13,uVar8,lVar12,0);
          if (*(int *)(*(long *)PTR_DAT_09f20648 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          uVar15 = FUN_09807a48(uVar15,uVar13,uVar8,uVar7,0);
          uVar7 = FUN_0980a668();
          if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
            thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
          }
          uVar8 = FUN_09531730(uVar7,0,0);
          if ((uVar8 & 1) == 0) {
            return;
          }
          plVar9 = (long *)FUN_0980a668();
          if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x098130ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar9 + 0x288))
                      (uVar15,(float)iVar3 - (float)uVar13,plVar9,*(undefined8 *)(*plVar9 + 0x290));
            return;
          }
        }
      }
    }
  }
LAB_09812e00:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


