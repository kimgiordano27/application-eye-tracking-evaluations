/*
FUNCTION_NAME: FUN_06305298
ENTRY_POINT: 06305298
PROGRAM: Waifu-libil2cpp.so
SCORE: 99
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_06305298(long param_1)

{
  long lVar1;
  
  if ((DAT_086de729 & 1) == 0) {
    FUN_0335b6c8(&DAT_083ea9e8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eaae8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ea938,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eaa28,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eaa88,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eab90,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083ea990,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083eab30,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f8af8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f9258,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f8dc8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f9058,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f8d78,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f9240,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f9088,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f8fc0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f9220,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f8d80,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f9098,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f9260,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f8fe0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f8df0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f9248,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f8b00,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f9230,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f9070,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f9848,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f9858,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f99f8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f99a0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f9a20,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f99a8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f9a00,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083f9a28,1);
    DataMemoryBarrier(2,3);
    DAT_086de729 = 1;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    return;
  }
  DataMemoryBarrier(2,3);
  *(undefined4 *)(param_1 + 0x18) = 0;
  DataMemoryBarrier(2,3);
  lVar1 = *(long *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x10) != 0) {
      FUN_04db5e34((long *)(lVar1 + 0x10),
                   *(undefined8 *)(*(long *)(*(long *)(DAT_083ea938 + 0x20) + 0xc0) + 0x80));
    }
    *(undefined8 *)(lVar1 + 0x20) = 0;
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar1 != 0) {
      if (*(long *)(lVar1 + 0x10) != 0) {
        FUN_04de6984((long *)(lVar1 + 0x10),
                     *(undefined8 *)(*(long *)(*(long *)(DAT_083ea990 + 0x20) + 0xc0) + 0x80));
      }
      *(undefined8 *)(lVar1 + 0x20) = 0;
      lVar1 = *(long *)(param_1 + 0x40);
      if (lVar1 != 0) {
        if (*(long *)(lVar1 + 0x10) != 0) {
          FUN_04deed44((long *)(lVar1 + 0x10),
                       *(undefined8 *)(*(long *)(*(long *)(DAT_083eaa88 + 0x20) + 0xc0) + 0x80));
        }
        *(undefined8 *)(lVar1 + 0x20) = 0;
        lVar1 = *(long *)(param_1 + 0x48);
        if (lVar1 != 0) {
          if (*(long *)(lVar1 + 0x10) != 0) {
            FUN_04deed44((long *)(lVar1 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(DAT_083eaa88 + 0x20) + 0xc0) + 0x80));
          }
          *(undefined8 *)(lVar1 + 0x20) = 0;
          lVar1 = *(long *)(param_1 + 0x50);
          if (lVar1 != 0) {
            if (*(long *)(lVar1 + 0x10) != 0) {
              FUN_04deed44((long *)(lVar1 + 0x10),
                           *(undefined8 *)(*(long *)(*(long *)(DAT_083eaa88 + 0x20) + 0xc0) + 0x80))
              ;
            }
            *(undefined8 *)(lVar1 + 0x20) = 0;
            lVar1 = *(long *)(param_1 + 0x58);
            if (lVar1 != 0) {
              if (*(long *)(lVar1 + 0x10) != 0) {
                FUN_04dedce0((long *)(lVar1 + 0x10),
                             *(undefined8 *)
                              (*(long *)(*(long *)(DAT_083eaa28 + 0x20) + 0xc0) + 0x80));
              }
              *(undefined8 *)(lVar1 + 0x20) = 0;
              lVar1 = *(long *)(param_1 + 0x60);
              if (lVar1 != 0) {
                if (*(long *)(lVar1 + 0x10) != 0) {
                  FUN_04de8a68((long *)(lVar1 + 0x10),
                               *(undefined8 *)
                                (*(long *)(*(long *)(DAT_083ea9e8 + 0x20) + 0xc0) + 0x80));
                }
                *(undefined8 *)(lVar1 + 0x20) = 0;
                lVar1 = *(long *)(param_1 + 0x68);
                if (lVar1 != 0) {
                  if (*(long *)(lVar1 + 0x10) != 0) {
                    FUN_04df2f14((long *)(lVar1 + 0x10),
                                 *(undefined8 *)
                                  (*(long *)(*(long *)(DAT_083eab90 + 0x20) + 0xc0) + 0x80));
                  }
                  *(undefined8 *)(lVar1 + 0x20) = 0;
                  lVar1 = *(long *)(param_1 + 0x70);
                  if (lVar1 != 0) {
                    if (*(long *)(lVar1 + 0x10) != 0) {
                      FUN_04df1ebc((long *)(lVar1 + 0x10),
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(DAT_083eab30 + 0x20) + 0xc0) + 0x80));
                    }
                    *(undefined8 *)(lVar1 + 0x20) = 0;
                    lVar1 = *(long *)(param_1 + 0x130);
                    if (lVar1 != 0) {
                      if (*(long *)(lVar1 + 0x10) != 0) {
                        FUN_04db5e34((long *)(lVar1 + 0x10),
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(DAT_083ea938 + 0x20) + 0xc0) + 0x80));
                      }
                      *(undefined8 *)(lVar1 + 0x20) = 0;
                      lVar1 = *(long *)(param_1 + 0x138);
                      if (lVar1 != 0) {
                        if (*(long *)(lVar1 + 0x10) != 0) {
                          FUN_04df0e5c((long *)(lVar1 + 0x10),
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(DAT_083eaae8 + 0x20) + 0xc0) + 0x80));
                        }
                        *(undefined8 *)(lVar1 + 0x20) = 0;
                        if (*(long *)(param_1 + 0x180) != 0) {
                          FUN_04db5e34(param_1 + 0x180,DAT_083f8dc8);
                        }
                        if (*(long *)(param_1 + 400) != 0) {
                          Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
                                    (param_1 + 400,DAT_083f8af8);
                        }
                        if (*(long *)(param_1 + 0x1a0) != 0) {
                          FUN_04ddd67c(param_1 + 0x1a0,DAT_083f9088);
                        }
                        if (*(long *)(param_1 + 0x1b0) != 0) {
                          FUN_04ddc668(param_1 + 0x1b0,DAT_083f9058);
                        }
                        if (*(long *)(param_1 + 0x1c0) != 0) {
                          FUN_04df1ebc(param_1 + 0x1c0,DAT_083f9240);
                        }
                        if (*(long *)(param_1 + 0x1d0) != 0) {
                          FUN_04db1cc8(param_1 + 0x1d0,DAT_083f8d78);
                        }
                        if ((*(byte *)(*(long *)(DAT_083f9858 + 0x20) + 0x135) & 1) == 0) {
                          FUN_0338f618();
                        }
                        if (*(long *)(param_1 + 0x1e0) != 0) {
                          FUN_04ecfee0((long *)(param_1 + 0x1e0),DAT_083f9848);
                        }
                        if (*(long *)(param_1 + 0x1f0) != 0) {
                          FUN_04deed44(param_1 + 0x1f0,DAT_083f9220);
                        }
                        if (*(long *)(param_1 + 0x200) != 0) {
                          FUN_04df4fe0(param_1 + 0x200,DAT_083f9258);
                        }
                        if (*(long *)(param_1 + 0x210) != 0) {
                          FUN_04df4fe0(param_1 + 0x210,DAT_083f9258);
                        }
                        if (*(long *)(param_1 + 0x230) != 0) {
                          FUN_04db5e34(param_1 + 0x230,DAT_083f8dc8);
                        }
                        if (*(long *)(param_1 + 0x240) != 0) {
                          FUN_04db5e34(param_1 + 0x240,DAT_083f8dc8);
                        }
                        if (*(long *)(param_1 + 0x250) != 0) {
                          FUN_04ddd67c(param_1 + 0x250,DAT_083f9088);
                        }
                        if (*(long *)(param_1 + 0x260) != 0) {
                          FUN_04ddc668(param_1 + 0x260,DAT_083f9058);
                        }
                        if (*(long *)(param_1 + 0x2a0) != 0) {
                          FUN_04db1cc8(param_1 + 0x2a0,DAT_083f8d78);
                        }
                        if (*(long *)(param_1 + 0x2b0) != 0) {
                          FUN_04ddc668(param_1 + 0x2b0,DAT_083f9058);
                        }
                        if (*(long *)(param_1 + 0x2c0) != 0) {
                          FUN_04ddc668(param_1 + 0x2c0,DAT_083f9058);
                        }
                        if (*(long *)(param_1 + 0x2d0) != 0) {
                          FUN_04ddc668(param_1 + 0x2d0,DAT_083f9058);
                        }
                        if (*(long *)(param_1 + 0x2f0) != 0) {
                          FUN_04ed56e4(param_1 + 0x2f0,DAT_083f9a20);
                        }
                        if (*(long *)(param_1 + 0x270) != 0) {
                          FUN_04deed44(param_1 + 0x270,DAT_083f9220);
                        }
                        if (*(long *)(param_1 + 0x280) != 0) {
                          FUN_04df4fe0(param_1 + 0x280,DAT_083f9258);
                        }
                        if (*(long *)(param_1 + 0x290) != 0) {
                          FUN_04df4fe0(param_1 + 0x290,DAT_083f9258);
                        }
                        if (*(long *)(param_1 + 0x220) != 0) {
                          FUN_04dd51d0(param_1 + 0x220,DAT_083f8fc0);
                        }
                        if (*(long *)(param_1 + 0x148) != 0) {
                          FUN_04ed2a80(param_1 + 0x148,DAT_083f99a0);
                        }
                        if (*(long *)(param_1 + 0x158) != 0) {
                          FUN_04ed3f6c(param_1 + 0x158,DAT_083f99f8);
                        }
                        if (*(long *)(param_1 + 0x168) != 0) {
                          FUN_04ed3f6c(param_1 + 0x168,DAT_083f99f8);
                        }
                        if (*(long *)(param_1 + 0x140) == 0) {
                          return;
                        }
                        FUN_062d0054(*(long *)(param_1 + 0x140),0);
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
  FUN_033d1d3c();
}


