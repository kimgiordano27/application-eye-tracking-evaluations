/*
FUNCTION_NAME: FUN_016d11a4
ENTRY_POINT: 016d11a4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_016d11a4(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  ulong local_70;
  long local_68;
  
  if ((DAT_03778771 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_get_initialValueCaptured__
                      );
    thunk_FUN_00d48444(UnityEngine_Networking_PlayerConnection_MessageEventArgs_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_3518);
    thunk_FUN_00d48444(Method_Unity_XR_CoreUtils_Collections_HashSetList<object>_Remove__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vtstq_s64__);
    thunk_FUN_00d48444(Method_System_Net_Sockets_NetworkStream_EndWrite__);
    thunk_FUN_00d48444(StringLiteral_498);
    DAT_03778771 = 1;
  }
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_get_initialValueCaptured__
  ;
  local_70 = 0;
  if (param_1 == 0) {
LAB_016d16f4:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  iVar8 = *(int *)(param_1 + 0x10);
  if (1 < iVar8) {
    if (DAT_03776618 == '\0') {
      thunk_FUN_00d48444(PTR_DAT_033ee010);
      DAT_03776618 = '\x01';
    }
    uVar9 = FUN_015fd038(param_1,0);
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar3);
    }
    uVar5 = FUN_016c38d4(uVar9,uVar6,0);
    iVar8 = iVar8 - (uVar5 & 1);
    if (iVar8 == 2) {
      uVar6 = FUN_015fa29c(param_1,1,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar3);
      }
      uVar10 = FUN_016c38c4(uVar6,0);
      if ((uVar10 & 1) != 0) {
        uVar9 = thunk_FUN_00d48444(Method_OVRResult<ulong,_OVRPlugin_Result>_get_Status__);
        uVar9 = FUN_015e14fc(uVar9,param_1,0);
        thunk_FUN_00d48444(Method_Obi_ObiNativeList<Vector2>_CopyReplicate__);
        uVar14 = thunk_FUN_00d62348();
        FUN_00ac2be8();
        FUN_016c0654(uVar14,uVar9,0);
        uVar9 = thunk_FUN_00d48444(StringLiteral_9800);
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar14,uVar9);
      }
      iVar8 = 2;
    }
  }
  if (DAT_03776618 == '\0') {
    thunk_FUN_00d48444(PTR_DAT_033ee010);
    DAT_03776618 = '\x01';
  }
  uVar9 = FUN_015fd038(param_1,0);
  local_68 = 0;
  uVar10 = FUN_016d6148(uVar9,*(undefined4 *)(param_1 + 0x10),0x4000,&local_68);
  if ((uVar10 & 1) != 0) {
    return;
  }
  lVar11 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Net_Sockets_NetworkStream_EndWrite__);
  if (lVar11 == 0) goto LAB_016d16f4;
  FUN_013b0f04(lVar11,*(undefined8 *)
                       Method_Unity_XR_CoreUtils_Collections_HashSetList<object>_Remove__);
  if (DAT_03776618 == '\0') {
    thunk_FUN_00d48444(PTR_DAT_033ee010);
    DAT_03776618 = '\x01';
  }
  uVar9 = FUN_015fd038(param_1,0);
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  iVar7 = FUN_016c3848(uVar9,uVar6,0);
  puVar4 = StringLiteral_3518;
  puVar2 = PTR_DAT_033ee010;
  if (iVar7 < iVar8) {
    bVar1 = false;
    iVar16 = iVar8 + -1;
    do {
      lVar12 = FUN_01601d40(param_1,0,iVar8,0);
      if (DAT_03776618 == '\0') {
        thunk_FUN_00d48444(puVar2);
        DAT_03776618 = '\x01';
        if (lVar12 == 0) goto LAB_016d1418;
LAB_016d13f4:
        uVar9 = FUN_015fd038(lVar12,0);
        uVar6 = *(undefined4 *)(lVar12 + 0x10);
      }
      else {
        if (lVar12 != 0) goto LAB_016d13f4;
LAB_016d1418:
        uVar9 = 0;
        uVar6 = 0;
      }
      local_68 = 0;
      uVar10 = FUN_016d6148(uVar9,uVar6,0x4000,&local_68);
      iVar8 = iVar16;
      if ((uVar10 & 1) == 0) {
        FUN_013b1b6c(lVar11,lVar12,*(undefined8 *)puVar4);
      }
      else {
        bVar1 = true;
      }
      for (; iVar7 < iVar8; iVar8 = iVar8 + -1) {
        uVar6 = FUN_015fa29c(param_1,iVar8,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar3);
        }
        uVar10 = FUN_016c38c4(uVar6,0);
        if ((uVar10 & 1) != 0) break;
      }
      iVar16 = iVar8 + -1;
    } while ((iVar7 <= iVar16) && (!bVar1));
  }
  else {
    bVar1 = false;
  }
  puVar4 = StringLiteral_498;
  puVar2 = UnityEngine_Networking_PlayerConnection_MessageEventArgs_TypeInfo;
  puVar3 = PTR_DAT_033ee010;
  if ((bVar1) || (*(int *)(lVar11 + 0x18) != 0)) {
    if (*(int *)(lVar11 + 0x18) < 1) {
      return;
    }
    uVar10 = 0;
    uVar17 = 0;
    lVar12 = param_1;
LAB_016d1518:
    uVar15 = uVar17 & 0xffffffff;
    do {
      while( true ) {
        FUN_013b1910(lVar11,&local_68,*(undefined8 *)puVar2);
        param_1 = local_68;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        iVar8 = FUN_015e1dd0(param_1,0x1ff,0);
        if (((int)uVar15 == 0) && (iVar8 < 0)) break;
        iVar7 = *(int *)(lVar11 + 0x18);
joined_r0x016d1660:
        if (iVar7 < 1) {
          uVar5 = (uint)uVar15;
          param_1 = lVar12;
          goto LAB_016d168c;
        }
      }
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar15 = FUN_015e1474(0);
      local_70 = uVar15;
      if ((int)uVar15 != 0x10014) {
        iVar7 = *(int *)(lVar11 + 0x18);
        uVar10 = uVar15 >> 0x20;
        goto joined_r0x016d1660;
      }
      if (DAT_03776618 == '\0') {
        thunk_FUN_00d48444(puVar3);
        DAT_03776618 = '\x01';
        if (param_1 == 0) goto LAB_016d15d4;
LAB_016d15ac:
        uVar9 = FUN_015fd038(param_1,0);
        uVar6 = *(undefined4 *)(param_1 + 0x10);
      }
      else {
        if (param_1 != 0) goto LAB_016d15ac;
LAB_016d15d4:
        uVar9 = 0;
        uVar6 = 0;
      }
      uVar13 = FUN_016d3fac(uVar9,uVar6);
      uVar17 = 0x10014;
      if ((uVar13 & 1) != 0) goto LAB_016d1670;
      if (DAT_03776618 == '\0') {
        thunk_FUN_00d48444(puVar3);
        DAT_03776618 = '\x01';
        if (param_1 == 0) goto LAB_016d1618;
LAB_016d15f0:
        uVar9 = FUN_015fd038(param_1,0);
        uVar6 = *(undefined4 *)(param_1 + 0x10);
      }
      else {
        if (param_1 != 0) goto LAB_016d15f0;
LAB_016d1618:
        uVar9 = 0;
        uVar6 = 0;
      }
      uVar13 = FUN_016d6148(uVar9,uVar6,0x4000,&local_70);
      if (((int)local_70 == 0x10002) && (uVar15 = local_70, uVar17 = local_70, (uVar13 & 1) == 0))
      goto LAB_016d1670;
      uVar15 = 0;
      if (*(int *)(lVar11 + 0x18) < 1) {
        return;
      }
    } while( true );
  }
  lVar11 = FUN_016d1eb4(param_1);
  if (DAT_03776618 == '\0') {
    thunk_FUN_00d48444(PTR_DAT_033ee010);
    DAT_03776618 = '\x01';
    if (lVar11 == 0) goto LAB_016d16b8;
LAB_016d14dc:
    uVar9 = FUN_015fd038(lVar11,0);
    uVar6 = *(undefined4 *)(lVar11 + 0x10);
  }
  else {
    if (lVar11 != 0) goto LAB_016d14dc;
LAB_016d16b8:
    uVar9 = 0;
    uVar6 = 0;
  }
  local_68 = 0;
  uVar10 = FUN_016d6148(uVar9,uVar6,0x4000,&local_68);
  if ((uVar10 & 1) != 0) {
    return;
  }
  uVar10 = FUN_015e2388(0x1002d,0);
LAB_016d1768:
  uVar9 = FUN_015e0f04(uVar10,param_1,1,0);
  uVar14 = thunk_FUN_00d48444(StringLiteral_9800);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar9,uVar14);
LAB_016d1670:
  uVar5 = (uint)uVar17;
  uVar10 = uVar15 >> 0x20;
  lVar12 = param_1;
  if (*(int *)(lVar11 + 0x18) < 1) goto LAB_016d168c;
  goto LAB_016d1518;
LAB_016d168c:
  if (uVar5 == 0) {
    return;
  }
  if (-1 < iVar8) {
    return;
  }
  uVar10 = (ulong)uVar5 | uVar10 << 0x20;
  goto LAB_016d1768;
}


