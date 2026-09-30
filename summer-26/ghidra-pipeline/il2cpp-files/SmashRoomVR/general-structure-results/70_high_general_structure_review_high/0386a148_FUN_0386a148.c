/*
FUNCTION_NAME: FUN_0386a148
ENTRY_POINT: 0386a148
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_12;telemetry_or_network_hits_3
*/


void FUN_0386a148(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long *__dest;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined1 auStack_f0 [80];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_38;
  
  puVar4 = PTR_DAT_03da5ed8;
  if ((DAT_03ff86d7 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_2339);
    thunk_FUN_01ad9084(PTR_DAT_03da7be8);
    thunk_FUN_01ad9084(PTR_DAT_03da7bf0);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_20__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_21__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da5ed8);
    DAT_03ff86d7 = 1;
  }
  local_38 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if ((*(char *)(param_2 + 0xac) != '\0') || ((param_3 & 1) != 0)) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    plVar5 = (long *)FUN_0386a618(param_1,*(undefined4 *)(param_2 + 0xa0));
    if (plVar5 == (long *)0x0) goto LAB_0386a614;
    puVar1 = (undefined8 *)((long)plVar5 + 0x104);
    (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
    FUN_038669d0(param_2,plVar5,0);
    fVar11 = *(float *)(param_1 + 0x6c);
    *(ulong *)((long)plVar5 + 0x13c) =
         CONCAT44((float)((ulong)*(undefined8 *)((long)plVar5 + 0x13c) >> 0x20) * fVar11,
                  (float)*(undefined8 *)((long)plVar5 + 0x13c) * fVar11);
    *(undefined4 *)(plVar5 + 0x29) = 0;
    uVar14 = *puVar1;
    *puVar1 = 0xff7fffffff7fffff;
    FUN_03868744(auStack_f0,param_1,plVar5);
    __dest = plVar5 + 10;
    memcpy(__dest,auStack_f0,0x50);
    thunk_FUN_01b4f09c(__dest,0);
    *puVar1 = uVar14;
    uVar6 = FUN_0386a6ec(param_1,plVar5,&local_38);
    if ((uVar6 & 1) != 0) {
      memcpy(&local_a0,__dest,0x50);
      uVar6 = FUN_03b322a8(&local_a0,0);
      if ((uVar6 & 1) == 0) {
        lVar7 = plVar5[0x30];
        if (lVar7 == 0) goto LAB_0386a614;
        if (*(int *)(lVar7 + 0x18) < 1) {
          if (DAT_03fed257 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed257 = '\x01';
          }
          uVar6 = (ulong)**(uint **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ +
                                    0xb8);
          fVar11 = (float)(*(uint **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ +
                                     0xb8))[1];
        }
        else {
          uVar6 = FUN_02bd6ba8(lVar7,*(int *)(lVar7 + 0x18) + -1,
                               *(undefined8 *)
                                Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_21__)
          ;
        }
        if (local_38 == 0) goto LAB_0386a614;
        fVar8 = (float)FUN_038f13a0(uVar6,local_38,0);
        *(float *)((long)plVar5 + 0x104) = fVar8;
        *(float *)(plVar5 + 0x21) = fVar11;
      }
      else {
        if (local_38 == 0) goto LAB_0386a614;
        fVar11 = *(float *)(plVar5 + 0x10);
        fVar8 = (float)FUN_038f13a0(*(undefined4 *)((long)plVar5 + 0x7c),fVar11,
                                    *(undefined4 *)((long)plVar5 + 0x84),local_38,0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if ((*(byte *)(param_2 + 0xa8) & 1) != 0) {
          plVar5[0x32] = *(long *)((long)plVar5 + 0x7c);
          *(undefined4 *)(plVar5 + 0x33) = *(undefined4 *)((long)plVar5 + 0x84);
        }
      }
      fVar9 = *(float *)((long)plVar5 + 0x104);
      fVar12 = *(float *)(plVar5 + 0x21);
      *(float *)((long)plVar5 + 0x104) = fVar8;
      *(float *)(plVar5 + 0x21) = fVar11;
      *(float *)((long)plVar5 + 0x10c) = fVar8 - fVar9;
      *(float *)(plVar5 + 0x22) = fVar11 - fVar12;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_03868b88(param_1,*(undefined4 *)(param_2 + 0xa8),plVar5);
      FUN_038692bc(param_1,plVar5);
      FUN_03869b38(param_1,plVar5);
      uVar14 = *(undefined8 *)((long)plVar5 + 0x114);
      if (DAT_03fed2da == '\0') {
        thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
        DAT_03fed2da = '\x01';
      }
      fVar11 = (float)uVar14 -
               (float)**(undefined8 **)
                        (*(long *)
                          Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ + 0xb8
                        );
      fVar8 = (float)((ulong)uVar14 >> 0x20) -
              (float)((ulong)**(undefined8 **)
                               (*(long *)
                                 Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__
                               + 0xb8) >> 0x20);
      if (DAT_00b55084 <= fVar11 * fVar11 + fVar8 * fVar8) {
        if (local_38 == 0) goto LAB_0386a614;
        uVar13 = *(undefined4 *)((long)plVar5 + 0x194);
        uVar10 = FUN_038f13a0((int)plVar5[0x32],uVar13,(int)plVar5[0x33],local_38,0);
        *(undefined4 *)((long)plVar5 + 0x114) = uVar10;
        *(undefined4 *)(plVar5 + 0x23) = uVar13;
      }
      FUN_03869ce8(*(undefined4 *)(param_1 + 0x68),param_1,plVar5,3);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar14 = *(undefined8 *)(param_2 + 8);
      FUN_03866b50(param_2,plVar5,0);
      puVar3 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      lVar7 = *(long *)(param_2 + 8);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_0391f968(uVar14,lVar7,0);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar6 = FUN_0391f968(lVar7,0,0);
        if ((uVar6 & 1) == 0) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          *(undefined8 *)(param_2 + 0x148) = 0;
          thunk_FUN_01b4f09c(param_2 + 0x148,0);
          *(undefined1 *)(param_2 + 0x150) = 0;
        }
        else {
          if (lVar7 == 0) {
LAB_0386a614:
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          plVar5 = (long *)FUN_01ed770c(lVar7,*(undefined8 *)PTR_DAT_03da7bf0);
          lVar7 = FUN_01ed770c(lVar7,*(undefined8 *)PTR_DAT_03da7be8);
          uVar14 = 0;
          if (plVar5 != (long *)0x0) {
            bVar2 = *(byte *)(*(long *)StringLiteral_2339 + 0x130);
            if ((*(byte *)(*plVar5 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)StringLiteral_2339)) {
              uVar14 = 0;
            }
            else {
              uVar14 = FUN_0391c2b8(plVar5,0);
            }
          }
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          *(undefined8 *)(param_2 + 0x148) = uVar14;
          thunk_FUN_01b4f09c(param_2 + 0x148,uVar14);
          *(bool *)(param_2 + 0x150) = lVar7 != 0;
        }
      }
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03866940(param_2,0);
  }
  return;
}


