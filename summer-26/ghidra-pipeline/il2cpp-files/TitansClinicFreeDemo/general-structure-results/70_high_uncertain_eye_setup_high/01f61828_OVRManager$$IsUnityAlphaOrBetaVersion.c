/*
FUNCTION_NAME: OVRManager$$IsUnityAlphaOrBetaVersion
ENTRY_POINT: 01f61828
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
OVRManager__IsUnityAlphaOrBetaVersion(short *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  long unaff_x22;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 in_stack_00000008;
  uint in_stack_00000018;
  ushort uStack000000000000001c;
  
  if ((*(byte *)(unaff_x22 + 0xcca) & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b9de8);
    thunk_FUN_01279b34(PTR_DAT_027c0be8);
    thunk_FUN_01279b34(PTR_DAT_027c0bf0);
    *(undefined1 *)(unaff_x22 + 0xcca) = 1;
  }
  _uStack000000000000001c = 0;
  in_stack_00000008 = 0;
  uVar7 = (uint)param_2;
  if (uVar7 == 0) goto LAB_01f61af0;
  puVar6 = (undefined8 *)PTR_DAT_027c0bf0;
  if (*param_1 == 0x28) {
    if ((uVar7 != 0x26) || (param_1[0x25] != 0x29)) goto LAB_01f61ac4;
LAB_01f618b4:
    uVar5 = 1;
  }
  else {
    if (*param_1 == 0x7b) {
      if ((uVar7 != 0x26) || (param_1[0x25] != 0x7d)) goto LAB_01f61ac4;
      goto LAB_01f618b4;
    }
    if (uVar7 != 0x24) goto LAB_01f61ac4;
    uVar5 = 0;
  }
  if ((uVar5 | 8) < uVar7) {
    puVar6 = (undefined8 *)PTR_DAT_027c0be8;
    if (param_1[uVar5 | 8] == 0x2d) {
      if (uVar7 <= uVar5 + 0xd) goto LAB_01f61af0;
      if (param_1[uVar5 + 0xd] == 0x2d) {
        if (uVar7 <= (uVar5 | 0x12)) goto LAB_01f61af0;
        if (param_1[uVar5 | 0x12] == 0x2d) {
          if (uVar7 <= uVar5 + 0x17) goto LAB_01f61af0;
          if (param_1[uVar5 + 0x17] == 0x2d) {
            in_stack_00000018 = uVar5;
            uVar4 = FUN_01f628f0(param_1,param_2,&stack0x00000018,8,0x2000,&stack0x0000001c,param_3)
            ;
            if ((uVar4 & 1) == 0) {
              return 0;
            }
            *param_3 = _uStack000000000000001c;
            in_stack_00000018 = in_stack_00000018 + 1;
            uVar4 = FUN_01f628f0(param_1,param_2,&stack0x00000018,4,0x2000,&stack0x0000001c,param_3)
            ;
            if ((uVar4 & 1) == 0) {
              return 0;
            }
            *(short *)(param_3 + 1) = (short)_uStack000000000000001c;
            in_stack_00000018 = in_stack_00000018 + 1;
            uVar4 = FUN_01f628f0(param_1,param_2,&stack0x00000018,4,0x2000,&stack0x0000001c,param_3)
            ;
            if ((uVar4 & 1) == 0) {
              return 0;
            }
            *(short *)((long)param_3 + 6) = (short)_uStack000000000000001c;
            in_stack_00000018 = in_stack_00000018 + 1;
            uVar4 = FUN_01f628f0(param_1,param_2,&stack0x00000018,4,0x2000,&stack0x0000001c,param_3)
            ;
            if ((uVar4 & 1) == 0) {
              return 0;
            }
            iVar1 = in_stack_00000018 + 1;
            in_stack_00000018 = iVar1;
            uVar4 = FUN_01f627a0(param_1,param_2,&stack0x00000018,0x2000,&stack0x00000008,param_3);
            lVar3 = _UNK_00746b88;
            lVar2 = _DAT_00746b80;
            if ((uVar4 & 1) == 0) {
              return 0;
            }
            puVar6 = (undefined8 *)PTR_DAT_027c0bf0;
            if (in_stack_00000018 - iVar1 == 0xc) {
              *(ushort *)(param_3 + 2) = uStack000000000000001c >> 8 | uStack000000000000001c << 8;
              auVar8._0_8_ = -lVar2;
              auVar8._8_8_ = -lVar3;
              auVar10._0_8_ = -_DAT_00746570;
              auVar10._8_8_ = -_UNK_00746578;
              auVar9._8_8_ = in_stack_00000008;
              auVar9._0_8_ = in_stack_00000008;
              auVar9 = NEON_ushl(auVar9,auVar8,8);
              auVar11._8_8_ = in_stack_00000008;
              auVar11._0_8_ = in_stack_00000008;
              auVar11 = NEON_ushl(auVar11,auVar10,8);
              *(char *)((long)param_3 + 0xe) = (char)((ulong)in_stack_00000008 >> 8);
              *(char *)((long)param_3 + 0xf) = (char)in_stack_00000008;
              *(uint *)((long)param_3 + 10) =
                   CONCAT13(auVar11[8],CONCAT12(auVar11[0],CONCAT11(auVar9[8],auVar9[0])));
              return 1;
            }
          }
        }
      }
    }
LAB_01f61ac4:
    FUN_01f63b18(param_3,2,*puVar6,0);
    return 0;
  }
LAB_01f61af0:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


