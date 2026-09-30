/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 0566e590
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array_InternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__System_Collections_IEnumerator_Reset
               (undefined8 param_1,int param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *plVar5;
  int unaff_w22;
  int iVar6;
  
  if (unaff_w22 <= param_2) {
    thunk_FUN_03d1e194(PTR_DAT_091ab0b0);
    uVar4 = thunk_FUN_03d2ef40();
    uVar3 = thunk_FUN_03d1e194(PTR_DAT_091b4480);
    FUN_070ccddc(uVar4,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar4);
  }
                    /* catch() { ... } // from try @ 0566e254 with catch @ 0566e598 */
  if (unaff_w21 == 0) {
    plVar5 = (long *)(unaff_x19 + 6);
    lVar2 = *plVar5;
    if (lVar2 == 0) {
      unaff_x19[2] = 0;
      unaff_x19[3] = 0;
      unaff_x19[4] = 0;
      unaff_x19[5] = 0;
      goto FUN_0566e710;
    }
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(unaff_x19 + 4) = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(unaff_x19 + 2) = uVar4;
    thunk_FUN_03d1023c(unaff_x19 + 2,0);
    lVar2 = *(long *)(unaff_x19 + 6);
    if (lVar2 == 0) {
LAB_0566e768:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    iVar6 = *(int *)(lVar2 + 0x18) + -1;
    if (iVar6 != 0) {
      FUN_0719b94c(lVar2,1,lVar2,0,iVar6,0);
      if (*plVar5 == 0) goto LAB_0566e768;
      lVar2 = *(long *)(unaff_x20 + 0x20);
      bVar1 = *(byte *)(lVar2 + 0x135);
      iVar6 = *(int *)(*plVar5 + 0x18) + -1;
      goto joined_r0x0566e6b0;
    }
    *plVar5 = 0;
LAB_0566e5fc:
    uVar4 = 0;
  }
  else {
    if (unaff_w22 - 1U == 1) {
      unaff_x19[6] = 0;
      unaff_x19[7] = 0;
      goto LAB_0566e5fc;
    }
    if (unaff_w22 - 1U == unaff_w21) {
      lVar2 = *(long *)(unaff_x20 + 0x20);
      iVar6 = unaff_w22 + -2;
      bVar1 = *(byte *)(lVar2 + 0x135);
joined_r0x0566e6b0:
      if ((bVar1 & 1) == 0) {
        lVar2 = FUN_03d8f26c();
      }
      FUN_04dcbb74(unaff_x19 + 6,iVar6,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x60));
      goto FUN_0566e710;
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    uVar4 = FUN_03d2d394(lVar2,unaff_w22 + -2);
    if ((int)unaff_w21 < 2) {
      iVar6 = 0;
    }
    else {
      iVar6 = unaff_w21 - 1;
      FUN_0719b94c(*(undefined8 *)(unaff_x19 + 6),0,uVar4,0,iVar6,0);
    }
    FUN_0719b94c(*(undefined8 *)(unaff_x19 + 6),unaff_w21,uVar4,iVar6,*unaff_x19 + ~unaff_w21,0);
    *(undefined8 *)(unaff_x19 + 6) = uVar4;
  }
  thunk_FUN_03d1023c(unaff_x19 + 6,uVar4);
FUN_0566e710:
  *unaff_x19 = *unaff_x19 + -1;
  return;
}


