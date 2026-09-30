/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetBodyState
ENTRY_POINT: 01f9f938
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetBodyState(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *unaff_x19;
  uint unaff_w21;
  long lVar8;
  uint unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  long lVar9;
  undefined4 uStack000000000000001c;
  char in_stack_00000020;
  char cStack0000000000000024;
  undefined8 in_stack_00000028;
  
  thunk_FUN_01279b34(*(undefined8 *)(param_1 + 0xf28));
  thunk_FUN_01279b34(PTR_DAT_027c1f30);
                    /* try { // try from 01f9f94c to 0209f963 has its CatchHandler @ 01f9f9e8 */
  thunk_FUN_01279b34(PTR_DAT_027b3ec0);
  *(undefined1 *)(unaff_x24 + 0xf62) = 1;
                    /* try { // try from 01f9f964 to 0209f96b has its CatchHandler @ 01f9f9e4 */
  cStack0000000000000024 = '\0';
  in_stack_00000020 = '\0';
  uStack000000000000001c = 0;
                    /* try { // try from 01f9f970 to 0209f983 has its CatchHandler @ 01f9f9ec */
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
                    /* try { // try from 01f9f984 to 0209f9db has its CatchHandler @ 01f9f7b0 */
  FUN_01f9e0f8(unaff_w21,&stack0x00000028,unaff_w22 & 1,&stack0x00000024,&stack0x00000020,
               &stack0x0000001c);
  lVar6 = FUN_01f9fabc();
  if (lVar6 != 0) {
    FUN_018de658();
    cVar2 = cStack0000000000000024;
    cVar1 = in_stack_00000020;
    uVar4 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar4) {
      lVar9 = 0;
      do {
        if (uVar4 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        lVar8 = *(long *)(lVar6 + 0x20 + lVar9 * 8);
        if (lVar8 == 0) goto LAB_01f9fab8;
        uVar4 = thunk_FUN_01ef0118(lVar8,0);
        uVar5 = thunk_FUN_01ef0118(lVar8,0);
        uVar3 = in_stack_00000028;
        if ((uVar4 & (unaff_w21 ^ 2)) == uVar5) {
          if (cVar2 != '\0') {
            if (*(int *)(*unaff_x23 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar7 = FUN_01f9e2bc(lVar8,uVar3,cVar1 != '\0');
            if ((uVar7 & 1) == 0) goto LAB_01f9fa74;
          }
          FUN_018de888();
        }
LAB_01f9fa74:
        uVar4 = *(uint *)(lVar6 + 0x18);
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)uVar4);
    }
    unaff_x19[2] = 0;
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
    return;
  }
LAB_01f9fab8:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


