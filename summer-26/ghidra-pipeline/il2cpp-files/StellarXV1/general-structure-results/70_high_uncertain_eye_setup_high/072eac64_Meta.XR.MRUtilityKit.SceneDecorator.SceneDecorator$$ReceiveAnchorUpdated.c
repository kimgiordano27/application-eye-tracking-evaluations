/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$ReceiveAnchorUpdated
ENTRY_POINT: 072eac64
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__ReceiveAnchorUpdated(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  
  while (param_1 != 0) {
    do {
      if ((int)unaff_x23[3] == 0) {
LAB_072eaea8:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      unaff_x23[4] = unaff_x24;
      thunk_FUN_040ec700(unaff_x23 + 4,unaff_x24);
      if ((*(long *)PTR_DAT_092c4598 != 0) &&
         (lVar2 = thunk_FUN_040b4e00(*(long *)PTR_DAT_092c4598,*(undefined8 *)(*unaff_x23 + 0x40)),
         lVar2 == 0)) goto LAB_072eaeac;
      if ((*(uint *)(unaff_x23 + 3) & 0xfffffffe) == 0) goto LAB_072eaea8;
      unaff_x23[5] = *(long *)PTR_DAT_092c4598;
      thunk_FUN_040ec700();
      in_stack_00000018 = in_stack_00000008;
      lVar2 = thunk_FUN_040b4b34(*(undefined8 *)PTR_DAT_092c4150,&stack0x00000018);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_040b4e00(lVar2,*(undefined8 *)(*unaff_x23 + 0x40)), lVar3 == 0))
      goto LAB_072eaeac;
      if (*(uint *)(unaff_x23 + 3) < 3) goto LAB_072eaea8;
      unaff_x23[6] = lVar2;
      thunk_FUN_040ec700(unaff_x23 + 6,lVar2);
      if ((*(long *)(unaff_x20 + 0x28) == 0) ||
         (plVar4 = (long *)FUN_064c6238(*(long *)(unaff_x20 + 0x28),unaff_x22,*unaff_x29),
         plVar4 == (long *)0x0)) {
LAB_072eae70:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar2 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092c4578) {
            puVar5 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_072ead88;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_040b1e00(plVar4,*(long *)PTR_DAT_092c4578,0);
LAB_072ead88:
      in_stack_00000010._4_4_ = (*(code *)*puVar5)(plVar4,puVar5[1]);
      lVar2 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x48),(long)&stack0x00000010 + 4
                                );
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_040b4e00(lVar2,*(undefined8 *)(*unaff_x23 + 0x40)), lVar3 == 0))
      goto LAB_072eaeac;
      if ((*(uint *)(unaff_x23 + 3) & 0xfffffffc) == 0) goto LAB_072eaea8;
      unaff_x23[7] = lVar2;
      thunk_FUN_040ec700(unaff_x23 + 7,lVar2);
      FUN_072e86a8();
      FUN_072e914c();
      do {
        if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_072eae70;
        uVar6 = FUN_064c6238(*(long *)(unaff_x20 + 0x28),unaff_x22,*unaff_x29);
        unaff_x22 = FUN_04f97e18(uVar6,*unaff_x19);
        lVar2 = *unaff_x26;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_040d65a8(lVar2);
          lVar2 = *unaff_x26;
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
        if (lVar2 == 0) goto LAB_072eae70;
        FUN_064c6bc8(lVar2,unaff_x22,*unaff_x27);
        FUN_05be6950();
        if (*(long *)(unaff_x20 + 0x28) == 0) goto LAB_072eae70;
        uVar7 = FUN_064c6470(*(long *)(unaff_x20 + 0x28),unaff_x22,*unaff_x25);
        if ((uVar7 & 1) == 0) {
          FUN_072eaeb8();
          return;
        }
        if ((*(long *)(unaff_x20 + 0x28) == 0) ||
           (plVar4 = (long *)FUN_064c6238(*(long *)(unaff_x20 + 0x28),unaff_x22,*unaff_x29),
           plVar4 == (long *)0x0)) goto LAB_072eae70;
        lVar2 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092c4578) {
              puVar5 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_072eac00;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_040b1e00(plVar4,*(long *)PTR_DAT_092c4578,0);
LAB_072eac00:
        iVar1 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      } while (iVar1 < 2);
      unaff_x23 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,4);
      in_stack_00000020._4_4_ = 1;
      unaff_x24 = thunk_FUN_040b4b34(*(undefined8 *)PTR_DAT_092c4158,(long)&stack0x00000020 + 4);
      if (unaff_x23 == (long *)0x0) goto LAB_072eae70;
    } while (unaff_x24 == 0);
    param_1 = thunk_FUN_040b4e00(unaff_x24,*(undefined8 *)(*unaff_x23 + 0x40));
  }
LAB_072eaeac:
  uVar6 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar6,0);
}


