/*
FUNCTION_NAME: FUN_01c54618
ENTRY_POINT: 01c54618
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


void FUN_01c54618(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fed645 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed645 = 1;
  }
  uVar6 = *(undefined8 *)(param_5 + 0x58);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(uVar6,0,0);
  if ((uVar2 & 1) == 0) {
    lVar7 = *(long *)(param_5 + 0x58);
  }
  else {
    lVar7 = *(long *)(param_5 + 0x58);
    if (lVar7 == 0) goto LAB_01c54b04;
    if (*(char *)(lVar7 + 0x20) != '\0') {
      lVar7 = *(long *)(param_5 + 0x60);
      if (DAT_03fed257 == '\0') {
        thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
        DAT_03fed257 = '\x01';
      }
      puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
      if (lVar7 != 0) {
        puVar4 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        FUN_03959ef0(*puVar4,puVar4[1],puVar4[2],lVar7,0);
        lVar7 = *(long *)(param_5 + 0x60);
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        if (lVar7 != 0) {
          puVar4 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
          uVar2 = (ulong)(uint)puVar4[1];
          uVar12 = (ulong)(uint)puVar4[2];
          FUN_0395a028(*puVar4,uVar2,uVar12,lVar7,0);
          lVar7 = FUN_0391c27c(param_5,0);
          if (lVar7 != 0) {
            uVar6 = FUN_039274a0(lVar7,0);
            uVar10 = uVar2;
            uVar13 = uVar12;
            lVar7 = FUN_0391c27c(param_5,0);
            plVar5 = *(long **)(param_5 + 0x58);
            if ((((plVar5 != (long *)0x0) &&
                 (lVar3 = (**(code **)(*plVar5 + 0x338))(plVar5,*(undefined8 *)(*plVar5 + 0x340)),
                 lVar3 != 0)) && (lVar3 = FUN_0391c27c(lVar3,0), lVar3 != 0)) &&
               (FUN_03928d34(lVar3,0), lVar7 != 0)) {
              uVar8 = FUN_0392a520(lVar7,0);
              lVar7 = FUN_0391c27c(param_5,0);
              if (lVar7 != 0) {
                uVar8 = FUN_03927438(uVar8,uVar10,uVar13,lVar7,0);
                uVar11 = uVar10;
                uVar14 = uVar13;
                lVar7 = FUN_0391c27c(param_5,0);
                lVar3 = FUN_0391c27c(param_5,0);
                if ((lVar3 != 0) && (uVar9 = FUN_03929130(lVar3,0), lVar7 != 0)) {
                  thunk_FUN_0392a110(uVar8,uVar10,uVar13,uVar9,uVar11,uVar14,lVar7,0);
                  if (*(char *)(param_5 + 0x3c) == '\0') {
                    return;
                  }
                  lVar7 = FUN_0391c27c(param_5,0);
                  if (lVar7 != 0) {
                    uVar8 = FUN_039274a0(lVar7,0);
                    lVar7 = FUN_0391c27c(param_5,0);
                    if (lVar7 != 0) {
                      FUN_03928f54(uVar6,uVar2,uVar12,param_4,lVar7,0);
                      lVar7 = FUN_0391c27c(param_5,0);
                      lVar3 = FUN_0391c27c(param_5,0);
                      if (lVar3 != 0) {
                        uVar6 = FUN_039274a0(lVar3,0);
                        FUN_03925dbc(0);
                        FUN_03914490(uVar6,uVar2,uVar12,param_4,uVar8,uVar10,uVar13,uVar9,0);
                        if (lVar7 != 0) {
                          FUN_03928f54(lVar7,0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_01c54b04;
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_0391f968(lVar7,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_5 + 0x58) != 0) {
    if (*(char *)(*(long *)(param_5 + 0x58) + 0x20) != '\0') {
      return;
    }
    if (*(long *)(param_5 + 0x60) != 0) {
      uVar2 = FUN_0395a324(*(long *)(param_5 + 0x60),0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar7 = FUN_0391c27c(param_5,0);
      lVar3 = FUN_0391c27c(param_5,0);
      if (lVar3 != 0) {
        uVar6 = FUN_03928fd8(lVar3,0);
        if (DAT_03fed256 == '\0') {
          thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__)
          ;
          DAT_03fed256 = '\x01';
        }
        puVar4 = *(undefined4 **)
                  (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                  0xb8);
        uVar15 = *puVar4;
        uVar16 = puVar4[1];
        uVar17 = puVar4[2];
        uVar18 = puVar4[3];
        FUN_03925cf4(0);
        FUN_03914490(uVar6,param_2,param_3,param_4,uVar15,uVar16,uVar17,uVar18,0);
        if (lVar7 != 0) {
          FUN_03929060(lVar7,0);
          lVar7 = *(long *)(param_5 + 0x60);
          if (DAT_03fed257 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed257 = '\x01';
          }
          puVar1 = Method_Mono_Security_PKCS7_EncryptedData__ctor__;
          if (lVar7 != 0) {
            puVar4 = *(undefined4 **)
                      (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
            FUN_03959ef0(*puVar4,puVar4[1],puVar4[2],lVar7,0);
            lVar7 = *(long *)(param_5 + 0x60);
            if (DAT_03fed257 == '\0') {
              thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
              DAT_03fed257 = '\x01';
            }
            if (lVar7 != 0) {
              puVar4 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
              FUN_0395a028(*puVar4,puVar4[1],puVar4[2],lVar7,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_01c54b04:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


