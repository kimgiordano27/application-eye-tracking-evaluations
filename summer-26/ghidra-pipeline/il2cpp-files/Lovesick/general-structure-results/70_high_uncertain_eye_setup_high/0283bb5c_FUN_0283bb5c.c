/*
FUNCTION_NAME: FUN_0283bb5c
ENTRY_POINT: 0283bb5c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0283bb5c(long param_1,long *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 uVar19;
  int iVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  long *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulong uStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  if ((DAT_03788ccf & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4159);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_153__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9967);
    thunk_FUN_00d48444(PTR_DAT_033ec3c8);
    DAT_03788ccf = 1;
  }
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    lVar14 = *param_2;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)StringLiteral_4159) {
          puVar13 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_0283bc4c;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(param_2,*(long *)StringLiteral_4159,0);
LAB_0283bc4c:
    puVar4 = Method_OVRPlugin_<>c_<_cctor>b__796_153__;
    iVar8 = (*(code *)*puVar13)(param_2,puVar13[1]);
    puVar5 = StringLiteral_9967;
    puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    iVar8 = iVar8 - param_3;
    if (7 < iVar8) {
      iVar8 = 8;
    }
    iVar8 = iVar8 + param_3;
    if (param_3 < iVar8) {
      uVar21 = 0;
      iVar20 = param_3;
      do {
        lVar15 = *param_2;
        lVar14 = *(long *)puVar4;
        uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar16 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar14) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0283bce0;
            }
            uVar16 = uVar16 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar16 != 0);
        }
        puVar13 = (undefined8 *)FUN_00d59724(param_2,lVar14,0);
LAB_0283bce0:
        (*(code *)*puVar13)(&local_118,param_2,iVar20,puVar13[1]);
        plVar6 = local_118;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar16 = FUN_02681b9c(plVar6,0,0);
        if ((uVar16 & 1) != 0) {
          lVar14 = *(long *)puVar5;
          lVar15 = *(long *)(param_1 + 0x20);
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar14 = *(long *)puVar5;
          }
          lVar14 = **(long **)(lVar14 + 0xb8);
          if (lVar14 == 0) goto LAB_0283c070;
          if (*(uint *)(lVar14 + 0x18) <= uVar21) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          if (lVar15 == 0) goto LAB_0283c070;
          FUN_0267c194(lVar15,*(undefined4 *)(lVar14 + (long)(int)uVar21 * 4 + 0x20),plVar6,0);
        }
        iVar20 = iVar20 + 1;
        uVar21 = uVar21 + 1;
      } while (iVar20 < iVar8);
    }
    uVar19 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_033ec3c8 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_02857318(uVar19,0);
    FUN_02680f04(7,0);
    if (param_3 < iVar8) {
      iVar20 = 0;
      uVar16 = (ulong)&local_e0 | 8;
      do {
        lVar15 = *param_2;
        lVar14 = *(long *)puVar4;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar14) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_0283be0c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar13 = (undefined8 *)FUN_00d59724(param_2,lVar14,0);
LAB_0283be0c:
        (*(code *)*puVar13)(&local_118,param_2,param_3,puVar13[1]);
        uStack_d8 = uStack_110;
        local_e0 = local_118;
        uStack_c8 = uStack_100;
        local_d0 = local_108;
        uStack_b8 = uStack_f0;
        local_c0 = local_f8;
        local_b0 = local_e8;
        if (local_118 == (long *)0x0) goto LAB_0283c070;
        iVar9 = (**(code **)(*local_118 + 0x188))(local_118,*(undefined8 *)(*local_118 + 400));
        if (local_e0 == (long *)0x0) goto LAB_0283c070;
        iVar10 = (**(code **)(*local_e0 + 0x1a8))(local_e0,*(undefined8 *)(*local_e0 + 0x1b0));
        iVar12 = (int)uStack_c8;
        iVar1 = (int)uStack_c8 - (int)local_c0;
        iVar2 = uStack_c8._4_4_ - (int)local_c0;
        iVar11 = FUN_02686d10(uVar16,0);
        iVar7 = uStack_c8._4_4_;
        fVar22 = (float)(iVar11 + iVar12 + (int)local_c0);
        iVar12 = FUN_02686d20(uVar16,0);
        fVar24 = (float)(iVar12 + iVar7 + (int)local_c0);
        iVar12 = FUN_02686cf0(uVar16,0);
        fVar28 = (1.0 / (float)iVar9) * (float)(iVar12 - (int)local_c0);
        iVar12 = FUN_02686d00(uVar16,0);
        fVar25 = (1.0 / (float)iVar10) * (float)(iVar12 - (int)local_c0);
        iVar12 = FUN_02686df8(uVar16,0);
        fVar26 = (1.0 / (float)iVar9) * (float)((int)local_c0 + iVar12);
        iVar9 = FUN_02686e5c(uVar16,0);
        fVar23 = (1.0 / (float)iVar10) * (float)((int)local_c0 + iVar9);
        FUN_02680b14(local_c0._4_4_,uStack_b8 & 0xffffffff,uStack_b8._4_4_,(undefined4)local_b0,0);
        fVar27 = (float)iVar20;
        FUN_02680a28(fVar28,fVar25,fVar27,0);
        FUN_026809d8((float)iVar1,(float)iVar2,0,0);
        FUN_02680b14(local_c0._4_4_,uStack_b8 & 0xffffffff,uStack_b8._4_4_,(undefined4)local_b0,0);
        FUN_02680a28(fVar28,fVar23,fVar27,0);
        FUN_026809d8((float)iVar1,fVar24,0,0);
        FUN_02680b14(local_c0._4_4_,uStack_b8 & 0xffffffff,uStack_b8._4_4_,(undefined4)local_b0,0);
        FUN_02680a28(fVar26,fVar23,fVar27,0);
        FUN_026809d8(fVar22,fVar24,0,0);
        FUN_02680b14(local_c0._4_4_,uStack_b8 & 0xffffffff,uStack_b8._4_4_,(undefined4)local_b0,0);
        FUN_02680a28(fVar26,fVar25,fVar27,0);
        FUN_026809d8(fVar22,(float)iVar2,0,0);
        param_3 = param_3 + 1;
        iVar20 = iVar20 + 1;
      } while (param_3 < iVar8);
    }
    FUN_02680f40(0);
    return;
  }
LAB_0283c070:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


