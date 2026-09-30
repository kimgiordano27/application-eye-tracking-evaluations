/*
FUNCTION_NAME: FUN_032b6638
ENTRY_POINT: 032b6638
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


void FUN_032b6638(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong uVar21;
  undefined8 uVar22;
  float fVar23;
  ulong uVar24;
  float fVar25;
  
  if ((DAT_03ff58a0 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_173);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_<GetValueFromBag>b__3_0__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(PTR_DAT_03d86d00);
    thunk_FUN_01ad9084(PTR_DAT_03d86d70);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItemJson_<>c_<FromControlItems>b__25_3__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItemJson_<>c_<ToLayout>b__24_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d86d48);
    thunk_FUN_01ad9084(PTR_DAT_03d86d78);
    thunk_FUN_01ad9084(Method_ca_<>c_b__);
    thunk_FUN_01ad9084(PTR_DAT_03d86d80);
    thunk_FUN_01ad9084(PTR_DAT_03d86d88);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d80b38);
    thunk_FUN_01ad9084(PTR_DAT_03d86d90);
    thunk_FUN_01ad9084(PTR_DAT_03d86d98);
    DAT_03ff58a0 = 1;
  }
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_1 + 0x32) == '\0') {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  plVar7 = (long *)(param_1 + 0x48);
  lVar9 = *plVar7;
  if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03923030(lVar9,0);
  if ((uVar3 & 1) == 0) {
    lVar9 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    FUN_0391fe00(lVar9,*(undefined8 *)PTR_DAT_03d80b38,0);
    *plVar7 = lVar9;
    thunk_FUN_01b4f09c(plVar7,lVar9);
    if (*plVar7 == 0) goto LAB_032b6f90;
    lVar9 = FUN_0391fab4(*plVar7,0);
    uVar4 = FUN_0391c27c(param_1,0);
    if (lVar9 == 0) goto LAB_032b6f90;
    FUN_03929660(lVar9,uVar4,0,0);
    if (*plVar7 == 0) goto LAB_032b6f90;
    lVar9 = FUN_0391fab4(*plVar7,0);
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    if (lVar9 == 0) goto LAB_032b6f90;
    puVar8 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    FUN_039282dc(*puVar8,puVar8[1],puVar8[2],lVar9,0);
    if (*plVar7 == 0) goto LAB_032b6f90;
    lVar9 = FUN_0391fab4(*plVar7,0);
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    if (lVar9 == 0) goto LAB_032b6f90;
    puVar8 = *(undefined4 **)
              (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
              0xb8);
    FUN_03929060(*puVar8,puVar8[1],puVar8[2],puVar8[3],lVar9,0);
  }
  plVar10 = (long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__;
  plVar11 = (long *)(param_1 + 0x60);
  lVar9 = *plVar11;
  if (lVar9 == 0) {
    uVar3 = (ulong)*(uint *)(param_1 + 0x70);
LAB_032b68e4:
    uVar4 = FUN_01b47fd0(*(undefined8 *)PTR_DAT_03d86d80,uVar3);
    lVar9 = thunk_FUN_01afaadc(*(undefined8 *)Method_ca_<>c_b__);
    FUN_02b592d8(lVar9,uVar4,*(undefined8 *)PTR_DAT_03d86d70);
    *plVar11 = lVar9;
    thunk_FUN_01b4f09c(plVar11,lVar9);
    if (*plVar11 == 0) goto LAB_032b6f90;
    uVar4 = FUN_02b59c0c(*plVar11,*(undefined8 *)PTR_DAT_03d86d00);
    *(undefined8 *)(param_1 + 0xb0) = uVar4;
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0xb0),uVar4);
    lVar9 = *(long *)(param_1 + 0x60);
    if (lVar9 == 0) goto LAB_032b6f90;
  }
  else {
    uVar3 = (ulong)*(uint *)(param_1 + 0x70);
    if ((long)*(int *)(lVar9 + 0x18) != uVar3) goto LAB_032b68e4;
  }
  uVar3 = 0;
  lVar12 = 0x20;
  while( true ) {
    if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar3) {
      return;
    }
    lVar9 = *(long *)(param_1 + 0x80);
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar3) {
LAB_032b6fc4:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    if (*(long *)(param_1 + 0x50) == 0) break;
    lVar9 = FUN_02b59714(*(long *)(param_1 + 0x50),(long)*(short *)(lVar9 + lVar12),
                         *(undefined8 *)PTR_DAT_03d86d48);
    if (*plVar11 == 0) break;
    lVar5 = FUN_02b59714(*plVar11,uVar3 & 0xffffffff,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItemJson_<>c_<ToLayout>b__24_0__
                        );
    if (lVar5 == 0) {
      lVar13 = *plVar11;
      lVar5 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d86d88);
      FUN_03081994(lVar5,0);
      if (lVar13 == 0) break;
      FUN_02b59768(lVar13,uVar3 & 0xffffffff,lVar5,*(undefined8 *)PTR_DAT_03d86d78);
    }
    lVar13 = *(long *)(param_1 + 0x80);
    if (lVar13 == 0) break;
    if (*(uint *)(lVar13 + 0x18) <= uVar3) goto LAB_032b6fc4;
    if (lVar5 == 0) break;
    plVar14 = (long *)(lVar5 + 0x18);
    lVar15 = *plVar14;
    *(undefined2 *)(lVar5 + 0x10) = *(undefined2 *)(lVar13 + lVar12);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_03922f24(lVar15,0,0);
    if ((uVar6 & 1) != 0) {
      if (lVar9 == 0) break;
      uVar4 = FUN_032b75ec(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(lVar9 + 0x10));
      uVar4 = FUN_02edd6e8(uVar4,*(undefined8 *)PTR_DAT_03d86d90,0);
      lVar13 = thunk_FUN_01afaadc(*(undefined8 *)
                                   Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
      FUN_0391fe00(lVar13,uVar4,0);
      if (lVar13 == 0) break;
      lVar13 = FUN_01ed7044(lVar13,*(undefined8 *)
                                    Method_UnityEngine_UIElements_UxmlLongAttributeDescription_<>c_<GetValueFromBag>b__3_0__
                           );
      *plVar14 = lVar13;
      thunk_FUN_01b4f09c(plVar14,lVar13);
      if (*plVar14 == 0) break;
      FUN_0395a20c(0x3f800000,*plVar14,0);
      if (*plVar14 == 0) break;
      FUN_0395a360(*plVar14,1,0);
      plVar10 = (long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__;
      if (*plVar14 == 0) break;
      FUN_0395a294(*plVar14,0,0);
      if (*plVar14 == 0) break;
      FUN_0395a4a4(*plVar14,3,0);
    }
    if ((*plVar14 == 0) || (lVar13 = FUN_0391c2b8(*plVar14,0), lVar13 == 0)) break;
    lVar15 = FUN_0391fab4(lVar13,0);
    if ((*plVar7 == 0) || (uVar4 = FUN_0391fab4(*plVar7,0), lVar15 == 0)) break;
    FUN_03929660(lVar15,uVar4,0,0);
    lVar15 = FUN_0391fab4(lVar13,0);
    if (((lVar9 == 0) || (*(long *)(lVar9 + 0x18) == 0)) ||
       (FUN_03928d34(*(long *)(lVar9 + 0x18),0), lVar15 == 0)) break;
    FUN_03928dd4(lVar15,0);
    lVar15 = FUN_0391fab4(lVar13,0);
    if ((*(long *)(lVar9 + 0x18) == 0) || (FUN_039274a0(*(long *)(lVar9 + 0x18),0), lVar15 == 0))
    break;
    FUN_03928f54(lVar15,0);
    plVar14 = (long *)(lVar5 + 0x20);
    lVar5 = *plVar14;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_03922f24(lVar5,0,0);
    if ((uVar6 & 1) != 0) {
      uVar4 = FUN_032b75ec(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(lVar9 + 0x10));
      uVar4 = FUN_02edd6e8(uVar4,*(undefined8 *)PTR_DAT_03d86d98,0);
      lVar9 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
      FUN_0391fe00(lVar9,uVar4,0);
      if (lVar9 == 0) break;
      lVar9 = FUN_01ed7044(lVar9,*(undefined8 *)StringLiteral_173);
      *plVar14 = lVar9;
      thunk_FUN_01b4f09c(plVar14,lVar9);
      if (*plVar14 == 0) break;
      FUN_0395b40c(*plVar14,0,0);
    }
    lVar9 = *(long *)(param_1 + 0x80);
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_032b6fc4;
    lVar9 = lVar9 + lVar12;
    fVar18 = *(float *)(lVar9 + 8);
    uVar6 = (ulong)*(uint *)(lVar9 + 0xc);
    if (uVar1 < 2) {
      uVar4 = FUN_0320e700();
    }
    else {
      uVar4 = FUN_0320ba80(*(undefined4 *)(lVar9 + 4),0);
    }
    lVar9 = *(long *)(param_1 + 0x80);
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_032b6fc4;
    lVar9 = lVar9 + lVar12;
    fVar19 = *(float *)(lVar9 + 0x14);
    fVar23 = *(float *)(lVar9 + 0x18);
    if (uVar1 < 2) {
      fVar16 = (float)FUN_0320e700(0);
    }
    else {
      fVar16 = (float)FUN_0320ba80(*(undefined4 *)(lVar9 + 0x10),0);
    }
    if (DAT_03fed25c == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25c = '\x01';
    }
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (DAT_03fed25f == '\0') {
      thunk_FUN_01ad9084(plVar10);
      DAT_03fed25f = '\x01';
    }
    fVar16 = fVar16 - (float)uVar4;
    fVar19 = fVar19 - fVar18;
    lVar9 = *(long *)(*plVar10 + 0xb8);
    fVar23 = fVar23 - (float)uVar6;
    uVar21 = (ulong)*(uint *)(lVar9 + 0x40);
    uVar24 = (ulong)*(uint *)(lVar9 + 0x44);
    fVar25 = fVar16;
    uVar17 = FUN_0391419c(*(undefined4 *)(lVar9 + 0x3c),uVar21,uVar24,fVar16,fVar19,fVar23,0);
    lVar9 = *(long *)(param_1 + 0x80);
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_032b6fc4;
    if (*plVar14 == 0) break;
    FUN_0395bff8(*(undefined4 *)(lVar9 + lVar12 + 0x1c),*plVar14,0);
    lVar9 = *(long *)(param_1 + 0x80);
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_032b6fc4;
    if (*plVar14 == 0) break;
    fVar20 = *(float *)(lVar9 + lVar12 + 0x1c);
    fVar19 = SQRT(fVar23 * fVar23 + fVar16 * fVar16 + fVar19 * fVar19);
    FUN_0395c080(fVar19 + fVar20 + fVar20,*plVar14,0);
    if (*plVar14 == 0) break;
    FUN_0395c108(*plVar14,0,0);
    lVar9 = *plVar14;
    if (DAT_03fed25f == '\0') {
      thunk_FUN_01ad9084(plVar10);
      DAT_03fed25f = '\x01';
    }
    if (lVar9 == 0) break;
    uVar22 = *(undefined8 *)(*(long *)(*plVar10 + 0xb8) + 0x3c);
    fVar23 = (float)((ulong)uVar22 >> 0x20) * fVar19 * 0.5;
    FUN_0395bf24(CONCAT44(fVar23,(float)uVar22 * fVar19 * 0.5),fVar23,
                 fVar19 * *(float *)(*(long *)(*plVar10 + 0xb8) + 0x44) * 0.5,lVar9,0);
    if ((*plVar14 == 0) || (lVar9 = FUN_0391c2b8(*plVar14,0), lVar9 == 0)) break;
    lVar5 = FUN_0391fab4(lVar9,0);
    uVar22 = FUN_0391fab4(lVar13,0);
    if (lVar5 == 0) break;
    FUN_03929660(lVar5,uVar22,0,0);
    lVar5 = FUN_0391fab4(lVar9,0);
    if (lVar5 == 0) break;
    FUN_039282dc(uVar4,fVar18,uVar6,lVar5,0);
    lVar9 = FUN_0391fab4(lVar9,0);
    if (lVar9 == 0) break;
    FUN_03929060(uVar17,uVar21,uVar24,fVar25,lVar9,0);
    lVar9 = *plVar11;
    uVar3 = uVar3 + 1;
    lVar12 = lVar12 + 0x20;
    if (lVar9 == 0) break;
  }
LAB_032b6f90:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


