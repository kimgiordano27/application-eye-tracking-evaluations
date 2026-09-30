/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlatformInit.<>c__DisplayClass5_0$$.ctor
ENTRY_POINT: 072f2764
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0___ctor(ulong param_1)

{
  char in_NG;
  char in_OV;
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  uint unaff_w25;
  ulong unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  
  while (in_NG != in_OV) {
    if ((param_1 & 0xffffffff) <= unaff_x26) goto LAB_072f2a94;
    plVar8 = *(long **)(unaff_x28 + unaff_x26 * 8);
    if ((plVar8 != (long *)0x0) && (*plVar8 == *unaff_x27)) {
      uVar1 = (*(code *)plVar8[3])(plVar8[8]);
      unaff_w25 = unaff_w25 | uVar1;
    }
    uVar1 = *(uint *)(unaff_x24 + 0x18);
    param_1 = (ulong)uVar1;
    unaff_x26 = unaff_x26 + 1;
    in_OV = SBORROW8(unaff_x26,(long)(int)uVar1);
    in_NG = (long)(unaff_x26 - (long)(int)uVar1) < 0;
  }
  if ((unaff_w25 & 1) != 0) {
    return;
  }
  plVar8 = *(long **)(unaff_x21 + 0x60);
  lVar2 = FUN_04077674(*(undefined8 *)PTR_DAT_09287040,3);
  if (lVar2 == 0) {
LAB_072f2a90:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((unaff_x22 != 0) && (lVar3 = thunk_FUN_040b4e00(), lVar3 == 0)) {
LAB_072f2a98:
    uVar7 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar7,0);
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(long *)(lVar2 + 0x20) = unaff_x22;
    thunk_FUN_040ec700();
    if ((unaff_x19 != 0) && (lVar3 = thunk_FUN_040b4e00(), lVar3 == 0)) goto LAB_072f2a98;
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
      *(long *)(lVar2 + 0x28) = unaff_x19;
      thunk_FUN_040ec700();
      if ((unaff_x23 != 0) && (lVar3 = thunk_FUN_040b4e00(), lVar3 == 0)) goto LAB_072f2a98;
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(long *)(lVar2 + 0x30) = unaff_x23;
        thunk_FUN_040ec700();
        if (plVar8 != (long *)0x0) {
          lVar3 = *plVar8;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
          uVar7 = *(undefined8 *)PTR_DAT_092c48d0;
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092b9200) {
                puVar4 = (undefined8 *)(lVar3 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
                goto LAB_072f2a78;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_092b9200,0xc);
LAB_072f2a78:
          (*(code *)*puVar4)(plVar8,uVar7,lVar2,puVar4[1]);
          return;
        }
        goto LAB_072f2a90;
      }
    }
  }
LAB_072f2a94:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


