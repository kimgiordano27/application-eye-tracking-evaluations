/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$Dispose
ENTRY_POINT: 01264c88
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>__Dispose
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong in_x9;
  long unaff_x19;
  void *unaff_x20;
  size_t unaff_x21;
  void *pvVar8;
  long *plVar9;
  long unaff_x26;
  long unaff_x29;
  undefined4 uVar10;
  
  pvVar8 = (void *)(param_1 - (in_x9 & 0x1fffffff0));
  memcpy(pvVar8,unaff_x20,unaff_x21);
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c();
  }
  uVar4 = thunk_FUN_00d61fa0(lVar3,pvVar8);
  lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
  if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
    lVar3 = FUN_00d5941c(lVar3);
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(lVar3);
  }
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
  uVar1 = *(ushort *)(lVar7 + 0x132);
  lVar3 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_00d5941c(lVar7);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
    uVar1 = *(ushort *)(lVar3 + 0x132);
  }
  plVar9 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x10);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_00d5941c(lVar3);
  }
  puVar2 = StringLiteral_7349;
  plVar5 = *(long **)(*(long *)(lVar3 + 0xb8) + 8);
  if (plVar5 != (long *)0x0) {
    uVar10 = (**(code **)(*plVar5 + 0x198))();
    uVar6 = *(undefined8 *)puVar2;
    *(undefined4 *)(unaff_x29 + -0x68) = uVar10;
    *(undefined4 *)(unaff_x29 + -100) = param_3;
    *(undefined4 *)(unaff_x29 + -0x60) = param_4;
    *(undefined4 *)(unaff_x29 + -0x5c) = param_5;
    uVar6 = thunk_FUN_00d61fa0(uVar6,unaff_x29 + -0x68);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x338))(plVar9,uVar4,uVar6,0,*(undefined8 *)(*plVar9 + 0x340));
      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
      uVar1 = *(ushort *)(lVar7 + 0x132);
      lVar3 = lVar7;
      if ((uVar1 & 1) == 0) {
        lVar7 = FUN_00d5941c(lVar7);
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
        uVar1 = *(ushort *)(lVar3 + 0x132);
      }
      plVar9 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x18);
      if ((uVar1 & 1) == 0) {
        lVar3 = FUN_00d5941c(lVar3);
      }
      plVar5 = *(long **)(*(long *)(lVar3 + 0xb8) + 8);
      if (plVar5 != (long *)0x0) {
        uVar10 = (**(code **)(*plVar5 + 0x198))();
        uVar6 = *(undefined8 *)puVar2;
        *(undefined4 *)(unaff_x29 + -0x78) = uVar10;
        *(undefined4 *)(unaff_x29 + -0x74) = param_3;
        *(undefined4 *)(unaff_x29 + -0x70) = param_4;
        *(undefined4 *)(unaff_x29 + -0x6c) = param_5;
        uVar6 = thunk_FUN_00d61fa0(uVar6,unaff_x29 + -0x78);
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x338))(plVar9,uVar4,uVar6,0,*(undefined8 *)(*plVar9 + 0x340));
          lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
          uVar1 = *(ushort *)(lVar7 + 0x132);
          lVar3 = lVar7;
          if ((uVar1 & 1) == 0) {
            lVar7 = FUN_00d5941c(lVar7);
            lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
            uVar1 = *(ushort *)(lVar3 + 0x132);
          }
          plVar9 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x20);
          if ((uVar1 & 1) == 0) {
            lVar3 = FUN_00d5941c(lVar3);
          }
          plVar5 = *(long **)(*(long *)(lVar3 + 0xb8) + 8);
          if (plVar5 != (long *)0x0) {
            uVar10 = (**(code **)(*plVar5 + 0x198))();
            uVar6 = *(undefined8 *)puVar2;
            *(undefined4 *)(unaff_x29 + -0x88) = uVar10;
            *(undefined4 *)(unaff_x29 + -0x84) = param_3;
            *(undefined4 *)(unaff_x29 + -0x80) = param_4;
            *(undefined4 *)(unaff_x29 + -0x7c) = param_5;
            uVar6 = thunk_FUN_00d61fa0(uVar6,unaff_x29 + -0x88);
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 0x338))(plVar9,uVar4,uVar6,0,*(undefined8 *)(*plVar9 + 0x340));
              lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
              uVar1 = *(ushort *)(lVar7 + 0x132);
              lVar3 = lVar7;
              if ((uVar1 & 1) == 0) {
                lVar7 = FUN_00d5941c(lVar7);
                lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
                uVar1 = *(ushort *)(lVar3 + 0x132);
              }
              plVar9 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x28);
              if ((uVar1 & 1) == 0) {
                lVar3 = FUN_00d5941c(lVar3);
              }
              plVar5 = *(long **)(*(long *)(lVar3 + 0xb8) + 8);
              if (plVar5 != (long *)0x0) {
                uVar10 = (**(code **)(*plVar5 + 0x198))();
                uVar6 = *(undefined8 *)puVar2;
                *(undefined4 *)(unaff_x29 + -0x98) = uVar10;
                *(undefined4 *)(unaff_x29 + -0x94) = param_3;
                *(undefined4 *)(unaff_x29 + -0x90) = param_4;
                *(undefined4 *)(unaff_x29 + -0x8c) = param_5;
                uVar6 = thunk_FUN_00d61fa0(uVar6,unaff_x29 + -0x98);
                if (plVar9 != (long *)0x0) {
                  (**(code **)(*plVar9 + 0x338))
                            (plVar9,uVar4,uVar6,0,*(undefined8 *)(*plVar9 + 0x340));
                  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
                  uVar1 = *(ushort *)(lVar7 + 0x132);
                  lVar3 = lVar7;
                  if ((uVar1 & 1) == 0) {
                    lVar7 = FUN_00d5941c(lVar7);
                    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
                    uVar1 = *(ushort *)(lVar3 + 0x132);
                  }
                  plVar9 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x30);
                  if ((uVar1 & 1) == 0) {
                    lVar3 = FUN_00d5941c(lVar3);
                  }
                  puVar2 = System_Runtime_InteropServices_InAttribute_TypeInfo;
                  if ((long *)**(long **)(lVar3 + 0xb8) != (long *)0x0) {
                    uVar10 = (**(code **)(*(long *)**(long **)(lVar3 + 0xb8) + 0x198))();
                    uVar6 = *(undefined8 *)puVar2;
                    *(undefined4 *)(unaff_x29 + -0x9c) = uVar10;
                    uVar6 = thunk_FUN_00d61fa0(uVar6,unaff_x29 + -0x9c);
                    if (plVar9 != (long *)0x0) {
                      (**(code **)(*plVar9 + 0x338))
                                (plVar9,uVar4,uVar6,0,*(undefined8 *)(*plVar9 + 0x340));
                      lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
                      uVar1 = *(ushort *)(lVar7 + 0x132);
                      lVar3 = lVar7;
                      if ((uVar1 & 1) == 0) {
                        lVar7 = FUN_00d5941c(lVar7);
                        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18);
                        uVar1 = *(ushort *)(lVar3 + 0x132);
                      }
                      plVar9 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x38);
                      if ((uVar1 & 1) == 0) {
                        lVar3 = FUN_00d5941c(lVar3);
                      }
                      if ((long *)**(long **)(lVar3 + 0xb8) != (long *)0x0) {
                        uVar10 = (**(code **)(*(long *)**(long **)(lVar3 + 0xb8) + 0x198))();
                        uVar6 = *(undefined8 *)puVar2;
                        *(undefined4 *)(unaff_x29 + -0xa0) = uVar10;
                        uVar6 = thunk_FUN_00d61fa0(uVar6,unaff_x29 + -0xa0);
                        if (plVar9 != (long *)0x0) {
                          (**(code **)(*plVar9 + 0x338))
                                    (plVar9,uVar4,uVar6,0,*(undefined8 *)(*plVar9 + 0x340));
                          lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
                          if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
                            lVar3 = FUN_00d5941c(lVar3);
                          }
                          pvVar8 = (void *)FUN_00da5060(uVar4,lVar3,
                                                        (long)pvVar8 - (in_x9 & 0x1fffffff0));
                          memcpy(unaff_x20,pvVar8,unaff_x21);
                          if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8
                                                  ) + 0x132) & 1) == 0) {
                            FUN_00d5941c();
                          }
                          if (*(long *)(unaff_x26 + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
                            __stack_chk_fail();
                          }
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


