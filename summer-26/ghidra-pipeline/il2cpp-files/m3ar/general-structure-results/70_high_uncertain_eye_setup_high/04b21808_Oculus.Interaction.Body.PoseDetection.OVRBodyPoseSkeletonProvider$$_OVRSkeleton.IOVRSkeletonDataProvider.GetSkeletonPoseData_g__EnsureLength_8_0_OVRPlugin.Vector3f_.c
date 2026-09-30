/*
FUNCTION_NAME: Oculus.Interaction.Body.PoseDetection.OVRBodyPoseSkeletonProvider$$<OVRSkeleton.IOVRSkeletonDataProvider.GetSkeletonPoseData>g__EnsureLength|8_0<OVRPlugin.Vector3f>
ENTRY_POINT: 04b21808
PROGRAM: m3ar-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider__<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>
               (void)

{
  ushort uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 unaff_x19;
  void *__dest;
  size_t unaff_x20;
  void *__s;
  void *__s_00;
  long unaff_x24;
  long lVar11;
  int *unaff_x25;
  long lVar12;
  long lVar13;
  long unaff_x29;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar2 = FUN_0406aaec();
  lVar6 = *(long *)(*(long *)(unaff_x24 + 0x38) + 8);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar2 = (long)&stack0x00000000 - ((ulong)(*(int *)(lVar2 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(long *)(unaff_x29 + -0x60) = lVar2;
  lVar7 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_0406aaec(lVar6);
    lVar7 = *(long *)(*(long *)(unaff_x24 + 0x38) + 8);
    uVar1 = *(ushort *)(lVar7 + 0x135);
  }
  lVar2 = lVar2 - ((ulong)(*(int *)(lVar6 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar6 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_0406aaec(lVar7);
    lVar6 = *(long *)(*(long *)(unaff_x24 + 0x38) + 8);
    uVar1 = *(ushort *)(lVar6 + 0x135);
  }
  lVar13 = lVar2 - ((ulong)(*(int *)(lVar7 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  *(undefined8 *)(unaff_x29 + -0x50) = unaff_x19;
  lVar7 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_0406aaec(lVar6);
    lVar7 = *(long *)(*(long *)(unaff_x24 + 0x38) + 8);
    uVar1 = *(ushort *)(lVar7 + 0x135);
  }
  lVar6 = lVar13 - ((ulong)(*(int *)(lVar6 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar8 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_0406aaec(lVar7);
    lVar8 = *(long *)(*(long *)(unaff_x24 + 0x38) + 8);
    uVar1 = *(ushort *)(lVar8 + 0x135);
  }
  lVar7 = lVar6 - ((ulong)(*(int *)(lVar7 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_0406aaec(lVar8);
  }
  lVar12 = lVar7 - ((ulong)(*(int *)(lVar8 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  uVar9 = unaff_x20 + 0xf & 0x1fffffff0;
  __s_00 = (void *)(lVar12 - uVar9);
  __s = (void *)((long)__s_00 - uVar9);
  memset(__s,0,unaff_x20);
  lVar8 = *(long *)PTR_DAT_08f8b280;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  iVar5 = *unaff_x25;
  if (iVar5 < 3) {
    if (iVar5 != 0) {
      if (iVar5 != 1) {
        if (iVar5 != 2) goto LAB_04b21cec;
        lVar6 = *(long *)(unaff_x24 + 0x38);
        lVar8 = *(long *)(lVar6 + 8);
        lVar7 = lVar8;
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0406aaec(lVar8);
          lVar6 = *(long *)(unaff_x24 + 0x38);
          lVar7 = *(long *)(lVar6 + 8);
        }
        iVar5 = *(int *)(lVar7 + 0x28);
        lVar10 = *(long *)(unaff_x29 + -0x58);
        lVar11 = *(long *)(unaff_x29 + -0x48);
        uVar4 = *(undefined8 *)(lVar6 + 0x20);
        goto LAB_04b21c0c;
      }
      lVar7 = *(long *)(unaff_x24 + 0x38);
      lVar8 = *(long *)(lVar7 + 8);
      lVar2 = lVar8;
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0406aaec(lVar8);
        lVar7 = *(long *)(unaff_x24 + 0x38);
        lVar2 = *(long *)(lVar7 + 8);
      }
      lVar6 = *(long *)(unaff_x29 + -0x60);
      lVar10 = *(long *)(unaff_x29 + -0x58);
      iVar5 = *(int *)(lVar2 + 0x28);
      lVar11 = *(long *)(unaff_x29 + -0x48);
      uVar4 = *(undefined8 *)(lVar7 + 0x18);
      *(int **)(unaff_x29 + -0x18) = unaff_x25 + 4;
      *(void **)(unaff_x29 + -0x10) = __s_00;
      goto LAB_04b21c18;
    }
    memset(__s_00,0,unaff_x20);
    memset(__s,0,unaff_x20);
    lVar11 = *(long *)(unaff_x29 + -0x48);
  }
  else {
    if (iVar5 < 5) {
      if (iVar5 == 3) {
        lVar7 = *(long *)(unaff_x24 + 0x38);
        lVar8 = *(long *)(lVar7 + 8);
        lVar2 = lVar8;
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0406aaec(lVar8);
          lVar7 = *(long *)(unaff_x24 + 0x38);
          lVar2 = *(long *)(lVar7 + 8);
        }
        iVar5 = *(int *)(lVar2 + 0x28);
        lVar10 = *(long *)(unaff_x29 + -0x58);
        lVar11 = *(long *)(unaff_x29 + -0x48);
        uVar4 = *(undefined8 *)(lVar7 + 0x28);
        lVar2 = lVar13;
        goto LAB_04b21c0c;
      }
      if (iVar5 != 4) {
LAB_04b21cec:
        thunk_FUN_04097b88(PTR_DAT_08f66268);
        uVar4 = thunk_FUN_0406deb8();
        if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
          FUN_0744bbdc(uVar4,0);
                    /* WARNING: Subroutine does not return */
          FUN_04031750(uVar4);
        }
        goto LAB_04b21d28;
      }
      if (*(long **)(unaff_x25 + 2) == (long *)0x0) {
        if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        goto LAB_04b21d28;
      }
      if (*(long *)(**(long **)(unaff_x25 + 2) + 0x40) !=
          *(long *)(*(long *)PTR_DAT_08f8b288 + 0x40)) {
        if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_04031c0c();
        }
        goto LAB_04b21d28;
      }
      puVar3 = (undefined8 *)thunk_FUN_0406e000();
      uVar15 = *puVar3;
      uVar14 = puVar3[3];
      uVar4 = puVar3[2];
      lVar7 = *(long *)(unaff_x24 + 0x38);
      *(undefined8 *)(unaff_x29 + -0x38) = puVar3[1];
      *(undefined8 *)(unaff_x29 + -0x40) = uVar15;
      *(undefined8 *)(unaff_x29 + -0x28) = uVar14;
      *(undefined8 *)(unaff_x29 + -0x30) = uVar4;
      lVar8 = *(long *)(lVar7 + 8);
      lVar2 = lVar8;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0406aaec(lVar8);
        lVar7 = *(long *)(unaff_x24 + 0x38);
        lVar2 = *(long *)(lVar7 + 8);
      }
      iVar5 = *(int *)(lVar2 + 0x28);
      lVar11 = *(long *)(unaff_x29 + -0x48);
      uVar4 = *(undefined8 *)(lVar7 + 0x30);
      *(long *)(unaff_x29 + -0x18) = unaff_x29 + -0x40;
      *(void **)(unaff_x29 + -0x10) = __s_00;
      lVar10 = *(long *)(unaff_x29 + -0x58);
      if (-1 < iVar5) {
        lVar10 = unaff_x29 + -0x20;
      }
    }
    else {
      if (iVar5 == 5) {
        lVar6 = *(long *)(unaff_x24 + 0x38);
        lVar8 = *(long *)(lVar6 + 8);
        lVar2 = lVar8;
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0406aaec(lVar8);
          lVar6 = *(long *)(unaff_x24 + 0x38);
          lVar2 = *(long *)(lVar6 + 8);
        }
        iVar5 = *(int *)(lVar2 + 0x28);
        lVar10 = *(long *)(unaff_x29 + -0x58);
        lVar11 = *(long *)(unaff_x29 + -0x48);
        uVar4 = *(undefined8 *)(lVar6 + 0x38);
        lVar2 = lVar7;
      }
      else {
        if (iVar5 != 6) goto LAB_04b21cec;
        lVar7 = *(long *)(unaff_x24 + 0x38);
        lVar8 = *(long *)(lVar7 + 8);
        lVar2 = lVar8;
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0406aaec(lVar8);
          lVar7 = *(long *)(unaff_x24 + 0x38);
          lVar2 = *(long *)(lVar7 + 8);
        }
        iVar5 = *(int *)(lVar2 + 0x28);
        lVar10 = *(long *)(unaff_x29 + -0x58);
        lVar11 = *(long *)(unaff_x29 + -0x48);
        uVar4 = *(undefined8 *)(lVar7 + 0x40);
        lVar2 = lVar12;
      }
LAB_04b21c0c:
      *(int **)(unaff_x29 + -0x18) = unaff_x25 + 4;
      *(void **)(unaff_x29 + -0x10) = __s_00;
      lVar6 = lVar2;
LAB_04b21c18:
      if (-1 < iVar5) {
        lVar10 = unaff_x29 + -0x20;
      }
    }
    FUN_04032260(lVar8,uVar4,lVar6,lVar10,unaff_x29 + -0x18,__s_00);
    memcpy(__s,__s_00,unaff_x20);
  }
  __dest = *(void **)(unaff_x29 + -0x50);
  memcpy(__s_00,__s,unaff_x20);
  memcpy(__dest,__s,unaff_x20);
  if (*(long *)(lVar11 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_04b21d28:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


