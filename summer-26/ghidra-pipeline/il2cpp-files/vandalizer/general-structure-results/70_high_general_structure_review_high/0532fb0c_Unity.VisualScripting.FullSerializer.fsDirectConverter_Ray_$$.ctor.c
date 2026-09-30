/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$.ctor
ENTRY_POINT: 0532fb0c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>___ctor(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0759bc20;
  if ((DAT_07a42994 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_0759bc20);
    FUN_031f20f4(PTR_DAT_0759b720);
    FUN_031f20f4(PTR_DAT_0759ef30);
    FUN_031f20f4(PTR_DAT_0759d278);
    DAT_07a42994 = 1;
  }
  lVar2 = FUN_031f21dc(*(undefined8 *)puVar1,0xb);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_0759ef30;
      thunk_FUN_0329bf60();
      lVar3 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0322bef4();
      }
      uVar4 = FUN_05e4cc84(param_1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x1b8));
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = uVar4;
        thunk_FUN_0329bf60((undefined8 *)(lVar2 + 0x28),uVar4);
        puVar1 = PTR_DAT_0759b720;
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)PTR_DAT_0759b720;
          thunk_FUN_0329bf60();
          lVar3 = *(long *)(param_2 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0322bef4();
          }
          uVar4 = FUN_05dfee30(param_1 + 8,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x1c0));
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = uVar4;
            thunk_FUN_0329bf60((undefined8 *)(lVar2 + 0x38),uVar4);
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)puVar1;
              thunk_FUN_0329bf60();
              lVar3 = *(long *)(param_2 + 0x20);
              if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0322bef4();
              }
              uVar4 = FUN_05e4cc84(param_1 + 0x10,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x1c8));
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) = uVar4;
                thunk_FUN_0329bf60((undefined8 *)(lVar2 + 0x48),uVar4);
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)puVar1;
                  thunk_FUN_0329bf60();
                  lVar3 = *(long *)(param_2 + 0x20);
                  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                    lVar3 = FUN_0322bef4();
                  }
                  uVar4 = FUN_05dfee30(param_1 + 0x18,
                                       *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x1d0));
                  if (7 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x58) = uVar4;
                    thunk_FUN_0329bf60((undefined8 *)(lVar2 + 0x58),uVar4);
                    if (8 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)puVar1;
                      thunk_FUN_0329bf60();
                      if (*(int *)(*(long *)(PTR_DAT_0759b388 + 0x28) + 0xe4) == 0) {
                        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                      }
                      lVar3 = *(long *)(param_2 + 0x20);
                      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                        lVar3 = FUN_0322bef4();
                      }
                      uVar4 = FUN_05d78c10(param_1 + 0x1c,
                                           *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x1d8));
                      if (9 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0x68) = uVar4;
                        thunk_FUN_0329bf60((undefined8 *)(lVar2 + 0x68),uVar4);
                        if (10 < *(uint *)(lVar2 + 0x18)) {
                          *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)PTR_DAT_0759d278;
                          thunk_FUN_0329bf60();
                          FUN_05c89314(lVar2,0);
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
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


