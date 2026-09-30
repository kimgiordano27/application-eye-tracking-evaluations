/*
FUNCTION_NAME: Unity.VisualScripting.LudiqScriptableObject$$OnBeforeDeserialize
ENTRY_POINT: 05c5d220
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2
*/


long * Unity_VisualScripting_LudiqScriptableObject__OnBeforeDeserialize
                 (ulong param_1,long param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x23;
  long *unaff_x24;
  undefined *puVar7;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(Method_System_Collections_Generic_List<Column>_Clear__);
    FUN_02d6084c(Method_System_Collections_Generic_List<BaseRaycaster>_get_Count__);
    *(undefined1 *)(unaff_x23 + 0x3a3) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar3 = FUN_0606a004(param_3,0,0);
  if ((uVar3 & 1) != 0) {
    if (param_3 == 0) goto LAB_05c5d3e8;
    uVar4 = FUN_05c5d08c(param_3);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*unaff_x24);
    }
    uVar3 = FUN_0606a004(uVar4,param_2,0);
    if ((uVar3 & 1) != 0) {
      thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
      uVar4 = thunk_FUN_02d9d534();
      puVar7 = Method_System_Collections_Generic_List<Column>_ForEach__;
      goto LAB_05c5d430;
    }
  }
  uVar4 = *(undefined8 *)Method_System_Collections_Generic_List<Column>_Clear__;
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  plVar5 = (long *)FUN_05015c2c(uVar4,0);
  if (plVar5 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar5 + 0x298))();
    if ((uVar3 & 1) == 0) {
      thunk_FUN_02dc61f4(PTR_DAT_0675e2e8);
      uVar4 = thunk_FUN_02d9d534();
      puVar7 = Method_System_Collections_Generic_List<Column>_FindAll__;
LAB_05c5d430:
      uVar6 = thunk_FUN_02dc61f4(puVar7);
      FUN_05007004(uVar4,uVar6,0);
      uVar6 = thunk_FUN_02dc61f4(Method_System_Collections_Generic_List<Column>_RemoveAt__);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar4,uVar6);
    }
    plVar5 = (long *)FUN_0606d70c();
    if (plVar5 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)Method_System_Collections_Generic_List<BaseRaycaster>_get_Count__ +
                       0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_List<BaseRaycaster>_get_Count__)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar5);
      }
      thunk_FUN_0606f6e4(plVar5);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar3 = FUN_0606a004(param_3,0,0);
      lVar1 = param_3;
      if ((uVar3 & 1) == 0) {
        lVar1 = param_2;
      }
      FUN_05c74a70(plVar5,lVar1,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar3 = FUN_0606a004(param_3,0,0);
      if ((uVar3 & 1) == 0) {
        FUN_05c5bfbc(param_2,plVar5);
      }
      else {
        if (param_3 == 0) goto LAB_05c5d3e8;
        FUN_05c5e008(param_3,plVar5);
      }
      return plVar5;
    }
  }
LAB_05c5d3e8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


