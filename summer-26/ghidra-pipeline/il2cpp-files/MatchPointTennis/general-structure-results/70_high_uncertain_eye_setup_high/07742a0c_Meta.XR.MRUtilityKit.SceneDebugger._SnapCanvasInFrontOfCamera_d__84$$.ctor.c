/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger.<SnapCanvasInFrontOfCamera>d__84$$.ctor
ENTRY_POINT: 07742a0c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_SceneDebugger_<SnapCanvasInFrontOfCamera>d__84___ctor(undefined8 param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined4 *puVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  ulong unaff_x28;
  long *unaff_x29;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  ulong in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long *in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  
  do {
    uVar10 = (uint)param_1;
    if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e3c(unaff_x21);
    }
    if ((unaff_w24 != 6) && (unaff_w24 != 0)) goto LAB_07742dd8;
    if (unaff_x25 == (long *)0x0) {
      lVar11 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f1e5f0,5);
      if (lVar11 == 0) goto LAB_07742e00;
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_07742dfc;
      *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)PTR_DAT_09f31d60;
      thunk_FUN_044bb4b4();
      if (in_stack_00000040 == 0) goto LAB_07742e00;
      uVar9 = thunk_FUN_0952ff6c(in_stack_00000040,0);
      if (*(uint *)(lVar11 + 0x18) < 2) goto LAB_07742dfc;
      *(undefined8 *)(lVar11 + 0x28) = uVar9;
      thunk_FUN_044bb4b4((undefined8 *)(lVar11 + 0x28),uVar9);
      if (*(uint *)(lVar11 + 0x18) < 3) goto LAB_07742dfc;
      *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)PTR_DAT_09f31d68;
      thunk_FUN_044bb4b4();
      if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x28) goto LAB_07742dfc;
      plVar3 = *(long **)(unaff_x19 + ((long)(unaff_x28 << 0x20) >> 0x1d) + 0x20);
      if (plVar3 == (long *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      }
      if (*(uint *)(lVar11 + 0x18) < 4) goto LAB_07742dfc;
      *(undefined8 *)(lVar11 + 0x38) = uVar9;
      thunk_FUN_044bb4b4((undefined8 *)(lVar11 + 0x38));
      if (*(uint *)(lVar11 + 0x18) < 5) goto LAB_07742dfc;
      *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)PTR_DAT_09f31d58;
      thunk_FUN_044bb4b4();
      uVar9 = FUN_078b57fc(lVar11,0);
LAB_07742da8:
      lVar11 = *(long *)PTR_DAT_09f1e540;
      iVar2 = *(int *)(lVar11 + 0xe4);
joined_r0x07742dbc:
      if (iVar2 == 0) {
        thunk_FUN_044a54b4(lVar11);
      }
      FUN_094c6b48(uVar9,0);
      uVar10 = 0;
