/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$set_NumberOfDisplayStrings
ENTRY_POINT: 068bc9f0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__set_NumberOfDisplayStrings(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined4 uVar11;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  *(undefined1 *)(unaff_x23 + 0xa43) = 1;
  if (unaff_x22 == (long *)0x0) {
    uVar4 = 1;
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    if (*unaff_x22 != lVar2) {
      in_stack_00000018 = unaff_x21[1];
      in_stack_00000010 = *unaff_x21;
      lVar2 = FUN_03b30edc(*(undefined8 *)(unaff_x20 + 0x20));
      uVar4 = thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 8),&stack0x00000010);
      plVar5 = (long *)thunk_FUN_0408781c(uVar4,0);
      FUN_03b0899c();
      uVar4 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      uVar6 = thunk_FUN_040dedf8(PTR_DAT_092bb9e8);
      uVar4 = FUN_074c0ac8(uVar6,uVar4,0);
      thunk_FUN_040dedf8(PTR_DAT_09287028);
      uVar6 = thunk_FUN_040b4efc();
      uVar7 = thunk_FUN_040dedf8(PTR_DAT_092a4080);
      FUN_075ce148(uVar6,uVar4,uVar7,0);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar6);
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc(lVar2);
    }
    if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0();
    }
    lVar2 = thunk_FUN_040b5044();
    puVar1 = PTR_DAT_092bb9e0;
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar8 = *unaff_x19;
    uVar11 = *(undefined4 *)(lVar2 + 8);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092bb9e0) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_068bcaf0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00();
LAB_068bcaf0:
    uVar4 = (*(code *)*puVar3)();
    if ((int)uVar4 == 0) {
      lVar2 = *(long *)(unaff_x20 + 0x20);
      in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,*(undefined4 *)(unaff_x21 + 1));
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_040b1acc();
      }
      thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10),&stack0x00000010);
      lVar2 = *(long *)(unaff_x20 + 0x20);
      uStack000000000000000c = uVar11;
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_040b1acc();
      }
      thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x10),&stack0x0000000c);
      lVar2 = *unaff_x19;
      uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_068bcbb0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_040b1e00();
LAB_068bcbb0:
      uVar4 = (*(code *)*puVar3)();
    }
  }
  return uVar4;
}


