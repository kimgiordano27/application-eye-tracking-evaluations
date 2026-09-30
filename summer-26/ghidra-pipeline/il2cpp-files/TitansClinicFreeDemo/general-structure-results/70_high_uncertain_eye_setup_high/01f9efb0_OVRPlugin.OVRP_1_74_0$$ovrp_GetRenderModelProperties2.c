/*
FUNCTION_NAME: OVRPlugin.OVRP_1_74_0$$ovrp_GetRenderModelProperties2
ENTRY_POINT: 01f9efb0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_74_0__ovrp_GetRenderModelProperties2(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  uint unaff_w24;
  undefined8 uVar8;
  long *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack000000000000002c;
  char cStack0000000000000030;
  char cStack0000000000000034;
  long in_stack_00000038;
  
                    /* try { // try from 01f9efb0 to 0209efb3 has its CatchHandler @ 01f9efc0 */
  uStack000000000000002c = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000020 = 0;
                    /* catch() { ... } // from try @ 01f9efb0 with catch @ 01f9efc0 */
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  puVar2 = PTR_DAT_027c1f00;
                    /* try { // try from 01f9efcc to 0209efd7 has its CatchHandler @ 01f9efec */
                    /* try { // try from 01f9efd8 to 0209efe3 has its CatchHandler @ 01f9ee78 */
                    /* try { // try from 01f9efe4 to 0209efeb has its CatchHandler @ 01f9efec */
  FUN_01f9e0f8(unaff_w22,&stack0x00000038,unaff_w24 & 1,(long)&stack0x00000030 + 4,&stack0x00000030,
               &stack0x0000002c);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01f9efcc with catch @ 01f9efec
                       catch(type#2 @ 00000000) { ... } // from try @ 01f9efe4 with catch @ 01f9efec
                        */
  if (((cStack0000000000000034 == '\0') && (in_stack_00000038 != 0)) &&
     (*(int *)(in_stack_00000038 + 0x10) == 0)) {
LAB_01f9f078:
    *unaff_x28 = 0;
    unaff_x28[1] = 0;
    unaff_x28[2] = 0;
    FUN_018de658();
  }
  else {
    uVar4 = FUN_01e59d10(in_stack_00000038,0);
    lVar6 = in_stack_00000038;
    puVar1 = PTR_DAT_027b5b18;
    if ((uVar4 & 1) == 0) {
      lVar5 = *(long *)PTR_DAT_027b5b18;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01220628();
        lVar5 = *(long *)puVar1;
      }
      uVar4 = FUN_01e5d0c8(lVar6,**(undefined8 **)(lVar5 + 0xb8),0);
      lVar6 = in_stack_00000038;
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01220628();
          lVar5 = *(long *)puVar1;
        }
        uVar4 = FUN_01e5d0c8(lVar6,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8),0);
        if ((uVar4 & 1) != 0) goto LAB_01f9f078;
      }
    }
    lVar6 = FUN_01f9f1a4();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    FUN_018de658(&stack0x00000010,*(undefined4 *)(lVar6 + 0x18),*(undefined8 *)puVar2);
    cVar3 = cStack0000000000000030;
    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
      uVar4 = 0;
      uVar7 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        uVar8 = *(undefined8 *)(lVar6 + 0x20 + uVar4 * 8);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar7 = FUN_01f9e900(uVar8,unaff_w22,unaff_w21);
        lVar5 = in_stack_00000038;
        if ((uVar7 & 1) != 0) {
          if (cStack0000000000000034 != '\0') {
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            uVar7 = FUN_01f9e2bc(uVar8,lVar5,cVar3 != '\0');
            if ((uVar7 & 1) == 0) goto LAB_01f9f158;
          }
          FUN_018de888(&stack0x00000010,uVar8,*(undefined8 *)PTR_DAT_027c1ef8);
        }
LAB_01f9f158:
        uVar7 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
    unaff_x28[2] = uStack0000000000000020;
    unaff_x28[1] = uStack0000000000000018;
    *unaff_x28 = uStack0000000000000010;
  }
  return;
}


