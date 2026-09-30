/*
FUNCTION_NAME: FUN_01c42d28
ENTRY_POINT: 01c42d28
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_18;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x01c43138) */

void FUN_01c42d28(undefined1 param_1 [16],ulong param_2,ulong param_3,undefined4 param_4,
                 long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  ulong uVar17;
  
  if ((DAT_03fed5a2 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed5a2 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)((long)param_5 + 0x44) == '\0') {
    return;
  }
  lVar7 = param_5[0x39];
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(lVar7,0);
  if ((uVar3 & 1) != 0) {
    if (param_5[0x39] == 0) goto LAB_01c431f4;
    uVar3 = FUN_0395a324(param_5[0x39],0);
    if ((uVar3 & 1) == 0) {
      if (param_5[0x39] == 0) goto LAB_01c431f4;
      FUN_0395a4a4(param_5[0x39],0,0);
      if (param_5[0x39] == 0) goto LAB_01c431f4;
      FUN_0395a360(param_5[0x39],1,0);
    }
  }
  lVar7 = param_5[0x3a];
  uVar4 = (**(code **)(*param_5 + 0x358))(param_5,lVar7,*(undefined8 *)(*param_5 + 0x360));
  uVar12 = (**(code **)(*param_5 + 0x198))(param_5,lVar7,uVar4,*(undefined8 *)(*param_5 + 0x1a0));
  uVar3 = param_2;
  uVar15 = param_3;
  uVar8 = FUN_01c431f8(param_5,param_5[0x3a]);
  fVar19 = (float)uVar3;
  fVar13 = (float)uVar15;
  lVar7 = FUN_0391c27c(param_5,0);
  if (lVar7 != 0) {
    fVar9 = (float)FUN_03928d34(lVar7,0);
    if (DAT_03fed25e == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25e = '\x01';
    }
    puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
    fVar18 = (float)uVar12;
    fVar14 = (float)param_2;
    fVar16 = (float)param_3;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    fVar13 = (fVar13 - fVar16) * (fVar13 - fVar16);
    fVar19 = SQRT(fVar13 + (fVar9 - fVar18) * (fVar9 - fVar18) +
                           (fVar19 - fVar14) * (fVar19 - fVar14));
    if (fVar19 <= DAT_00b551d0) {
      FUN_01c43434(uVar12,param_2,param_3,param_5);
      lVar7 = FUN_01c40b3c(param_5);
      if (lVar7 != 0) {
        FUN_039274a0(lVar7,0);
        FUN_01c43504(param_5);
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        puVar6 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        (**(code **)(*param_5 + 600))
                  (*puVar6,puVar6[1],puVar6[2],param_5,*(undefined8 *)(*param_5 + 0x260));
        lVar7 = param_5[0x3a];
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_0391f968(lVar7,0,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        plVar5 = (long *)param_5[0x3a];
        if (plVar5 != (long *)0x0) {
                    /* try { // try from 01c430e0 to 01d4318b has its CatchHandler @ 01c42ff0 */
                    /* WARNING: Could not recover jumptable at 0x01c43108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x1f8))(plVar5,param_5,*(undefined8 *)(*plVar5 + 0x200));
          return;
        }
      }
    }
    else {
      fVar9 = DAT_00b551d0;
      lVar7 = FUN_0391c27c(param_5,0);
      if (lVar7 != 0) {
        fVar10 = (float)FUN_03928d34(lVar7,0);
        fVar11 = (float)FUN_03925dbc(0);
        fVar11 = fVar11 * *(float *)(param_5 + 0xb);
        if (DAT_00b554f8 <= fVar19) {
          if (fVar11 < 0.0) {
            fVar11 = 0.0;
          }
          fVar19 = (fVar16 - fVar13) * fVar11;
          uVar17 = (ulong)(uint)fVar19;
          param_2 = (ulong)(uint)(fVar9 + (fVar14 - fVar9) * fVar11);
          param_3 = (ulong)(uint)(fVar13 + fVar19);
          FUN_01c43434(fVar10 + (fVar18 - fVar10) * fVar11,param_2,param_3,param_5);
          lVar7 = FUN_0391c27c(param_5,0);
                    /* catch() { ... } // from try @ 01c4300c with catch @ 01c43178 */
          if (lVar7 != 0) {
            uVar4 = FUN_039274a0(lVar7,0);
                    /* try { // try from 01c4318c to 01d431bb has its CatchHandler @ 01c4318c
                       catch() { ... } // from try @ 01c4318c with catch @ 01c4318c
                       catch() { ... } // from try @ 01c4343c with catch @ 01c4318c
                       catch() { ... } // from try @ 01c4351c with catch @ 01c4318c */
            FUN_03925dbc(0);
                    /* try { // try from 01c431bc to 01d431c3 has its CatchHandler @ 01c4351c */
            goto LAB_01c431c4;
          }
        }
        else {
          if (DAT_03fed51c == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed51c = '\x01';
          }
          fVar18 = fVar18 - fVar10;
          fVar14 = fVar14 - fVar9;
          fVar16 = fVar16 - fVar13;
          uVar17 = (ulong)(uint)fVar16;
          fVar19 = fVar16 * fVar16 + fVar18 * fVar18 + fVar14 * fVar14;
          if ((fVar19 != 0.0) &&
             ((fVar11 = fVar11 + fVar11, fVar11 < 0.0 || (fVar11 * fVar11 < fVar19)))) {
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            fVar19 = SQRT(fVar19);
            uVar12 = (ulong)(uint)(fVar10 + fVar11 * (fVar18 / fVar19));
            param_2 = (ulong)(uint)(fVar9 + fVar11 * (fVar14 / fVar19));
            param_3 = (ulong)(uint)(fVar13 + fVar11 * (fVar16 / fVar19));
          }
          FUN_01c43434(uVar12,param_2,param_3,param_5);
          lVar7 = FUN_0391c27c(param_5,0);
          if (lVar7 != 0) {
            uVar4 = FUN_039274a0(lVar7,0);
                    /* try { // try from 01c42ff0 to 01d4300b has its CatchHandler @ 01c42ff0
                       catch() { ... } // from try @ 01c42ff0 with catch @ 01c42ff0
                       catch() { ... } // from try @ 01c430e0 with catch @ 01c42ff0 */
            FUN_03925dbc(0);
                    /* try { // try from 01c4300c to 01d430df has its CatchHandler @ 01c43178 */
LAB_01c431c4:
                    /* try { // try from 01c431cc to 01d431cf has its CatchHandler @ 01c43554 */
            FUN_039142e8(uVar4,param_2,param_3,uVar17,uVar8,(float)uVar3,(float)uVar15,param_4,0);
            FUN_01c43504(param_5);
            return;
          }
        }
      }
    }
  }
LAB_01c431f4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


