/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonContract$$InvokeOnDeserialized
ENTRY_POINT: 05e8bdbc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint Newtonsoft_Json_Serialization_JsonContract__InvokeOnDeserialized(void)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x19;
  long lVar11;
  long unaff_x21;
  int iVar12;
  long lVar13;
  undefined1 in_stack_00000008;
  
  puVar6 = PTR_DAT_07a179e0;
  puVar5 = PTR_DAT_07a179d8;
  puVar4 = PTR_DAT_07a179c0;
  puVar3 = PTR_DAT_079f4df0;
  lVar8 = *(long *)(unaff_x19 + 0x18);
  if (lVar8 != 0) {
    iVar12 = 0;
    lVar11 = 0x7fffffffffffffff;
    do {
      if (*(int *)(lVar8 + 0x18) <= iVar12) {
        iVar12 = 0;
        goto LAB_05e8be84;
      }
      lVar8 = FUN_0459ed6c(lVar8,iVar12,*(undefined8 *)puVar5);
      if (lVar8 == 0) break;
      if (*(char *)(lVar8 + 0x41) == '\0') {
        lVar13 = *(long *)(lVar8 + 0x38);
        if (lVar13 <= unaff_x21) {
          FUN_05e8c2c0(lVar8,lVar8);
          lVar13 = *(long *)(lVar8 + 0x38);
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        lVar11 = FUN_05e18be0(lVar11,lVar13,0);
        if ((unaff_x21 < *(long *)(lVar8 + 0x38)) && (*(long *)(lVar8 + 0x38) != 0x7fffffffffffffff)
           ) {
          *(undefined1 *)(lVar8 + 0x41) = 0;
        }
      }
      lVar8 = *(long *)(unaff_x19 + 0x18);
      iVar12 = iVar12 + 1;
    } while (lVar8 != 0);
  }
  goto LAB_05e8bf20;
  while( true ) {
    lVar8 = FUN_0459ed6c(lVar8,iVar12,*(undefined8 *)puVar5);
    if (lVar8 == 0) break;
    if (*(char *)(lVar8 + 0x41) == '\0') {
      lVar8 = *(long *)(unaff_x19 + 0x18);
    }
    else {
      *(undefined1 *)(lVar8 + 0x42) = 0;
      thunk_FUN_03650fbc();
      lVar8 = *(long *)(unaff_x19 + 0x18);
      *(undefined1 *)(unaff_x19 + 0x10) = 1;
      if (lVar8 == 0) break;
      uVar9 = FUN_0459ed6c(lVar8,*(int *)(lVar8 + 0x18) + -1,*(undefined8 *)puVar5);
      FUN_0459edc0(lVar8,iVar12,uVar9,*(undefined8 *)puVar6);
      lVar8 = *(long *)(unaff_x19 + 0x18);
      if (lVar8 == 0) break;
      FUN_045a0804(lVar8,*(int *)(lVar8 + 0x18) + -1,*(undefined8 *)puVar4);
      lVar8 = *(long *)(unaff_x19 + 0x18);
      if (lVar8 == 0) break;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_05e8bf24;
      iVar12 = iVar12 + -1;
    }
    iVar12 = iVar12 + 1;
    if (lVar8 == 0) break;
LAB_05e8be84:
    if (*(int *)(lVar8 + 0x18) <= iVar12) {
LAB_05e8bf24:
      cVar1 = *(char *)(unaff_x19 + 0x10);
      thunk_FUN_03650fbc();
      if (cVar1 != '\0') {
        lVar8 = *(long *)(unaff_x19 + 0x18);
        in_stack_00000008 = 0;
        plVar10 = (long *)thunk_FUN_0367fa58(*(undefined8 *)PTR_DAT_07a179e8,&stack0x00000008);
        uVar9 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a179b8);
        if ((plVar10 == (long *)0x0) ||
           (FUN_0547f2d4(uVar9,plVar10,*(undefined8 *)(*plVar10 + 400),0), lVar8 == 0)) break;
        FUN_045a0af4(lVar8,uVar9,*(undefined8 *)PTR_DAT_07a179c8);
        thunk_FUN_03650fbc();
        *(undefined1 *)(unaff_x19 + 0x10) = 0;
      }
      *(long *)(unaff_x19 + 0x20) = lVar11;
      if (lVar11 == 0x7fffffffffffffff) {
        uVar7 = 0xffffffff;
      }
      else {
        lVar8 = thunk_FUN_03676284();
        if (lVar11 - lVar8 < 0x138800000000) {
          auVar2 = SEXT816(lVar11 - lVar8) * SEXT816(0x346dc5d63886594b);
          uVar7 = (int)(auVar2._8_8_ >> 0xb) - (auVar2._12_4_ >> 0x1f);
          uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
        }
        else {
          uVar7 = 0x7ffffffe;
        }
      }
      return uVar7;
    }
  }
LAB_05e8bf20:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


