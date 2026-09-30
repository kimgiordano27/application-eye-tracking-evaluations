/*
FUNCTION_NAME: FUN_01c45bb0
ENTRY_POINT: 01c45bb0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_19;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x01c45db4) */
/* WARNING: Removing unreachable block (ram,0x01c45f90) */

void FUN_01c45bb0(undefined1 param_1 [16],ulong param_2,ulong param_3,undefined8 param_4,
                 long *param_5)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  if ((DAT_03fed5b0 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed5b0 = 1;
  }
  fVar9 = (float)FUN_03925ca4(0);
  fVar20 = *(float *)((long)param_5 + 0xfc);
  fVar21 = *(float *)(param_5 + 0xb);
  fVar22 = *(float *)(param_5 + 0x21);
  uVar12 = FUN_01c45528(param_5);
  uVar14 = param_2;
  uVar16 = param_3;
  lVar3 = FUN_01c40b3c(param_5);
  puVar2 = 
  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__;
  if (lVar3 != 0) {
    uVar10 = FUN_039274a0(lVar3,0);
    uVar6 = uVar14;
    uVar17 = uVar16;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_038f032c(0);
    uVar15 = uVar6;
    uVar19 = uVar17;
    if ((uVar4 & 1) != 0) {
      uVar12 = (**(code **)(*param_5 + 0x338))(param_5,*(undefined8 *)(*param_5 + 0x340));
      uVar5 = (**(code **)(*param_5 + 0x358))(param_5,uVar12,*(undefined8 *)(*param_5 + 0x360));
      uVar12 = (**(code **)(*param_5 + 0x198))
                         (param_5,uVar12,uVar5,*(undefined8 *)(*param_5 + 0x1a0));
      uVar15 = uVar6;
      uVar19 = uVar17;
      FUN_01c46070(param_5,0);
      param_3 = uVar17;
      param_2 = uVar6;
    }
    fVar18 = (float)uVar19;
    fVar13 = (float)uVar15;
    if (*(int *)((long)param_5 + 0x54) == 1) {
      lVar3 = FUN_01c40b3c(param_5);
      if (lVar3 != 0) {
        FUN_03928d34(lVar3,0);
        FUN_01c43434(param_5);
        lVar3 = FUN_01c40b3c(param_5);
        if (lVar3 != 0) {
          FUN_039274a0(lVar3,0);
LAB_01c45ed0:
          FUN_01c43504(param_5);
          return;
        }
      }
    }
    else {
      if (*(int *)((long)param_5 + 0x54) != 0) {
        return;
      }
      uVar5 = (**(code **)(*param_5 + 0x338))(param_5,*(undefined8 *)(*param_5 + 0x340));
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar6 = FUN_0391f968(uVar5,0,0);
      if ((uVar6 & 1) == 0) {
        FUN_01c43434(uVar12,param_2,param_3,param_5);
        lVar3 = FUN_0391c27c(param_5,0);
        lVar7 = FUN_01c40b3c(param_5);
        if (lVar7 == 0) goto LAB_01c4602c;
        FUN_03928fd8(lVar7,0);
      }
      else {
        cVar1 = *(char *)((long)param_5 + 0x75);
        fVar22 = ((fVar9 - fVar20) * fVar21) / fVar22;
        lVar3 = FUN_0391c27c(param_5,0);
        if (cVar1 == '\0') {
          if (lVar3 != 0) {
            fVar9 = (float)FUN_03928d34(lVar3,0);
            if (fVar22 < 0.0) {
              fVar22 = 0.0;
            }
            fVar20 = fVar22 * ((float)param_3 - fVar18);
            uVar15 = (ulong)(uint)fVar20;
            uVar6 = (ulong)(uint)(fVar13 + fVar22 * ((float)param_2 - fVar13));
            uVar17 = (ulong)(uint)(fVar18 + fVar20);
            FUN_01c43434(fVar9 + fVar22 * ((float)uVar12 - fVar9),uVar6,uVar17,param_5);
            lVar3 = FUN_0391c27c(param_5,0);
            if (lVar3 != 0) {
              uVar12 = FUN_039274a0(lVar3,0);
              FUN_03925cf4(0);
              FUN_03914490(uVar12,uVar6,uVar17,uVar15,uVar10,uVar14 & 0xffffffff,uVar16 & 0xffffffff
                           ,param_4,0);
              goto LAB_01c45ed0;
            }
          }
          goto LAB_01c4602c;
        }
        lVar7 = FUN_0391c27c(param_5,0);
        if (lVar7 == 0) goto LAB_01c4602c;
        fVar21 = (float)FUN_03928280(lVar7,0);
        fVar9 = fVar18;
        fVar20 = fVar13;
        if (DAT_03fed257 == '\0') {
                    /* catch() { ... } // from try @ 01c458f4 with catch @ 01c45d7c */
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
                    /* try { // try from 01c45d90 to 01d45db3 has its CatchHandler @ 01c45d90
                       catch() { ... } // from try @ 01c45d90 with catch @ 01c45d90
                       catch() { ... } // from try @ 01c45dbc with catch @ 01c45d90 */
        pfVar8 = *(float **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        fVar23 = *pfVar8;
        fVar24 = pfVar8[1];
        fVar25 = pfVar8[2];
        fVar11 = (float)FUN_01c33bb4(param_5);
                    /* try { // try from 01c45db4 to 01d45dbb has its CatchHandler @ 01c45ddc */
                    /* try { // try from 01c45dbc to 01d45def has its CatchHandler @ 01c45d90 */
        if (fVar22 < 0.0) {
          fVar22 = 0.0;
        }
        uVar14 = (ulong)(uint)fVar22;
        if (lVar3 == 0) goto LAB_01c4602c;
                    /* catch() { ... } // from try @ 01c45db4 with catch @ 01c45ddc */
        uVar6 = (ulong)(uint)(fVar18 + fVar22 * ((fVar25 - fVar9) - fVar18));
        uVar16 = (ulong)(uint)(fVar13 + fVar22 * ((fVar24 - fVar20) - fVar13));
        FUN_039282dc(fVar21 + fVar22 * ((fVar23 - fVar11) - fVar21),uVar16,uVar6,lVar3,0);
        lVar3 = FUN_0391c27c(param_5,0);
        lVar7 = FUN_0391c27c(param_5,0);
        if (lVar7 == 0) goto LAB_01c4602c;
        uVar12 = FUN_03928fd8(lVar7,0);
        uVar17 = uVar16;
        uVar15 = uVar6;
        uVar19 = uVar14;
        lVar7 = FUN_01c40b3c(param_5);
        if (lVar7 == 0) goto LAB_01c4602c;
        uVar5 = FUN_03928fd8(lVar7,0);
        FUN_03925cf4(0);
        FUN_03914490(uVar12,uVar16,uVar6,uVar14,uVar5,uVar17,uVar15,uVar19,0);
      }
      if (lVar3 != 0) {
        FUN_03929060(lVar3,0);
        return;
      }
    }
  }
LAB_01c4602c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


