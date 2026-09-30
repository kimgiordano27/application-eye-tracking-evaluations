/*
FUNCTION_NAME: OVRTelemetryMarker$$Dispose
ENTRY_POINT: 01de7a74
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void OVRTelemetryMarker__Dispose(int param_1)

{
  bool in_ZR;
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long lVar6;
  
  if (in_ZR) {
    uVar1 = thunk_FUN_01c50bfc();
    if ((uVar1 & 1) == 0) goto LAB_01de850c;
    lVar5 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0234bc48,2);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_0235b648;
        thunk_FUN_0106e12c((undefined8 *)(lVar5 + 0x20));
        if (1 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_0235b688;
          thunk_FUN_0106e12c();
          FUN_01de7270();
          uVar1 = FUN_01de734c();
          if ((uVar1 & 1) != 0) {
            FUN_01de98f0();
            return;
          }
          FUN_01de9a30();
          return;
        }
      }
LAB_01de8578:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
  }
  else {
                    /* try { // try from 01de7a84 to 01ee7b43 has its CatchHandler @ 01de7a84
                       catch() { ... } // from try @ 01de7a84 with catch @ 01de7a84
                       catch() { ... } // from try @ 01de7b48 with catch @ 01de7a84
                       catch() { ... } // from try @ 01de7b9c with catch @ 01de7a84
                       catch() { ... } // from try @ 01de7ba8 with catch @ 01de7a84
                       catch() { ... } // from try @ 01de7bd4 with catch @ 01de7a84
                       catch() { ... } // from try @ 01de7c30 with catch @ 01de7a84 */
    if (param_1 == -0x4de26895) {
      uVar1 = thunk_FUN_01c50bfc();
      if ((uVar1 & 1) == 0) goto LAB_01de850c;
      lVar5 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0234bc48,1);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) == 0) goto LAB_01de8578;
        *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_0235b690;
        thunk_FUN_0106e12c();
LAB_01de81ac:
        FUN_01de7270();
        return;
      }
    }
    else {
      if ((param_1 != -0x483f4444) || (uVar1 = thunk_FUN_01c50bfc(), (uVar1 & 1) == 0)) {
LAB_01de850c:
        uVar2 = thunk_FUN_010303a8(PTR_DAT_0235b6b0);
        thunk_FUN_010303a8(PTR_DAT_0235b6b8);
        uVar2 = FUN_01c513d4(uVar2);
        thunk_FUN_010303a8(PTR_DAT_02351dc8);
        uVar4 = thunk_FUN_010400dc();
        FUN_01de1cd0(uVar4,uVar2);
        uVar2 = thunk_FUN_010303a8(PTR_DAT_0235b6c0);
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar4,uVar2);
      }
      uVar1 = FUN_01de734c();
      if (((uVar1 & 1) == 0) && (uVar1 = FUN_01de734c(), (uVar1 & 1) == 0)) {
        uVar1 = FUN_01de734c();
        if (((uVar1 & 1) == 0) && (uVar1 = FUN_01de734c(), (uVar1 & 1) == 0)) {
          uVar1 = FUN_01de734c();
          if ((uVar1 & 1) != 0) {
            uVar2 = FUN_01de9204();
            if (*(int *)(*(long *)PTR_DAT_02352080 + 0xe0) == 0) {
              thunk_FUN_01022c14(*(long *)PTR_DAT_02352080);
            }
            FUN_01de4a74(uVar2);
            return;
          }
          uVar1 = FUN_01de734c();
          if ((uVar1 & 1) != 0) {
            uVar2 = FUN_01de9204();
            if (*(int *)(*(long *)PTR_DAT_02352080 + 0xe0) == 0) {
              thunk_FUN_01022c14(*(long *)PTR_DAT_02352080);
            }
            FUN_01de49f8(uVar2);
            return;
          }
          lVar6 = *(long *)PTR_DAT_02350468;
          lVar5 = *(long *)(lVar6 + 0x38);
          if (lVar5 == 0) {
            FUN_0103c2a0(lVar6);
            lVar5 = *(long *)(lVar6 + 0x38);
          }
          lVar5 = *(long *)(lVar5 + 0x10);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0103c244();
          }
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          if ((*(byte *)(*(long *)(*(long *)(lVar6 + 0x38) + 0x10) + 0x135) & 1) == 0) {
            FUN_0103c244();
          }
          goto LAB_01de81ac;
        }
        uVar2 = FUN_01de9204();
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_01de8574;
        plVar3 = (long *)FUN_01de6840(*(long *)(unaff_x19 + 0x20));
      }
      else {
        uVar2 = FUN_01de9204();
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_01de8574;
        plVar3 = (long *)FUN_01de60ac(*(long *)(unaff_x19 + 0x20));
      }
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01de8258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x2e8))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x2f0));
        return;
      }
    }
  }
LAB_01de8574:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


