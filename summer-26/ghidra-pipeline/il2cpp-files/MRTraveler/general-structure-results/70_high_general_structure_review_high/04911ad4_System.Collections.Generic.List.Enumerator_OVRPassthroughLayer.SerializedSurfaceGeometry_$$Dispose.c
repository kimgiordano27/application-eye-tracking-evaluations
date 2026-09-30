/*
FUNCTION_NAME: System.Collections.Generic.List.Enumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$Dispose
ENTRY_POINT: 04911ad4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__Dispose
               (void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  int unaff_w23;
  int unaff_w24;
  long unaff_x25;
  long lVar6;
  
  FUN_03cf12a0();
  if (unaff_x25 == 0) {
    thunk_FUN_03ce5214(PTR_DAT_08e80470);
    uVar4 = thunk_FUN_03cf5234();
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e80478);
    FUN_0705a2f8(uVar4,uVar5,0);
  }
  else if ((unaff_w24 < 0) || (unaff_w23 < 0)) {
    puVar1 = PTR_DAT_08e805f0;
    if (-1 < unaff_w23) {
      puVar1 = PTR_DAT_08e80610;
    }
    uVar5 = thunk_FUN_03ce5214(puVar1);
    thunk_FUN_03ce5214(PTR_DAT_08e6a5d8);
    uVar4 = thunk_FUN_03cf5234();
    uVar3 = thunk_FUN_03ce5214(PTR_DAT_08e80608);
    FUN_070619b8(uVar4,uVar5,uVar3,0);
  }
  else {
    if (unaff_w24 <= *(int *)(unaff_x25 + 0x18) - unaff_w23) {
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03cf1244();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03cf1244();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03cf1244();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03cf1244();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03cf1244();
      }
      if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_0513b8fc();
      return;
    }
    thunk_FUN_03ce5214(PTR_DAT_08e76350);
    uVar4 = thunk_FUN_03cf5234();
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e80618);
    FUN_07064ba8(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar4);
}


