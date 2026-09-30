/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnAfterDeserialize
ENTRY_POINT: 082f3854
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnAfterDeserialize(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int in_w8;
  long *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  undefined8 uVar6;
  long *unaff_x23;
  int unaff_w24;
  int iVar7;
  float unaff_s8;
  undefined4 uVar8;
  float unaff_s11;
  float unaff_s12;
  
  iVar7 = in_w8 + unaff_w24;
  *(int *)(unaff_x20 + 0x228) = iVar7;
  if (iVar7 < 1) {
    iVar2 = 0;
LAB_082f3880:
    *(int *)(unaff_x20 + 0x228) = iVar2;
  }
  else {
    if (*(long *)(unaff_x20 + 0x210) == 0) goto LAB_082f3c6c;
    iVar2 = *(int *)(*(long *)(unaff_x20 + 0x210) + 0x10);
    if (iVar2 < iVar7) goto LAB_082f3880;
  }
  if (unaff_s11 + unaff_s12 <= unaff_s8) {
    FUN_082ece68();
    uVar8 = FUN_082f1850();
    *(undefined4 *)(unaff_x20 + 0x230) = uVar8;
    FUN_082ef344();
    *(undefined4 *)(unaff_x20 + 0x22c) = uVar8;
    FUN_082ef344();
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x128);
    uVar8 = *(undefined4 *)((long)unaff_x19 + 0x144);
    lVar5 = unaff_x19[0x29];
    uVar4 = FUN_088934d8();
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_0408f364(*unaff_x23);
    }
    uVar1 = FUN_0832e0f0(uVar8,(int)lVar5,0,uVar6,uVar4,0);
    if (uVar1 == 0xffffffff) {
      *(uint *)(unaff_x20 + 0x22c) = unaff_w21;
      FUN_082ef344();
      iVar7 = *(int *)(unaff_x20 + 0x22c);
      iVar2 = FUN_082ece68();
      *(int *)(unaff_x20 + 0x230) = iVar7 + iVar2 + 1;
      FUN_082ef344();
      if (((*(long *)(unaff_x20 + 0x128) == 0) ||
          (lVar5 = FUN_082fb63c(*(long *)(unaff_x20 + 0x128),0), lVar5 == 0)) ||
         (lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0)) goto LAB_082f3c6c;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) goto LAB_082f3c68;
      iVar7 = *(int *)(lVar5 + (long)(int)unaff_w21 * 0x178 + 0x28);
      *(int *)(unaff_x20 + 0x224) = iVar7;
      if (iVar7 < 1) {
        iVar2 = 0;
LAB_082f3b58:
        iVar7 = iVar2;
        *(int *)(unaff_x20 + 0x224) = iVar7;
      }
      else {
        if (*(long *)(unaff_x20 + 0x210) == 0) goto LAB_082f3c6c;
        iVar2 = *(int *)(*(long *)(unaff_x20 + 0x210) + 0x10);
        if (iVar2 < iVar7) goto LAB_082f3b58;
      }
      iVar2 = FUN_082ece68();
      if (((*(long *)(unaff_x20 + 0x128) == 0) ||
          (lVar5 = FUN_082fb63c(*(long *)(unaff_x20 + 0x128),0), lVar5 == 0)) ||
         (lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0)) goto LAB_082f3c6c;
      if (*(uint *)(lVar5 + 0x18) <= unaff_w21) {
LAB_082f3c68:
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      iVar7 = iVar2 + iVar7 + *(int *)(lVar5 + (long)(int)unaff_w21 * 0x178 + 0x2c);
    }
    else {
      if (((*(long *)(unaff_x20 + 0x128) == 0) ||
          (lVar5 = FUN_082fb63c(*(long *)(unaff_x20 + 0x128),0), lVar5 == 0)) ||
         (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)) goto LAB_082f3c6c;
      if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_082f3c68;
      *(undefined4 *)(unaff_x20 + 0x22c) = *(undefined4 *)(lVar5 + (long)(int)uVar1 * 0x18 + 0x28);
      FUN_082ef344();
      if (((*(long *)(unaff_x20 + 0x128) == 0) ||
          (lVar5 = FUN_082fb63c(*(long *)(unaff_x20 + 0x128),0), lVar5 == 0)) ||
         (lVar5 = *(long *)(lVar5 + 0x40), lVar5 == 0)) goto LAB_082f3c6c;
      if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_082f3c68;
      *(int *)(unaff_x20 + 0x230) = *(int *)(lVar5 + (long)(int)uVar1 * 0x18 + 0x2c) + 1;
      FUN_082ef344();
      if ((*(long *)(unaff_x20 + 0x128) == 0) ||
         (lVar5 = FUN_082fb63c(*(long *)(unaff_x20 + 0x128),0), lVar5 == 0)) goto LAB_082f3c6c;
      lVar5 = *(long *)(lVar5 + 0x38);
      iVar7 = *(int *)(unaff_x20 + 0x22c);
      iVar2 = FUN_082ece68();
      if (lVar5 == 0) goto LAB_082f3c6c;
      uVar1 = iVar2 + iVar7;
      if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_082f3c68;
      iVar7 = *(int *)(lVar5 + (long)(int)uVar1 * 0x178 + 0x28);
      *(int *)(unaff_x20 + 0x224) = iVar7;
      if (iVar7 < 1) {
        iVar2 = 0;
LAB_082f3ab8:
        *(int *)(unaff_x20 + 0x224) = iVar2;
      }
      else {
        if (*(long *)(unaff_x20 + 0x210) == 0) goto LAB_082f3c6c;
        iVar2 = *(int *)(*(long *)(unaff_x20 + 0x210) + 0x10);
        if (iVar2 < iVar7) goto LAB_082f3ab8;
      }
      if ((*(long *)(unaff_x20 + 0x128) == 0) ||
         (lVar5 = FUN_082fb63c(*(long *)(unaff_x20 + 0x128),0), lVar5 == 0)) goto LAB_082f3c6c;
      lVar5 = *(long *)(lVar5 + 0x38);
      iVar7 = *(int *)(unaff_x20 + 0x230);
      iVar2 = FUN_082ece68();
      if (lVar5 == 0) goto LAB_082f3c6c;
      uVar1 = (iVar7 + iVar2) - 1;
      if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_082f3c68;
      if (*(long *)(unaff_x20 + 0x128) == 0) goto LAB_082f3c6c;
      iVar7 = *(int *)(lVar5 + (long)(int)uVar1 * 0x178 + 0x28);
      lVar5 = FUN_082fb63c(*(long *)(unaff_x20 + 0x128),0);
      if (lVar5 == 0) goto LAB_082f3c6c;
      lVar5 = *(long *)(lVar5 + 0x38);
      iVar2 = *(int *)(unaff_x20 + 0x230);
      iVar3 = FUN_082ece68();
      if (lVar5 == 0) goto LAB_082f3c6c;
      uVar1 = (iVar2 + iVar3) - 1;
      if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_082f3c68;
      iVar7 = *(int *)(lVar5 + (long)(int)uVar1 * 0x178 + 0x2c) + iVar7;
    }
    *(int *)(unaff_x20 + 0x228) = iVar7;
    if (iVar7 < 1) {
      iVar2 = 0;
    }
    else {
      if (*(long *)(unaff_x20 + 0x210) == 0) goto LAB_082f3c6c;
      iVar2 = *(int *)(*(long *)(unaff_x20 + 0x210) + 0x10);
      if (iVar7 <= iVar2) goto LAB_082f3bd8;
    }
    *(int *)(unaff_x20 + 0x228) = iVar2;
  }
LAB_082f3bd8:
  *(undefined1 *)(unaff_x20 + 0x2b9) = 0;
  FUN_082ed9d8();
  FUN_082f1590();
  if (unaff_x19 != (long *)0x0) {
    (**(code **)(*unaff_x19 + 0x188))();
    return;
  }
LAB_082f3c6c:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


