/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<InputEventTrace.DeviceInfo>$$Dispose
ENTRY_POINT: 06fcd640
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void System_Array_EmptyInternalEnumerator<InputEventTrace_DeviceInfo>__Dispose(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  undefined8 uVar5;
  ulong uVar6;
  long *unaff_x26;
  long unaff_x27;
  long in_stack_00000008;
  
  if (unaff_x23 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = thunk_FUN_040b4e00();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0();
    }
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  *(long *)(unaff_x19 + 0x30) = lVar1;
  lVar1 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    FUN_040b1acc(lVar1);
  }
  if (unaff_x23 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = thunk_FUN_040b4e00();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0();
    }
  }
  thunk_FUN_040ec700((long *)(unaff_x19 + 0x30),lVar1);
  if (unaff_w22 == 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x10),0);
  }
  else {
    FUN_06fccf24();
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
    if (*(int *)(*(long *)(unaff_x27 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar5 = FUN_0768890c(uVar5,0);
    if (in_stack_00000008 == 0) goto LAB_06fcd840;
    lVar1 = FUN_07572704(in_stack_00000008,*(undefined8 *)PTR_DAT_092bcf20,uVar5,0);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc(lVar3);
    }
    if (lVar1 == 0) {
      FUN_0769ae58(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar2 = thunk_FUN_040b4e00(lVar1,lVar3);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077bb0(lVar1,lVar3);
    }
    if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
      uVar6 = 0;
      uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
      do {
        if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        FUN_06fcd004();
        uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar2 + 0x18));
    }
  }
  lVar1 = *unaff_x26;
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar1 = Newtonsoft_Json_JsonSerializer__set_Culture(0);
  if (lVar1 != 0) {
    FUN_06c98cd0();
    return;
  }
LAB_06fcd840:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


