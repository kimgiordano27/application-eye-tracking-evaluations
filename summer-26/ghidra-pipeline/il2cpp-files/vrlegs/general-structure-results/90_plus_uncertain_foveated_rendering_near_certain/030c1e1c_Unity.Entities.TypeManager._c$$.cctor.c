/*
FUNCTION_NAME: Unity.Entities.TypeManager.<>c$$.cctor
ENTRY_POINT: 030c1e1c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 94
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_foveation_hits_1;functionality_foveated_rendering
*/


long Unity_Entities_TypeManager_<>c___cctor(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined2 *puVar7;
  undefined2 *unaff_x19;
  undefined4 unaff_w20;
  byte unaff_w21;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000028;
  
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar4 = FUN_030bd38c();
  if ((uVar4 & 1) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_036d97ac(0);
  }
  if (in_stack_00000018 != 0) {
    *(undefined4 *)(in_stack_00000018 + 0x18) = uVar3;
    if (in_stack_00000018 != 0) {
      *(byte *)(in_stack_00000018 + 0x40) = unaff_w21 & 1;
      if ((unaff_w21 & 1) != 0) {
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar4 = OVRManager__SetFoveatedRenderingLevel(&stack0x00000028,0);
        uVar2 = in_stack_00000028;
        puVar1 = System_Comparison<TimeZoneInfo_AdjustmentRule>_TypeInfo;
        if ((uVar4 & 1) != 0) {
          lVar5 = *(long *)System_Comparison<TimeZoneInfo_AdjustmentRule>_TypeInfo;
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar5 = *(long *)puVar1;
          }
          lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
          if (lVar8 == 0) {
            if (*(int *)(lVar5 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
              lVar5 = *(long *)puVar1;
            }
            uVar9 = **(undefined8 **)(lVar5 + 0xb8);
            lVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd8ac0);
            FUN_02060754(lVar8,uVar9,
                         *(undefined8 *)
                          System_Comparison<TimeNotificationBehaviour_NotificationEntry>_TypeInfo,0)
            ;
            plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
            *plVar6 = lVar8;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,lVar8);
          }
          if (*(int *)(*(long *)PTR_DAT_03cdabc0 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
          }
          FUN_030bc0b0(uVar2,lVar8,in_stack_00000018);
          if (in_stack_00000018 == 0)
          goto Unity_Entities_TypeManager_<>c__<InitializeAspects>b__194_0;
          *(undefined8 *)(in_stack_00000018 + 0x38) = in_stack_00000010;
          *(undefined8 *)(in_stack_00000018 + 0x30) = in_stack_00000008;
          *(undefined8 *)(in_stack_00000018 + 0x28) = in_stack_00000000;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    (in_stack_00000018 + 0x28,0);
        }
      }
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_030bd04c(unaff_w20,in_stack_00000018);
      if (in_stack_00000018 != 0) {
        lVar5 = *(long *)(*(long *)PTR_DAT_03cdacd8 + 0x20);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01a46ff8();
        }
        puVar7 = (undefined2 *)
                 thunk_FUN_01a59484(in_stack_00000018 + 0x48,
                                    *(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x80) +
                                    0x40);
        *unaff_x19 = *puVar7;
        return in_stack_00000018;
      }
    }
  }
Unity_Entities_TypeManager_<>c__<InitializeAspects>b__194_0:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


