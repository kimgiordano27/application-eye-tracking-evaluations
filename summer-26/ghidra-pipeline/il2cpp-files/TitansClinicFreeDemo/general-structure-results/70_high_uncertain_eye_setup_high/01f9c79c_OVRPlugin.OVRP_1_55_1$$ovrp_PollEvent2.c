/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_1$$ovrp_PollEvent2
ENTRY_POINT: 01f9c79c
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


void OVRPlugin_OVRP_1_55_1__ovrp_PollEvent2(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long in_x10;
  int unaff_w19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  bVar2 = *(byte *)(param_3 + 0x130);
  if ((bVar2 <= *(byte *)(in_x10 + 0x130)) &&
     (*(long *)(*(long *)(in_x10 + 200) + ((ulong)bVar2 - 1) * 8) == param_3)) {
    *(undefined8 *)(unaff_x20 + 0x28) = param_1;
    puVar3 = PTR_DAT_027bbb00;
    if ((bVar2 <= *(byte *)(*param_1 + 0x130)) &&
       (*(long *)(*(long *)(*param_1 + 200) + ((ulong)bVar2 - 1) * 8) == param_3)) {
      thunk_FUN_01286abc((undefined8 *)(unaff_x20 + 0x28),param_1);
      uVar5 = FUN_01ebed78();
      *(undefined8 *)(unaff_x20 + 0x30) = uVar5;
      thunk_FUN_01286abc();
      uVar5 = FUN_01ebed78();
      puVar9 = (undefined8 *)(unaff_x20 + 0x40);
      *puVar9 = uVar5;
      thunk_FUN_01286abc(puVar9,uVar5);
      uVar5 = FUN_01ebed78();
      puVar10 = (undefined8 *)(unaff_x20 + 0x48);
      *puVar10 = uVar5;
      thunk_FUN_01286abc(puVar10,uVar5);
      uVar4 = FUN_01ebe91c();
      *(undefined4 *)(unaff_x20 + 0x50) = uVar4;
      uVar4 = FUN_01ebe91c();
      *(undefined4 *)(unaff_x20 + 0x60) = uVar4;
      uVar5 = FUN_01ebed78();
      *(undefined8 *)(unaff_x20 + 0x68) = uVar5;
      thunk_FUN_01286abc();
      FUN_01f7d8a0(*(undefined8 *)puVar3,0);
      plVar6 = (long *)FUN_01ebc740();
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        *(undefined8 *)(unaff_x20 + 0x70) = 0;
      }
      else {
        lVar8 = *(long *)PTR_DAT_027c1de8;
        plVar1 = plVar6;
        if (*plVar6 != lVar8) {
          plVar1 = (long *)0x0;
        }
        *(long **)(unaff_x20 + 0x70) = plVar1;
        if (*plVar6 != lVar8) {
          plVar6 = (long *)0x0;
        }
      }
      thunk_FUN_01286abc(unaff_x20 + 0x70,plVar6);
      if ((*unaff_x22 != 0) && (*(int *)(unaff_x20 + 0x60) != 0)) {
        if (unaff_w19 != 0x80) {
          return;
        }
        uVar5 = FUN_01e5d260(*puVar10,*puVar9,0);
        *puVar10 = uVar5;
        thunk_FUN_01286abc(puVar10,uVar5);
        *puVar9 = 0;
        thunk_FUN_01286abc(puVar9,0);
        return;
      }
      uVar5 = thunk_FUN_01279b34(PTR_DAT_027bcb38);
      thunk_FUN_01279b34(PTR_DAT_027b5260);
      uVar7 = thunk_FUN_0124bba8();
      FUN_01eb38e0(uVar7,uVar5,0);
      uVar5 = thunk_FUN_01279b34(PTR_DAT_027c1e40);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar7,uVar5);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230f60(param_1);
}


