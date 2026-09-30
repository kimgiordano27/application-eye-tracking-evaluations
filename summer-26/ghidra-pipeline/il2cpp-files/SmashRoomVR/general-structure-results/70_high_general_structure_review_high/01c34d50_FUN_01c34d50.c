/*
FUNCTION_NAME: FUN_01c34d50
ENTRY_POINT: 01c34d50
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_5
*/


void FUN_01c34d50(undefined1 param_1 [16],float param_2,float param_3,long *param_4,long *param_5)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined4 *puVar10;
  code *pcVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((DAT_03fed5b6 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_195ABC1ABB69B6BD65F20ACAFA79EED2D330BF513E25C830F24B8A78D8703446
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_1A07BC77B9912D8D87E9B28E0167F53A9B09BB017B35A35F3913989C9440A60B
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_1B9CC34A0CF8DBCC350E200673FAC4124DDAD581F1FC2C16FF9A1C0154691687
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_1C4B3A80ED7AEC83916479BCE280E1258D5785D07F0EA22A5E27592ACCAE692B
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_1F38DEB3F70291588D06D3830D0D4241CE0570C9F4EE8B00F606C4753EB016E2
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed5b6 = 1;
  }
  if ((char)param_4[4] == '\0') {
    cVar12 = '\0';
LAB_01c34e28:
    bVar4 = false;
  }
  else {
    if ((int)param_4[0x14] == 2) {
      cVar12 = '\x01';
    }
    else {
      (**(code **)(*param_4 + 0x328))(param_4,0,1,*(undefined8 *)(*param_4 + 0x330));
      cVar12 = (char)param_4[4];
      if (cVar12 == '\0') goto LAB_01c34e28;
    }
    bVar4 = (int)param_4[0x14] == 2;
  }
  *(undefined1 *)(param_4 + 4) = 1;
  uVar14 = FUN_03925ca4(0);
  *(undefined4 *)((long)param_4 + 0xfc) = uVar14;
  if (cVar12 == '\x01') {
    if (bVar4) {
      lVar5 = (**(code **)(*param_4 + 0x358))(param_4,param_5,*(undefined8 *)(*param_4 + 0x360));
      plVar1 = param_4 + 0x27;
      param_4[0x27] = lVar5;
      thunk_FUN_01b4f09c(plVar1,lVar5);
      FUN_01c46568(param_4,param_5);
      lVar5 = FUN_01c40c90(param_4);
      if ((param_5 == (long *)0x0) || (uVar6 = FUN_0391c27c(param_5,0), lVar5 == 0))
      goto thunk_FUN_01b48178;
      FUN_039294c8(lVar5,uVar6,0);
      if (*(int *)((long)param_4 + 0x54) == 1) {
        lVar5 = FUN_01c40c90(param_4);
        lVar7 = FUN_0391c27c(param_4,0);
        if ((lVar7 == 0) || (FUN_03928d34(lVar7,0), lVar5 == 0)) goto thunk_FUN_01b48178;
        FUN_03928dd4(lVar5,0);
        lVar5 = FUN_01c40c90(param_4);
        lVar7 = FUN_0391c27c(param_4,0);
        if ((lVar7 == 0) || (FUN_039274a0(lVar7,0), lVar5 == 0)) goto thunk_FUN_01b48178;
        FUN_03928f54(lVar5,0);
      }
      else if (*(int *)((long)param_4 + 0x54) == 0) {
        lVar5 = FUN_01c40c90(param_4);
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        if (lVar5 == 0) goto thunk_FUN_01b48178;
        puVar10 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8)
        ;
        param_2 = (float)puVar10[1];
        param_3 = (float)puVar10[2];
        FUN_03929030(*puVar10,lVar5,0);
        lVar5 = FUN_01c40c90(param_4);
        FUN_01c33bb4(param_4);
        if (lVar5 == 0) goto thunk_FUN_01b48178;
        FUN_039282dc(lVar5,0);
      }
      FUN_01c41f6c(param_4,param_5);
      puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if ((*(int *)((long)param_4 + 0x54) == 1) && (*(char *)((long)param_4 + 0x77) != '\0')) {
        lVar5 = *plVar1;
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar8 = FUN_0391f968(lVar5,0,0);
        if ((uVar8 & 1) != 0) {
          lVar5 = param_5[10];
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar8 = FUN_0391f968(lVar5,0,0);
          if ((uVar8 & 1) != 0) {
            if ((param_5[10] == 0) || (lVar5 = FUN_0391c27c(param_5[10],0), lVar5 == 0))
            goto thunk_FUN_01b48178;
            FUN_039294c8(lVar5,*plVar1,0);
            if (param_5[10] == 0) goto thunk_FUN_01b48178;
            FUN_039282dc(*(undefined4 *)((long)param_5 + 0xb4),(int)param_5[0x17],
                         *(undefined4 *)((long)param_5 + 0xbc),param_5[10],0);
            if (param_5[10] == 0) goto thunk_FUN_01b48178;
            param_2 = *(float *)((long)param_5 + 0xc4);
            param_3 = *(float *)(param_5 + 0x19);
            FUN_03929030((int)param_5[0x18],param_5[10],0);
          }
        }
      }
    }
LAB_01c35648:
    if (*(char *)((long)param_4 + 0x74) != '\0') {
      if (param_5 == (long *)0x0) goto thunk_FUN_01b48178;
      (**(code **)(*param_5 + 0x218))(param_5,*(undefined8 *)(*param_5 + 0x220));
    }
    fVar15 = (float)FUN_01c409f0(param_4);
    if ((param_5 != (long *)0x0) &&
       (fVar17 = param_2, fVar18 = param_3, lVar5 = FUN_0391c27c(param_5,0), lVar5 != 0)) {
      fVar16 = (float)FUN_03928d34(lVar5,0);
      if (DAT_03fed25e == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25e = '\x01';
      }
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      *(float *)(param_4 + 0x21) =
           SQRT((param_3 - fVar18) * (param_3 - fVar18) +
                (fVar15 - fVar16) * (fVar15 - fVar16) + (param_2 - fVar17) * (param_2 - fVar17));
      return;
    }
    goto thunk_FUN_01b48178;
  }
  (**(code **)(*param_4 + 0x2f8))(param_4,*(undefined8 *)(*param_4 + 0x300));
  lVar5 = (**(code **)(*param_4 + 0x358))(param_4,param_5,*(undefined8 *)(*param_4 + 0x360));
  plVar1 = param_4 + 0x26;
  param_4[0x26] = lVar5;
  thunk_FUN_01b4f09c(plVar1,lVar5);
  param_4[0x27] = 0;
  thunk_FUN_01b4f09c(param_4 + 0x27,0);
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  lVar5 = param_4[0x26];
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_03923030(lVar5,0);
  if ((uVar8 & 1) == 0) {
    lVar5 = 0;
    param_4[0x28] = 0;
  }
  else {
    if (*plVar1 == 0) goto thunk_FUN_01b48178;
    lVar5 = FUN_01e8a9f8(*plVar1,*(undefined8 *)
                                  Field_<PrivateImplementationDetails>_1A07BC77B9912D8D87E9B28E0167F53A9B09BB017B35A35F3913989C9440A60B
                        );
    param_4[0x28] = lVar5;
  }
  thunk_FUN_01b4f09c(param_4 + 0x28,lVar5);
  lVar5 = *plVar1;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_0391f968(lVar5,0,0);
  if ((uVar8 & 1) == 0) {
LAB_01c350ac:
    param_4[0x11] = param_4[0x12];
    *(undefined4 *)(param_4 + 0x13) = *(undefined4 *)((long)param_4 + 0x9c);
    thunk_FUN_01b4f09c(param_4 + 0x11);
    puVar10 = (undefined4 *)((long)param_4 + 0x84);
  }
  else {
    lVar5 = param_4[0x28];
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar8 = FUN_0391f968(lVar5,0,0);
    puVar3 = 
    Field_<PrivateImplementationDetails>_1A07BC77B9912D8D87E9B28E0167F53A9B09BB017B35A35F3913989C9440A60B
    ;
    if ((uVar8 & 1) == 0) goto LAB_01c350ac;
    if ((*plVar1 == 0) ||
       (lVar5 = FUN_01e8a9f8(*plVar1,*(undefined8 *)
                                      Field_<PrivateImplementationDetails>_1A07BC77B9912D8D87E9B28E0167F53A9B09BB017B35A35F3913989C9440A60B
                            ), lVar5 == 0)) goto thunk_FUN_01b48178;
    *(undefined4 *)(param_4 + 0x13) = *(undefined4 *)(lVar5 + 0x30);
    if ((param_4[0x26] == 0) ||
       (lVar5 = FUN_01e8a9f8(param_4[0x26],*(undefined8 *)puVar3), lVar5 == 0))
    goto thunk_FUN_01b48178;
    param_4[0x11] = *(long *)(lVar5 + 0x28);
    thunk_FUN_01b4f09c(param_4 + 0x11);
    if ((param_4[0x26] == 0) ||
       (lVar5 = FUN_01e8a9f8(param_4[0x26],*(undefined8 *)puVar3), lVar5 == 0))
    goto thunk_FUN_01b48178;
    puVar10 = (undefined4 *)(lVar5 + 0x20);
  }
  *(undefined4 *)(param_4 + 0x10) = *puVar10;
  FUN_01c46568(param_4,param_5);
  lVar5 = FUN_01c40b3c(param_4);
  if ((param_5 == (long *)0x0) || (uVar6 = FUN_0391c27c(param_5,0), lVar5 == 0))
  goto thunk_FUN_01b48178;
  FUN_039294c8(lVar5,uVar6,0);
  FUN_01c46070(param_4,0);
  if (*(int *)((long)param_4 + 0x54) == 1) {
    lVar5 = FUN_01c40b3c(param_4);
    lVar7 = FUN_0391c27c(param_4,0);
    if ((lVar7 == 0) || (FUN_03928d34(lVar7,0), lVar5 == 0)) goto thunk_FUN_01b48178;
    FUN_03928dd4(lVar5,0);
    lVar5 = FUN_01c40b3c(param_4);
    lVar7 = FUN_0391c27c(param_4,0);
    if ((lVar7 == 0) || (FUN_039274a0(lVar7,0), lVar5 == 0)) goto thunk_FUN_01b48178;
    FUN_03928f54(lVar5,0);
  }
  else if (*(int *)((long)param_4 + 0x54) == 0) {
    lVar5 = FUN_01c40b3c(param_4);
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    if (lVar5 == 0) goto thunk_FUN_01b48178;
    puVar10 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    param_2 = (float)puVar10[1];
    param_3 = (float)puVar10[2];
    FUN_03929030(*puVar10,lVar5,0);
    lVar5 = FUN_01c40b3c(param_4);
    fVar15 = (float)FUN_01c33bb4(param_4);
    if (lVar5 == 0) goto thunk_FUN_01b48178;
    param_3 = -param_3;
    param_2 = -param_2;
    FUN_039282dc(-fVar15,lVar5,0);
  }
  uVar6 = FUN_01e8a9f8(param_4,*(undefined8 *)
                                Field_<PrivateImplementationDetails>_1B9CC34A0CF8DBCC350E200673FAC4124DDAD581F1FC2C16FF9A1C0154691687
                      );
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)puVar2);
  }
  uVar8 = FUN_03923030(uVar6,0);
  if ((uVar8 & 1) != 0) {
    uVar6 = FUN_01e8a9f8(param_4,*(undefined8 *)
                                  Field_<PrivateImplementationDetails>_195ABC1ABB69B6BD65F20ACAFA79EED2D330BF513E25C830F24B8A78D8703446
                        );
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar2);
    }
    uVar8 = FUN_03923030(uVar6,0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_03923a90(uVar6,0);
    }
  }
  switch((int)param_4[10]) {
  case 0:
    uVar14 = *(undefined4 *)((long)param_4 + 0x54);
    pcVar11 = *(code **)(*param_4 + 0x2a8);
    uVar6 = *(undefined8 *)(*param_4 + 0x2b0);
    break;
  case 1:
    uVar14 = *(undefined4 *)((long)param_4 + 0x54);
    pcVar11 = *(code **)(*param_4 + 0x2c8);
    uVar6 = *(undefined8 *)(*param_4 + 0x2d0);
    break;
  default:
    goto switchD_01c352d0_caseD_2;
  case 3:
    uVar14 = *(undefined4 *)((long)param_4 + 0x54);
    pcVar11 = *(code **)(*param_4 + 0x2b8);
    uVar6 = *(undefined8 *)(*param_4 + 0x2c0);
    break;
  case 4:
    uVar14 = *(undefined4 *)((long)param_4 + 0x54);
    pcVar11 = *(code **)(*param_4 + 0x2d8);
    uVar6 = *(undefined8 *)(*param_4 + 0x2e0);
  }
  (*pcVar11)(param_4,param_5,uVar14,uVar6);
