/*
FUNCTION_NAME: OVRPlugin$$AreControllerDrivenHandPosesNatural
ENTRY_POINT: 0909eb10
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__AreControllerDrivenHandPosesNatural(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  uint uVar7;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  
  FUN_04947ee4(PTR_DAT_0ac75960);
                    /* try { // try from 0909eb1c to 0919eb23 has its CatchHandler @ 0909f1e0 */
  FUN_04947ee4(PTR_DAT_0ac75968);
  FUN_04947ee4(PTR_DAT_0ac75948);
                    /* try { // try from 0909eb38 to 0919eb3b has its CatchHandler @ 0909f238 */
  *(undefined1 *)(unaff_x21 + 0x250) = 1;
  _uStack0000000000000048 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (unaff_x20 != (long *)0x0) {
    lVar3 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* try { // try from 0909eb74 to 0919eb77 has its CatchHandler @ 0909f220 */
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac75948) {
                    /* try { // try from 0909eba0 to 0919eba7 has its CatchHandler @ 0909f22c */
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_0909eba4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
                    /* try { // try from 0909eb80 to 0919eb93 has its CatchHandler @ 0909f230 */
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68();
LAB_0909eba4:
    lVar3 = (*(code *)*puVar2)();
    if (unaff_x19 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
                    /* try { // try from 0909ebbc to 0919ebc3 has its CatchHandler @ 0909f228 */
      uVar5 = FUN_0909e08c();
      if ((uVar5 & 1) == 0) {
        uVar7 = 0;
      }
      else {
        if (lVar3 == 0) goto LAB_0909ed74;
        uVar1 = OVRPassthroughLayer_BaseGeneratedStyleHandler__Update(lVar3,0);
                    /* try { // try from 0909ebd8 to 0919ebdb has its CatchHandler @ 0909f250 */
        lVar4 = *unaff_x19;
        _uStack0000000000000048 = CONCAT44(uVar1,uStack0000000000000048);
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac75968) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 8) * 0x10 + 0x138);
              goto LAB_0909ec44;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_04980e68();
LAB_0909ec44:
        (*(code *)*puVar2)(&stack0x00000008);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        if (*(int *)(*(long *)PTR_DAT_0ac75960 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_090be048(&stack0x00000020,(long)&stack0x00000048 + 4,0);
        uVar7 = uStack000000000000004c;
      }
      uVar5 = FUN_0909e13c();
      if ((uVar5 & 1) != 0) {
        if (lVar3 == 0) goto LAB_0909ed74;
        uVar1 = FUN_090be954(lVar3,0);
        lVar3 = *unaff_x19;
        _uStack0000000000000048 = CONCAT44(uStack000000000000004c,uVar1);
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0ac75968) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 9) * 0x10 + 0x138);
              goto LAB_0909ed0c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_04980e68();
LAB_0909ed0c:
        (*(code *)*puVar2)(&stack0x00000008);
        in_stack_00000028 = in_stack_00000010;
        in_stack_00000020 = in_stack_00000008;
        in_stack_00000030 = in_stack_00000018;
        if (*(int *)(*(long *)PTR_DAT_0ac75960 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_090be048(&stack0x00000020,&stack0x00000048,0);
        uVar7 = uStack0000000000000048 | uVar7;
      }
    }
    return uVar7;
  }
LAB_0909ed74:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


