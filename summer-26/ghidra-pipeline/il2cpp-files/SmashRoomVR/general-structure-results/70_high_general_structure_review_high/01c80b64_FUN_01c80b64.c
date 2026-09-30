/*
FUNCTION_NAME: FUN_01c80b64
ENTRY_POINT: 01c80b64
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_15;telemetry_or_network_hits_4
*/


void FUN_01c80b64(undefined1 param_1 [16],ulong param_2,undefined8 param_3,long *param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if ((DAT_03fed7cc & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_493402F3E4397B2945B16273E795816C0BDF80F76F42FCAA75F3DF2E215ABC1B
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    thunk_FUN_01ad9084(Method_SaveSystem_<>c__DisplayClass10_0_<LoadItems>b__0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed7cc = 1;
  }
  if ((param_5 != 0) && (lVar3 = FUN_03954698(param_5,0), lVar3 != 0)) {
    uVar4 = FUN_0395b3d0(lVar3,0);
    if ((uVar4 & 1) != 0) {
      return;
    }
    lVar3 = FUN_01e8a9f8(param_4,*(undefined8 *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_18__);
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
                    /* try { // try from 01c80c28 to 01d80caf has its CatchHandler @ 01c80c28
                       catch() { ... } // from try @ 01c80c28 with catch @ 01c80c28
                       catch() { ... } // from try @ 01c80f60 with catch @ 01c80c28 */
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar4 = FUN_03923030(lVar3,0);
    uVar9 = param_3;
    if (((uVar4 & 1) != 0) && (*(float *)((long)param_4 + 0x54) != 0.0)) {
      lVar5 = FUN_0391c27c(param_4,0);
      if ((lVar3 == 0) || (FUN_03959e50(lVar3,0), lVar5 == 0)) goto LAB_01c80ee4;
      FUN_0392a298(lVar5,0);
      uVar9 = param_3;
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      param_2 = (ulong)(uint)ABS((float)param_3);
      if (ABS((float)param_3) < *(float *)((long)param_4 + 0x54)) {
        return;
      }
    }
    lVar3 = FUN_03954900(param_5,0);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) == 0) {
LAB_01c80ee8:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar11 = FUN_0395ee3c(lVar3 + 0x20,0);
      uVar4 = param_2;
      uVar10 = uVar9;
      lVar3 = FUN_03954900(param_5,0);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) == 0) goto LAB_01c80ee8;
        uVar12 = FUN_0395ee48(lVar3 + 0x20,0);
        if (DAT_03fed260 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed260 = '\x01';
        }
        lVar3 = *(long *)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        uVar8 = (ulong)*(uint *)(lVar3 + 0x4c);
        uVar14 = (ulong)*(uint *)(lVar3 + 0x50);
        uVar15 = uVar12;
        uVar13 = FUN_0391419c(*(undefined4 *)(lVar3 + 0x48),uVar8,uVar14,uVar12,uVar4,uVar10,0);
        uVar6 = FUN_03954698(param_5,0);
        (**(code **)(*param_4 + 0x188))
                  (uVar11,param_2 & 0xffffffff,uVar9,uVar13,uVar8,uVar14,uVar15,param_4,uVar6,
                   *(undefined8 *)(*param_4 + 400));
        lVar3 = FUN_03954698(param_5,0);
        if (lVar3 != 0) {
          plVar7 = (long *)FUN_01e8a9f8(lVar3,*(undefined8 *)
                                               Field_<PrivateImplementationDetails>_493402F3E4397B2945B16273E795816C0BDF80F76F42FCAA75F3DF2E215ABC1B
                                       );
          lVar3 = *(long *)puVar1;
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar3);
          }
          uVar8 = FUN_03923030(plVar7,0);
          puVar2 = Method_SaveSystem_<>c__DisplayClass10_0_<LoadItems>b__0__;
          if ((uVar8 & 1) != 0) {
            uVar16 = *(undefined4 *)((long)param_4 + 0x2c);
            local_80 = 0;
            uStack_78 = 0;
            FUN_02d0b20c(uVar11,param_2 & 0xffffffff,uVar9,&local_80,
                         *(undefined8 *)Method_SaveSystem_<>c__DisplayClass10_0_<LoadItems>b__0__);
            local_90 = 0;
            uStack_88 = 0;
            FUN_02d0b20c(uVar12,uVar4,uVar10,&local_90,*(undefined8 *)puVar2);
            uVar9 = FUN_0391c2b8(param_4,0);
            lVar3 = FUN_03954698(param_5,0);
            if ((lVar3 == 0) || (uVar10 = FUN_0391c2b8(lVar3,0), plVar7 == (long *)0x0))
            goto LAB_01c80ee4;
            (**(code **)(*plVar7 + 0x188))
                      (uVar16,plVar7,local_80,uStack_78,local_90,uStack_88,1,uVar9,uVar10,
                       *(undefined8 *)(*plVar7 + 400));
            if (param_4[0xb] != 0) {
              FUN_0392e738(param_4[0xb],0);
            }
          }
          if ((char)param_4[10] != '\0') {
            return;
          }
          uVar9 = FUN_0391c2b8(param_4,0);
          lVar3 = *(long *)puVar1;
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar3);
          }
          FUN_03923a90(uVar9,0);
          return;
        }
      }
    }
  }
LAB_01c80ee4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


