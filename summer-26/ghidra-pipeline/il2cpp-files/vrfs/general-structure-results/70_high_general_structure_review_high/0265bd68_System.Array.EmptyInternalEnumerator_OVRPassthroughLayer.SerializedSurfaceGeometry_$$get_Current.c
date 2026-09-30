/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPassthroughLayer.SerializedSurfaceGeometry>$$get_Current
ENTRY_POINT: 0265bd68
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


long System_Array_EmptyInternalEnumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>__get_Current
               (void)

{
  long lVar1;
  uint uVar2;
  uint unaff_w20;
  long unaff_x21;
  
  thunk_FUN_0159f088(PTR_DAT_06e37d90);
  thunk_FUN_0159f088(PTR_DAT_06db0fc8);
  thunk_FUN_0159f088(PTR_DAT_06e13208);
  thunk_FUN_0159f088(PTR_DAT_06e2a720);
  thunk_FUN_0159f088(PTR_DAT_06df4fd0);
  thunk_FUN_0159f088(PTR_DAT_06e3a740);
  *(undefined1 *)(unaff_x21 + 0x54f) = 1;
  if (unaff_w20 < 0x4e83f2de) {
    if (unaff_w20 < 0x267db4f5) {
      if (unaff_w20 < 0x1569feb6) {
        if (unaff_w20 < 0x102fa3df) {
          if (unaff_w20 == 0x3e0d149) goto LAB_0265c3d0;
          if (unaff_w20 == 0xb6d8d76) {
            lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e38c78);
            if (lVar1 != 0) {
              FUN_0266006c();
              return lVar1;
            }
            goto LAB_0265c56c;
          }
          uVar2 = 0x102fa3de;
        }
        else {
          if (0x11741f03 < unaff_w20) {
            if (unaff_w20 == 0x121c317c) {
              lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e2a720);
              if (lVar1 != 0) {
                FUN_0265bb5c();
                return lVar1;
              }
              goto LAB_0265c56c;
            }
            if (unaff_w20 != 0x1569feb5) goto LAB_0265c438;
LAB_0265c264:
            lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e579c8);
            if (lVar1 != 0) {
              FUN_0265b52c();
              return lVar1;
            }
            goto LAB_0265c56c;
          }
          if (unaff_w20 == 0x112aca17) {
LAB_0265c470:
            lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e26138);
            if (lVar1 != 0) {
              FUN_026609bc();
              return lVar1;
            }
            goto LAB_0265c56c;
          }
          uVar2 = 0x11741f03;
        }
LAB_0265c2e4:
        if (unaff_w20 == uVar2) {
LAB_0265c2ec:
          lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e13208);
          if (lVar1 != 0) {
            FUN_0265b9a4();
            return lVar1;
          }
          goto LAB_0265c56c;
        }
        goto LAB_0265c438;
      }
      if (0x19c2b32b < unaff_w20) {
        if (unaff_w20 < 0x1c577d88) {
          if (unaff_w20 == 0x1ad31b4f) {
LAB_0265c220:
            lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e171f8);
            if (lVar1 != 0) {
              FUN_02660dcc();
              return lVar1;
            }
            goto LAB_0265c56c;
          }
          uVar2 = 0x1c577d87;
        }
        else {
          if (unaff_w20 == 0x1ed726c7) goto LAB_0265c2ec;
          uVar2 = 0x267db4f4;
        }
        goto FUN_0265c3c8;
      }
      if ((unaff_w20 != 0x185251ce) && (unaff_w20 != 0x186dc4dd)) {
        uVar2 = 0x19c2b32b;
LAB_0265c08c:
        if (unaff_w20 == uVar2) {
LAB_0265c38c:
          lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06df4fd0);
          if (lVar1 != 0) {
            FUN_02661c34();
            return lVar1;
          }
          goto LAB_0265c56c;
        }
        goto LAB_0265c438;
      }
    }
    else if (unaff_w20 < 0x34557eb3) {
      if (unaff_w20 < 0x30ff006f) {
        if ((unaff_w20 != 0x27670f58) && (unaff_w20 != 0x2dafcdd5)) {
          uVar2 = 0x30ff006e;
          goto LAB_0265c2e4;
        }
      }
      else if (unaff_w20 < 0x329206d2) {
        if (unaff_w20 != 0x3215666d) {
          uVar2 = 0x329206d1;
          goto FUN_0265c3c8;
        }
      }
      else if (unaff_w20 != 0x3302f770) {
        uVar2 = 0x34557eb2;
        goto LAB_0265c2e4;
      }
    }
    else {
      if (0x3e9b1f61 < unaff_w20) {
        if (unaff_w20 < 0x4cb13a6f) {
          if (unaff_w20 == 0x44e40dca) {
            lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06dd6c60);
            if (lVar1 != 0) {
              FUN_026603a4();
              return lVar1;
            }
            goto LAB_0265c56c;
          }
          uVar2 = 0x4cb13a6e;
LAB_0265c40c:
          if (unaff_w20 == uVar2) {
            lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e3c970);
            if (lVar1 != 0) {
              FUN_0265fb84();
              return lVar1;
            }
            goto LAB_0265c56c;
          }
          goto LAB_0265c438;
        }
        if (unaff_w20 != 0x4e81dc59) {
          uVar2 = 0x4e83f2dd;
          goto FUN_0265c3c8;
        }
        goto LAB_0265c2ec;
      }
      if (unaff_w20 < 0x35b5c4e4) {
        if (unaff_w20 != 0x3497d7f6) {
          uVar2 = 0x35b5c4e3;
LAB_0265c218:
          if (unaff_w20 != uVar2) goto LAB_0265c438;
          goto LAB_0265c220;
        }
        goto LAB_0265c3d0;
      }
      if (unaff_w20 == 0x36e84f8c) goto LAB_0265c2ec;
      uVar2 = 0x3e9b1f61;
