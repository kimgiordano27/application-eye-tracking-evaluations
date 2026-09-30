/*
FUNCTION_NAME: FUN_01c385c0
ENTRY_POINT: 01c385c0
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


void FUN_01c385c0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03fed54c & 1) == 0) {
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_668BB69E184E0C32DC3BC488001C506C87EE5A95C7E7B6B87D24C3A6DC779956
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_6708B572BDBE5D5E79701DBB9744AF74B50FED7608218F2D7BF1B5D87E5A53ED
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_DD97F32586447ECA68A4E5231B898916E465382D916768DE6FE03B6F84DCA67C
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_67856A16DB0550FDAB4D1A9B208B0C155C4679CA116BF867B74ED2A0AA4D2955
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_6DC92D3617F0357376502FBA4CDD465B5423818DABE8B2CA1A06E1351F2F1C85
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_71F7F6B226CBC11C8B26D506869FAE022928427389882579DB316F36FF34A096
                      );
    DAT_03fed54c = 1;
  }
  plVar10 = (long *)(param_1 + 0x50);
  lVar11 = *plVar10;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar5 = FUN_03922f24(lVar11,0,0);
  puVar3 = 
  Field_<PrivateImplementationDetails>_71F7F6B226CBC11C8B26D506869FAE022928427389882579DB316F36FF34A096
  ;
  if ((uVar5 & 1) == 0) {
    return;
  }
  lVar11 = thunk_FUN_01afaadc(*(undefined8 *)
                               Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
  FUN_0391fe00(lVar11,*(undefined8 *)puVar3,0);
  if (lVar11 != 0) {
    lVar11 = FUN_01ed7044(lVar11,*(undefined8 *)
                                  Field_<PrivateImplementationDetails>_668BB69E184E0C32DC3BC488001C506C87EE5A95C7E7B6B87D24C3A6DC779956
                         );
    *plVar10 = lVar11;
    thunk_FUN_01b4f09c(plVar10,lVar11);
    if (*plVar10 != 0) {
      lVar11 = FUN_0391c27c(*plVar10,0);
      uVar6 = FUN_0391c27c(param_1,0);
      if (lVar11 != 0) {
        FUN_039294c8(lVar11,uVar6,0);
        if (*plVar10 != 0) {
          lVar11 = FUN_0391c27c(*plVar10,0);
          if (DAT_03fed257 == '\0') {
            thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
            DAT_03fed257 = '\x01';
          }
          if (lVar11 != 0) {
            puVar8 = *(undefined4 **)
                      (*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
            FUN_039282dc(*puVar8,puVar8[1],puVar8[2],lVar11,0);
            if (*plVar10 != 0) {
              lVar11 = FUN_0391c27c(*plVar10,0);
              if (DAT_03fed256 == '\0') {
                thunk_FUN_01ad9084(
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__
                                  );
                DAT_03fed256 = '\x01';
              }
              if (lVar11 != 0) {
                puVar8 = *(undefined4 **)
                          (*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                          0xb8);
                FUN_03929060(*puVar8,puVar8[1],puVar8[2],puVar8[3],lVar11,0);
                lVar11 = thunk_FUN_01afaadc(*(undefined8 *)
                                             Field_<PrivateImplementationDetails>_CD9A54ED1F18BF97DB08914E280EA7349E11CA2C4885A4D8052552CEBA84208D
                                           );
                FUN_02b591b0(lVar11,*(undefined8 *)
                                     Field_<PrivateImplementationDetails>_DD97F32586447ECA68A4E5231B898916E465382D916768DE6FE03B6F84DCA67C
                            );
                puVar4 = 
                Field_<PrivateImplementationDetails>_6DC92D3617F0357376502FBA4CDD465B5423818DABE8B2CA1A06E1351F2F1C85
                ;
                puVar3 = 
                Field_<PrivateImplementationDetails>_6708B572BDBE5D5E79701DBB9744AF74B50FED7608218F2D7BF1B5D87E5A53ED
                ;
                lVar7 = *(long *)(param_1 + 0x40);
                if (lVar7 != 0) {
                  iVar12 = 0;
                  while (iVar12 < *(int *)(lVar7 + 0x18)) {
                    lVar7 = FUN_02b59714(lVar7,iVar12,*(undefined8 *)puVar4);
                    if ((lVar7 == 0) || (uVar6 = FUN_0391c27c(lVar7,0), lVar11 == 0))
                    goto LAB_01c38914;
                    lVar7 = *(long *)(lVar11 + 0x10);
                    lVar9 = *(long *)puVar3;
                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                    if (lVar7 == 0) goto LAB_01c38914;
                    uVar1 = *(uint *)(lVar11 + 0x18);
                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                      thunk_FUN_01b4f09c();
                    }
                    else {
                      FUN_02b599e4(lVar11,uVar6,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    lVar7 = *(long *)(param_1 + 0x40);
                    iVar12 = iVar12 + 1;
                    if (lVar7 == 0) goto LAB_01c38914;
                  }
                  lVar7 = *plVar10;
                  if (lVar7 != 0) {
                    *(long *)(lVar7 + 0x178) = lVar11;
                    thunk_FUN_01b4f09c(lVar7 + 0x178,lVar11);
                    lVar11 = *plVar10;
                    if (lVar11 != 0) {
                      *(undefined4 *)(lVar11 + 0x54) = 0;
                      *(undefined1 *)(lVar11 + 0x76) = 0;
                      *(undefined1 *)(lVar11 + 0x78) = 0;
                      uVar6 = *(undefined8 *)(param_1 + 0x30);
                      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar5 = FUN_0391f968(uVar6,0,0);
                      if ((uVar5 & 1) == 0) {
                        return;
                      }
                      if ((*(long *)(param_1 + 0x30) != 0) && (*(long *)(param_1 + 0x50) != 0)) {
                        *(undefined8 *)(*(long *)(param_1 + 0x50) + 0x48) =
                             *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x48);
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
  }
LAB_01c38914:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