switchD_01c352d0_caseD_2:
  lVar5 = param_4[0x39];
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_03923030(lVar5,0);
  if ((uVar8 & 1) != 0) {
    if (param_4[0x39] == 0) goto thunk_FUN_01b48178;
    uVar8 = FUN_0395a324(param_4[0x39],0);
    if ((uVar8 & 1) == 0) {
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      puVar3 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
      puVar10 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
      (**(code **)(*param_4 + 600))
                (*puVar10,puVar10[1],puVar10[2],param_4,*(undefined8 *)(*param_4 + 0x260));
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      puVar10 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
      param_2 = (float)puVar10[1];
      param_3 = (float)puVar10[2];
      (**(code **)(*param_4 + 0x268))(*puVar10,param_4,*(undefined8 *)(*param_4 + 0x270));
    }
  }
  puVar3 = 
  Field_<PrivateImplementationDetails>_1F38DEB3F70291588D06D3830D0D4241CE0570C9F4EE8B00F606C4753EB016E2
  ;
  lVar5 = param_4[0x3b];
  if (lVar5 != 0) {
    iVar13 = 0;
    do {
      if (*(int *)(lVar5 + 0x18) <= iVar13) {
        FUN_01c41f6c(param_4,param_5);
        if ((*(int *)((long)param_4 + 0x54) == 1) && (*(char *)((long)param_4 + 0x77) != '\0')) {
          lVar5 = *plVar1;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar8 = FUN_0391f968(lVar5,0,0);
          if ((uVar8 & 1) != 0) {
            lVar5 = param_5[10];
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar8 = FUN_0391f968(lVar5,0,0);
            if ((uVar8 & 1) != 0) {
              if ((param_5[10] == 0) || (lVar5 = FUN_0391c27c(param_5[10],0), lVar5 == 0)) break;
              FUN_039294c8(lVar5,*plVar1,0);
              if (param_5[10] == 0) break;
              FUN_039282dc(*(undefined4 *)((long)param_5 + 0xb4),(int)param_5[0x17],
                           *(undefined4 *)((long)param_5 + 0xbc),param_5[10],0);
              if (param_5[10] == 0) break;
              param_2 = *(float *)((long)param_5 + 0xc4);
              param_3 = *(float *)(param_5 + 0x19);
              FUN_03929030((int)param_5[0x18],param_5[10],0);
            }
          }
        }
        (**(code **)(*param_4 + 1000))(param_4,*(undefined8 *)(*param_4 + 0x3f0));
        goto LAB_01c35648;
      }
      plVar9 = (long *)FUN_02b59714(lVar5,iVar13,*(undefined8 *)puVar3);
      if (plVar9 == (long *)0x0) break;
      (**(code **)(*plVar9 + 0x188))(plVar9,param_5,*(undefined8 *)(*plVar9 + 400));
      lVar5 = param_4[0x3b];
      iVar13 = iVar13 + 1;
    } while (lVar5 != 0);
  }
thunk_FUN_01b48178:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


