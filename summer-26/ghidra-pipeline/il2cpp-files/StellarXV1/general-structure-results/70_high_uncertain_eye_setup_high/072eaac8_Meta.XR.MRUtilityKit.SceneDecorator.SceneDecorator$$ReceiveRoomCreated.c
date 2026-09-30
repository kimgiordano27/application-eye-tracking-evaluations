/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$ReceiveRoomCreated
ENTRY_POINT: 072eaac8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__ReceiveRoomCreated(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  int *piVar16;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long *unaff_x26;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0x590));
  FUN_04077588(PTR_DAT_092c44b0);
  FUN_04077588(PTR_DAT_092c4598);
  *(undefined1 *)(unaff_x23 + 0xbc9) = 1;
  in_stack_00000028 = 0;
  lVar7 = thunk_FUN_040b4efc(*unaff_x22);
  FUN_05be5dc0(lVar7,*unaff_x21);
  lVar8 = *unaff_x26;
  in_stack_00000028 = lVar7;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar8 = *unaff_x26;
  }
  puVar4 = PTR_DAT_092c4588;
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
  if ((lVar8 != 0) &&
     (uVar9 = FUN_064c6bc8(lVar8,in_stack_00000008,*(undefined8 *)PTR_DAT_092c4588),
     puVar3 = PTR_DAT_092c4580, lVar7 != 0)) {
    FUN_05be6950(lVar7,uVar9,*(undefined8 *)PTR_DAT_092c4580);
    puVar5 = PTR_DAT_092c4590;
    puVar2 = PTR_DAT_092c44e8;
    puVar1 = PTR_DAT_092c4398;
    lVar8 = *(long *)(unaff_x20 + 0x28);
    uVar9 = in_stack_00000008;
    while (lVar8 != 0) {
      uVar10 = FUN_064c6470(lVar8,uVar9,*(undefined8 *)puVar2);
      if ((uVar10 & 1) == 0) {
        FUN_072eaeb8();
        return lVar7;
      }
      if ((*(long *)(unaff_x20 + 0x28) == 0) ||
         (plVar11 = (long *)FUN_064c6238(*(long *)(unaff_x20 + 0x28),uVar9,*(undefined8 *)puVar5),
         plVar11 == (long *)0x0)) break;
      lVar8 = *plVar11;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092c4578) {
            puVar12 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_072eac00;
          }
          uVar10 = uVar10 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar10 != 0);
      }
      puVar12 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)PTR_DAT_092c4578,0);
LAB_072eac00:
      iVar6 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      if (1 < iVar6) {
        plVar11 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,4);
        in_stack_00000020._4_4_ = 1;
        lVar8 = thunk_FUN_040b4b34(*(undefined8 *)PTR_DAT_092c4158,(long)&stack0x00000020 + 4);
        if (plVar11 == (long *)0x0) break;
        if ((lVar8 != 0) &&
           (lVar13 = thunk_FUN_040b4e00(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0)) {
LAB_072eaeac:
          uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar9,0);
        }
        if ((int)plVar11[3] == 0) {
LAB_072eaea8:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        plVar11[4] = lVar8;
        thunk_FUN_040ec700(plVar11 + 4,lVar8);
        if ((*(long *)PTR_DAT_092c4598 != 0) &&
           (lVar8 = thunk_FUN_040b4e00(*(long *)PTR_DAT_092c4598,*(undefined8 *)(*plVar11 + 0x40)),
           lVar8 == 0)) goto LAB_072eaeac;
        if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) goto LAB_072eaea8;
        plVar11[5] = *(long *)PTR_DAT_092c4598;
        thunk_FUN_040ec700();
        in_stack_00000018 = in_stack_00000008;
        lVar8 = thunk_FUN_040b4b34(*(undefined8 *)PTR_DAT_092c4150,&stack0x00000018);
        if ((lVar8 != 0) &&
           (lVar13 = thunk_FUN_040b4e00(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
        goto LAB_072eaeac;
        if (*(uint *)(plVar11 + 3) < 3) goto LAB_072eaea8;
        plVar11[6] = lVar8;
        thunk_FUN_040ec700(plVar11 + 6,lVar8);
        if ((*(long *)(unaff_x20 + 0x28) == 0) ||
           (plVar14 = (long *)FUN_064c6238(*(long *)(unaff_x20 + 0x28),uVar9,*(undefined8 *)puVar5),
           plVar14 == (long *)0x0)) break;
        lVar8 = *plVar14;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_092c4578) {
              puVar12 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_072ead88;
            }
            uVar10 = uVar10 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar10 != 0);
        }
        puVar12 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)PTR_DAT_092c4578,0);
LAB_072ead88:
        in_stack_00000010._4_4_ = (*(code *)*puVar12)(plVar14,puVar12[1]);
        lVar8 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x48),
                                   (long)&stack0x00000010 + 4);
        if ((lVar8 != 0) &&
           (lVar13 = thunk_FUN_040b4e00(lVar8,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
        goto LAB_072eaeac;
        if ((*(uint *)(plVar11 + 3) & 0xfffffffc) == 0) goto LAB_072eaea8;
        plVar11[7] = lVar8;
        thunk_FUN_040ec700(plVar11 + 7,lVar8);
        FUN_072e86a8();
        FUN_072e914c();
      }
      if (*(long *)(unaff_x20 + 0x28) == 0) break;
      uVar9 = FUN_064c6238(*(long *)(unaff_x20 + 0x28),uVar9,*(undefined8 *)puVar5);
      uVar9 = FUN_04f97e18(uVar9,*(undefined8 *)puVar1);
      lVar8 = *unaff_x26;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_040d65a8(lVar8);
        lVar8 = *unaff_x26;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar8 == 0) break;
      uVar15 = FUN_064c6bc8(lVar8,uVar9,*(undefined8 *)puVar4);
      FUN_05be6950(lVar7,uVar15,*(undefined8 *)puVar3);
      lVar8 = *(long *)(unaff_x20 + 0x28);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


