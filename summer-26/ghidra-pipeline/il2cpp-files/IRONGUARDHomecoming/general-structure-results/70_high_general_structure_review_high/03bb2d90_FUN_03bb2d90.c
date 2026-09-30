/*
FUNCTION_NAME: FUN_03bb2d90
ENTRY_POINT: 03bb2d90
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_03bb2d90(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_0483984e & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_12299);
    thunk_FUN_01efb3a4(StringLiteral_12306);
    thunk_FUN_01efb3a4(StringLiteral_12300);
    thunk_FUN_01efb3a4(StringLiteral_12301);
    thunk_FUN_01efb3a4(StringLiteral_12302);
    thunk_FUN_01efb3a4(StringLiteral_13134);
    thunk_FUN_01efb3a4(StringLiteral_11800);
    thunk_FUN_01efb3a4(StringLiteral_13135);
    thunk_FUN_01efb3a4(StringLiteral_12303);
    thunk_FUN_01efb3a4(StringLiteral_12304);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_0483984e = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uVar7 = FUN_0340eec4(param_2,0);
  puVar10 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((uVar7 & 1) == 0) {
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar7 = FUN_03582560(param_3,0,0);
    if ((uVar7 & 1) == 0) {
      uVar13 = *(undefined8 *)StringLiteral_13135;
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar8 = (long *)FUN_03579868(uVar13,0);
      puVar1 = StringLiteral_11800;
      if (plVar8 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar8 + 0x2a8))(plVar8,param_3,*(undefined8 *)(*plVar8 + 0x2b0));
        plVar8 = (long *)FUN_03579868(*(undefined8 *)puVar1,0);
        if (plVar8 != (long *)0x0) {
          uVar6 = (**(code **)(*plVar8 + 0x2a8))(plVar8,param_3,*(undefined8 *)(*plVar8 + 0x2b0));
          if (((uVar5 | uVar6) & 1) == 0) {
            uVar13 = thunk_FUN_01efb3a4(
                                       Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                       );
            uVar13 = FUN_01f08890(uVar13,5);
            FUN_01bc50c0();
            uVar11 = thunk_FUN_01efb3a4(StringLiteral_13137);
            FUN_01bc5408(uVar13,0,uVar11);
            FUN_01bc50c0(param_3);
            uVar11 = (**(code **)(*param_3 + 0x1a8))(param_3,*(undefined8 *)(*param_3 + 0x1b0));
            FUN_01bc50c0(uVar13);
            FUN_01bc5408(uVar13,1,uVar11);
            FUN_01bc50c0(uVar13);
            uVar11 = thunk_FUN_01efb3a4(StringLiteral_13138);
            FUN_01bc5408(uVar13,2,uVar11);
            FUN_01bc50c0(param_3);
            plVar8 = (long *)(**(code **)(*param_3 + 0x888))
                                       (param_3,*(undefined8 *)(*param_3 + 0x890));
            FUN_01bc50c0();
            uVar11 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
            FUN_01bc50c0(uVar13);
            FUN_01bc5408(uVar13,3,uVar11);
            FUN_01bc50c0(uVar13);
            uVar11 = thunk_FUN_01efb3a4(
                                       Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                       );
            FUN_01bc5408(uVar13,4,uVar11);
            uVar13 = FUN_0340efe8(uVar13,0);
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
            uVar11 = thunk_FUN_01f117cc();
            uVar12 = thunk_FUN_01efb3a4(Method_System_DateTime_FromBinary__);
            FUN_034efd98(uVar11,uVar13,uVar12,0);
            uVar13 = thunk_FUN_01efb3a4(StringLiteral_13136);
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar11,uVar13);
          }
          FUN_03b412f4(&local_70,param_2,0);
          uVar6 = FUN_03c06068((long *)(param_1 + 0x18),local_70,uStack_68,0);
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (FUN_02b44b90(*(long *)(param_1 + 0x18),local_70,uStack_68,param_3,
                           *(undefined8 *)StringLiteral_12306), puVar4 = StringLiteral_12301,
             puVar3 = StringLiteral_12300, puVar2 = StringLiteral_12299, param_3 != (long *)0x0)) {
            plVar8 = (long *)(**(code **)(*param_3 + 0x888))
                                       (param_3,*(undefined8 *)(*param_3 + 0x890));
            do {
              uVar13 = *(undefined8 *)puVar1;
              if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar13 = FUN_03579868(uVar13,0);
              uVar7 = FUN_03583338(plVar8,uVar13,0);
              if ((uVar7 & 1) == 0) {
                lVar9 = 0;
                break;
              }
              lVar9 = *(long *)(param_1 + 0x18);
              if (lVar9 == 0) goto LAB_03bb313c;
              FUN_02b4501c(&local_d0,lVar9,*(undefined8 *)puVar2);
              uStack_98 = uStack_c8;
              local_a0 = local_d0;
              uStack_88 = uStack_b8;
              local_90 = uStack_c0;
              uStack_78 = uStack_a8;
              local_80 = local_b0;
              do {
                uVar7 = FUN_02ce2834(&local_a0,*(undefined8 *)puVar4);
                uVar12 = local_80;
                uVar11 = uStack_88;
                uVar13 = local_90;
                if ((uVar7 & 1) == 0) {
                  lVar9 = 0;
                  goto LAB_03bb304c;
                }
                if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar7 = FUN_03582560(uVar12,plVar8,0);
              } while ((uVar7 & 1) == 0);
              lVar9 = FUN_03b41740(uVar13,uVar11,0);
LAB_03bb304c:
              FUN_02ce2968(&local_a0,*(undefined8 *)puVar3);
              if (plVar8 == (long *)0x0) goto LAB_03bb313c;
              plVar8 = (long *)(**(code **)(*plVar8 + 0x888))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x890));
            } while (lVar9 == 0);
            uVar11 = uStack_68;
            uVar13 = local_70;
            local_e0 = 0;
            uStack_d8 = 0;
            FUN_03b412f4(&local_e0,lVar9,0);
            uStack_c8 = 0;
            local_d0 = 0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            FUN_02f0bd9c(&local_d0,local_e0,uStack_d8,*(undefined8 *)StringLiteral_13134);
            uStack_f8 = uStack_c8;
            local_100 = local_d0;
            uStack_e8 = uStack_b8;
            uStack_f0 = uStack_c0;
            FUN_03bb333c(param_1,uVar13,uVar11,&local_100,uVar6 & 1,uVar5 & 1,0);
            return;
          }
        }
      }
LAB_03bb313c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar13 = thunk_FUN_01f117cc();
    puVar10 = Method_System_DateTime_FromBinary__;
  }
  else {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar13 = thunk_FUN_01f117cc();
    puVar10 = Method_Gameplay_Turrets_CannonTurret_<Start>b__11_2__;
  }
  uVar11 = thunk_FUN_01efb3a4(puVar10);
  FUN_034efd20(uVar13,uVar11,0);
  uVar11 = thunk_FUN_01efb3a4(StringLiteral_13136);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar13,uVar11);
}


