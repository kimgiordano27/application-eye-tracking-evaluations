/*
FUNCTION_NAME: Unity.AppUI.UI.Icon.UxmlSerializedData$$.ctor
ENTRY_POINT: 068d3fec
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_16;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2
*/


void Unity_AppUI_UI_Icon_UxmlSerializedData___ctor(long param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *puVar10;
  long unaff_x24;
  int unaff_w25;
  int unaff_w26;
  int unaff_w27;
  undefined8 *unaff_x28;
  ulong unaff_x29;
  double dVar11;
  double unaff_d9;
  
code_r0x068d3fec:
  FUN_0459f03c(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
  param_3 = unaff_x24;
  do {
    if (unaff_w27 != unaff_w26) {
      param_3 = unaff_x21;
    }
Unity_AppUI_UI_IconButton___ctor:
    do {
      unaff_x21 = param_3;
      unaff_x29 = ((*(long *)(unaff_x23 + 0x38) + unaff_x29) - *(long *)(unaff_x23 + 0x18)) +
                  *(long *)(unaff_x23 + 0x30);
      if (*(ulong *)(unaff_x22 + 0x30) <= unaff_x29) {
        iVar2 = FUN_06876050();
        if (iVar2 == 1) {
          if (*(long *)(unaff_x20 + 0x48) == 0) goto LAB_068d41f4;
          lVar9 = *(long *)(*(long *)(unaff_x20 + 0x48) + 0x30);
          if (lVar9 == 0) {
            if (unaff_x21 != 0) {
              if ((unaff_x19 != 0) && (*(long *)(unaff_x19 + 0x20) != 0)) {
                FUN_045a055c(*(long *)(unaff_x19 + 0x20),unaff_x21,*(undefined8 *)PTR_DAT_07a4fa28);
                return;
              }
              goto LAB_068d41f4;
            }
          }
          else {
            if (unaff_x21 == 0) {
              if (*(int *)(*(long *)PTR_DAT_07a02578 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              uVar3 = FUN_0686af50(lVar9,0);
              lVar9 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a4f868);
              FUN_05e5ae34(lVar9,0);
              *(undefined4 *)(lVar9 + 0x10) = 0x7ba9;
              *(undefined8 *)(lVar9 + 0x18) = uVar3;
              thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x18),uVar3);
              if ((unaff_x19 != 0) && (lVar6 = *(long *)(unaff_x19 + 0x20), lVar6 != 0)) {
                lVar7 = *(long *)(lVar6 + 0x10);
                lVar8 = *(long *)PTR_DAT_07a4fa20;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar7 != 0) {
                  uVar1 = *(uint *)(lVar6 + 0x18);
                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                    plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar5 = lVar9;
                    thunk_FUN_036b7ad0(plVar5,lVar9);
                    return;
                  }
                  FUN_0459f03c(lVar6,lVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  return;
                }
              }
              goto LAB_068d41f4;
            }
            uVar3 = FUN_068d0f20(unaff_x21);
            uVar4 = FUN_05c966c0(uVar3,lVar9,0);
            if ((uVar4 & 1) != 0) {
              FUN_068d1214(unaff_x21,lVar9);
              return;
            }
          }
        }
        return;
      }
      unaff_x23 = thunk_FUN_0367fe20(*unaff_x28);
      FUN_068d1ac4();
      if (unaff_x23 == 0) goto LAB_068d41f4;
      unaff_w27 = *(int *)(unaff_x23 + 0x20);
      iVar2 = FUN_06876050();
      param_3 = unaff_x21;
      if (iVar2 != 1) {
        if (unaff_w27 == unaff_w25) {
          uVar4 = FUN_068d05b4(unaff_x23);
          dVar11 = *(double *)(unaff_x20 + 0x58);
          *(ulong *)(unaff_x20 + 0x60) = uVar4;
          if (dVar11 <= 0.0) goto Unity_AppUI_UI_IconButton___ctor;
        }
        else {
          if (unaff_w27 == unaff_w26) {
            lVar9 = *(long *)(unaff_x20 + 0x48);
            uVar3 = FUN_068d1c94(unaff_x23);
            if (lVar9 == 0) goto LAB_068d41f4;
            puVar10 = (undefined8 *)(lVar9 + 0x30);
            *puVar10 = uVar3;
            thunk_FUN_036b7ad0(puVar10,uVar3);
            goto Unity_AppUI_UI_IconButton___ctor;
          }
          if (unaff_w27 != 0x4489) goto Unity_AppUI_UI_IconButton___ctor;
          dVar11 = (double)FUN_068d0654(unaff_x23);
          uVar4 = *(ulong *)(unaff_x20 + 0x60);
          *(double *)(unaff_x20 + 0x58) = dVar11;
          if (uVar4 == 0) goto Unity_AppUI_UI_IconButton___ctor;
        }
        if (*(int *)(*(long *)PTR_DAT_079f5790 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar3 = FUN_05e2f86c((dVar11 * (double)uVar4) / unaff_d9,0);
        *(undefined8 *)(unaff_x20 + 0x68) = uVar3;
        goto Unity_AppUI_UI_IconButton___ctor;
      }
    } while (unaff_w27 == 0xbf);
    uVar3 = FUN_068d1c54(unaff_x23);
    param_3 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a4f868);
    FUN_05e5ae34(param_3,0);
    *(int *)(param_3 + 0x10) = unaff_w27;
    *(undefined8 *)(param_3 + 0x18) = uVar3;
    thunk_FUN_036b7ad0((undefined8 *)(param_3 + 0x18),uVar3);
    if ((unaff_x19 == 0) || (param_2 = *(long *)(unaff_x19 + 0x20), param_2 == 0)) {
LAB_068d41f4:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar9 = *(long *)(param_2 + 0x10);
    unaff_w25 = 0x2ad7b1;
    lVar6 = *(long *)PTR_DAT_07a4fa20;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_068d41f4;
    uVar1 = *(uint *)(param_2 + 0x18);
    if (*(uint *)(lVar9 + 0x18) <= uVar1) break;
    *(uint *)(param_2 + 0x18) = uVar1 + 1;
    plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
    *plVar5 = param_3;
    thunk_FUN_036b7ad0(plVar5,param_3);
  } while( true );
  param_1 = *(long *)(lVar6 + 0x20);
  unaff_x24 = param_3;
  goto code_r0x068d3fec;
}


