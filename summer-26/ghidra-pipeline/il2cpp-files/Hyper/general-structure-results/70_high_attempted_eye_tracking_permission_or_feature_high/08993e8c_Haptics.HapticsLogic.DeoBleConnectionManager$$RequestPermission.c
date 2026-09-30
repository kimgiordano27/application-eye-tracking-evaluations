/*
FUNCTION_NAME: Haptics.HapticsLogic.DeoBleConnectionManager$$RequestPermission
ENTRY_POINT: 08993e8c
PROGRAM: Hyper-libil2cpp.so
SCORE: 85
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable
*/


void Haptics_HapticsLogic_DeoBleConnectionManager__RequestPermission
               (long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w23;
  uint unaff_w24;
  uint unaff_w25;
  uint unaff_w26;
  long unaff_x27;
  uint unaff_w28;
  uint unaff_w29;
  
code_r0x08993e8c:
  FUN_089e1c44(param_1,param_2);
  if (*(int *)(unaff_x20 + 0x38) == 0x2d3) {
    uVar6 = FUN_0898e0f4();
    if (param_1 == 0) {
LAB_08994ab0:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_089e1f94(param_1,uVar6,0);
  }
  if (*(char *)(unaff_x27 + 0xc32) == '\0') {
    FUN_04947ee4();
    *(undefined1 *)(unaff_x27 + 0xc32) = 1;
  }
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_088e96e0();
  *(long *)(unaff_x20 + 0x30) = param_1;
  thunk_FUN_049ee3d8(unaff_x20 + 0x30,param_1);
  bVar2 = param_1 == 0;
  uVar3 = 0x2d3;
FUN_08994a6c:
  uVar1 = 0;
  if (!bVar2) {
    uVar1 = uVar3;
  }
  *(undefined4 *)(unaff_x20 + 0x38) = uVar1;
LAB_08994a74:
  uVar4 = FUN_088e7824();
  if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
    return;
  }
  if (unaff_w23 < uVar4) {
    if (unaff_w25 < uVar4) {
      if (unaff_w26 < uVar4) {
        if (uVar4 < 0x1cdb) {
          if (uVar4 == 0x1cca) {
            lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e4d0);
            FUN_089fd618(lVar5,0);
            if (*(int *)(unaff_x20 + 0x38) == 0x399) {
              uVar6 = FUN_0898ee68();
              if (lVar5 == 0) goto LAB_08994ab0;
              FUN_089fd968(lVar5,uVar6,0);
            }
            if (*(char *)(unaff_x27 + 0xc32) == '\0') {
              FUN_04947ee4();
              *(undefined1 *)(unaff_x27 + 0xc32) = 1;
            }
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            FUN_088e96e0();
            *(long *)(unaff_x20 + 0x30) = lVar5;
            thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
            bVar2 = lVar5 == 0;
            uVar3 = 0x399;
            goto FUN_08994a6c;
          }
          if (uVar4 == 0x1cd2) {
            lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e4d8);
            FUN_089fe76c(lVar5,0);
            if (*(int *)(unaff_x20 + 0x38) == 0x39a) {
              uVar6 = FUN_0898ef0c();
              if (lVar5 == 0) goto LAB_08994ab0;
              FUN_089feabc(lVar5,uVar6,0);
            }
            if (*(char *)(unaff_x27 + 0xc32) == '\0') {
              FUN_04947ee4();
              *(undefined1 *)(unaff_x27 + 0xc32) = 1;
            }
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            FUN_088e96e0();
            *(long *)(unaff_x20 + 0x30) = lVar5;
            thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
            bVar2 = lVar5 == 0;
            uVar3 = 0x39a;
            goto FUN_08994a6c;
          }
          if (uVar4 == 0x1cda) {
            lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e4e0);
            FUN_089ff8c0(lVar5,0);
            if (*(int *)(unaff_x20 + 0x38) == 0x39b) {
              uVar6 = FUN_0898efb0();
              if (lVar5 == 0) goto LAB_08994ab0;
              FUN_089ffc10(lVar5,uVar6,0);
            }
            if (*(char *)(unaff_x27 + 0xc32) == '\0') {
              FUN_04947ee4();
              *(undefined1 *)(unaff_x27 + 0xc32) = 1;
            }
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            FUN_088e96e0();
            *(long *)(unaff_x20 + 0x30) = lVar5;
            thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
            bVar2 = lVar5 == 0;
            uVar3 = 0x39b;
            goto FUN_08994a6c;
          }
        }
        else {
          if (uVar4 == 0x1ce2) {
            lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e4e8);
            FUN_08a0092c(lVar5,0);
            if (*(int *)(unaff_x20 + 0x38) == 0x39c) {
              uVar6 = FUN_0898f054();
              if (lVar5 == 0) goto LAB_08994ab0;
              FUN_08a00c7c(lVar5,uVar6,0);
            }
            if (*(char *)(unaff_x27 + 0xc32) == '\0') {
              FUN_04947ee4();
              *(undefined1 *)(unaff_x27 + 0xc32) = 1;
            }
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            FUN_088e96e0();
            *(long *)(unaff_x20 + 0x30) = lVar5;
            thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
            bVar2 = lVar5 == 0;
            uVar3 = 0x39c;
            goto FUN_08994a6c;
          }
          if (uVar4 == 0x1cea) {
            lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e4f0);
            FUN_08a0187c(lVar5,0);
            if (*(int *)(unaff_x20 + 0x38) == 0x39d) {
              uVar6 = FUN_0898f0f8();
              if (lVar5 == 0) goto LAB_08994ab0;
              FUN_08a01bcc(lVar5,uVar6,0);
            }
            if (*(char *)(unaff_x27 + 0xc32) == '\0') {
              FUN_04947ee4();
              *(undefined1 *)(unaff_x27 + 0xc32) = 1;
            }
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            FUN_088e96e0();
            *(long *)(unaff_x20 + 0x30) = lVar5;
            thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
            bVar2 = lVar5 == 0;
            uVar3 = 0x39d;
            goto FUN_08994a6c;
          }
          if (uVar4 == 0x1cf2) {
            lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e4f8);
            FUN_08a027cc(lVar5,0);
            if (*(int *)(unaff_x20 + 0x38) == 0x39e) {
              uVar6 = FUN_0898f19c();
              if (lVar5 == 0) goto LAB_08994ab0;
              FUN_08a02d48(lVar5,uVar6,0);
            }
            if (*(char *)(unaff_x27 + 0xc32) == '\0') {
              FUN_04947ee4();
              *(undefined1 *)(unaff_x27 + 0xc32) = 1;
            }
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            FUN_088e96e0();
            *(long *)(unaff_x20 + 0x30) = lVar5;
            thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
            bVar2 = lVar5 == 0;
            uVar3 = 0x39e;
            goto FUN_08994a6c;
          }
        }
      }
      else if (uVar4 < 0x1c2b) {
        if (uVar4 == 0x1c22) {
          lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e4a8);
          FUN_089f8988(lVar5,0);
          if (*(int *)(unaff_x20 + 0x38) == 900) {
            uVar6 = FUN_0898eb34();
            if (lVar5 == 0) goto LAB_08994ab0;
            FUN_089f8cd8(lVar5,uVar6,0);
          }
          if (*(char *)(unaff_x27 + 0xc32) == '\0') {
            FUN_04947ee4();
            *(undefined1 *)(unaff_x27 + 0xc32) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_088e96e0();
          *(long *)(unaff_x20 + 0x30) = lVar5;
          thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
          bVar2 = lVar5 == 0;
          uVar3 = 900;
          goto FUN_08994a6c;
        }
        if (uVar4 == 0x1c2a) {
          lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e4b0);
          FUN_089f98d8(lVar5,0);
          if (*(int *)(unaff_x20 + 0x38) == 0x385) {
            uVar6 = FUN_0898ebd8();
            if (lVar5 == 0) goto LAB_08994ab0;
            Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__get_Enabled(lVar5,uVar6,0);
          }
          if (*(char *)(unaff_x27 + 0xc32) == '\0') {
            FUN_04947ee4();
            *(undefined1 *)(unaff_x27 + 0xc32) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_088e96e0();
          *(long *)(unaff_x20 + 0x30) = lVar5;
          thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
          bVar2 = lVar5 == 0;
          uVar3 = 0x385;
          goto FUN_08994a6c;
        }
      }
      else {
        if (uVar4 == 0x1c32) {
          lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e4b8);
          FUN_089fa828(lVar5,0);
          if (*(int *)(unaff_x20 + 0x38) == 0x386) {
            uVar6 = FUN_0898ec7c();
            if (lVar5 == 0) goto LAB_08994ab0;
            FUN_089fab78(lVar5,uVar6,0);
          }
          if (*(char *)(unaff_x27 + 0xc32) == '\0') {
            FUN_04947ee4();
            *(undefined1 *)(unaff_x27 + 0xc32) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_088e96e0();
          *(long *)(unaff_x20 + 0x30) = lVar5;
          thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
          bVar2 = lVar5 == 0;
          uVar3 = 0x386;
          goto FUN_08994a6c;
        }
        if (uVar4 == 0x1c3a) {
          lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e4c0);
          FUN_089fb778(lVar5,0);
          if (*(int *)(unaff_x20 + 0x38) == 0x387) {
            uVar6 = FUN_0898ed20();
            if (lVar5 == 0) goto LAB_08994ab0;
            FUN_089fbac8(lVar5,uVar6,0);
          }
          if (*(char *)(unaff_x27 + 0xc32) == '\0') {
            FUN_04947ee4();
            *(undefined1 *)(unaff_x27 + 0xc32) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_088e96e0();
          *(long *)(unaff_x20 + 0x30) = lVar5;
          thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
          bVar2 = lVar5 == 0;
          uVar3 = 0x387;
          goto FUN_08994a6c;
        }
        if (uVar4 == unaff_w26) {
          lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e4c8);
          FUN_089fc6c8(lVar5,0);
          if (*(int *)(unaff_x20 + 0x38) == 0x398) {
            uVar6 = FUN_0898edc4();
            if (lVar5 == 0) goto LAB_08994ab0;
            FUN_089fca18(lVar5,uVar6,0);
          }
          if (*(char *)(unaff_x27 + 0xc32) == '\0') {
            FUN_04947ee4();
            *(undefined1 *)(unaff_x27 + 0xc32) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_088e96e0();
          *(long *)(unaff_x20 + 0x30) = lVar5;
          thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
          bVar2 = lVar5 == 0;
          uVar3 = 0x398;
          goto FUN_08994a6c;
        }
      }
    }
    else if (unaff_w28 < uVar4) {
      if (uVar4 < 0x1b1b) {
        if (uVar4 == 0x1b0a) {
          lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e478);
          FUN_089f17bc(lVar5,0);
          if (*(int *)(unaff_x20 + 0x38) == 0x361) {
            uVar6 = FUN_0898e75c();
            if (lVar5 == 0) goto LAB_08994ab0;
            FUN_089f1b0c(lVar5,uVar6,0);
          }
          if (*(char *)(unaff_x27 + 0xc32) == '\0') {
            FUN_04947ee4();
            *(undefined1 *)(unaff_x27 + 0xc32) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_088e96e0();
          *(long *)(unaff_x20 + 0x30) = lVar5;
          thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
          bVar2 = lVar5 == 0;
          uVar3 = 0x361;
          goto FUN_08994a6c;
        }
        if (uVar4 == 0x1b12) {
          lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e480);
          FUN_089f2804(lVar5,0);
          if (*(int *)(unaff_x20 + 0x38) == 0x362) {
            uVar6 = FUN_0898e800();
            if (lVar5 == 0) goto LAB_08994ab0;
            FUN_089f2b54(lVar5,uVar6,0);
          }
          if (*(char *)(unaff_x27 + 0xc32) == '\0') {
            FUN_04947ee4();
            *(undefined1 *)(unaff_x27 + 0xc32) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_088e96e0();
          *(long *)(unaff_x20 + 0x30) = lVar5;
          thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
          bVar2 = lVar5 == 0;
          uVar3 = 0x362;
          goto FUN_08994a6c;
        }
        if (uVar4 == 0x1b1a) {
          lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e488);
          FUN_089f3754(lVar5,0);
          if (*(int *)(unaff_x20 + 0x38) == 0x363) {
            uVar6 = FUN_0898e8a4();
            if (lVar5 == 0) goto LAB_08994ab0;
            FUN_089f3aa4(lVar5,uVar6,0);
          }
          if (*(char *)(unaff_x27 + 0xc32) == '\0') {
            FUN_04947ee4();
            *(undefined1 *)(unaff_x27 + 0xc32) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_088e96e0();
          *(long *)(unaff_x20 + 0x30) = lVar5;
          thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
          bVar2 = lVar5 == 0;
          uVar3 = 0x363;
          goto FUN_08994a6c;
        }
      }
      else {
        if (uVar4 == 0x1b22) {
          lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e490);
          FUN_089f4a88(lVar5,0);
          if (*(int *)(unaff_x20 + 0x38) == 0x364) {
            uVar6 = FUN_0898e948();
            if (lVar5 == 0) goto LAB_08994ab0;
            FUN_089f4dd8(lVar5,uVar6,0);
          }
          if (*(char *)(unaff_x27 + 0xc32) == '\0') {
            FUN_04947ee4();
            *(undefined1 *)(unaff_x27 + 0xc32) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_088e96e0();
          *(long *)(unaff_x20 + 0x30) = lVar5;
          thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
          bVar2 = lVar5 == 0;
          uVar3 = 0x364;
          goto FUN_08994a6c;
        }
        if (uVar4 == 0x1b2a) {
          lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e498);
          FUN_089f5af4(lVar5,0);
          if (*(int *)(unaff_x20 + 0x38) == 0x365) {
            uVar6 = FUN_0898e9ec();
            if (lVar5 == 0) goto LAB_08994ab0;
            FUN_089f5e44(lVar5,uVar6,0);
          }
          if (*(char *)(unaff_x27 + 0xc32) == '\0') {
            FUN_04947ee4();
            *(undefined1 *)(unaff_x27 + 0xc32) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_088e96e0();
          *(long *)(unaff_x20 + 0x30) = lVar5;
          thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
          bVar2 = lVar5 == 0;
          uVar3 = 0x365;
          goto FUN_08994a6c;
        }
        if (uVar4 == unaff_w25) {
          lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e4a0);
          FUN_089f6b3c(lVar5,0);
          if (*(int *)(unaff_x20 + 0x38) == 0x366) {
            uVar6 = FUN_0898ea90();
            if (lVar5 == 0) goto LAB_08994ab0;
            FUN_089f6e8c(lVar5,uVar6,0);
          }
          if (*(char *)(unaff_x27 + 0xc32) == '\0') {
            FUN_04947ee4();
            *(undefined1 *)(unaff_x27 + 0xc32) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_088e96e0();
          *(long *)(unaff_x20 + 0x30) = lVar5;
          thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
          bVar2 = lVar5 == 0;
          uVar3 = 0x366;
          goto FUN_08994a6c;
        }
      }
    }
    else if (uVar4 < 0x1aeb) {
      if (uVar4 == 0x1ae2) {
        lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e450);
        FUN_089ebf10(lVar5,0);
        if (*(int *)(unaff_x20 + 0x38) == 0x35c) {
          uVar6 = FUN_0898e428();
          if (lVar5 == 0) goto LAB_08994ab0;
          Meta_XR_BuildingBlocks_SharedSpatialAnchorCore_<InitSpatialAnchor>d__16__MoveNext
                    (lVar5,uVar6,0);
        }
        if (*(char *)(unaff_x27 + 0xc32) == '\0') {
          FUN_04947ee4();
          *(undefined1 *)(unaff_x27 + 0xc32) = 1;
        }
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_088e96e0();
        *(long *)(unaff_x20 + 0x30) = lVar5;
        thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
        bVar2 = lVar5 == 0;
        uVar3 = 0x35c;
        goto FUN_08994a6c;
      }
      if (uVar4 == 0x1aea) {
        lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e458);
        FUN_089ed4dc(lVar5,0);
        if (*(int *)(unaff_x20 + 0x38) == 0x35d) {
          uVar6 = FUN_0898e4cc();
          if (lVar5 == 0) goto LAB_08994ab0;
          FUN_089ed82c(lVar5,uVar6,0);
        }
        if (*(char *)(unaff_x27 + 0xc32) == '\0') {
          FUN_04947ee4();
          *(undefined1 *)(unaff_x27 + 0xc32) = 1;
        }
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_088e96e0();
        *(long *)(unaff_x20 + 0x30) = lVar5;
        thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
        bVar2 = lVar5 == 0;
        uVar3 = 0x35d;
        goto FUN_08994a6c;
      }
    }
    else {
      if (uVar4 == 0x1af2) {
        lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e460);
        FUN_089ee42c(lVar5,0);
        if (*(int *)(unaff_x20 + 0x38) == 0x35e) {
          uVar6 = FUN_0898e570();
          if (lVar5 == 0) goto LAB_08994ab0;
          FUN_089ee77c(lVar5,uVar6,0);
        }
        if (*(char *)(unaff_x27 + 0xc32) == '\0') {
          FUN_04947ee4();
          *(undefined1 *)(unaff_x27 + 0xc32) = 1;
        }
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_088e96e0();
        *(long *)(unaff_x20 + 0x30) = lVar5;
        thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
        bVar2 = lVar5 == 0;
        uVar3 = 0x35e;
        goto FUN_08994a6c;
      }
      if (uVar4 == 0x1afa) {
        lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e468);
        FUN_089ef91c(lVar5,0);
        if (*(int *)(unaff_x20 + 0x38) == 0x35f) {
          uVar6 = FUN_0898e614();
          if (lVar5 == 0) goto LAB_08994ab0;
          FUN_089efc6c(lVar5,uVar6,0);
        }
        if (*(char *)(unaff_x27 + 0xc32) == '\0') {
          FUN_04947ee4();
          *(undefined1 *)(unaff_x27 + 0xc32) = 1;
        }
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_088e96e0();
        *(long *)(unaff_x20 + 0x30) = lVar5;
        thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
        bVar2 = lVar5 == 0;
        uVar3 = 0x35f;
        goto FUN_08994a6c;
      }
      if (uVar4 == unaff_w28) {
        lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e470);
        FUN_089f086c(lVar5,0);
        if (*(int *)(unaff_x20 + 0x38) == 0x360) {
          uVar6 = FUN_0898e6b8();
          if (lVar5 == 0) goto LAB_08994ab0;
          FUN_089f0bbc(lVar5,uVar6,0);
        }
        if (*(char *)(unaff_x27 + 0xc32) == '\0') {
          FUN_04947ee4();
          *(undefined1 *)(unaff_x27 + 0xc32) = 1;
        }
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_088e96e0();
        *(long *)(unaff_x20 + 0x30) = lVar5;
        thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
        bVar2 = lVar5 == 0;
        uVar3 = 0x360;
        goto FUN_08994a6c;
      }
    }
  }
  else {
    if (uVar4 <= unaff_w24) {
      if (0x1362 < uVar4) {
        if (uVar4 < 0x15e3) {
          if (uVar4 == 0x1382) {
            lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e3d0);
            FUN_089d43cc(lVar5,0);
            if (*(int *)(unaff_x20 + 0x38) == 0x270) {
              uVar6 = FUN_0898d9e8();
              if (lVar5 == 0) goto LAB_08994ab0;
              FUN_089d4908(lVar5,uVar6,0);
            }
            if (*(char *)(unaff_x27 + 0xc32) == '\0') {
              FUN_04947ee4();
              *(undefined1 *)(unaff_x27 + 0xc32) = 1;
            }
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            FUN_088e96e0();
            *(long *)(unaff_x20 + 0x30) = lVar5;
            thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
            bVar2 = lVar5 == 0;
            uVar3 = 0x270;
          }
          else {
            if (uVar4 != 0x15e2) goto LAB_08993b44;
            lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e3d8);
            FUN_089d5bb0(lVar5,0);
            if (*(int *)(unaff_x20 + 0x38) == 700) {
              uVar6 = FUN_0898da8c();
              if (lVar5 == 0) goto LAB_08994ab0;
              FUN_089d5f58(lVar5,uVar6,0);
            }
            if (*(char *)(unaff_x27 + 0xc32) == '\0') {
              FUN_04947ee4();
              *(undefined1 *)(unaff_x27 + 0xc32) = 1;
            }
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_049a583c();
            }
            FUN_088e96e0();
            *(long *)(unaff_x20 + 0x30) = lVar5;
            thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
            bVar2 = lVar5 == 0;
            uVar3 = 700;
          }
          goto FUN_08994a6c;
        }
        if (uVar4 == 0x15ea) {
          lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e3e0);
          FUN_089d6b64(lVar5,0);
          if (*(int *)(unaff_x20 + 0x38) == 0x2bd) {
            uVar6 = FUN_0898db30();
            if (lVar5 == 0) goto LAB_08994ab0;
            FUN_089d6f0c(lVar5,uVar6,0);
          }
          if (*(char *)(unaff_x27 + 0xc32) == '\0') {
            FUN_04947ee4();
            *(undefined1 *)(unaff_x27 + 0xc32) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_088e96e0();
          *(long *)(unaff_x20 + 0x30) = lVar5;
          thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
          bVar2 = lVar5 == 0;
          uVar3 = 0x2bd;
          goto FUN_08994a6c;
        }
        if (uVar4 == 0x162a) {
          lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e3e8);
          FUN_089d8ba4(lVar5,0);
          if (*(int *)(unaff_x20 + 0x38) == 0x2c5) {
            uVar6 = FUN_0898dbd4();
            if (lVar5 == 0) goto LAB_08994ab0;
            FUN_089d8ff4(lVar5,uVar6,0);
          }
          if (*(char *)(unaff_x27 + 0xc32) == '\0') {
            FUN_04947ee4();
            *(undefined1 *)(unaff_x27 + 0xc32) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_088e96e0();
          *(long *)(unaff_x20 + 0x30) = lVar5;
          thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
          bVar2 = lVar5 == 0;
          uVar3 = 0x2c5;
          goto FUN_08994a6c;
        }
        if (uVar4 == unaff_w24) {
          lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e3f0);
          MetaXRAcousticNativeInterface_UnityNativeInterface__ovrAudio_ControlZoneReset(lVar5,0);
          if (*(int *)(unaff_x20 + 0x38) == 0x2c6) {
            uVar6 = FUN_0898dc78();
            if (lVar5 == 0) goto LAB_08994ab0;
            FUN_089d9e68(lVar5,uVar6,0);
          }
          if (*(char *)(unaff_x27 + 0xc32) == '\0') {
            FUN_04947ee4();
            *(undefined1 *)(unaff_x27 + 0xc32) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_088e96e0();
          *(long *)(unaff_x20 + 0x30) = lVar5;
          thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
          bVar2 = lVar5 == 0;
          uVar3 = 0x2c6;
          goto FUN_08994a6c;
        }
        goto LAB_08993b44;
      }
      if (uVar4 < 0x13) {
        if (uVar4 == 8) {
          uVar3 = FUN_088e76b0();
          *(undefined4 *)(unaff_x20 + 0x18) = uVar3;
        }
        else {
          if (uVar4 != 0x12) goto LAB_08993b44;
          if (*(long *)(unaff_x20 + 0x20) == 0) {
            uVar6 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4d5e8);
            FUN_089c5d74(uVar6,0);
            *(undefined8 *)(unaff_x20 + 0x20) = uVar6;
            thunk_FUN_049ee3d8(unaff_x20 + 0x20,uVar6);
          }
          if (*(char *)(unaff_x27 + 0xc32) == '\0') {
            FUN_04947ee4();
            *(undefined1 *)(unaff_x27 + 0xc32) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_088e96e0();
        }
        goto LAB_08994a74;
      }
      if (uVar4 == 0x18) {
        uVar3 = FUN_088e76b0();
        *(undefined4 *)(unaff_x20 + 0x28) = uVar3;
        goto LAB_08994a74;
      }
      if (uVar4 == 0x12f2) {
        lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e3c0);
        FUN_089d0788(lVar5,0);
        if (*(int *)(unaff_x20 + 0x38) == 0x25e) {
          uVar6 = FUN_0898d8a0();
          if (lVar5 == 0) goto LAB_08994ab0;
          FUN_089d0ba8(lVar5,uVar6,0);
        }
        if (*(char *)(unaff_x27 + 0xc32) == '\0') {
          FUN_04947ee4();
          *(undefined1 *)(unaff_x27 + 0xc32) = 1;
        }
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_088e96e0();
        *(long *)(unaff_x20 + 0x30) = lVar5;
        thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
        bVar2 = lVar5 == 0;
        uVar3 = 0x25e;
        goto FUN_08994a6c;
      }
      if (uVar4 != 0x1362) goto LAB_08993b44;
      lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e3c8);
      FUN_089d16a8(lVar5,0);
      if (*(int *)(unaff_x20 + 0x38) == 0x26c) {
        uVar6 = FUN_0898d944();
        if (lVar5 == 0) goto LAB_08994ab0;
        FUN_089d1d68(lVar5,uVar6,0);
      }
      if (*(char *)(unaff_x27 + 0xc32) == '\0') {
        FUN_04947ee4();
        *(undefined1 *)(unaff_x27 + 0xc32) = 1;
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_088e96e0();
      *(long *)(unaff_x20 + 0x30) = lVar5;
      thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
      bVar2 = lVar5 == 0;
      uVar3 = 0x26c;
      goto FUN_08994a6c;
    }
    if (unaff_w29 < uVar4) {
      if (uVar4 < 0x16a3) {
        if (uVar4 == 0x168a) {
          lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e420);
          FUN_089e0af0(lVar5,0);
          if (*(int *)(unaff_x20 + 0x38) == 0x2d1) {
            uVar6 = FUN_0898e050();
            if (lVar5 == 0) goto LAB_08994ab0;
            FUN_089e0e40(lVar5,uVar6,0);
          }
          if (*(char *)(unaff_x27 + 0xc32) == '\0') {
            FUN_04947ee4();
            *(undefined1 *)(unaff_x27 + 0xc32) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_088e96e0();
          *(long *)(unaff_x20 + 0x30) = lVar5;
          thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
          bVar2 = lVar5 == 0;
          uVar3 = 0x2d1;
          goto FUN_08994a6c;
        }
        if (uVar4 == 0x169a) {
          param_1 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e428);
          param_2 = 0;
          goto code_r0x08993e8c;
        }
        if (uVar4 == 0x16a2) {
          lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e430);
          FUN_089e2b94(lVar5,0);
          if (*(int *)(unaff_x20 + 0x38) == 0x2d4) {
            uVar6 = FUN_0898e198();
            if (lVar5 == 0) goto LAB_08994ab0;
            FUN_089e2ee4(lVar5,uVar6,0);
          }
          if (*(char *)(unaff_x27 + 0xc32) == '\0') {
            FUN_04947ee4();
            *(undefined1 *)(unaff_x27 + 0xc32) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_088e96e0();
          *(long *)(unaff_x20 + 0x30) = lVar5;
          thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
          bVar2 = lVar5 == 0;
          uVar3 = 0x2d4;
          goto FUN_08994a6c;
        }
      }
      else {
        if (uVar4 == 0x1a42) {
          lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e438);
          FUN_089e8050(lVar5,0);
          if (*(int *)(unaff_x20 + 0x38) == 0x348) {
            uVar6 = FUN_0898e23c();
            if (lVar5 == 0) goto LAB_08994ab0;
            FUN_089e87bc(lVar5,uVar6,0);
          }
          if (*(char *)(unaff_x27 + 0xc32) == '\0') {
            FUN_04947ee4();
            *(undefined1 *)(unaff_x27 + 0xc32) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_088e96e0();
          *(long *)(unaff_x20 + 0x30) = lVar5;
          thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
          bVar2 = lVar5 == 0;
          uVar3 = 0x348;
          goto FUN_08994a6c;
        }
        if (uVar4 == 0x1a4a) {
          lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e440);
          FUN_089e967c(lVar5,0);
          if (*(int *)(unaff_x20 + 0x38) == 0x349) {
            uVar6 = FUN_0898e2e0();
            if (lVar5 == 0) goto LAB_08994ab0;
            Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_Collections_IEnumerator_Reset
                      (lVar5,uVar6,0);
          }
          if (*(char *)(unaff_x27 + 0xc32) == '\0') {
            FUN_04947ee4();
            *(undefined1 *)(unaff_x27 + 0xc32) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_088e96e0();
          *(long *)(unaff_x20 + 0x30) = lVar5;
          thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
          bVar2 = lVar5 == 0;
          uVar3 = 0x349;
          goto FUN_08994a6c;
        }
        if (uVar4 == unaff_w23) {
          lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e448);
          FUN_089ea948(lVar5,0);
          if (*(int *)(unaff_x20 + 0x38) == 0x34a) {
            uVar6 = FUN_0898e384();
            if (lVar5 == 0) goto LAB_08994ab0;
            FUN_089eb230(lVar5,uVar6,0);
          }
          if (*(char *)(unaff_x27 + 0xc32) == '\0') {
            FUN_04947ee4();
            *(undefined1 *)(unaff_x27 + 0xc32) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_088e96e0();
          *(long *)(unaff_x20 + 0x30) = lVar5;
          thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
          bVar2 = lVar5 == 0;
          uVar3 = 0x34a;
          goto FUN_08994a6c;
        }
      }
    }
    else {
      if (uVar4 < 0x164b) {
        if (uVar4 == 0x1642) {
          lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e3f8);
          FUN_089daa68(lVar5,0);
          if (*(int *)(unaff_x20 + 0x38) == 0x2c8) {
            uVar6 = FUN_0898dd1c();
            if (lVar5 == 0) goto LAB_08994ab0;
            FUN_089daeb8(lVar5,uVar6,0);
          }
          if (*(char *)(unaff_x27 + 0xc32) == '\0') {
            FUN_04947ee4();
            *(undefined1 *)(unaff_x27 + 0xc32) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_088e96e0();
          *(long *)(unaff_x20 + 0x30) = lVar5;
          thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
          bVar2 = lVar5 == 0;
          uVar3 = 0x2c8;
        }
        else {
          if (uVar4 != 0x164a) goto LAB_08993b44;
          lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e400);
          FUN_089db9dc(lVar5,0);
          if (*(int *)(unaff_x20 + 0x38) == 0x2c9) {
            uVar6 = FUN_0898ddc0();
            if (lVar5 == 0) goto LAB_08994ab0;
            FUN_089dc394(lVar5,uVar6,0);
          }
          if (*(char *)(unaff_x27 + 0xc32) == '\0') {
            FUN_04947ee4();
            *(undefined1 *)(unaff_x27 + 0xc32) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_088e96e0();
          *(long *)(unaff_x20 + 0x30) = lVar5;
          thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
          bVar2 = lVar5 == 0;
          uVar3 = 0x2c9;
        }
        goto FUN_08994a6c;
      }
      if (uVar4 == 0x1652) {
        lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e408);
        FUN_089dd09c(lVar5,0);
        if (*(int *)(unaff_x20 + 0x38) == 0x2ca) {
          uVar6 = FUN_0898de64();
          if (lVar5 == 0) goto LAB_08994ab0;
          FUN_089dd4dc(lVar5,uVar6,0);
        }
        if (*(char *)(unaff_x27 + 0xc32) == '\0') {
          FUN_04947ee4();
          *(undefined1 *)(unaff_x27 + 0xc32) = 1;
        }
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_088e96e0();
        *(long *)(unaff_x20 + 0x30) = lVar5;
        thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
        bVar2 = lVar5 == 0;
        uVar3 = 0x2ca;
        goto FUN_08994a6c;
      }
      if (uVar4 == 0x166a) {
        lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e410);
        FUN_089dedcc(lVar5,0);
        if (*(int *)(unaff_x20 + 0x38) == 0x2cd) {
          uVar6 = FUN_0898df08();
          if (lVar5 == 0) goto LAB_08994ab0;
          FUN_089df0dc(lVar5,uVar6,0);
        }
        if (*(char *)(unaff_x27 + 0xc32) == '\0') {
          FUN_04947ee4();
          *(undefined1 *)(unaff_x27 + 0xc32) = 1;
        }
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_088e96e0();
        *(long *)(unaff_x20 + 0x30) = lVar5;
        thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
        bVar2 = lVar5 == 0;
        uVar3 = 0x2cd;
        goto FUN_08994a6c;
      }
      if (uVar4 == unaff_w29) {
        lVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4e418);
        FUN_089dfba0(lVar5,0);
        if (*(int *)(unaff_x20 + 0x38) == 0x2d0) {
          uVar6 = FUN_0898dfac();
          if (lVar5 == 0) goto LAB_08994ab0;
          FUN_089dfef0(lVar5,uVar6,0);
        }
        if (*(char *)(unaff_x27 + 0xc32) == '\0') {
          FUN_04947ee4();
          *(undefined1 *)(unaff_x27 + 0xc32) = 1;
        }
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_088e96e0();
        *(long *)(unaff_x20 + 0x30) = lVar5;
        thunk_FUN_049ee3d8(unaff_x20 + 0x30,lVar5);
        bVar2 = lVar5 == 0;
        uVar3 = 0x2d0;
        goto FUN_08994a6c;
      }
    }
  }
LAB_08993b44:
  uVar6 = FUN_088ed628(*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 0x10) = uVar6;
  thunk_FUN_049ee3d8(unaff_x20 + 0x10,uVar6);
  goto LAB_08994a74;
}


