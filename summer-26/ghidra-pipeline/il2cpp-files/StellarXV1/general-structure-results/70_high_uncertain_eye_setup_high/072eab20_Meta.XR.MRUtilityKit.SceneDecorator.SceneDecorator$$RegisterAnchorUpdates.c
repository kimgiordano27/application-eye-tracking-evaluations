/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$RegisterAnchorUpdates
ENTRY_POINT: 072eab20
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__RegisterAnchorUpdates(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  int *piVar13;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  puVar3 = PTR_DAT_092c4588;
  lVar6 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
  if ((lVar6 != 0) &&
     (FUN_064c6bc8(lVar6,in_stack_00000008,*(undefined8 *)PTR_DAT_092c4588), unaff_x21 != 0)) {
    FUN_05be6950();
    puVar4 = PTR_DAT_092c4590;
    puVar2 = PTR_DAT_092c44e8;
    puVar1 = PTR_DAT_092c4398;
    lVar6 = *(long *)(unaff_x20 + 0x28);
    uVar12 = in_stack_00000008;
    while (lVar6 != 0) {
      uVar7 = FUN_064c6470(lVar6,uVar12,*(undefined8 *)puVar2);
      if ((uVar7 & 1) == 0) {
        FUN_072eaeb8();
        return;
      }
      if ((*(long *)(unaff_x20 + 0x28) == 0) ||
         (plVar8 = (long *)FUN_064c6238(*(long *)(unaff_x20 + 0x28),uVar12,*(undefined8 *)puVar4),
         plVar8 == (long *)0x0)) break;
      lVar6 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092c4578) {
            puVar9 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_072eac00;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_092c4578,0);
LAB_072eac00:
      iVar5 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (1 < iVar5) {
        plVar8 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,4);
        in_stack_00000020._4_4_ = 1;
        lVar6 = thunk_FUN_040b4b34(*(undefined8 *)PTR_DAT_092c4158,(long)&stack0x00000020 + 4);
        if (plVar8 == (long *)0x0) break;
        if ((lVar6 != 0) &&
           (lVar10 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0)) {
LAB_072eaeac:
          uVar12 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar12,0);
        }
        if ((int)plVar8[3] == 0) {
LAB_072eaea8:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        plVar8[4] = lVar6;
        thunk_FUN_040ec700(plVar8 + 4,lVar6);
        if ((*(long *)PTR_DAT_092c4598 != 0) &&
           (lVar6 = thunk_FUN_040b4e00(*(long *)PTR_DAT_092c4598,*(undefined8 *)(*plVar8 + 0x40)),
           lVar6 == 0)) goto LAB_072eaeac;
        if ((*(uint *)(plVar8 + 3) & 0xfffffffe) == 0) goto LAB_072eaea8;
        plVar8[5] = *(long *)PTR_DAT_092c4598;
        thunk_FUN_040ec700();
        in_stack_00000018 = in_stack_00000008;
        lVar6 = thunk_FUN_040b4b34(*(undefined8 *)PTR_DAT_092c4150,&stack0x00000018);
        if ((lVar6 != 0) &&
           (lVar10 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
        goto LAB_072eaeac;
        if (*(uint *)(plVar8 + 3) < 3) goto LAB_072eaea8;
        plVar8[6] = lVar6;
        thunk_FUN_040ec700(plVar8 + 6,lVar6);
        if ((*(long *)(unaff_x20 + 0x28) == 0) ||
           (plVar11 = (long *)FUN_064c6238(*(long *)(unaff_x20 + 0x28),uVar12,*(undefined8 *)puVar4)
           , plVar11 == (long *)0x0)) break;
        lVar6 = *plVar11;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092c4578) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_072ead88;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)PTR_DAT_092c4578,0);
LAB_072ead88:
        in_stack_00000010._4_4_ = (*(code *)*puVar9)(plVar11,puVar9[1]);
        lVar6 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x48),
                                   (long)&stack0x00000010 + 4);
        if ((lVar6 != 0) &&
           (lVar10 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
        goto LAB_072eaeac;
        if ((*(uint *)(plVar8 + 3) & 0xfffffffc) == 0) goto LAB_072eaea8;
        plVar8[7] = lVar6;
        thunk_FUN_040ec700(plVar8 + 7,lVar6);
        FUN_072e86a8();
        FUN_072e914c();
      }
      if (*(long *)(unaff_x20 + 0x28) == 0) break;
      uVar12 = FUN_064c6238(*(long *)(unaff_x20 + 0x28),uVar12,*(undefined8 *)puVar4);
      uVar12 = FUN_04f97e18(uVar12,*(undefined8 *)puVar1);
      lVar6 = *unaff_x26;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8(lVar6);
        lVar6 = *unaff_x26;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar6 == 0) break;
      FUN_064c6bc8(lVar6,uVar12,*(undefined8 *)puVar3);
      FUN_05be6950();
      lVar6 = *(long *)(unaff_x20 + 0x28);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


