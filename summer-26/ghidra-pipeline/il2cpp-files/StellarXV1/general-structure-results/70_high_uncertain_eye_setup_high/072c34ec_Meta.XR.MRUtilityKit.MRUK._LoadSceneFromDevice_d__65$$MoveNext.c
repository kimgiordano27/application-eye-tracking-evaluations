/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK.<LoadSceneFromDevice>d__65$$MoveNext
ENTRY_POINT: 072c34ec
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_MRUK_<LoadSceneFromDevice>d__65__MoveNext(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long *in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0x510));
  FUN_04077588(PTR_DAT_09287440);
  FUN_04077588(PTR_DAT_09287448);
  FUN_04077588(PTR_DAT_09287450);
  FUN_04077588(PTR_DAT_09287498);
  FUN_04077588(PTR_DAT_092874a0);
  FUN_04077588(PTR_DAT_092858c0);
  FUN_04077588(PTR_DAT_092858a0);
  FUN_04077588(PTR_DAT_09285898);
  FUN_04077588(PTR_DAT_092b8400);
  FUN_04077588(PTR_DAT_092c3518);
  *(undefined1 *)(unaff_x21 + 0x9fc) = 1;
  in_stack_00000050 = 0;
  in_stack_00000028 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = (long *)0x0;
  in_stack_00000040 = 0;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    uVar7 = FUN_06efc9cc();
    if ((uVar7 & 1) == 0) {
      lVar8 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285898);
      FUN_05c26520(lVar8,*(undefined8 *)PTR_DAT_092858a0);
      if (*(long *)(unaff_x20 + 0x10) != 0) {
        FUN_06efcc0c(*(long *)(unaff_x20 + 0x10),*(undefined8 *)PTR_DAT_09287438);
        puVar5 = PTR_DAT_092b8be8;
        puVar4 = PTR_DAT_09287448;
        puVar3 = PTR_DAT_09285980;
        puVar2 = PTR_DAT_092858c0;
        in_stack_00000038 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000000;
        in_stack_00000048 = in_stack_00000018;
        in_stack_00000040 = in_stack_00000010;
        in_stack_00000050 = in_stack_00000020;
LAB_072c3654:
        uVar7 = FUN_05385f24(&stack0x00000030,*(undefined8 *)puVar4);
        plVar6 = in_stack_00000048;
        uVar12 = in_stack_00000040;
        if ((uVar7 & 1) != 0) {
          if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          uVar9 = thunk_FUN_0408781c(in_stack_00000048,0);
          if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar7 = FUN_07691f40(uVar9);
          if ((uVar7 & 1) != 0) {
            if (lVar8 != 0) {
              lVar13 = *(long *)(lVar8 + 0x10);
              lVar14 = *(long *)puVar2;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar13 != 0) {
                uVar1 = *(uint *)(lVar8 + 0x18);
                if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                  puVar10 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar10 = uVar12;
                  thunk_FUN_040ec700(puVar10,uVar12);
                }
                else {
                  FUN_05c26d88(lVar8,uVar12,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_072c3654;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar7 = FUN_072bae30();
          if ((uVar7 & 1) == 0) goto LAB_072c3654;
          plVar11 = (long *)FUN_0767be1c();
          if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar7 = FUN_07691f40(plVar11,0,0);
          if ((uVar7 & 1) != 0) {
            uVar12 = FUN_074d57ec(*(undefined8 *)PTR_DAT_092c3518);
            if (*(int *)(*(long *)PTR_DAT_092b8400 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            FUN_072fd3e0(uVar12,0,0);
            goto LAB_072c3654;
          }
          if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar7 = FUN_07691f40(uVar9,plVar11,0);
          if ((uVar7 & 1) != 0) {
            if (lVar8 != 0) {
              lVar13 = *(long *)(lVar8 + 0x10);
              lVar14 = *(long *)puVar2;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar13 != 0) {
                uVar1 = *(uint *)(lVar8 + 0x18);
                if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                  puVar10 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar10 = uVar12;
                  thunk_FUN_040ec700(puVar10,uVar12);
                }
                else {
                  FUN_05c26d88(lVar8,uVar12,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_072c3654;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          uVar7 = (**(code **)(*plVar11 + 0x5c8))(plVar11,*(undefined8 *)(*plVar11 + 0x5d0));
          if (((uVar7 & 1) == 0) || (*plVar6 != *(long *)(puVar3 + 0x90))) goto LAB_072c3654;
          if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar7 = FUN_076b1518(plVar11,plVar6,&stack0x00000028,0);
          if ((uVar7 & 1) != 0) {
            if (lVar8 != 0) {
              lVar13 = *(long *)(lVar8 + 0x10);
              lVar14 = *(long *)puVar2;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar13 != 0) {
                uVar1 = *(uint *)(lVar8 + 0x18);
                if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                  puVar10 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar10 = uVar12;
                  thunk_FUN_040ec700(puVar10,uVar12);
                }
                else {
                  FUN_05c26d88(lVar8,uVar12,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_072c3654;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          goto LAB_072c3654;
        }
        FUN_05386044(&stack0x00000030,*(undefined8 *)PTR_DAT_09287440);
        if (*(long *)(unaff_x20 + 0x20) != 0) {
          FUN_06efc7c4();
          return lVar8;
        }
      }
    }
    else if (*(long *)(unaff_x20 + 0x20) != 0) {
      lVar8 = FUN_06efc758();
      return lVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


