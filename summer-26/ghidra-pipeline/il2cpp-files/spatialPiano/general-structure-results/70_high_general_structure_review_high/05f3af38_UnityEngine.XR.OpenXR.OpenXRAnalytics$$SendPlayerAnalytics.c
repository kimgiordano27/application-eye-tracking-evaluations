/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRAnalytics$$SendPlayerAnalytics
ENTRY_POINT: 05f3af38
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_4
*/


void UnityEngine_XR_OpenXR_OpenXRAnalytics__SendPlayerAnalytics(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int in_w8;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  long *unaff_x21;
  
  if (in_w8 == 0) {
    thunk_FUN_02f6670c();
  }
  uVar2 = FUN_060f245c();
  if ((uVar2 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) {
LAB_05f3b0cc:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar5 = *(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x78);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar2 = FUN_060f245c(uVar5,0,0);
    if ((uVar2 & 1) == 0) {
      if ((*(long *)(unaff_x19 + 0x20) == 0) ||
         (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x78), lVar4 == 0)) goto LAB_05f3b0cc;
      uVar5 = *(undefined8 *)(lVar4 + 0x30);
      iVar1 = *(int *)(*unaff_x21 + 0xe4);
      *(undefined8 *)(unaff_x19 + 0x30) = uVar5;
      if (iVar1 == 0) {
        thunk_FUN_02f6670c();
      }
      uVar2 = FUN_060f078c(uVar5,0,0);
      uVar5 = 0;
      if ((uVar2 & 1) != 0) {
        if ((*(long *)(unaff_x19 + 0x30) == 0) ||
           (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x38), lVar4 == 0)) goto LAB_05f3b0cc;
        uVar5 = FUN_033d919c(lVar4,*(undefined8 *)
                                    System_Xml_Schema_DatatypeImplementation_SchemaDatatypeMap_TypeInfo
                            );
      }
      lVar4 = *unaff_x21;
      *(undefined8 *)(unaff_x19 + 0x38) = uVar5;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar2 = FUN_060f245c(uVar5,0,0);
      if ((uVar2 & 1) != 0) {
        uVar5 = *(undefined8 *)(unaff_x19 + 0x30);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar2 = FUN_060f078c(uVar5,0,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            uVar5 = FUN_04f65e2c(*(undefined8 *)
                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vdupd_laneq_s64__,
                                 *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x38),0);
            uVar3 = FUN_04f65e2c(*(undefined8 *)
                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vdupd_laneq_f64__,
                                 *(undefined8 *)(unaff_x19 + 0x30),0);
            uVar5 = FUN_04f65260(uVar5,uVar3,0);
            if (*(int *)(*(long *)PTR_DAT_067c8f48 + 0xe4) == 0) {
              thunk_FUN_02f6670c(*(long *)PTR_DAT_067c8f48);
            }
            FUN_060a9cd8(uVar5);
            return;
          }
          goto LAB_05f3b0cc;
        }
      }
    }
  }
  return;
}


