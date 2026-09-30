/*
FUNCTION_NAME: System.Net.HttpWebRequest$$HandleNtlmAuth
ENTRY_POINT: 02e9e5ac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02e9e9a0) */
/* WARNING: Removing unreachable block (ram,0x02e9e970) */

void System_Net_HttpWebRequest__HandleNtlmAuth(void)

{
  ushort uVar1;
  bool in_ZR;
  short sVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte in_w8;
  ulong in_x9;
  uint in_w10;
  ulong in_x11;
  int in_w12;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  uint unaff_w22;
  long lVar8;
  ulong uVar9;
  ulong unaff_x26;
  char cStack0000000000000004;
  ushort uStack0000000000000008;
  ushort uStack000000000000000c;
  
  if (!in_ZR) {
    in_x11 = in_x9;
  }
  uVar9 = in_x11;
  if ((in_w12 != 0) && (uVar9 = in_x11 | 0x10000000000, ((in_w10 & 0x4b) == 10 & (in_w8 ^ 1)) == 0))
  {
    uVar9 = in_x11;
  }
  if ((unaff_x26 & 1) == 0) {
    lVar5 = *(long *)(unaff_x19 + 0x18);
    if (lVar5 == 0) goto LAB_02e9e13c;
    if (((int)unaff_w22 < *(int *)(lVar5 + 0x10)) &&
       (sVar2 = FUN_025b8a2c(lVar5,unaff_w22,0), sVar2 == 0x3f)) {
      uStack000000000000000c = (short)unaff_w22 + 1;
      if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_02e9e13c;
      uVar6 = FUN_02ea7edc();
      uVar1 = uStack000000000000000c;
      lVar5 = FUN_02ea7f30(uVar6,*(undefined8 *)(unaff_x19 + 0x18),unaff_w22,uStack000000000000000c,
                           0x20);
      if (*(int *)(*(long *)PTR_DAT_03d1f430 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03d1f430);
      }
      uVar7 = FluffyUnderware_Curvy_Generator_CGBoundsGroup__get_ScaleX(0);
      lVar8 = *unaff_x20;
      if ((uVar7 & 1) == 0) {
        lVar5 = FUN_025b1328(lVar8,lVar5,0);
        *unaff_x20 = lVar5;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      else {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar6 = FUN_025c5de8(lVar5,1,0);
        lVar5 = FUN_025b1328(lVar8,uVar6,0);
        *unaff_x20 = lVar5;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      if (*unaff_x20 == 0) goto LAB_02e9e13c;
      unaff_w21 = *(uint *)(*unaff_x20 + 0x10);
      unaff_w22 = (uint)uVar1;
    }
  }
  uVar1 = uStack0000000000000008;
  if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_02e9e13c;
  uVar7 = (ulong)uStack0000000000000008;
  uVar4 = (uint)uStack0000000000000008;
  *(ushort *)(*(long *)(unaff_x19 + 0x38) + 0x32) = uStack0000000000000008;
  lVar5 = *unaff_x20;
  if (lVar5 != 0) {
    iVar3 = thunk_FUN_01a5ddb0(0);
    lVar5 = lVar5 + iVar3;
  }
  if ((uVar4 < (unaff_w21 & 0xffff)) && (*(short *)(lVar5 + uVar7 * 2) == 0x3f)) {
    uStack0000000000000008 = uVar1 + 1;
    uVar4 = FUN_02ea5f94();
    uVar7 = uVar9 | 0x20;
    if ((uVar4 & 2) != 0) {
      uVar7 = uVar9;
    }
    if ((uVar4 & 0x11) != 1) {
      uVar7 = uVar7 | 0x800;
    }
    uVar9 = uVar7 | 0x20000000000;
    if ((uVar4 & 0x5b) != 10 || *(char *)(unaff_x19 + 0x40) == '\0') {
      uVar9 = uVar7;
    }
  }
  if ((unaff_x26 & 1) == 0) {
    lVar5 = *(long *)(unaff_x19 + 0x18);
    if (lVar5 == 0) goto LAB_02e9e13c;
    if (((int)unaff_w22 < *(int *)(lVar5 + 0x10)) &&
       (sVar2 = FUN_025b8a2c(lVar5,unaff_w22,0), sVar2 == 0x23)) {
      uStack000000000000000c = (short)unaff_w22 + 1;
      if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_02e9e13c;
      uVar6 = FUN_02ea7edc();
      lVar5 = FUN_02ea7f30(uVar6,*(undefined8 *)(unaff_x19 + 0x18),unaff_w22,uStack000000000000000c,
                           0x40);
      if (*(int *)(*(long *)PTR_DAT_03d1f430 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03d1f430);
      }
      uVar7 = FluffyUnderware_Curvy_Generator_CGBoundsGroup__get_ScaleX(0);
      lVar8 = *unaff_x20;
      if ((uVar7 & 1) == 0) {
        lVar5 = FUN_025b1328(lVar8,lVar5,0);
        *unaff_x20 = lVar5;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      else {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar6 = FUN_025c5de8(lVar5,1,0);
        lVar5 = FUN_025b1328(lVar8,uVar6,0);
        *unaff_x20 = lVar5;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      }
      if (*unaff_x20 == 0) goto LAB_02e9e13c;
      unaff_w21 = *(uint *)(*unaff_x20 + 0x10);
    }
  }
  uVar1 = uStack0000000000000008;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    uVar7 = (ulong)uStack0000000000000008;
    uVar4 = (uint)uStack0000000000000008;
    *(ushort *)(*(long *)(unaff_x19 + 0x38) + 0x34) = uStack0000000000000008;
    lVar5 = *unaff_x20;
    if (lVar5 != 0) {
      iVar3 = thunk_FUN_01a5ddb0(0);
      lVar5 = lVar5 + iVar3;
    }
    if ((uVar4 < (unaff_w21 & 0xffff)) && (*(short *)(lVar5 + uVar7 * 2) == 0x23)) {
      uStack0000000000000008 = uVar1 + 1;
      uVar4 = FUN_02ea5f94();
      uVar7 = uVar9 | 0x40;
      if ((uVar4 & 2) != 0) {
        uVar7 = uVar9;
      }
      if ((uVar4 & 0x11) != 1) {
        uVar7 = uVar7 | 0x1000;
      }
      uVar9 = uVar7 | 0x40000000000;
      if ((uVar4 & 0x5b) != 10 || *(char *)(unaff_x19 + 0x40) == '\0') {
        uVar9 = uVar7;
      }
    }
    lVar5 = *(long *)(unaff_x19 + 0x38);
    if (lVar5 != 0) {
      *(ushort *)(lVar5 + 0x36) = uStack0000000000000008;
      cStack0000000000000004 = '\0';
      FUN_027e0bd8(lVar5,&stack0x00000004,0);
      *(ulong *)(unaff_x19 + 0x30) = uVar9 | *(ulong *)(unaff_x19 + 0x30) | 0x80000000;
      if (cStack0000000000000004 != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(lVar5,0);
      }
      *(ulong *)(unaff_x19 + 0x30) = *(ulong *)(unaff_x19 + 0x30) | 0x800000000;
      return;
    }
  }
LAB_02e9e13c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


