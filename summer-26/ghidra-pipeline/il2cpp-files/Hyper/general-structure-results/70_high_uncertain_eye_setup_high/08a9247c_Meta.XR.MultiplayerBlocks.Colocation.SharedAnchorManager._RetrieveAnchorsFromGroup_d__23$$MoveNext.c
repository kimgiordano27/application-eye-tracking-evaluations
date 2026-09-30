/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager.<RetrieveAnchorsFromGroup>d__23$$MoveNext
ENTRY_POINT: 08a9247c
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_SharedAnchorManager_<RetrieveAnchorsFromGroup>d__23__MoveNext
               (long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((DAT_0b32c6d2 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac099d0);
    FUN_04947ee4(PTR_DAT_0ac54eb0);
    FUN_04947ee4(PTR_DAT_0ac47318);
    FUN_04947ee4(PTR_DAT_0ac54eb8);
    FUN_04947ee4(PTR_DAT_0ac54ec0);
    FUN_04947ee4(PTR_DAT_0ac39480);
    DAT_0b32c6d2 = 1;
  }
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  uVar6 = 2;
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar6 = 4;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar3 = FUN_08bde5ec(*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_0ac39480,0);
    if ((uVar3 & 1) == 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_08a926ac;
      uVar2 = FUN_08bde5ec(*(long *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_0ac54eb8,0);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
    puVar1 = PTR_DAT_0ac099d0;
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8);
      uVar4 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac54ec0,*(undefined8 *)(param_1 + 0x18),0);
      lVar11 = *(long *)puVar1;
      lVar7 = *(long *)(lVar11 + 0x38);
      if (lVar7 == 0) {
        FUN_04980b90(lVar11);
        lVar7 = *(long *)(lVar11 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_04980b34();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      lVar7 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_04980b34();
      }
      FUN_094db5b4(uVar10,uVar6,uVar4,**(undefined8 **)(lVar7 + 0xb8),0);
      if ((uVar2 & 1) == 0) {
        lVar7 = 1;
      }
      else {
        lVar7 = (ulong)*(byte *)(param_1 + 0x10) << 1;
      }
      FUN_088c9018(0x40000000,&stack0x00000010,*(undefined8 *)(param_1 + 0x18),lVar7,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        plVar9 = *(long **)(*(long *)(param_1 + 0x20) + 200);
        uVar4 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac54eb0);
        if (plVar9 != (long *)0x0) {
          lVar7 = *plVar9;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac47318) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_08a92684;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac47318,0);
LAB_08a92684:
          (*(code *)*puVar5)(plVar9,uVar4,puVar5[1]);
          return;
        }
      }
    }
  }
LAB_08a926ac:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


