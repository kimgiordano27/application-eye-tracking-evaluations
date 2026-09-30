/*
FUNCTION_NAME: FUN_05b6f0b8
ENTRY_POINT: 05b6f0b8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05b6f0b8(long param_1,long param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 local_60;
  
  puVar6 = &local_d0;
  if ((DAT_06b81c6c & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_Dispose__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_MoveNext__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                );
    DAT_06b81c6c = 1;
  }
  local_60 = 0;
  local_a0 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  if (param_2 == 0) {
    return;
  }
  lVar7 = *(long *)(param_2 + 0xe0);
  if (lVar7 == 0) {
    return;
  }
  if (*(long *)(param_2 + 0x1a0) != 0) {
    uVar3 = FUN_059e0b14(*(long *)(param_2 + 0x1a0),0);
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      if (*(long *)(param_2 + 0x1a0) == 0) goto LAB_05b6f3e8;
      uVar2 = FUN_059e0c5c(*(long *)(param_2 + 0x1a0),0);
      uVar2 = uVar2 ^ 1;
    }
    if (*(long *)(param_2 + 0x1a0) != 0) {
      uVar1 = *(undefined4 *)(*(long *)(param_2 + 0x1a0) + 0x24);
      uVar3 = FUN_035d4864(lVar7,*(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                          );
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x228) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x228) + 0x18);
        }
        if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar3 = FUN_0606a004(uVar8,0,0);
        if (((uVar3 & 1) != 0) &&
           (lVar4 = FUN_035d46b8(lVar7,*(undefined8 *)
                                        Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_Dispose__
                                ), lVar4 != 0)) {
          FUN_05b13ea4(lVar4,param_3,uVar2 & 1,0);
          lVar5 = FUN_05b13b94(lVar4,uVar1,0);
          if (lVar5 != 0) {
            lVar5 = *(long *)(param_1 + 0x210);
            uVar9 = *(undefined8 *)(param_1 + 0x228);
            uVar8 = FUN_05b13b94(lVar4,uVar1,0);
            if (lVar5 == 0) goto LAB_05b6f3e8;
            FUN_05b9af68(lVar5,uVar9,uVar8,0,0);
            FUN_05b0b2c0(param_1,*(undefined8 *)(param_1 + 0x210),0);
          }
        }
      }
      uVar3 = FUN_035d4864(lVar7,*(undefined8 *)
                                  Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                          );
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x238) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x238) + 0x18);
        }
        if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar3 = FUN_0606a004(uVar8,0,0);
        if (((uVar3 & 1) != 0) &&
           (lVar7 = FUN_035d46b8(lVar7,*(undefined8 *)
                                        Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_MoveNext__
                                ), lVar7 != 0)) {
          if (*(long *)(param_1 + 0x218) == 0) goto LAB_05b6f3e8;
          if (*(char *)(*(long *)(param_1 + 0x218) + 0xcc) == '\0') {
            local_60 = *(undefined4 *)(param_3 + 6);
            uStack_78 = param_3[3];
            local_80 = param_3[2];
            uStack_68 = param_3[5];
            uStack_70 = param_3[4];
            uStack_88 = param_3[1];
            local_90 = *param_3;
            puVar6 = &local_90;
            FUN_0604eedc(&local_90,0xe,0);
            FUN_0604ee20(&local_90,0x31,0);
            uStack_78 = uStack_78 & 0xffffffff;
          }
          else {
            local_a0 = *(undefined4 *)(param_2 + 0x128);
            uStack_b8 = *(undefined8 *)(param_2 + 0x110);
            local_c0 = *(undefined8 *)(param_2 + 0x108);
            uStack_a8 = *(undefined8 *)(param_2 + 0x120);
            uStack_b0 = *(undefined8 *)(param_2 + 0x118);
            uStack_c8 = *(undefined8 *)(param_2 + 0x100);
            local_d0 = *(undefined8 *)(param_2 + 0xf8);
            FUN_0604ee20(&local_d0,0,0);
          }
          FUN_05b1444c(lVar7,puVar6,uVar2 & 1,0);
          lVar4 = FUN_05b14148(lVar7,uVar1,0);
          if (lVar4 != 0) {
            lVar4 = *(long *)(param_1 + 0x218);
            uVar9 = *(undefined8 *)(param_1 + 0x238);
            uVar8 = FUN_05b14148(lVar7,uVar1,0);
            if (lVar4 == 0) goto LAB_05b6f3e8;
            FUN_05b9c240(lVar4,uVar9,uVar8,0);
            FUN_05b0b2c0(param_1,*(undefined8 *)(param_1 + 0x218),0);
          }
        }
      }
      return;
    }
  }
LAB_05b6f3e8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


