/*
FUNCTION_NAME: thunk_FUN_01a1fcc4
ENTRY_POINT: 01a1ffc4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void thunk_FUN_01a1fcc4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 auStack_170 [2];
  undefined8 uStack_15c;
  undefined8 uStack_150;
  undefined8 uStack_13c;
  undefined4 auStack_130 [2];
  undefined8 uStack_128;
  undefined8 uStack_114;
  undefined8 auStack_f0 [2];
  undefined8 uStack_dc;
  undefined8 uStack_d0;
  undefined8 uStack_bc;
  undefined4 auStack_a8 [9];
  undefined8 uStack_84;
  undefined8 uStack_70;
  undefined4 uStack_64;
  
  if ((DAT_0377a9fb & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4775);
    thunk_FUN_00d48444(StringLiteral_8975);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<DataRow,_DataRowView>__ctor__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_54__);
    thunk_FUN_00d48444(StringLiteral_8327);
    thunk_FUN_00d48444(StringLiteral_1841);
    thunk_FUN_00d48444(UnityEngine_UIElements_EventCallback<NavigationMoveEvent>_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_InputActionTrace_SubscribeTo__);
    DAT_0377a9fb = 1;
  }
  puVar1 = StringLiteral_8975;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_0129a9f4(*(long *)(param_1 + 0x38),*(undefined8 *)StringLiteral_8975);
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_0129a9f4(*(long *)(param_1 + 0x30),*(undefined8 *)puVar1);
      if ((*(long *)(param_1 + 0x40) != 0) &&
         (lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar6 != 0)) {
        FUN_012ddc8c(lVar6,*(undefined8 *)StringLiteral_1841);
        if ((*(long *)(param_1 + 0x40) != 0) &&
           (lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x18), lVar6 != 0)) {
          FUN_0129a9f4(lVar6,*(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<DataRow,_DataRowView>__ctor__
                      );
          puVar4 = StringLiteral_8327;
          puVar3 = StringLiteral_4775;
          puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_54__;
          puVar1 = Method_UnityEngine_InputSystem_Utilities_InputActionTrace_SubscribeTo__;
          lVar6 = *(long *)(param_1 + 0x28);
          if (lVar6 != 0) {
            iVar7 = 0;
            while( true ) {
              if (*(int *)(lVar6 + 0x18) <= iVar7) {
                return;
              }
              lVar8 = *(long *)(param_1 + 0x38);
              FUN_0132138c(lVar6,iVar7,auStack_a8,*(undefined8 *)puVar1);
              uVar5 = auStack_a8[0];
              if (*(long *)(param_1 + 0x28) == 0) break;
              FUN_0132138c(*(long *)(param_1 + 0x28),iVar7,auStack_a8,*(undefined8 *)puVar1);
              uStack_bc = uStack_70;
              uStack_d0 = uStack_84;
              if (lVar8 == 0) break;
              auStack_f0[0] = uStack_84;
              uStack_dc = uStack_70;
              auStack_130[0] = uVar5;
              FUN_01299e64(lVar8,auStack_130,auStack_f0,*(undefined8 *)puVar2);
              if (*(long *)(param_1 + 0x28) == 0) break;
              lVar6 = *(long *)(param_1 + 0x30);
              FUN_0132138c(*(long *)(param_1 + 0x28),iVar7,auStack_130,*(undefined8 *)puVar1);
              uVar5 = auStack_130[0];
              if (*(long *)(param_1 + 0x28) == 0) break;
              FUN_0132138c(*(long *)(param_1 + 0x28),iVar7,auStack_130,*(undefined8 *)puVar1);
              uStack_13c = uStack_114;
              uStack_150 = uStack_128;
              if (lVar6 == 0) break;
              auStack_170[0] = uStack_128;
              uStack_15c = uStack_114;
              uStack_1b0 = uVar5;
              FUN_01299e64(lVar6,&uStack_1b0,auStack_170,*(undefined8 *)puVar2);
              if ((*(long *)(param_1 + 0x40) == 0) || (*(long *)(param_1 + 0x28) == 0)) break;
              lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
              FUN_0132138c(*(long *)(param_1 + 0x28),iVar7,&uStack_1b0,*(undefined8 *)puVar1);
              if (lVar6 == 0) break;
              FUN_012df150(lVar6,&uStack_1b0,*(undefined8 *)puVar4);
              if ((*(long *)(param_1 + 0x40) == 0) || (*(long *)(param_1 + 0x28) == 0)) break;
              lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x18);
              FUN_0132138c(*(long *)(param_1 + 0x28),iVar7,&uStack_1b0,*(undefined8 *)puVar1);
              uVar5 = uStack_1b0;
              if (*(long *)(param_1 + 0x28) == 0) break;
              FUN_0132138c(*(long *)(param_1 + 0x28),iVar7,&uStack_1b0,*(undefined8 *)puVar1);
              if (lVar6 == 0) break;
              uStack_64 = uStack_1ac;
              uStack_1b0 = uVar5;
              FUN_0129a054(lVar6,&uStack_1b0,&uStack_64,*(undefined8 *)puVar3);
              lVar6 = *(long *)(param_1 + 0x28);
              iVar7 = iVar7 + 1;
              if (lVar6 == 0) break;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


