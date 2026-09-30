/*
FUNCTION_NAME: ProximaWebSocketSharp.PayloadData$$ToArray
ENTRY_POINT: 07773c80
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void ProximaWebSocketSharp_PayloadData__ToArray(long param_1)

{
  int iVar1;
  uint uVar2;
  bool in_CY;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_x10;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  if (in_CY) {
    FUN_057d53ac();
  }
  else {
    *(int *)(unaff_x20 + 0x18) = (int)in_x10 + 1;
    *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = unaff_x21;
  }
  lVar3 = thunk_FUN_0406deb8(*unaff_x22);
  FUN_075273c0(lVar3,0);
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  lVar5 = *(long *)(unaff_x20 + 0x10);
  *(undefined8 *)(lVar3 + 0x10) = DAT_01a33958;
  *(int *)(unaff_x20 + 0x1c) = iVar1 + 1;
  if (lVar5 != 0) {
    uVar2 = *(uint *)(unaff_x20 + 0x18);
    if (uVar2 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
      *(long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = lVar3;
    }
    else {
      FUN_057d53ac();
    }
    lVar3 = thunk_FUN_0406deb8(*unaff_x22);
    FUN_075273c0(lVar3,0);
    iVar1 = *(int *)(unaff_x20 + 0x1c);
    lVar5 = *(long *)(unaff_x20 + 0x10);
    *(undefined8 *)(lVar3 + 0x10) = DAT_01a34c88;
    *(int *)(unaff_x20 + 0x1c) = iVar1 + 1;
    if (lVar5 != 0) {
      uVar2 = *(uint *)(unaff_x20 + 0x18);
      if (uVar2 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
        *(long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = lVar3;
      }
      else {
        FUN_057d53ac();
      }
      lVar3 = thunk_FUN_0406deb8(*unaff_x22);
      FUN_075273c0(lVar3,0);
      iVar1 = *(int *)(unaff_x20 + 0x1c);
      lVar5 = *(long *)(unaff_x20 + 0x10);
      *(undefined8 *)(lVar3 + 0x10) = DAT_01a340b8;
      *(int *)(unaff_x20 + 0x1c) = iVar1 + 1;
      if (lVar5 != 0) {
        uVar2 = *(uint *)(unaff_x20 + 0x18);
        if (uVar2 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar2 + 1;
          *(long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = lVar3;
        }
        else {
          FUN_057d53ac();
        }
        if (unaff_x26 != 0) {
          *(long *)(unaff_x26 + 0x18) = unaff_x20;
          if (*unaff_x19 != 0) {
            lVar3 = thunk_FUN_0406deb8(*unaff_x25);
            FUN_057d4bb0(lVar3,*unaff_x24);
            lVar5 = thunk_FUN_0406deb8(*unaff_x22);
            FUN_075273c0(lVar5,0);
            *(undefined8 *)(lVar5 + 0x10) = DAT_01a348b8;
            if (lVar3 != 0) {
              lVar6 = *(long *)(lVar3 + 0x10);
              lVar7 = *unaff_x23;
              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
              if (lVar6 != 0) {
                uVar2 = *(uint *)(lVar3 + 0x18);
                if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                  *(uint *)(lVar3 + 0x18) = uVar2 + 1;
                  *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = lVar5;
                }
                else {
                  FUN_057d53ac(lVar3,lVar5,
                               *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                }
                lVar5 = thunk_FUN_0406deb8(*unaff_x22);
                FUN_075273c0(lVar5,0);
                iVar1 = *(int *)(lVar3 + 0x1c);
                lVar7 = *unaff_x23;
                lVar6 = *(long *)(lVar3 + 0x10);
                *(undefined8 *)(lVar5 + 0x10) = DAT_01a34478;
                *(int *)(lVar3 + 0x1c) = iVar1 + 1;
                if (lVar6 != 0) {
                  uVar2 = *(uint *)(lVar3 + 0x18);
                  if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                    *(uint *)(lVar3 + 0x18) = uVar2 + 1;
                    *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = lVar5;
                  }
                  else {
                    FUN_057d53ac(lVar3,lVar5,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar5 = thunk_FUN_0406deb8(*unaff_x22);
                  FUN_075273c0(lVar5,0);
                  iVar1 = *(int *)(lVar3 + 0x1c);
                  lVar7 = *unaff_x23;
                  lVar6 = *(long *)(lVar3 + 0x10);
                  *(undefined8 *)(lVar5 + 0x10) = DAT_01a340c0;
                  *(int *)(lVar3 + 0x1c) = iVar1 + 1;
                  if (lVar6 != 0) {
                    uVar2 = *(uint *)(lVar3 + 0x18);
                    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                      *(uint *)(lVar3 + 0x18) = uVar2 + 1;
                      *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = lVar5;
                    }
                    else {
                      FUN_057d53ac(lVar3,lVar5,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    lVar5 = thunk_FUN_0406deb8(*unaff_x22);
                    FUN_075273c0(lVar5,0);
                    iVar1 = *(int *)(lVar3 + 0x1c);
                    lVar7 = *unaff_x23;
                    lVar6 = *(long *)(lVar3 + 0x10);
                    *(undefined8 *)(lVar5 + 0x10) = DAT_01a33438;
                    *(int *)(lVar3 + 0x1c) = iVar1 + 1;
                    if (lVar6 != 0) {
                      uVar2 = *(uint *)(lVar3 + 0x18);
                      if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                        *(uint *)(lVar3 + 0x18) = uVar2 + 1;
                        *(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) = lVar5;
                      }
                      else {
                        FUN_057d53ac(lVar3,lVar5,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                      }
                      uVar4 = thunk_FUN_0406deb8(*unaff_x22);
                      FUN_075273c0(uVar4,0);
                      FUN_0892aa44(&DAT_01a33000);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


