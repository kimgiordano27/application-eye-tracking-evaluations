/*
FUNCTION_NAME: Meta.WitAi.Requests.VoiceServiceRequestEventsWrapper$$OnStartListening
ENTRY_POINT: 02d755b0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Meta_WitAi_Requests_VoiceServiceRequestEventsWrapper__OnStartListening
               (undefined1 param_1 [16],undefined4 param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long *unaff_x20;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar8 = FUN_02ee6e18();
  if (*(int *)(*(long *)
                Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298(*(long *)
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
  }
  FUN_038f38f0(0,uVar8,0);
  puVar4 = StringLiteral_2351;
  iVar6 = FUN_0393a6d8();
  puVar3 = StringLiteral_3601;
  if (iVar6 == 1) {
    lVar7 = *(long *)StringLiteral_3601;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar7 = *(long *)puVar3;
    }
    if (unaff_x20 == (long *)0x0) goto LAB_02d75b34;
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
      FUN_01ae9e74(*unaff_x19);
    }
    unaff_x20[0x14] = lVar7;
    thunk_FUN_01b4f09c(unaff_x20 + 0x14,lVar7);
    puVar3 = StringLiteral_3439;
    lVar7 = *(long *)StringLiteral_3439;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar7 = *(long *)puVar3;
    }
    lVar10 = *unaff_x19;
    bVar1 = *(byte *)(lVar10 + 0x135);
    uVar14 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0xc);
joined_r0x02d753e8:
    if ((bVar1 & 1) == 0) {
      FUN_01ae9e74(lVar10);
    }
    *(undefined4 *)((long)unaff_x20 + 0x9c) = uVar14;
  }
  else {
    if (iVar6 != 2) {
      lVar7 = *(long *)StringLiteral_3601;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar7 = *(long *)puVar3;
      }
      if (unaff_x20 == (long *)0x0) goto LAB_02d75b34;
      lVar7 = **(long **)(lVar7 + 0xb8);
      if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
        FUN_01ae9e74(*unaff_x19);
      }
      unaff_x20[0x14] = lVar7;
      thunk_FUN_01b4f09c(unaff_x20 + 0x14,lVar7);
      puVar3 = StringLiteral_3439;
      lVar7 = *(long *)StringLiteral_3439;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar7 = *(long *)puVar3;
      }
      lVar10 = *unaff_x19;
      bVar1 = *(byte *)(lVar10 + 0x135);
      uVar14 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 8);
      goto joined_r0x02d753e8;
    }
    lVar7 = *(long *)StringLiteral_3601;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar7 = *(long *)puVar3;
    }
    if (unaff_x20 == (long *)0x0) {
LAB_02d75b34:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
    if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
      FUN_01ae9e74(*unaff_x19);
    }
    unaff_x20[0x14] = lVar7;
    thunk_FUN_01b4f09c(unaff_x20 + 0x14,lVar7);
    puVar3 = StringLiteral_3439;
    lVar7 = *(long *)StringLiteral_3439;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar7 = *(long *)puVar3;
    }
    uVar14 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x14);
    if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
      FUN_01ae9e74(*unaff_x19);
    }
    *(undefined4 *)((long)unaff_x20 + 0x9c) = uVar14;
    iVar6 = FUN_0393a8d8();
    if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
      FUN_01ae9e74(*unaff_x19);
    }
    uVar14 = *(undefined4 *)((long)unaff_x20 + 0x9c);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (iVar6 == 2) {
      FUN_03a79974(uVar14,1,0);
    }
    else {
      FUN_03a79edc(uVar14,1,0);
    }
    iVar6 = FUN_0393a8d8();
    if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
      FUN_01ae9e74(*unaff_x19);
    }
    uVar14 = *(undefined4 *)((long)unaff_x20 + 0x9c);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (iVar6 == 8) {
      FUN_03a79974(uVar14,5,0);
    }
    else {
      FUN_03a79edc(uVar14,5,0);
    }
  }
  lVar7 = *unaff_x19;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    FUN_01ae9e74();
    lVar7 = *unaff_x19;
  }
  *(undefined1 *)(unaff_x20 + 0x15) = 1;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    FUN_01ae9e74();
    lVar7 = *unaff_x19;
  }
  *(undefined1 *)((long)unaff_x20 + 0x84) = 1;
  *(undefined4 *)(unaff_x20 + 0x11) = 0;
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  *(undefined4 *)((long)unaff_x20 + 0x8c) = 0;
  *(undefined1 *)((long)unaff_x20 + 0x85) = 1;
  if (DAT_03fed2da == '\0') {
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
    DAT_03fed2da = '\x01';
  }
  puVar3 = Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__;
  uVar15 = **(undefined4 **)
             (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ + 0xb8);
  uVar14 = (*(undefined4 **)
             (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__ + 0xb8))
           [1];
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_01ae9e74();
    cVar5 = DAT_03fed2da;
    *(undefined4 *)(unaff_x20 + 0x1e) = uVar15;
    *(undefined4 *)((long)unaff_x20 + 0xf4) = uVar14;
    if (cVar5 == '\0') {
      thunk_FUN_01ad9084(Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__);
      DAT_03fed2da = '\x01';
    }
  }
  else {
    *(undefined4 *)(unaff_x20 + 0x1e) = uVar15;
    *(undefined4 *)((long)unaff_x20 + 0xf4) = uVar14;
  }
  uVar15 = **(undefined4 **)(*(long *)puVar3 + 0xb8);
  uVar14 = (*(undefined4 **)(*(long *)puVar3 + 0xb8))[1];
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  *(undefined4 *)(unaff_x20 + 0x1f) = uVar15;
  *(undefined4 *)((long)unaff_x20 + 0xfc) = uVar14;
  FUN_03a74374();
  iVar6 = FUN_0393a464();
  if ((iVar6 == 0) || (iVar6 = FUN_0393a464(), iVar6 == 0x1e)) {
    if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
      FUN_01ae9e74();
    }
    uVar14 = *(undefined4 *)((long)unaff_x20 + 0x9c);
    uVar15 = FUN_0393a714();
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar4);
    }
    FUN_03a79974(uVar14,uVar15,0);
LAB_02d75818:
    uVar14 = FUN_0393a714();
    if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
      FUN_01ae9e74(*unaff_x19);
    }
LAB_02d7583c:
    *(undefined4 *)((long)unaff_x20 + 0xac) = uVar14;
  }
  else {
    iVar6 = FUN_0393a464();
    if ((iVar6 == 1) || (iVar6 = FUN_0393a464(), iVar6 == 0x1f)) {
      if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
        FUN_01ae9e74();
      }
      uVar14 = *(undefined4 *)((long)unaff_x20 + 0x9c);
      uVar15 = FUN_0393a714();
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar4);
      }
      FUN_03a79edc(uVar14,uVar15,0);
      goto LAB_02d75818;
    }
    iVar6 = FUN_0393a464();
    if ((iVar6 == 2) || (iVar6 = FUN_0393a464(), iVar6 == 0x20)) {
      if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
        FUN_01ae9e74();
      }
      uVar14 = 0xffffffff;
      goto LAB_02d7583c;
    }
  }
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  uVar14 = *(undefined4 *)((long)unaff_x20 + 0x9c);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar14 = FUN_03a7df84(uVar14,0);
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_01ae9e74(*unaff_x19);
  }
  *(undefined4 *)(unaff_x20 + 0x16) = uVar14;
  uVar15 = FUN_0393a4a0();
  uVar14 = param_2;
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  *(undefined4 *)((long)unaff_x20 + 0xb4) = uVar15;
  *(undefined4 *)(unaff_x20 + 0x17) = param_2;
  *(undefined4 *)((long)unaff_x20 + 0xbc) = 0;
  uVar13 = FUN_0393a4a0();
  uVar15 = uVar14;
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  *(undefined4 *)(unaff_x20 + 0x18) = uVar13;
  *(undefined4 *)((long)unaff_x20 + 0xc4) = uVar14;
  *(undefined4 *)(unaff_x20 + 0x19) = 0;
  uVar13 = FUN_0393a5bc();
  uVar14 = uVar15;
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  *(undefined4 *)((long)unaff_x20 + 0xcc) = uVar13;
  *(undefined4 *)(unaff_x20 + 0x1a) = uVar15;
  *(undefined4 *)((long)unaff_x20 + 0xd4) = 0;
  uVar15 = FUN_0393a914();
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_01ae9e74(*unaff_x19);
  }
  *(undefined4 *)((long)unaff_x20 + 0xdc) = uVar15;
  uVar15 = FUN_0393a750();
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_01ae9e74(*unaff_x19);
  }
  *(undefined4 *)(unaff_x20 + 0x20) = uVar15;
  uVar15 = FUN_0393a848();
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  *(undefined1 *)(unaff_x20 + 0x12) = 1;
  *(undefined4 *)((long)unaff_x20 + 0x94) = uVar15;
  *(undefined4 *)(unaff_x20 + 0x13) = uVar14;
  uVar14 = FUN_0393a8d8();
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_01ae9e74(*unaff_x19);
  }
  *(undefined4 *)((long)unaff_x20 + 0xec) = uVar14;
  uVar14 = FUN_0393a80c();
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  *(undefined4 *)(unaff_x20 + 0x1d) = uVar14;
  iVar6 = FUN_0393a6d8();
  if ((iVar6 == 1) || (iVar6 == 2)) {
    uVar14 = FUN_0393a7d0();
    if ((*(byte *)(*unaff_x19 + 0x135) & 1) != 0) goto LAB_02d75a18;
  }
  else {
    uVar2 = *(ushort *)(*unaff_x19 + 0x135);
    if ((uVar2 & 1) == 0) {
      FUN_01ae9e74();
      uVar2 = *(ushort *)(*unaff_x19 + 0x135);
    }
    uVar14 = 0;
    if ((int)unaff_x20[0x16] != 0) {
      uVar14 = 0x3f000000;
    }
    if ((uVar2 & 1) != 0) goto LAB_02d75a18;
  }
  FUN_01ae9e74();
LAB_02d75a18:
  *(undefined4 *)(unaff_x20 + 0x1c) = uVar14;
  puVar4 = StringLiteral_3819;
  if ((*(byte *)(*unaff_x19 + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  lVar7 = *unaff_x20;
  *(undefined4 *)((long)unaff_x20 + 0xe4) = 0;
  uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
        puVar9 = (undefined8 *)(lVar7 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_02d75ac4;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined8 *)FUN_01ae9f78();
LAB_02d75ac4:
  (*(code *)*puVar9)();
  return;
}


