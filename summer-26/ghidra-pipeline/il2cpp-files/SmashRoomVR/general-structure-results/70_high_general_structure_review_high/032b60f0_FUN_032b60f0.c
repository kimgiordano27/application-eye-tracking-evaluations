/*
FUNCTION_NAME: FUN_032b60f0
ENTRY_POINT: 032b60f0
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


void FUN_032b60f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff589f & 1) == 0) {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    thunk_FUN_01ad9084(PTR_DAT_03d86d08);
    thunk_FUN_01ad9084(PTR_DAT_03d86d38);
    thunk_FUN_01ad9084(PTR_DAT_03d86d40);
    thunk_FUN_01ad9084(PTR_DAT_03d86d48);
    thunk_FUN_01ad9084(PTR_DAT_03d86d50);
    thunk_FUN_01ad9084(PTR_DAT_03d86d18);
    thunk_FUN_01ad9084(PTR_DAT_03d86d58);
    thunk_FUN_01ad9084(PTR_DAT_03d86d60);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d86d68);
    DAT_03ff589f = 1;
  }
  plVar8 = (long *)(param_1 + 0x40);
  lVar9 = *plVar8;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03923030(lVar9,0);
  if ((uVar4 & 1) == 0) {
    lVar9 = thunk_FUN_01afaadc(*(undefined8 *)
                                Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    FUN_0391fe00(lVar9,*(undefined8 *)PTR_DAT_03d86d68,0);
    *plVar8 = lVar9;
    thunk_FUN_01b4f09c(plVar8,lVar9);
    if (*plVar8 == 0) goto LAB_032b6528;
    lVar9 = FUN_0391fab4(*plVar8,0);
    uVar5 = FUN_0391c27c(param_1,0);
    if (lVar9 == 0) goto LAB_032b6528;
    FUN_03929660(lVar9,uVar5,0,0);
    if (*plVar8 == 0) goto LAB_032b6528;
    lVar9 = FUN_0391fab4(*plVar8,0);
    if (DAT_03fed257 == '\0') {
      thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
      DAT_03fed257 = '\x01';
    }
    if (lVar9 == 0) goto LAB_032b6528;
    puVar6 = *(undefined4 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
    FUN_039282dc(*puVar6,puVar6[1],puVar6[2],lVar9,0);
    if (*plVar8 == 0) goto LAB_032b6528;
    lVar9 = FUN_0391fab4(*plVar8,0);
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    if (lVar9 == 0) goto LAB_032b6528;
    puVar6 = *(undefined4 **)
              (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
              0xb8);
    FUN_03929060(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar9,0);
  }
  puVar3 = PTR_DAT_03d86d38;
  puVar2 = PTR_DAT_03d86d18;
  plVar10 = (long *)(param_1 + 0x58);
  lVar9 = *plVar10;
  lVar7 = *(long *)(param_1 + 0x50);
  if (lVar9 == 0) {
    if (lVar7 == 0) goto LAB_032b6528;
LAB_032b6328:
    uVar5 = FUN_01b47fd0(*(undefined8 *)PTR_DAT_03d86d58,*(undefined4 *)(lVar7 + 0x18));
    lVar9 = thunk_FUN_01afaadc(*(undefined8 *)puVar2);
    FUN_02b592d8(lVar9,uVar5,*(undefined8 *)puVar3);
    *plVar10 = lVar9;
    thunk_FUN_01b4f09c(plVar10,lVar9);
    if (*plVar10 == 0) goto LAB_032b6528;
    uVar5 = FUN_02b59c0c(*plVar10,*(undefined8 *)PTR_DAT_03d86d08);
    *(undefined8 *)(param_1 + 0xa8) = uVar5;
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0xa8),uVar5);
    lVar9 = *(long *)(param_1 + 0x58);
    if (lVar9 == 0) goto LAB_032b6528;
  }
  else {
    if (lVar7 == 0) goto LAB_032b6528;
    if (*(int *)(lVar9 + 0x18) != *(int *)(lVar7 + 0x18)) goto LAB_032b6328;
  }
  puVar3 = PTR_DAT_03d86d50;
  puVar2 = PTR_DAT_03d86d48;
  iVar11 = 0;
  while( true ) {
    if (*(int *)(lVar9 + 0x18) <= iVar11) {
      if (*(int *)(lVar9 + 0x18) < 1) {
        return;
      }
      iVar11 = 0;
      goto LAB_032b6538;
    }
    if (*(long *)(param_1 + 0x50) == 0) break;
    lVar9 = FUN_02b59714(*(long *)(param_1 + 0x50),iVar11,*(undefined8 *)puVar2);
    if (*plVar10 == 0) break;
    lVar7 = FUN_02b59714(*plVar10,iVar11,*(undefined8 *)puVar2);
    if (lVar7 == 0) {
      lVar12 = *plVar10;
      lVar7 = thunk_FUN_01afaadc(*(undefined8 *)PTR_DAT_03d86d60);
      FUN_03081994(lVar7,0);
      if (lVar12 == 0) break;
      FUN_02b59768(lVar12,iVar11,lVar7,*(undefined8 *)puVar3);
    }
    if ((lVar9 == 0) || (lVar7 == 0)) break;
    plVar13 = (long *)(lVar7 + 0x18);
    lVar12 = *plVar13;
    *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(lVar9 + 0x10);
    *(undefined2 *)(lVar7 + 0x14) = *(undefined2 *)(lVar9 + 0x14);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar4 = FUN_03923030(lVar12,0);
    if ((uVar4 & 1) == 0) {
      uVar5 = FUN_032b75ec(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(lVar7 + 0x10));
      lVar7 = thunk_FUN_01afaadc(*(undefined8 *)
                                  Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
      FUN_0391fe00(lVar7,uVar5,0);
      if (lVar7 == 0) break;
      lVar7 = FUN_0391fab4(lVar7,0);
      *plVar13 = lVar7;
      thunk_FUN_01b4f09c(plVar13,lVar7);
    }
    else {
      lVar7 = *plVar13;
    }
    if ((*(long *)(lVar9 + 0x18) == 0) || (FUN_03928280(*(long *)(lVar9 + 0x18),0), lVar7 == 0))
    break;
    FUN_039282dc(lVar7,0);
    if (*(long *)(lVar9 + 0x18) == 0) break;
    FUN_03928fd8(*(long *)(lVar9 + 0x18),0);
    FUN_03929060(lVar7,0);
    lVar9 = *plVar10;
    iVar11 = iVar11 + 1;
    if (lVar9 == 0) break;
  }
LAB_032b6528:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
LAB_032b6538:
  lVar9 = FUN_02b59714(lVar9,iVar11,*(undefined8 *)puVar2);
  if (lVar9 == 0) goto LAB_032b6528;
  uVar4 = FUN_032b5acc(param_1,(long)*(short *)(lVar9 + 0x14));
  if (((uVar4 & 1) == 0) || (*(int *)(param_1 + 0x20) == 2)) {
    if ((*plVar10 == 0) ||
       ((lVar9 = FUN_02b59714(*plVar10,iVar11,*(undefined8 *)puVar2), lVar9 == 0 || (*plVar8 == 0)))
       ) goto LAB_032b6528;
    lVar9 = *(long *)(lVar9 + 0x18);
    uVar5 = FUN_0391fab4(*plVar8,0);
    if (lVar9 == 0) goto LAB_032b6528;
  }
  else {
    if (((*plVar10 == 0) ||
        (lVar9 = FUN_02b59714(*plVar10,iVar11,*(undefined8 *)puVar2), lVar9 == 0)) ||
       (lVar7 = *plVar10, lVar7 == 0)) goto LAB_032b6528;
    lVar9 = *(long *)(lVar9 + 0x18);
    lVar12 = FUN_02b59714(lVar7,iVar11,*(undefined8 *)puVar2);
    if (((lVar12 == 0) ||
        (lVar7 = FUN_02b59714(lVar7,(long)*(short *)(lVar12 + 0x14),*(undefined8 *)puVar2),
        lVar7 == 0)) || (lVar9 == 0)) goto LAB_032b6528;
    uVar5 = *(undefined8 *)(lVar7 + 0x18);
  }
  FUN_03929660(lVar9,uVar5,0,0);
  lVar9 = *plVar10;
  if (lVar9 == 0) goto LAB_032b6528;
  iVar11 = iVar11 + 1;
  if (*(int *)(lVar9 + 0x18) <= iVar11) {
    return;
  }
  goto LAB_032b6538;
}