LAB_07742dd8:
      return uVar10 & 1;
    }
    if (*(long *)(*unaff_x25 + 0x40) != *(long *)(*(long *)(PTR_DAT_09f1e5b8 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_044481e4(unaff_x25);
    }
    piVar7 = (int *)thunk_FUN_04485360();
    if ((in_stack_00000080 & 0x100000000) != 0) {
      if ((in_stack_00000048 == 0) || (lVar11 = *(long *)(in_stack_00000048 + 0x80), lVar11 == 0))
      goto LAB_07742e00;
      if (*(uint *)(lVar11 + 0x18) <= unaff_x28) goto LAB_07742dfc;
      if (*piVar7 != *(int *)(lVar11 + unaff_x28 * 4 + 0x20)) {
        if (in_stack_00000040 == 0) goto LAB_07742e00;
        uVar9 = thunk_FUN_0952ff6c(in_stack_00000040,0);
        if (*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x28) goto LAB_07742dfc;
        uVar9 = FUN_078b5afc(*(undefined8 *)PTR_DAT_09f31d50,uVar9,*unaff_x23,0);
        goto LAB_07742da8;
      }
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x28) {
LAB_07742dfc:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    if ((((in_stack_00000058 == 0) || (in_stack_00000050 == 0)) || (in_stack_00000060 == 0)) ||
       ((in_stack_00000090 == 0 || (in_stack_00000088 == 0)))) {
LAB_07742e00:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if ((((*(uint *)(in_stack_00000058 + 0x18) <= unaff_x28) ||
         ((*(uint *)(in_stack_00000050 + 0x18) <= unaff_x28 ||
          (*(uint *)(in_stack_00000060 + 0x18) <= unaff_x28)))) ||
        (*(uint *)(in_stack_00000090 + 0x18) <= unaff_x28)) ||
       (*(uint *)(in_stack_00000088 + 0x18) <= unaff_x28)) goto LAB_07742dfc;
    uVar8 = FUN_07742fc0();
    if ((uVar8 & 1) == 0) {
      lVar11 = *(long *)PTR_DAT_09f1e540;
      iVar2 = *(int *)(lVar11 + 0xe4);
      uVar9 = in_stack_000000a8;
      goto joined_r0x07742dbc;
    }
    unaff_x28 = unaff_x28 + 1;
    if ((long)*(int *)(unaff_x19 + 0x18) <= (long)unaff_x28) {
      if (in_stack_00000048 == 0) goto LAB_07742e00;
      *(long *)(in_stack_00000048 + 0x88) = in_stack_00000050;
      thunk_FUN_044bb4b4((long *)(in_stack_00000048 + 0x88),in_stack_00000050);
      *(long *)(in_stack_00000048 + 0x90) = in_stack_00000060;
      thunk_FUN_044bb4b4((long *)(in_stack_00000048 + 0x90),in_stack_00000060);
      *(long *)(in_stack_00000048 + 0x98) = in_stack_00000090;
      thunk_FUN_044bb4b4();
      *(long *)(in_stack_00000048 + 0xa8) = in_stack_00000088;
      thunk_FUN_044bb4b4((long *)(in_stack_00000048 + 0xa8));
      uVar10 = 1;
      goto LAB_07742dd8;
    }
    plVar3 = (long *)(**(code **)(*in_stack_00000098 + 0x298))
                               (in_stack_00000098,*(undefined8 *)(*in_stack_00000098 + 0x2a0));
    unaff_x25 = (long *)0x0;
    unaff_x23 = (undefined8 *)(unaff_x19 + unaff_x28 * 8 + 0x20);
LAB_0774280c:
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar11 = *plVar3;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x29) {
          puVar4 = (undefined8 *)(lVar11 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0774285c;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_044822ac(plVar3,*unaff_x29,0);
LAB_0774285c:
    uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar8 & 1) != 0) {
      lVar11 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x29) {
            puVar4 = (undefined8 *)(lVar11 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_077428bc;
          }
          uVar8 = uVar8 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_044822ac(plVar3,*unaff_x29,1);
LAB_077428bc:
      plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(long *)(*plVar5 + 0x40) != *(long *)(*unaff_x20 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_044481e4();
      }
      plVar5 = (long *)thunk_FUN_04485360();
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_x28) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      plVar1 = (long *)*plVar5;
      plVar5 = (long *)plVar5[1];
      if (plVar1 != (long *)0x0) {
        lVar11 = *unaff_x22;
        if ((*(byte *)(*plVar1 + 0x130) < *(byte *)(lVar11 + 0x130)) ||
           (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar11 + 0x130) * 8 + -8) !=
            lVar11)) {
                    /* WARNING: Subroutine does not return */
          FUN_044481e4(plVar1,lVar11);
        }
      }
      uVar8 = FUN_07742eb0();
      if ((uVar8 & 1) != 0) {
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)(PTR_DAT_09f1e5b8 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_044481e4(plVar5);
        }
        puVar6 = (undefined4 *)thunk_FUN_04485360(plVar5);
        in_stack_000000a0._4_4_ = *puVar6;
        unaff_x25 = (long *)thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x48),
                                               (long)&stack0x000000a0 + 4);
      }
      goto LAB_0774280c;
    }
    unaff_x21 = 0;
    unaff_w24 = 6;
    plVar3 = (long *)thunk_FUN_04485110(plVar3,*(undefined8 *)PTR_DAT_09f1f008);
    param_1 = extraout_x8;
    if (plVar3 != (long *)0x0) {
      lVar11 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
            puVar4 = (undefined8 *)(lVar11 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_07742a00;
          }
          uVar8 = uVar8 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_044822ac(plVar3,*(long *)PTR_DAT_09f1f008,0);
LAB_07742a00:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
      param_1 = extraout_x8_00;
    }
  } while( true );
}


