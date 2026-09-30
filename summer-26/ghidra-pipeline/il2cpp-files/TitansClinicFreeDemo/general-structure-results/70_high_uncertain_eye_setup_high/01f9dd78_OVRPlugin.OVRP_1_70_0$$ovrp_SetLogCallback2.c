/*
FUNCTION_NAME: OVRPlugin.OVRP_1_70_0$$ovrp_SetLogCallback2
ENTRY_POINT: 01f9dd78
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_70_0__ovrp_SetLogCallback2(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  
  if ((DAT_0293df56 & 1) == 0) {
                    /* try { // try from 01f9dd9c to 0209dda3 has its CatchHandler @ 01f9de6c */
    thunk_FUN_01279b34(PTR_DAT_027b3ec0);
    DAT_0293df56 = 1;
  }
  puVar1 = PTR_DAT_027b3ec0;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar4 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      lVar7 = 0;
      do {
        if ((uint)uVar4 <= (uint)lVar7) {
LAB_01f9de48:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca8();
        }
        lVar5 = *(long *)(param_1 + 0x20 + lVar7 * 8);
                    /* try { // try from 01f9dde0 to 0209de07 has its CatchHandler @ 01f9de70 */
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        if (lVar5 == 0) goto LAB_01f9de4c;
        if (*(uint *)(param_1 + 0x18) <= (uint)lVar7) goto LAB_01f9de48;
        uVar6 = *(undefined8 *)(param_1 + 0x20 + lVar7 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        FUN_01f9dc1c(uVar6);
        uVar4 = *(ulong *)(param_1 + 0x18);
        lVar7 = lVar7 + 1;
        uVar3 = (uint)uVar4;
      } while ((int)lVar7 < (int)uVar3);
    }
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    if (uVar3 == *(uint *)(param_2 + 0x18)) {
      return;
    }
    uVar6 = thunk_FUN_01279b34(PTR_DAT_027b3650);
    uVar6 = FUN_01230af8(uVar6,2);
    FUN_0103b050(param_1);
    puVar1 = PTR_DAT_027b1ab0;
    uStack000000000000000c = (undefined4)*(undefined8 *)(param_1 + 0x18);
    uVar2 = thunk_FUN_01279b34(PTR_DAT_027b1ab0);
    uVar2 = thunk_FUN_0124b7d8(uVar2,&stack0x0000000c);
    FUN_0103b050(uVar6);
    FUN_0103b3ac(uVar6,uVar2);
    FUN_0103b3e0(uVar6,0,uVar2);
    FUN_0103b050(param_2);
    in_stack_00000008 = (undefined4)*(undefined8 *)(param_2 + 0x18);
    uVar2 = thunk_FUN_01279b34(puVar1);
    uVar2 = thunk_FUN_0124b7d8(uVar2,&stack0x00000008);
    FUN_0103b050(uVar6);
    FUN_0103b3ac(uVar6,uVar2);
    FUN_0103b3e0(uVar6,1,uVar2);
    uVar2 = thunk_FUN_01279b34(PTR_DAT_027c1ed0);
    uVar6 = FUN_01f9b348(uVar2,uVar6);
    thunk_FUN_01279b34(PTR_DAT_027b3eb0);
    uVar2 = thunk_FUN_0124bba8();
    FUN_01e7d290(uVar2,uVar6,0);
    uVar6 = thunk_FUN_01279b34(PTR_DAT_027c1ec8);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar2,uVar6);
  }
LAB_01f9de4c:
  thunk_FUN_01279b34(PTR_DAT_027b3df8);
  uVar6 = thunk_FUN_0124bba8();
  FUN_01e7e374(uVar6,0);
  uVar2 = thunk_FUN_01279b34(PTR_DAT_027c1ec8);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar6,uVar2);
}


