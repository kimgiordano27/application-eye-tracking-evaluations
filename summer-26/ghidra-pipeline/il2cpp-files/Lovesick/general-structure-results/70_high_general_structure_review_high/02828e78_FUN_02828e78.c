/*
FUNCTION_NAME: FUN_02828e78
ENTRY_POINT: 02828e78
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_02828e78(void *param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,long *param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  undefined *puVar2;
  byte bVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  void *__src;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 auStack_118 [16];
  int local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
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
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_03788c19 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovun_s32__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                      );
    DAT_03788c19 = 1;
  }
  local_50 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  memset(&local_138,0,0x98);
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovun_s32__;
  local_148 = 0;
  local_140 = 0;
  if (param_6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  __src = (void *)FUN_02749858(param_6,0);
  memmove(&local_a0,__src,0x58);
  bVar3 = *(byte *)(*(long *)puVar2 + 300);
  plVar13 = (long *)0x0;
  if ((bVar3 <= *(byte *)(*param_6 + 300)) &&
     (plVar13 = param_6,
     *(long *)(*(long *)(*param_6 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar2)) {
    plVar13 = (long *)0x0;
  }
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  local_e8 = 0;
  uStack_f0 = 0;
  local_ec = 0;
  auStack_118._0_8_ = 0;
  local_120 = 0;
  local_108 = 0;
  local_104 = 0;
  auStack_118._8_8_ = 0;
  local_138 = FUN_0274be0c(param_6,0);
  uStack_134 = param_3;
  local_130 = param_4;
  uStack_12c = param_5;
  local_128 = param_7;
  auStack_118 = FUN_028056b0(&local_a0,0);
  local_120 = FUN_027f4fcc(param_6,0);
  fVar4 = (float)FUN_02801e88(&local_a0,0);
  uVar6 = 0x7f800000;
  local_108 = -0x80000000;
  if (fVar4 != INFINITY) {
    local_108 = (int)fVar4;
  }
  local_ec = FUN_02805704(&local_a0,0);
  uVar15 = FUN_028052b8(&local_a0,0);
  local_e8 = CONCAT44(uVar6,uVar15);
  local_e0 = CONCAT44(param_5,param_4);
  uVar15 = FUN_02805934(&local_a0,0);
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar15);
  iVar5 = FUN_02805ac8(&local_a0,0);
  uStack_d8._0_5_ = CONCAT14(iVar5 == 0,(undefined4)uStack_d8);
  iVar5 = FUN_02805ac8(&local_a0,0);
  uVar15 = 0;
  if (iVar5 == 0) {
    uVar15 = FUN_0274be0c(param_6,0);
    local_148 = CONCAT44(uVar6,uVar15);
    local_140 = CONCAT44(param_5,param_4);
    uVar15 = FUN_026884c4(&local_148,0);
  }
  local_d0 = CONCAT44(local_d0._4_4_,uVar15);
  if (plVar13 == (long *)0x0) {
    bVar3 = 0;
  }
  else {
    bVar3 = FUN_02767124(plVar13,0);
    bVar3 = bVar3 & 1;
  }
  local_d0._0_5_ = CONCAT14(bVar3,(undefined4)local_d0);
  plVar7 = (long *)FUN_0274aad0(param_6,0);
  puVar1 = &local_138;
  puVar14 = (undefined4 *)0x0;
  if (plVar7 != (long *)0x0) {
    puVar14 = puVar1;
  }
  auVar16 = NEON_fmov(0x3f800000,4);
  if (plVar7 == (long *)0x0) {
    puVar14 = &local_138;
  }
  else {
    lVar10 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)
             Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
           ) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_02829104;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_00d59724(plVar7,*(long *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractorAffordanceStateProvider_<ClickAnimation>d__96_System_Collections_IEnumerator_Reset__
                          ,2);
LAB_02829104:
    iVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    puVar2 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
    ;
    if (iVar5 == 1) {
      lVar10 = *(long *)
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
      ;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar10 = *(long *)puVar2;
      }
      auVar16 = *(undefined1 (*) [16])(*(long *)(lVar10 + 0xb8) + 0x18);
    }
  }
  *(long *)(puVar14 + 0x1e) = auVar16._8_8_;
  *(long *)(puVar14 + 0x1c) = auVar16._0_8_;
  uVar6 = FUN_028053c4(&local_a0,0);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar6);
  uVar6 = FUN_02805a28(&local_a0,0);
  uStack_b8 = CONCAT44(uVar6,(undefined4)uStack_b8);
  uVar6 = FUN_0280299c(&local_a0,0);
  if (plVar13 != (long *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  local_b0 = CONCAT44(local_b0._4_4_,uVar6);
  if (plVar13 == (long *)0x0) {
    uVar9 = FUN_028221b4(0);
    *(undefined8 *)(puVar1 + 0xd) = uVar9;
    uVar9 = FUN_028221b4(0);
    *(undefined8 *)(puVar1 + 0xf) = uVar9;
    uVar9 = FUN_028221b4(0);
  }
  else {
    uVar9 = FUN_02805374(&local_a0,0);
    local_104 = (undefined4)uVar9;
    uStack_100 = (undefined4)((ulong)uVar9 >> 0x20);
    uVar9 = FUN_02805b18(&local_a0,0);
    uStack_fc = (undefined4)uVar9;
    uStack_f8 = (undefined4)((ulong)uVar9 >> 0x20);
    uVar9 = FUN_028057a4(&local_a0,0);
  }
  uStack_f4 = (undefined4)uVar9;
  uStack_f0 = (undefined4)((ulong)uVar9 >> 0x20);
  uStack_a8 = FUN_0274aad0(param_6,0);
  memcpy(param_1,&local_138,0x98);
  return;
}


