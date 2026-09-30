/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest$$Dispose
ENTRY_POINT: 06d05d94
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void Meta_WitAi_Requests_VRequest__Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  long lVar7;
  long *unaff_x22;
  
  lVar5 = FUN_03cf1244();
  FUN_0861cfc8(**(undefined8 **)(lVar5 + 0xb8),0);
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_03cf12a0(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  puVar1 = PTR_DAT_08e8c6c0;
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  FUN_0861cc74(*(undefined8 *)puVar1,**(undefined8 **)(lVar5 + 0xb8),0);
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_03cf12a0(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  puVar1 = PTR_DAT_08e8c6d0;
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  uVar6 = FUN_0861ce54(*(undefined8 *)puVar1,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_06d064c8;
    if (*(int *)(*(long *)(unaff_x19 + 0x20) + 0x18) == 0) goto LAB_06d064cc;
    FUN_06d064d0(0x3f800000,0,0,0x3f800000);
  }
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_03cf12a0(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  puVar4 = PTR_DAT_08e8c6e0;
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  uVar6 = FUN_0861ce54(*(undefined8 *)puVar4,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_06d064c8;
    if (*(int *)(*(long *)(unaff_x19 + 0x20) + 0x18) == 0) goto LAB_06d064cc;
    FUN_06d064d0(0,0x3f800000,0,0x3f800000);
  }
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_03cf12a0(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  puVar3 = PTR_DAT_08e8c6d8;
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  uVar6 = FUN_0861ce54(*(undefined8 *)puVar3,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_06d064c8;
    if (*(int *)(*(long *)(unaff_x19 + 0x20) + 0x18) == 0) goto LAB_06d064cc;
    FUN_06d064d0(0,0,0x3f800000,0x3f800000);
  }
  FUN_0861d558(0);
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_03cf12a0(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  FUN_0861cfc8(**(undefined8 **)(lVar5 + 0xb8),0);
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_03cf12a0(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  puVar2 = PTR_DAT_08e8c6c8;
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  FUN_0861cc74(*(undefined8 *)puVar2,**(undefined8 **)(lVar5 + 0xb8),0);
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_03cf12a0(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  uVar6 = FUN_0861ce54(*(undefined8 *)puVar1,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_06d064c8;
    if (*(uint *)(*(long *)(unaff_x19 + 0x20) + 0x18) < 2) goto LAB_06d064cc;
    FUN_06d064d0(0x3f800000,0,0,0x3f800000);
  }
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_03cf12a0(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  uVar6 = FUN_0861ce54(*(undefined8 *)puVar4,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_06d064c8;
    if (*(uint *)(*(long *)(unaff_x19 + 0x20) + 0x18) < 2) goto LAB_06d064cc;
    FUN_06d064d0(0,0x3f800000,0,0x3f800000);
  }
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_03cf12a0(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  uVar6 = FUN_0861ce54(*(undefined8 *)puVar3,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_06d064c8;
    if (*(uint *)(*(long *)(unaff_x19 + 0x20) + 0x18) < 2) goto LAB_06d064cc;
    FUN_06d064d0(0,0,0x3f800000,0x3f800000);
  }
  FUN_0861d558(0);
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_03cf12a0(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  FUN_0861cfc8(**(undefined8 **)(lVar5 + 0xb8),0);
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_03cf12a0(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  puVar2 = PTR_DAT_08e8c6e8;
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  FUN_0861cc74(*(undefined8 *)puVar2,**(undefined8 **)(lVar5 + 0xb8),0);
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_03cf12a0(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  uVar6 = FUN_0861ce54(*(undefined8 *)puVar1,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_06d064c8;
    if (*(uint *)(*(long *)(unaff_x19 + 0x20) + 0x18) < 3) goto LAB_06d064cc;
    FUN_06d064d0(0x3f800000,0,0,0x3f800000);
  }
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_03cf12a0(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  uVar6 = FUN_0861ce54(*(undefined8 *)puVar4,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_06d064c8;
    if (*(uint *)(*(long *)(unaff_x19 + 0x20) + 0x18) < 3) goto LAB_06d064cc;
    FUN_06d064d0(0,0x3f800000,0,0x3f800000);
  }
  lVar7 = *unaff_x22;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_03cf12a0(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03cf1244();
  }
  uVar6 = FUN_0861ce54(*(undefined8 *)puVar3,**(undefined8 **)(lVar5 + 0xb8),0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) {
LAB_06d064c8:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    if (*(uint *)(*(long *)(unaff_x19 + 0x20) + 0x18) < 3) {
LAB_06d064cc:
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    FUN_06d064d0(0,0,0x3f800000,0x3f800000);
  }
  FUN_0861d558(0);
  return;
}


