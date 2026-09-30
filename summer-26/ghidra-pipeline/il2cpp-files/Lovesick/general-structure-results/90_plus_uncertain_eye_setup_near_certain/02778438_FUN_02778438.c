/*
FUNCTION_NAME: FUN_02778438
ENTRY_POINT: 02778438
PROGRAM: Lovesick-libil2cpp.so
SCORE: 238
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_02778438(long param_1,long param_2,uint param_3,int param_4,ulong *param_5,
                 undefined8 *param_6,uint param_7)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  bool bVar9;
  byte bVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  ulong local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  ulong local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong uStack_70;
  undefined8 local_68;
  
  lVar13 = param_1;
  if ((DAT_03788620 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vcopyq_laneq_f32__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(Method_System_Xml_Serialization_XmlReflectionImporter_ImportTypeMapping__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<DebugUI_Widget>_ToArray__);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<Vector3>_WriteValue__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Transform>_get_Item__);
    thunk_FUN_00d48444(WaveFormController_<HideCoroutine>d__30_TypeInfo);
    lVar13 = thunk_FUN_00d48444(Method_System_Collections_Generic_List<List<IntPoint>>_get_Count__);
    DAT_03788620 = 1;
  }
  plVar19 = (long *)StringLiteral_302;
  puVar7 = Method_Sirenix_Serialization_Serializer<Vector3>_WriteValue__;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  if (*(uint *)(param_1 + 0x34) < param_3) {
    FUN_02777bf8(param_1);
    lVar13 = *(long *)(param_1 + 0x28);
    if (lVar13 == 0) {
      lVar18 = 0;
LAB_02778614:
      puVar7 = Method_System_Collections_Generic_List<List<IntPoint>>_get_Count__;
      uVar5 = *(uint *)(param_1 + 0xa8);
      uVar11 = 2;
      if (param_3 <= uVar5) {
        uVar11 = param_3;
      }
      if (*(int *)(*plVar19 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02661cd8(param_3 <= uVar5,*(undefined8 *)puVar7,0);
      cVar4 = *(char *)(param_1 + 0x10);
      lVar15 = thunk_FUN_00d62348(*(undefined8 *)
                                   Method_Sirenix_Serialization_Serializer<Vector3>_WriteValue__);
      if (lVar15 == 0) goto LAB_02778a68;
      FUN_027797d8(lVar15,uVar11,param_4,4,cVar4 != '\0');
      plVar1 = (long *)(param_1 + 0x28);
      if (lVar18 != 0) {
        plVar1 = (long *)(lVar18 + 0x28);
      }
      *plVar1 = lVar15;
    }
    else {
      uVar11 = 0x7fffffff;
      lVar17 = 0;
      do {
        lVar18 = lVar13;
        if ((*(long *)(lVar18 + 0x18) == 0) || (*(long *)(lVar18 + 0x20) == 0)) goto LAB_02778a68;
        iVar2 = *(int *)(*(long *)(lVar18 + 0x20) + 0x28);
        uVar5 = *(int *)(*(long *)(lVar18 + 0x18) + 0x28) - param_3;
        bVar10 = FUN_02779924(lVar18);
        lVar15 = lVar18;
        if (((int)uVar5 < (int)uVar11 & bVar10 & -1 < (int)(iVar2 - param_4 | uVar5)) == 0) {
          lVar15 = lVar17;
          uVar5 = uVar11;
        }
        uVar11 = uVar5;
        lVar13 = *(long *)(lVar18 + 0x28);
        lVar17 = lVar15;
      } while (*(long *)(lVar18 + 0x28) != 0);
      plVar19 = (long *)StringLiteral_302;
      if (lVar15 == 0) goto LAB_02778614;
    }
    if ((*(long *)(lVar15 + 0x18) == 0) ||
       (lVar13 = *(long *)(*(long *)(lVar15 + 0x18) + 0x40), lVar13 == 0)) goto LAB_02778a68;
    FUN_02779618(&local_78,lVar13,param_3,param_7 & 1);
    if ((*(long *)(lVar15 + 0x20) == 0) ||
       (lVar13 = *(long *)(*(long *)(lVar15 + 0x20) + 0x40), lVar13 == 0)) goto LAB_02778a68;
    FUN_02779618(&local_90,lVar13,param_4,param_7 & 1);
  }
  else {
    lVar15 = *(long *)(param_1 + 0x28);
    if (lVar15 == 0) {
      FUN_02777bf8(param_1);
    }
    else {
      uVar14 = FUN_02779514(lVar13,lVar15,param_3,param_4,&local_78,&local_90,param_7 & 1);
      while ((uVar14 & 1) == 0) {
        if (lVar15 == 0) goto LAB_02778a68;
        lVar13 = *(long *)(lVar15 + 0x28);
        if (lVar13 == 0) break;
        uVar14 = FUN_02779514(uVar14,lVar13,param_3,param_4,&local_78,&local_90,param_7 & 1);
        lVar15 = lVar13;
      }
    }
    puVar6 = System_Threading_Timer_TimerComparer_TypeInfo;
    if (local_90._4_4_ == 0) {
      iVar2 = *(int *)(param_1 + 0x30) << 1;
      *(int *)(param_1 + 0x30) = iVar2;
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar16 = FUN_01772558(iVar2,param_3 << 1,0);
      *(int *)(param_1 + 0x30) = (int)uVar16;
      uVar11 = FUN_01772750(uVar16,*(undefined4 *)(param_1 + 0xa8),0);
      *(uint *)(param_1 + 0x30) = uVar11;
      uVar12 = FUN_01772558((int)(*(float *)(param_1 + 0x38) * (float)uVar11 + 0.5),param_4 << 1,0);
      if (lVar15 == 0) {
        bVar9 = true;
      }
      else {
        if (lVar15 == 0) goto LAB_02778a68;
        bVar9 = *(long *)(lVar15 + 0x28) == 0;
      }
      if (*(int *)(*plVar19 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02661ba8(bVar9,0);
      uVar3 = *(undefined4 *)(param_1 + 0x30);
      cVar4 = *(char *)(param_1 + 0x10);
      lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
      if (lVar15 == 0) goto LAB_02778a68;
      FUN_027797d8(lVar15,uVar3,uVar12,4,cVar4 != '\0');
      *(undefined8 *)(lVar15 + 0x28) = *(undefined8 *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar15;
      if ((*(long *)(lVar15 + 0x18) == 0) ||
         (lVar13 = *(long *)(*(long *)(lVar15 + 0x18) + 0x40), lVar13 == 0)) goto LAB_02778a68;
      FUN_02779618(&local_78,lVar13,param_3,param_7 & 1);
      if ((*(long *)(lVar15 + 0x20) == 0) ||
         (lVar13 = *(long *)(*(long *)(lVar15 + 0x20) + 0x40), lVar13 == 0)) goto LAB_02778a68;
      FUN_02779618(&local_90,lVar13,param_4,param_7 & 1);
      FUN_02661ba8(local_78._4_4_ != 0,0);
      FUN_02661ba8(local_90._4_4_ != 0,0);
    }
  }
  puVar6 = Method_System_Collections_Generic_List<Transform>_get_Item__;
  puVar7 = WaveFormController_<HideCoroutine>d__30_TypeInfo;
  uVar11 = local_78._4_4_;
  if (*(int *)(*plVar19 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_02661cd8(uVar11 == param_3,*(undefined8 *)puVar6,0);
  iVar2 = local_90._4_4_;
  FUN_02661cd8(local_90._4_4_ == param_4,*(undefined8 *)puVar7,0);
  if ((iVar2 != param_4) || (uVar11 != param_3)) {
    if (uStack_70 != 0) {
      if ((lVar15 == 0) || (*(long *)(lVar15 + 0x18) == 0)) goto LAB_02778a68;
      lVar13 = *(long *)(*(long *)(lVar15 + 0x18) + 0x40);
      uStack_a8 = uStack_70;
      local_b0 = local_78;
      local_a0 = local_68;
      if (lVar13 == 0) goto LAB_02778a68;
      uStack_c8 = uStack_70;
      local_d0 = local_78;
      local_c0 = local_68;
      FUN_02779754(lVar13,&local_d0);
    }
    if (uStack_88 != 0) {
      if ((lVar15 == 0) || (*(long *)(lVar15 + 0x18) == 0)) goto LAB_02778a68;
      lVar13 = *(long *)(*(long *)(lVar15 + 0x18) + 0x40);
      uStack_a8 = uStack_88;
      local_b0 = local_90;
      local_a0 = local_80;
      if (lVar13 == 0) goto LAB_02778a68;
      uStack_e8 = uStack_88;
      local_f0 = local_90;
      local_e0 = local_80;
      FUN_02779754(lVar13,&local_f0);
    }
    param_4 = 0;
    uVar11 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
  }
  uVar14 = local_78;
  if ((lVar15 != 0) && (*(long *)(lVar15 + 0x18) != 0)) {
    FUN_01282738(*(long *)(lVar15 + 0x18),local_78 & 0xffffffff,uVar11,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Body_Input_BodySkeletonMapping<OVRPlugin_BoneId>__ctor__
                );
    uVar8 = local_90;
    if (*(long *)(lVar15 + 0x20) != 0) {
      FUN_01282738(*(long *)(lVar15 + 0x20),local_90 & 0xffffffff,param_4,
                   *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcopyq_laneq_f32__);
      lVar13 = *(long *)(lVar15 + 0x18);
      if (lVar13 != 0) {
        local_b0 = 0;
        uStack_a8 = 0;
        FUN_01344298(&local_b0,*(undefined8 *)(lVar13 + 0x20),*(undefined8 *)(lVar13 + 0x28),
                     uVar14 & 0xffffffff,uVar11,
                     *(undefined8 *)
                      Method_System_Xml_Serialization_XmlReflectionImporter_ImportTypeMapping__);
        param_5[1] = uStack_a8;
        *param_5 = local_b0;
        lVar13 = *(long *)(lVar15 + 0x20);
        if (lVar13 != 0) {
          local_100 = 0;
          uStack_f8 = 0;
          FUN_01344298(&local_100,*(undefined8 *)(lVar13 + 0x20),*(undefined8 *)(lVar13 + 0x28),
                       uVar8 & 0xffffffff,param_4,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<DebugUI_Widget>_ToArray__);
          param_6[1] = uStack_f8;
          *param_6 = local_100;
          if (param_2 != 0) {
            *(long *)(param_2 + 0x50) = lVar15;
            *(undefined8 *)(param_2 + 0x28) = local_68;
            *(ulong *)(param_2 + 0x20) = uStack_70;
            *(ulong *)(param_2 + 0x18) = local_78;
            *(undefined8 *)(param_2 + 0x40) = local_80;
            *(ulong *)(param_2 + 0x38) = uStack_88;
            *(ulong *)(param_2 + 0x30) = local_90;
            *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_1 + 0x60);
            return;
          }
        }
      }
    }
  }
LAB_02778a68:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


