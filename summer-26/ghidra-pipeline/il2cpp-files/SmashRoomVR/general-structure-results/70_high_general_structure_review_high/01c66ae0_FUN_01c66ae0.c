/*
FUNCTION_NAME: FUN_01c66ae0
ENTRY_POINT: 01c66ae0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


ulong FUN_01c66ae0(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 extraout_d0;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  if ((DAT_03fed6e1 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_493402F3E4397B2945B16273E795816C0BDF80F76F42FCAA75F3DF2E215ABC1B
                      );
    thunk_FUN_01ad9084(StringLiteral_207);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__);
    thunk_FUN_01ad9084(Method_SaveSystem_<>c__DisplayClass10_0_<LoadItems>b__0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_D9D05356900CBD90C107CDBD184BC94526EC3F9228772F900FC7C60E3FE82B5A
                      );
    DAT_03fed6e1 = 1;
  }
  iVar1 = *(int *)(param_4 + 0x10);
  uVar5 = 0;
  if (iVar1 == 2) {
    uVar18 = 0xffffffff;
LAB_01c66f30:
    *(undefined4 *)(param_4 + 0x10) = uVar18;
    return uVar5;
  }
  lVar13 = *(long *)(param_4 + 0x20);
  if (iVar1 == 1) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar13 != 0) {
      lVar6 = FUN_0391c27c(lVar13,0);
      uVar5 = 0;
      if (lVar6 != 0) {
        uVar16 = FUN_03928d34(lVar6,0);
        uVar18 = *(undefined4 *)(lVar13 + 0x20);
        if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ +
                    0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar6 = FUN_03958084(uVar16,param_2,param_3,uVar18,0);
        puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__;
        puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
        uVar5 = 0;
        if (lVar6 != 0) {
          uVar10 = *(uint *)(lVar6 + 0x18);
          if (0 < (int)uVar10) {
            uVar14 = 0;
            do {
              if (uVar10 <= uVar14) goto LAB_01c66f60;
              lVar12 = *(long *)(lVar6 + (long)(int)uVar14 * 8 + 0x20);
              uVar5 = 0;
              if (lVar12 == 0) goto LAB_01c66f5c;
              lVar12 = FUN_01e8a9f8(lVar12,*(undefined8 *)puVar3);
              uVar16 = param_2;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*(long *)puVar2);
                uVar16 = param_2;
              }
              uVar5 = FUN_0391f968(lVar12,0,0);
              param_2 = uVar16;
              if ((uVar5 & 1) != 0) {
                uVar18 = *(undefined4 *)(lVar13 + 0x28);
                lVar9 = FUN_0391c27c(lVar13,0);
                uVar5 = 0;
                if ((lVar9 == 0) || (uVar5 = FUN_03928d34(lVar9,0), lVar12 == 0)) goto LAB_01c66f5c;
                param_2 = extraout_d0;
                FUN_0395b334(uVar18,extraout_d0,uVar16,param_3,*(undefined4 *)(lVar13 + 0x20),
                             *(undefined4 *)(lVar13 + 0x2c),lVar12,0);
                param_3 = uVar16;
              }
              uVar10 = *(uint *)(lVar6 + 0x18);
              uVar14 = uVar14 + 1;
            } while ((int)uVar14 < (int)uVar10);
          }
          *(undefined8 *)(param_4 + 0x18) = 0;
          thunk_FUN_01b4f09c((undefined8 *)(param_4 + 0x18),0);
          uVar5 = 1;
          uVar18 = 2;
          goto LAB_01c66f30;
        }
      }
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar13 != 0) {
      lVar6 = FUN_0391c27c(lVar13,0);
      uVar5 = 0;
      if (lVar6 != 0) {
        uVar16 = FUN_03928d34(lVar6,0);
        uVar18 = *(undefined4 *)(lVar13 + 0x20);
        if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectField_<>c_<DescribeFields>b__0_6__ +
                    0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar7 = FUN_03958084(uVar16,param_2,param_3,uVar18,0);
        puVar4 = 
        Field_<PrivateImplementationDetails>_493402F3E4397B2945B16273E795816C0BDF80F76F42FCAA75F3DF2E215ABC1B
        ;
        puVar3 = Method_SaveSystem_<>c__DisplayClass10_0_<LoadItems>b__0__;
        puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
        uVar18 = DAT_00b55290;
        uVar5 = uVar7;
        if (uVar7 != 0) {
          if (0 < (int)*(ulong *)(uVar7 + 0x18)) {
            uVar15 = 0;
            uVar11 = *(ulong *)(uVar7 + 0x18) & 0xffffffff;
            do {
              if (uVar11 <= uVar15) {
LAB_01c66f60:
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              if (0.0 < *(float *)(lVar13 + 0x24)) {
                lVar6 = *(long *)(uVar7 + 0x20 + uVar15 * 8);
                if (lVar6 == 0) goto LAB_01c66f5c;
                plVar8 = (long *)FUN_01e8a9f8(lVar6,*(undefined8 *)puVar4);
                lVar12 = *(long *)puVar2;
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(lVar12);
                }
                uVar5 = FUN_03923030(plVar8,0);
                if ((uVar5 & 1) != 0) {
                  uVar16 = FUN_01e8a9f8(lVar6,*(undefined8 *)StringLiteral_207);
                  lVar12 = *(long *)puVar2;
                  if (*(int *)(lVar12 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(lVar12);
                  }
                  uVar5 = FUN_0391f968(uVar16,0,0);
                  if ((uVar5 & 1) == 0) {
                    uVar17 = *(undefined4 *)(lVar13 + 0x24);
                    lVar12 = FUN_0391c27c(lVar13,0);
                    uVar5 = 0;
                    if (lVar12 == 0) goto LAB_01c66f5c;
                    FUN_03928d34(lVar12,0);
                    FUN_0395b4d8(lVar6,0);
                    local_90 = 0;
                    uStack_88 = 0;
                    FUN_02d0b20c(&local_90,*(undefined8 *)puVar3);
                    lVar12 = FUN_0391c27c(lVar13,0);
                    uVar5 = 0;
                    if (lVar12 == 0) goto LAB_01c66f5c;
                    FUN_03928ef4(lVar12,0);
                    local_a0 = 0;
                    uStack_98 = 0;
                    FUN_02d0b20c(&local_a0,*(undefined8 *)puVar3);
                    uVar16 = FUN_0391c2b8(lVar13,0);
                    uVar5 = FUN_0391c2b8(lVar6,0);
                    if (plVar8 == (long *)0x0) goto LAB_01c66f5c;
                    uVar5 = (**(code **)(*plVar8 + 0x188))
                                      (uVar17,plVar8,local_90,uStack_88,local_a0,uStack_98,1,uVar16,
                                       uVar5,*(undefined8 *)(*plVar8 + 400));
                  }
                  else {
                    uVar16 = FUN_01c66888(uVar18,lVar13,plVar8);
                    uVar5 = FUN_03920cb0(lVar13,uVar16,0);
                  }
                }
              }
              uVar11 = (ulong)*(uint *)(uVar7 + 0x18);
              uVar15 = uVar15 + 1;
            } while ((long)uVar15 < (long)(int)*(uint *)(uVar7 + 0x18));
          }
          uVar16 = thunk_FUN_01afaadc(*(undefined8 *)
                                       Field_<PrivateImplementationDetails>_D9D05356900CBD90C107CDBD184BC94526EC3F9228772F900FC7C60E3FE82B5A
                                     );
          FUN_03924d68(uVar16,0);
          *(undefined8 *)(param_4 + 0x18) = uVar16;
          thunk_FUN_01b4f09c((undefined8 *)(param_4 + 0x18),uVar16);
          uVar18 = 1;
          uVar5 = 1;
          goto LAB_01c66f30;
        }
      }
    }
  }
LAB_01c66f5c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178(uVar5);
}


