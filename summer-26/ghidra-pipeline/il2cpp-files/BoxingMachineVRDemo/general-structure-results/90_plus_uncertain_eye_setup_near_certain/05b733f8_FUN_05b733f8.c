/*
FUNCTION_NAME: FUN_05b733f8
ENTRY_POINT: 05b733f8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05b733f8(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint *puVar9;
  int *piVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  
                    /* try { // try from 05b733f8 to 05c73437 has its CatchHandler @ 05b73300 */
  if ((DAT_06b81c7f & 1) == 0) {
                    /* try { // try from 05b73438 to 05c7343b has its CatchHandler @ 05b73440 */
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_Cinfo_TypeInfo);
                    /* try { // try from 05b7343c to 05c73467 has its CatchHandler @ 05b73300 */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05b73438 with catch @ 05b73440
                        */
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_Dispose__
                );
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05b733ec with catch @ 05b7344c
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05b733d4 with catch @ 05b73450
                        */
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_MoveNext__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                );
                    /* try { // try from 05b73468 to 05c7346b has its CatchHandler @ 05b7348c */
    FUN_02d6084c(
                Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                );
                    /* try { // try from 05b7346c to 05c73493 has its CatchHandler @ 05b73300 */
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Collider,_IXRInteractable>_get_Current__
                );
    DAT_06b81c7f = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
                    /* catch() { ... } // from try @ 05b73468 with catch @ 05b7348c */
  local_90 = 0;
  local_d0 = 0;
                    /* try { // try from 05b73494 to 05c7349b has its CatchHandler @ 05b734b0 */
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
                    /* try { // try from 05b7349c to 05c734a7 has its CatchHandler @ 05b73300 */
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  if (param_3 == 0) {
    return;
  }
                    /* try { // try from 05b734a8 to 05c734af has its CatchHandler @ 05b734b0 */
  if (param_4 == 0) {
    return;
  }
  lVar12 = *(long *)(param_3 + 0xe0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05b73494 with catch @ 05b734b0
                       catch(type#2 @ 00000000) { ... } // from try @ 05b734a8 with catch @ 05b734b0
                        */
  if (lVar12 == 0) {
    return;
  }
                    /* try { // try from 05b734b4 to 05c7357f has its CatchHandler @ 05b734b4
                       catch() { ... } // from try @ 05b734b4 with catch @ 05b734b4
                       catch() { ... } // from try @ 05b735ac with catch @ 05b734b4
                       catch() { ... } // from try @ 05b735e8 with catch @ 05b734b4
                       catch() { ... } // from try @ 05b73610 with catch @ 05b734b4
                       catch() { ... } // from try @ 05b73648 with catch @ 05b734b4 */
  auVar13 = ZEXT816(0);
  auVar14 = ZEXT816(0);
  if (*(long *)(param_3 + 0x1a0) == 0) goto LAB_05b738bc;
  uVar5 = FUN_059e0b14(*(long *)(param_3 + 0x1a0),0);
  auVar14._8_8_ = local_70._8_8_;
  auVar14._0_8_ = local_70._0_8_;
  auVar13._8_8_ = local_80._8_8_;
  auVar13._0_8_ = local_80._0_8_;
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    if (*(long *)(param_3 + 0x1a0) == 0) goto LAB_05b738bc;
    uVar4 = FUN_059e0c5c(*(long *)(param_3 + 0x1a0),0);
    uVar4 = ~uVar4 & 1;
  }
  auVar14._8_8_ = local_70._8_8_;
  auVar14._0_8_ = local_70._0_8_;
  auVar13._8_8_ = local_80._8_8_;
  auVar13._0_8_ = local_80._0_8_;
  if (*(long *)(param_3 + 0x1a0) == 0) goto LAB_05b738bc;
  uVar2 = *(undefined4 *)(*(long *)(param_3 + 0x1a0) + 0x24);
  uVar5 = FUN_035d4864(lVar12,*(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_get_Current__
                      );
  if ((uVar5 & 1) != 0) {
    auVar13 = FUN_05b12d34(param_4,0);
    local_70 = auVar13;
    if (*(int *)(*(long *)UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_Cinfo_TypeInfo
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (DAT_06b80ff8 == '\0') {
      FUN_02d6084c(PTR_DAT_0676c4a8);
      DAT_06b80ff8 = '\x01';
    }
    puVar3 = PTR_DAT_0676c4a8;
    if (*(int *)(*(long *)PTR_DAT_0676c4a8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (DAT_06b80ff9 == '\0') {
                    /* try { // try from 05b73580 to 05c73587 has its CatchHandler @ 05b735f4 */
      FUN_02d6084c(PTR_DAT_0676c4a8);
      DAT_06b80ff9 = '\x01';
    }
    uVar1 = auVar13._0_4_ & 0xffff0000;
    if ((auVar13._0_8_ & 0xffff0000) != 0) {
      lVar6 = *(long *)puVar3;
                    /* try { // try from 05b735a0 to 05c735ab has its CatchHandler @ 05b735ec */
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar6 = *(long *)puVar3;
      }
                    /* try { // try from 05b735ac to 05c735e3 has its CatchHandler @ 05b734b4 */
      puVar9 = *(uint **)(lVar6 + 0xb8);
      if (uVar1 != *puVar9) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          puVar9 = *(uint **)(*(long *)puVar3 + 0xb8);
        }
        if (uVar1 != puVar9[1]) goto LAB_05b73680;
      }
                    /* try { // try from 05b735e4 to 05c735e7 has its CatchHandler @ 05b735f0 */
                    /* try { // try from 05b735e8 to 05c7360b has its CatchHandler @ 05b734b4 */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05b735a0 with catch @ 05b735ec
                        */
      lVar6 = FUN_035d46b8(lVar12,*(undefined8 *)
                                   Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_Dispose__
                          );
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05b735e4 with catch @ 05b735f0
                        */
      if (lVar6 != 0) {
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 05b73580 with catch @ 05b735f4
                        */
        FUN_05b13ea4(lVar6,param_3 + 0xf8,uVar4,0);
                    /* try { // try from 05b7360c to 05c7360f has its CatchHandler @ 05b73638 */
                    /* try { // try from 05b73610 to 05c7363f has its CatchHandler @ 05b734b4 */
        lVar7 = FUN_05b13b94(lVar6,uVar2,0);
        if (lVar7 != 0) {
          uVar8 = FUN_05b13b94(lVar6,uVar2,0);
          auVar13._8_8_ = local_80._8_8_;
          auVar13._0_8_ = local_80._0_8_;
          auVar14 = local_70;
          if (param_2 == 0) goto LAB_05b738bc;
          local_80 = FUN_05a6f908(param_2,uVar8,0);
          lVar6 = *(long *)(param_1 + 0x210);
          uVar8 = *(undefined8 *)(param_1 + 0x138);
          auVar14 = FUN_05b12d34(param_4,0);
          auVar13 = local_80;
          if (lVar6 == 0) goto LAB_05b738bc;
          local_70 = auVar14;
          FUN_05b9be34(lVar6,param_2,uVar8,local_80,local_70,0,0);
        }
      }
    }
  }
LAB_05b73680:
  uVar5 = FUN_035d4864(lVar12,*(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>_Dispose__
                      );
  if ((uVar5 & 1) != 0) {
    auVar13 = FUN_05b12e48(param_4,0);
    local_70 = auVar13;
    if (*(int *)(*(long *)UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_Cinfo_TypeInfo
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (DAT_06b80ff8 == '\0') {
      FUN_02d6084c(PTR_DAT_0676c4a8);
      DAT_06b80ff8 = '\x01';
    }
    puVar3 = PTR_DAT_0676c4a8;
    if (*(int *)(*(long *)PTR_DAT_0676c4a8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (DAT_06b80ff9 == '\0') {
      FUN_02d6084c(PTR_DAT_0676c4a8);
      DAT_06b80ff9 = '\x01';
    }
    uVar1 = (uint)(ushort)local_70._2_2_;
    if (local_70._2_2_ != 0) {
      lVar6 = *(long *)puVar3;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar6 = *(long *)puVar3;
      }
      piVar10 = *(int **)(lVar6 + 0xb8);
      if (uVar1 << 0x10 != *piVar10) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          piVar10 = *(int **)(*(long *)puVar3 + 0xb8);
        }
        if (uVar1 << 0x10 != piVar10[1]) {
          return;
        }
      }
      lVar12 = FUN_035d46b8(lVar12,*(undefined8 *)
                                    Method_System_Collections_Generic_List_Enumerator<XRInteractionGroup_GroupMemberAndOverridesPair>_MoveNext__
                           );
      if (lVar12 != 0) {
        auVar13 = local_80;
        auVar14 = local_70;
        if (*(long *)(param_1 + 0x218) != 0) {
          if (*(char *)(*(long *)(param_1 + 0x218) + 0xcc) == '\0') {
            local_90 = *(undefined4 *)(param_3 + 0x128);
            uStack_a8 = *(ulong *)(param_3 + 0x110);
            local_b0 = *(undefined8 *)(param_3 + 0x108);
            uStack_98 = *(undefined8 *)(param_3 + 0x120);
            uStack_a0 = *(undefined8 *)(param_3 + 0x118);
            uStack_b8 = *(undefined8 *)(param_3 + 0x100);
            local_c0 = *(undefined8 *)(param_3 + 0xf8);
            puVar11 = &local_c0;
            FUN_0604ee20(&local_c0,0x31,0);
            uStack_a8 = uStack_a8 & 0xffffffff;
          }
          else {
            local_d0 = *(undefined4 *)(param_3 + 0x128);
            uStack_e8 = *(undefined8 *)(param_3 + 0x110);
            local_f0 = *(undefined8 *)(param_3 + 0x108);
            uStack_d8 = *(undefined8 *)(param_3 + 0x120);
            uStack_e0 = *(undefined8 *)(param_3 + 0x118);
            uStack_f8 = *(undefined8 *)(param_3 + 0x100);
            local_100 = *(undefined8 *)(param_3 + 0xf8);
            puVar11 = &local_100;
            FUN_0604ee20(&local_100,0,0);
          }
          FUN_05b1444c(lVar12,puVar11,uVar4,0);
          lVar6 = FUN_05b14148(lVar12,uVar2,0);
          if (lVar6 == 0) {
            return;
          }
          uVar8 = FUN_05b14148(lVar12,uVar2,0);
          auVar13 = local_80;
          auVar14 = local_70;
          if (param_2 != 0) {
            auVar15 = FUN_05a6f908(param_2,uVar8,0);
            lVar12 = *(long *)(param_1 + 0x218);
            uVar8 = *(undefined8 *)(param_1 + 0x138);
            auVar16 = FUN_05b12e48(param_4,0);
            auVar13 = local_80;
            auVar14 = local_70;
            if (lVar12 != 0) {
              FUN_05b9cc20(lVar12,param_2,uVar8,auVar15._0_8_,auVar15._8_8_,auVar16._0_8_,
                           auVar16._8_8_,0,
                           *(undefined8 *)
                            Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<Collider,_IXRInteractable>_get_Current__
                           ,0);
              return;
            }
          }
        }
LAB_05b738bc:
        local_80 = auVar13;
        local_70 = auVar14;
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
    }
  }
  return;
}


