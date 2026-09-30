/*
FUNCTION_NAME: FUN_05e5bc84
ENTRY_POINT: 05e5bc84
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_14
*/


void FUN_05e5bc84(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_066dc61d & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_144__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_145__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_146__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_147__);
    FUN_02b3c81c(
                Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
                );
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_129__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_149__);
    FUN_02b3c81c(PTR_DAT_0631eb50);
    DAT_066dc61d = 1;
  }
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__810_149__;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_129__;
  puVar1 = 
  Method_Newtonsoft_Json_Serialization_DefaultContractResolver_<>c_<GetSerializableMembers>b__40_1__
  ;
  lVar11 = *(long *)(param_1 + 0x60);
  local_70 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  plVar13 = (long *)PTR_DAT_06312d90;
  plVar18 = (long *)PTR_DAT_0631eb50;
  while (lVar11 != 0) {
    uVar12 = FUN_03f0d08c(lVar11,&local_90,*(undefined8 *)puVar4);
    if ((uVar12 & 1) == 0) {
      return;
    }
    iVar5 = FUN_03ac7100(&local_80,*(undefined8 *)puVar2);
    iVar6 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                      (&local_90,*(undefined8 *)puVar1);
    if (*(int *)(*plVar13 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*plVar13);
    }
    FUN_05c45700(0 < iVar5 != iVar6 < 1,0);
    iVar5 = FUN_03ac7100(&local_80,*(undefined8 *)puVar2);
    if ((0 < iVar5) &&
       (iVar5 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                          (&local_90,*(undefined8 *)puVar1), 0 < iVar5)) {
      uVar17 = *(undefined8 *)(param_1 + 0xb8);
      uVar7 = FUN_03ac7100(&local_80,*(undefined8 *)puVar2);
      lVar11 = *plVar18;
      uVar9 = *(undefined4 *)(param_1 + 0xf0);
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(lVar11);
        lVar11 = *plVar18;
      }
      lVar11 = FUN_05e5c1b4(param_1,uVar17,uVar7,uVar9,0,**(undefined4 **)(lVar11 + 0xb8));
      if (*(long *)(param_1 + 0x118) == 0) {
        *(long *)(param_1 + 0x118) = lVar11;
        plVar13 = (long *)(param_1 + 0x118);
      }
      else {
        if (lVar11 == 0) break;
        *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)(param_1 + 0x120);
        thunk_FUN_02bb0e9c();
        if (*(long *)(param_1 + 0x120) == 0) break;
        plVar13 = (long *)(*(long *)(param_1 + 0x120) + 0x28);
        *plVar13 = lVar11;
      }
      thunk_FUN_02bb0e9c(plVar13,lVar11);
      *(long *)(param_1 + 0x120) = lVar11;
      thunk_FUN_02bb0e9c(param_1 + 0x120,lVar11);
      uVar17 = *(undefined8 *)(param_1 + 0xc0);
      uVar14 = *(undefined8 *)(param_1 + 200);
      uVar9 = *(undefined4 *)(param_1 + 0xec);
      uVar7 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                        (&local_90,*(undefined8 *)puVar1);
      auVar19 = FUN_0322bc30(uVar17,uVar14,uVar9,uVar7,
                             *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_145__);
      uVar17 = *(undefined8 *)(param_1 + 0xd0);
      uVar14 = *(undefined8 *)(param_1 + 0xd8);
      uVar9 = *(undefined4 *)(param_1 + 0xf0);
      uVar7 = FUN_03ac7100(&local_80,*(undefined8 *)puVar2);
      auVar20 = FUN_0322bb50(uVar17,uVar14,uVar9,uVar7,
                             *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_144__);
      puVar3 = Method_OVRPlugin_<>c_<_cctor>b__810_147__;
      uVar17 = FUN_0322c2fc(local_90,uStack_88,
                            *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_147__);
      uVar17 = FUN_04dc6844(uVar17,0);
      uVar14 = FUN_0322c2fc(auVar19._0_8_,auVar19._8_8_,*(undefined8 *)puVar3);
      uVar14 = FUN_04dc6844(uVar14,0);
      uVar8 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                        (&local_90,*(undefined8 *)puVar1);
      puVar3 = Method_OVRPlugin_<>c_<_cctor>b__810_146__;
      uVar15 = FUN_0322c2f8(local_80,uStack_78,
                            *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_146__);
      uVar15 = FUN_04dc6844(uVar15,0);
      uVar16 = FUN_0322c2f8(auVar20._0_8_,auVar20._8_8_,*(undefined8 *)puVar3);
      uVar16 = FUN_04dc6844(uVar16,0);
      uVar9 = FUN_03ac7100(&local_80,*(undefined8 *)puVar2);
      plVar18 = (long *)PTR_DAT_0631eb50;
      plVar13 = (long *)PTR_DAT_06312d90;
      local_b0 = (ulong)uVar8;
      local_98 = CONCAT44((*(int *)(param_1 + 0xec) + (uint)*(ushort *)(param_1 + 0xe0)) -
                          (int)local_70,uVar9);
      local_c0 = uVar17;
      uStack_b8 = uVar14;
      uStack_a8 = uVar15;
      uStack_a0 = uVar16;
      if ((*(long *)(param_1 + 0x18) == 0) ||
         (lVar11 = *(long *)(*(long *)(param_1 + 0x18) + 0x140), lVar11 == 0)) break;
      FUN_05e5f1c0(lVar11,&local_c0,0);
      iVar5 = *(int *)(param_1 + 0xf0);
      iVar10 = FUN_03ac7100(&local_80,*(undefined8 *)puVar2);
      uVar17 = *(undefined8 *)puVar1;
      iVar6 = *(int *)(param_1 + 0xec);
      *(int *)(param_1 + 0xf0) = iVar10 + iVar5;
      iVar5 = System_Collections_Generic_ObjectEqualityComparer<Painter2D_Painter2DJobData>__IndexOf
                        (&local_90,uVar17);
      *(int *)(param_1 + 0xec) = iVar5 + iVar6;
    }
    lVar11 = *(long *)(param_1 + 0x60);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


