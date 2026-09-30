/*
FUNCTION_NAME: FUN_0680ed9c
ENTRY_POINT: 0680ed9c
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ray_or_cast_sink_hits_4;telemetry_or_network_hits_6
*/


long FUN_0680ed9c(long param_1,int param_2,int param_3,long *param_4,undefined8 param_5,uint param_6
                 )

{
  undefined8 *__dest;
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1d8 [80];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 auStack_178 [2];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [80];
  undefined1 auStack_d0 [80];
  
  if ((bRam00000000071d68ca & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d02708);
    FUN_02f07e70(RootMotion_FinalIK_Grounding_Pelvis_TypeInfo);
    FUN_02f07e70(
                System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanDouble_TypeInfo
                );
    FUN_02f07e70(System_Net_FtpWebRequest_RequestStage_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d01e20);
    FUN_02f07e70(RootMotion_FinalIK_Grounding_OnRaycastDelegate_TypeInfo);
    FUN_02f07e70(RootMotion_FinalIK_Grounding_OnSphereCastDelegate_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d02180);
    FUN_02f07e70(UnityEngine_UIElements_UnsignedIntegerField_TypeInfo);
    bRam00000000071d68ca = 1;
  }
  auStack_178[0] = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  lVar10 = FUN_0680ebb0(param_1);
  auVar3._8_8_ = auStack_160._8_8_;
  auVar3._0_8_ = auStack_160._0_8_;
  auVar2._8_8_ = auStack_170._8_8_;
  auVar2._0_8_ = auStack_170._0_8_;
  if ((param_2 == 0) || (param_3 == 0)) {
    if (lVar10 != 0) {
      FUN_068b6720(lVar10,0,0,0,0,0);
      return lVar10;
    }
    goto LAB_0680f25c;
  }
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  auStack_170 = auVar2;
  auStack_160 = auVar3;
  if (*(long *)(param_1 + 0xd0) == 0) goto LAB_0680f25c;
  auStack_170 = FUN_046a3f30(*(long *)(param_1 + 0xd0),param_2,
                             *(undefined8 *)RootMotion_FinalIK_Grounding_OnRaycastDelegate_TypeInfo)
  ;
  if (*(long *)(param_1 + 0xd8) == 0) goto LAB_0680f25c;
  auStack_160 = FUN_046a3880(*(long *)(param_1 + 0xd8),param_3,
                             *(undefined8 *)
                              RootMotion_FinalIK_Grounding_OnSphereCastDelegate_TypeInfo);
  uStack_150 = param_5;
  thunk_FUN_02f411dc(&uStack_150,param_5);
  uStack_138 = *(undefined8 *)(param_1 + 0xc0);
  __dest = (undefined8 *)(param_1 + 0x30);
  uStack_130 = ((ulong)CONCAT31(uStack_130._5_3_,(char)param_6) & 0xffffff01) << 0x20;
  uStack_128 = NEON_rev64(*(undefined8 *)(param_1 + 0xb8),4);
  memcpy(__dest,auStack_170,0x50);
  thunk_FUN_02f411dc(param_1 + 0x50,0);
  puVar6 = System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanDouble_TypeInfo;
  iVar7 = FUN_042e0d5c(__dest,*(undefined8 *)
                               System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanDouble_TypeInfo
                      );
  if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02708);
  }
  FUN_06694778(iVar7 == param_2,0);
  puVar5 = System_Net_FtpWebRequest_RequestStage_TypeInfo;
  iVar7 = FUN_042dd880(param_1 + 0x40,*(undefined8 *)System_Net_FtpWebRequest_RequestStage_TypeInfo)
  ;
  FUN_06694778(iVar7 == param_3,0);
  if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar11 = FUN_066c971c(param_4,0,0);
  fVar18 = 1.0;
  fVar19 = 0.0;
  if ((uVar11 & 1) == 0) {
LAB_0680f108:
    fVar20 = 0.0;
    fVar21 = 1.0;
  }
  else {
    if (((param_6 >> 1 & 1) != 0) || (plVar12 = *(long **)(param_1 + 0x20), plVar12 == (long *)0x0))
    {
LAB_0680f074:
      puVar4 = UnityEngine_UIElements_UnsignedIntegerField_TypeInfo;
      if (*(int *)(*(long *)UnityEngine_UIElements_UnsignedIntegerField_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      if (DAT_071d6425 == '\0') {
        FUN_02f07e70(UnityEngine_UIElements_UnsignedIntegerField_TypeInfo);
        DAT_071d6425 = '\x01';
      }
      lVar15 = *(long *)puVar4;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar15 = *(long *)puVar4;
      }
      if (**(long **)(lVar15 + 0xb8) == 0) goto LAB_0680f25c;
      uVar8 = FUN_068ba240(**(long **)(lVar15 + 0xb8),param_4,0);
      *(undefined4 *)(param_1 + 0x70) = 2;
      *(undefined4 *)(param_1 + 0x5c) = uVar8;
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_0680f25c;
      FUN_067f9404(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x110),param_4,uVar8,0,0);
      goto LAB_0680f108;
    }
    if (param_4 == (long *)0x0) {
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = param_4;
      if (*param_4 != *(long *)PTR_DAT_06d02180) {
        plVar13 = (long *)0x0;
      }
    }
    uVar11 = (**(code **)(*plVar12 + 0x178))
                       (plVar12,*(undefined8 *)(param_1 + 0x110),plVar13,auStack_178,&uStack_188,
                        *(undefined8 *)(*plVar12 + 0x180));
    if ((uVar11 & 1) == 0) goto LAB_0680f074;
    *(undefined4 *)(param_1 + 0x70) = 3;
    *(undefined4 *)(param_1 + 0x5c) = auStack_178[0];
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_0680f25c;
    fVar21 = (float)uStack_180._4_4_;
    fVar18 = (float)(int)uStack_180;
    fVar20 = (float)uStack_188._4_4_;
    fVar19 = (float)(int)uStack_188;
    FUN_067f9404(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x110),param_4,auStack_178[0],1
                 ,0);
  }
  if (lVar10 != 0) {
    FUN_068b673c(fVar19,fVar20,fVar18,fVar21,lVar10,*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                 *(undefined8 *)(param_1 + 0x48),0);
    lVar15 = *(long *)(param_1 + 0x18);
    memcpy(auStack_1d8,__dest,0x50);
    if (lVar15 != 0) {
      lVar16 = *(long *)RootMotion_FinalIK_Grounding_Pelvis_TypeInfo;
      memcpy(auStack_120,auStack_1d8,0x50);
      lVar14 = *(long *)(lVar15 + 0x10);
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar14 != 0) {
        uVar1 = *(uint *)(lVar15 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar15 + 0x18) = uVar1 + 1;
          lVar14 = lVar14 + (long)(int)uVar1 * 0x50;
          memcpy((void *)(lVar14 + 0x20),auStack_120,0x50);
          thunk_FUN_02f411dc(lVar14 + 0x40,0);
        }
        else {
          uVar17 = *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
          memcpy(auStack_d0,auStack_120,0x50);
          FUN_04168070(lVar15,auStack_d0,uVar17);
        }
        iVar7 = *(int *)(param_1 + 0x118);
        iVar9 = FUN_042e0d5c(__dest,*(undefined8 *)puVar6);
        *(int *)(param_1 + 0x118) = iVar9 + iVar7;
        iVar7 = *(int *)(param_1 + 0x11c);
        iVar9 = FUN_042dd880(param_1 + 0x40,*(undefined8 *)puVar5);
        *(int *)(param_1 + 0x11c) = iVar9 + iVar7;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *__dest = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x58) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
        *(undefined8 *)(param_1 + 0x68) = 0;
        *(undefined8 *)(param_1 + 0x60) = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined8 *)(param_1 + 0x70) = 0;
        return lVar10;
      }
    }
  }
LAB_0680f25c:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


