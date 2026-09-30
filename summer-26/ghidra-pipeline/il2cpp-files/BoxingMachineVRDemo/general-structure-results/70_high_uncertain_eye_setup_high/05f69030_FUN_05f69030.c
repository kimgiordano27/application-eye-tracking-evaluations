/*
FUNCTION_NAME: FUN_05f69030
ENTRY_POINT: 05f69030
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05f69030(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long local_a0;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  long local_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((DAT_06b8424b & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675e660);
    FUN_02d6084c(Method_System_Linq_Enumerable_Concat<string>__);
    FUN_02d6084c(OVRManager_CompositionMethod_TypeInfo);
    FUN_02d6084c(Method_System_Linq_Enumerable_Concat<Type>__);
    FUN_02d6084c(Method_System_Linq_Enumerable_Contains<AndroidAxis>__);
    FUN_02d6084c(Method_System_Linq_Enumerable_Contains<AnimationStateData>__);
    DAT_06b8424b = 1;
  }
  local_80 = 0;
  iStack_78 = 0;
  uStack_74 = 0;
  local_68 = 0;
  local_70 = 0;
  uStack_6c = 0;
  if (*(long *)(param_1 + 0x18) != param_2) {
    *(long *)(param_1 + 0x18) = param_2;
    thunk_FUN_02dd37b4((long *)(param_1 + 0x18),param_2);
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) {
LAB_05f692a0:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    iVar11 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar11) {
      FUN_05029664(*(undefined8 *)(lVar7 + 0x10),0,iVar11,0);
    }
    if (param_2 != 0) {
      FUN_058d20a0(&local_a0,0);
      iStack_78 = iStack_98;
      local_80 = local_a0;
      uStack_6c = (undefined4)uStack_8c;
      local_68 = (undefined4)((ulong)uStack_8c >> 0x20);
      uStack_74 = uStack_94;
      local_70 = uStack_90;
      lVar7 = FUN_0345b42c(param_2,&local_80,*(undefined8 *)OVRManager_CompositionMethod_TypeInfo);
      if (lVar7 < 0) {
        local_a0 = lVar7;
        uVar5 = thunk_FUN_02d9d164(*(undefined8 *)(PTR_DAT_0675e258 + 0x68),&local_a0);
        uVar5 = FUN_04e8e6a4(*(undefined8 *)
                              Method_System_Linq_Enumerable_Contains<AnimationStateData>__,param_2,
                             uVar5,0);
        if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e660);
        }
        FUN_0601ea80(uVar5,0);
        iVar11 = 1;
      }
      else {
        iVar11 = iStack_78;
        if (iStack_78 < 1) goto LAB_05f69274;
      }
      puVar4 = Method_System_Linq_Enumerable_Concat<Type>__;
      puVar3 = Method_System_Linq_Enumerable_Concat<string>__;
      iVar12 = 0;
      do {
        lVar10 = *(long *)(param_1 + 0x10);
        lVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
        FUN_0504920c(lVar7,0);
        if (lVar7 == 0) goto LAB_05f692a0;
        *(long *)(lVar7 + 0x18) = param_2;
        *(int *)(lVar7 + 0x10) = iVar12;
        thunk_FUN_02dd37b4((long *)(lVar7 + 0x18),param_2);
        if (lVar10 == 0) goto LAB_05f692a0;
        lVar8 = *(long *)(lVar10 + 0x10);
        lVar9 = *(long *)puVar4;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_05f692a0;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          *plVar6 = lVar7;
          thunk_FUN_02dd37b4(plVar6,lVar7);
        }
        else {
          FUN_03aac494(lVar10,lVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        iVar12 = iVar12 + 1;
      } while (iVar11 != iVar12);
    }
  }
LAB_05f69274:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


