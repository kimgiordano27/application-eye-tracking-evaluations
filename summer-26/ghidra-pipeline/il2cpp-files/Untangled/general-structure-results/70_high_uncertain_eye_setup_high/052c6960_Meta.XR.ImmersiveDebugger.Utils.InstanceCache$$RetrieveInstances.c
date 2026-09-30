/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.InstanceCache$$RetrieveInstances
ENTRY_POINT: 052c6960
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_InstanceCache__RetrieveInstances
               (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long unaff_x19;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  
  if (param_1 != 0) {
    iVar15 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (0 < iVar15) {
      FUN_05624da8(*(undefined8 *)(param_1 + 0x10),0,iVar15,0);
    }
    cVar1 = *(char *)(unaff_x19 + 0x21);
    lVar10 = FUN_066c67b0();
    puVar3 = PTR_DAT_06d03000;
    if (lVar10 != 0) {
      uVar19 = FUN_066d48c0(lVar10,0);
      if (cVar1 == '\0') {
        uVar22 = *(undefined4 *)(unaff_x19 + 0x30);
        uVar16 = *(undefined8 *)(unaff_x19 + 0x50);
        uVar8 = FUN_066ca064(*(undefined4 *)(unaff_x19 + 0x34),0);
        lVar10 = *(long *)puVar3;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_02f12b58(lVar10);
        }
        uVar9 = FUN_0673f798(uVar19,param_3,param_4,uVar22,uVar16,uVar8,2,0);
      }
      else {
        fVar20 = *(float *)(unaff_x19 + 0x24);
        fVar21 = *(float *)(unaff_x19 + 0x28);
        fVar23 = *(float *)(unaff_x19 + 0x2c);
        uVar16 = *(undefined8 *)(unaff_x19 + 0x50);
        lVar10 = FUN_066c67b0();
        if (lVar10 == 0) goto LAB_052c6e28;
        FUN_066d320c(lVar10,0);
        uVar8 = FUN_066ca064(*(undefined4 *)(unaff_x19 + 0x34),0);
        lVar10 = *(long *)puVar3;
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_02f12b58(lVar10);
        }
                    /* try { // try from 052c6a3c to 053c6bf7 has its CatchHandler @ 052c6a3c
                       catch() { ... } // from try @ 052c6a3c with catch @ 052c6a3c
                       catch() { ... } // from try @ 052c6c7c with catch @ 052c6a3c
                       catch() { ... } // from try @ 052c6e70 with catch @ 052c6a3c
                       catch() { ... } // from try @ 052c6f08 with catch @ 052c6a3c
                       catch() { ... } // from try @ 052c6fbc with catch @ 052c6a3c
                       catch() { ... } // from try @ 052c6fcc with catch @ 052c6a3c
                       catch() { ... } // from try @ 052c7078 with catch @ 052c6a3c
                       catch() { ... } // from try @ 052c7130 with catch @ 052c6a3c */
        uVar9 = FUN_0673fd40((int)uVar19,(int)param_3,param_4,fVar20 * 0.5,fVar21 * 0.5,fVar23 * 0.5
                             ,uVar16,uVar8,2,0);
      }
      puVar6 = PTR_DAT_06d3d4d8;
      puVar5 = PTR_DAT_06d3d4b8;
      puVar4 = PTR_DAT_06d3c760;
      puVar3 = PTR_DAT_06d01e20;
      if (0 < (int)uVar9) {
        uVar18 = 0;
        do {
          lVar10 = *(long *)(unaff_x19 + 0x50);
          if (lVar10 == 0) goto LAB_052c6e28;
          if (*(uint *)(lVar10 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 052c6e60 to 053c6e6f has its CatchHandler @ 052c6fd8 */
            FUN_02f080c8();
          }
          lVar17 = *(long *)(lVar10 + uVar18 * 8 + 0x20);
          lVar10 = FUN_03a5c2ec(lVar17,1,*(undefined8 *)puVar6);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_02f12b58(*(long *)puVar3);
          }
          uVar11 = FUN_066cd30c(lVar10,0);
          if ((uVar11 & 1) != 0) {
            if (lVar17 == 0) goto LAB_052c6e28;
            uVar11 = FUN_06742b28(lVar17,0);
            if ((uVar11 & 1) == 0) {
              if (*(char *)(unaff_x19 + 0x20) != '\0') goto LAB_052c6c84;
            }
            else {
              uVar11 = FUN_037f26f8(lVar17,&stack0x00000098,*(undefined8 *)puVar5);
              if ((uVar11 & 1) == 0) {
                if (lVar10 == 0) goto LAB_052c6e28;
                uVar19 = *(undefined8 *)(lVar10 + 0x118);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_02f12b58();
                }
                uVar11 = FUN_066cd30c(uVar19,0);
                if ((uVar11 & 1) != 0) {
                  lVar12 = FUN_066c67b0(lVar17,0);
                  if (((*(long *)(lVar10 + 0x118) == 0) ||
                      (lVar13 = *(long *)(*(long *)(lVar10 + 0x118) + 0x30), lVar13 == 0)) ||
                     (uVar19 = FUN_066c67b0(lVar13,0), lVar12 == 0)) goto LAB_052c6e28;
                  uVar11 = FUN_066d6404(lVar12,uVar19,0);
                  if ((uVar11 & 1) == 0) {
                    uVar19 = FUN_066c67b0(lVar17,0);
                    if ((*(long *)(lVar10 + 0x118) == 0) ||
                       (lVar17 = *(long *)(*(long *)(lVar10 + 0x118) + 0x30), lVar17 == 0))
                    goto LAB_052c6e28;
                    uVar16 = FUN_066c67b0(lVar17,0);
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                    /* try { // try from 052c6bf8 to 053c6c1f has its CatchHandler @ 052c6fdc */
                      thunk_FUN_02f12b58(*(long *)puVar3);
                    }
                    uVar11 = FUN_066c971c(uVar19,uVar16,0);
                    if ((uVar11 & 1) != 0) goto LAB_052c6c84;
                  }
                }
              }
            }
            lVar17 = *(long *)(unaff_x19 + 0x48);
            if (lVar17 == 0) goto LAB_052c6e28;
            lVar12 = *(long *)(lVar17 + 0x10);
            lVar13 = *(long *)puVar4;
                    /* try { // try from 052c6c38 to 053c6c7b has its CatchHandler @ 052c6fd4 */
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_052c6e28;
            uVar2 = *(uint *)(lVar17 + 0x18);
            if (uVar2 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar17 + 0x18) = uVar2 + 1;
              plVar14 = (long *)(lVar12 + (long)(int)uVar2 * 8 + 0x20);
              *plVar14 = lVar10;
              thunk_FUN_02f411dc(plVar14,lVar10);
            }
            else {
                    /* try { // try from 052c6c7c to 053c6d7b has its CatchHandler @ 052c6a3c */
              FUN_03fd0c9c(lVar17,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
          }
LAB_052c6c84:
          uVar18 = uVar18 + 1;
        } while (uVar9 != uVar18);
      }
      puVar7 = PTR_DAT_06d3d4e8;
      puVar6 = PTR_DAT_06d3d4c8;
      puVar5 = PTR_DAT_06d3d4c0;
      if (*(long *)(unaff_x19 + 0x48) != 0) {
        FUN_03fd16fc(&stack0x00000018,*(long *)(unaff_x19 + 0x48),*(undefined8 *)PTR_DAT_06d3d4f0);
        in_stack_00000038 = in_stack_00000020;
        in_stack_00000030 = in_stack_00000018;
        in_stack_00000040 = in_stack_00000028;
        while (uVar18 = FUN_04df6d30(&stack0x00000030,*(undefined8 *)puVar6),
              lVar10 = in_stack_00000040, (uVar18 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar18 = FUN_03fd102c(*(long *)(unaff_x19 + 0x40),in_stack_00000040,*(undefined8 *)puVar7)
          ;
          if ((uVar18 & 1) == 0) {
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            FUN_052c6eec(lVar10,*(undefined8 *)(unaff_x19 + 0x38));
            lVar17 = *(long *)(unaff_x19 + 0x40);
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            lVar12 = *(long *)(lVar17 + 0x10);
            lVar13 = *(long *)puVar4;
            *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            uVar9 = *(uint *)(lVar17 + 0x18);
            if (uVar9 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar17 + 0x18) = uVar9 + 1;
              plVar14 = (long *)(lVar12 + (long)(int)uVar9 * 8 + 0x20);
              *plVar14 = lVar10;
              thunk_FUN_02f411dc(plVar14,lVar10);
            }
            else {
              FUN_03fd0c9c(lVar17,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
                    /* try { // try from 052c6d7c to 053c6da3 has its CatchHandler @ 052c709c */
        FUN_04df6d2c(&stack0x00000030,*(undefined8 *)puVar5);
        puVar5 = PTR_DAT_06d3d4f8;
        puVar4 = PTR_DAT_06d07c88;
        lVar10 = *(long *)(unaff_x19 + 0x40);
        if (lVar10 != 0) {
          iVar15 = *(int *)(lVar10 + 0x18) + -1;
          if (iVar15 < 0) {
                    /* try { // try from 052c6e30 to 053c6e3f has its CatchHandler @ 052c7088 */
                    /* try { // try from 052c6e4c to 053c6e5b has its CatchHandler @ 052c7078 */
            return;
          }
          do {
            lVar10 = FUN_03fd09cc(lVar10,iVar15,*(undefined8 *)puVar4);
                    /* try { // try from 052c6dbc to 053c6e1b has its CatchHandler @ 052c70a0 */
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_02f12b58(*(long *)puVar3);
            }
            uVar18 = FUN_066cd30c(lVar10,0);
            if ((uVar18 & 1) != 0) {
              if (*(long *)(unaff_x19 + 0x48) == 0) break;
              uVar18 = FUN_03fd102c(*(long *)(unaff_x19 + 0x48),lVar10,*(undefined8 *)puVar7);
              if ((uVar18 & 1) == 0) {
                if (lVar10 == 0) break;
                FUN_052c6eec(lVar10,0);
                if (*(long *)(unaff_x19 + 0x40) == 0) break;
                FUN_03fd23d8(*(long *)(unaff_x19 + 0x40),iVar15,*(undefined8 *)puVar5);
              }
            }
            iVar15 = iVar15 + -1;
            if (iVar15 < 0) {
              return;
            }
            lVar10 = *(long *)(unaff_x19 + 0x40);
          } while (lVar10 != 0);
        }
      }
    }
  }
LAB_052c6e28:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


