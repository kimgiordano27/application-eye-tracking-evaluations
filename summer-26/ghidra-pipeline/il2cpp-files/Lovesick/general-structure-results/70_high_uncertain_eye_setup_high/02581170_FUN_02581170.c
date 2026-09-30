/*
FUNCTION_NAME: FUN_02581170
ENTRY_POINT: 02581170
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02581170(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  int *piVar12;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_03782ec2 & 1) == 0) {
    thunk_FUN_00d48444(Method_StickerSheet_GlassesWorn__);
    thunk_FUN_00d48444(PTR_DAT_033f4dd0);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f4c58);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_80__);
    thunk_FUN_00d48444(StringLiteral_4984);
    thunk_FUN_00d48444(StringLiteral_272);
    DAT_03782ec2 = 1;
  }
  uStack_68 = 0;
  local_60 = 0;
  local_70 = 0;
  *(undefined1 *)(param_1 + 0x27c) = 1;
  puVar5 = StringLiteral_4984;
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__796_80__;
  puVar3 = 
  Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
  ;
  puVar2 = PTR_DAT_033f4dd0;
  puVar1 = PTR_DAT_033f4c58;
  if ((*(long *)(param_1 + 600) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 600) + 0x10), lVar6 != 0)) {
    if (0 < *(int *)(lVar6 + 0x18)) {
      FUN_01323390(lVar6,&local_88,*(undefined8 *)StringLiteral_4984);
      uStack_68 = uStack_80;
      local_70 = local_88;
      local_60 = local_78;
      while (uVar7 = FUN_012b894c(&local_70,*(undefined8 *)puVar3), (uVar7 & 1) != 0) {
        plVar8 = (long *)FUN_00cc3d7c(&local_70,*(undefined8 *)puVar1);
        plVar9 = *(long **)(param_1 + 600);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar7 = (**(code **)(*plVar9 + 0x188))(plVar9,plVar8,*(undefined8 *)(*plVar9 + 400));
        if ((uVar7 & 1) != 0) {
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          lVar11 = *plVar8;
          lVar6 = *(long *)puVar4;
          uVar7 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar7 != 0) {
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar6) {
                puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                goto LAB_025812f4;
              }
              uVar7 = uVar7 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar7 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724(plVar8,lVar6,2);
LAB_025812f4:
          (*(code *)*puVar10)(plVar8,param_1,puVar10[1]);
        }
      }
      FUN_012b8948(&local_70,*(undefined8 *)puVar2);
    }
    if ((*(long *)(param_1 + 0x260) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 0x260) + 0x10), lVar6 != 0)) {
      if (0 < *(int *)(lVar6 + 0x18)) {
        FUN_01323390(lVar6,&local_88,*(undefined8 *)puVar5);
        uStack_68 = uStack_80;
        local_70 = local_88;
        local_60 = local_78;
        while (uVar7 = FUN_012b894c(&local_70,*(undefined8 *)puVar3), (uVar7 & 1) != 0) {
          plVar8 = (long *)FUN_00cc3d7c(&local_70,*(undefined8 *)puVar1);
          plVar9 = *(long **)(param_1 + 0x260);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar7 = (**(code **)(*plVar9 + 0x188))(plVar9,plVar8,*(undefined8 *)(*plVar9 + 400));
          if ((uVar7 & 1) != 0) {
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            lVar11 = *plVar8;
            lVar6 = *(long *)puVar4;
            uVar7 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar7 != 0) {
              piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar6) {
                  puVar10 = (undefined8 *)(lVar11 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                  goto LAB_025813e0;
                }
                uVar7 = uVar7 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar7 != 0);
            }
            puVar10 = (undefined8 *)FUN_00d59724(plVar8,lVar6,2);
LAB_025813e0:
            (*(code *)*puVar10)(plVar8,param_1,puVar10[1]);
          }
        }
        FUN_012b8948(&local_70,*(undefined8 *)puVar2);
      }
      *(undefined1 *)(param_1 + 0x27c) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


