/*
FUNCTION_NAME: FUN_05cec994
ENTRY_POINT: 05cec994
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_05cec994(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_28;
  undefined1 local_24 [4];
  
  puVar1 = PTR_DAT_069ff7d8;
  if ((DAT_06dc2d9f & 1) == 0) {
    FUN_02d965b8(
                Method_Unity_Burst_FunctionPointer<SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000414_PostfixBurstDelegate>_get_Value__
                );
    FUN_02d965b8(PTR_DAT_069ff7d8);
    FUN_02d965b8(PTR_DAT_069fb9d8);
    FUN_02d965b8(PTR_DAT_06a104a0);
    FUN_02d965b8(Method_System_Collections_Generic_HashSet<Collider>_get_Count__);
    FUN_02d965b8(PTR_DAT_06a12a30);
    FUN_02d965b8(PTR_DAT_069fc2d0);
    DAT_06dc2d9f = 1;
  }
  local_24[0] = 0;
  local_28 = 0;
  plVar2 = (long *)thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_05377f4c(plVar2,0);
  puVar1 = PTR_DAT_069fc2d0;
  if (2 < *(int *)(param_1 + 0x10)) {
    uVar5 = 2;
    do {
      if (2 < uVar5) {
        if (plVar2 == (long *)0x0) goto LAB_05cecc1c;
        FUN_053798ac(plVar2,*(undefined8 *)puVar1,0);
      }
      local_24[0] = FUN_05cec080(param_1,uVar5);
      uVar3 = FUN_0546d678(0);
      uVar3 = FUN_05457900(local_24,uVar3,0);
      if (plVar2 == (long *)0x0) goto LAB_05cecc1c;
      FUN_053798ac(plVar2,uVar3,0);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < *(int *)(param_1 + 0x10));
  }
  puVar1 = 
  Method_Unity_Burst_FunctionPointer<SmartFollowQuaternionTweenableVariable_ComputeNewTweenTarget_00000414_PostfixBurstDelegate>_get_Value__
  ;
  lVar4 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fb9d8,6);
  local_38 = FUN_05cec048(param_1);
  local_48 = *(undefined8 *)puVar1;
  uStack_40 = 0xffffffffffffffff;
  uVar3 = FUN_0551e574(&local_48,0);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x20) = uVar3;
      LeanTween__value((undefined8 *)(lVar4 + 0x20),uVar3);
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)PTR_DAT_06a12a30;
        LeanTween__value((undefined8 *)(lVar4 + 0x28));
        local_28 = *(undefined4 *)(param_1 + 0x10);
        uVar3 = FUN_0546d678(0);
        uVar3 = FUN_054e58ac(&local_28,uVar3,0);
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x30) = uVar3;
          LeanTween__value((undefined8 *)(lVar4 + 0x30),uVar3);
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar4 + 0x38) =
                 *(undefined8 *)Method_System_Collections_Generic_HashSet<Collider>_get_Count__;
            LeanTween__value();
            if (plVar2 == (long *)0x0) goto LAB_05cecc1c;
            uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
            if (4 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x40) = uVar3;
              LeanTween__value((undefined8 *)(lVar4 + 0x40),uVar3);
              if (5 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)PTR_DAT_06a104a0;
                LeanTween__value();
                FUN_0536dde4(lVar4,0);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
LAB_05cecc1c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


