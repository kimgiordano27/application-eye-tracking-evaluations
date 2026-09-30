/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap.<CalculatePixels>d__19$$MoveNext
ENTRY_POINT: 07749cb0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMap_<CalculatePixels>d__19__MoveNext(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0xe40));
  FUN_04447ba8(PTR_DAT_09f31670);
  FUN_04447ba8(PTR_DAT_09f1e540);
  FUN_04447ba8(PTR_DAT_09f31b58);
  FUN_04447ba8(PTR_DAT_09f31b40);
  FUN_04447ba8(PTR_DAT_09f31b60);
  *(undefined1 *)(unaff_x21 + 0x251) = 1;
  if ((unaff_x19 != (long *)0x0) && (lVar4 = FUN_094f68a0(), lVar4 != 0)) {
    if (*(long *)(lVar4 + 0x18) == 0) {
      iVar6 = *(int *)(unaff_x20 + 0x10);
      if (3 < iVar6) {
        uVar8 = *(undefined8 *)PTR_DAT_09f31b40;
        uVar5 = (**(code **)(*unaff_x19 + 0x168))();
        uVar5 = FUN_078b4f58(uVar8,uVar5,*(undefined8 *)PTR_DAT_09f31b60,0);
        lVar9 = *(long *)PTR_DAT_09f22e40;
        lVar4 = *(long *)(lVar9 + 0x38);
        if (lVar4 == 0) {
          FUN_04482014(lVar9);
          lVar4 = *(long *)(lVar9 + 0x38);
        }
        lVar4 = *(long *)(lVar4 + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_04481fb8();
        }
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        lVar4 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_04481fb8();
        }
        FUN_0771ec00(uVar5,**(undefined8 **)(lVar4 + 0xb8),0);
        iVar6 = *(int *)(unaff_x20 + 0x10);
      }
      if (1 < iVar6) {
        uVar8 = *(undefined8 *)PTR_DAT_09f31b40;
        uVar5 = (**(code **)(*unaff_x19 + 0x168))();
        uVar5 = FUN_078b4f58(uVar8,uVar5,*(undefined8 *)PTR_DAT_09f31b58,0);
        if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
          thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e540);
        }
        FUN_094c33b0(uVar5,0);
      }
      uVar3 = FUN_094f3ae4();
      lVar4 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f31670,uVar3);
      if (lVar4 == 0) goto LAB_07749ea8;
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (0 < (long)((ulong)uVar1 << 0x20)) {
        uVar7 = 0;
        auVar10 = NEON_fmov(0x3f800000,4);
        do {
          if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_04447e4c();
          }
          puVar2 = (undefined8 *)(lVar4 + 0x20 + uVar7 * 0x10);
          puVar2[1] = auVar10._8_8_;
          *puVar2 = auVar10._0_8_;
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)uVar1);
      }
    }
    return;
  }
LAB_07749ea8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


