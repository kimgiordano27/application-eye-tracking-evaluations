/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_UseMrcDebugCamera
ENTRY_POINT: 01f90cf0
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


void OVRPlugin_OVRP_1_38_0__ovrp_Media_UseMrcDebugCamera(long *param_1,long *param_2,uint param_3)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_0293def3 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027c1b40);
    thunk_FUN_01279b34(PTR_DAT_027bca20);
    thunk_FUN_01279b34(PTR_DAT_027b46b8);
    thunk_FUN_01279b34(PTR_DAT_027b32e0);
    DAT_0293def3 = 1;
  }
  uVar4 = FUN_01ee5028(param_1,0,0);
  puVar6 = PTR_DAT_027b32e0;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    puVar2 = PTR_DAT_027c1b40;
    if (param_2 != (long *)0x0) {
      uVar8 = *(undefined8 *)PTR_DAT_027c1b40;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar8 = FUN_01f7d8a0(uVar8);
      uVar4 = (**(code **)(*param_2 + 0x278))(param_2,uVar8,*(undefined8 *)(*param_2 + 0x280));
      if ((uVar4 & 1) == 0) {
        uVar8 = *(undefined8 *)puVar2;
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        plVar5 = (long *)FUN_01f7d8a0(uVar8);
        if (plVar5 != param_2) {
          uVar8 = thunk_FUN_01279b34(PTR_DAT_027c1b58);
          uVar8 = FUN_01f942e0(uVar8,0);
          thunk_FUN_01279b34(PTR_DAT_027b3eb0);
          uVar7 = thunk_FUN_0124bba8();
          FUN_01e7d290(uVar7,uVar8,0);
          uVar8 = thunk_FUN_01279b34(PTR_DAT_027c1b68);
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar7,uVar8);
        }
      }
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      iVar3 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
      if (iVar3 == 2) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_027bca20 + 0x130);
        if ((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
           (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)PTR_DAT_027bca20)) {
          FUN_01f90760(param_1,param_2,param_3 & 1);
          return;
        }
      }
      else {
        if (iVar3 != 0x10) {
                    /* WARNING: Could not recover jumptable at 0x01f90ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x1e8))
                    (param_1,param_2,param_3 & 1,*(undefined8 *)(*param_1 + 0x1f0));
          return;
        }
        bVar1 = *(byte *)(*(long *)PTR_DAT_027b46b8 + 0x130);
        if ((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
           (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)PTR_DAT_027b46b8)) {
          FUN_01f906f0(param_1,param_2,param_3 & 1);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01230f60(param_1);
    }
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar8 = thunk_FUN_0124bba8();
    puVar6 = PTR_DAT_027bcb18;
  }
  else {
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar8 = thunk_FUN_0124bba8();
    puVar6 = PTR_DAT_027c1b48;
  }
  uVar7 = thunk_FUN_01279b34(puVar6);
  FUN_01e75914(uVar8,uVar7,0);
  uVar7 = thunk_FUN_01279b34(PTR_DAT_027c1b68);
                    /* WARNING: Subroutine does not return */
  FUN_01230b78(uVar8,uVar7);
}