FUN_0265c3c8:
      if (unaff_w20 != uVar2) goto LAB_0265c438;
    }
LAB_0265c3d0:
    lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e3a740);
    if (lVar1 == 0) {
LAB_0265c56c:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_02658acc();
  }
  else {
    if (unaff_w20 < 0x63dffc8f) {
      if (0x5793f456 < unaff_w20) {
        if (unaff_w20 < 0x5c95a4f4) {
          if (unaff_w20 < 0x5842d211) {
            if (unaff_w20 != 0x58129c8e) {
              uVar2 = 0x5842d210;
              goto LAB_0265c2e4;
            }
            goto LAB_0265c3d0;
          }
          if (unaff_w20 == 0x58cbff2a) {
            lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e37d90);
            if (lVar1 != 0) {
              FUN_0265b634();
              return lVar1;
            }
            goto LAB_0265c56c;
          }
          uVar2 = 0x5c95a4f3;
        }
        else if (unaff_w20 < 0x5ed0ea33) {
          if (unaff_w20 == 0x5e8953bd) {
            lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06db0fc8);
            if (lVar1 != 0) {
              FUN_02660bc4();
              return lVar1;
            }
            goto LAB_0265c56c;
          }
          uVar2 = 0x5ed0ea32;
        }
        else {
          if (unaff_w20 == 0x60788c8b) goto LAB_0265c38c;
          uVar2 = 0x63dffc8e;
        }
        goto FUN_0265c3c8;
      }
      if (unaff_w20 < 0x520f744d) {
        if (unaff_w20 == 0x4f32e10d) goto LAB_0265c3d0;
        if (unaff_w20 == 0x501ac7be) {
LAB_0265c1a4:
          lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06db6e88);
          if (lVar1 != 0) {
            FUN_0266019c();
            return lVar1;
          }
          goto LAB_0265c56c;
        }
        if (unaff_w20 == 0x520f744c) {
          lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e5a370);
          if (lVar1 != 0) {
            FUN_0265f6f4();
            return lVar1;
          }
          goto LAB_0265c56c;
        }
      }
      else {
        if (unaff_w20 < 0x5662a012) {
          if (unaff_w20 == 0x5585ff0a) {
LAB_0265c44c:
            lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06dfab10);
            if (lVar1 != 0) {
              FUN_0266088c();
              return lVar1;
            }
            goto LAB_0265c56c;
          }
          uVar2 = 0x5662a011;
          goto LAB_0265c08c;
        }
        if (unaff_w20 == 0x577ba8a0) goto LAB_0265c470;
        if (unaff_w20 == 0x5793f456) {
          lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06db5c40);
          if (lVar1 != 0) {
            FUN_0265ff3c();
            return lVar1;
          }
          goto LAB_0265c56c;
        }
      }
    }
    else {
      if (0x6c6e33e3 < unaff_w20) {
        if (0x7287c183 < unaff_w20) {
          if (unaff_w20 < 0x7b2f5cdd) {
            if (unaff_w20 != 0x76a5a7c4) {
              if (unaff_w20 == 0x7b2f5cdc) goto LAB_0265c1a4;
              goto LAB_0265c438;
            }
          }
          else if (unaff_w20 != 0x7bcfd98e) {
            uVar2 = 0x7f835863;
            goto LAB_0265c40c;
          }
          goto LAB_0265c2ec;
        }
        if (unaff_w20 < 0x6fb63224) {
          if (unaff_w20 == 0x6ed60a35) {
            lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06d98198);
            if (lVar1 != 0) {
              FUN_02660684();
              return lVar1;
            }
            goto LAB_0265c56c;
          }
          uVar2 = 0x6fb63223;
          goto LAB_0265c2e4;
        }
        if (unaff_w20 != 0x71010917) {
          uVar2 = 0x7287c183;
          goto LAB_0265c218;
        }
        goto LAB_0265c3d0;
      }
      if (unaff_w20 < 0x67e19d38) {
        if (unaff_w20 == 0x646d855f) goto LAB_0265c264;
        if (unaff_w20 == 0x6570b2bd) goto LAB_0265c3d0;
        if (unaff_w20 == 0x67e19d37) goto LAB_0265c44c;
      }
      else {
        if (unaff_w20 < 0x6a94ad8f) {
          if (unaff_w20 == 0x68027c73) goto LAB_0265c220;
          uVar2 = 0x6a94ad8e;
          goto FUN_0265c3c8;
        }
        if (unaff_w20 == 0x6b36a54f) goto LAB_0265c2ec;
        if (unaff_w20 == 0x6c6e33e3) {
          lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e59de8);
          if (lVar1 != 0) {
            FUN_0265c934();
            return lVar1;
          }
          goto LAB_0265c56c;
        }
      }
    }
LAB_0265c438:
    lVar1 = 0;
  }
  return lVar1;
}


