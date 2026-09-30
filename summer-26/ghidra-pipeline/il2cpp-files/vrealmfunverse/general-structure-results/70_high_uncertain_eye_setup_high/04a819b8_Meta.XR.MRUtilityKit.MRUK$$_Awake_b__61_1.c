/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$<Awake>b__61_1
ENTRY_POINT: 04a819b8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__<Awake>b__61_1(ulong param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar11;
  ulong __n;
  undefined8 *__dest;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long unaff_x27;
  long unaff_x29;
  
  if ((param_1 & 1) == 0) {
                    /* try { // try from 04a819c4 to 04b819c7 has its CatchHandler @ 04a819cc */
    FUN_02b3c81c(PTR_DAT_06313588);
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04a818d8 with catch @ 04a819c8
                       try { // try from 04a819c8 to 04b819e7 has its CatchHandler @ 04a81848 */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 04a818fc with catch @ 04a819cc
                       catch(type#1 @ 05fbf508) { ... } // from try @ 04a819c4 with catch @ 04a819cc
                        */
    FUN_02b3c81c(PTR_DAT_06322b98);
    FUN_02b3c81c(PTR_DAT_06322688);
    FUN_02b3c81c(PTR_DAT_06322ba0);
    FUN_02b3c81c(PTR_DAT_06320978);
    *(undefined1 *)(unaff_x21 + 0xae1) = 1;
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98) + 0xfc);
  __dest = (undefined8 *)(&stack0x00000000 + -(__n + 0xf & 0x1fffffff0));
  plVar11 = (long *)(unaff_x20 + 0x40);
  if (*plVar11 == 0) {
LAB_04a81d3c:
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
  else {
    iVar2 = FUN_04c8d044(*plVar11,*(undefined8 *)PTR_DAT_06322ba0,0);
    puVar1 = PTR_DAT_06312310;
    lVar12 = *plVar11;
    uVar14 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x110);
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
    }
    uVar14 = FUN_04d8a7b0(uVar14,0);
    if (lVar12 != 0) {
      lVar12 = FUN_04c8ae78(lVar12,*(undefined8 *)PTR_DAT_06322688,uVar14,0);
      lVar15 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_02b76218(lVar15);
      }
      *(long *)(unaff_x29 + -0x20) = unaff_x27;
      if (lVar12 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = thunk_FUN_02b79548(lVar12,lVar15);
        if (lVar4 == 0) {
          if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3ce44(lVar12,lVar15);
          }
          goto LAB_04a81dfc;
        }
      }
      lVar15 = *(long *)(unaff_x19 + 0x20);
      *(long *)(unaff_x20 + 0x30) = lVar4;
      lVar15 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x20);
      if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_02b76218(lVar15);
      }
      if (lVar12 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = thunk_FUN_02b79548(lVar12,lVar15);
        if (lVar4 == 0) {
          if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3ce44(lVar12,lVar15);
          }
          goto LAB_04a81dfc;
        }
      }
      thunk_FUN_02bb0e9c((long *)(unaff_x20 + 0x30),lVar4);
      *(undefined4 *)(unaff_x20 + 0x28) = 0xffffffff;
      if (iVar2 == 0) {
        *(undefined8 *)(unaff_x20 + 0x10) = 0;
        thunk_FUN_02bb0e9c((undefined8 *)(unaff_x20 + 0x10),0);
        unaff_x27 = *(long *)(unaff_x29 + -0x20);
      }
      else {
        uVar14 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313588,iVar2);
        *(undefined8 *)(unaff_x20 + 0x10) = uVar14;
        thunk_FUN_02bb0e9c();
        unaff_x27 = *(long *)(unaff_x29 + -0x20);
        lVar12 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x118);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02b76218();
        }
        uVar14 = FUN_02b3c908(lVar12,iVar2);
        *(undefined8 *)(unaff_x20 + 0x18) = uVar14;
        thunk_FUN_02bb0e9c((undefined8 *)(unaff_x20 + 0x18),uVar14);
        lVar12 = *(long *)(unaff_x20 + 0x40);
        uVar14 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108);
        if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar14 = FUN_04d8a7b0(uVar14,0);
        if (lVar12 == 0) goto LAB_04a81d80;
        lVar12 = FUN_04c8ae78(lVar12,*(undefined8 *)PTR_DAT_06322b98,uVar14,0);
        lVar15 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
        if ((*(ushort *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_02b76218(lVar15);
        }
        if (lVar12 == 0) {
          thunk_FUN_02ba3594(PTR_DAT_06320988);
          uVar14 = thunk_FUN_02b79644();
          uVar6 = thunk_FUN_02ba3594(PTR_DAT_06322ba8);
          if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
            FUN_04c82410(uVar14,uVar6,0);
                    /* WARNING: Subroutine does not return */
            FUN_02b3c988(uVar14);
          }
          goto LAB_04a81dfc;
        }
        plVar5 = (long *)thunk_FUN_02b79548(lVar12,lVar15);
        if (plVar5 == (long *)0x0) {
          if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3ce44(lVar12,lVar15);
          }
          goto LAB_04a81dfc;
        }
        if (0 < (int)plVar5[3]) {
          uVar13 = 0;
          uVar8 = plVar5[3] & 0xffffffff;
          do {
            if (uVar8 <= uVar13) {
              if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              goto LAB_04a81dfc;
            }
            memcpy(__dest,(void *)((long)plVar5 + uVar13 * *(uint *)(*plVar5 + 0x104) + 0x20),__n);
            lVar12 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
            puVar9 = __dest;
            if (-1 < *(int *)(*(long *)(lVar12 + 0x98) + 0x28)) {
              puVar9 = (undefined8 *)*__dest;
            }
            puVar7 = *(undefined8 **)(lVar12 + 0xa8);
            uVar14 = *puVar7;
            pcVar10 = (code *)puVar7[2];
            *(undefined8 **)(unaff_x29 + -0x18) = puVar9;
            (*pcVar10)(uVar14);
            uVar8 = (ulong)*(uint *)(plVar5 + 3);
            uVar13 = uVar13 + 1;
          } while ((long)uVar13 < (long)(int)*(uint *)(plVar5 + 3));
        }
      }
      if (*plVar11 != 0) {
        uVar3 = FUN_04c8d044(*plVar11,*(undefined8 *)PTR_DAT_06320978,0);
        *(undefined4 *)(unaff_x20 + 0x38) = uVar3;
        *(undefined8 *)(unaff_x20 + 0x40) = 0;
        thunk_FUN_02bb0e9c(plVar11,0);
        goto LAB_04a81d3c;
      }
    }
LAB_04a81d80:
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
LAB_04a81dfc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


